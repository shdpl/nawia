#include <QVariant>
#include <qfileiconprovider.h>
#include <qfileinfo.h>
#include <qicon.h>

#include "QFileIconProvider_shell.h"
#include <iostream>
#include <qfileiconprovider.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QFileIconProvider_delete(void* nativeId)
{
    delete (QFileIconProvider_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QFileIconProvider_destroy(void* nativeId)
{
    call_destructor((QFileIconProvider_QtDShell*)nativeId);
}

QFileIconProvider_QtDShell::QFileIconProvider_QtDShell(void *d_ptr)
    : QFileIconProvider(),
      QtdObjectLink(d_ptr)
{
}

QFileIconProvider_QtDShell::~QFileIconProvider_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QFileIconProvider_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QFileIconProvider*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void*, QFileIconProvider_icon_IconType_const_dispatch, (void *dId, int type0))
QTD_FUNC(GUI, QFileIconProvider_icon_IconType_const_dispatch)
QIcon  QFileIconProvider_QtDShell::icon(QFileIconProvider::IconType  type0) const
{
    QIcon *__qt_return_value = (QIcon*) qtd_QFileIconProvider_icon_IconType_const_dispatch(this->dId, (QFileIconProvider::IconType )type0);
    return QIcon(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void*, QFileIconProvider_icon_QFileInfo_const_dispatch, (void *dId, void* info0))
QTD_FUNC(GUI, QFileIconProvider_icon_QFileInfo_const_dispatch)
QIcon  QFileIconProvider_QtDShell::icon(const QFileInfo&  info0) const
{
    QIcon *__qt_return_value = (QIcon*) qtd_QFileIconProvider_icon_QFileInfo_const_dispatch(this->dId, &(QFileInfo& )info0);
    return QIcon(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QFileIconProvider_type_QFileInfo_const_dispatch, (void *dId, DArray* ret_str, void* info0))
QTD_FUNC(GUI, QFileIconProvider_type_QFileInfo_const_dispatch)
QString  QFileIconProvider_QtDShell::type(const QFileInfo&  info0) const
{
    DArray ret_str;
    qtd_QFileIconProvider_type_QFileInfo_const_dispatch(this->dId, &ret_str, &(QFileInfo& )info0);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_EXTERN QTD_EXPORT void qtd_QFileIconProvider_initCallBacks(VoidFunc *virts) {
    qtd_QFileIconProvider_icon_IconType_const_dispatch = (qtd_QFileIconProvider_icon_IconType_const_dispatch_t) virts[0];
    qtd_QFileIconProvider_icon_QFileInfo_const_dispatch = (qtd_QFileIconProvider_icon_QFileInfo_const_dispatch_t) virts[1];
    qtd_QFileIconProvider_type_QFileInfo_const_dispatch = (qtd_QFileIconProvider_type_QFileInfo_const_dispatch_t) virts[2];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QIcon  QFileIconProvider_QtDShell::__override_icon(int  type0, bool static_call) const
{
    if (static_call) {
        return QFileIconProvider::icon((QFileIconProvider::IconType )type0);
    } else {
        return icon((QFileIconProvider::IconType )type0);
    }
}

QIcon  QFileIconProvider_QtDShell::__override_icon(const QFileInfo&  info0, bool static_call) const
{
    if (static_call) {
        return QFileIconProvider::icon((const QFileInfo& )info0);
    } else {
        return icon((const QFileInfo& )info0);
    }
}

QString  QFileIconProvider_QtDShell::__override_type(const QFileInfo&  info0, bool static_call) const
{
    if (static_call) {
        return QFileIconProvider::type((const QFileInfo& )info0);
    } else {
        return type((const QFileInfo& )info0);
    }
}

// ---externC---
// QFileIconProvider::QFileIconProvider()
QTD_EXTERN QTD_EXPORT void* qtd_QFileIconProvider_QFileIconProvider
(void *d_ptr)
{
    QFileIconProvider_QtDShell *__qt_this = new QFileIconProvider_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QFileIconProvider::icon(QFileIconProvider::IconType type) const
QTD_EXTERN QTD_EXPORT void* qtd_QFileIconProvider_icon_IconType_const
(void* __this_nativeId,
 int type0)
{
    QFileIconProvider::IconType __qt_type0 = (QFileIconProvider::IconType) type0;
    QFileIconProvider_QtDShell *__qt_this = (QFileIconProvider_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QFileIconProvider*)__this_nativeId) != NULL;
    QIcon  __qt_return_value = __qt_this->__override_icon((QFileIconProvider::IconType )__qt_type0, __do_static_call);

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QFileIconProvider::icon(const QFileInfo & info) const
QTD_EXTERN QTD_EXPORT void* qtd_QFileIconProvider_icon_QFileInfo_const
(void* __this_nativeId,
 void* info0)
{
    const QFileInfo&  __qt_info0 = (const QFileInfo& ) *(QFileInfo *)info0;
    QFileIconProvider_QtDShell *__qt_this = (QFileIconProvider_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QFileIconProvider*)__this_nativeId) != NULL;
    QIcon  __qt_return_value = __qt_this->__override_icon((const QFileInfo& )__qt_info0, __do_static_call);

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QFileIconProvider::type(const QFileInfo & info) const
QTD_EXTERN QTD_EXPORT void qtd_QFileIconProvider_type_QFileInfo_const
(void* __this_nativeId,
 void* __d_return_value,
 void* info0)
{
    const QFileInfo&  __qt_info0 = (const QFileInfo& ) *(QFileInfo *)info0;
    QFileIconProvider_QtDShell *__qt_this = (QFileIconProvider_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QFileIconProvider*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_type((const QFileInfo& )__qt_info0, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


