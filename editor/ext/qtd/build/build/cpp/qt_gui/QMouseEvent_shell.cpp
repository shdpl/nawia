#include <QVariant>

#include "QMouseEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QMouseEvent_QtDShell::QMouseEvent_QtDShell(void *d_ptr, QEvent::Type  type0, const QPoint&  pos1, Qt::MouseButton  button2, Qt::MouseButtons  buttons3, Qt::KeyboardModifiers  modifiers4)
    : QMouseEvent(type0, pos1, button2, buttons3, modifiers4),
      QtdObjectLink(d_ptr)
{
}

QMouseEvent_QtDShell::QMouseEvent_QtDShell(void *d_ptr, QEvent::Type  type0, const QPoint&  pos1, const QPoint&  globalPos2, Qt::MouseButton  button3, Qt::MouseButtons  buttons4, Qt::KeyboardModifiers  modifiers5)
    : QMouseEvent(type0, pos1, globalPos2, button3, buttons4, modifiers5),
      QtdObjectLink(d_ptr)
{
}

QMouseEvent_QtDShell::~QMouseEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QMouseEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QMouseEvent::QMouseEvent(QEvent::Type type, const QPoint & pos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers)
QTD_EXTERN QTD_EXPORT void* qtd_QMouseEvent_QMouseEvent_Type_QPoint_MouseButton_MouseButtons_KeyboardModifiers
(void *d_ptr,
 int type0,
 QPoint pos1,
 int button2,
 int buttons3,
 int modifiers4)
{
    QEvent::Type __qt_type0 = (QEvent::Type) type0;
    Qt::MouseButton __qt_button2 = (Qt::MouseButton) button2;
    QFlags<Qt::MouseButton> __qt_buttons3 = (QFlags<Qt::MouseButton>) buttons3;
    QFlags<Qt::KeyboardModifier> __qt_modifiers4 = (QFlags<Qt::KeyboardModifier>) modifiers4;
    QMouseEvent_QtDShell *__qt_this = new QMouseEvent_QtDShell(d_ptr, (QEvent::Type )__qt_type0, (const QPoint& )pos1, (Qt::MouseButton )__qt_button2, (Qt::MouseButtons )__qt_buttons3, (Qt::KeyboardModifiers )__qt_modifiers4);
    return (void *) __qt_this;

}

// QMouseEvent::QMouseEvent(QEvent::Type type, const QPoint & pos, const QPoint & globalPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers)
QTD_EXTERN QTD_EXPORT void* qtd_QMouseEvent_QMouseEvent_Type_QPoint_QPoint_MouseButton_MouseButtons_KeyboardModifiers
(void *d_ptr,
 int type0,
 QPoint pos1,
 QPoint globalPos2,
 int button3,
 int buttons4,
 int modifiers5)
{
    QEvent::Type __qt_type0 = (QEvent::Type) type0;
    Qt::MouseButton __qt_button3 = (Qt::MouseButton) button3;
    QFlags<Qt::MouseButton> __qt_buttons4 = (QFlags<Qt::MouseButton>) buttons4;
    QFlags<Qt::KeyboardModifier> __qt_modifiers5 = (QFlags<Qt::KeyboardModifier>) modifiers5;
    QMouseEvent_QtDShell *__qt_this = new QMouseEvent_QtDShell(d_ptr, (QEvent::Type )__qt_type0, (const QPoint& )pos1, (const QPoint& )globalPos2, (Qt::MouseButton )__qt_button3, (Qt::MouseButtons )__qt_buttons4, (Qt::KeyboardModifiers )__qt_modifiers5);
    return (void *) __qt_this;

}

// QMouseEvent::button() const
QTD_EXTERN QTD_EXPORT int qtd_QMouseEvent_button_const
(void* __this_nativeId)
{
    QMouseEvent_QtDShell *__qt_this = (QMouseEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->button();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMouseEvent::buttons() const
QTD_EXTERN QTD_EXPORT int qtd_QMouseEvent_buttons_const
(void* __this_nativeId)
{
    QMouseEvent_QtDShell *__qt_this = (QMouseEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->buttons();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMouseEvent::globalPos() const
QTD_EXTERN QTD_EXPORT void qtd_QMouseEvent_globalPos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QMouseEvent_QtDShell *__qt_this = (QMouseEvent_QtDShell *) __this_nativeId;
    const QPoint&  __qt_return_value = __qt_this->globalPos();

    *__d_return_value = __qt_return_value;

}

// QMouseEvent::globalX() const
QTD_EXTERN QTD_EXPORT int qtd_QMouseEvent_globalX_const
(void* __this_nativeId)
{
    QMouseEvent_QtDShell *__qt_this = (QMouseEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->globalX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMouseEvent::globalY() const
QTD_EXTERN QTD_EXPORT int qtd_QMouseEvent_globalY_const
(void* __this_nativeId)
{
    QMouseEvent_QtDShell *__qt_this = (QMouseEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->globalY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMouseEvent::hasExtendedInfo() const
QTD_EXTERN QTD_EXPORT bool qtd_QMouseEvent_hasExtendedInfo_const
(void* __this_nativeId)
{
    QMouseEvent_QtDShell *__qt_this = (QMouseEvent_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasExtendedInfo();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMouseEvent::pos() const
QTD_EXTERN QTD_EXPORT void qtd_QMouseEvent_pos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QMouseEvent_QtDShell *__qt_this = (QMouseEvent_QtDShell *) __this_nativeId;
    const QPoint&  __qt_return_value = __qt_this->pos();

    *__d_return_value = __qt_return_value;

}

// QMouseEvent::posF() const
QTD_EXTERN QTD_EXPORT void qtd_QMouseEvent_posF_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QMouseEvent_QtDShell *__qt_this = (QMouseEvent_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->posF();

    *__d_return_value = __qt_return_value;

}

// QMouseEvent::x() const
QTD_EXTERN QTD_EXPORT int qtd_QMouseEvent_x_const
(void* __this_nativeId)
{
    QMouseEvent_QtDShell *__qt_this = (QMouseEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->x();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMouseEvent::y() const
QTD_EXTERN QTD_EXPORT int qtd_QMouseEvent_y_const
(void* __this_nativeId)
{
    QMouseEvent_QtDShell *__qt_this = (QMouseEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->y();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QPoint  QMouseEvent_QtDShell::g_getter()
{
    return g;
}

QTD_EXTERN QTD_EXPORT void qtd_QMouseEvent_g
(void* __this_nativeId,
 QPoint * __d_return_value){
    QMouseEvent_QtDShell *__qt_object = (QMouseEvent_QtDShell *) __this_nativeId;
    QPoint __tmp_g = __qt_object->g_getter();
    *__d_return_value = __tmp_g;
}

void QMouseEvent_QtDShell::setG_setter(QPoint  g0)
{
    this->g = g0;
}

QTD_EXTERN QTD_EXPORT void qtd_QMouseEvent_setG_QPoint
(void* __this_nativeId,
 QPoint g0){
    QMouseEvent_QtDShell *__qt_object = (QMouseEvent_QtDShell *) __this_nativeId;
    __qt_object->setG_setter(g0);
}

Qt::MouseButtons  QMouseEvent_QtDShell::mouseState_getter()
{
    return mouseState;
}

QTD_EXTERN QTD_EXPORT int qtd_QMouseEvent_mouseState
(void* __this_nativeId){
    QMouseEvent_QtDShell *__qt_object = (QMouseEvent_QtDShell *) __this_nativeId;
    Qt::MouseButtons __tmp_mouseState = __qt_object->mouseState_getter();
    int __d_return_value = __tmp_mouseState;
    return __d_return_value;
}

void QMouseEvent_QtDShell::setMouseState_setter(Qt::MouseButtons  mouseState0)
{
    this->mouseState = mouseState0;
}

QTD_EXTERN QTD_EXPORT void qtd_QMouseEvent_setMouseState_MouseButtons
(void* __this_nativeId,
 int mouseState0){
    QFlags<Qt::MouseButton> __qt_mouseState0 = (QFlags<Qt::MouseButton>) mouseState0;
    QMouseEvent_QtDShell *__qt_object = (QMouseEvent_QtDShell *) __this_nativeId;
    __qt_object->setMouseState_setter(__qt_mouseState0);
}

QPoint  QMouseEvent_QtDShell::p_getter()
{
    return p;
}

QTD_EXTERN QTD_EXPORT void qtd_QMouseEvent_p
(void* __this_nativeId,
 QPoint * __d_return_value){
    QMouseEvent_QtDShell *__qt_object = (QMouseEvent_QtDShell *) __this_nativeId;
    QPoint __tmp_p = __qt_object->p_getter();
    *__d_return_value = __tmp_p;
}

void QMouseEvent_QtDShell::setP_setter(QPoint  p0)
{
    this->p = p0;
}

QTD_EXTERN QTD_EXPORT void qtd_QMouseEvent_setP_QPoint
(void* __this_nativeId,
 QPoint p0){
    QMouseEvent_QtDShell *__qt_object = (QMouseEvent_QtDShell *) __this_nativeId;
    __qt_object->setP_setter(p0);
}

Qt::MouseButton  QMouseEvent_QtDShell::b_getter()
{
    return b;
}

QTD_EXTERN QTD_EXPORT int qtd_QMouseEvent_b
(void* __this_nativeId){
    QMouseEvent_QtDShell *__qt_object = (QMouseEvent_QtDShell *) __this_nativeId;
    Qt::MouseButton __tmp_b = __qt_object->b_getter();
    int __d_return_value = __tmp_b;
    return __d_return_value;
}

void QMouseEvent_QtDShell::setB_setter(Qt::MouseButton  b0)
{
    this->b = b0;
}

QTD_EXTERN QTD_EXPORT void qtd_QMouseEvent_setB_MouseButton
(void* __this_nativeId,
 int b0){
    Qt::MouseButton __qt_b0 = (Qt::MouseButton) b0;
    QMouseEvent_QtDShell *__qt_object = (QMouseEvent_QtDShell *) __this_nativeId;
    __qt_object->setB_setter(__qt_b0);
}



