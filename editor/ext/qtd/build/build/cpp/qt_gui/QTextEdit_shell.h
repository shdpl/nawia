#ifndef QTEXTEDIT_SHELL_H
#define QTEXTEDIT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtextedit.h>

#include <QTextCursor>
#include <QTextEdit>
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
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmenu.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qprinter.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextedit.h>
#include <qtextformat.h>
#include <qurl.h>
#include <qvariant.h>
#include <qwidget.h>

class QTextEdit_QtDShell : public QTextEdit, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QTextEdit_QtDShell(void *d_ptr, QWidget*  parent0);
    QTextEdit_QtDShell(void *d_ptr, const QString&  text0, QWidget*  parent1);
    ~QTextEdit_QtDShell();

    void actionEvent(QActionEvent*  arg__1);
    bool  canInsertFromMimeData(const QMimeData*  source0) const;
    void changeEvent(QEvent*  e0);
    void childEvent(QChildEvent*  arg__1);
    void closeEvent(QCloseEvent*  arg__1);
    void contextMenuEvent(QContextMenuEvent*  e0);
    QMimeData*  createMimeDataFromSelection() const;
    void customEvent(QEvent*  arg__1);
    int  devType() const;
    void dragEnterEvent(QDragEnterEvent*  e0);
    void dragLeaveEvent(QDragLeaveEvent*  e0);
    void dragMoveEvent(QDragMoveEvent*  e0);
    void dropEvent(QDropEvent*  e0);
    void enterEvent(QEvent*  arg__1);
    bool  event(QEvent*  e0);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void focusInEvent(QFocusEvent*  e0);
    bool  focusNextPrevChild(bool  next0);
    void focusOutEvent(QFocusEvent*  e0);
    int  heightForWidth(int  arg__1) const;
    void hideEvent(QHideEvent*  arg__1);
    void inputMethodEvent(QInputMethodEvent*  arg__1);
    QVariant  inputMethodQuery(Qt::InputMethodQuery  property0) const;
    void insertFromMimeData(const QMimeData*  source0);
    void keyPressEvent(QKeyEvent*  e0);
    void keyReleaseEvent(QKeyEvent*  e0);
    void languageChange();
    void leaveEvent(QEvent*  arg__1);
    QVariant  loadResource(int  type0, const QUrl&  name1);
    int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
    QSize  minimumSizeHint() const;
    void mouseDoubleClickEvent(QMouseEvent*  e0);
    void mouseMoveEvent(QMouseEvent*  e0);
    void mousePressEvent(QMouseEvent*  e0);
    void mouseReleaseEvent(QMouseEvent*  e0);
    void moveEvent(QMoveEvent*  arg__1);
    QPaintEngine*  paintEngine() const;
    void paintEvent(QPaintEvent*  e0);
    void resizeEvent(QResizeEvent*  e0);
    void scrollContentsBy(int  dx0, int  dy1);
    void setVisible(bool  visible0);
    void showEvent(QShowEvent*  arg__1);
    QSize  sizeHint() const;
    void tabletEvent(QTabletEvent*  arg__1);
    void timerEvent(QTimerEvent*  e0);
    bool  viewportEvent(QEvent*  arg__1);
    void wheelEvent(QWheelEvent*  e0);
    void __public_destroy(bool  destroyWindow0, bool  destroySubWindows1);
    void __public_drawFrame(QPainter*  arg__1);
    bool  __public_focusNextChild();
    bool  __public_focusPreviousChild();
    void __public_resetInputContext();
    QObject*  __public_sender() const;
    void __public_setViewportMargins(int  left0, int  top1, int  right2, int  bottom3);
    void __public_setupViewport(QWidget*  viewport0);
    void __public_updateMicroFocus();
    void __public_copyAvailable(bool  b0);
    void __public_currentCharFormatChanged(const QTextCharFormat&  format0);
    void __public_cursorPositionChanged();
    void __public_customContextMenuRequested(const QPoint&  pos0);
    void __public_redoAvailable(bool  b0);
    void __public_selectionChanged();
    void __public_textChanged();
    void __public_undoAvailable(bool  b0);
    void __override_actionEvent(QActionEvent*  arg__1, bool static_call);
    bool  __override_canInsertFromMimeData(const QMimeData*  source0, bool static_call) const;
    void __override_changeEvent(QEvent*  e0, bool static_call);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_closeEvent(QCloseEvent*  arg__1, bool static_call);
    void __override_contextMenuEvent(QContextMenuEvent*  e0, bool static_call);
    QMimeData*  __override_createMimeDataFromSelection(bool static_call) const;
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    int  __override_devType(bool static_call) const;
    void __override_dragEnterEvent(QDragEnterEvent*  e0, bool static_call);
    void __override_dragLeaveEvent(QDragLeaveEvent*  e0, bool static_call);
    void __override_dragMoveEvent(QDragMoveEvent*  e0, bool static_call);
    void __override_dropEvent(QDropEvent*  e0, bool static_call);
    void __override_enterEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  e0, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_focusInEvent(QFocusEvent*  e0, bool static_call);
    bool  __override_focusNextPrevChild(bool  next0, bool static_call);
    void __override_focusOutEvent(QFocusEvent*  e0, bool static_call);
    int  __override_heightForWidth(int  arg__1, bool static_call) const;
    void __override_hideEvent(QHideEvent*  arg__1, bool static_call);
    void __override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call);
    QVariant  __override_inputMethodQuery(int  property0, bool static_call) const;
    void __override_insertFromMimeData(const QMimeData*  source0, bool static_call);
    void __override_keyPressEvent(QKeyEvent*  e0, bool static_call);
    void __override_keyReleaseEvent(QKeyEvent*  e0, bool static_call);
    void __override_languageChange(bool static_call);
    void __override_leaveEvent(QEvent*  arg__1, bool static_call);
    QVariant  __override_loadResource(int  type0, const QUrl&  name1, bool static_call);
    int  __override_metric(int  arg__1, bool static_call) const;
    QSize  __override_minimumSizeHint(bool static_call) const;
    void __override_mouseDoubleClickEvent(QMouseEvent*  e0, bool static_call);
    void __override_mouseMoveEvent(QMouseEvent*  e0, bool static_call);
    void __override_mousePressEvent(QMouseEvent*  e0, bool static_call);
    void __override_mouseReleaseEvent(QMouseEvent*  e0, bool static_call);
    void __override_moveEvent(QMoveEvent*  arg__1, bool static_call);
    QPaintEngine*  __override_paintEngine(bool static_call) const;
    void __override_paintEvent(QPaintEvent*  e0, bool static_call);
    void __override_resizeEvent(QResizeEvent*  e0, bool static_call);
    void __override_scrollContentsBy(int  dx0, int  dy1, bool static_call);
    void __override_setVisible(bool  visible0, bool static_call);
    void __override_showEvent(QShowEvent*  arg__1, bool static_call);
    QSize  __override_sizeHint(bool static_call) const;
    void __override_tabletEvent(QTabletEvent*  arg__1, bool static_call);
    void __override_timerEvent(QTimerEvent*  e0, bool static_call);
    bool  __override_viewportEvent(QEvent*  arg__1, bool static_call);
    void __override_wheelEvent(QWheelEvent*  e0, bool static_call);
};

#endif // QTEXTEDIT_SHELL_H
