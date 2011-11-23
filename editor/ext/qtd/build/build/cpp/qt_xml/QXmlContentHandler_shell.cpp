#include <QVariant>
#include <qxml.h>

#include "QXmlContentHandler_shell.h"
#include <iostream>
#include <qxml.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT QXmlContentHandler* qtd_QXmlContentHandler_cast_to_QXmlContentHandler(QXmlContentHandler *ptr)
{
    return dynamic_cast<QXmlContentHandler*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlContentHandler_delete(void* nativeId)
{
    delete (QXmlContentHandler_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlContentHandler_destroy(void* nativeId)
{
    call_destructor((QXmlContentHandler_QtDShell*)nativeId);
}

QXmlContentHandler_QtDShell::QXmlContentHandler_QtDShell(void *d_ptr)
    : QXmlContentHandler(),
      QtdObjectLink(d_ptr)
{
}

QXmlContentHandler_QtDShell::~QXmlContentHandler_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QXmlContentHandler_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QXmlContentHandler*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(XML, bool, QXmlContentHandler_characters_string_dispatch, (void *dId, const unsigned short* ch0, int ch0_size))
QTD_FUNC(XML, QXmlContentHandler_characters_string_dispatch)
bool  QXmlContentHandler_QtDShell::characters(const QString&  ch0)
{
    return qtd_QXmlContentHandler_characters_string_dispatch(this->dId, ch0.utf16(), ch0.size());
}

QTD_FUNC_DECL(XML, bool, QXmlContentHandler_endDocument_dispatch, (void *dId))
QTD_FUNC(XML, QXmlContentHandler_endDocument_dispatch)
bool  QXmlContentHandler_QtDShell::endDocument()
{
    return qtd_QXmlContentHandler_endDocument_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, bool, QXmlContentHandler_endElement_string_string_string_dispatch, (void *dId, const unsigned short* namespaceURI0, int namespaceURI0_size, const unsigned short* localName1, int localName1_size, const unsigned short* qName2, int qName2_size))
QTD_FUNC(XML, QXmlContentHandler_endElement_string_string_string_dispatch)
bool  QXmlContentHandler_QtDShell::endElement(const QString&  namespaceURI0, const QString&  localName1, const QString&  qName2)
{
    return qtd_QXmlContentHandler_endElement_string_string_string_dispatch(this->dId, namespaceURI0.utf16(), namespaceURI0.size(), localName1.utf16(), localName1.size(), qName2.utf16(), qName2.size());
}

QTD_FUNC_DECL(XML, bool, QXmlContentHandler_endPrefixMapping_string_dispatch, (void *dId, const unsigned short* prefix0, int prefix0_size))
QTD_FUNC(XML, QXmlContentHandler_endPrefixMapping_string_dispatch)
bool  QXmlContentHandler_QtDShell::endPrefixMapping(const QString&  prefix0)
{
    return qtd_QXmlContentHandler_endPrefixMapping_string_dispatch(this->dId, prefix0.utf16(), prefix0.size());
}

QTD_FUNC_DECL(XML, void, QXmlContentHandler_errorString_const_dispatch, (void *dId, DArray* ret_str))
QTD_FUNC(XML, QXmlContentHandler_errorString_const_dispatch)
QString  QXmlContentHandler_QtDShell::errorString() const
{
    DArray ret_str;
    qtd_QXmlContentHandler_errorString_const_dispatch(this->dId, &ret_str);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(XML, bool, QXmlContentHandler_ignorableWhitespace_string_dispatch, (void *dId, const unsigned short* ch0, int ch0_size))
QTD_FUNC(XML, QXmlContentHandler_ignorableWhitespace_string_dispatch)
bool  QXmlContentHandler_QtDShell::ignorableWhitespace(const QString&  ch0)
{
    return qtd_QXmlContentHandler_ignorableWhitespace_string_dispatch(this->dId, ch0.utf16(), ch0.size());
}

QTD_FUNC_DECL(XML, bool, QXmlContentHandler_processingInstruction_string_string_dispatch, (void *dId, const unsigned short* target0, int target0_size, const unsigned short* data1, int data1_size))
QTD_FUNC(XML, QXmlContentHandler_processingInstruction_string_string_dispatch)
bool  QXmlContentHandler_QtDShell::processingInstruction(const QString&  target0, const QString&  data1)
{
    return qtd_QXmlContentHandler_processingInstruction_string_string_dispatch(this->dId, target0.utf16(), target0.size(), data1.utf16(), data1.size());
}

QTD_FUNC_DECL(XML, void, QXmlContentHandler_setDocumentLocator_QXmlLocator_dispatch, (void *dId, void* locator0))
QTD_FUNC(XML, QXmlContentHandler_setDocumentLocator_QXmlLocator_dispatch)
void QXmlContentHandler_QtDShell::setDocumentLocator(QXmlLocator*  locator0)
{
    qtd_QXmlContentHandler_setDocumentLocator_QXmlLocator_dispatch(this->dId, (QXmlLocator* )locator0);
}

QTD_FUNC_DECL(XML, bool, QXmlContentHandler_skippedEntity_string_dispatch, (void *dId, const unsigned short* name0, int name0_size))
QTD_FUNC(XML, QXmlContentHandler_skippedEntity_string_dispatch)
bool  QXmlContentHandler_QtDShell::skippedEntity(const QString&  name0)
{
    return qtd_QXmlContentHandler_skippedEntity_string_dispatch(this->dId, name0.utf16(), name0.size());
}

QTD_FUNC_DECL(XML, bool, QXmlContentHandler_startDocument_dispatch, (void *dId))
QTD_FUNC(XML, QXmlContentHandler_startDocument_dispatch)
bool  QXmlContentHandler_QtDShell::startDocument()
{
    return qtd_QXmlContentHandler_startDocument_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, bool, QXmlContentHandler_startElement_string_string_string_QXmlAttributes_dispatch, (void *dId, const unsigned short* namespaceURI0, int namespaceURI0_size, const unsigned short* localName1, int localName1_size, const unsigned short* qName2, int qName2_size, void* atts3))
QTD_FUNC(XML, QXmlContentHandler_startElement_string_string_string_QXmlAttributes_dispatch)
bool  QXmlContentHandler_QtDShell::startElement(const QString&  namespaceURI0, const QString&  localName1, const QString&  qName2, const QXmlAttributes&  atts3)
{
    return qtd_QXmlContentHandler_startElement_string_string_string_QXmlAttributes_dispatch(this->dId, namespaceURI0.utf16(), namespaceURI0.size(), localName1.utf16(), localName1.size(), qName2.utf16(), qName2.size(), &(QXmlAttributes& )atts3);
}

QTD_FUNC_DECL(XML, bool, QXmlContentHandler_startPrefixMapping_string_string_dispatch, (void *dId, const unsigned short* prefix0, int prefix0_size, const unsigned short* uri1, int uri1_size))
QTD_FUNC(XML, QXmlContentHandler_startPrefixMapping_string_string_dispatch)
bool  QXmlContentHandler_QtDShell::startPrefixMapping(const QString&  prefix0, const QString&  uri1)
{
    return qtd_QXmlContentHandler_startPrefixMapping_string_string_dispatch(this->dId, prefix0.utf16(), prefix0.size(), uri1.utf16(), uri1.size());
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlContentHandler_initCallBacks(VoidFunc *virts) {
    qtd_QXmlContentHandler_characters_string_dispatch = (qtd_QXmlContentHandler_characters_string_dispatch_t) virts[0];
    qtd_QXmlContentHandler_endDocument_dispatch = (qtd_QXmlContentHandler_endDocument_dispatch_t) virts[1];
    qtd_QXmlContentHandler_endElement_string_string_string_dispatch = (qtd_QXmlContentHandler_endElement_string_string_string_dispatch_t) virts[2];
    qtd_QXmlContentHandler_endPrefixMapping_string_dispatch = (qtd_QXmlContentHandler_endPrefixMapping_string_dispatch_t) virts[3];
    qtd_QXmlContentHandler_errorString_const_dispatch = (qtd_QXmlContentHandler_errorString_const_dispatch_t) virts[4];
    qtd_QXmlContentHandler_ignorableWhitespace_string_dispatch = (qtd_QXmlContentHandler_ignorableWhitespace_string_dispatch_t) virts[5];
    qtd_QXmlContentHandler_processingInstruction_string_string_dispatch = (qtd_QXmlContentHandler_processingInstruction_string_string_dispatch_t) virts[6];
    qtd_QXmlContentHandler_setDocumentLocator_QXmlLocator_dispatch = (qtd_QXmlContentHandler_setDocumentLocator_QXmlLocator_dispatch_t) virts[7];
    qtd_QXmlContentHandler_skippedEntity_string_dispatch = (qtd_QXmlContentHandler_skippedEntity_string_dispatch_t) virts[8];
    qtd_QXmlContentHandler_startDocument_dispatch = (qtd_QXmlContentHandler_startDocument_dispatch_t) virts[9];
    qtd_QXmlContentHandler_startElement_string_string_string_QXmlAttributes_dispatch = (qtd_QXmlContentHandler_startElement_string_string_string_QXmlAttributes_dispatch_t) virts[10];
    qtd_QXmlContentHandler_startPrefixMapping_string_string_dispatch = (qtd_QXmlContentHandler_startPrefixMapping_string_string_dispatch_t) virts[11];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
bool  QXmlContentHandler_QtDShell::__override_characters(const QString&  ch0, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return characters((const QString& )ch0);
    }
}

bool  QXmlContentHandler_QtDShell::__override_endDocument(bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return endDocument();
    }
}

bool  QXmlContentHandler_QtDShell::__override_endElement(const QString&  namespaceURI0, const QString&  localName1, const QString&  qName2, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return endElement((const QString& )namespaceURI0, (const QString& )localName1, (const QString& )qName2);
    }
}

bool  QXmlContentHandler_QtDShell::__override_endPrefixMapping(const QString&  prefix0, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return endPrefixMapping((const QString& )prefix0);
    }
}

QString  QXmlContentHandler_QtDShell::__override_errorString(bool static_call) const
{
    if (static_call) {
        return QString();
    } else {
        return errorString();
    }
}

bool  QXmlContentHandler_QtDShell::__override_ignorableWhitespace(const QString&  ch0, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return ignorableWhitespace((const QString& )ch0);
    }
}

bool  QXmlContentHandler_QtDShell::__override_processingInstruction(const QString&  target0, const QString&  data1, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return processingInstruction((const QString& )target0, (const QString& )data1);
    }
}

void QXmlContentHandler_QtDShell::__override_setDocumentLocator(QXmlLocator*  locator0, bool static_call)
{
    if (static_call) {
        return;
    } else {
        setDocumentLocator((QXmlLocator* )locator0);
    }
}

bool  QXmlContentHandler_QtDShell::__override_skippedEntity(const QString&  name0, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return skippedEntity((const QString& )name0);
    }
}

bool  QXmlContentHandler_QtDShell::__override_startDocument(bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return startDocument();
    }
}

bool  QXmlContentHandler_QtDShell::__override_startElement(const QString&  namespaceURI0, const QString&  localName1, const QString&  qName2, const QXmlAttributes&  atts3, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return startElement((const QString& )namespaceURI0, (const QString& )localName1, (const QString& )qName2, (const QXmlAttributes& )atts3);
    }
}

bool  QXmlContentHandler_QtDShell::__override_startPrefixMapping(const QString&  prefix0, const QString&  uri1, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return startPrefixMapping((const QString& )prefix0, (const QString& )uri1);
    }
}

// ---externC---
// QXmlContentHandler::()
QTD_EXTERN QTD_EXPORT void* qtd_QXmlContentHandler_QXmlContentHandler
(void *d_ptr)
{
    QXmlContentHandler_QtDShell *__qt_this = new QXmlContentHandler_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QXmlContentHandler::characters(const QString & ch)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlContentHandler_characters_string
(void* __this_nativeId,
 DArray ch0)
{
    QString __qt_ch0 = QString::fromUtf8((const char *)ch0.ptr, ch0.length);
    QXmlContentHandler_QtDShell *__qt_this = (QXmlContentHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlContentHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_characters((const QString& )__qt_ch0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlContentHandler::endDocument()
QTD_EXTERN QTD_EXPORT bool qtd_QXmlContentHandler_endDocument
(void* __this_nativeId)
{
    QXmlContentHandler_QtDShell *__qt_this = (QXmlContentHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlContentHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_endDocument(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlContentHandler::endElement(const QString & namespaceURI, const QString & localName, const QString & qName)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlContentHandler_endElement_string_string_string
(void* __this_nativeId,
 DArray namespaceURI0,
 DArray localName1,
 DArray qName2)
{
    QString __qt_namespaceURI0 = QString::fromUtf8((const char *)namespaceURI0.ptr, namespaceURI0.length);
    QString __qt_localName1 = QString::fromUtf8((const char *)localName1.ptr, localName1.length);
    QString __qt_qName2 = QString::fromUtf8((const char *)qName2.ptr, qName2.length);
    QXmlContentHandler_QtDShell *__qt_this = (QXmlContentHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlContentHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_endElement((const QString& )__qt_namespaceURI0, (const QString& )__qt_localName1, (const QString& )__qt_qName2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlContentHandler::endPrefixMapping(const QString & prefix)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlContentHandler_endPrefixMapping_string
(void* __this_nativeId,
 DArray prefix0)
{
    QString __qt_prefix0 = QString::fromUtf8((const char *)prefix0.ptr, prefix0.length);
    QXmlContentHandler_QtDShell *__qt_this = (QXmlContentHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlContentHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_endPrefixMapping((const QString& )__qt_prefix0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlContentHandler::errorString() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlContentHandler_errorString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlContentHandler_QtDShell *__qt_this = (QXmlContentHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlContentHandler*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_errorString(__do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlContentHandler::ignorableWhitespace(const QString & ch)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlContentHandler_ignorableWhitespace_string
(void* __this_nativeId,
 DArray ch0)
{
    QString __qt_ch0 = QString::fromUtf8((const char *)ch0.ptr, ch0.length);
    QXmlContentHandler_QtDShell *__qt_this = (QXmlContentHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlContentHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_ignorableWhitespace((const QString& )__qt_ch0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlContentHandler::processingInstruction(const QString & target, const QString & data)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlContentHandler_processingInstruction_string_string
(void* __this_nativeId,
 DArray target0,
 DArray data1)
{
    QString __qt_target0 = QString::fromUtf8((const char *)target0.ptr, target0.length);
    QString __qt_data1 = QString::fromUtf8((const char *)data1.ptr, data1.length);
    QXmlContentHandler_QtDShell *__qt_this = (QXmlContentHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlContentHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_processingInstruction((const QString& )__qt_target0, (const QString& )__qt_data1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlContentHandler::setDocumentLocator(QXmlLocator * locator)
QTD_EXTERN QTD_EXPORT void qtd_QXmlContentHandler_setDocumentLocator_QXmlLocator
(void* __this_nativeId,
 void* locator0)
{
    QXmlLocator*  __qt_locator0 = (QXmlLocator* ) locator0;
    QXmlContentHandler_QtDShell *__qt_this = (QXmlContentHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlContentHandler*)__this_nativeId) != NULL;
    __qt_this->__override_setDocumentLocator((QXmlLocator* )__qt_locator0, __do_static_call);

}

// QXmlContentHandler::skippedEntity(const QString & name)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlContentHandler_skippedEntity_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QXmlContentHandler_QtDShell *__qt_this = (QXmlContentHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlContentHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_skippedEntity((const QString& )__qt_name0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlContentHandler::startDocument()
QTD_EXTERN QTD_EXPORT bool qtd_QXmlContentHandler_startDocument
(void* __this_nativeId)
{
    QXmlContentHandler_QtDShell *__qt_this = (QXmlContentHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlContentHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_startDocument(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlContentHandler::startElement(const QString & namespaceURI, const QString & localName, const QString & qName, const QXmlAttributes & atts)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlContentHandler_startElement_string_string_string_QXmlAttributes
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
    QXmlContentHandler_QtDShell *__qt_this = (QXmlContentHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlContentHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_startElement((const QString& )__qt_namespaceURI0, (const QString& )__qt_localName1, (const QString& )__qt_qName2, (const QXmlAttributes& )__qt_atts3, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlContentHandler::startPrefixMapping(const QString & prefix, const QString & uri)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlContentHandler_startPrefixMapping_string_string
(void* __this_nativeId,
 DArray prefix0,
 DArray uri1)
{
    QString __qt_prefix0 = QString::fromUtf8((const char *)prefix0.ptr, prefix0.length);
    QString __qt_uri1 = QString::fromUtf8((const char *)uri1.ptr, uri1.length);
    QXmlContentHandler_QtDShell *__qt_this = (QXmlContentHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlContentHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_startPrefixMapping((const QString& )__qt_prefix0, (const QString& )__qt_uri1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


