#include <QVariant>

#include "QInputEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QInputEvent_QtDShell::QInputEvent_QtDShell(void *d_ptr, QEvent::Type  type0, Qt::KeyboardModifiers  modifiers1)
    : QInputEvent(type0, modifiers1),
      QtdObjectLink(d_ptr)
{
}

QInputEvent_QtDShell::~QInputEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QInputEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QInputEvent::QInputEvent(QEvent::Type type, QFlags<Qt::KeyboardModifier> modifiers)
QTD_EXTERN QTD_EXPORT void* qtd_QInputEvent_QInputEvent_Type_KeyboardModifiers
(void *d_ptr,
 int type0,
 int modifiers1)
{
    QEvent::Type __qt_type0 = (QEvent::Type) type0;
    QFlags<Qt::KeyboardModifier> __qt_modifiers1 = (QFlags<Qt::KeyboardModifier>) modifiers1;
    QInputEvent_QtDShell *__qt_this = new QInputEvent_QtDShell(d_ptr, (QEvent::Type )__qt_type0, (Qt::KeyboardModifiers )__qt_modifiers1);
    return (void *) __qt_this;

}

// QInputEvent::modifiers() const
QTD_EXTERN QTD_EXPORT int qtd_QInputEvent_modifiers_const
(void* __this_nativeId)
{
    QInputEvent_QtDShell *__qt_this = (QInputEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->modifiers();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QInputEvent::setModifiers(QFlags<Qt::KeyboardModifier> amodifiers)
QTD_EXTERN QTD_EXPORT void qtd_QInputEvent_setModifiers_KeyboardModifiers
(void* __this_nativeId,
 int amodifiers0)
{
    QFlags<Qt::KeyboardModifier> __qt_amodifiers0 = (QFlags<Qt::KeyboardModifier>) amodifiers0;
    QInputEvent_QtDShell *__qt_this = (QInputEvent_QtDShell *) __this_nativeId;
    __qt_this->setModifiers((Qt::KeyboardModifiers )__qt_amodifiers0);

}

// ---externC---end
// Field accessors
Qt::KeyboardModifiers  QInputEvent_QtDShell::modState_getter()
{
    return modState;
}

QTD_EXTERN QTD_EXPORT int qtd_QInputEvent_modState
(void* __this_nativeId){
    QInputEvent_QtDShell *__qt_object = (QInputEvent_QtDShell *) __this_nativeId;
    Qt::KeyboardModifiers __tmp_modState = __qt_object->modState_getter();
    int __d_return_value = __tmp_modState;
    return __d_return_value;
}

void QInputEvent_QtDShell::setModState_setter(Qt::KeyboardModifiers  modState0)
{
    this->modState = modState0;
}

QTD_EXTERN QTD_EXPORT void qtd_QInputEvent_setModState_KeyboardModifiers
(void* __this_nativeId,
 int modState0){
    QFlags<Qt::KeyboardModifier> __qt_modState0 = (QFlags<Qt::KeyboardModifier>) modState0;
    QInputEvent_QtDShell *__qt_object = (QInputEvent_QtDShell *) __this_nativeId;
    __qt_object->setModState_setter(__qt_modState0);
}



