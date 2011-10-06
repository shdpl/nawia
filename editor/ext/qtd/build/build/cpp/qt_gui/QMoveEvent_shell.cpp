#include <QVariant>

#include "QMoveEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QMoveEvent_QtDShell::QMoveEvent_QtDShell(void *d_ptr, const QPoint&  pos0, const QPoint&  oldPos1)
    : QMoveEvent(pos0, oldPos1),
      QtdObjectLink(d_ptr)
{
}

QMoveEvent_QtDShell::~QMoveEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QMoveEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QMoveEvent::QMoveEvent(const QPoint & pos, const QPoint & oldPos)
QTD_EXTERN QTD_EXPORT void* qtd_QMoveEvent_QMoveEvent_QPoint_QPoint
(void *d_ptr,
 QPoint pos0,
 QPoint oldPos1)
{
    QMoveEvent_QtDShell *__qt_this = new QMoveEvent_QtDShell(d_ptr, (const QPoint& )pos0, (const QPoint& )oldPos1);
    return (void *) __qt_this;

}

// QMoveEvent::oldPos() const
QTD_EXTERN QTD_EXPORT void qtd_QMoveEvent_oldPos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QMoveEvent_QtDShell *__qt_this = (QMoveEvent_QtDShell *) __this_nativeId;
    const QPoint&  __qt_return_value = __qt_this->oldPos();

    *__d_return_value = __qt_return_value;

}

// QMoveEvent::pos() const
QTD_EXTERN QTD_EXPORT void qtd_QMoveEvent_pos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QMoveEvent_QtDShell *__qt_this = (QMoveEvent_QtDShell *) __this_nativeId;
    const QPoint&  __qt_return_value = __qt_this->pos();

    *__d_return_value = __qt_return_value;

}

// ---externC---end
// Field accessors
QPoint  QMoveEvent_QtDShell::oldp_getter()
{
    return oldp;
}

QTD_EXTERN QTD_EXPORT void qtd_QMoveEvent_oldp
(void* __this_nativeId,
 QPoint * __d_return_value){
    QMoveEvent_QtDShell *__qt_object = (QMoveEvent_QtDShell *) __this_nativeId;
    QPoint __tmp_oldp = __qt_object->oldp_getter();
    *__d_return_value = __tmp_oldp;
}

void QMoveEvent_QtDShell::setOldp_setter(QPoint  oldp0)
{
    this->oldp = oldp0;
}

QTD_EXTERN QTD_EXPORT void qtd_QMoveEvent_setOldp_QPoint
(void* __this_nativeId,
 QPoint oldp0){
    QMoveEvent_QtDShell *__qt_object = (QMoveEvent_QtDShell *) __this_nativeId;
    __qt_object->setOldp_setter(oldp0);
}

QPoint  QMoveEvent_QtDShell::p_getter()
{
    return p;
}

QTD_EXTERN QTD_EXPORT void qtd_QMoveEvent_p
(void* __this_nativeId,
 QPoint * __d_return_value){
    QMoveEvent_QtDShell *__qt_object = (QMoveEvent_QtDShell *) __this_nativeId;
    QPoint __tmp_p = __qt_object->p_getter();
    *__d_return_value = __tmp_p;
}

void QMoveEvent_QtDShell::setP_setter(QPoint  p0)
{
    this->p = p0;
}

QTD_EXTERN QTD_EXPORT void qtd_QMoveEvent_setP_QPoint
(void* __this_nativeId,
 QPoint p0){
    QMoveEvent_QtDShell *__qt_object = (QMoveEvent_QtDShell *) __this_nativeId;
    __qt_object->setP_setter(p0);
}



