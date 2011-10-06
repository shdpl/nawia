#include <QVariant>
#include <qmimedata.h>
#include <qwidget.h>

#include "QDropEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QDropEvent_QtDShell::QDropEvent_QtDShell(void *d_ptr, const QPoint&  pos0, Qt::DropActions  actions1, const QMimeData*  data2, Qt::MouseButtons  buttons3, Qt::KeyboardModifiers  modifiers4, QEvent::Type  type5)
    : QDropEvent(pos0, actions1, data2, buttons3, modifiers4, type5),
      QtdObjectLink(d_ptr)
{
}

QDropEvent_QtDShell::~QDropEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QDropEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QDropEvent::QDropEvent(const QPoint & pos, QFlags<Qt::DropAction> actions, const QMimeData * data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type)
QTD_EXTERN QTD_EXPORT void* qtd_QDropEvent_QDropEvent_QPoint_DropActions_QMimeData_MouseButtons_KeyboardModifiers_Type
(void *d_ptr,
 QPoint pos0,
 int actions1,
 void* data2,
 int buttons3,
 int modifiers4,
 int type5)
{
    QFlags<Qt::DropAction> __qt_actions1 = (QFlags<Qt::DropAction>) actions1;
    const QMimeData*  __qt_data2 = (const QMimeData* ) data2;
    QFlags<Qt::MouseButton> __qt_buttons3 = (QFlags<Qt::MouseButton>) buttons3;
    QFlags<Qt::KeyboardModifier> __qt_modifiers4 = (QFlags<Qt::KeyboardModifier>) modifiers4;
    QEvent::Type __qt_type5 = (QEvent::Type) type5;
    QDropEvent_QtDShell *__qt_this = new QDropEvent_QtDShell(d_ptr, (const QPoint& )pos0, (Qt::DropActions )__qt_actions1, (const QMimeData* )__qt_data2, (Qt::MouseButtons )__qt_buttons3, (Qt::KeyboardModifiers )__qt_modifiers4, (QEvent::Type )__qt_type5);
    return (void *) __qt_this;

}

// QDropEvent::acceptProposedAction()
QTD_EXTERN QTD_EXPORT void qtd_QDropEvent_acceptProposedAction
(void* __this_nativeId)
{
    QDropEvent_QtDShell *__qt_this = (QDropEvent_QtDShell *) __this_nativeId;
    __qt_this->acceptProposedAction();

}

// QDropEvent::dropAction() const
QTD_EXTERN QTD_EXPORT int qtd_QDropEvent_dropAction_const
(void* __this_nativeId)
{
    QDropEvent_QtDShell *__qt_this = (QDropEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->dropAction();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDropEvent::keyboardModifiers() const
QTD_EXTERN QTD_EXPORT int qtd_QDropEvent_keyboardModifiers_const
(void* __this_nativeId)
{
    QDropEvent_QtDShell *__qt_this = (QDropEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->keyboardModifiers();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDropEvent::mimeData() const
QTD_EXTERN QTD_EXPORT void* qtd_QDropEvent_mimeData_const
(void* __this_nativeId)
{
    QDropEvent_QtDShell *__qt_this = (QDropEvent_QtDShell *) __this_nativeId;
    const QMimeData*  __qt_return_value = __qt_this->mimeData();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QDropEvent::mouseButtons() const
QTD_EXTERN QTD_EXPORT int qtd_QDropEvent_mouseButtons_const
(void* __this_nativeId)
{
    QDropEvent_QtDShell *__qt_this = (QDropEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->mouseButtons();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDropEvent::pos() const
QTD_EXTERN QTD_EXPORT void qtd_QDropEvent_pos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QDropEvent_QtDShell *__qt_this = (QDropEvent_QtDShell *) __this_nativeId;
    const QPoint&  __qt_return_value = __qt_this->pos();

    *__d_return_value = __qt_return_value;

}

// QDropEvent::possibleActions() const
QTD_EXTERN QTD_EXPORT int qtd_QDropEvent_possibleActions_const
(void* __this_nativeId)
{
    QDropEvent_QtDShell *__qt_this = (QDropEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->possibleActions();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDropEvent::proposedAction() const
QTD_EXTERN QTD_EXPORT int qtd_QDropEvent_proposedAction_const
(void* __this_nativeId)
{
    QDropEvent_QtDShell *__qt_this = (QDropEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->proposedAction();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDropEvent::setDropAction(Qt::DropAction action)
QTD_EXTERN QTD_EXPORT void qtd_QDropEvent_setDropAction_DropAction
(void* __this_nativeId,
 int action0)
{
    Qt::DropAction __qt_action0 = (Qt::DropAction) action0;
    QDropEvent_QtDShell *__qt_this = (QDropEvent_QtDShell *) __this_nativeId;
    __qt_this->setDropAction((Qt::DropAction )__qt_action0);

}

// QDropEvent::source() const
QTD_EXTERN QTD_EXPORT void* qtd_QDropEvent_source_const
(void* __this_nativeId)
{
    QDropEvent_QtDShell *__qt_this = (QDropEvent_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->source();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
const QMimeData*  QDropEvent_QtDShell::mdata_getter()
{
    return mdata;
}

QTD_EXTERN QTD_EXPORT void* qtd_QDropEvent_mdata
(void* __this_nativeId){
    QDropEvent_QtDShell *__qt_object = (QDropEvent_QtDShell *) __this_nativeId;
    const QMimeData* __tmp_mdata = __qt_object->mdata_getter();
    void* __d_return_value = (void*) __tmp_mdata;
    return __d_return_value;
}

Qt::DropAction  QDropEvent_QtDShell::default_action_getter()
{
    return default_action;
}

QTD_EXTERN QTD_EXPORT int qtd_QDropEvent_default_action
(void* __this_nativeId){
    QDropEvent_QtDShell *__qt_object = (QDropEvent_QtDShell *) __this_nativeId;
    Qt::DropAction __tmp_default_action = __qt_object->default_action_getter();
    int __d_return_value = __tmp_default_action;
    return __d_return_value;
}

void QDropEvent_QtDShell::setDefault_action_setter(Qt::DropAction  default_action0)
{
    this->default_action = default_action0;
}

QTD_EXTERN QTD_EXPORT void qtd_QDropEvent_setDefault_action_DropAction
(void* __this_nativeId,
 int default_action0){
    Qt::DropAction __qt_default_action0 = (Qt::DropAction) default_action0;
    QDropEvent_QtDShell *__qt_object = (QDropEvent_QtDShell *) __this_nativeId;
    __qt_object->setDefault_action_setter(__qt_default_action0);
}

Qt::KeyboardModifiers  QDropEvent_QtDShell::modState_getter()
{
    return modState;
}

QTD_EXTERN QTD_EXPORT int qtd_QDropEvent_modState
(void* __this_nativeId){
    QDropEvent_QtDShell *__qt_object = (QDropEvent_QtDShell *) __this_nativeId;
    Qt::KeyboardModifiers __tmp_modState = __qt_object->modState_getter();
    int __d_return_value = __tmp_modState;
    return __d_return_value;
}

void QDropEvent_QtDShell::setModState_setter(Qt::KeyboardModifiers  modState0)
{
    this->modState = modState0;
}

QTD_EXTERN QTD_EXPORT void qtd_QDropEvent_setModState_KeyboardModifiers
(void* __this_nativeId,
 int modState0){
    QFlags<Qt::KeyboardModifier> __qt_modState0 = (QFlags<Qt::KeyboardModifier>) modState0;
    QDropEvent_QtDShell *__qt_object = (QDropEvent_QtDShell *) __this_nativeId;
    __qt_object->setModState_setter(__qt_modState0);
}

Qt::MouseButtons  QDropEvent_QtDShell::mouseState_getter()
{
    return mouseState;
}

QTD_EXTERN QTD_EXPORT int qtd_QDropEvent_mouseState
(void* __this_nativeId){
    QDropEvent_QtDShell *__qt_object = (QDropEvent_QtDShell *) __this_nativeId;
    Qt::MouseButtons __tmp_mouseState = __qt_object->mouseState_getter();
    int __d_return_value = __tmp_mouseState;
    return __d_return_value;
}

void QDropEvent_QtDShell::setMouseState_setter(Qt::MouseButtons  mouseState0)
{
    this->mouseState = mouseState0;
}

QTD_EXTERN QTD_EXPORT void qtd_QDropEvent_setMouseState_MouseButtons
(void* __this_nativeId,
 int mouseState0){
    QFlags<Qt::MouseButton> __qt_mouseState0 = (QFlags<Qt::MouseButton>) mouseState0;
    QDropEvent_QtDShell *__qt_object = (QDropEvent_QtDShell *) __this_nativeId;
    __qt_object->setMouseState_setter(__qt_mouseState0);
}

Qt::DropAction  QDropEvent_QtDShell::drop_action_getter()
{
    return drop_action;
}

QTD_EXTERN QTD_EXPORT int qtd_QDropEvent_drop_action
(void* __this_nativeId){
    QDropEvent_QtDShell *__qt_object = (QDropEvent_QtDShell *) __this_nativeId;
    Qt::DropAction __tmp_drop_action = __qt_object->drop_action_getter();
    int __d_return_value = __tmp_drop_action;
    return __d_return_value;
}

void QDropEvent_QtDShell::setDrop_action_setter(Qt::DropAction  drop_action0)
{
    this->drop_action = drop_action0;
}

QTD_EXTERN QTD_EXPORT void qtd_QDropEvent_setDrop_action_DropAction
(void* __this_nativeId,
 int drop_action0){
    Qt::DropAction __qt_drop_action0 = (Qt::DropAction) drop_action0;
    QDropEvent_QtDShell *__qt_object = (QDropEvent_QtDShell *) __this_nativeId;
    __qt_object->setDrop_action_setter(__qt_drop_action0);
}

QPoint  QDropEvent_QtDShell::p_getter()
{
    return p;
}

QTD_EXTERN QTD_EXPORT void qtd_QDropEvent_p
(void* __this_nativeId,
 QPoint * __d_return_value){
    QDropEvent_QtDShell *__qt_object = (QDropEvent_QtDShell *) __this_nativeId;
    QPoint __tmp_p = __qt_object->p_getter();
    *__d_return_value = __tmp_p;
}

void QDropEvent_QtDShell::setP_setter(QPoint  p0)
{
    this->p = p0;
}

QTD_EXTERN QTD_EXPORT void qtd_QDropEvent_setP_QPoint
(void* __this_nativeId,
 QPoint p0){
    QDropEvent_QtDShell *__qt_object = (QDropEvent_QtDShell *) __this_nativeId;
    __qt_object->setP_setter(p0);
}

Qt::DropActions  QDropEvent_QtDShell::act_getter()
{
    return act;
}

QTD_EXTERN QTD_EXPORT int qtd_QDropEvent_act
(void* __this_nativeId){
    QDropEvent_QtDShell *__qt_object = (QDropEvent_QtDShell *) __this_nativeId;
    Qt::DropActions __tmp_act = __qt_object->act_getter();
    int __d_return_value = __tmp_act;
    return __d_return_value;
}

void QDropEvent_QtDShell::setAct_setter(Qt::DropActions  act0)
{
    this->act = act0;
}

QTD_EXTERN QTD_EXPORT void qtd_QDropEvent_setAct_DropActions
(void* __this_nativeId,
 int act0){
    QFlags<Qt::DropAction> __qt_act0 = (QFlags<Qt::DropAction>) act0;
    QDropEvent_QtDShell *__qt_object = (QDropEvent_QtDShell *) __this_nativeId;
    __qt_object->setAct_setter(__qt_act0);
}



