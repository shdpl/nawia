#include <QVariant>

#include "QContextMenuEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QContextMenuEvent_QtDShell::QContextMenuEvent_QtDShell(void *d_ptr, QContextMenuEvent::Reason  reason0, const QPoint&  pos1)
    : QContextMenuEvent(reason0, pos1),
      QtdObjectLink(d_ptr)
{
}

QContextMenuEvent_QtDShell::QContextMenuEvent_QtDShell(void *d_ptr, QContextMenuEvent::Reason  reason0, const QPoint&  pos1, const QPoint&  globalPos2)
    : QContextMenuEvent(reason0, pos1, globalPos2),
      QtdObjectLink(d_ptr)
{
}

QContextMenuEvent_QtDShell::QContextMenuEvent_QtDShell(void *d_ptr, QContextMenuEvent::Reason  reason0, const QPoint&  pos1, const QPoint&  globalPos2, Qt::KeyboardModifiers  modifiers3)
    : QContextMenuEvent(reason0, pos1, globalPos2, modifiers3),
      QtdObjectLink(d_ptr)
{
}

QContextMenuEvent_QtDShell::~QContextMenuEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QContextMenuEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QContextMenuEvent::QContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint & pos)
QTD_EXTERN QTD_EXPORT void* qtd_QContextMenuEvent_QContextMenuEvent_Reason_QPoint
(void *d_ptr,
 int reason0,
 QPoint pos1)
{
    QContextMenuEvent::Reason __qt_reason0 = (QContextMenuEvent::Reason) reason0;
    QContextMenuEvent_QtDShell *__qt_this = new QContextMenuEvent_QtDShell(d_ptr, (QContextMenuEvent::Reason )__qt_reason0, (const QPoint& )pos1);
    return (void *) __qt_this;

}

// QContextMenuEvent::QContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint & pos, const QPoint & globalPos)
QTD_EXTERN QTD_EXPORT void* qtd_QContextMenuEvent_QContextMenuEvent_Reason_QPoint_QPoint
(void *d_ptr,
 int reason0,
 QPoint pos1,
 QPoint globalPos2)
{
    QContextMenuEvent::Reason __qt_reason0 = (QContextMenuEvent::Reason) reason0;
    QContextMenuEvent_QtDShell *__qt_this = new QContextMenuEvent_QtDShell(d_ptr, (QContextMenuEvent::Reason )__qt_reason0, (const QPoint& )pos1, (const QPoint& )globalPos2);
    return (void *) __qt_this;

}

// QContextMenuEvent::QContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint & pos, const QPoint & globalPos, QFlags<Qt::KeyboardModifier> modifiers)
QTD_EXTERN QTD_EXPORT void* qtd_QContextMenuEvent_QContextMenuEvent_Reason_QPoint_QPoint_KeyboardModifiers
(void *d_ptr,
 int reason0,
 QPoint pos1,
 QPoint globalPos2,
 int modifiers3)
{
    QContextMenuEvent::Reason __qt_reason0 = (QContextMenuEvent::Reason) reason0;
    QFlags<Qt::KeyboardModifier> __qt_modifiers3 = (QFlags<Qt::KeyboardModifier>) modifiers3;
    QContextMenuEvent_QtDShell *__qt_this = new QContextMenuEvent_QtDShell(d_ptr, (QContextMenuEvent::Reason )__qt_reason0, (const QPoint& )pos1, (const QPoint& )globalPos2, (Qt::KeyboardModifiers )__qt_modifiers3);
    return (void *) __qt_this;

}

// QContextMenuEvent::globalPos() const
QTD_EXTERN QTD_EXPORT void qtd_QContextMenuEvent_globalPos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QContextMenuEvent_QtDShell *__qt_this = (QContextMenuEvent_QtDShell *) __this_nativeId;
    const QPoint&  __qt_return_value = __qt_this->globalPos();

    *__d_return_value = __qt_return_value;

}

// QContextMenuEvent::globalX() const
QTD_EXTERN QTD_EXPORT int qtd_QContextMenuEvent_globalX_const
(void* __this_nativeId)
{
    QContextMenuEvent_QtDShell *__qt_this = (QContextMenuEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->globalX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QContextMenuEvent::globalY() const
QTD_EXTERN QTD_EXPORT int qtd_QContextMenuEvent_globalY_const
(void* __this_nativeId)
{
    QContextMenuEvent_QtDShell *__qt_this = (QContextMenuEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->globalY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QContextMenuEvent::pos() const
QTD_EXTERN QTD_EXPORT void qtd_QContextMenuEvent_pos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QContextMenuEvent_QtDShell *__qt_this = (QContextMenuEvent_QtDShell *) __this_nativeId;
    const QPoint&  __qt_return_value = __qt_this->pos();

    *__d_return_value = __qt_return_value;

}

// QContextMenuEvent::reason() const
QTD_EXTERN QTD_EXPORT int qtd_QContextMenuEvent_reason_const
(void* __this_nativeId)
{
    QContextMenuEvent_QtDShell *__qt_this = (QContextMenuEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->reason();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QContextMenuEvent::x() const
QTD_EXTERN QTD_EXPORT int qtd_QContextMenuEvent_x_const
(void* __this_nativeId)
{
    QContextMenuEvent_QtDShell *__qt_this = (QContextMenuEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->x();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QContextMenuEvent::y() const
QTD_EXTERN QTD_EXPORT int qtd_QContextMenuEvent_y_const
(void* __this_nativeId)
{
    QContextMenuEvent_QtDShell *__qt_this = (QContextMenuEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->y();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
uint  QContextMenuEvent_QtDShell::reas_getter()
{
    return reas;
}

QTD_EXTERN QTD_EXPORT uint qtd_QContextMenuEvent_reas
(void* __this_nativeId){
    QContextMenuEvent_QtDShell *__qt_object = (QContextMenuEvent_QtDShell *) __this_nativeId;
    uint __tmp_reas = __qt_object->reas_getter();
    uint __d_return_value = __tmp_reas;
    return __d_return_value;
}

void QContextMenuEvent_QtDShell::setReas_setter(uint  reas0)
{
    this->reas = reas0;
}

QTD_EXTERN QTD_EXPORT void qtd_QContextMenuEvent_setReas_uint
(void* __this_nativeId,
 uint reas0){
    QContextMenuEvent_QtDShell *__qt_object = (QContextMenuEvent_QtDShell *) __this_nativeId;
    __qt_object->setReas_setter(reas0);
}

QPoint  QContextMenuEvent_QtDShell::gp_getter()
{
    return gp;
}

QTD_EXTERN QTD_EXPORT void qtd_QContextMenuEvent_gp
(void* __this_nativeId,
 QPoint * __d_return_value){
    QContextMenuEvent_QtDShell *__qt_object = (QContextMenuEvent_QtDShell *) __this_nativeId;
    QPoint __tmp_gp = __qt_object->gp_getter();
    *__d_return_value = __tmp_gp;
}

void QContextMenuEvent_QtDShell::setGp_setter(QPoint  gp0)
{
    this->gp = gp0;
}

QTD_EXTERN QTD_EXPORT void qtd_QContextMenuEvent_setGp_QPoint
(void* __this_nativeId,
 QPoint gp0){
    QContextMenuEvent_QtDShell *__qt_object = (QContextMenuEvent_QtDShell *) __this_nativeId;
    __qt_object->setGp_setter(gp0);
}

QPoint  QContextMenuEvent_QtDShell::p_getter()
{
    return p;
}

QTD_EXTERN QTD_EXPORT void qtd_QContextMenuEvent_p
(void* __this_nativeId,
 QPoint * __d_return_value){
    QContextMenuEvent_QtDShell *__qt_object = (QContextMenuEvent_QtDShell *) __this_nativeId;
    QPoint __tmp_p = __qt_object->p_getter();
    *__d_return_value = __tmp_p;
}

void QContextMenuEvent_QtDShell::setP_setter(QPoint  p0)
{
    this->p = p0;
}

QTD_EXTERN QTD_EXPORT void qtd_QContextMenuEvent_setP_QPoint
(void* __this_nativeId,
 QPoint p0){
    QContextMenuEvent_QtDShell *__qt_object = (QContextMenuEvent_QtDShell *) __this_nativeId;
    __qt_object->setP_setter(p0);
}



