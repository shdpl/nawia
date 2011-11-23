#include <QVariant>

#include "QWheelEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QWheelEvent_QtDShell::QWheelEvent_QtDShell(void *d_ptr, const QPoint&  pos0, const QPoint&  globalPos1, int  delta2, Qt::MouseButtons  buttons3, Qt::KeyboardModifiers  modifiers4, Qt::Orientation  orient5)
    : QWheelEvent(pos0, globalPos1, delta2, buttons3, modifiers4, orient5),
      QtdObjectLink(d_ptr)
{
}

QWheelEvent_QtDShell::QWheelEvent_QtDShell(void *d_ptr, const QPoint&  pos0, int  delta1, Qt::MouseButtons  buttons2, Qt::KeyboardModifiers  modifiers3, Qt::Orientation  orient4)
    : QWheelEvent(pos0, delta1, buttons2, modifiers3, orient4),
      QtdObjectLink(d_ptr)
{
}

QWheelEvent_QtDShell::~QWheelEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QWheelEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QWheelEvent::QWheelEvent(const QPoint & pos, const QPoint & globalPos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient)
QTD_EXTERN QTD_EXPORT void* qtd_QWheelEvent_QWheelEvent_QPoint_QPoint_int_MouseButtons_KeyboardModifiers_Orientation
(void *d_ptr,
 QPoint pos0,
 QPoint globalPos1,
 int delta2,
 int buttons3,
 int modifiers4,
 int orient5)
{
    QFlags<Qt::MouseButton> __qt_buttons3 = (QFlags<Qt::MouseButton>) buttons3;
    QFlags<Qt::KeyboardModifier> __qt_modifiers4 = (QFlags<Qt::KeyboardModifier>) modifiers4;
    Qt::Orientation __qt_orient5 = (Qt::Orientation) orient5;
    QWheelEvent_QtDShell *__qt_this = new QWheelEvent_QtDShell(d_ptr, (const QPoint& )pos0, (const QPoint& )globalPos1, (int )delta2, (Qt::MouseButtons )__qt_buttons3, (Qt::KeyboardModifiers )__qt_modifiers4, (Qt::Orientation )__qt_orient5);
    return (void *) __qt_this;

}

// QWheelEvent::QWheelEvent(const QPoint & pos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient)
QTD_EXTERN QTD_EXPORT void* qtd_QWheelEvent_QWheelEvent_QPoint_int_MouseButtons_KeyboardModifiers_Orientation
(void *d_ptr,
 QPoint pos0,
 int delta1,
 int buttons2,
 int modifiers3,
 int orient4)
{
    QFlags<Qt::MouseButton> __qt_buttons2 = (QFlags<Qt::MouseButton>) buttons2;
    QFlags<Qt::KeyboardModifier> __qt_modifiers3 = (QFlags<Qt::KeyboardModifier>) modifiers3;
    Qt::Orientation __qt_orient4 = (Qt::Orientation) orient4;
    QWheelEvent_QtDShell *__qt_this = new QWheelEvent_QtDShell(d_ptr, (const QPoint& )pos0, (int )delta1, (Qt::MouseButtons )__qt_buttons2, (Qt::KeyboardModifiers )__qt_modifiers3, (Qt::Orientation )__qt_orient4);
    return (void *) __qt_this;

}

// QWheelEvent::buttons() const
QTD_EXTERN QTD_EXPORT int qtd_QWheelEvent_buttons_const
(void* __this_nativeId)
{
    QWheelEvent_QtDShell *__qt_this = (QWheelEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->buttons();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWheelEvent::delta() const
QTD_EXTERN QTD_EXPORT int qtd_QWheelEvent_delta_const
(void* __this_nativeId)
{
    QWheelEvent_QtDShell *__qt_this = (QWheelEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->delta();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWheelEvent::globalPos() const
QTD_EXTERN QTD_EXPORT void qtd_QWheelEvent_globalPos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QWheelEvent_QtDShell *__qt_this = (QWheelEvent_QtDShell *) __this_nativeId;
    const QPoint&  __qt_return_value = __qt_this->globalPos();

    *__d_return_value = __qt_return_value;

}

// QWheelEvent::globalX() const
QTD_EXTERN QTD_EXPORT int qtd_QWheelEvent_globalX_const
(void* __this_nativeId)
{
    QWheelEvent_QtDShell *__qt_this = (QWheelEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->globalX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWheelEvent::globalY() const
QTD_EXTERN QTD_EXPORT int qtd_QWheelEvent_globalY_const
(void* __this_nativeId)
{
    QWheelEvent_QtDShell *__qt_this = (QWheelEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->globalY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWheelEvent::orientation() const
QTD_EXTERN QTD_EXPORT int qtd_QWheelEvent_orientation_const
(void* __this_nativeId)
{
    QWheelEvent_QtDShell *__qt_this = (QWheelEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->orientation();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWheelEvent::pos() const
QTD_EXTERN QTD_EXPORT void qtd_QWheelEvent_pos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QWheelEvent_QtDShell *__qt_this = (QWheelEvent_QtDShell *) __this_nativeId;
    const QPoint&  __qt_return_value = __qt_this->pos();

    *__d_return_value = __qt_return_value;

}

// QWheelEvent::x() const
QTD_EXTERN QTD_EXPORT int qtd_QWheelEvent_x_const
(void* __this_nativeId)
{
    QWheelEvent_QtDShell *__qt_this = (QWheelEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->x();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWheelEvent::y() const
QTD_EXTERN QTD_EXPORT int qtd_QWheelEvent_y_const
(void* __this_nativeId)
{
    QWheelEvent_QtDShell *__qt_this = (QWheelEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->y();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QPoint  QWheelEvent_QtDShell::g_getter()
{
    return g;
}

QTD_EXTERN QTD_EXPORT void qtd_QWheelEvent_g
(void* __this_nativeId,
 QPoint * __d_return_value){
    QWheelEvent_QtDShell *__qt_object = (QWheelEvent_QtDShell *) __this_nativeId;
    QPoint __tmp_g = __qt_object->g_getter();
    *__d_return_value = __tmp_g;
}

void QWheelEvent_QtDShell::setG_setter(QPoint  g0)
{
    this->g = g0;
}

QTD_EXTERN QTD_EXPORT void qtd_QWheelEvent_setG_QPoint
(void* __this_nativeId,
 QPoint g0){
    QWheelEvent_QtDShell *__qt_object = (QWheelEvent_QtDShell *) __this_nativeId;
    __qt_object->setG_setter(g0);
}

Qt::MouseButtons  QWheelEvent_QtDShell::mouseState_getter()
{
    return mouseState;
}

QTD_EXTERN QTD_EXPORT int qtd_QWheelEvent_mouseState
(void* __this_nativeId){
    QWheelEvent_QtDShell *__qt_object = (QWheelEvent_QtDShell *) __this_nativeId;
    Qt::MouseButtons __tmp_mouseState = __qt_object->mouseState_getter();
    int __d_return_value = __tmp_mouseState;
    return __d_return_value;
}

void QWheelEvent_QtDShell::setMouseState_setter(Qt::MouseButtons  mouseState0)
{
    this->mouseState = mouseState0;
}

QTD_EXTERN QTD_EXPORT void qtd_QWheelEvent_setMouseState_MouseButtons
(void* __this_nativeId,
 int mouseState0){
    QFlags<Qt::MouseButton> __qt_mouseState0 = (QFlags<Qt::MouseButton>) mouseState0;
    QWheelEvent_QtDShell *__qt_object = (QWheelEvent_QtDShell *) __this_nativeId;
    __qt_object->setMouseState_setter(__qt_mouseState0);
}

Qt::Orientation  QWheelEvent_QtDShell::o_getter()
{
    return o;
}

QTD_EXTERN QTD_EXPORT int qtd_QWheelEvent_o
(void* __this_nativeId){
    QWheelEvent_QtDShell *__qt_object = (QWheelEvent_QtDShell *) __this_nativeId;
    Qt::Orientation __tmp_o = __qt_object->o_getter();
    int __d_return_value = __tmp_o;
    return __d_return_value;
}

void QWheelEvent_QtDShell::setO_setter(Qt::Orientation  o0)
{
    this->o = o0;
}

QTD_EXTERN QTD_EXPORT void qtd_QWheelEvent_setO_Orientation
(void* __this_nativeId,
 int o0){
    Qt::Orientation __qt_o0 = (Qt::Orientation) o0;
    QWheelEvent_QtDShell *__qt_object = (QWheelEvent_QtDShell *) __this_nativeId;
    __qt_object->setO_setter(__qt_o0);
}

QPoint  QWheelEvent_QtDShell::p_getter()
{
    return p;
}

QTD_EXTERN QTD_EXPORT void qtd_QWheelEvent_p
(void* __this_nativeId,
 QPoint * __d_return_value){
    QWheelEvent_QtDShell *__qt_object = (QWheelEvent_QtDShell *) __this_nativeId;
    QPoint __tmp_p = __qt_object->p_getter();
    *__d_return_value = __tmp_p;
}

void QWheelEvent_QtDShell::setP_setter(QPoint  p0)
{
    this->p = p0;
}

QTD_EXTERN QTD_EXPORT void qtd_QWheelEvent_setP_QPoint
(void* __this_nativeId,
 QPoint p0){
    QWheelEvent_QtDShell *__qt_object = (QWheelEvent_QtDShell *) __this_nativeId;
    __qt_object->setP_setter(p0);
}



