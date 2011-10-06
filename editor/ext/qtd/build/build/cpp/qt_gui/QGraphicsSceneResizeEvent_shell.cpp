#include <QVariant>
#include <qgraphicssceneevent.h>
#include <qwidget.h>

#include "QGraphicsSceneResizeEvent_shell.h"
#include <iostream>
#include <qgraphicssceneevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QGraphicsSceneResizeEvent_QtDShell::QGraphicsSceneResizeEvent_QtDShell(void *d_ptr)
    : QGraphicsSceneResizeEvent(),
      QtdObjectLink(d_ptr)
{
}

QGraphicsSceneResizeEvent_QtDShell::~QGraphicsSceneResizeEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneResizeEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QGraphicsSceneResizeEvent::QGraphicsSceneResizeEvent()
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsSceneResizeEvent_QGraphicsSceneResizeEvent
(void *d_ptr)
{
    QGraphicsSceneResizeEvent_QtDShell *__qt_this = new QGraphicsSceneResizeEvent_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QGraphicsSceneResizeEvent::newSize() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneResizeEvent_newSize_const
(void* __this_nativeId,
 QSizeF * __d_return_value)
{
    QGraphicsSceneResizeEvent_QtDShell *__qt_this = (QGraphicsSceneResizeEvent_QtDShell *) __this_nativeId;
    QSizeF  __qt_return_value = __qt_this->newSize();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneResizeEvent::oldSize() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneResizeEvent_oldSize_const
(void* __this_nativeId,
 QSizeF * __d_return_value)
{
    QGraphicsSceneResizeEvent_QtDShell *__qt_this = (QGraphicsSceneResizeEvent_QtDShell *) __this_nativeId;
    QSizeF  __qt_return_value = __qt_this->oldSize();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneResizeEvent::setNewSize(const QSizeF & size)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneResizeEvent_setNewSize_QSizeF
(void* __this_nativeId,
 QSizeF size0)
{
    QGraphicsSceneResizeEvent_QtDShell *__qt_this = (QGraphicsSceneResizeEvent_QtDShell *) __this_nativeId;
    __qt_this->setNewSize((const QSizeF& )size0);

}

// QGraphicsSceneResizeEvent::setOldSize(const QSizeF & size)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneResizeEvent_setOldSize_QSizeF
(void* __this_nativeId,
 QSizeF size0)
{
    QGraphicsSceneResizeEvent_QtDShell *__qt_this = (QGraphicsSceneResizeEvent_QtDShell *) __this_nativeId;
    __qt_this->setOldSize((const QSizeF& )size0);

}

// ---externC---end
// Field accessors


