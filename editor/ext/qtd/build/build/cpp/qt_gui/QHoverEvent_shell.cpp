#include <QVariant>

#include "QHoverEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QHoverEvent_QtDShell::QHoverEvent_QtDShell(void *d_ptr, QEvent::Type  type0, const QPoint&  pos1, const QPoint&  oldPos2)
    : QHoverEvent(type0, pos1, oldPos2),
      QtdObjectLink(d_ptr)
{
}

QHoverEvent_QtDShell::~QHoverEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QHoverEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QHoverEvent::QHoverEvent(QEvent::Type type, const QPoint & pos, const QPoint & oldPos)
QTD_EXTERN QTD_EXPORT void* qtd_QHoverEvent_QHoverEvent_Type_QPoint_QPoint
(void *d_ptr,
 int type0,
 QPoint pos1,
 QPoint oldPos2)
{
    QEvent::Type __qt_type0 = (QEvent::Type) type0;
    QHoverEvent_QtDShell *__qt_this = new QHoverEvent_QtDShell(d_ptr, (QEvent::Type )__qt_type0, (const QPoint& )pos1, (const QPoint& )oldPos2);
    return (void *) __qt_this;

}

// QHoverEvent::oldPos() const
QTD_EXTERN QTD_EXPORT void qtd_QHoverEvent_oldPos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QHoverEvent_QtDShell *__qt_this = (QHoverEvent_QtDShell *) __this_nativeId;
    const QPoint&  __qt_return_value = __qt_this->oldPos();

    *__d_return_value = __qt_return_value;

}

// QHoverEvent::pos() const
QTD_EXTERN QTD_EXPORT void qtd_QHoverEvent_pos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QHoverEvent_QtDShell *__qt_this = (QHoverEvent_QtDShell *) __this_nativeId;
    const QPoint&  __qt_return_value = __qt_this->pos();

    *__d_return_value = __qt_return_value;

}

// ---externC---end
// Field accessors
QPoint  QHoverEvent_QtDShell::op_getter()
{
    return op;
}

QTD_EXTERN QTD_EXPORT void qtd_QHoverEvent_op
(void* __this_nativeId,
 QPoint * __d_return_value){
    QHoverEvent_QtDShell *__qt_object = (QHoverEvent_QtDShell *) __this_nativeId;
    QPoint __tmp_op = __qt_object->op_getter();
    *__d_return_value = __tmp_op;
}

void QHoverEvent_QtDShell::setOp_setter(QPoint  op0)
{
    this->op = op0;
}

QTD_EXTERN QTD_EXPORT void qtd_QHoverEvent_setOp_QPoint
(void* __this_nativeId,
 QPoint op0){
    QHoverEvent_QtDShell *__qt_object = (QHoverEvent_QtDShell *) __this_nativeId;
    __qt_object->setOp_setter(op0);
}

QPoint  QHoverEvent_QtDShell::p_getter()
{
    return p;
}

QTD_EXTERN QTD_EXPORT void qtd_QHoverEvent_p
(void* __this_nativeId,
 QPoint * __d_return_value){
    QHoverEvent_QtDShell *__qt_object = (QHoverEvent_QtDShell *) __this_nativeId;
    QPoint __tmp_p = __qt_object->p_getter();
    *__d_return_value = __tmp_p;
}

void QHoverEvent_QtDShell::setP_setter(QPoint  p0)
{
    this->p = p0;
}

QTD_EXTERN QTD_EXPORT void qtd_QHoverEvent_setP_QPoint
(void* __this_nativeId,
 QPoint p0){
    QHoverEvent_QtDShell *__qt_object = (QHoverEvent_QtDShell *) __this_nativeId;
    __qt_object->setP_setter(p0);
}



