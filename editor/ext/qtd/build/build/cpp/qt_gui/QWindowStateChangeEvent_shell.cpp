#include <QVariant>

#include "QWindowStateChangeEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QWindowStateChangeEvent_QtDShell::QWindowStateChangeEvent_QtDShell(void *d_ptr, Qt::WindowStates  aOldState0)
    : QWindowStateChangeEvent(aOldState0),
      QtdObjectLink(d_ptr)
{
}

QWindowStateChangeEvent_QtDShell::QWindowStateChangeEvent_QtDShell(void *d_ptr, Qt::WindowStates  aOldState0, bool  isOverride1)
    : QWindowStateChangeEvent(aOldState0, isOverride1),
      QtdObjectLink(d_ptr)
{
}

QWindowStateChangeEvent_QtDShell::~QWindowStateChangeEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QWindowStateChangeEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QWindowStateChangeEvent::QWindowStateChangeEvent(QFlags<Qt::WindowState> aOldState)
QTD_EXTERN QTD_EXPORT void* qtd_QWindowStateChangeEvent_QWindowStateChangeEvent_WindowStates
(void *d_ptr,
 int aOldState0)
{
    QFlags<Qt::WindowState> __qt_aOldState0 = (QFlags<Qt::WindowState>) aOldState0;
    QWindowStateChangeEvent_QtDShell *__qt_this = new QWindowStateChangeEvent_QtDShell(d_ptr, (Qt::WindowStates )__qt_aOldState0);
    return (void *) __qt_this;

}

// QWindowStateChangeEvent::QWindowStateChangeEvent(QFlags<Qt::WindowState> aOldState, bool isOverride)
QTD_EXTERN QTD_EXPORT void* qtd_QWindowStateChangeEvent_QWindowStateChangeEvent_WindowStates_bool
(void *d_ptr,
 int aOldState0,
 bool isOverride1)
{
    QFlags<Qt::WindowState> __qt_aOldState0 = (QFlags<Qt::WindowState>) aOldState0;
    QWindowStateChangeEvent_QtDShell *__qt_this = new QWindowStateChangeEvent_QtDShell(d_ptr, (Qt::WindowStates )__qt_aOldState0, (bool )isOverride1);
    return (void *) __qt_this;

}

// QWindowStateChangeEvent::isOverride() const
QTD_EXTERN QTD_EXPORT bool qtd_QWindowStateChangeEvent_isOverride_const
(void* __this_nativeId)
{
    QWindowStateChangeEvent_QtDShell *__qt_this = (QWindowStateChangeEvent_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isOverride();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWindowStateChangeEvent::oldState() const
QTD_EXTERN QTD_EXPORT int qtd_QWindowStateChangeEvent_oldState_const
(void* __this_nativeId)
{
    QWindowStateChangeEvent_QtDShell *__qt_this = (QWindowStateChangeEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->oldState();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


