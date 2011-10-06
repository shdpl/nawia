#include <QPixmap>
#include <QPoint>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdrag.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpixmap.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QDrag_shell.h"
#include <iostream>
#include <qdrag.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QDragEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QDragEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QDrag_createEntity(void *nativeId, void* dId)
{
    new QDragEntity((QObject*)nativeId, dId);
}

QDrag_QtDShell::QDrag_QtDShell(void *d_ptr, QWidget*  dragSource0)
    : QDrag(dragSource0),
      QObjectLink(this, d_ptr)
{
}

QDrag_QtDShell::~QDrag_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QDrag_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QDrag::metaObject();
}

int QDrag_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QDrag::qt_metacall(_c, _id, _a);
}

int QDrag_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QDrag::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QDrag_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QDrag_QtDShell *__qt_this = (QDrag_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QDrag_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QDrag_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QDrag_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QDrag_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QDrag_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QDrag_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QDrag_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QDrag_QtDShell::__public_actionChanged(int  action0)
{
    QDrag::actionChanged((Qt::DropAction )action0);
}

void QDrag_QtDShell::__public_targetChanged(QWidget*  newTarget0)
{
    QDrag::targetChanged((QWidget* )newTarget0);
}

// Write virtual function overries used to decide on static/virtual calls
void QDrag_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QDrag_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QDrag_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QDrag_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QDrag_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QDrag::actionChanged(Qt::DropAction action)
QTD_EXTERN QTD_EXPORT void qtd_QDrag_actionChanged_DropAction
(void* __this_nativeId,
 int action0)
{
    Qt::DropAction __qt_action0 = (Qt::DropAction) action0;
    QDrag_QtDShell *__qt_this = (QDrag_QtDShell *) __this_nativeId;
    __qt_this->__public_actionChanged((Qt::DropAction )__qt_action0);

}

// QDrag::targetChanged(QWidget * newTarget)
QTD_EXTERN QTD_EXPORT void qtd_QDrag_targetChanged_QWidget
(void* __this_nativeId,
 void* newTarget0)
{
    QWidget*  __qt_newTarget0 = (QWidget* ) newTarget0;
    QDrag_QtDShell *__qt_this = (QDrag_QtDShell *) __this_nativeId;
    __qt_this->__public_targetChanged((QWidget* )__qt_newTarget0);

}

// ---externC---
// QDrag::QDrag(QWidget * dragSource)
QTD_EXTERN QTD_EXPORT void* qtd_QDrag_QDrag_QWidget
(void *d_ptr,
 void* dragSource0)
{
    QWidget*  __qt_dragSource0 = (QWidget* ) dragSource0;
    QDrag_QtDShell *__qt_this = new QDrag_QtDShell(d_ptr, (QWidget* )__qt_dragSource0);
    return (void *) __qt_this;

}

// QDrag::exec(QFlags<Qt::DropAction> supportedActions)
QTD_EXTERN QTD_EXPORT int qtd_QDrag_exec_DropActions
(void* __this_nativeId,
 int supportedActions0)
{
    QFlags<Qt::DropAction> __qt_supportedActions0 = (QFlags<Qt::DropAction>) supportedActions0;
    QDrag_QtDShell *__qt_this = (QDrag_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->exec((Qt::DropActions )__qt_supportedActions0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDrag::exec(QFlags<Qt::DropAction> supportedActions, Qt::DropAction defaultAction)
QTD_EXTERN QTD_EXPORT int qtd_QDrag_exec_DropActions_DropAction
(void* __this_nativeId,
 int supportedActions0,
 int defaultAction1)
{
    QFlags<Qt::DropAction> __qt_supportedActions0 = (QFlags<Qt::DropAction>) supportedActions0;
    Qt::DropAction __qt_defaultAction1 = (Qt::DropAction) defaultAction1;
    QDrag_QtDShell *__qt_this = (QDrag_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->exec((Qt::DropActions )__qt_supportedActions0, (Qt::DropAction )__qt_defaultAction1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDrag::hotSpot() const
QTD_EXTERN QTD_EXPORT void qtd_QDrag_hotSpot_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QDrag_QtDShell *__qt_this = (QDrag_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->hotSpot();

    *__d_return_value = __qt_return_value;

}

// QDrag::mimeData() const
QTD_EXTERN QTD_EXPORT void* qtd_QDrag_mimeData_const
(void* __this_nativeId)
{
    QDrag_QtDShell *__qt_this = (QDrag_QtDShell *) __this_nativeId;
    QMimeData*  __qt_return_value = __qt_this->mimeData();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QDrag::pixmap() const
QTD_EXTERN QTD_EXPORT void* qtd_QDrag_pixmap_const
(void* __this_nativeId)
{
    QDrag_QtDShell *__qt_this = (QDrag_QtDShell *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->pixmap();

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QDrag::setDragCursor(const QPixmap & cursor, Qt::DropAction action)
QTD_EXTERN QTD_EXPORT void qtd_QDrag_setDragCursor_QPixmap_DropAction
(void* __this_nativeId,
 void* cursor0,
 int action1)
{
    const QPixmap&  __qt_cursor0 = (const QPixmap& ) *(QPixmap *)cursor0;
    Qt::DropAction __qt_action1 = (Qt::DropAction) action1;
    QDrag_QtDShell *__qt_this = (QDrag_QtDShell *) __this_nativeId;
    __qt_this->setDragCursor((const QPixmap& )__qt_cursor0, (Qt::DropAction )__qt_action1);

}

// QDrag::setHotSpot(const QPoint & hotspot)
QTD_EXTERN QTD_EXPORT void qtd_QDrag_setHotSpot_QPoint
(void* __this_nativeId,
 QPoint hotspot0)
{
    QDrag_QtDShell *__qt_this = (QDrag_QtDShell *) __this_nativeId;
    __qt_this->setHotSpot((const QPoint& )hotspot0);

}

// QDrag::setMimeData(QMimeData * data)
QTD_EXTERN QTD_EXPORT void qtd_QDrag_setMimeData_QMimeData
(void* __this_nativeId,
 void* data0)
{
    QMimeData*  __qt_data0 = (QMimeData* ) data0;
    QDrag_QtDShell *__qt_this = (QDrag_QtDShell *) __this_nativeId;
    __qt_this->setMimeData((QMimeData* )__qt_data0);

}

// QDrag::setPixmap(const QPixmap & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QDrag_setPixmap_QPixmap
(void* __this_nativeId,
 void* arg__1)
{
    const QPixmap&  __qt_arg__1 = (const QPixmap& ) *(QPixmap *)arg__1;
    QDrag_QtDShell *__qt_this = (QDrag_QtDShell *) __this_nativeId;
    __qt_this->setPixmap((const QPixmap& )__qt_arg__1);

}

// QDrag::source() const
QTD_EXTERN QTD_EXPORT void* qtd_QDrag_source_const
(void* __this_nativeId)
{
    QDrag_QtDShell *__qt_this = (QDrag_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->source();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QDrag::target() const
QTD_EXTERN QTD_EXPORT void* qtd_QDrag_target_const
(void* __this_nativeId)
{
    QDrag_QtDShell *__qt_this = (QDrag_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->target();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QDrag_staticMetaObject() {
    return (void*)&QDrag::staticMetaObject;
}


