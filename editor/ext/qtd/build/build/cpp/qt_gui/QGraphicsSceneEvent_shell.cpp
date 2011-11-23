#include <QVariant>
#include <qgraphicssceneevent.h>
#include <qwidget.h>

#include "QGraphicsSceneEvent_shell.h"
#include <iostream>
#include <qgraphicssceneevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QGraphicsSceneEvent_QtDShell::QGraphicsSceneEvent_QtDShell(void *d_ptr, QEvent::Type  type0)
    : QGraphicsSceneEvent(type0),
      QtdObjectLink(d_ptr)
{
}

QGraphicsSceneEvent_QtDShell::~QGraphicsSceneEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QGraphicsSceneEvent::QGraphicsSceneEvent(QEvent::Type type)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsSceneEvent_QGraphicsSceneEvent_Type
(void *d_ptr,
 int type0)
{
    QEvent::Type __qt_type0 = (QEvent::Type) type0;
    QGraphicsSceneEvent_QtDShell *__qt_this = new QGraphicsSceneEvent_QtDShell(d_ptr, (QEvent::Type )__qt_type0);
    return (void *) __qt_this;

}

// QGraphicsSceneEvent::widget() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsSceneEvent_widget_const
(void* __this_nativeId)
{
    QGraphicsSceneEvent_QtDShell *__qt_this = (QGraphicsSceneEvent_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->widget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


