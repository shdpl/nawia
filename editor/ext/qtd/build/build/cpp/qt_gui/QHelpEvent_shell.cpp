#include <QVariant>

#include "QHelpEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QHelpEvent_QtDShell::QHelpEvent_QtDShell(void *d_ptr, QEvent::Type  type0, const QPoint&  pos1, const QPoint&  globalPos2)
    : QHelpEvent(type0, pos1, globalPos2),
      QtdObjectLink(d_ptr)
{
}

QHelpEvent_QtDShell::~QHelpEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QHelpEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QHelpEvent::QHelpEvent(QEvent::Type type, const QPoint & pos, const QPoint & globalPos)
QTD_EXTERN QTD_EXPORT void* qtd_QHelpEvent_QHelpEvent_Type_QPoint_QPoint
(void *d_ptr,
 int type0,
 QPoint pos1,
 QPoint globalPos2)
{
    QEvent::Type __qt_type0 = (QEvent::Type) type0;
    QHelpEvent_QtDShell *__qt_this = new QHelpEvent_QtDShell(d_ptr, (QEvent::Type )__qt_type0, (const QPoint& )pos1, (const QPoint& )globalPos2);
    return (void *) __qt_this;

}

// QHelpEvent::globalPos() const
QTD_EXTERN QTD_EXPORT void qtd_QHelpEvent_globalPos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QHelpEvent_QtDShell *__qt_this = (QHelpEvent_QtDShell *) __this_nativeId;
    const QPoint&  __qt_return_value = __qt_this->globalPos();

    *__d_return_value = __qt_return_value;

}

// QHelpEvent::globalX() const
QTD_EXTERN QTD_EXPORT int qtd_QHelpEvent_globalX_const
(void* __this_nativeId)
{
    QHelpEvent_QtDShell *__qt_this = (QHelpEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->globalX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHelpEvent::globalY() const
QTD_EXTERN QTD_EXPORT int qtd_QHelpEvent_globalY_const
(void* __this_nativeId)
{
    QHelpEvent_QtDShell *__qt_this = (QHelpEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->globalY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHelpEvent::pos() const
QTD_EXTERN QTD_EXPORT void qtd_QHelpEvent_pos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QHelpEvent_QtDShell *__qt_this = (QHelpEvent_QtDShell *) __this_nativeId;
    const QPoint&  __qt_return_value = __qt_this->pos();

    *__d_return_value = __qt_return_value;

}

// QHelpEvent::x() const
QTD_EXTERN QTD_EXPORT int qtd_QHelpEvent_x_const
(void* __this_nativeId)
{
    QHelpEvent_QtDShell *__qt_this = (QHelpEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->x();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QHelpEvent::y() const
QTD_EXTERN QTD_EXPORT int qtd_QHelpEvent_y_const
(void* __this_nativeId)
{
    QHelpEvent_QtDShell *__qt_this = (QHelpEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->y();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


