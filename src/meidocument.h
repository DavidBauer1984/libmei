/*
    Copyright (c) 2011-2012 Andrew Hankinson, Alastair Porter and Others

    Permission is hereby granted, free of charge, to any person obtaining
    a copy of this software and associated documentation files (the
    "Software"), to deal in the Software without restriction, including
    without limitation the rights to use, copy, modify, merge, publish,
    distribute, sublicense, and/or sell copies of the Software, and to
    permit persons to whom the Software is furnished to do so, subject to
    the following conditions:

    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/


#ifndef MEIDOCUMENT_H_
#define MEIDOCUMENT_H_

#include <string>
#include <vector>
#include <map>
#include "meicommon.h"
#include "meielement.h"
#include "meinamespace.h"

namespace mei {

/** \brief The entity which will contains all the elements and attributes
 *         storing a musical piece in the MEI schema.
 *
 * An MeiDocument is the first entity created or used when reading and writing MEI files.
 * All musical information for a piece is stored as a tree of MeiElements within the MeiDocument.
 * The document itself contains a name and an encoding, both of which are needed to identify it.
 * MeiDocuments can be written to and Read from XML.
 */
class MEI_EXPORT MeiDocument {
    public:
        /**
         * \brief Create a new document.
         */
        MeiDocument(std::string meiVers = *--MEI_VERSION.end());
        ~MeiDocument();

        bool hasNamespace(std::string href);
        bool hasNamespacePrefix(std::string href);
        MeiNamespace* getNamespace(std::string href);
        MeiNamespace* getNamespaceByPrefix(std::string prefix);
        std::vector<MeiNamespace*> getNamespaces();
        void addNamespace(MeiNamespace* ns);

        std::string getVersion();

        /** \brief Find the root element of the tree structure in the Mei document*/
        MeiElement* getRootElement();

        /** \brief Make an Mei element the Root element of a document*/
        void setRootElement(MeiElement* root);

        /** \brief Get the element with the given ID.
         *
         *  \return The Mei element with the given id, or NULL if
         *   the element doesn't exist
         */
        MeiElement* getElementById(std::string id);

        /** \brief Get the elements with a given name
         *
         *  \return A vector of MeiElements
         *
         */
        std::vector<MeiElement*> getElementsByName(std::string name);

        /** \brief Gets an element's position in the flattened
         *      tree representation.
         */
        int getPositionInDocument(MeiElement* element);

        void addIdMap(std::string, MeiElement*);
        void rmIdMap(std::string id);

        /** \brief Returns the flattened document tree */
        const std::vector<MeiElement*> &getFlattenedTree();
        
        /** \brief Returns the most immediate previous element elName, given a starting point
         */
        MeiElement* lookBack(MeiElement* from, std::string name);

    private:
        /** \brief Flattens the current document tree
         *
         * For now, this function naively updates the flattened document tree by re-initializing the vector.
         * Based on performance constraints, this can be optimized accordingly
         */
        friend void MeiElement::updateDocument();
        void updateFlattenedTree();

        MeiElement* getElementById(std::string id, MeiElement* from);
        /** The version of this MEI document. */
        std::string meiVersion;
        MeiElement* root;

        std::vector<MeiNamespace*> namespaces;

        std::map<std::string, MeiElement*> idMap;
        std::vector<MeiElement*> flattenedDoc;
    };
}
#endif  // MEIDOCUMENT_H_
