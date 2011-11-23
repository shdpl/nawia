#include <QImage>
#include <QPixmap>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgl.h>
#include <qglcolormap.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qregion.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QGLWidget_shell.h"
#include <iostream>
#include <qgl.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_opengl.h"

class QGLWidgetEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QGLWidgetEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_createEntity(void *nativeId, void* dId)
{
    new QGLWidgetEntity((QObject*)nativeId, dId);
}

QGLWidget_QtDShell::QGLWidget_QtDShell(void *d_ptr, QGLContext*  context0, QWidget*  parent1, const QGLWidget*  shareWidget2, Qt::WindowFlags  f3)
    : QGLWidget(context0, parent1, shareWidget2, f3),
      QObjectLink(this, d_ptr)
{
}

QGLWidget_QtDShell::QGLWidget_QtDShell(void *d_ptr, QWidget*  parent0, const QGLWidget*  shareWidget1, Qt::WindowFlags  f2)
    : QGLWidget(parent0, shareWidget1, f2),
      QObjectLink(this, d_ptr)
{
}

QGLWidget_QtDShell::QGLWidget_QtDShell(void *d_ptr, const QGLFormat&  format0, QWidget*  parent1, const QGLWidget*  shareWidget2, Qt::WindowFlags  f3)
    : QGLWidget(format0, parent1, shareWidget2, f3),
      QObjectLink(this, d_ptr)
{
}

QGLWidget_QtDShell::~QGLWidget_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(OPENGL, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(OPENGL, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QGLWidget_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QGLWidget::metaObject();
}

int QGLWidget_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QGLWidget::qt_metacall(_c, _id, _a);
}

int QGLWidget_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QGLWidget::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QGLWidget_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(OPENGL, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QGLWidget_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QGLWidget_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QGLWidget_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QGLWidget_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QGLWidget_glDraw_dispatch, (void *dId))
QTD_FUNC(OPENGL, QGLWidget_glDraw_dispatch)
void QGLWidget_QtDShell::glDraw()
{
    qtd_QGLWidget_glDraw_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(OPENGL, void, QGLWidget_glInit_dispatch, (void *dId))
QTD_FUNC(OPENGL, QGLWidget_glInit_dispatch)
void QGLWidget_QtDShell::glInit()
{
    qtd_QGLWidget_glInit_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(OPENGL, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QGLWidget_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QGLWidget_initializeGL_dispatch, (void *dId))
QTD_FUNC(OPENGL, QGLWidget_initializeGL_dispatch)
void QGLWidget_QtDShell::initializeGL()
{
    qtd_QGLWidget_initializeGL_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(OPENGL, void, QGLWidget_initializeOverlayGL_dispatch, (void *dId))
QTD_FUNC(OPENGL, QGLWidget_initializeOverlayGL_dispatch)
void QGLWidget_QtDShell::initializeOverlayGL()
{
    qtd_QGLWidget_initializeOverlayGL_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QGLWidget_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_languageChange_dispatch, (void *dId))
void QGLWidget_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QGLWidget_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QGLWidget_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(OPENGL, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QGLWidget_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QGLWidget_paintGL_dispatch, (void *dId))
QTD_FUNC(OPENGL, QGLWidget_paintGL_dispatch)
void QGLWidget_QtDShell::paintGL()
{
    qtd_QGLWidget_paintGL_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(OPENGL, void, QGLWidget_paintOverlayGL_dispatch, (void *dId))
QTD_FUNC(OPENGL, QGLWidget_paintOverlayGL_dispatch)
void QGLWidget_QtDShell::paintOverlayGL()
{
    qtd_QGLWidget_paintOverlayGL_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QGLWidget_resizeGL_int_int_dispatch, (void *dId, int w0, int h1))
QTD_FUNC(OPENGL, QGLWidget_resizeGL_int_int_dispatch)
void QGLWidget_QtDShell::resizeGL(int  w0, int  h1)
{
    qtd_QGLWidget_resizeGL_int_int_dispatch(QObjectLink::getLink(this)->dId, (int )w0, (int )h1);
}

QTD_FUNC_DECL(OPENGL, void, QGLWidget_resizeOverlayGL_int_int_dispatch, (void *dId, int w0, int h1))
QTD_FUNC(OPENGL, QGLWidget_resizeOverlayGL_int_int_dispatch)
void QGLWidget_QtDShell::resizeOverlayGL(int  w0, int  h1)
{
    qtd_QGLWidget_resizeOverlayGL_int_int_dispatch(QObjectLink::getLink(this)->dId, (int )w0, (int )h1);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QGLWidget_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QGLWidget_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(OPENGL, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(OPENGL, void, QGLWidget_updateGL_dispatch, (void *dId))
QTD_FUNC(OPENGL, QGLWidget_updateGL_dispatch)
void QGLWidget_QtDShell::updateGL()
{
    qtd_QGLWidget_updateGL_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(OPENGL, void, QGLWidget_updateOverlayGL_dispatch, (void *dId))
QTD_FUNC(OPENGL, QGLWidget_updateOverlayGL_dispatch)
void QGLWidget_QtDShell::updateOverlayGL()
{
    qtd_QGLWidget_updateOverlayGL_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(OPENGL, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QGLWidget_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_initCallBacks(VoidFunc *virts) {
    qtd_QGLWidget_glDraw_dispatch = (qtd_QGLWidget_glDraw_dispatch_t) virts[0];
    qtd_QGLWidget_glInit_dispatch = (qtd_QGLWidget_glInit_dispatch_t) virts[1];
    qtd_QGLWidget_initializeGL_dispatch = (qtd_QGLWidget_initializeGL_dispatch_t) virts[2];
    qtd_QGLWidget_initializeOverlayGL_dispatch = (qtd_QGLWidget_initializeOverlayGL_dispatch_t) virts[3];
    qtd_QGLWidget_paintGL_dispatch = (qtd_QGLWidget_paintGL_dispatch_t) virts[4];
    qtd_QGLWidget_paintOverlayGL_dispatch = (qtd_QGLWidget_paintOverlayGL_dispatch_t) virts[5];
    qtd_QGLWidget_resizeGL_int_int_dispatch = (qtd_QGLWidget_resizeGL_int_int_dispatch_t) virts[6];
    qtd_QGLWidget_resizeOverlayGL_int_int_dispatch = (qtd_QGLWidget_resizeOverlayGL_int_int_dispatch_t) virts[7];
    qtd_QGLWidget_updateGL_dispatch = (qtd_QGLWidget_updateGL_dispatch_t) virts[8];
    qtd_QGLWidget_updateOverlayGL_dispatch = (qtd_QGLWidget_updateOverlayGL_dispatch_t) virts[9];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
bool  QGLWidget_QtDShell::__public_autoBufferSwap() const
{
    return QGLWidget::autoBufferSwap();
}

void QGLWidget_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QGLWidget_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QGLWidget_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QGLWidget_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QGLWidget_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QGLWidget_QtDShell::__public_setAutoBufferSwap(bool  on0)
{
    QGLWidget::setAutoBufferSwap((bool )on0);
}

void QGLWidget_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QGLWidget_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

// Write virtual function overries used to decide on static/virtual calls
void QGLWidget_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QGLWidget_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QGLWidget_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QGLWidget_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QGLWidget_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QGLWidget_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QGLWidget_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QGLWidget_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QGLWidget_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QGLWidget_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QGLWidget_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QGLWidget_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QGLWidget_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QGLWidget::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QGLWidget_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QGLWidget_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QGLWidget_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QGLWidget_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

void QGLWidget_QtDShell::__override_glDraw(bool static_call)
{
    if (static_call) {
        QGLWidget::glDraw();
    } else {
        glDraw();
    }
}

void QGLWidget_QtDShell::__override_glInit(bool static_call)
{
    if (static_call) {
        QGLWidget::glInit();
    } else {
        glInit();
    }
}

int  QGLWidget_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QGLWidget_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QGLWidget_QtDShell::__override_initializeGL(bool static_call)
{
    if (static_call) {
        QGLWidget::initializeGL();
    } else {
        initializeGL();
    }
}

void QGLWidget_QtDShell::__override_initializeOverlayGL(bool static_call)
{
    if (static_call) {
        QGLWidget::initializeOverlayGL();
    } else {
        initializeOverlayGL();
    }
}

void QGLWidget_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QGLWidget_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QGLWidget_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QGLWidget_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QGLWidget_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QGLWidget_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QGLWidget_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QGLWidget_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QGLWidget_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QGLWidget_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QGLWidget_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QGLWidget_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QGLWidget_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QGLWidget_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QGLWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QGLWidget_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QGLWidget::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QGLWidget_QtDShell::__override_paintGL(bool static_call)
{
    if (static_call) {
        QGLWidget::paintGL();
    } else {
        paintGL();
    }
}

void QGLWidget_QtDShell::__override_paintOverlayGL(bool static_call)
{
    if (static_call) {
        QGLWidget::paintOverlayGL();
    } else {
        paintOverlayGL();
    }
}

void QGLWidget_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QGLWidget::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QGLWidget_QtDShell::__override_resizeGL(int  w0, int  h1, bool static_call)
{
    if (static_call) {
        QGLWidget::resizeGL((int )w0, (int )h1);
    } else {
        resizeGL((int )w0, (int )h1);
    }
}

void QGLWidget_QtDShell::__override_resizeOverlayGL(int  w0, int  h1, bool static_call)
{
    if (static_call) {
        QGLWidget::resizeOverlayGL((int )w0, (int )h1);
    } else {
        resizeOverlayGL((int )w0, (int )h1);
    }
}

void QGLWidget_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QGLWidget_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QGLWidget_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::sizeHint();
    } else {
        return sizeHint();
    }
}

void QGLWidget_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QGLWidget_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QGLWidget_QtDShell::__override_updateGL(bool static_call)
{
    if (static_call) {
        QGLWidget::updateGL();
    } else {
        updateGL();
    }
}

void QGLWidget_QtDShell::__override_updateOverlayGL(bool static_call)
{
    if (static_call) {
        QGLWidget::updateOverlayGL();
    } else {
        updateOverlayGL();
    }
}

void QGLWidget_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// ---externC---
// QGLWidget::QGLWidget(QGLContext * context, QWidget * parent_, const QGLWidget * shareWidget, QFlags<Qt::WindowType> f)
QTD_EXTERN QTD_EXPORT void* qtd_QGLWidget_QGLWidget_QGLContext_QWidget_QGLWidget_WindowFlags
(void *d_ptr,
 void* context0,
 void* parent1,
 void* shareWidget2,
 int f3)
{
    QGLContext*  __qt_context0 = (QGLContext* ) context0;
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    const QGLWidget*  __qt_shareWidget2 = (const QGLWidget* ) shareWidget2;
    QFlags<Qt::WindowType> __qt_f3 = (QFlags<Qt::WindowType>) f3;
    QGLWidget_QtDShell *__qt_this = new QGLWidget_QtDShell(d_ptr, (QGLContext* )__qt_context0, (QWidget* )__qt_parent1, (const QGLWidget* )__qt_shareWidget2, (Qt::WindowFlags )__qt_f3);
    return (void *) __qt_this;

}

// QGLWidget::QGLWidget(QWidget * parent_, const QGLWidget * shareWidget, QFlags<Qt::WindowType> f)
QTD_EXTERN QTD_EXPORT void* qtd_QGLWidget_QGLWidget_QWidget_QGLWidget_WindowFlags
(void *d_ptr,
 void* parent0,
 void* shareWidget1,
 int f2)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    const QGLWidget*  __qt_shareWidget1 = (const QGLWidget* ) shareWidget1;
    QFlags<Qt::WindowType> __qt_f2 = (QFlags<Qt::WindowType>) f2;
    QGLWidget_QtDShell *__qt_this = new QGLWidget_QtDShell(d_ptr, (QWidget* )__qt_parent0, (const QGLWidget* )__qt_shareWidget1, (Qt::WindowFlags )__qt_f2);
    return (void *) __qt_this;

}

// QGLWidget::QGLWidget(const QGLFormat & format, QWidget * parent_, const QGLWidget * shareWidget, QFlags<Qt::WindowType> f)
QTD_EXTERN QTD_EXPORT void* qtd_QGLWidget_QGLWidget_QGLFormat_QWidget_QGLWidget_WindowFlags
(void *d_ptr,
 void* format0,
 void* parent1,
 void* shareWidget2,
 int f3)
{
    const QGLFormat&  __qt_format0 = (const QGLFormat& ) *(QGLFormat *)format0;
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    const QGLWidget*  __qt_shareWidget2 = (const QGLWidget* ) shareWidget2;
    QFlags<Qt::WindowType> __qt_f3 = (QFlags<Qt::WindowType>) f3;
    QGLWidget_QtDShell *__qt_this = new QGLWidget_QtDShell(d_ptr, (const QGLFormat& )__qt_format0, (QWidget* )__qt_parent1, (const QGLWidget* )__qt_shareWidget2, (Qt::WindowFlags )__qt_f3);
    return (void *) __qt_this;

}

// QGLWidget::autoBufferSwap() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLWidget_autoBufferSwap_const
(void* __this_nativeId)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->__public_autoBufferSwap();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLWidget::bindTexture(const QImage & image, GLenum target, GLint format)
QTD_EXTERN QTD_EXPORT GLuint qtd_QGLWidget_bindTexture_QImage_int_int
(void* __this_nativeId,
 void* image0,
 GLenum target1,
 GLint format2)
{
    const QImage&  __qt_image0 = (const QImage& ) *(QImage *)image0;
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    GLuint  __qt_return_value = __qt_this->bindTexture((const QImage& )__qt_image0, (GLenum )target1, (GLint )format2);

    GLuint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLWidget::bindTexture(const QPixmap & pixmap, GLenum target, GLint format)
QTD_EXTERN QTD_EXPORT GLuint qtd_QGLWidget_bindTexture_QPixmap_int_int
(void* __this_nativeId,
 void* pixmap0,
 GLenum target1,
 GLint format2)
{
    const QPixmap&  __qt_pixmap0 = (const QPixmap& ) *(QPixmap *)pixmap0;
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    GLuint  __qt_return_value = __qt_this->bindTexture((const QPixmap& )__qt_pixmap0, (GLenum )target1, (GLint )format2);

    GLuint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLWidget::bindTexture(const QString & fileName)
QTD_EXTERN QTD_EXPORT GLuint qtd_QGLWidget_bindTexture_string
(void* __this_nativeId,
 DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    GLuint  __qt_return_value = __qt_this->bindTexture((const QString& )__qt_fileName0);

    GLuint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLWidget::colormap() const
QTD_EXTERN QTD_EXPORT void* qtd_QGLWidget_colormap_const
(void* __this_nativeId)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    const QGLColormap&  __qt_return_value = __qt_this->colormap();

    void* __d_return_value = (void*) new QGLColormap(__qt_return_value);

    return __d_return_value;
}

// QGLWidget::context() const
QTD_EXTERN QTD_EXPORT void* qtd_QGLWidget_context_const
(void* __this_nativeId)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    const QGLContext*  __qt_return_value = __qt_this->context();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGLWidget::deleteTexture(GLuint tx_id)
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_deleteTexture_int
(void* __this_nativeId,
 GLuint tx_id0)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    __qt_this->deleteTexture((GLuint )tx_id0);

}

// QGLWidget::doneCurrent()
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_doneCurrent
(void* __this_nativeId)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    __qt_this->doneCurrent();

}

// QGLWidget::doubleBuffer() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLWidget_doubleBuffer_const
(void* __this_nativeId)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->doubleBuffer();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLWidget::drawTexture(const QPointF & point, GLuint textureId, GLenum textureTarget)
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_drawTexture_QPointF_int_int
(void* __this_nativeId,
 QPointF point0,
 GLuint textureId1,
 GLenum textureTarget2)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    __qt_this->drawTexture((const QPointF& )point0, (GLuint )textureId1, (GLenum )textureTarget2);

}

// QGLWidget::drawTexture(const QRectF & target, GLuint textureId, GLenum textureTarget)
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_drawTexture_QRectF_int_int
(void* __this_nativeId,
 QRectF target0,
 GLuint textureId1,
 GLenum textureTarget2)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    __qt_this->drawTexture((const QRectF& )target0, (GLuint )textureId1, (GLenum )textureTarget2);

}

// QGLWidget::format() const
QTD_EXTERN QTD_EXPORT void* qtd_QGLWidget_format_const
(void* __this_nativeId)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    QGLFormat  __qt_return_value = __qt_this->format();

    void* __d_return_value = (void*) new QGLFormat(__qt_return_value);

    return __d_return_value;
}

// QGLWidget::grabFrameBuffer(bool withAlpha)
QTD_EXTERN QTD_EXPORT void* qtd_QGLWidget_grabFrameBuffer_bool
(void* __this_nativeId,
 bool withAlpha0)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->grabFrameBuffer((bool )withAlpha0);

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QGLWidget::isSharing() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLWidget_isSharing_const
(void* __this_nativeId)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSharing();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLWidget::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLWidget_isValid_const
(void* __this_nativeId)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLWidget::makeCurrent()
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_makeCurrent
(void* __this_nativeId)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    __qt_this->makeCurrent();

}

// QGLWidget::makeOverlayCurrent()
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_makeOverlayCurrent
(void* __this_nativeId)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    __qt_this->makeOverlayCurrent();

}

// QGLWidget::overlayContext() const
QTD_EXTERN QTD_EXPORT void* qtd_QGLWidget_overlayContext_const
(void* __this_nativeId)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    const QGLContext*  __qt_return_value = __qt_this->overlayContext();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGLWidget::qglClearColor(const QColor & c) const
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_qglClearColor_QColor_const
(void* __this_nativeId,
 void* c0)
{
    const QColor&  __qt_c0 = (const QColor& ) *(QColor *)c0;
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    __qt_this->qglClearColor((const QColor& )__qt_c0);

}

// QGLWidget::qglColor(const QColor & c) const
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_qglColor_QColor_const
(void* __this_nativeId,
 void* c0)
{
    const QColor&  __qt_c0 = (const QColor& ) *(QColor *)c0;
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    __qt_this->qglColor((const QColor& )__qt_c0);

}

// QGLWidget::renderPixmap(int w, int h, bool useContext)
QTD_EXTERN QTD_EXPORT void* qtd_QGLWidget_renderPixmap_int_int_bool
(void* __this_nativeId,
 int w0,
 int h1,
 bool useContext2)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->renderPixmap((int )w0, (int )h1, (bool )useContext2);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QGLWidget::renderText(double x, double y, double z, const QString & str, const QFont & fnt, int listBase)
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_renderText_double_double_double_string_QFont_int
(void* __this_nativeId,
 double x0,
 double y1,
 double z2,
 DArray str3,
 void* fnt4,
 int listBase5)
{
    QString __qt_str3 = QString::fromUtf8((const char *)str3.ptr, str3.length);
    const QFont&  __qt_fnt4 = (const QFont& ) *(QFont *)fnt4;
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    __qt_this->renderText((double )x0, (double )y1, (double )z2, (const QString& )__qt_str3, (const QFont& )__qt_fnt4, (int )listBase5);

}

// QGLWidget::renderText(int x, int y, const QString & str, const QFont & fnt, int listBase)
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_renderText_int_int_string_QFont_int
(void* __this_nativeId,
 int x0,
 int y1,
 DArray str2,
 void* fnt3,
 int listBase4)
{
    QString __qt_str2 = QString::fromUtf8((const char *)str2.ptr, str2.length);
    const QFont&  __qt_fnt3 = (const QFont& ) *(QFont *)fnt3;
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    __qt_this->renderText((int )x0, (int )y1, (const QString& )__qt_str2, (const QFont& )__qt_fnt3, (int )listBase4);

}

// QGLWidget::setAutoBufferSwap(bool on)
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_setAutoBufferSwap_bool
(void* __this_nativeId,
 bool on0)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_setAutoBufferSwap((bool )on0);

}

// QGLWidget::setColormap(const QGLColormap & map)
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_setColormap_QGLColormap
(void* __this_nativeId,
 void* map0)
{
    const QGLColormap&  __qt_map0 = (const QGLColormap& ) *(QGLColormap *)map0;
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    __qt_this->setColormap((const QGLColormap& )__qt_map0);

}

// QGLWidget::swapBuffers()
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_swapBuffers
(void* __this_nativeId)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    __qt_this->swapBuffers();

}

// QGLWidget::event(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QGLWidget_event_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLWidget::glDraw()
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_glDraw
(void* __this_nativeId)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_glDraw(__do_static_call);

}

// QGLWidget::glInit()
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_glInit
(void* __this_nativeId)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_glInit(__do_static_call);

}

// QGLWidget::initializeGL()
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_initializeGL
(void* __this_nativeId)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_initializeGL(__do_static_call);

}

// QGLWidget::initializeOverlayGL()
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_initializeOverlayGL
(void* __this_nativeId)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_initializeOverlayGL(__do_static_call);

}

// QGLWidget::paintEngine() const
QTD_EXTERN QTD_EXPORT void* qtd_QGLWidget_paintEngine_const
(void* __this_nativeId)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QPaintEngine*  __qt_return_value = __qt_this->__override_paintEngine(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGLWidget::paintEvent(QPaintEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* arg__1)
{
    QPaintEvent*  __qt_arg__1 = (QPaintEvent* ) arg__1;
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_arg__1, __do_static_call);

}

// QGLWidget::paintGL()
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_paintGL
(void* __this_nativeId)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintGL(__do_static_call);

}

// QGLWidget::paintOverlayGL()
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_paintOverlayGL
(void* __this_nativeId)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintOverlayGL(__do_static_call);

}

// QGLWidget::resizeEvent(QResizeEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* arg__1)
{
    QResizeEvent*  __qt_arg__1 = (QResizeEvent* ) arg__1;
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_arg__1, __do_static_call);

}

// QGLWidget::resizeGL(int w, int h)
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_resizeGL_int_int
(void* __this_nativeId,
 int w0,
 int h1)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeGL((int )w0, (int )h1, __do_static_call);

}

// QGLWidget::resizeOverlayGL(int w, int h)
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_resizeOverlayGL_int_int
(void* __this_nativeId,
 int w0,
 int h1)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeOverlayGL((int )w0, (int )h1, __do_static_call);

}

// QGLWidget::updateGL()
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_updateGL
(void* __this_nativeId)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_updateGL(__do_static_call);

}

// QGLWidget::updateOverlayGL()
QTD_EXTERN QTD_EXPORT void qtd_QGLWidget_updateOverlayGL
(void* __this_nativeId)
{
    QGLWidget_QtDShell *__qt_this = (QGLWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_updateOverlayGL(__do_static_call);

}

// QGLWidget::convertToGLFormat(const QImage & img)
QTD_EXTERN QTD_EXPORT void* qtd_QGLWidget_convertToGLFormat_QImage
(void* img0)
{
    const QImage&  __qt_img0 = (const QImage& ) *(QImage *)img0;
    QImage  __qt_return_value = QGLWidget_QtDShell::convertToGLFormat((const QImage& )__qt_img0);

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QGLWidget_staticMetaObject() {
    return (void*)&QGLWidget::staticMetaObject;
}


