#include <QVariant>
#include <qbytearray.h>
#include <qwidget.h>

#include "QItemEditorCreatorBase_shell.h"
#include <iostream>
#include <qitemeditorfactory.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QItemEditorCreatorBase_delete(void* nativeId)
{
    delete (QItemEditorCreatorBase_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QItemEditorCreatorBase_destroy(void* nativeId)
{
    call_destructor((QItemEditorCreatorBase_QtDShell*)nativeId);
}

QItemEditorCreatorBase_QtDShell::QItemEditorCreatorBase_QtDShell(void *d_ptr)
    : QItemEditorCreatorBase(),
      QtdObjectLink(d_ptr)
{
}

QItemEditorCreatorBase_QtDShell::~QItemEditorCreatorBase_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QItemEditorCreatorBase_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QItemEditorCreatorBase*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void*, QItemEditorCreatorBase_createWidget_QWidget_const_dispatch, (void *dId, void* parent0))
QTD_FUNC(GUI, QItemEditorCreatorBase_createWidget_QWidget_const_dispatch)
QWidget*  QItemEditorCreatorBase_QtDShell::createWidget(QWidget*  parent0) const
{
    return (QWidget*) qtd_QItemEditorCreatorBase_createWidget_QWidget_const_dispatch(this->dId, (QWidget* )parent0);
}

QTD_FUNC_DECL(GUI, void*, QItemEditorCreatorBase_valuePropertyName_const_dispatch, (void *dId))
QTD_FUNC(GUI, QItemEditorCreatorBase_valuePropertyName_const_dispatch)
QByteArray  QItemEditorCreatorBase_QtDShell::valuePropertyName() const
{
    QByteArray *__qt_return_value = (QByteArray*) qtd_QItemEditorCreatorBase_valuePropertyName_const_dispatch(this->dId);
    return QByteArray(*__qt_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QItemEditorCreatorBase_initCallBacks(VoidFunc *virts) {
    qtd_QItemEditorCreatorBase_createWidget_QWidget_const_dispatch = (qtd_QItemEditorCreatorBase_createWidget_QWidget_const_dispatch_t) virts[0];
    qtd_QItemEditorCreatorBase_valuePropertyName_const_dispatch = (qtd_QItemEditorCreatorBase_valuePropertyName_const_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QWidget*  QItemEditorCreatorBase_QtDShell::__override_createWidget(QWidget*  parent0, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return createWidget((QWidget* )parent0);
    }
}

QByteArray  QItemEditorCreatorBase_QtDShell::__override_valuePropertyName(bool static_call) const
{
    if (static_call) {
        return QByteArray();
    } else {
        return valuePropertyName();
    }
}

// ---externC---
// QItemEditorCreatorBase::()
QTD_EXTERN QTD_EXPORT void* qtd_QItemEditorCreatorBase_QItemEditorCreatorBase
(void *d_ptr)
{
    QItemEditorCreatorBase_QtDShell *__qt_this = new QItemEditorCreatorBase_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QItemEditorCreatorBase::createWidget(QWidget * parent_) const
QTD_EXTERN QTD_EXPORT void* qtd_QItemEditorCreatorBase_createWidget_QWidget_const
(void* __this_nativeId,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QItemEditorCreatorBase_QtDShell *__qt_this = (QItemEditorCreatorBase_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QItemEditorCreatorBase*)__this_nativeId) != NULL;
    QWidget*  __qt_return_value = __qt_this->__override_createWidget((QWidget* )__qt_parent0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QItemEditorCreatorBase::valuePropertyName() const
QTD_EXTERN QTD_EXPORT void* qtd_QItemEditorCreatorBase_valuePropertyName_const
(void* __this_nativeId)
{
    QItemEditorCreatorBase_QtDShell *__qt_this = (QItemEditorCreatorBase_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QItemEditorCreatorBase*)__this_nativeId) != NULL;
    QByteArray  __qt_return_value = __qt_this->__override_valuePropertyName(__do_static_call);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors


