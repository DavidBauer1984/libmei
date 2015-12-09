#include "header.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::AccessRestrict::AccessRestrict() :
    MeiElement("accessRestrict"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::AccessRestrict, "accessRestrict");
mei::AccessRestrict::~AccessRestrict() {}
mei::AccessRestrict::AccessRestrict(const AccessRestrict& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <accessRestrict> */

mei::AcqSource::AcqSource() :
    MeiElement("acqSource"),
    m_Bibl(this),
    m_Common(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::AcqSource, "acqSource");
mei::AcqSource::~AcqSource() {}
mei::AcqSource::AcqSource(const AcqSource& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_Lang(this)
{
}

/* include <acqSource> */

mei::AltId::AltId() :
    MeiElement("altId"),
    m_Bibl(this),
    m_Common(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::AltId, "altId");
mei::AltId::~AltId() {}
mei::AltId::AltId(const AltId& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_Typed(this)
{
}

/* include <altId> */

mei::AppInfo::AppInfo() :
    MeiElement("appInfo"),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::AppInfo, "appInfo");
mei::AppInfo::~AppInfo() {}
mei::AppInfo::AppInfo(const AppInfo& other) :
    MeiElement(other),
    m_Common(this)
{
}

/* include <appInfo> */

mei::Application::Application() :
    MeiElement("application"),
    m_Common(this),
    m_Datable(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Application, "application");
mei::Application::~Application() {}
mei::Application::Application(const Application& other) :
    MeiElement(other),
    m_Common(this),
    m_Datable(this),
    m_Typed(this)
{
}

MeiAttribute* mei::Application::getVersion() {
    if (!hasAttribute("version")) {
        return NULL;
    }
    return getAttribute("version");
};

void mei::Application::setVersion(std::string _version) {
    MeiAttribute *a = new MeiAttribute("version", _version);
    addAttribute(a);
};

bool mei::Application::hasVersion() {
    return hasAttribute("version");
};

void mei::Application::removeVersion() {
    removeAttribute("version");
};
/* include <application> */

mei::Audience::Audience() :
    MeiElement("audience"),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::Audience, "audience");
mei::Audience::~Audience() {}
mei::Audience::Audience(const Audience& other) :
    MeiElement(other),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}

/* include <audience> */

mei::Availability::Availability() :
    MeiElement("availability"),
    m_Bibl(this),
    m_Common(this),
    m_Datapointing(this)
{
}
REGISTER_DEFINITION(mei::Availability, "availability");
mei::Availability::~Availability() {}
mei::Availability::Availability(const Availability& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_Datapointing(this)
{
}

/* include <availability> */

mei::CaptureMode::CaptureMode() :
    MeiElement("captureMode"),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::CaptureMode, "captureMode");
mei::CaptureMode::~CaptureMode() {}
mei::CaptureMode::CaptureMode(const CaptureMode& other) :
    MeiElement(other),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}

/* include <captureMode> */

mei::CarrierForm::CarrierForm() :
    MeiElement("carrierForm"),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::CarrierForm, "carrierForm");
mei::CarrierForm::~CarrierForm() {}
mei::CarrierForm::CarrierForm(const CarrierForm& other) :
    MeiElement(other),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}

/* include <carrierForm> */

mei::Change::Change() :
    MeiElement("change"),
    m_Common(this),
    m_Bibl(this),
    m_Datable(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Change, "change");
mei::Change::~Change() {}
mei::Change::Change(const Change& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Datable(this),
    m_Responsibility(this)
{
}

/* include <change> */

mei::ChangeDesc::ChangeDesc() :
    MeiElement("changeDesc"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::ChangeDesc, "changeDesc");
mei::ChangeDesc::~ChangeDesc() {}
mei::ChangeDesc::ChangeDesc(const ChangeDesc& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <changeDesc> */

mei::ClassCode::ClassCode() :
    MeiElement("classCode"),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::ClassCode, "classCode");
mei::ClassCode::~ClassCode() {}
mei::ClassCode::ClassCode(const ClassCode& other) :
    MeiElement(other),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}

/* include <classCode> */

mei::Classification::Classification() :
    MeiElement("classification"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this)
{
}
REGISTER_DEFINITION(mei::Classification, "classification");
mei::Classification::~Classification() {}
mei::Classification::Classification(const Classification& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this)
{
}

/* include <classification> */

mei::Condition::Condition() :
    MeiElement("condition"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Condition, "condition");
mei::Condition::~Condition() {}
mei::Condition::Condition(const Condition& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <condition> */

mei::ContentItem::ContentItem() :
    MeiElement("contentItem"),
    m_Bibl(this),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::ContentItem, "contentItem");
mei::ContentItem::~ContentItem() {}
mei::ContentItem::ContentItem(const ContentItem& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this)
{
}

/* include <contentItem> */

mei::Contents::Contents() :
    MeiElement("contents"),
    m_Common(this),
    m_Bibl(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::Contents, "contents");
mei::Contents::~Contents() {}
mei::Contents::Contents(const Contents& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Pointing(this)
{
}

/* include <contents> */

mei::Context::Context() :
    MeiElement("context"),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::Context, "context");
mei::Context::~Context() {}
mei::Context::Context(const Context& other) :
    MeiElement(other),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}

/* include <context> */

mei::Correction::Correction() :
    MeiElement("correction"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this),
    m_Regularmethod(this)
{
}
REGISTER_DEFINITION(mei::Correction, "correction");
mei::Correction::~Correction() {}
mei::Correction::Correction(const Correction& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this),
    m_Regularmethod(this)
{
}

MeiAttribute* mei::Correction::getCorrlevel() {
    if (!hasAttribute("corrlevel")) {
        return NULL;
    }
    return getAttribute("corrlevel");
};

void mei::Correction::setCorrlevel(std::string _corrlevel) {
    MeiAttribute *a = new MeiAttribute("corrlevel", _corrlevel);
    addAttribute(a);
};

bool mei::Correction::hasCorrlevel() {
    return hasAttribute("corrlevel");
};

void mei::Correction::removeCorrlevel() {
    removeAttribute("corrlevel");
};
/* include <correction> */

mei::Dimensions::Dimensions() :
    MeiElement("dimensions"),
    m_Common(this),
    m_Bibl(this),
    m_Measurement(this)
{
}
REGISTER_DEFINITION(mei::Dimensions, "dimensions");
mei::Dimensions::~Dimensions() {}
mei::Dimensions::Dimensions(const Dimensions& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Measurement(this)
{
}

/* include <dimensions> */

mei::EditionStmt::EditionStmt() :
    MeiElement("editionStmt"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::EditionStmt, "editionStmt");
mei::EditionStmt::~EditionStmt() {}
mei::EditionStmt::EditionStmt(const EditionStmt& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <editionStmt> */

mei::EditorialDecl::EditorialDecl() :
    MeiElement("editorialDecl"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::EditorialDecl, "editorialDecl");
mei::EditorialDecl::~EditorialDecl() {}
mei::EditorialDecl::EditorialDecl(const EditorialDecl& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}

/* include <editorialDecl> */

mei::EncodingDesc::EncodingDesc() :
    MeiElement("encodingDesc"),
    m_Bibl(this),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::EncodingDesc, "encodingDesc");
mei::EncodingDesc::~EncodingDesc() {}
mei::EncodingDesc::EncodingDesc(const EncodingDesc& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this)
{
}

/* include <encodingDesc> */

mei::Ensemble::Ensemble() :
    MeiElement("ensemble"),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this),
    m_Coded(this)
{
}
REGISTER_DEFINITION(mei::Ensemble, "ensemble");
mei::Ensemble::~Ensemble() {}
mei::Ensemble::Ensemble(const Ensemble& other) :
    MeiElement(other),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this),
    m_Coded(this)
{
}

/* include <ensemble> */

mei::Event::Event() :
    MeiElement("event"),
    m_Bibl(this),
    m_Calendared(this),
    m_Common(this),
    m_Datable(this),
    m_Edit(this),
    m_Responsibility(this),
    m_Source(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Event, "event");
mei::Event::~Event() {}
mei::Event::Event(const Event& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Calendared(this),
    m_Common(this),
    m_Datable(this),
    m_Edit(this),
    m_Responsibility(this),
    m_Source(this),
    m_Lang(this)
{
}

/* include <event> */

mei::EventList::EventList() :
    MeiElement("eventList"),
    m_Bibl(this),
    m_Common(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::EventList, "eventList");
mei::EventList::~EventList() {}
mei::EventList::EventList(const EventList& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_Typed(this)
{
}

/* include <eventList> */

mei::ExhibHist::ExhibHist() :
    MeiElement("exhibHist"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::ExhibHist, "exhibHist");
mei::ExhibHist::~ExhibHist() {}
mei::ExhibHist::ExhibHist(const ExhibHist& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <exhibHist> */

mei::FileChar::FileChar() :
    MeiElement("fileChar"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::FileChar, "fileChar");
mei::FileChar::~FileChar() {}
mei::FileChar::FileChar(const FileChar& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this)
{
}

/* include <fileChar> */

mei::FileDesc::FileDesc() :
    MeiElement("fileDesc"),
    m_Bibl(this),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::FileDesc, "fileDesc");
mei::FileDesc::~FileDesc() {}
mei::FileDesc::FileDesc(const FileDesc& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this)
{
}

/* include <fileDesc> */

mei::Fingerprint::Fingerprint() :
    MeiElement("fingerprint"),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::Fingerprint, "fingerprint");
mei::Fingerprint::~Fingerprint() {}
mei::Fingerprint::Fingerprint(const Fingerprint& other) :
    MeiElement(other),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}

/* include <fingerprint> */

mei::Hand::Hand() :
    MeiElement("hand"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this),
    m_Medium(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Hand, "hand");
mei::Hand::~Hand() {}
mei::Hand::Hand(const Hand& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this),
    m_Medium(this),
    m_Responsibility(this)
{
}

MeiAttribute* mei::Hand::getInitial() {
    if (!hasAttribute("initial")) {
        return NULL;
    }
    return getAttribute("initial");
};

void mei::Hand::setInitial(std::string _initial) {
    MeiAttribute *a = new MeiAttribute("initial", _initial);
    addAttribute(a);
};

bool mei::Hand::hasInitial() {
    return hasAttribute("initial");
};

void mei::Hand::removeInitial() {
    removeAttribute("initial");
};
/* include <hand> */

mei::HandList::HandList() :
    MeiElement("handList"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::HandList, "handList");
mei::HandList::~HandList() {}
mei::HandList::HandList(const HandList& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this)
{
}

/* include <handList> */

mei::History::History() :
    MeiElement("history"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::History, "history");
mei::History::~History() {}
mei::History::History(const History& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this)
{
}

/* include <history> */

mei::IncipCode::IncipCode() :
    MeiElement("incipCode"),
    m_Common(this),
    m_Bibl(this),
    m_Internetmedia(this),
    m_Pointing(this),
    m_Whitespace(this)
{
}
REGISTER_DEFINITION(mei::IncipCode, "incipCode");
mei::IncipCode::~IncipCode() {}
mei::IncipCode::IncipCode(const IncipCode& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Internetmedia(this),
    m_Pointing(this),
    m_Whitespace(this)
{
}

MeiAttribute* mei::IncipCode::getForm() {
    if (!hasAttribute("form")) {
        return NULL;
    }
    return getAttribute("form");
};

void mei::IncipCode::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    addAttribute(a);
};

bool mei::IncipCode::hasForm() {
    return hasAttribute("form");
};

void mei::IncipCode::removeForm() {
    removeAttribute("form");
};
/* include <incipCode> */

mei::IncipText::IncipText() :
    MeiElement("incipText"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this),
    m_Pointing(this),
    m_Internetmedia(this)
{
}
REGISTER_DEFINITION(mei::IncipText, "incipText");
mei::IncipText::~IncipText() {}
mei::IncipText::IncipText(const IncipText& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this),
    m_Pointing(this),
    m_Internetmedia(this)
{
}

/* include <incipText> */

mei::Inscription::Inscription() :
    MeiElement("inscription"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Inscription, "inscription");
mei::Inscription::~Inscription() {}
mei::Inscription::Inscription(const Inscription& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <inscription> */

mei::InstrVoice::InstrVoice() :
    MeiElement("instrVoice"),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this),
    m_Coded(this)
{
}
REGISTER_DEFINITION(mei::InstrVoice, "instrVoice");
mei::InstrVoice::~InstrVoice() {}
mei::InstrVoice::InstrVoice(const InstrVoice& other) :
    MeiElement(other),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this),
    m_Coded(this)
{
}

MeiAttribute* mei::InstrVoice::getCount() {
    if (!hasAttribute("count")) {
        return NULL;
    }
    return getAttribute("count");
};

void mei::InstrVoice::setCount(std::string _count) {
    MeiAttribute *a = new MeiAttribute("count", _count);
    addAttribute(a);
};

bool mei::InstrVoice::hasCount() {
    return hasAttribute("count");
};

void mei::InstrVoice::removeCount() {
    removeAttribute("count");
};
MeiAttribute* mei::InstrVoice::getSolo() {
    if (!hasAttribute("solo")) {
        return NULL;
    }
    return getAttribute("solo");
};

void mei::InstrVoice::setSolo(std::string _solo) {
    MeiAttribute *a = new MeiAttribute("solo", _solo);
    addAttribute(a);
};

bool mei::InstrVoice::hasSolo() {
    return hasAttribute("solo");
};

void mei::InstrVoice::removeSolo() {
    removeAttribute("solo");
};
/* include <instrVoice> */

mei::InstrVoiceGrp::InstrVoiceGrp() :
    MeiElement("instrVoiceGrp"),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this),
    m_Coded(this)
{
}
REGISTER_DEFINITION(mei::InstrVoiceGrp, "instrVoiceGrp");
mei::InstrVoiceGrp::~InstrVoiceGrp() {}
mei::InstrVoiceGrp::InstrVoiceGrp(const InstrVoiceGrp& other) :
    MeiElement(other),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this),
    m_Coded(this)
{
}

/* include <instrVoiceGrp> */

mei::Instrumentation::Instrumentation() :
    MeiElement("instrumentation"),
    m_Common(this),
    m_Bibl(this),
    m_Authorized(this)
{
}
REGISTER_DEFINITION(mei::Instrumentation, "instrumentation");
mei::Instrumentation::~Instrumentation() {}
mei::Instrumentation::Instrumentation(const Instrumentation& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Authorized(this)
{
}

/* include <instrumentation> */

mei::Interpretation::Interpretation() :
    MeiElement("interpretation"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Interpretation, "interpretation");
mei::Interpretation::~Interpretation() {}
mei::Interpretation::Interpretation(const Interpretation& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}

/* include <interpretation> */

mei::Key::Key() :
    MeiElement("key"),
    m_Common(this),
    m_Bibl(this),
    m_KeySigLog(this),
    m_Accidental(this),
    m_Pitch(this)
{
}
REGISTER_DEFINITION(mei::Key, "key");
mei::Key::~Key() {}
mei::Key::Key(const Key& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_KeySigLog(this),
    m_Accidental(this),
    m_Pitch(this)
{
}

/* include <key> */

mei::LangUsage::LangUsage() :
    MeiElement("langUsage"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this)
{
}
REGISTER_DEFINITION(mei::LangUsage, "langUsage");
mei::LangUsage::~LangUsage() {}
mei::LangUsage::LangUsage(const LangUsage& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this)
{
}

/* include <langUsage> */

mei::Language::Language() :
    MeiElement("language"),
    m_Common(this),
    m_Bibl(this),
    m_Authorized(this)
{
}
REGISTER_DEFINITION(mei::Language, "language");
mei::Language::~Language() {}
mei::Language::Language(const Language& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Authorized(this)
{
}

/* include <language> */

mei::MeiHead::MeiHead() :
    MeiElement("meiHead"),
    m_Bibl(this),
    m_Common(this),
    m_Lang(this),
    m_Meiversion(this)
{
}
REGISTER_DEFINITION(mei::MeiHead, "meiHead");
mei::MeiHead::~MeiHead() {}
mei::MeiHead::MeiHead(const MeiHead& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_Lang(this),
    m_Meiversion(this)
{
}

MeiAttribute* mei::MeiHead::getType() {
    if (!hasAttribute("type")) {
        return NULL;
    }
    return getAttribute("type");
};

void mei::MeiHead::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::MeiHead::hasType() {
    return hasAttribute("type");
};

void mei::MeiHead::removeType() {
    removeAttribute("type");
};
/* include <meiHead> */

mei::Mensuration::Mensuration() :
    MeiElement("mensuration"),
    m_Common(this),
    m_Bibl(this),
    m_MensurLog(this),
    m_DurationRatio(this),
    m_Slashcount(this),
    m_MensuralShared(this)
{
}
REGISTER_DEFINITION(mei::Mensuration, "mensuration");
mei::Mensuration::~Mensuration() {}
mei::Mensuration::Mensuration(const Mensuration& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_MensurLog(this),
    m_DurationRatio(this),
    m_Slashcount(this),
    m_MensuralShared(this)
{
}

/* include <mensuration> */

mei::Meter::Meter() :
    MeiElement("meter"),
    m_Common(this),
    m_Bibl(this),
    m_MeterSigLog(this)
{
}
REGISTER_DEFINITION(mei::Meter, "meter");
mei::Meter::~Meter() {}
mei::Meter::Meter(const Meter& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_MeterSigLog(this)
{
}

/* include <meter> */

mei::Normalization::Normalization() :
    MeiElement("normalization"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this),
    m_Regularmethod(this)
{
}
REGISTER_DEFINITION(mei::Normalization, "normalization");
mei::Normalization::~Normalization() {}
mei::Normalization::Normalization(const Normalization& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this),
    m_Regularmethod(this)
{
}

/* include <normalization> */

mei::NotesStmt::NotesStmt() :
    MeiElement("notesStmt"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::NotesStmt, "notesStmt");
mei::NotesStmt::~NotesStmt() {}
mei::NotesStmt::NotesStmt(const NotesStmt& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this)
{
}

/* include <notesStmt> */

mei::OtherChar::OtherChar() :
    MeiElement("otherChar"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::OtherChar, "otherChar");
mei::OtherChar::~OtherChar() {}
mei::OtherChar::OtherChar(const OtherChar& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this)
{
}

/* include <otherChar> */

mei::PerfMedium::PerfMedium() :
    MeiElement("perfMedium"),
    m_Common(this),
    m_Bibl(this),
    m_Authorized(this)
{
}
REGISTER_DEFINITION(mei::PerfMedium, "perfMedium");
mei::PerfMedium::~PerfMedium() {}
mei::PerfMedium::PerfMedium(const PerfMedium& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Authorized(this)
{
}

/* include <perfMedium> */

mei::PhysDesc::PhysDesc() :
    MeiElement("physDesc"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::PhysDesc, "physDesc");
mei::PhysDesc::~PhysDesc() {}
mei::PhysDesc::PhysDesc(const PhysDesc& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this)
{
}

/* include <physDesc> */

mei::PhysMedium::PhysMedium() :
    MeiElement("physMedium"),
    m_Common(this),
    m_Bibl(this),
    m_Authorized(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::PhysMedium, "physMedium");
mei::PhysMedium::~PhysMedium() {}
mei::PhysMedium::PhysMedium(const PhysMedium& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Authorized(this),
    m_Lang(this)
{
}

/* include <physMedium> */

mei::PlateNum::PlateNum() :
    MeiElement("plateNum"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::PlateNum, "plateNum");
mei::PlateNum::~PlateNum() {}
mei::PlateNum::PlateNum(const PlateNum& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}

/* include <plateNum> */

mei::PlayingSpeed::PlayingSpeed() :
    MeiElement("playingSpeed"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::PlayingSpeed, "playingSpeed");
mei::PlayingSpeed::~PlayingSpeed() {}
mei::PlayingSpeed::PlayingSpeed(const PlayingSpeed& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this)
{
}

/* include <playingSpeed> */

mei::Price::Price() :
    MeiElement("price"),
    m_Common(this),
    m_Bibl(this),
    m_Measurement(this)
{
}
REGISTER_DEFINITION(mei::Price, "price");
mei::Price::~Price() {}
mei::Price::Price(const Price& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Measurement(this)
{
}

/* include <price> */

mei::ProjectDesc::ProjectDesc() :
    MeiElement("projectDesc"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::ProjectDesc, "projectDesc");
mei::ProjectDesc::~ProjectDesc() {}
mei::ProjectDesc::ProjectDesc(const ProjectDesc& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}

/* include <projectDesc> */

mei::Provenance::Provenance() :
    MeiElement("provenance"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Provenance, "provenance");
mei::Provenance::~Provenance() {}
mei::Provenance::Provenance(const Provenance& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <provenance> */

mei::PubStmt::PubStmt() :
    MeiElement("pubStmt"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::PubStmt, "pubStmt");
mei::PubStmt::~PubStmt() {}
mei::PubStmt::PubStmt(const PubStmt& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this)
{
}

/* include <pubStmt> */

mei::RevisionDesc::RevisionDesc() :
    MeiElement("revisionDesc"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::RevisionDesc, "revisionDesc");
mei::RevisionDesc::~RevisionDesc() {}
mei::RevisionDesc::RevisionDesc(const RevisionDesc& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this)
{
}

/* include <revisionDesc> */

mei::SamplingDecl::SamplingDecl() :
    MeiElement("samplingDecl"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::SamplingDecl, "samplingDecl");
mei::SamplingDecl::~SamplingDecl() {}
mei::SamplingDecl::SamplingDecl(const SamplingDecl& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}

/* include <samplingDecl> */

mei::ScoreFormat::ScoreFormat() :
    MeiElement("scoreFormat"),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::ScoreFormat, "scoreFormat");
mei::ScoreFormat::~ScoreFormat() {}
mei::ScoreFormat::ScoreFormat(const ScoreFormat& other) :
    MeiElement(other),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}

/* include <scoreFormat> */

mei::Segmentation::Segmentation() :
    MeiElement("segmentation"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Segmentation, "segmentation");
mei::Segmentation::~Segmentation() {}
mei::Segmentation::Segmentation(const Segmentation& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}

/* include <segmentation> */

mei::SeriesStmt::SeriesStmt() :
    MeiElement("seriesStmt"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::SeriesStmt, "seriesStmt");
mei::SeriesStmt::~SeriesStmt() {}
mei::SeriesStmt::SeriesStmt(const SeriesStmt& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this)
{
}

/* include <seriesStmt> */

mei::SoundChan::SoundChan() :
    MeiElement("soundChan"),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::SoundChan, "soundChan");
mei::SoundChan::~SoundChan() {}
mei::SoundChan::SoundChan(const SoundChan& other) :
    MeiElement(other),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}

/* include <soundChan> */

mei::Source::Source() :
    MeiElement("source"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::Source, "source");
mei::Source::~Source() {}
mei::Source::Source(const Source& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Pointing(this)
{
}

/* include <source> */

mei::SourceDesc::SourceDesc() :
    MeiElement("sourceDesc"),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::SourceDesc, "sourceDesc");
mei::SourceDesc::~SourceDesc() {}
mei::SourceDesc::SourceDesc(const SourceDesc& other) :
    MeiElement(other),
    m_Common(this)
{
}

/* include <sourceDesc> */

mei::SpecRepro::SpecRepro() :
    MeiElement("specRepro"),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::SpecRepro, "specRepro");
mei::SpecRepro::~SpecRepro() {}
mei::SpecRepro::SpecRepro(const SpecRepro& other) :
    MeiElement(other),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}

/* include <specRepro> */

mei::StdVals::StdVals() :
    MeiElement("stdVals"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::StdVals, "stdVals");
mei::StdVals::~StdVals() {}
mei::StdVals::StdVals(const StdVals& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}

/* include <stdVals> */

mei::SysReq::SysReq() :
    MeiElement("sysReq"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::SysReq, "sysReq");
mei::SysReq::~SysReq() {}
mei::SysReq::SysReq(const SysReq& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <sysReq> */

mei::TapeConfig::TapeConfig() :
    MeiElement("tapeConfig"),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::TapeConfig, "tapeConfig");
mei::TapeConfig::~TapeConfig() {}
mei::TapeConfig::TapeConfig(const TapeConfig& other) :
    MeiElement(other),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}

/* include <tapeConfig> */

mei::Term::Term() :
    MeiElement("term"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::Term, "term");
mei::Term::~Term() {}
mei::Term::Term(const Term& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this)
{
}

MeiAttribute* mei::Term::getClasscode() {
    if (!hasAttribute("classcode")) {
        return NULL;
    }
    return getAttribute("classcode");
};

void mei::Term::setClasscode(std::string _classcode) {
    MeiAttribute *a = new MeiAttribute("classcode", _classcode);
    addAttribute(a);
};

bool mei::Term::hasClasscode() {
    return hasAttribute("classcode");
};

void mei::Term::removeClasscode() {
    removeAttribute("classcode");
};
/* include <term> */

mei::TermList::TermList() :
    MeiElement("termList"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::TermList, "termList");
mei::TermList::~TermList() {}
mei::TermList::TermList(const TermList& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this)
{
}

MeiAttribute* mei::TermList::getClasscode() {
    if (!hasAttribute("classcode")) {
        return NULL;
    }
    return getAttribute("classcode");
};

void mei::TermList::setClasscode(std::string _classcode) {
    MeiAttribute *a = new MeiAttribute("classcode", _classcode);
    addAttribute(a);
};

bool mei::TermList::hasClasscode() {
    return hasAttribute("classcode");
};

void mei::TermList::removeClasscode() {
    removeAttribute("classcode");
};
/* include <termList> */

mei::TitleStmt::TitleStmt() :
    MeiElement("titleStmt"),
    m_Bibl(this),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::TitleStmt, "titleStmt");
mei::TitleStmt::~TitleStmt() {}
mei::TitleStmt::TitleStmt(const TitleStmt& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this)
{
}

/* include <titleStmt> */

mei::TreatHist::TreatHist() :
    MeiElement("treatHist"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::TreatHist, "treatHist");
mei::TreatHist::~TreatHist() {}
mei::TreatHist::TreatHist(const TreatHist& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this)
{
}

/* include <treatHist> */

mei::TreatSched::TreatSched() :
    MeiElement("treatSched"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::TreatSched, "treatSched");
mei::TreatSched::~TreatSched() {}
mei::TreatSched::TreatSched(const TreatSched& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this)
{
}

/* include <treatSched> */

mei::Unpub::Unpub() :
    MeiElement("unpub"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::Unpub, "unpub");
mei::Unpub::~Unpub() {}
mei::Unpub::Unpub(const Unpub& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this)
{
}

/* include <unpub> */

mei::UseRestrict::UseRestrict() :
    MeiElement("useRestrict"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::UseRestrict, "useRestrict");
mei::UseRestrict::~UseRestrict() {}
mei::UseRestrict::UseRestrict(const UseRestrict& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this)
{
}

/* include <useRestrict> */

mei::Watermark::Watermark() :
    MeiElement("watermark"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::Watermark, "watermark");
mei::Watermark::~Watermark() {}
mei::Watermark::Watermark(const Watermark& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}

/* include <watermark> */

mei::Work::Work() :
    MeiElement("work"),
    m_Datapointing(this),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::Work, "work");
mei::Work::~Work() {}
mei::Work::Work(const Work& other) :
    MeiElement(other),
    m_Datapointing(this),
    m_Common(this),
    m_Bibl(this)
{
}

/* include <work> */

mei::WorkDesc::WorkDesc() :
    MeiElement("workDesc"),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::WorkDesc, "workDesc");
mei::WorkDesc::~WorkDesc() {}
mei::WorkDesc::WorkDesc(const WorkDesc& other) :
    MeiElement(other),
    m_Common(this)
{
}

/* include <workDesc> */



