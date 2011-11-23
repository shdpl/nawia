#include <QVariant>
#include <qxml.h>

#include "QXmlEntityResolver_shell.h"
#include <iostream>
#include <qxml.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT QXmlEntityResolver* qtd_QXmlEntityResolver_cast_to_QXmlEntityResolver(QXmlEntityResolver *ptr)
{
    return dynamic_cast<QXmlEntityResolver*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlEntityResolver_delete(void* nativeId)
{
    delete (QXmlEntityResolver_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlEntityResolver_destroy(void* nativeId)
{
    call_destructor((QXmlEntityResolver_QtDShell*)nativeId);
}

QXmlEntityResolver_QtDShell::QXmlEntityResolver_QtDShell(void *d_ptr)
    : QXmlEntityResolver(),
      QtdObjectLink(d_ptr)
{
}

QXmlEntityResolver_QtDShell::~QXmlEntityResolver_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QXmlEntityResolver_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QXmlEntityResolver*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(XML, void, QXmlEntityResolver_errorString_const_dispatch, (void *dId, DArray* ret_str))
QTD_FUNC(XML, QXmlEntityResolver_errorString_const_dispatch)
QString  QXmlEntityResolver_QtDShell::errorString() const
{
    DArray ret_str;
    qtd_QXmlEntityResolver_errorString_const_dispatch(this->dId, &ret_str);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(XML, bool, QXmlEntityResolver_resolveEntity_string_string_QXmlInputSource_dispatch, (void *dId, const unsigned short* publicId0, int publicId0_size, const unsigned short* systemId1, int systemId1_size, void* ret2))
QTD_FUNC(XML, QXmlEntityResolver_resolveEntity_string_string_QXmlInputSource_dispatch)
bool  QXmlEntityResolver_QtDShell::resolveEntity(const QString&  publicId0, const QString&  systemId1, QXmlInputSource*&  ret2)
{
    return qtd_QXmlEntityResolver_resolveEntity_string_string_QXmlInputSource_dispatch(this->dId, publicId0.utf16(), publicId0.size(), systemId1.utf16(), systemId1.size(), &(QXmlInputSource*& )ret2);
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlEntityResolver_initCallBacks(VoidFunc *virts) {
    qtd_QXmlEntityResolver_errorString_const_dispatch = (qtd_QXmlEntityResolver_errorString_const_dispatch_t) virts[0];
    qtd_QXmlEntityResolver_resolveEntity_string_string_QXmlInputSource_dispatch = (qtd_QXmlEntityResolver_resolveEntity_string_string_QXmlInputSource_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QString  QXmlEntityResolver_QtDShell::__override_errorString(bool static_call) const
{
    if (static_call) {
        return QString();
    } else {
        return errorString();
    }
}

bool  QXmlEntityResolver_QtDShell::__override_resolveEntity(const QString&  publicId0, const QString&  systemId1, QXmlInputSource*&  ret2, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return resolveEntity((const QString& )publicId0, (const QString& )systemId1, (QXmlInputSource*& )ret2);
    }
}

// ---externC---
// QXmlEntityResolver::()
QTD_EXTERN QTD_EXPORT void* qtd_QXmlEntityResolver_QXmlEntityResolver
(void *d_ptr)
{
    QXmlEntityResolver_QtDShell *__qt_this = new QXmlEntityResolver_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QXmlEntityResolver::errorString() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlEntityResolver_errorString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlEntityResolver_QtDShell *__qt_this = (QXmlEntityResolver_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlEntityResolver*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_errorString(__do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlEntityResolver::resolveEntity(const QString & publicId, const QString & systemId, QXmlInputSource *& ret)
QTD_EXTERN QTD_EXPORT bool qtd_QXmlEntityResolver_resolveEntity_string_string_QXmlInputSource
(void* __this_nativeId,
 DArray publicId0,
 DArray systemId1,
 void* ret2)
{
    QString __qt_publicId0 = QString::fromUtf8((const char *)publicId0.ptr, publicId0.length);
    QString __qt_systemId1 = QString::fromUtf8((const char *)systemId1.ptr, systemId1.length);
    QXmlInputSource*&  __qt_ret2 = (QXmlInputSource*& ) * (QXmlInputSource **) ret2;
    QXmlEntityResolver_QtDShell *__qt_this = (QXmlEntityResolver_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlEntityResolver*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_resolveEntity((const QString& )__qt_publicId0, (const QString& )__qt_systemId1, (QXmlInputSource*& )__qt_ret2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


