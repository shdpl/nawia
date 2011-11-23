#include <QVariant>
#include <qxml.h>

#include "QXmlDefaultHandler_shell.h"
#include <iostream>
#include <qxml.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT QXmlContentHandler* qtd_QXmlDefaultHandler_cast_to_QXmlContentHandler(QXmlDefaultHandler *ptr)
{
    return dynamic_cast<QXmlContentHandler*>(ptr);
}

QTD_EXTERN QTD_EXPORT QXmlErrorHandler* qtd_QXmlDefaultHandler_cast_to_QXmlErrorHandler(QXmlDefaultHandler *ptr)
{
    return dynamic_cast<QXmlErrorHandler*>(ptr);
}

QTD_EXTERN QTD_EXPORT QXmlDTDHandler* qtd_QXmlDefaultHandler_cast_to_QXmlDTDHandler(QXmlDefaultHandler *ptr)
{
    return dynamic_cast<QXmlDTDHandler*>(ptr);
}

QTD_EXTERN QTD_EXPORT QXmlEntityResolver* qtd_QXmlDefaultHandler_cast_to_QXmlEntityResolver(QXmlDefaultHandler *ptr)
{
    return dynamic_cast<QXmlEntityResolver*>(ptr);
}

QTD_EXTERN QTD_EXPORT QXmlLexicalHandler* qtd_QXmlDefaultHandler_cast_to_QXmlLexicalHandler(QXmlDefaultHandler *ptr)
{
    return dynamic_cast<QXmlLexicalHandler*>(ptr);
}

QTD_EXTERN QTD_EXPORT QXmlDeclHandler* qtd_QXmlDefaultHandler_cast_to_QXmlDeclHandler(QXmlDefaultHandler *ptr)
{
    return dynamic_cast<QXmlDeclHandler*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlDefaultHandler_delete(void* nativeId)
{
    delete (QXmlDefaultHandler_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlDefaultHandler_destroy(void* nativeId)
{
    call_destructor((QXmlDefaultHandler_QtDShell*)nativeId);
}

QXmlDefaultHandler_QtDShell::QXmlDefaultHandler_QtDShell(void *d_ptr)
    : QXmlDefaultHandler(),
      QtdObjectLink(d_ptr)
{
}

QXmlDefaultHandler_QtDShell::~QXmlDefaultHandler_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QXmlDefaultHandler_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(XML, bool, QXmlDeclHandler_attributeDecl_string_string_string_string_string_dispatch, (void *dId, const unsigned short* eName0, int eName0_size, const unsigned short* aName1, int aName1_size, const unsigned short* type2, int type2_size, const unsigned short* valueDefault3, int valueDefault3_size, const unsigned short* value4, int value4_size))
bool  QXmlDefaultHandler_QtDShell::attributeDecl(const QString&  eName0, const QString&  aName1, const QString&  type2, const QString&  valueDefault3, const QString&  value4)
{
    return qtd_QXmlDeclHandler_attributeDecl_string_string_string_string_string_dispatch(this->dId, eName0.utf16(), eName0.size(), aName1.utf16(), aName1.size(), type2.utf16(), type2.size(), valueDefault3.utf16(), valueDefault3.size(), value4.utf16(), value4.size());
}

QTD_FUNC_DECL(XML, bool, QXmlContentHandler_characters_string_dispatch, (void *dId, const unsigned short* ch0, int ch0_size))
bool  QXmlDefaultHandler_QtDShell::characters(const QString&  ch0)
{
    return qtd_QXmlContentHandler_characters_string_dispatch(this->dId, ch0.utf16(), ch0.size());
}

QTD_FUNC_DECL(XML, bool, QXmlLexicalHandler_comment_string_dispatch, (void *dId, const unsigned short* ch0, int ch0_size))
bool  QXmlDefaultHandler_QtDShell::comment(const QString&  ch0)
{
    return qtd_QXmlLexicalHandler_comment_string_dispatch(this->dId, ch0.utf16(), ch0.size());
}

QTD_FUNC_DECL(XML, bool, QXmlLexicalHandler_endCDATA_dispatch, (void *dId))
bool  QXmlDefaultHandler_QtDShell::endCDATA()
{
    return qtd_QXmlLexicalHandler_endCDATA_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, bool, QXmlLexicalHandler_endDTD_dispatch, (void *dId))
bool  QXmlDefaultHandler_QtDShell::endDTD()
{
    return qtd_QXmlLexicalHandler_endDTD_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, bool, QXmlContentHandler_endDocument_dispatch, (void *dId))
bool  QXmlDefaultHandler_QtDShell::endDocument()
{
    return qtd_QXmlContentHandler_endDocument_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, bool, QXmlContentHandler_endElement_string_string_string_dispatch, (void *dId, const unsigned short* namespaceURI0, int namespaceURI0_size, const unsigned short* localName1, int localName1_size, const unsigned short* qName2, int qName2_size))
bool  QXmlDefaultHandler_QtDShell::endElement(const QString&  namespaceURI0, const QString&  localName1, const QString&  qName2)
{
    return qtd_QXmlContentHandler_endElement_string_string_string_dispatch(this->dId, namespaceURI0.utf16(), namespaceURI0.size(), localName1.utf16(), localName1.size(), qName2.utf16(), qName2.size());
}

QTD_FUNC_DECL(XML, bool, QXmlLexicalHandler_endEntity_string_dispatch, (void *dId, const unsigned short* name0, int name0_size))
bool  QXmlDefaultHandler_QtDShell::endEntity(const QString&  name0)
{
    return qtd_QXmlLexicalHandler_endEntity_string_dispatch(this->dId, name0.utf16(), name0.size());
}

QTD_FUNC_DECL(XML, bool, QXmlContentHandler_endPrefixMapping_string_dispatch, (void *dId, const unsigned short* prefix0, int prefix0_size))
bool  QXmlDefaultHandler_QtDShell::endPrefixMapping(const QString&  prefix0)
{
    return qtd_QXmlContentHandler_endPrefixMapping_string_dispatch(this->dId, prefix0.utf16(), prefix0.size());
}

QTD_FUNC_DECL(XML, bool, QXmlErrorHandler_error_QXmlParseException_dispatch, (void *dId, void* exception0))
bool  QXmlDefaultHandler_QtDShell::error(const QXmlParseException&  exception0)
{
    return qtd_QXmlErrorHandler_error_QXmlParseException_dispatch(this->dId, &(QXmlParseException& )exception0);
}

QTD_FUNC_DECL(XML, void, QXmlDeclHandler_errorString_const_dispatch, (void *dId, DArray* ret_str))
QString  QXmlDefaultHandler_QtDShell::errorString() const
{
    DArray ret_str;
    qtd_QXmlDeclHandler_errorString_const_dispatch(this->dId, &ret_str);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(XML, bool, QXmlDeclHandler_externalEntityDecl_string_string_string_dispatch, (void *dId, const unsigned short* name0, int name0_size, const unsigned short* publicId1, int publicId1_size, const unsigned short* systemId2, int systemId2_size))
bool  QXmlDefaultHandler_QtDShell::externalEntityDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2)
{
    return qtd_QXmlDeclHandler_externalEntityDecl_string_string_string_dispatch(this->dId, name0.utf16(), name0.size(), publicId1.utf16(), publicId1.size(), systemId2.utf16(), systemId2.size());
}

QTD_FUNC_DECL(XML, bool, QXmlErrorHandler_fatalError_QXmlParseException_dispatch, (void *dId, void* exception0))
bool  QXmlDefaultHandler_QtDShell::fatalError(const QXmlParseException&  exception0)
{
    return qtd_QXmlErrorHandler_fatalError_QXmlParseException_dispatch(this->dId, &(QXmlParseException& )exception0);
}

QTD_FUNC_DECL(XML, bool, QXmlContentHandler_ignorableWhitespace_string_dispatch, (void *dId, const unsigned short* ch0, int ch0_size))
bool  QXmlDefaultHandler_QtDShell::ignorableWhitespace(const QString&  ch0)
{
    return qtd_QXmlContentHandler_ignorableWhitespace_string_dispatch(this->dId, ch0.utf16(), ch0.size());
}

QTD_FUNC_DECL(XML, bool, QXmlDeclHandler_internalEntityDecl_string_string_dispatch, (void *dId, const unsigned short* name0, int name0_size, const unsigned short* value1, int value1_size))
bool  QXmlDefaultHandler_QtDShell::internalEntityDecl(const QString&  name0, const QString&  value1)
{
    return qtd_QXmlDeclHandler_internalEntityDecl_string_string_dispatch(this->dId, name0.utf16(), name0.size(), value1.utf16(), value1.size());
}

QTD_FUNC_DECL(XML, bool, QXmlDTDHandler_notationDecl_string_string_string_dispatch, (void *dId, const unsigned short* name0, int name0_size, const unsigned short* publicId1, int publicId1_size, const unsigned short* systemId2, int systemId2_size))
bool  QXmlDefaultHandler_QtDShell::notationDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2)
{
    return qtd_QXmlDTDHandler_notationDecl_string_string_string_dispatch(this->dId, name0.utf16(), name0.size(), publicId1.utf16(), publicId1.size(), systemId2.utf16(), systemId2.size());
}

QTD_FUNC_DECL(XML, bool, QXmlContentHandler_processingInstruction_string_string_dispatch, (void *dId, const unsigned short* target0, int target0_size, const unsigned short* data1, int data1_size))
bool  QXmlDefaultHandler_QtDShell::processingInstruction(const QString&  target0, const QString&  data1)
{
    return qtd_QXmlContentHandler_processingInstruction_string_string_dispatch(this->dId, target0.utf16(), target0.size(), data1.utf16(), data1.size());
}

QTD_FUNC_DECL(XML, bool, QXmlEntityResolver_resolveEntity_string_string_QXmlInputSource_dispatch, (void *dId, const unsigned short* publicId0, int publicId0_size, const unsigned short* systemId1, int systemId1_size, void* ret2))
bool  QXmlDefaultHandler_QtDShell::resolveEntity(const QString&  publicId0, const QString&  systemId1, QXmlInputSource*&  ret2)
{
    return qtd_QXmlEntityResolver_resolveEntity_string_string_QXmlInputSource_dispatch(this->dId, publicId0.utf16(), publicId0.size(), systemId1.utf16(), systemId1.size(), &(QXmlInputSource*& )ret2);
}

QTD_FUNC_DECL(XML, void, QXmlContentHandler_setDocumentLocator_QXmlLocator_dispatch, (void *dId, void* locator0))
void QXmlDefaultHandler_QtDShell::setDocumentLocator(QXmlLocator*  locator0)
{
    qtd_QXmlContentHandler_setDocumentLocator_QXmlLocator_dispatch(this->dId, (QXmlLocator* )locator0);
}

QTD_FUNC_DECL(XML, bool, QXmlContentHandler_skippedEntity_string_dispatch, (void *dId, const unsigned short* name0, int name0_size))
bool  QXmlDefaultHandler_QtDShell::skippedEntity(const QString&  name0)
{
    return qtd_QXmlContentHandler_skippedEntity_string_dispatch(this->dId, name0.utf16(), name0.size());
}

QTD_FUNC_DECL(XML, bool, QXmlLexicalHandler_startCDATA_dispatch, (void *dId))
bool  QXmlDefaultHandler_QtDShell::startCDATA()
{
    return qtd_QXmlLexicalHandler_startCDATA_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, bool, QXmlLexicalHandler_startDTD_string_string_string_dispatch, (void *dId, const unsigned short* name0, int name0_size, const unsigned short* publicId1, int publicId1_size, const unsigned short* systemId2, int systemId2_size))
bool  QXmlDefaultHandler_QtDShell::startDTD(const QString&  name0, const QString&  publicId1, const QString&  systemId2)
{
    return qtd_QXmlLexicalHandler_startDTD_string_string_string_dispatch(this->dId, name0.utf16(), name0.size(), publicId1.utf16(), publicId1.size(), systemId2.utf16(), systemId2.size());
}

QTD_FUNC_DECL(XML, bool, QXmlContentHandler_startDocument_dispatch, (void *dId))
bool  QXmlDefaultHandler_QtDShell::startDocument()
{
    return qtd_QXmlContentHandler_startDocument_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, bool, QXmlContentHandler_startElement_string_string_string_QXmlAttributes_dispatch, (void *dId, const unsigned short* namespaceURI0, int namespaceURI0_size, const unsigned short* localName1, int localName1_size, const unsigned short* qName2, int qName2_size, void* atts3))
bool  QXmlDefaultHandler_QtDShell::startElement(const QString&  namespaceURI0, const QString&  localName1, const QString&  qName2, const QXmlAttributes&  atts3)
{
    return qtd_QXmlContentHandler_startElement_string_string_string_QXmlAttributes_dispatch(this->dId, namespaceURI0.utf16(), namespaceURI0.size(), localName1.utf16(), localName1.size(), qName2.utf16(), qName2.size(), &(QXmlAttributes& )atts3);
}

QTD_FUNC_DECL(XML, bool, QXmlLexicalHandler_startEntity_string_dispatch, (void *dId, const unsigned short* name0, int name0_size))
bool  QXmlDefaultHandler_QtDShell::startEntity(const QString&  name0)
{
    return qtd_QXmlLexicalHandler_startEntity_string_dispatch(this->dId, name0.utf16(), name0.size());
}

QTD_FUNC_DECL(XML, bool, QXmlContentHandler_startPrefixMapping_string_string_dispatch, (void *dId, const unsigned short* prefix0, int prefix0_size, const unsigned short* uri1, int uri1_size))
bool  QXmlDefaultHandler_QtDShell::startPrefixMapping(const QString&  prefix0, const QString&  uri1)
{
    return qtd_QXmlContentHandler_startPrefixMapping_string_string_dispatch(this->dId, prefix0.utf16(), prefix0.size(), uri1.utf16(), uri1.size());
}

QTD_FUNC_DECL(XML, bool, QXmlDTDHandler_unparsedEntityDecl_string_string_string_string_dispatch, (void *dId, const unsigned short* name0, int name0_size, const unsigned short* publicId1, int publicId1_size, const unsigned short* systemId2, int systemId2_size, const unsigned short* notationName3, int notationName3_size))
bool  QXmlDefaultHandler_QtDShell::unparsedEntityDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2, const QString&  notationName3)
{
    return qtd_QXmlDTDHandler_unparsedEntityDecl_string_string_string_string_dispatch(this->dId, name0.utf16(), name0.size(), publicId1.utf16(), publicId1.size(), systemId2.utf16(), systemId2.size(), notationName3.utf16(), notationName3.size());
}

QTD_FUNC_DECL(XML, bool, QXmlErrorHandler_warning_QXmlParseException_dispatch, (void *dId, void* exception0))
bool  QXmlDefaultHandler_QtDShell::warning(const QXmlParseException&  exception0)
{
    return qtd_QXmlErrorHandler_warning_QXmlParseException_dispatch(this->dId, &(QXmlParseException& )exception0);
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlDefaultHandler_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
bool  QXmlDefaultHandler_QtDShell::__override_attributeDecl(const QString&  eName0, const QString&  aName1, const QString&  type2, const QString&  valueDefault3, const QString&  value4, bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::attributeDecl((const QString& )eName0, (const QString& )aName1, (const QString& )type2, (const QString& )valueDefault3, (const QString& )value4);
    } else {
        return attributeDecl((const QString& )eName0, (const QString& )aName1, (const QString& )type2, (const QString& )valueDefault3, (const QString& )value4);
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_characters(const QString&  ch0, bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::characters((const QString& )ch0);
    } else {
        return characters((const QString& )ch0);
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_comment(const QString&  ch0, bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::comment((const QString& )ch0);
    } else {
        return comment((const QString& )ch0);
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_endCDATA(bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::endCDATA();
    } else {
        return endCDATA();
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_endDTD(bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::endDTD();
    } else {
        return endDTD();
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_endDocument(bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::endDocument();
    } else {
        return endDocument();
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_endElement(const QString&  namespaceURI0, const QString&  localName1, const QString&  qName2, bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::endElement((const QString& )namespaceURI0, (const QString& )localName1, (const QString& )qName2);
    } else {
        return endElement((const QString& )namespaceURI0, (const QString& )localName1, (const QString& )qName2);
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_endEntity(const QString&  name0, bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::endEntity((const QString& )name0);
    } else {
        return endEntity((const QString& )name0);
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_endPrefixMapping(const QString&  prefix0, bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::endPrefixMapping((const QString& )prefix0);
    } else {
        return endPrefixMapping((const QString& )prefix0);
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_error(const QXmlParseException&  exception0, bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::error((const QXmlParseException& )exception0);
    } else {
        return error((const QXmlParseException& )exception0);
    }
}

QString  QXmlDefaultHandler_QtDShell::__override_errorString(bool static_call) const
{
    if (static_call) {
        return QXmlDefaultHandler::errorString();
    } else {
        return errorString();
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_externalEntityDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2, bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::externalEntityDecl((const QString& )name0, (const QString& )publicId1, (const QString& )systemId2);
    } else {
        return externalEntityDecl((const QString& )name0, (const QString& )publicId1, (const QString& )systemId2);
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_fatalError(const QXmlParseException&  exception0, bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::fatalError((const QXmlParseException& )exception0);
    } else {
        return fatalError((const QXmlParseException& )exception0);
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_ignorableWhitespace(const QString&  ch0, bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::ignorableWhitespace((const QString& )ch0);
    } else {
        return ignorableWhitespace((const QString& )ch0);
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_internalEntityDecl(const QString&  name0, const QString&  value1, bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::internalEntityDecl((const QString& )name0, (const QString& )value1);
    } else {
        return internalEntityDecl((const QString& )name0, (const QString& )value1);
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_notationDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2, bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::notationDecl((const QString& )name0, (const QString& )publicId1, (const QString& )systemId2);
    } else {
        return notationDecl((const QString& )name0, (const QString& )publicId1, (const QString& )systemId2);
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_processingInstruction(const QString&  target0, const QString&  data1, bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::processingInstruction((const QString& )target0, (const QString& )data1);
    } else {
        return processingInstruction((const QString& )target0, (const QString& )data1);
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_resolveEntity(const QString&  publicId0, const QString&  systemId1, QXmlInputSource*&  ret2, bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::resolveEntity((const QString& )publicId0, (const QString& )systemId1, (QXmlInputSource*& )ret2);
    } else {
        return resolveEntity((const QString& )publicId0, (const QString& )systemId1, (QXmlInputSource*& )ret2);
    }
}

void QXmlDefaultHandler_QtDShell::__override_setDocumentLocator(QXmlLocator*  locator0, bool static_call)
{
    if (static_call) {
        QXmlDefaultHandler::setDocumentLocator((QXmlLocator* )locator0);
    } else {
        setDocumentLocator((QXmlLocator* )locator0);
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_skippedEntity(const QString&  name0, bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::skippedEntity((const QString& )name0);
    } else {
        return skippedEntity((const QString& )name0);
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_startCDATA(bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::startCDATA();
    } else {
        return startCDATA();
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_startDTD(const QString&  name0, const QString&  publicId1, const QString&  systemId2, bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::startDTD((const QString& )name0, (const QString& )publicId1, (const QString& )systemId2);
    } else {
        return startDTD((const QString& )name0, (const QString& )publicId1, (const QString& )systemId2);
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_startDocument(bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::startDocument();
    } else {
        return startDocument();
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_startElement(const QString&  namespaceURI0, const QString&  localName1, const QString&  qName2, const QXmlAttributes&  atts3, bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::startElement((const QString& )namespaceURI0, (const QString& )localName1, (const QString& )qName2, (const QXmlAttributes& )atts3);
    } else {
        return startElement((const QString& )namespaceURI0, (const QString& )localName1, (const QString& )qName2, (const QXmlAttributes& )atts3);
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_startEntity(const QString&  name0, bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::startEntity((const QString& )name0);
    } else {
        return startEntity((const QString& )name0);
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_startPrefixMapping(const QString&  prefix0, const QString&  uri1, bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::startPrefixMapping((const QString& )prefix0, (const QString& )uri1);
    } else {
        return startPrefixMapping((const QString& )prefix0, (const QString& )uri1);
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_unparsedEntityDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2, const QString&  notationName3, bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::unparsedEntityDecl((const QString& )name0, (const QString& )publicId1, (const QString& )systemId2, (const QString& )notationName3);
    } else {
        return unparsedEntityDecl((const QString& )name0, (const QString& )publicId1, (const QString& )systemId2, (const QString& )notationName3);
    }
}

bool  QXmlDefaultHandler_QtDShell::__override_warning(const QXmlParseException&  exception0, bool static_call)
{
    if (static_call) {
        return QXmlDefaultHandler::warning((const QXmlParseException& )exception0);
    } else {
        return warning((const QXmlParseException& )exception0);
    }
}

// ---externC---
// QXmlDefaultHandler::QXmlDefaultHandler()
QTD_EXTERN QTD_EXPORT void* qtd_QXmlDefaultHandler_QXmlDefaultHandler
(void *d_ptr)
{
    QXmlDefaultHandler_QtDShell *__qt_this = new QXmlDefaultHandler_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QXmlDefaultHandler::attributeDecl(const QString & eName, const QString & aName, const QString & type, const QString & valueDefault, const QString & value)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_attributeDecl_string_string_string_string_string
(void* __this_nativeId,
 DArray eName0,
 DArray aName1,
 DArray type2,
 DArray valueDefault3,
 DArray value4)
{
    QString __qt_eName0 = QString::fromUtf8((const char *)eName0.ptr, eName0.length);
    QString __qt_aName1 = QString::fromUtf8((const char *)aName1.ptr, aName1.length);
    QString __qt_type2 = QString::fromUtf8((const char *)type2.ptr, type2.length);
    QString __qt_valueDefault3 = QString::fromUtf8((const char *)valueDefault3.ptr, valueDefault3.length);
    QString __qt_value4 = QString::fromUtf8((const char *)value4.ptr, value4.length);
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_attributeDecl((const QString& )__qt_eName0, (const QString& )__qt_aName1, (const QString& )__qt_type2, (const QString& )__qt_valueDefault3, (const QString& )__qt_value4, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::characters(const QString & ch)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_characters_string
(void* __this_nativeId,
 DArray ch0)
{
    QString __qt_ch0 = QString::fromUtf8((const char *)ch0.ptr, ch0.length);
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_characters((const QString& )__qt_ch0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::comment(const QString & ch)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_comment_string
(void* __this_nativeId,
 DArray ch0)
{
    QString __qt_ch0 = QString::fromUtf8((const char *)ch0.ptr, ch0.length);
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_comment((const QString& )__qt_ch0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::endCDATA()
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_endCDATA
(void* __this_nativeId)
{
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_endCDATA(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::endDTD()
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_endDTD
(void* __this_nativeId)
{
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_endDTD(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::endDocument()
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_endDocument
(void* __this_nativeId)
{
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_endDocument(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::endElement(const QString & namespaceURI, const QString & localName, const QString & qName)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_endElement_string_string_string
(void* __this_nativeId,
 DArray namespaceURI0,
 DArray localName1,
 DArray qName2)
{
    QString __qt_namespaceURI0 = QString::fromUtf8((const char *)namespaceURI0.ptr, namespaceURI0.length);
    QString __qt_localName1 = QString::fromUtf8((const char *)localName1.ptr, localName1.length);
    QString __qt_qName2 = QString::fromUtf8((const char *)qName2.ptr, qName2.length);
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_endElement((const QString& )__qt_namespaceURI0, (const QString& )__qt_localName1, (const QString& )__qt_qName2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::endEntity(const QString & name)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_endEntity_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_endEntity((const QString& )__qt_name0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::endPrefixMapping(const QString & prefix)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_endPrefixMapping_string
(void* __this_nativeId,
 DArray prefix0)
{
    QString __qt_prefix0 = QString::fromUtf8((const char *)prefix0.ptr, prefix0.length);
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_endPrefixMapping((const QString& )__qt_prefix0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::error(const QXmlParseException & exception)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_error_QXmlParseException
(void* __this_nativeId,
 void* exception0)
{
    const QXmlParseException&  __qt_exception0 = (const QXmlParseException& ) *(QXmlParseException *)exception0;
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_error((const QXmlParseException& )__qt_exception0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::errorString() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlDefaultHandler_errorString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_errorString(__do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlDefaultHandler::externalEntityDecl(const QString & name, const QString & publicId, const QString & systemId)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_externalEntityDecl_string_string_string
(void* __this_nativeId,
 DArray name0,
 DArray publicId1,
 DArray systemId2)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QString __qt_publicId1 = QString::fromUtf8((const char *)publicId1.ptr, publicId1.length);
    QString __qt_systemId2 = QString::fromUtf8((const char *)systemId2.ptr, systemId2.length);
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_externalEntityDecl((const QString& )__qt_name0, (const QString& )__qt_publicId1, (const QString& )__qt_systemId2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::fatalError(const QXmlParseException & exception)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_fatalError_QXmlParseException
(void* __this_nativeId,
 void* exception0)
{
    const QXmlParseException&  __qt_exception0 = (const QXmlParseException& ) *(QXmlParseException *)exception0;
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_fatalError((const QXmlParseException& )__qt_exception0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::ignorableWhitespace(const QString & ch)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_ignorableWhitespace_string
(void* __this_nativeId,
 DArray ch0)
{
    QString __qt_ch0 = QString::fromUtf8((const char *)ch0.ptr, ch0.length);
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_ignorableWhitespace((const QString& )__qt_ch0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::internalEntityDecl(const QString & name, const QString & value)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_internalEntityDecl_string_string
(void* __this_nativeId,
 DArray name0,
 DArray value1)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QString __qt_value1 = QString::fromUtf8((const char *)value1.ptr, value1.length);
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_internalEntityDecl((const QString& )__qt_name0, (const QString& )__qt_value1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::notationDecl(const QString & name, const QString & publicId, const QString & systemId)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_notationDecl_string_string_string
(void* __this_nativeId,
 DArray name0,
 DArray publicId1,
 DArray systemId2)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QString __qt_publicId1 = QString::fromUtf8((const char *)publicId1.ptr, publicId1.length);
    QString __qt_systemId2 = QString::fromUtf8((const char *)systemId2.ptr, systemId2.length);
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_notationDecl((const QString& )__qt_name0, (const QString& )__qt_publicId1, (const QString& )__qt_systemId2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::processingInstruction(const QString & target, const QString & data)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_processingInstruction_string_string
(void* __this_nativeId,
 DArray target0,
 DArray data1)
{
    QString __qt_target0 = QString::fromUtf8((const char *)target0.ptr, target0.length);
    QString __qt_data1 = QString::fromUtf8((const char *)data1.ptr, data1.length);
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_processingInstruction((const QString& )__qt_target0, (const QString& )__qt_data1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::resolveEntity(const QString & publicId, const QString & systemId, QXmlInputSource *& ret)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_resolveEntity_string_string_QXmlInputSource
(void* __this_nativeId,
 DArray publicId0,
 DArray systemId1,
 void* ret2)
{
    QString __qt_publicId0 = QString::fromUtf8((const char *)publicId0.ptr, publicId0.length);
    QString __qt_systemId1 = QString::fromUtf8((const char *)systemId1.ptr, systemId1.length);
    QXmlInputSource*&  __qt_ret2 = (QXmlInputSource*& ) * (QXmlInputSource **) ret2;
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_resolveEntity((const QString& )__qt_publicId0, (const QString& )__qt_systemId1, (QXmlInputSource*& )__qt_ret2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::setDocumentLocator(QXmlLocator * locator)
QTD_EXTERN QTD_EXPORT void qtd_QXmlDefaultHandler_setDocumentLocator_QXmlLocator
(void* __this_nativeId,
 void* locator0)
{
    QXmlLocator*  __qt_locator0 = (QXmlLocator* ) locator0;
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    __qt_this->__override_setDocumentLocator((QXmlLocator* )__qt_locator0, __do_static_call);

}

// QXmlDefaultHandler::skippedEntity(const QString & name)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_skippedEntity_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_skippedEntity((const QString& )__qt_name0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::startCDATA()
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_startCDATA
(void* __this_nativeId)
{
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_startCDATA(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::startDTD(const QString & name, const QString & publicId, const QString & systemId)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_startDTD_string_string_string
(void* __this_nativeId,
 DArray name0,
 DArray publicId1,
 DArray systemId2)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QString __qt_publicId1 = QString::fromUtf8((const char *)publicId1.ptr, publicId1.length);
    QString __qt_systemId2 = QString::fromUtf8((const char *)systemId2.ptr, systemId2.length);
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_startDTD((const QString& )__qt_name0, (const QString& )__qt_publicId1, (const QString& )__qt_systemId2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::startDocument()
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_startDocument
(void* __this_nativeId)
{
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_startDocument(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::startElement(const QString & namespaceURI, const QString & localName, const QString & qName, const QXmlAttributes & atts)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_startElement_string_string_string_QXmlAttributes
(void* __this_nativeId,
 DArray namespaceURI0,
 DArray localName1,
 DArray qName2,
 void* atts3)
{
    QString __qt_namespaceURI0 = QString::fromUtf8((const char *)namespaceURI0.ptr, namespaceURI0.length);
    QString __qt_localName1 = QString::fromUtf8((const char *)localName1.ptr, localName1.length);
    QString __qt_qName2 = QString::fromUtf8((const char *)qName2.ptr, qName2.length);
    const QXmlAttributes&  __qt_atts3 = (const QXmlAttributes& ) *(QXmlAttributes *)atts3;
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_startElement((const QString& )__qt_namespaceURI0, (const QString& )__qt_localName1, (const QString& )__qt_qName2, (const QXmlAttributes& )__qt_atts3, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::startEntity(const QString & name)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_startEntity_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_startEntity((const QString& )__qt_name0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::startPrefixMapping(const QString & prefix, const QString & uri)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_startPrefixMapping_string_string
(void* __this_nativeId,
 DArray prefix0,
 DArray uri1)
{
    QString __qt_prefix0 = QString::fromUtf8((const char *)prefix0.ptr, prefix0.length);
    QString __qt_uri1 = QString::fromUtf8((const char *)uri1.ptr, uri1.length);
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_startPrefixMapping((const QString& )__qt_prefix0, (const QString& )__qt_uri1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::unparsedEntityDecl(const QString & name, const QString & publicId, const QString & systemId, const QString & notationName)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_unparsedEntityDecl_string_string_string_string
(void* __this_nativeId,
 DArray name0,
 DArray publicId1,
 DArray systemId2,
 DArray notationName3)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QString __qt_publicId1 = QString::fromUtf8((const char *)publicId1.ptr, publicId1.length);
    QString __qt_systemId2 = QString::fromUtf8((const char *)systemId2.ptr, systemId2.length);
    QString __qt_notationName3 = QString::fromUtf8((const char *)notationName3.ptr, notationName3.length);
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_unparsedEntityDecl((const QString& )__qt_name0, (const QString& )__qt_publicId1, (const QString& )__qt_systemId2, (const QString& )__qt_notationName3, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlDefaultHandler::warning(const QXmlParseException & exception)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlDefaultHandler_warning_QXmlParseException
(void* __this_nativeId,
 void* exception0)
{
    const QXmlParseException&  __qt_exception0 = (const QXmlParseException& ) *(QXmlParseException *)exception0;
    QXmlDefaultHandler_QtDShell *__qt_this = (QXmlDefaultHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlDefaultHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_warning((const QXmlParseException& )__qt_exception0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


