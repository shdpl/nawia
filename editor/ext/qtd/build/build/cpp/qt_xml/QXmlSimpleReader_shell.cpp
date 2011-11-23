#include <QVariant>
#include <qxml.h>

#include "QXmlSimpleReader_shell.h"
#include <iostream>
#include <qxml.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QXmlSimpleReader_QtDShell::QXmlSimpleReader_QtDShell(void *d_ptr)
    : QXmlSimpleReader(),
      QtdObjectLink(d_ptr)
{
}

QXmlSimpleReader_QtDShell::~QXmlSimpleReader_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QXmlSimpleReader_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QXmlSimpleReader*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(XML, void*, QXmlReader_DTDHandler_const_dispatch, (void *dId))
QXmlDTDHandler*  QXmlSimpleReader_QtDShell::DTDHandler() const
{
    return (QXmlDTDHandler*) qtd_QXmlReader_DTDHandler_const_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, void*, QXmlReader_contentHandler_const_dispatch, (void *dId))
QXmlContentHandler*  QXmlSimpleReader_QtDShell::contentHandler() const
{
    return (QXmlContentHandler*) qtd_QXmlReader_contentHandler_const_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, void*, QXmlReader_declHandler_const_dispatch, (void *dId))
QXmlDeclHandler*  QXmlSimpleReader_QtDShell::declHandler() const
{
    return (QXmlDeclHandler*) qtd_QXmlReader_declHandler_const_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, void*, QXmlReader_entityResolver_const_dispatch, (void *dId))
QXmlEntityResolver*  QXmlSimpleReader_QtDShell::entityResolver() const
{
    return (QXmlEntityResolver*) qtd_QXmlReader_entityResolver_const_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, void*, QXmlReader_errorHandler_const_dispatch, (void *dId))
QXmlErrorHandler*  QXmlSimpleReader_QtDShell::errorHandler() const
{
    return (QXmlErrorHandler*) qtd_QXmlReader_errorHandler_const_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, bool, QXmlReader_feature_string_nativepointerbool_const_dispatch, (void *dId, const unsigned short* name0, int name0_size))
bool  QXmlSimpleReader_QtDShell::feature(const QString&  name0, bool*  ok1) const
{
    return qtd_QXmlReader_feature_string_nativepointerbool_const_dispatch(this->dId, name0.utf16(), name0.size());
}

QTD_FUNC_DECL(XML, bool, QXmlReader_hasFeature_string_const_dispatch, (void *dId, const unsigned short* name0, int name0_size))
bool  QXmlSimpleReader_QtDShell::hasFeature(const QString&  name0) const
{
    return qtd_QXmlReader_hasFeature_string_const_dispatch(this->dId, name0.utf16(), name0.size());
}

QTD_FUNC_DECL(XML, bool, QXmlReader_hasProperty_string_const_dispatch, (void *dId, const unsigned short* name0, int name0_size))
bool  QXmlSimpleReader_QtDShell::hasProperty(const QString&  name0) const
{
    return qtd_QXmlReader_hasProperty_string_const_dispatch(this->dId, name0.utf16(), name0.size());
}

QTD_FUNC_DECL(XML, void*, QXmlReader_lexicalHandler_const_dispatch, (void *dId))
QXmlLexicalHandler*  QXmlSimpleReader_QtDShell::lexicalHandler() const
{
    return (QXmlLexicalHandler*) qtd_QXmlReader_lexicalHandler_const_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, bool, QXmlReader_parse_QXmlInputSource_dispatch, (void *dId, void* input0))
bool  QXmlSimpleReader_QtDShell::parse(const QXmlInputSource*  input0)
{
    return qtd_QXmlReader_parse_QXmlInputSource_dispatch(this->dId, (QXmlInputSource* )input0);
}

QTD_FUNC_DECL(XML, bool, QXmlSimpleReader_parse_QXmlInputSource_bool_dispatch, (void *dId, void* input0, bool incremental1))
QTD_FUNC(XML, QXmlSimpleReader_parse_QXmlInputSource_bool_dispatch)
bool  QXmlSimpleReader_QtDShell::parse(const QXmlInputSource*  input0, bool  incremental1)
{
    return qtd_QXmlSimpleReader_parse_QXmlInputSource_bool_dispatch(this->dId, (QXmlInputSource* )input0, (bool )incremental1);
}

QTD_FUNC_DECL(XML, bool, QXmlSimpleReader_parseContinue_dispatch, (void *dId))
QTD_FUNC(XML, QXmlSimpleReader_parseContinue_dispatch)
bool  QXmlSimpleReader_QtDShell::parseContinue()
{
    return qtd_QXmlSimpleReader_parseContinue_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, void, QXmlReader_setContentHandler_QXmlContentHandler_dispatch, (void *dId, void* handler0))
void QXmlSimpleReader_QtDShell::setContentHandler(QXmlContentHandler*  handler0)
{
    qtd_QXmlReader_setContentHandler_QXmlContentHandler_dispatch(this->dId, (QXmlContentHandler* )handler0);
}

QTD_FUNC_DECL(XML, void, QXmlReader_setDTDHandler_QXmlDTDHandler_dispatch, (void *dId, void* handler0))
void QXmlSimpleReader_QtDShell::setDTDHandler(QXmlDTDHandler*  handler0)
{
    qtd_QXmlReader_setDTDHandler_QXmlDTDHandler_dispatch(this->dId, (QXmlDTDHandler* )handler0);
}

QTD_FUNC_DECL(XML, void, QXmlReader_setDeclHandler_QXmlDeclHandler_dispatch, (void *dId, void* handler0))
void QXmlSimpleReader_QtDShell::setDeclHandler(QXmlDeclHandler*  handler0)
{
    qtd_QXmlReader_setDeclHandler_QXmlDeclHandler_dispatch(this->dId, (QXmlDeclHandler* )handler0);
}

QTD_FUNC_DECL(XML, void, QXmlReader_setEntityResolver_QXmlEntityResolver_dispatch, (void *dId, void* handler0))
void QXmlSimpleReader_QtDShell::setEntityResolver(QXmlEntityResolver*  handler0)
{
    qtd_QXmlReader_setEntityResolver_QXmlEntityResolver_dispatch(this->dId, (QXmlEntityResolver* )handler0);
}

QTD_FUNC_DECL(XML, void, QXmlReader_setErrorHandler_QXmlErrorHandler_dispatch, (void *dId, void* handler0))
void QXmlSimpleReader_QtDShell::setErrorHandler(QXmlErrorHandler*  handler0)
{
    qtd_QXmlReader_setErrorHandler_QXmlErrorHandler_dispatch(this->dId, (QXmlErrorHandler* )handler0);
}

QTD_FUNC_DECL(XML, void, QXmlReader_setFeature_string_bool_dispatch, (void *dId, const unsigned short* name0, int name0_size, bool value1))
void QXmlSimpleReader_QtDShell::setFeature(const QString&  name0, bool  value1)
{
    qtd_QXmlReader_setFeature_string_bool_dispatch(this->dId, name0.utf16(), name0.size(), (bool )value1);
}

QTD_FUNC_DECL(XML, void, QXmlReader_setLexicalHandler_QXmlLexicalHandler_dispatch, (void *dId, void* handler0))
void QXmlSimpleReader_QtDShell::setLexicalHandler(QXmlLexicalHandler*  handler0)
{
    qtd_QXmlReader_setLexicalHandler_QXmlLexicalHandler_dispatch(this->dId, (QXmlLexicalHandler* )handler0);
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlSimpleReader_initCallBacks(VoidFunc *virts) {
    qtd_QXmlSimpleReader_parse_QXmlInputSource_bool_dispatch = (qtd_QXmlSimpleReader_parse_QXmlInputSource_bool_dispatch_t) virts[0];
    qtd_QXmlSimpleReader_parseContinue_dispatch = (qtd_QXmlSimpleReader_parseContinue_dispatch_t) virts[1];
}
// Functions in shell class
void*  QXmlSimpleReader_QtDShell::property(const QString&  name0, bool*  ok1) const
{
    return QXmlSimpleReader::property((const QString& )name0, (bool* )ok1);
}

void QXmlSimpleReader_QtDShell::setProperty(const QString&  name0, void*  value1)
{
    QXmlSimpleReader::setProperty((const QString& )name0, (void* )value1);
}

// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QXmlDTDHandler*  QXmlSimpleReader_QtDShell::__override_DTDHandler(bool static_call) const
{
    if (static_call) {
        return QXmlSimpleReader::DTDHandler();
    } else {
        return DTDHandler();
    }
}

QXmlContentHandler*  QXmlSimpleReader_QtDShell::__override_contentHandler(bool static_call) const
{
    if (static_call) {
        return QXmlSimpleReader::contentHandler();
    } else {
        return contentHandler();
    }
}

QXmlDeclHandler*  QXmlSimpleReader_QtDShell::__override_declHandler(bool static_call) const
{
    if (static_call) {
        return QXmlSimpleReader::declHandler();
    } else {
        return declHandler();
    }
}

QXmlEntityResolver*  QXmlSimpleReader_QtDShell::__override_entityResolver(bool static_call) const
{
    if (static_call) {
        return QXmlSimpleReader::entityResolver();
    } else {
        return entityResolver();
    }
}

QXmlErrorHandler*  QXmlSimpleReader_QtDShell::__override_errorHandler(bool static_call) const
{
    if (static_call) {
        return QXmlSimpleReader::errorHandler();
    } else {
        return errorHandler();
    }
}

bool  QXmlSimpleReader_QtDShell::__override_feature(const QString&  name0, bool*  ok1, bool static_call) const
{
    if (static_call) {
        return QXmlSimpleReader::feature((const QString& )name0, (bool* )ok1);
    } else {
        return feature((const QString& )name0, (bool* )ok1);
    }
}

bool  QXmlSimpleReader_QtDShell::__override_hasFeature(const QString&  name0, bool static_call) const
{
    if (static_call) {
        return QXmlSimpleReader::hasFeature((const QString& )name0);
    } else {
        return hasFeature((const QString& )name0);
    }
}

bool  QXmlSimpleReader_QtDShell::__override_hasProperty(const QString&  name0, bool static_call) const
{
    if (static_call) {
        return QXmlSimpleReader::hasProperty((const QString& )name0);
    } else {
        return hasProperty((const QString& )name0);
    }
}

QXmlLexicalHandler*  QXmlSimpleReader_QtDShell::__override_lexicalHandler(bool static_call) const
{
    if (static_call) {
        return QXmlSimpleReader::lexicalHandler();
    } else {
        return lexicalHandler();
    }
}

bool  QXmlSimpleReader_QtDShell::__override_parse(const QXmlInputSource*  input0, bool static_call)
{
    if (static_call) {
        return QXmlSimpleReader::parse((const QXmlInputSource* )input0);
    } else {
        return parse((const QXmlInputSource* )input0);
    }
}

bool  QXmlSimpleReader_QtDShell::__override_parse(const QXmlInputSource*  input0, bool  incremental1, bool static_call)
{
    if (static_call) {
        return QXmlSimpleReader::parse((const QXmlInputSource* )input0, (bool )incremental1);
    } else {
        return parse((const QXmlInputSource* )input0, (bool )incremental1);
    }
}

bool  QXmlSimpleReader_QtDShell::__override_parseContinue(bool static_call)
{
    if (static_call) {
        return QXmlSimpleReader::parseContinue();
    } else {
        return parseContinue();
    }
}

void QXmlSimpleReader_QtDShell::__override_setContentHandler(QXmlContentHandler*  handler0, bool static_call)
{
    if (static_call) {
        QXmlSimpleReader::setContentHandler((QXmlContentHandler* )handler0);
    } else {
        setContentHandler((QXmlContentHandler* )handler0);
    }
}

void QXmlSimpleReader_QtDShell::__override_setDTDHandler(QXmlDTDHandler*  handler0, bool static_call)
{
    if (static_call) {
        QXmlSimpleReader::setDTDHandler((QXmlDTDHandler* )handler0);
    } else {
        setDTDHandler((QXmlDTDHandler* )handler0);
    }
}

void QXmlSimpleReader_QtDShell::__override_setDeclHandler(QXmlDeclHandler*  handler0, bool static_call)
{
    if (static_call) {
        QXmlSimpleReader::setDeclHandler((QXmlDeclHandler* )handler0);
    } else {
        setDeclHandler((QXmlDeclHandler* )handler0);
    }
}

void QXmlSimpleReader_QtDShell::__override_setEntityResolver(QXmlEntityResolver*  handler0, bool static_call)
{
    if (static_call) {
        QXmlSimpleReader::setEntityResolver((QXmlEntityResolver* )handler0);
    } else {
        setEntityResolver((QXmlEntityResolver* )handler0);
    }
}

void QXmlSimpleReader_QtDShell::__override_setErrorHandler(QXmlErrorHandler*  handler0, bool static_call)
{
    if (static_call) {
        QXmlSimpleReader::setErrorHandler((QXmlErrorHandler* )handler0);
    } else {
        setErrorHandler((QXmlErrorHandler* )handler0);
    }
}

void QXmlSimpleReader_QtDShell::__override_setFeature(const QString&  name0, bool  value1, bool static_call)
{
    if (static_call) {
        QXmlSimpleReader::setFeature((const QString& )name0, (bool )value1);
    } else {
        setFeature((const QString& )name0, (bool )value1);
    }
}

void QXmlSimpleReader_QtDShell::__override_setLexicalHandler(QXmlLexicalHandler*  handler0, bool static_call)
{
    if (static_call) {
        QXmlSimpleReader::setLexicalHandler((QXmlLexicalHandler* )handler0);
    } else {
        setLexicalHandler((QXmlLexicalHandler* )handler0);
    }
}

// ---externC---
// QXmlSimpleReader::QXmlSimpleReader()
QTD_EXTERN QTD_EXPORT void* qtd_QXmlSimpleReader_QXmlSimpleReader
(void *d_ptr)
{
    QXmlSimpleReader_QtDShell *__qt_this = new QXmlSimpleReader_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QXmlSimpleReader::DTDHandler() const
QTD_EXTERN QTD_EXPORT void* qtd_QXmlSimpleReader_DTDHandler_const
(void* __this_nativeId)
{
    QXmlSimpleReader_QtDShell *__qt_this = (QXmlSimpleReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    QXmlDTDHandler*  __qt_return_value = __qt_this->__override_DTDHandler(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QXmlSimpleReader::contentHandler() const
QTD_EXTERN QTD_EXPORT void* qtd_QXmlSimpleReader_contentHandler_const
(void* __this_nativeId)
{
    QXmlSimpleReader_QtDShell *__qt_this = (QXmlSimpleReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    QXmlContentHandler*  __qt_return_value = __qt_this->__override_contentHandler(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QXmlSimpleReader::declHandler() const
QTD_EXTERN QTD_EXPORT void* qtd_QXmlSimpleReader_declHandler_const
(void* __this_nativeId)
{
    QXmlSimpleReader_QtDShell *__qt_this = (QXmlSimpleReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    QXmlDeclHandler*  __qt_return_value = __qt_this->__override_declHandler(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QXmlSimpleReader::entityResolver() const
QTD_EXTERN QTD_EXPORT void* qtd_QXmlSimpleReader_entityResolver_const
(void* __this_nativeId)
{
    QXmlSimpleReader_QtDShell *__qt_this = (QXmlSimpleReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    QXmlEntityResolver*  __qt_return_value = __qt_this->__override_entityResolver(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QXmlSimpleReader::errorHandler() const
QTD_EXTERN QTD_EXPORT void* qtd_QXmlSimpleReader_errorHandler_const
(void* __this_nativeId)
{
    QXmlSimpleReader_QtDShell *__qt_this = (QXmlSimpleReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    QXmlErrorHandler*  __qt_return_value = __qt_this->__override_errorHandler(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QXmlSimpleReader::feature(const QString & name, bool * ok) const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlSimpleReader_feature_string_nativepointerbool_const
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    
    bool *__qt_ok1 = 0;
    
    QXmlSimpleReader_QtDShell *__qt_this = (QXmlSimpleReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_feature((const QString& )__qt_name0, (bool* )__qt_ok1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlSimpleReader::hasFeature(const QString & name) const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlSimpleReader_hasFeature_string_const
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QXmlSimpleReader_QtDShell *__qt_this = (QXmlSimpleReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasFeature((const QString& )__qt_name0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlSimpleReader::hasProperty(const QString & name) const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlSimpleReader_hasProperty_string_const
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QXmlSimpleReader_QtDShell *__qt_this = (QXmlSimpleReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasProperty((const QString& )__qt_name0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlSimpleReader::lexicalHandler() const
QTD_EXTERN QTD_EXPORT void* qtd_QXmlSimpleReader_lexicalHandler_const
(void* __this_nativeId)
{
    QXmlSimpleReader_QtDShell *__qt_this = (QXmlSimpleReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    QXmlLexicalHandler*  __qt_return_value = __qt_this->__override_lexicalHandler(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QXmlSimpleReader::parse(const QXmlInputSource * input)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlSimpleReader_parse_QXmlInputSource
(void* __this_nativeId,
 void* input0)
{
    const QXmlInputSource*  __qt_input0 = (const QXmlInputSource* ) input0;
    QXmlSimpleReader_QtDShell *__qt_this = (QXmlSimpleReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_parse((const QXmlInputSource* )__qt_input0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlSimpleReader::parse(const QXmlInputSource * input, bool incremental)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlSimpleReader_parse_QXmlInputSource_bool
(void* __this_nativeId,
 void* input0,
 bool incremental1)
{
    const QXmlInputSource*  __qt_input0 = (const QXmlInputSource* ) input0;
    QXmlSimpleReader_QtDShell *__qt_this = (QXmlSimpleReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_parse((const QXmlInputSource* )__qt_input0, (bool )incremental1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlSimpleReader::parseContinue()
QTD_EXTERN QTD_EXPORT bool qtd_QXmlSimpleReader_parseContinue
(void* __this_nativeId)
{
    QXmlSimpleReader_QtDShell *__qt_this = (QXmlSimpleReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_parseContinue(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlSimpleReader::setContentHandler(QXmlContentHandler * handler)
QTD_EXTERN QTD_EXPORT void qtd_QXmlSimpleReader_setContentHandler_QXmlContentHandler
(void* __this_nativeId,
 void* handler0)
{
    QXmlContentHandler*  __qt_handler0 = (QXmlContentHandler* ) handler0;
    QXmlSimpleReader_QtDShell *__qt_this = (QXmlSimpleReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    __qt_this->__override_setContentHandler((QXmlContentHandler* )__qt_handler0, __do_static_call);

}

// QXmlSimpleReader::setDTDHandler(QXmlDTDHandler * handler)
QTD_EXTERN QTD_EXPORT void qtd_QXmlSimpleReader_setDTDHandler_QXmlDTDHandler
(void* __this_nativeId,
 void* handler0)
{
    QXmlDTDHandler*  __qt_handler0 = (QXmlDTDHandler* ) handler0;
    QXmlSimpleReader_QtDShell *__qt_this = (QXmlSimpleReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    __qt_this->__override_setDTDHandler((QXmlDTDHandler* )__qt_handler0, __do_static_call);

}

// QXmlSimpleReader::setDeclHandler(QXmlDeclHandler * handler)
QTD_EXTERN QTD_EXPORT void qtd_QXmlSimpleReader_setDeclHandler_QXmlDeclHandler
(void* __this_nativeId,
 void* handler0)
{
    QXmlDeclHandler*  __qt_handler0 = (QXmlDeclHandler* ) handler0;
    QXmlSimpleReader_QtDShell *__qt_this = (QXmlSimpleReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    __qt_this->__override_setDeclHandler((QXmlDeclHandler* )__qt_handler0, __do_static_call);

}

// QXmlSimpleReader::setEntityResolver(QXmlEntityResolver * handler)
QTD_EXTERN QTD_EXPORT void qtd_QXmlSimpleReader_setEntityResolver_QXmlEntityResolver
(void* __this_nativeId,
 void* handler0)
{
    QXmlEntityResolver*  __qt_handler0 = (QXmlEntityResolver* ) handler0;
    QXmlSimpleReader_QtDShell *__qt_this = (QXmlSimpleReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    __qt_this->__override_setEntityResolver((QXmlEntityResolver* )__qt_handler0, __do_static_call);

}

// QXmlSimpleReader::setErrorHandler(QXmlErrorHandler * handler)
QTD_EXTERN QTD_EXPORT void qtd_QXmlSimpleReader_setErrorHandler_QXmlErrorHandler
(void* __this_nativeId,
 void* handler0)
{
    QXmlErrorHandler*  __qt_handler0 = (QXmlErrorHandler* ) handler0;
    QXmlSimpleReader_QtDShell *__qt_this = (QXmlSimpleReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    __qt_this->__override_setErrorHandler((QXmlErrorHandler* )__qt_handler0, __do_static_call);

}

// QXmlSimpleReader::setFeature(const QString & name, bool value)
QTD_EXTERN QTD_EXPORT void qtd_QXmlSimpleReader_setFeature_string_bool
(void* __this_nativeId,
 DArray name0,
 bool value1)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QXmlSimpleReader_QtDShell *__qt_this = (QXmlSimpleReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    __qt_this->__override_setFeature((const QString& )__qt_name0, (bool )value1, __do_static_call);

}

// QXmlSimpleReader::setLexicalHandler(QXmlLexicalHandler * handler)
QTD_EXTERN QTD_EXPORT void qtd_QXmlSimpleReader_setLexicalHandler_QXmlLexicalHandler
(void* __this_nativeId,
 void* handler0)
{
    QXmlLexicalHandler*  __qt_handler0 = (QXmlLexicalHandler* ) handler0;
    QXmlSimpleReader_QtDShell *__qt_this = (QXmlSimpleReader_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlReader*)__this_nativeId) != NULL;
    __qt_this->__override_setLexicalHandler((QXmlLexicalHandler* )__qt_handler0, __do_static_call);

}

// ---externC---end
// Field accessors


