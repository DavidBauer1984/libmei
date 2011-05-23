/*
 *  meidocument.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/11/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include "meidocument.h"

#include <libxml/xmlreader.h>

#include "meielement.h"

using std::vector;

MeiDocument::MeiDocument(string docname, string encoding) {
	this->docname = docname;
	this->encoding = encoding;
}

string MeiDocument::getDocName() {
	return docname;
}

void MeiDocument::setDocName(string docname) {
    this->docname = docname;
}

string MeiDocument::getEncoding() {
	return encoding;
}

void MeiDocument::setEncoding(string encoding) {
	this->encoding = encoding;
}

MeiElement* MeiDocument::getRootElement() {
	return root;
}

void MeiDocument::setRootElement(MeiElement* root) {
	this->root = root;
}

MeiDocument* MeiDocument::ReadFromXml(string docname, string encoding) {
    printf("read from xml\n");
	xmlDoc *doc = NULL;
	xmlNode *rootelement = NULL;
    xmlAttr* rootattr = NULL;
    const xmlChar* attrname;
    xmlNode* attrvalue = NULL;
    xmlNs* rootxmlns = NULL;
	
    doc = xmlReadFile(docname.c_str(), NULL, 0);
	rootelement = xmlDocGetRootElement(doc);
    
    rootxmlns = rootelement->ns; 
	const xmlChar* roothref = rootxmlns->href;
	const xmlChar* rootprefix = rootxmlns->prefix;
	MeiNs ns;
		
	if (roothref != NULL) {
		ns.href = (const char*)roothref;
	}
	if (rootprefix !=NULL) {
        ns.prefix = (const char*)rootprefix;
	}
    
	MeiElement* meiroot = new MeiElement((const char *)rootelement->name, ns);
	
	for (rootattr = rootelement->properties; rootattr; rootattr = rootattr->next) {
        if (rootattr->type == XML_ATTRIBUTE_NODE) {
            attrname = rootattr->name;
            if (rootattr->children != NULL) {
                attrvalue = rootattr->children;
                string name = (const char *)(attrname);
                string value = (const char *)(attrvalue->content);
                MeiAttribute rootmeiattr = MeiAttribute(name, value);
                meiroot->addAttribute(rootmeiattr);
            }
        }
    }
    
    MeiDocument::XmlNodeToMei(rootelement->children, meiroot, meiroot);
	xmlFreeDoc(doc);
    
    MeiDocument* meidoc = new MeiDocument(docname, encoding);
    meidoc->setRootElement(meiroot);
    
    return meidoc;
}

void MeiDocument::WriteToXml(MeiDocument* meidoc) {
    xmlDocPtr xmldoc = NULL;
    xmlNodePtr xmlrootnode = NULL;
    xmlAttrPtr xmlrootattr = NULL;
    xmlNsPtr xmlcurns = NULL;

    MeiElement* root = meidoc->getRootElement();
	MeiNs ns = root->getNs();
    
    xmldoc = xmlNewDoc ((const xmlChar*)"1.0");
	
	// create root node
    xmlrootnode = xmlNewNode(xmlcurns, (const xmlChar*)root->getName().c_str());
    xmlDocSetRootElement(xmldoc, xmlrootnode);
    
    // add namespaces to the node
    string nodehref = ns.href;
    string nodeprefix = ns.prefix;
	xmlChar* href = (xmlChar*)(ns.href.c_str());
	xmlChar* prefix = NULL;
	if (nodeprefix != "") { //due to uninitialized string
		prefix = (xmlChar*)(ns.prefix.c_str());
	}		
	
	xmlcurns = xmlNewNs (xmlrootnode, href, prefix);
	xmlSetNs(xmlrootnode, xmlcurns);
    
	// add attributes to the node
    vector<MeiAttribute> attributes = root->getAttributes();
    for (vector<MeiAttribute>::iterator iter = attributes.begin(); iter !=attributes.end(); ++iter) {
        string attrname = iter->getName();
        string attrvalue = iter->getValue();
        xmlrootattr = xmlNewNsProp(xmlrootnode, xmlcurns, (const xmlChar*)attrname.c_str(), (const xmlChar*)attrvalue.c_str());
    }
    
    MeiToXmlNode (*root, xmlrootnode, xmlrootnode, xmldoc); // fill the XML tree with xmlrootnode as the root element
    xmlSaveFormatFile((const char*)meidoc->getDocName().c_str(), xmldoc, 1);
}

// Private method used to go through the tree structure, get the nodes and create MeiElements
void MeiDocument::XmlNodeToMei(xmlNode* node, MeiElement *parent, MeiElement *root) {
	xmlNode* curnode = NULL;
    xmlAttr* curattr = NULL;
    const xmlChar* attrname;
	const xmlChar* attrprefix;
    xmlNode* attrvalue = NULL;
    xmlNs* xmlns = NULL;
	
	//need to consider curnode->nsDef and add an attribute with the appropriate name
	
    for (curnode = node; curnode; curnode = curnode->next) {
        if (curnode->type == XML_ELEMENT_NODE) {
            
            xmlns = curnode->ns;
			const xmlChar* childhref = xmlns->href;
			const xmlChar* childprefix = xmlns->prefix;
			MeiNs ns;
			if (childhref != NULL) {
				ns.href = (const char*)childhref;
			}
			if (childprefix != NULL) {
				ns.prefix = (const char*)childprefix;
			}
            
            MeiElement* child = new MeiElement((const char *)curnode->name, ns);
			
			if (curnode->nsDef != NULL) {
				if (curnode->nsDef->href != NULL && curnode->nsDef->prefix != NULL) {
					string prefix = (const char*)(curnode->nsDef->prefix);
					string href = (const char*)(curnode->nsDef->href);
					MeiAttribute attribute = MeiAttribute(prefix,href);
					if (curnode->nsDef->next != NULL) { //not correct, supposed to pick up the prefix of the namespace declaration, as in xmlns:xlink->xmlns
						string context = (const char*)(curnode->nsDef->next->prefix);
						attribute.setPrefix(context);
					}
					root->addAttribute(attribute);
				}
			}
			
            if (curnode->properties != NULL) {                
                for (curattr = curnode->properties; curattr; curattr = curattr->next) {
                    if (curattr->type == XML_ATTRIBUTE_NODE) {
                        attrname = curattr->name;
                        if (curattr->children != NULL) {
							attrvalue = curattr->children;
							if (curattr->atype == XML_ATTRIBUTE_ID) {
								string ID = (const char *)(attrvalue->content);
								child->setId(ID);
							} else {
								string name = (const char *)(attrname);
								string value = (const char *)(attrvalue->content);
								MeiAttribute curmeiattr = MeiAttribute(name, value);
								if (curattr->ns != NULL) {
									if (curattr->ns->prefix != NULL) {
									attrprefix = curattr->ns->prefix;
									string prefix = (const char*)attrprefix;
									curmeiattr.setPrefix(prefix);
									}
								}
                            child->addAttribute(curmeiattr);
							}
                        }
                    }					
                }
            }
            XmlNodeToMei(curnode->children, child, root);
            parent->addChild(*child);
        }
	}
}

void MeiDocument::MeiToXmlNode(MeiElement meiparent, xmlNodePtr xmlparent, xmlNodePtr xmlroot, xmlDoc* doc) {
    vector<MeiElement> meichildren = meiparent.getChildren();
    xmlNodePtr curxmlnode = NULL;
    xmlAttrPtr curxmlattr = NULL;
    xmlNsPtr   curxmlns   = NULL; 
    
    // run through children
    for (vector<MeiElement>::iterator iter = meichildren.begin(); iter != meichildren.end(); ++iter) {
        string nodename=iter->getName();
        curxmlnode = xmlNewNode(curxmlns, (const xmlChar*)nodename.c_str());
        curxmlnode = xmlAddChild(xmlparent, curxmlnode);
		
		// add namespaces
		MeiNs ns = iter->getNs();
		string nodehref = ns.href;
		string nodeprefix = ns.prefix;
        
        const char* nodehrefc = nodehref.c_str();
        
        curxmlns = xmlSearchNsByHref(doc, curxmlnode, (const xmlChar*)nodehrefc);
        
        if(curxmlns==NULL) {
			if (ns.prefix == "") { //since empty prefixes are not allowed
				curxmlns = xmlNewNs (xmlroot, (const xmlChar*)nodehref.c_str(), NULL);
			} else {
				curxmlns = xmlNewNs (xmlroot, (const xmlChar*)nodehref.c_str(), (const xmlChar*)nodeprefix.c_str());
			}
        }
		
		xmlSetNs(curxmlnode, curxmlns);
		
		string ID = iter->getId();
		if (ID != "") {
			curxmlattr = xmlNewNsProp(curxmlnode, curxmlns, (const xmlChar*)"xml:id", (const xmlChar*)ID.c_str());
			curxmlattr->atype = XML_ATTRIBUTE_ID;
		}
        
		// add attributes to each child
        vector<MeiAttribute> attributes = iter->getAttributes();
        for (vector<MeiAttribute>::iterator itera = attributes.begin(); itera !=attributes.end(); ++itera) {
            string attrname = itera->getName();
			if (attrname != "xml:id") {
				string attrvalue = itera->getValue();
				string attrprefix = itera->getPrefix();
				if (attrprefix != "") {
					curxmlns = xmlNewNs (xmlroot, NULL, (const xmlChar*)attrprefix.c_str());
					curxmlattr = xmlNewNsProp(curxmlnode, curxmlns, (const xmlChar*)attrname.c_str(), (const xmlChar*)attrvalue.c_str());
				} else {
					curxmlattr = xmlNewProp(curxmlnode, (const xmlChar*)attrname.c_str(), (const xmlChar*)attrvalue.c_str());
				}
			}
		}
        if (iter->getChildren().size() > 0) {
		MeiToXmlNode(*iter, curxmlnode, xmlroot, doc);
        }
    }
}