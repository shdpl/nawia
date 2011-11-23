#include <QVariant>
#include <qxml.h>

#include "QXmlReader_shell.h"
#include <iostream>
#include <qxml.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QXmlReader_delete(void* nativeId)
{
    delete (QXmlReader_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlReader_destroy(void* nativeId)
{
    call_destructor((QXmlReader_QtDShell*)nativeId);
}

QXmlReader_QtDShell::QXmlReader_QtDShell(void *d_ptr)
    : QXmlReader(),
      QtdObjectLink(d_ptr)
{
}

QXmlReader_QtDShell::~QXmlReader_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QXmlReader_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QXmlReader*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(XML, void*, QXmlReader_DTDHandler_const_dispatch, (void *dId))
QTD_FUNC(XML, QXmlReader_DTDHandler_const_dispatch)
QXmlDTDHandler*  QXmlReader_QtDShell::DTDHandler() const
{
    return (QXmlDTDHandler*) qtd_QXmlReader_DTDHandler_const_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, void*, QXmlReader_contentHandler_const_dispatch, (void *dId))
QTD_FUNC(XML, QXmlReader_contentHandler_const_dispatch)
QXmlContentHandler*  QXmlReader_QtDShell::contentHandler() const
{
    return (QXmlContentHandler*) qtd_QXmlReader_contentHandler_const_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, void*, QXmlReader_declHandler_const_dispatch, (void *dId))
QTD_FUNC(XML, QXmlReader_declHandler_const_dispatch)
QXmlDeclHandler*  QXmlReader_QtDShell::declHandler() const
{
    return (QXmlDeclHandler*) qtd_QXmlReader_declHandler_const_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, void*, QXmlReader_entityResolver_const_dispatch, (void *dId))
QTD_FUNC(XML, QXmlReader_entityResolver_const_dispatch)
QXmlEntityResolver*  QXmlReader_QtDShell::entityResolver() const
{
    return (QXmlEntityResolver*) qtd_QXmlReader_entityResolver_const_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, void*, QXmlReader_errorHandler_const_dispatch, (void *dId))
QTD_FUNC(XML, QXmlReader_errorHandler_const_dispatch)
QXmlErrorHandler*  QXmlReader_QtDShell::errorHandler() const
{
    return (QXmlErrorHandler*) qtd_QXmlReader_errorHandler_const_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, bool, QXmlReader_feature_string_nativepointerbool_const_dispatch, (void *dId, const unsigned short* name0, int name0_size))
QTD_FUNC(XML, QXmlReader_feature_string_nativepointerbool_const_dispatch)
bool  QXmlReader_QtDShell::feature(const QString&  name0, bool*  ok1) const
{
    return qtd_QXmlReader_feature_string_nativepointerbool_const_dispatch(this->dId, name0.utf16(), name0.size());
}

QTD_FUNC_DECL(XML, bool, QXmlReader_hasFeature_string_const_dispatch, (void *dId, const unsigned short* name0, int name0_size))
QTD_FUNC(XML, QXmlReader_hasFeature_string_const_dispatch)
bool  QXmlReader_QtDShell::hasFeature(const QString&  name0) const
{
    return qtd_QXmlReader_hasFeature_string_const_dispatch(this->dId, name0.utf16(), name0.size());
}

QTD_FUNC_DECL(XML, bool, QXmlReader_hasProperty_string_const_dispatch, (void *dId, const unsigned short* name0, int name0_size))
QTD_FUNC(XML, QXmlReader_hasProperty_string_const_dispatch)
bool  QXmlReader_QtDShell::hasProperty(const QString&  name0) const
{
    return qtd_QXmlReader_hasProperty_string_const_dispatch(this->dId, name0.utf16(), name0.size());
}

QTD_FUNC_DECL(XML, void*, QXmlReader_lexicalHandler_const_dispatch, (void *dId))
QTD_FUNC(XML, QXmlReader_lexicalHandler_const_dispatch)
QXmlLexicalHandler*  QXmlReader_QtDShell::lexicalHandler() const
{
    return (QXmlLexicalHandler*) qtd_QXmlReader_lexicalHandler_const_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, bool, QXmlReader_parse_QXmlInputSource_dispatch, (void *dId, void* input0))
QTD_FUNC(XML, QXmlReader_parse_QXmlInputSource_dispatch)
bool  QXmlReader_QtDShell::parse(const QXmlInputSource*  input0)
{
    return qtd_QXmlReader_parse_QXmlInputSource_dispatch(this->dId, (QXmlInputSource* )input0);
}

QTD_FUNC_DECL(XML, void, QXmlReader_setContentHandler_QXmlContentHandler_dispatch, (void *dId, void* handler0))
QTD_FUNC(XML, QXmlReader_setContentHandler_QXmlContentHandler_dispatch)
void QXmlReader_QtDShell::setContentHandler(QXmlContentHandler*  handler0)
{
    qtd_QXmlReader_setContentHandler_QXmlContentHandler_dispatch(this->dId, (QXmlContentHandler* )handler0);
}

QTD_FUNC_DECL(XML, void, QXmlReader_setDTDHandler_QXmlDTDHandler_dispatch, (void *dId, void* handler0))
QTD_FUNC(XML, QXmlReader_setDTDHandler_QXmlDTDHandler_dispatch)
void QXmlReader_QtDShell::setDTDHandler(QXmlDTDHandler*  handler0)
{
    qtd_QXmlReader_setDTDHandler_QXmlDTDHandler_dispatch(this->dId, (QXmlDTDHandler* )handler0);
}

QTD_FUNC_DECL(XML, void, QXmlReader_setDeclHandler_QXmlDeclHandler_dispatch, (void *dId, void* handler0))
QTD_FUNC(XML, QXmlReader_setDeclHandler_QXmlDeclHandler_dispatch)
void QXmlReader_QtDShell::setDeclHandler(QXmlDeclHandler*  handler0)
{
    qtd_QXmlReader_setDeclHandler_QXmlDeclHandler_dispatch(this->dId, (QXmlDeclHandler* )handler0);
}

QTD_FUNC_DECL(XML, void, QXmlReader_setEntityResolver_QXmlEntityResolver_dispatch, (void *dId, void* handler0))
QTD_FUNC(XML, QXmlReader_setEntityResolver_QXmlEntityResolver_dispatch)
void QXmlReader_QtDShell::setEntityResolver(QXmlEntityResolver*  handler0)
{
    qtd_QXmlReader_setEntityResolver_QXmlEntityResolver_dispatch(this->dId, (QXmlEntityResolver* )handler0);
}

QTD_FUNC_DECL(XML, void, QXmlReader_setErrorHandler_QXmlErrorHandler_dispatch, (void *dId, void* handler0))
QTD_FUNC(XML, QXmlReader_setErrorHandler_QXmlErrorHandler_dispatch)
void QXmlReader_QtDShell::setErrorHandler(QXmlErrorHandler*  handler0)
{
    qtd_QXmlReader_setErrorHandler_QXmlErrorHandler_dispatch(this->dId, (QXmlErrorHandler* )handler0);
}

QTD_FUNC_DECL(XML, void, QXmlReader_setFeature_string_bool_dispatch, (void *dId, const unsigned short* name0, int name0_size, bool value1))
QTD_FUNC(XML, QXmlReader_setFeature_string_bool_dispatch)
void QXmlReader_QtDShell::setFeature(const QString&  name0, bool  value1)
{
    qtd_QXmlReader_setFeature_string_bool_dispatch(this->dId, name0.utf16(), name0.size(), (bool )value1);
}

QTD_FUNC_DECL(XML, void, QXmlReader_setLexicalHandler_QXmlLexicalHandler_dispatch, (void *dId, void* handler0))
QTD_FUNC(XML, QXmlReader_setLexicalHandler_QXmlLexicalHandler_dispatch)
void QXmlReader_QtDShell::setLexicalHandler(QXmlLexicalHandler*  handler0)
{
    qtd_QXmlReader_setLexicalHandler_QXmlLexicalHandler_dispatch(this->dId, (QXmlLexicalHandler* )handler0);
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlReader_initCallBacks(VoidFunc *virts) {
    qtd_QXmlReader_DTDHandler_const_dispatch = (qtd_QXmlReader_DTDHandler_const_dispatch_t) virts[0];
    qtd_QXmlReader_contentHandler_const_dispatch = (qtd_QXmlReader_contentHandler_const_dispatch_t) virts[1];
    qtd_QXmlReader_declHandler_const_dispatch = (qtd_QXmlReader_declHandler_const_dispatch_t) virts[2];
    qtd_QXmlReader_entityResolver_const_dispatch = (qtd_QXmlReader_entityResolver_const_dispatch_t) virts[3];
    qtd_QXmlReader_errorHandler_const_dispatch = (qtd_QXmlReader_errorHandler_const_dispatch_t) virts[4];
    qtd_QXmlReader_feature_string_nativepointerbool_const_dispatch = (qtd_QXmlReader_feature_string_nativepointerbool_const_dispatch_t) virts[5];
    qtd_QXmlReader_hasFeature_string_const_dispatch = (qtd_QXmlReader_hasFeature_string_const_dispatch_t) virts[6];
    qtd_QXmlReader_hasProperty_string_const_dispatch = (qtd_QXmlReader_hasProperty_string_const_dispatch_t) virts[7];
    qtd_QXmlReader_lexicalHandler_const_dispatch = (qtd_QXmlReader_lexicalHandler_const_dispatch_t) virts[8];
    qtd_QXmlReader_parse_QXmlInputSource_dispatch = (qtd_QXmlReader_parse_QXmlInputSource_dispatch_t) virts[9];
    qtd_QXmlReader_setContentHandler_QXmlContentHandler_dispatch = (qtd_QXmlReader_setContentHandler_QXmlContentHandler_dispatch_t) virts[10];
    qtd_QXmlReader_setDTDHandler_QXmlDTDHandler_dispatch = (qtd_QXmlReader_setDTDHandler_QXmlDTDHandler_dispatch_t) virts[11];
    qtd_QXmlReader_setDeclHandler_QXmlDeclHandler_dispatch = (qtd_QXmlReader_setDeclHandler_QXmlDeclHandler_dispatch_t) virts[12];
    qtd_QXmlReader_setEntityResolver_QXmlEntityResolver_dispatch = (qtd_QXmlReader_setEntityResolver_QXmlEntityResolver_dispatch_t) virts[13];
    qtd_QXmlReader_setErrorHandler_QXmlErrorHandler_dispatch = (qtd_QXmlReader_setErrorHandler_QXmlErrorHandler_dispatch_t) virts[14];
    qtd_QXmlReader_setFeature_string_bool_dispatch = (qtd_QXmlReader_setFeature_string_bool_dispatch_t) virts[15];
    qtd_QXmlReader_setLexicalHandler_QXmlLexicalHandler_dispatch = (qtd_QXmlReader_setLexicalHandler_QXmlLexicalHandler_dispatch_t) virts[16];
}
// Functions in shell class
bool  QXmlReader_QtDShell::parse(const QXmlInputSource&  input0)
{
    Q_UNUSED(input0)
    return false;
}

void*  QXmlReader_QtDShell::property(const QString&  name0, bool*  ok1) const
{
    Q_UNUSED(name0)
    Q_UNUSED(ok1)
    return 0;
}

void QXmlReader_QtDShell::setProperty(const QString&  name0, void*  value1)
{
    Q_UNUSED(name0)
    Q_UNUSED(value1)
    return;
}

// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QXmlDTDHandler*  QXmlReader_QtDShell::__override_DTDHandler(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return DTDHandler();
    }
}

QXmlContentHandler*  QXmlReader_QtDShell::__override_contentHandler(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return contentHandler();
    }
}

QXmlDeclHandler*  QXmlReader_QtDShell::__override_declHandler(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return declHandler();
    }
}

QXmlEntityResolver*  QXmlReader_QtDShell::__override_entityResolver(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return entityResolver();
    }
}

QXmlErrorHandler*  QXmlReader_QtDShell::__override_errorHandler(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return errorHandler();
    }
}

bool  QXmlReader_QtDShell::__override_feature(const QString&  name0, bool*  ok1, bool static_call) const
{
    if (static_call) {
        return false;
    } else {
        return feature((const QString& )name0, (bool* )ok1);
    }
}

bool  QXmlReader_QtDShell::__override_hasFeature(const QString&  name0, bool static_call) const
{
    if (static_call) {
        return false;
    } else {
        return hasFeature((const QString& )name0);
    }
}

bool  QXmlReader_QtDShell::__override_hasProperty(const QString&  name0, bool static_call) const
{
    if (static_call) {
        return false;
    } else {
        return hasProperty((const QString& )name0);
    }
}

QXmlLexicalHandler*  QXmlReader_QtDShell::__override_lexicalHandler(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return lexicalHandler();
    }
}

bool  QXmlReader_QtDShell::__override_parse(const QXmlInputSource*  input0, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return parse((const QXmlInputSource* )input0);
    }
}

void QXmlReader_QtDShell::__override_setContentHandler(QXmlContentHandler*  handler0, bool static_call)
{
    if (static_call) {
        return;
    } else {
        setContentHandler((QXmlContentHandler* )handler0);
    }
}

void QXmlReader_QtDShell::__override_setDTDHandler(QXmlDTDHandler*  handler0, bool static_call)
{
    if (static_call) {
        return;
    } else {
        setDTDHandler((QXmlDTDHandler* )handler0);
    }
}

void QXmlReader_QtDShell::__override_setDeclHandler(QXmlDeclHandler*  handler0, bool static_call)
{
    if (static_call) {
        return;
    } else {
        setDeclHandler((QXmlDeclHandler* )handler0);
    }
}

void QXmlReader_QtDShell::__override_setEntityResolver(QXmlEntityResolver*  handler0, bool static_call)
{
    if (static_call) {
        return;
    } else {
        setEntityResolver((QXmlEntityResolver* )handler0);
    }
}

void QXmlReader_QtDShell::__override_setErrorHandler(QXmlErrorHandler*  handler0, bool static_call)
{
    if (static_call) {
        return;
    } else {
        setErrorHandler((QXmlErrorHandler* )handler0);
    }
}

void QXmlReader_QtDShell::__override_setFeature(const QString&  name0, bool  value1, bool static_call)
{
    if (static_call) {
        return;
    } else {
        setFeature((const QString& )name0, (bool )value1);
    }
}

void QXmlReader_QtDShell::__override_setLexicalHandler(QXmlLexicalHandler*  handler0, bool static_call)
{
    if (static_call) {
        return;
    } else {
        setLexicalHandler((QXmlLexicalHandler* )handler0);
    }
}

// ---externC---
// QXmlReader::()
QTD_EXTERN QTD_EXPORT void* qtd_QXmlReader_QXmlReader
(void *d_ptr)
{
    QXmlReader_QtDShell *__qt_this = new QXmlReader_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QXmlReader::DTDHandler() const
QTD_EXTERN QTD_EXPORT void* qtd_QXmlReader_DTDHandler_const
(void* __this_nativeId)
{
    QXmlReader_QtDShell *__qt_this = (QXmlReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    QXmlDTDHandler*  __qt_return_value = __qt_this->__override_DTDHandler(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QXmlReader::contentHandler() const
QTD_EXTERN QTD_EXPORT void* qtd_QXmlReader_contentHandler_const
(void* __this_nativeId)
{
    QXmlReader_QtDShell *__qt_this = (QXmlReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    QXmlContentHandler*  __qt_return_value = __qt_this->__override_contentHandler(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QXmlReader::declHandler() const
QTD_EXTERN QTD_EXPORT void* qtd_QXmlReader_declHandler_const
(void* __this_nativeId)
{
    QXmlReader_QtDShell *__qt_this = (QXmlReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    QXmlDeclHandler*  __qt_return_value = __qt_this->__override_declHandler(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QXmlReader::entityResolver() const
QTD_EXTERN QTD_EXPORT void* qtd_QXmlReader_entityResolver_const
(void* __this_nativeId)
{
    QXmlReader_QtDShell *__qt_this = (QXmlReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    QXmlEntityResolver*  __qt_return_value = __qt_this->__override_entityResolver(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QXmlReader::errorHandler() const
QTD_EXTERN QTD_EXPORT void* qtd_QXmlReader_errorHandler_const
(void* __this_nativeId)
{
    QXmlReader_QtDShell *__qt_this = (QXmlReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    QXmlErrorHandler*  __qt_return_value = __qt_this->__override_errorHandler(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QXmlReader::feature(const QString & name, bool * ok) const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlReader_feature_string_nativepointerbool_const
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    
    bool *__qt_ok1 = 0;
    
    QXmlReader_QtDShell *__qt_this = (QXmlReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_feature((const QString& )__qt_name0, (bool* )__qt_ok1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlReader::hasFeature(const QString & name) const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlReader_hasFeature_string_const
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QXmlReader_QtDShell *__qt_this = (QXmlReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasFeature((const QString& )__qt_name0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlReader::hasProperty(const QString & name) const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlReader_hasProperty_string_const
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QXmlReader_QtDShell *__qt_this = (QXmlReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasProperty((const QString& )__qt_name0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlReader::lexicalHandler() const
QTD_EXTERN QTD_EXPORT void* qtd_QXmlReader_lexicalHandler_const
(void* __this_nativeId)
{
    QXmlReader_QtDShell *__qt_this = (QXmlReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    QXmlLexicalHandler*  __qt_return_value = __qt_this->__override_lexicalHandler(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QXmlReader::parse(const QXmlInputSource * input)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlReader_parse_QXmlInputSource
(void* __this_nativeId,
 void* input0)
{
    const QXmlInputSource*  __qt_input0 = (const QXmlInputSource* ) input0;
    QXmlReader_QtDShell *__qt_this = (QXmlReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_parse((const QXmlInputSource* )__qt_input0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlReader::setContentHandler(QXmlContentHandler * handler)
QTD_EXTERN QTD_EXPORT void qtd_QXmlReader_setContentHandler_QXmlContentHandler
(void* __this_nativeId,
 void* handler0)
{
    QXmlContentHandler*  __qt_handler0 = (QXmlContentHandler* ) handler0;
    QXmlReader_QtDShell *__qt_this = (QXmlReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    __qt_this->__override_setContentHandler((QXmlContentHandler* )__qt_handler0, __do_static_call);

}

// QXmlReader::setDTDHandler(QXmlDTDHandler * handler)
QTD_EXTERN QTD_EXPORT void qtd_QXmlReader_setDTDHandler_QXmlDTDHandler
(void* __this_nativeId,
 void* handler0)
{
    QXmlDTDHandler*  __qt_handler0 = (QXmlDTDHandler* ) handler0;
    QXmlReader_QtDShell *__qt_this = (QXmlReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    __qt_this->__override_setDTDHandler((QXmlDTDHandler* )__qt_handler0, __do_static_call);

}

// QXmlReader::setDeclHandler(QXmlDeclHandler * handler)
QTD_EXTERN QTD_EXPORT void qtd_QXmlReader_setDeclHandler_QXmlDeclHandler
(void* __this_nativeId,
 void* handler0)
{
    QXmlDeclHandler*  __qt_handler0 = (QXmlDeclHandler* ) handler0;
    QXmlReader_QtDShell *__qt_this = (QXmlReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    __qt_this->__override_setDeclHandler((QXmlDeclHandler* )__qt_handler0, __do_static_call);

}

// QXmlReader::setEntityResolver(QXmlEntityResolver * handler)
QTD_EXTERN QTD_EXPORT void qtd_QXmlReader_setEntityResolver_QXmlEntityResolver
(void* __this_nativeId,
 void* handler0)
{
    QXmlEntityResolver*  __qt_handler0 = (QXmlEntityResolver* ) handler0;
    QXmlReader_QtDShell *__qt_this = (QXmlReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    __qt_this->__override_setEntityResolver((QXmlEntityResolver* )__qt_handler0, __do_static_call);

}

// QXmlReader::setErrorHandler(QXmlErrorHandler * handler)
QTD_EXTERN QTD_EXPORT void qtd_QXmlReader_setErrorHandler_QXmlErrorHandler
(void* __this_nativeId,
 void* handler0)
{
    QXmlErrorHandler*  __qt_handler0 = (QXmlErrorHandler* ) handler0;
    QXmlReader_QtDShell *__qt_this = (QXmlReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    __qt_this->__override_setErrorHandler((QXmlErrorHandler* )__qt_handler0, __do_static_call);

}

// QXmlReader::setFeature(const QString & name, bool value)
QTD_EXTERN QTD_EXPORT void qtd_QXmlReader_setFeature_string_bool
(void* __this_nativeId,
 DArray name0,
 bool value1)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QXmlReader_QtDShell *__qt_this = (QXmlReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    __qt_this->__override_setFeature((const QString& )__qt_name0, (bool )value1, __do_static_call);

}

// QXmlReader::setLexicalHandler(QXmlLexicalHandler * handler)
QTD_EXTERN QTD_EXPORT void qtd_QXmlReader_setLexicalHandler_QXmlLexicalHandler
(void* __this_nativeId,
 void* handler0)
{
    QXmlLexicalHandler*  __qt_handler0 = (QXmlLexicalHandler* ) handler0;
    QXmlReader_QtDShell *__qt_this = (QXmlReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    __qt_this->__override_setLexicalHandler((QXmlLexicalHandler* )__qt_handler0, __do_static_call);

}

// ---externC---end
// Field accessors


