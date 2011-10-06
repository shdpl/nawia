#include <QVariant>
#include <qxml.h>

#include "QXmlErrorHandler_shell.h"
#include <iostream>
#include <qxml.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT QXmlErrorHandler* qtd_QXmlErrorHandler_cast_to_QXmlErrorHandler(QXmlErrorHandler *ptr)
{
    return dynamic_cast<QXmlErrorHandler*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlErrorHandler_delete(void* nativeId)
{
    delete (QXmlErrorHandler_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlErrorHandler_destroy(void* nativeId)
{
    call_destructor((QXmlErrorHandler_QtDShell*)nativeId);
}

QXmlErrorHandler_QtDShell::QXmlErrorHandler_QtDShell(void *d_ptr)
    : QXmlErrorHandler(),
      QtdObjectLink(d_ptr)
{
}

QXmlErrorHandler_QtDShell::~QXmlErrorHandler_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QXmlErrorHandler_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QXmlErrorHandler*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(XML, bool, QXmlErrorHandler_error_QXmlParseException_dispatch, (void *dId, void* exception0))
QTD_FUNC(XML, QXmlErrorHandler_error_QXmlParseException_dispatch)
bool  QXmlErrorHandler_QtDShell::error(const QXmlParseException&  exception0)
{
    return qtd_QXmlErrorHandler_error_QXmlParseException_dispatch(this->dId, &(QXmlParseException& )exception0);
}

QTD_FUNC_DECL(XML, void, QXmlErrorHandler_errorString_const_dispatch, (void *dId, DArray* ret_str))
QTD_FUNC(XML, QXmlErrorHandler_errorString_const_dispatch)
QString  QXmlErrorHandler_QtDShell::errorString() const
{
    DArray ret_str;
    qtd_QXmlErrorHandler_errorString_const_dispatch(this->dId, &ret_str);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(XML, bool, QXmlErrorHandler_fatalError_QXmlParseException_dispatch, (void *dId, void* exception0))
QTD_FUNC(XML, QXmlErrorHandler_fatalError_QXmlParseException_dispatch)
bool  QXmlErrorHandler_QtDShell::fatalError(const QXmlParseException&  exception0)
{
    return qtd_QXmlErrorHandler_fatalError_QXmlParseException_dispatch(this->dId, &(QXmlParseException& )exception0);
}

QTD_FUNC_DECL(XML, bool, QXmlErrorHandler_warning_QXmlParseException_dispatch, (void *dId, void* exception0))
QTD_FUNC(XML, QXmlErrorHandler_warning_QXmlParseException_dispatch)
bool  QXmlErrorHandler_QtDShell::warning(const QXmlParseException&  exception0)
{
    return qtd_QXmlErrorHandler_warning_QXmlParseException_dispatch(this->dId, &(QXmlParseException& )exception0);
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlErrorHandler_initCallBacks(VoidFunc *virts) {
    qtd_QXmlErrorHandler_error_QXmlParseException_dispatch = (qtd_QXmlErrorHandler_error_QXmlParseException_dispatch_t) virts[0];
    qtd_QXmlErrorHandler_errorString_const_dispatch = (qtd_QXmlErrorHandler_errorString_const_dispatch_t) virts[1];
    qtd_QXmlErrorHandler_fatalError_QXmlParseException_dispatch = (qtd_QXmlErrorHandler_fatalError_QXmlParseException_dispatch_t) virts[2];
    qtd_QXmlErrorHandler_warning_QXmlParseException_dispatch = (qtd_QXmlErrorHandler_warning_QXmlParseException_dispatch_t) virts[3];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
bool  QXmlErrorHandler_QtDShell::__override_error(const QXmlParseException&  exception0, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return error((const QXmlParseException& )exception0);
    }
}

QString  QXmlErrorHandler_QtDShell::__override_errorString(bool static_call) const
{
    if (static_call) {
        return QString();
    } else {
        return errorString();
    }
}

bool  QXmlErrorHandler_QtDShell::__override_fatalError(const QXmlParseException&  exception0, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return fatalError((const QXmlParseException& )exception0);
    }
}

bool  QXmlErrorHandler_QtDShell::__override_warning(const QXmlParseException&  exception0, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return warning((const QXmlParseException& )exception0);
    }
}

// ---externC---
// QXmlErrorHandler::()
QTD_EXTERN QTD_EXPORT void* qtd_QXmlErrorHandler_QXmlErrorHandler
(void *d_ptr)
{
    QXmlErrorHandler_QtDShell *__qt_this = new QXmlErrorHandler_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QXmlErrorHandler::error(const QXmlParseException & exception)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlErrorHandler_error_QXmlParseException
(void* __this_nativeId,
 void* exception0)
{
    const QXmlParseException&  __qt_exception0 = (const QXmlParseException& ) *(QXmlParseException *)exception0;
    QXmlErrorHandler_QtDShell *__qt_this = (QXmlErrorHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlErrorHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_error((const QXmlParseException& )__qt_exception0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlErrorHandler::errorString() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlErrorHandler_errorString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlErrorHandler_QtDShell *__qt_this = (QXmlErrorHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlErrorHandler*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_errorString(__do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlErrorHandler::fatalError(const QXmlParseException & exception)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlErrorHandler_fatalError_QXmlParseException
(void* __this_nativeId,
 void* exception0)
{
    const QXmlParseException&  __qt_exception0 = (const QXmlParseException& ) *(QXmlParseException *)exception0;
    QXmlErrorHandler_QtDShell *__qt_this = (QXmlErrorHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlErrorHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_fatalError((const QXmlParseException& )__qt_exception0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlErrorHandler::warning(const QXmlParseException & exception)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlErrorHandler_warning_QXmlParseException
(void* __this_nativeId,
 void* exception0)
{
    const QXmlParseException&  __qt_exception0 = (const QXmlParseException& ) *(QXmlParseException *)exception0;
    QXmlErrorHandler_QtDShell *__qt_this = (QXmlErrorHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlErrorHandler*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_warning((const QXmlParseException& )__qt_exception0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


