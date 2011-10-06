#include <QVarLengthArray>
#include <QVariant>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicsitem.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicsview.h>
#include <qgraphicswidget.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpolygon.h>
#include <qstyle.h>
#include <qtransform.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QGraphicsScene_shell.h"
#include <iostream>
#include <qgraphicsscene.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QGraphicsSceneEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QGraphicsSceneEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_createEntity(void *nativeId, void* dId)
{
    new QGraphicsSceneEntity((QObject*)nativeId, dId);
}

QGraphicsScene_QtDShell::QGraphicsScene_QtDShell(void *d_ptr, QObject*  parent0)
    : QGraphicsScene(parent0),
      QObjectLink(this, d_ptr)
{
}

QGraphicsScene_QtDShell::QGraphicsScene_QtDShell(void *d_ptr, const QRectF&  sceneRect0, QObject*  parent1)
    : QGraphicsScene(sceneRect0, parent1),
      QObjectLink(this, d_ptr)
{
}

QGraphicsScene_QtDShell::QGraphicsScene_QtDShell(void *d_ptr, double  x0, double  y1, double  width2, double  height3, QObject*  parent4)
    : QGraphicsScene(x0, y1, width2, height3, parent4),
      QObjectLink(this, d_ptr)
{
}

QGraphicsScene_QtDShell::~QGraphicsScene_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QGraphicsScene_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QGraphicsScene::metaObject();
}

int QGraphicsScene_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QGraphicsScene::qt_metacall(_c, _id, _a);
}

int QGraphicsScene_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QGraphicsScene::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QGraphicsScene_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsScene_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QGraphicsScene_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsScene_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch)
void QGraphicsScene_QtDShell::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0)
{
    qtd_QGraphicsScene_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneContextMenuEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsScene_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QGraphicsScene_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsScene_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch)
void QGraphicsScene_QtDShell::dragEnterEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsScene_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsScene_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsScene_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch)
void QGraphicsScene_QtDShell::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsScene_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsScene_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsScene_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch)
void QGraphicsScene_QtDShell::dragMoveEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsScene_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsScene_drawBackground_QPainter_QRectF_dispatch, (void *dId, void* painter0, QRectF* rect1))
QTD_FUNC(GUI, QGraphicsScene_drawBackground_QPainter_QRectF_dispatch)
void QGraphicsScene_QtDShell::drawBackground(QPainter*  painter0, const QRectF&  rect1)
{
    qtd_QGraphicsScene_drawBackground_QPainter_QRectF_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QRectF& )rect1);
}

QTD_FUNC_DECL(GUI, void, QGraphicsScene_drawForeground_QPainter_QRectF_dispatch, (void *dId, void* painter0, QRectF* rect1))
QTD_FUNC(GUI, QGraphicsScene_drawForeground_QPainter_QRectF_dispatch)
void QGraphicsScene_QtDShell::drawForeground(QPainter*  painter0, const QRectF&  rect1)
{
    qtd_QGraphicsScene_drawForeground_QPainter_QRectF_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QRectF& )rect1);
}

QTD_FUNC_DECL(GUI, void, QGraphicsScene_dropEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsScene_dropEvent_QGraphicsSceneDragDropEvent_dispatch)
void QGraphicsScene_QtDShell::dropEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsScene_dropEvent_QGraphicsSceneDragDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QGraphicsScene_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* watched0, void* event1))
bool  QGraphicsScene_QtDShell::eventFilter(QObject*  watched0, QEvent*  event1)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )watched0, (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void, QGraphicsScene_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsScene_focusInEvent_QFocusEvent_dispatch)
void QGraphicsScene_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QGraphicsScene_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsScene_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsScene_focusOutEvent_QFocusEvent_dispatch)
void QGraphicsScene_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QGraphicsScene_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsScene_helpEvent_QGraphicsSceneHelpEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsScene_helpEvent_QGraphicsSceneHelpEvent_dispatch)
void QGraphicsScene_QtDShell::helpEvent(QGraphicsSceneHelpEvent*  event0)
{
    qtd_QGraphicsScene_helpEvent_QGraphicsSceneHelpEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneHelpEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsScene_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsScene_inputMethodEvent_QInputMethodEvent_dispatch)
void QGraphicsScene_QtDShell::inputMethodEvent(QInputMethodEvent*  event0)
{
    qtd_QGraphicsScene_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsScene_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int query0))
QTD_FUNC(GUI, QGraphicsScene_inputMethodQuery_InputMethodQuery_const_dispatch)
QVariant  QGraphicsScene_QtDShell::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsScene_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )query0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsScene_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsScene_keyPressEvent_QKeyEvent_dispatch)
void QGraphicsScene_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QGraphicsScene_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsScene_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsScene_keyReleaseEvent_QKeyEvent_dispatch)
void QGraphicsScene_QtDShell::keyReleaseEvent(QKeyEvent*  event0)
{
    qtd_QGraphicsScene_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsScene_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsScene_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch)
void QGraphicsScene_QtDShell::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsScene_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsScene_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsScene_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch)
void QGraphicsScene_QtDShell::mouseMoveEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsScene_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsScene_mousePressEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsScene_mousePressEvent_QGraphicsSceneMouseEvent_dispatch)
void QGraphicsScene_QtDShell::mousePressEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsScene_mousePressEvent_QGraphicsSceneMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsScene_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsScene_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch)
void QGraphicsScene_QtDShell::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsScene_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsScene_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QGraphicsScene_wheelEvent_QGraphicsSceneWheelEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsScene_wheelEvent_QGraphicsSceneWheelEvent_dispatch)
void QGraphicsScene_QtDShell::wheelEvent(QGraphicsSceneWheelEvent*  event0)
{
    qtd_QGraphicsScene_wheelEvent_QGraphicsSceneWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneWheelEvent* )event0);
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_initCallBacks(VoidFunc *virts) {
    qtd_QGraphicsScene_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch = (qtd_QGraphicsScene_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch_t) virts[0];
    qtd_QGraphicsScene_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch = (qtd_QGraphicsScene_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch_t) virts[1];
    qtd_QGraphicsScene_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch = (qtd_QGraphicsScene_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch_t) virts[2];
    qtd_QGraphicsScene_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch = (qtd_QGraphicsScene_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch_t) virts[3];
    qtd_QGraphicsScene_drawBackground_QPainter_QRectF_dispatch = (qtd_QGraphicsScene_drawBackground_QPainter_QRectF_dispatch_t) virts[4];
    qtd_QGraphicsScene_drawForeground_QPainter_QRectF_dispatch = (qtd_QGraphicsScene_drawForeground_QPainter_QRectF_dispatch_t) virts[5];
    qtd_QGraphicsScene_dropEvent_QGraphicsSceneDragDropEvent_dispatch = (qtd_QGraphicsScene_dropEvent_QGraphicsSceneDragDropEvent_dispatch_t) virts[6];
    qtd_QGraphicsScene_focusInEvent_QFocusEvent_dispatch = (qtd_QGraphicsScene_focusInEvent_QFocusEvent_dispatch_t) virts[7];
    qtd_QGraphicsScene_focusOutEvent_QFocusEvent_dispatch = (qtd_QGraphicsScene_focusOutEvent_QFocusEvent_dispatch_t) virts[8];
    qtd_QGraphicsScene_helpEvent_QGraphicsSceneHelpEvent_dispatch = (qtd_QGraphicsScene_helpEvent_QGraphicsSceneHelpEvent_dispatch_t) virts[9];
    qtd_QGraphicsScene_inputMethodEvent_QInputMethodEvent_dispatch = (qtd_QGraphicsScene_inputMethodEvent_QInputMethodEvent_dispatch_t) virts[10];
    qtd_QGraphicsScene_inputMethodQuery_InputMethodQuery_const_dispatch = (qtd_QGraphicsScene_inputMethodQuery_InputMethodQuery_const_dispatch_t) virts[11];
    qtd_QGraphicsScene_keyPressEvent_QKeyEvent_dispatch = (qtd_QGraphicsScene_keyPressEvent_QKeyEvent_dispatch_t) virts[12];
    qtd_QGraphicsScene_keyReleaseEvent_QKeyEvent_dispatch = (qtd_QGraphicsScene_keyReleaseEvent_QKeyEvent_dispatch_t) virts[13];
    qtd_QGraphicsScene_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch = (qtd_QGraphicsScene_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch_t) virts[14];
    qtd_QGraphicsScene_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch = (qtd_QGraphicsScene_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch_t) virts[15];
    qtd_QGraphicsScene_mousePressEvent_QGraphicsSceneMouseEvent_dispatch = (qtd_QGraphicsScene_mousePressEvent_QGraphicsSceneMouseEvent_dispatch_t) virts[16];
    qtd_QGraphicsScene_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch = (qtd_QGraphicsScene_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch_t) virts[17];
    qtd_QGraphicsScene_wheelEvent_QGraphicsSceneWheelEvent_dispatch = (qtd_QGraphicsScene_wheelEvent_QGraphicsSceneWheelEvent_dispatch_t) virts[18];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
bool  QGraphicsScene_QtDShell::__public_focusNextPrevChild(bool  next0)
{
    return QGraphicsScene::focusNextPrevChild((bool )next0);
}

QObject*  QGraphicsScene_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QGraphicsScene_QtDShell::__public_changed(const QList<QRectF >&  region0)
{
    QGraphicsScene::changed((const QList<QRectF >& )region0);
}

void QGraphicsScene_QtDShell::__public_sceneRectChanged(const QRectF&  rect0)
{
    QGraphicsScene::sceneRectChanged((const QRectF& )rect0);
}

void QGraphicsScene_QtDShell::__public_selectionChanged()
{
    QGraphicsScene::selectionChanged();
}

// Write virtual function overries used to decide on static/virtual calls
void QGraphicsScene_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QGraphicsScene_QtDShell::__override_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsScene::contextMenuEvent((QGraphicsSceneContextMenuEvent* )event0);
    } else {
        contextMenuEvent((QGraphicsSceneContextMenuEvent* )event0);
    }
}

void QGraphicsScene_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

void QGraphicsScene_QtDShell::__override_dragEnterEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsScene::dragEnterEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragEnterEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsScene_QtDShell::__override_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsScene::dragLeaveEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragLeaveEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsScene_QtDShell::__override_dragMoveEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsScene::dragMoveEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragMoveEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsScene_QtDShell::__override_drawBackground(QPainter*  painter0, const QRectF&  rect1, bool static_call)
{
    if (static_call) {
        QGraphicsScene::drawBackground((QPainter* )painter0, (const QRectF& )rect1);
    } else {
        drawBackground((QPainter* )painter0, (const QRectF& )rect1);
    }
}

void QGraphicsScene_QtDShell::__override_drawForeground(QPainter*  painter0, const QRectF&  rect1, bool static_call)
{
    if (static_call) {
        QGraphicsScene::drawForeground((QPainter* )painter0, (const QRectF& )rect1);
    } else {
        drawForeground((QPainter* )painter0, (const QRectF& )rect1);
    }
}

void QGraphicsScene_QtDShell::__override_dropEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsScene::dropEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dropEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

bool  QGraphicsScene_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QGraphicsScene::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QGraphicsScene_QtDShell::__override_eventFilter(QObject*  watched0, QEvent*  event1, bool static_call)
{
    if (static_call) {
        return QGraphicsScene::eventFilter((QObject* )watched0, (QEvent* )event1);
    } else {
        return eventFilter((QObject* )watched0, (QEvent* )event1);
    }
}

void QGraphicsScene_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsScene::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

void QGraphicsScene_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsScene::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

void QGraphicsScene_QtDShell::__override_helpEvent(QGraphicsSceneHelpEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsScene::helpEvent((QGraphicsSceneHelpEvent* )event0);
    } else {
        helpEvent((QGraphicsSceneHelpEvent* )event0);
    }
}

void QGraphicsScene_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsScene::inputMethodEvent((QInputMethodEvent* )event0);
    } else {
        inputMethodEvent((QInputMethodEvent* )event0);
    }
}

QVariant  QGraphicsScene_QtDShell::__override_inputMethodQuery(int  query0, bool static_call) const
{
    if (static_call) {
        return QGraphicsScene::inputMethodQuery((Qt::InputMethodQuery )query0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )query0);
    }
}

void QGraphicsScene_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsScene::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QGraphicsScene_QtDShell::__override_keyReleaseEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsScene::keyReleaseEvent((QKeyEvent* )event0);
    } else {
        keyReleaseEvent((QKeyEvent* )event0);
    }
}

void QGraphicsScene_QtDShell::__override_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsScene::mouseDoubleClickEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseDoubleClickEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsScene_QtDShell::__override_mouseMoveEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsScene::mouseMoveEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseMoveEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsScene_QtDShell::__override_mousePressEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsScene::mousePressEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mousePressEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsScene_QtDShell::__override_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsScene::mouseReleaseEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseReleaseEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsScene_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QGraphicsScene_QtDShell::__override_wheelEvent(QGraphicsSceneWheelEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsScene::wheelEvent((QGraphicsSceneWheelEvent* )event0);
    } else {
        wheelEvent((QGraphicsSceneWheelEvent* )event0);
    }
}

// QGraphicsScene::changed(const QList<QRectF > & region)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_changed_QList
(void* __this_nativeId,
 void* region0)
{
QList<QRectF > __qt_region0 = (*(QList<QRectF > *)region0);
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->__public_changed((const QList<QRectF >& )__qt_region0);

}

// QGraphicsScene::sceneRectChanged(const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_sceneRectChanged_QRectF
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->__public_sceneRectChanged((const QRectF& )rect0);

}

// QGraphicsScene::selectionChanged()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_selectionChanged
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->__public_selectionChanged();

}

// ---externC---
// QGraphicsScene::QGraphicsScene(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_QGraphicsScene_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QGraphicsScene_QtDShell *__qt_this = new QGraphicsScene_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QGraphicsScene::QGraphicsScene(const QRectF & sceneRect, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_QGraphicsScene_QRectF_QObject
(void *d_ptr,
 QRectF sceneRect0,
 void* parent1)
{
    QObject*  __qt_parent1 = (QObject* ) parent1;
    QGraphicsScene_QtDShell *__qt_this = new QGraphicsScene_QtDShell(d_ptr, (const QRectF& )sceneRect0, (QObject* )__qt_parent1);
    return (void *) __qt_this;

}

// QGraphicsScene::QGraphicsScene(double x, double y, double width, double height, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_QGraphicsScene_double_double_double_double_QObject
(void *d_ptr,
 double x0,
 double y1,
 double width2,
 double height3,
 void* parent4)
{
    QObject*  __qt_parent4 = (QObject* ) parent4;
    QGraphicsScene_QtDShell *__qt_this = new QGraphicsScene_QtDShell(d_ptr, (double )x0, (double )y1, (double )width2, (double )height3, (QObject* )__qt_parent4);
    return (void *) __qt_this;

}

// QGraphicsScene::activePanel() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_activePanel_const
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->activePanel();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::activeWindow() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_activeWindow_const
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QGraphicsWidget*  __qt_return_value = __qt_this->activeWindow();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::addEllipse(const QRectF & rect, const QPen & pen, const QBrush & brush)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_addEllipse_QRectF_QPen_QBrush
(void* __this_nativeId,
 QRectF rect0,
 void* pen1,
 void* brush2)
{
    const QPen&  __qt_pen1 = (const QPen& ) *(QPen *)pen1;
    const QBrush&  __qt_brush2 = (const QBrush& ) *(QBrush *)brush2;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QGraphicsEllipseItem*  __qt_return_value = __qt_this->addEllipse((const QRectF& )rect0, (const QPen& )__qt_pen1, (const QBrush& )__qt_brush2);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::addEllipse(double x, double y, double w, double h, const QPen & pen, const QBrush & brush)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_addEllipse_double_double_double_double_QPen_QBrush
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 void* pen4,
 void* brush5)
{
    const QPen&  __qt_pen4 = (const QPen& ) *(QPen *)pen4;
    const QBrush&  __qt_brush5 = (const QBrush& ) *(QBrush *)brush5;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QGraphicsEllipseItem*  __qt_return_value = __qt_this->addEllipse((double )x0, (double )y1, (double )w2, (double )h3, (const QPen& )__qt_pen4, (const QBrush& )__qt_brush5);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::addItem(QGraphicsItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_addItem_QGraphicsItem
(void* __this_nativeId,
 void* item0)
{
    QGraphicsItem*  __qt_item0 = (QGraphicsItem* ) item0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->addItem((QGraphicsItem* )__qt_item0);

}

// QGraphicsScene::addLine(const QLineF & line, const QPen & pen)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_addLine_QLineF_QPen
(void* __this_nativeId,
 QLineF line0,
 void* pen1)
{
    const QPen&  __qt_pen1 = (const QPen& ) *(QPen *)pen1;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QGraphicsLineItem*  __qt_return_value = __qt_this->addLine((const QLineF& )line0, (const QPen& )__qt_pen1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::addLine(double x1, double y1, double x2, double y2, const QPen & pen)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_addLine_double_double_double_double_QPen
(void* __this_nativeId,
 double x10,
 double y11,
 double x22,
 double y23,
 void* pen4)
{
    const QPen&  __qt_pen4 = (const QPen& ) *(QPen *)pen4;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QGraphicsLineItem*  __qt_return_value = __qt_this->addLine((double )x10, (double )y11, (double )x22, (double )y23, (const QPen& )__qt_pen4);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::addPath(const QPainterPath & path, const QPen & pen, const QBrush & brush)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_addPath_QPainterPath_QPen_QBrush
(void* __this_nativeId,
 void* path0,
 void* pen1,
 void* brush2)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    const QPen&  __qt_pen1 = (const QPen& ) *(QPen *)pen1;
    const QBrush&  __qt_brush2 = (const QBrush& ) *(QBrush *)brush2;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QGraphicsPathItem*  __qt_return_value = __qt_this->addPath((const QPainterPath& )__qt_path0, (const QPen& )__qt_pen1, (const QBrush& )__qt_brush2);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::addPixmap(const QPixmap & pixmap)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_addPixmap_QPixmap
(void* __this_nativeId,
 void* pixmap0)
{
    const QPixmap&  __qt_pixmap0 = (const QPixmap& ) *(QPixmap *)pixmap0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QGraphicsPixmapItem*  __qt_return_value = __qt_this->addPixmap((const QPixmap& )__qt_pixmap0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::addPolygon(const QPolygonF & polygon, const QPen & pen, const QBrush & brush)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_addPolygon_QPolygonF_QPen_QBrush
(void* __this_nativeId,
 void* polygon0,
 void* pen1,
 void* brush2)
{
    const QPolygonF&  __qt_polygon0 = (const QPolygonF& ) *(QPolygonF *)polygon0;
    const QPen&  __qt_pen1 = (const QPen& ) *(QPen *)pen1;
    const QBrush&  __qt_brush2 = (const QBrush& ) *(QBrush *)brush2;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QGraphicsPolygonItem*  __qt_return_value = __qt_this->addPolygon((const QPolygonF& )__qt_polygon0, (const QPen& )__qt_pen1, (const QBrush& )__qt_brush2);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::addRect(const QRectF & rect, const QPen & pen, const QBrush & brush)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_addRect_QRectF_QPen_QBrush
(void* __this_nativeId,
 QRectF rect0,
 void* pen1,
 void* brush2)
{
    const QPen&  __qt_pen1 = (const QPen& ) *(QPen *)pen1;
    const QBrush&  __qt_brush2 = (const QBrush& ) *(QBrush *)brush2;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QGraphicsRectItem*  __qt_return_value = __qt_this->addRect((const QRectF& )rect0, (const QPen& )__qt_pen1, (const QBrush& )__qt_brush2);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::addRect(double x, double y, double w, double h, const QPen & pen, const QBrush & brush)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_addRect_double_double_double_double_QPen_QBrush
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 void* pen4,
 void* brush5)
{
    const QPen&  __qt_pen4 = (const QPen& ) *(QPen *)pen4;
    const QBrush&  __qt_brush5 = (const QBrush& ) *(QBrush *)brush5;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QGraphicsRectItem*  __qt_return_value = __qt_this->addRect((double )x0, (double )y1, (double )w2, (double )h3, (const QPen& )__qt_pen4, (const QBrush& )__qt_brush5);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::addSimpleText(const QString & text, const QFont & font)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_addSimpleText_string_QFont
(void* __this_nativeId,
 DArray text0,
 void* font1)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    const QFont&  __qt_font1 = (const QFont& ) *(QFont *)font1;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QGraphicsSimpleTextItem*  __qt_return_value = __qt_this->addSimpleText((const QString& )__qt_text0, (const QFont& )__qt_font1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::addText(const QString & text, const QFont & font)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_addText_string_QFont
(void* __this_nativeId,
 DArray text0,
 void* font1)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    const QFont&  __qt_font1 = (const QFont& ) *(QFont *)font1;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QGraphicsTextItem*  __qt_return_value = __qt_this->addText((const QString& )__qt_text0, (const QFont& )__qt_font1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::addWidget(QWidget * widget, QFlags<Qt::WindowType> wFlags)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_addWidget_QWidget_WindowFlags
(void* __this_nativeId,
 void* widget0,
 int wFlags1)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QFlags<Qt::WindowType> __qt_wFlags1 = (QFlags<Qt::WindowType>) wFlags1;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QGraphicsProxyWidget*  __qt_return_value = __qt_this->addWidget((QWidget* )__qt_widget0, (Qt::WindowFlags )__qt_wFlags1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::advance()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_advance
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->advance();

}

// QGraphicsScene::backgroundBrush() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_backgroundBrush_const
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QBrush  __qt_return_value = __qt_this->backgroundBrush();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QGraphicsScene::bspTreeDepth() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsScene_bspTreeDepth_const
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->bspTreeDepth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::clear()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_clear
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->clear();

}

// QGraphicsScene::clearFocus()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_clearFocus
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->clearFocus();

}

// QGraphicsScene::clearSelection()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_clearSelection
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->clearSelection();

}

// QGraphicsScene::collidingItems(const QGraphicsItem * item, Qt::ItemSelectionMode mode) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_collidingItems_QGraphicsItem_ItemSelectionMode_const
(void* __this_nativeId,
 void* __d_return_value,
 void* item0,
 int mode1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    Qt::ItemSelectionMode __qt_mode1 = (Qt::ItemSelectionMode) mode1;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->collidingItems((const QGraphicsItem* )__qt_item0, (Qt::ItemSelectionMode )__qt_mode1);

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsScene::createItemGroup(const QList<QGraphicsItem * > & items)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_createItemGroup_QList
(void* __this_nativeId,
 void* items0)
{
QList<QGraphicsItem* > __qt_items0 = (*(QList<QGraphicsItem* > *)items0);
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QGraphicsItemGroup*  __qt_return_value = __qt_this->createItemGroup((const QList<QGraphicsItem* >& )__qt_items0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::destroyItemGroup(QGraphicsItemGroup * group)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_destroyItemGroup_QGraphicsItemGroup
(void* __this_nativeId,
 void* group0)
{
    QGraphicsItemGroup*  __qt_group0 = (QGraphicsItemGroup* ) group0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->destroyItemGroup((QGraphicsItemGroup* )__qt_group0);

}

// QGraphicsScene::focusItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_focusItem_const
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->focusItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::focusNextPrevChild(bool next)
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsScene_focusNextPrevChild_bool
(void* __this_nativeId,
 bool next0)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->__public_focusNextPrevChild((bool )next0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::font() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_font_const
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QFont  __qt_return_value = __qt_this->font();

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QGraphicsScene::foregroundBrush() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_foregroundBrush_const
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QBrush  __qt_return_value = __qt_this->foregroundBrush();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QGraphicsScene::hasFocus() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsScene_hasFocus_const
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasFocus();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::height() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsScene_height_const
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->height();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::invalidate(const QRectF & rect, QFlags<QGraphicsScene::SceneLayer> layers)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_invalidate_QRectF_SceneLayers
(void* __this_nativeId,
 QRectF rect0,
 int layers1)
{
    QFlags<QGraphicsScene::SceneLayer> __qt_layers1 = (QFlags<QGraphicsScene::SceneLayer>) layers1;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->invalidate((const QRectF& )rect0, (QGraphicsScene::SceneLayers )__qt_layers1);

}

// QGraphicsScene::invalidate(double x, double y, double w, double h, QFlags<QGraphicsScene::SceneLayer> layers)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_invalidate_double_double_double_double_SceneLayers
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 int layers4)
{
    QFlags<QGraphicsScene::SceneLayer> __qt_layers4 = (QFlags<QGraphicsScene::SceneLayer>) layers4;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->invalidate((double )x0, (double )y1, (double )w2, (double )h3, (QGraphicsScene::SceneLayers )__qt_layers4);

}

// QGraphicsScene::isActive() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsScene_isActive_const
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isActive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::isSortCacheEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsScene_isSortCacheEnabled_const
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSortCacheEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::itemAt(const QPointF & pos) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_itemAt_QPointF_const
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->itemAt((const QPointF& )pos0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::itemAt(const QPointF & pos, const QTransform & deviceTransform) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_itemAt_QPointF_QTransform_const
(void* __this_nativeId,
 QPointF pos0,
 void* deviceTransform1)
{
    const QTransform&  __qt_deviceTransform1 = (const QTransform& ) *(QTransform *)deviceTransform1;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->itemAt((const QPointF& )pos0, (const QTransform& )__qt_deviceTransform1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::itemAt(double x, double y) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_itemAt_double_double_const
(void* __this_nativeId,
 double x0,
 double y1)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->itemAt((double )x0, (double )y1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::itemAt(double x, double y, const QTransform & deviceTransform) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_itemAt_double_double_QTransform_const
(void* __this_nativeId,
 double x0,
 double y1,
 void* deviceTransform2)
{
    const QTransform&  __qt_deviceTransform2 = (const QTransform& ) *(QTransform *)deviceTransform2;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->itemAt((double )x0, (double )y1, (const QTransform& )__qt_deviceTransform2);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::itemIndexMethod() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsScene_itemIndexMethod_const
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->itemIndexMethod();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::items() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_items_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->items();

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsScene::items(Qt::SortOrder order) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_items_SortOrder_const
(void* __this_nativeId,
 void* __d_return_value,
 int order0)
{
    Qt::SortOrder __qt_order0 = (Qt::SortOrder) order0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->items((Qt::SortOrder )__qt_order0);

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsScene::items(const QPainterPath & path, Qt::ItemSelectionMode mode) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_items_QPainterPath_ItemSelectionMode_const
(void* __this_nativeId,
 void* __d_return_value,
 void* path0,
 int mode1)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    Qt::ItemSelectionMode __qt_mode1 = (Qt::ItemSelectionMode) mode1;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->items((const QPainterPath& )__qt_path0, (Qt::ItemSelectionMode )__qt_mode1);

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsScene::items(const QPainterPath & path, Qt::ItemSelectionMode mode, Qt::SortOrder order, const QTransform & deviceTransform) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_items_QPainterPath_ItemSelectionMode_SortOrder_QTransform_const
(void* __this_nativeId,
 void* __d_return_value,
 void* path0,
 int mode1,
 int order2,
 void* deviceTransform3)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    Qt::ItemSelectionMode __qt_mode1 = (Qt::ItemSelectionMode) mode1;
    Qt::SortOrder __qt_order2 = (Qt::SortOrder) order2;
    const QTransform&  __qt_deviceTransform3 = (const QTransform& ) *(QTransform *)deviceTransform3;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->items((const QPainterPath& )__qt_path0, (Qt::ItemSelectionMode )__qt_mode1, (Qt::SortOrder )__qt_order2, (const QTransform& )__qt_deviceTransform3);

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsScene::items(const QPointF & pos) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_items_QPointF_const
(void* __this_nativeId,
 void* __d_return_value,
 QPointF pos0)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->items((const QPointF& )pos0);

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsScene::items(const QPointF & pos, Qt::ItemSelectionMode mode, Qt::SortOrder order, const QTransform & deviceTransform) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_items_QPointF_ItemSelectionMode_SortOrder_QTransform_const
(void* __this_nativeId,
 void* __d_return_value,
 QPointF pos0,
 int mode1,
 int order2,
 void* deviceTransform3)
{
    Qt::ItemSelectionMode __qt_mode1 = (Qt::ItemSelectionMode) mode1;
    Qt::SortOrder __qt_order2 = (Qt::SortOrder) order2;
    const QTransform&  __qt_deviceTransform3 = (const QTransform& ) *(QTransform *)deviceTransform3;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->items((const QPointF& )pos0, (Qt::ItemSelectionMode )__qt_mode1, (Qt::SortOrder )__qt_order2, (const QTransform& )__qt_deviceTransform3);

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsScene::items(const QPolygonF & polygon, Qt::ItemSelectionMode mode) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_items_QPolygonF_ItemSelectionMode_const
(void* __this_nativeId,
 void* __d_return_value,
 void* polygon0,
 int mode1)
{
    const QPolygonF&  __qt_polygon0 = (const QPolygonF& ) *(QPolygonF *)polygon0;
    Qt::ItemSelectionMode __qt_mode1 = (Qt::ItemSelectionMode) mode1;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->items((const QPolygonF& )__qt_polygon0, (Qt::ItemSelectionMode )__qt_mode1);

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsScene::items(const QPolygonF & polygon, Qt::ItemSelectionMode mode, Qt::SortOrder order, const QTransform & deviceTransform) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_items_QPolygonF_ItemSelectionMode_SortOrder_QTransform_const
(void* __this_nativeId,
 void* __d_return_value,
 void* polygon0,
 int mode1,
 int order2,
 void* deviceTransform3)
{
    const QPolygonF&  __qt_polygon0 = (const QPolygonF& ) *(QPolygonF *)polygon0;
    Qt::ItemSelectionMode __qt_mode1 = (Qt::ItemSelectionMode) mode1;
    Qt::SortOrder __qt_order2 = (Qt::SortOrder) order2;
    const QTransform&  __qt_deviceTransform3 = (const QTransform& ) *(QTransform *)deviceTransform3;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->items((const QPolygonF& )__qt_polygon0, (Qt::ItemSelectionMode )__qt_mode1, (Qt::SortOrder )__qt_order2, (const QTransform& )__qt_deviceTransform3);

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsScene::items(const QRectF & rect, Qt::ItemSelectionMode mode) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_items_QRectF_ItemSelectionMode_const
(void* __this_nativeId,
 void* __d_return_value,
 QRectF rect0,
 int mode1)
{
    Qt::ItemSelectionMode __qt_mode1 = (Qt::ItemSelectionMode) mode1;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->items((const QRectF& )rect0, (Qt::ItemSelectionMode )__qt_mode1);

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsScene::items(const QRectF & rect, Qt::ItemSelectionMode mode, Qt::SortOrder order, const QTransform & deviceTransform) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_items_QRectF_ItemSelectionMode_SortOrder_QTransform_const
(void* __this_nativeId,
 void* __d_return_value,
 QRectF rect0,
 int mode1,
 int order2,
 void* deviceTransform3)
{
    Qt::ItemSelectionMode __qt_mode1 = (Qt::ItemSelectionMode) mode1;
    Qt::SortOrder __qt_order2 = (Qt::SortOrder) order2;
    const QTransform&  __qt_deviceTransform3 = (const QTransform& ) *(QTransform *)deviceTransform3;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->items((const QRectF& )rect0, (Qt::ItemSelectionMode )__qt_mode1, (Qt::SortOrder )__qt_order2, (const QTransform& )__qt_deviceTransform3);

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsScene::items(double x, double y, double w, double h, Qt::ItemSelectionMode mode) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_items_double_double_double_double_ItemSelectionMode_const
(void* __this_nativeId,
 void* __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3,
 int mode4)
{
    Qt::ItemSelectionMode __qt_mode4 = (Qt::ItemSelectionMode) mode4;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->items((double )x0, (double )y1, (double )w2, (double )h3, (Qt::ItemSelectionMode )__qt_mode4);

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsScene::items(double x, double y, double w, double h, Qt::ItemSelectionMode mode, Qt::SortOrder order, const QTransform & deviceTransform) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_items_double_double_double_double_ItemSelectionMode_SortOrder_QTransform_const
(void* __this_nativeId,
 void* __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3,
 int mode4,
 int order5,
 void* deviceTransform6)
{
    Qt::ItemSelectionMode __qt_mode4 = (Qt::ItemSelectionMode) mode4;
    Qt::SortOrder __qt_order5 = (Qt::SortOrder) order5;
    const QTransform&  __qt_deviceTransform6 = (const QTransform& ) *(QTransform *)deviceTransform6;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->items((double )x0, (double )y1, (double )w2, (double )h3, (Qt::ItemSelectionMode )__qt_mode4, (Qt::SortOrder )__qt_order5, (const QTransform& )__qt_deviceTransform6);

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsScene::itemsBoundingRect() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_itemsBoundingRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->itemsBoundingRect();

    *__d_return_value = __qt_return_value;

}

// QGraphicsScene::mouseGrabberItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_mouseGrabberItem_const
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->mouseGrabberItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::palette() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_palette_const
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QPalette  __qt_return_value = __qt_this->palette();

    void* __d_return_value = (void*) new QPalette(__qt_return_value);

    return __d_return_value;
}

// QGraphicsScene::removeItem(QGraphicsItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_removeItem_QGraphicsItem
(void* __this_nativeId,
 void* item0)
{
    QGraphicsItem*  __qt_item0 = (QGraphicsItem* ) item0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->removeItem((QGraphicsItem* )__qt_item0);

}

// QGraphicsScene::render(QPainter * painter, const QRectF & target, const QRectF & source, Qt::AspectRatioMode aspectRatioMode)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_render_QPainter_QRectF_QRectF_AspectRatioMode
(void* __this_nativeId,
 void* painter0,
 QRectF target1,
 QRectF source2,
 int aspectRatioMode3)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    Qt::AspectRatioMode __qt_aspectRatioMode3 = (Qt::AspectRatioMode) aspectRatioMode3;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->render((QPainter* )__qt_painter0, (const QRectF& )target1, (const QRectF& )source2, (Qt::AspectRatioMode )__qt_aspectRatioMode3);

}

// QGraphicsScene::sceneRect() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_sceneRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->sceneRect();

    *__d_return_value = __qt_return_value;

}

// QGraphicsScene::selectedItems() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_selectedItems_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->selectedItems();

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsScene::selectionArea() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_selectionArea_const
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->selectionArea();

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsScene::sendEvent(QGraphicsItem * item, QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsScene_sendEvent_QGraphicsItem_QEvent
(void* __this_nativeId,
 void* item0,
 void* event1)
{
    QGraphicsItem*  __qt_item0 = (QGraphicsItem* ) item0;
    QEvent*  __qt_event1 = (QEvent* ) event1;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->sendEvent((QGraphicsItem* )__qt_item0, (QEvent* )__qt_event1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::setActivePanel(QGraphicsItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_setActivePanel_QGraphicsItem
(void* __this_nativeId,
 void* item0)
{
    QGraphicsItem*  __qt_item0 = (QGraphicsItem* ) item0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->setActivePanel((QGraphicsItem* )__qt_item0);

}

// QGraphicsScene::setActiveWindow(QGraphicsWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_setActiveWindow_QGraphicsWidget
(void* __this_nativeId,
 void* widget0)
{
    QGraphicsWidget*  __qt_widget0 = (QGraphicsWidget* ) widget0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->setActiveWindow((QGraphicsWidget* )__qt_widget0);

}

// QGraphicsScene::setBackgroundBrush(const QBrush & brush)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_setBackgroundBrush_QBrush
(void* __this_nativeId,
 void* brush0)
{
    const QBrush&  __qt_brush0 = (const QBrush& ) *(QBrush *)brush0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->setBackgroundBrush((const QBrush& )__qt_brush0);

}

// QGraphicsScene::setBspTreeDepth(int depth)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_setBspTreeDepth_int
(void* __this_nativeId,
 int depth0)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->setBspTreeDepth((int )depth0);

}

// QGraphicsScene::setFocus(Qt::FocusReason focusReason)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_setFocus_FocusReason
(void* __this_nativeId,
 int focusReason0)
{
    Qt::FocusReason __qt_focusReason0 = (Qt::FocusReason) focusReason0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->setFocus((Qt::FocusReason )__qt_focusReason0);

}

// QGraphicsScene::setFocusItem(QGraphicsItem * item, Qt::FocusReason focusReason)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_setFocusItem_QGraphicsItem_FocusReason
(void* __this_nativeId,
 void* item0,
 int focusReason1)
{
    QGraphicsItem*  __qt_item0 = (QGraphicsItem* ) item0;
    Qt::FocusReason __qt_focusReason1 = (Qt::FocusReason) focusReason1;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->setFocusItem((QGraphicsItem* )__qt_item0, (Qt::FocusReason )__qt_focusReason1);

}

// QGraphicsScene::setFont(const QFont & font)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_setFont_QFont
(void* __this_nativeId,
 void* font0)
{
    const QFont&  __qt_font0 = (const QFont& ) *(QFont *)font0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->setFont((const QFont& )__qt_font0);

}

// QGraphicsScene::setForegroundBrush(const QBrush & brush)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_setForegroundBrush_QBrush
(void* __this_nativeId,
 void* brush0)
{
    const QBrush&  __qt_brush0 = (const QBrush& ) *(QBrush *)brush0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->setForegroundBrush((const QBrush& )__qt_brush0);

}

// QGraphicsScene::setItemIndexMethod(QGraphicsScene::ItemIndexMethod method)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_setItemIndexMethod_ItemIndexMethod
(void* __this_nativeId,
 int method0)
{
    QGraphicsScene::ItemIndexMethod __qt_method0 = (QGraphicsScene::ItemIndexMethod) method0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->setItemIndexMethod((QGraphicsScene::ItemIndexMethod )__qt_method0);

}

// QGraphicsScene::setPalette(const QPalette & palette)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_setPalette_QPalette
(void* __this_nativeId,
 void* palette0)
{
    const QPalette&  __qt_palette0 = (const QPalette& ) *(QPalette *)palette0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->setPalette((const QPalette& )__qt_palette0);

}

// QGraphicsScene::setSceneRect(const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_setSceneRect_QRectF
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->setSceneRect((const QRectF& )rect0);

}

// QGraphicsScene::setSceneRect(double x, double y, double w, double h)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_setSceneRect_double_double_double_double
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->setSceneRect((double )x0, (double )y1, (double )w2, (double )h3);

}

// QGraphicsScene::setSelectionArea(const QPainterPath & path)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_setSelectionArea_QPainterPath
(void* __this_nativeId,
 void* path0)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->setSelectionArea((const QPainterPath& )__qt_path0);

}

// QGraphicsScene::setSelectionArea(const QPainterPath & path, Qt::ItemSelectionMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_setSelectionArea_QPainterPath_ItemSelectionMode
(void* __this_nativeId,
 void* path0,
 int mode1)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    Qt::ItemSelectionMode __qt_mode1 = (Qt::ItemSelectionMode) mode1;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->setSelectionArea((const QPainterPath& )__qt_path0, (Qt::ItemSelectionMode )__qt_mode1);

}

// QGraphicsScene::setSelectionArea(const QPainterPath & path, Qt::ItemSelectionMode mode, const QTransform & deviceTransform)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_setSelectionArea_QPainterPath_ItemSelectionMode_QTransform
(void* __this_nativeId,
 void* path0,
 int mode1,
 void* deviceTransform2)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    Qt::ItemSelectionMode __qt_mode1 = (Qt::ItemSelectionMode) mode1;
    const QTransform&  __qt_deviceTransform2 = (const QTransform& ) *(QTransform *)deviceTransform2;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->setSelectionArea((const QPainterPath& )__qt_path0, (Qt::ItemSelectionMode )__qt_mode1, (const QTransform& )__qt_deviceTransform2);

}

// QGraphicsScene::setSelectionArea(const QPainterPath & path, const QTransform & deviceTransform)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_setSelectionArea_QPainterPath_QTransform
(void* __this_nativeId,
 void* path0,
 void* deviceTransform1)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    const QTransform&  __qt_deviceTransform1 = (const QTransform& ) *(QTransform *)deviceTransform1;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->setSelectionArea((const QPainterPath& )__qt_path0, (const QTransform& )__qt_deviceTransform1);

}

// QGraphicsScene::setSortCacheEnabled(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_setSortCacheEnabled_bool
(void* __this_nativeId,
 bool enabled0)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->setSortCacheEnabled((bool )enabled0);

}

// QGraphicsScene::setStickyFocus(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_setStickyFocus_bool
(void* __this_nativeId,
 bool enabled0)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->setStickyFocus((bool )enabled0);

}

// QGraphicsScene::setStyle(QStyle * style)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_setStyle_QStyle
(void* __this_nativeId,
 void* style0)
{
    QStyle*  __qt_style0 = (QStyle* ) style0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->setStyle((QStyle* )__qt_style0);

}

// QGraphicsScene::stickyFocus() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsScene_stickyFocus_const
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->stickyFocus();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::style() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_style_const
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QStyle*  __qt_return_value = __qt_this->style();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::update(const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_update_QRectF
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->update((const QRectF& )rect0);

}

// QGraphicsScene::update(double x, double y, double w, double h)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_update_double_double_double_double
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    __qt_this->update((double )x0, (double )y1, (double )w2, (double )h3);

}

// QGraphicsScene::views() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_views_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    QList<QGraphicsView* >  __qt_return_value = __qt_this->views();

QList<QGraphicsView* > &__d_return_value_tmp = (*(QList<QGraphicsView* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsScene::width() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsScene_width_const
(void* __this_nativeId)
{
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->width();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_contextMenuEvent_QGraphicsSceneContextMenuEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneContextMenuEvent*  __qt_event0 = (QGraphicsSceneContextMenuEvent* ) event0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_contextMenuEvent((QGraphicsSceneContextMenuEvent* )__qt_event0, __do_static_call);

}

// QGraphicsScene::dragEnterEvent(QGraphicsSceneDragDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_dragEnterEvent_QGraphicsSceneDragDropEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneDragDropEvent*  __qt_event0 = (QGraphicsSceneDragDropEvent* ) event0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragEnterEvent((QGraphicsSceneDragDropEvent* )__qt_event0, __do_static_call);

}

// QGraphicsScene::dragLeaveEvent(QGraphicsSceneDragDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_dragLeaveEvent_QGraphicsSceneDragDropEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneDragDropEvent*  __qt_event0 = (QGraphicsSceneDragDropEvent* ) event0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragLeaveEvent((QGraphicsSceneDragDropEvent* )__qt_event0, __do_static_call);

}

// QGraphicsScene::dragMoveEvent(QGraphicsSceneDragDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_dragMoveEvent_QGraphicsSceneDragDropEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneDragDropEvent*  __qt_event0 = (QGraphicsSceneDragDropEvent* ) event0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragMoveEvent((QGraphicsSceneDragDropEvent* )__qt_event0, __do_static_call);

}

// QGraphicsScene::drawBackground(QPainter * painter, const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_drawBackground_QPainter_QRectF
(void* __this_nativeId,
 void* painter0,
 QRectF rect1)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawBackground((QPainter* )__qt_painter0, (const QRectF& )rect1, __do_static_call);

}

// QGraphicsScene::drawForeground(QPainter * painter, const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_drawForeground_QPainter_QRectF
(void* __this_nativeId,
 void* painter0,
 QRectF rect1)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawForeground((QPainter* )__qt_painter0, (const QRectF& )rect1, __do_static_call);

}

// QGraphicsScene::dropEvent(QGraphicsSceneDragDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_dropEvent_QGraphicsSceneDragDropEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneDragDropEvent*  __qt_event0 = (QGraphicsSceneDragDropEvent* ) event0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dropEvent((QGraphicsSceneDragDropEvent* )__qt_event0, __do_static_call);

}

// QGraphicsScene::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsScene_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::eventFilter(QObject * watched, QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsScene_eventFilter_QObject_QEvent
(void* __this_nativeId,
 void* watched0,
 void* event1)
{
    QObject*  __qt_watched0 = (QObject* ) watched0;
    QEvent*  __qt_event1 = (QEvent* ) event1;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_eventFilter((QObject* )__qt_watched0, (QEvent* )__qt_event1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsScene::focusInEvent(QFocusEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_focusInEvent_QFocusEvent
(void* __this_nativeId,
 void* event0)
{
    QFocusEvent*  __qt_event0 = (QFocusEvent* ) event0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusInEvent((QFocusEvent* )__qt_event0, __do_static_call);

}

// QGraphicsScene::focusOutEvent(QFocusEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_focusOutEvent_QFocusEvent
(void* __this_nativeId,
 void* event0)
{
    QFocusEvent*  __qt_event0 = (QFocusEvent* ) event0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusOutEvent((QFocusEvent* )__qt_event0, __do_static_call);

}

// QGraphicsScene::helpEvent(QGraphicsSceneHelpEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_helpEvent_QGraphicsSceneHelpEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneHelpEvent*  __qt_event0 = (QGraphicsSceneHelpEvent* ) event0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_helpEvent((QGraphicsSceneHelpEvent* )__qt_event0, __do_static_call);

}

// QGraphicsScene::inputMethodEvent(QInputMethodEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_inputMethodEvent_QInputMethodEvent
(void* __this_nativeId,
 void* event0)
{
    QInputMethodEvent*  __qt_event0 = (QInputMethodEvent* ) event0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_inputMethodEvent((QInputMethodEvent* )__qt_event0, __do_static_call);

}

// QGraphicsScene::inputMethodQuery(Qt::InputMethodQuery query) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_inputMethodQuery_InputMethodQuery_const
(void* __this_nativeId,
 int query0)
{
    Qt::InputMethodQuery __qt_query0 = (Qt::InputMethodQuery) query0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_inputMethodQuery((Qt::InputMethodQuery )__qt_query0, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QGraphicsScene::keyPressEvent(QKeyEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* event0)
{
    QKeyEvent*  __qt_event0 = (QKeyEvent* ) event0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_event0, __do_static_call);

}

// QGraphicsScene::keyReleaseEvent(QKeyEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_keyReleaseEvent_QKeyEvent
(void* __this_nativeId,
 void* event0)
{
    QKeyEvent*  __qt_event0 = (QKeyEvent* ) event0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyReleaseEvent((QKeyEvent* )__qt_event0, __do_static_call);

}

// QGraphicsScene::mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_mouseDoubleClickEvent_QGraphicsSceneMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneMouseEvent*  __qt_event0 = (QGraphicsSceneMouseEvent* ) event0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseDoubleClickEvent((QGraphicsSceneMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsScene::mouseMoveEvent(QGraphicsSceneMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_mouseMoveEvent_QGraphicsSceneMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneMouseEvent*  __qt_event0 = (QGraphicsSceneMouseEvent* ) event0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QGraphicsSceneMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsScene::mousePressEvent(QGraphicsSceneMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_mousePressEvent_QGraphicsSceneMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneMouseEvent*  __qt_event0 = (QGraphicsSceneMouseEvent* ) event0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QGraphicsSceneMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsScene::mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_mouseReleaseEvent_QGraphicsSceneMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneMouseEvent*  __qt_event0 = (QGraphicsSceneMouseEvent* ) event0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QGraphicsSceneMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsScene::wheelEvent(QGraphicsSceneWheelEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsScene_wheelEvent_QGraphicsSceneWheelEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneWheelEvent*  __qt_event0 = (QGraphicsSceneWheelEvent* ) event0;
    QGraphicsScene_QtDShell *__qt_this = (QGraphicsScene_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_wheelEvent((QGraphicsSceneWheelEvent* )__qt_event0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsScene_staticMetaObject() {
    return (void*)&QGraphicsScene::staticMetaObject;
}


