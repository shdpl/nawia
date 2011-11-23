#include <QVariant>

#include "QXmlStreamEntityResolver_shell.h"
#include <iostream>
#include <qxmlstream.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamEntityResolver_delete(void* nativeId)
{
    delete (QXmlStreamEntityResolver_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamEntityResolver_destroy(void* nativeId)
{
    call_destructor((QXmlStreamEntityResolver_QtDShell*)nativeId);
}

QXmlStreamEntityResolver_QtDShell::QXmlStreamEntityResolver_QtDShell(void *d_ptr)
    : QXmlStreamEntityResolver(),
      QtdObjectLink(d_ptr)
{
}

QXmlStreamEntityResolver_QtDShell::~QXmlStreamEntityResolver_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QXmlStreamEntityResolver_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QXmlStreamEntityResolver*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void, QXmlStreamEntityResolver_resolveEntity_string_string_dispatch, (void *dId, DArray* ret_str, const unsigned short* publicId0, int publicId0_size, const unsigned short* systemId1, int systemId1_size))
QTD_FUNC(CORE, QXmlStreamEntityResolver_resolveEntity_string_string_dispatch)
QString  QXmlStreamEntityResolver_QtDShell::resolveEntity(const QString&  publicId0, const QString&  systemId1)
{
    DArray ret_str;
    qtd_QXmlStreamEntityResolver_resolveEntity_string_string_dispatch(this->dId, &ret_str, publicId0.utf16(), publicId0.size(), systemId1.utf16(), systemId1.size());
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(CORE, void, QXmlStreamEntityResolver_resolveUndeclaredEntity_string_dispatch, (void *dId, DArray* ret_str, const unsigned short* name0, int name0_size))
QTD_FUNC(CORE, QXmlStreamEntityResolver_resolveUndeclaredEntity_string_dispatch)
QString  QXmlStreamEntityResolver_QtDShell::resolveUndeclaredEntity(const QString&  name0)
{
    DArray ret_str;
    qtd_QXmlStreamEntityResolver_resolveUndeclaredEntity_string_dispatch(this->dId, &ret_str, name0.utf16(), name0.size());
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamEntityResolver_initCallBacks(VoidFunc *virts) {
    qtd_QXmlStreamEntityResolver_resolveEntity_string_string_dispatch = (qtd_QXmlStreamEntityResolver_resolveEntity_string_string_dispatch_t) virts[0];
    qtd_QXmlStreamEntityResolver_resolveUndeclaredEntity_string_dispatch = (qtd_QXmlStreamEntityResolver_resolveUndeclaredEntity_string_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QString  QXmlStreamEntityResolver_QtDShell::__override_resolveEntity(const QString&  publicId0, const QString&  systemId1, bool static_call)
{
    if (static_call) {
        return QXmlStreamEntityResolver::resolveEntity((const QString& )publicId0, (const QString& )systemId1);
    } else {
        return resolveEntity((const QString& )publicId0, (const QString& )systemId1);
    }
}

QString  QXmlStreamEntityResolver_QtDShell::__override_resolveUndeclaredEntity(const QString&  name0, bool static_call)
{
    if (static_call) {
        return QXmlStreamEntityResolver::resolveUndeclaredEntity((const QString& )name0);
    } else {
        return resolveUndeclaredEntity((const QString& )name0);
    }
}

// ---externC---
// QXmlStreamEntityResolver::()
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamEntityResolver_QXmlStreamEntityResolver
(void *d_ptr)
{
    QXmlStreamEntityResolver_QtDShell *__qt_this = new QXmlStreamEntityResolver_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QXmlStreamEntityResolver::resolveEntity(const QString & publicId, const QString & systemId)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamEntityResolver_resolveEntity_string_string
(void* __this_nativeId,
 void* __d_return_value,
 DArray publicId0,
 DArray systemId1)
{
    QString __qt_publicId0 = QString::fromUtf8((const char *)publicId0.ptr, publicId0.length);
    QString __qt_systemId1 = QString::fromUtf8((const char *)systemId1.ptr, systemId1.length);
    QXmlStreamEntityResolver_QtDShell *__qt_this = (QXmlStreamEntityResolver_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlStreamEntityResolver*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_resolveEntity((const QString& )__qt_publicId0, (const QString& )__qt_systemId1, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlStreamEntityResolver::resolveUndeclaredEntity(const QString & name)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamEntityResolver_resolveUndeclaredEntity_string
(void* __this_nativeId,
 void* __d_return_value,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QXmlStreamEntityResolver_QtDShell *__qt_this = (QXmlStreamEntityResolver_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlStreamEntityResolver*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_resolveUndeclaredEntity((const QString& )__qt_name0, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


