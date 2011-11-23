module qt.gui.QWidget;

public import qt.gui.QWidget_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
public import qtd.MOC : Q_OBJECT;
import qtd.Signal;
import qt.core.QMetaObject;
import qtd.meta.Runtime;
import qt.core.QObject;
private import qt.gui.ArrayOps2;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QPalette;
public import qt.gui.QSizePolicy;
public import qt.gui.QPaintDevice;
public import qt.gui.QDropEvent;
public import qt.gui.QHideEvent;
public import qt.core.QPoint;
public import qt.core.QTimerEvent;
public import qt.gui.QStyle;
public import qt.core.QChildEvent;
public import qt.gui.QIcon;
public import qt.gui.QFontInfo;
public import qt.gui.QKeyEvent;
public import qt.gui.QLayout;
public import qt.core.QObject;
public import qt.gui.QPainter;
public import qt.core.QByteArray;
public import qt.gui.QResizeEvent;
public import qt.core.QList;
public import qt.core.QEvent;
public import qt.gui.QCursor;
public import qt.gui.QPaintEngine;
public import qt.gui.QActionEvent;
public import qt.gui.QPalette;
public import qt.gui.QInputContext;
public import qt.gui.QShowEvent;
public import qt.gui.QWheelEvent;
public import qt.gui.QPaintDevice;
public import qt.gui.QAction;
public import qt.gui.QCloseEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QTabletEvent;
public import qt.core.QRect;
public import qt.gui.QFont;
public import qt.core.QSize;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QGraphicsProxyWidget;
public import qt.gui.QBitmap;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QKeySequence;
public import qt.core.QVariant;
public import qt.gui.QMoveEvent;
public import qt.gui.QPaintEvent;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QSizePolicy;
public import qt.gui.QFontMetrics;
public import qt.gui.QRegion;
public import qt.core.QLocale;
public import qt.gui.QDragLeaveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QWidget : QObject, IQPaintDevice
{
    public enum RenderFlag {
        DrawWindowBackground = 1,
        DrawChildren = 2,
        IgnoreMask = 4
    }

    alias RenderFlag.DrawWindowBackground DrawWindowBackground;
    alias RenderFlag.DrawChildren DrawChildren;
    alias RenderFlag.IgnoreMask IgnoreMask;


    package Object[] __rcActions;

    private static const string[] __signalSignatures = [
            "customContextMenuRequested(QPoint)"    ];

    int signalSignature(int signalId, ref stringz signature) {
        signalId = super.signalSignature(signalId, signature);
        if (signature)
            return signalId;
        if (signalId < __signalSignatures.length)
            signature = __signalSignatures[signalId].ptr;
        else
            signalId -= __signalSignatures.length;
        return signalId;
    }

    protected final void customContextMenuRequested(const(QPoint) pos) {
        qtd_QWidget_customContextMenuRequested_QPoint(qtdNativeId, pos);
    }
// Functions

    public this(QWidget parent_ = null, int f = 0) {
        void* ret = qtd_QWidget_QWidget_QWidget_WindowFlags(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId, f);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool acceptDrops() const {
        return qtd_QWidget_acceptDrops_const(qtdNativeId);
    }

    public final string accessibleDescription() const {
        string res;
        qtd_QWidget_accessibleDescription_const(qtdNativeId, &res);
        return res;
    }

    public final string accessibleName() const {
        string res;
        qtd_QWidget_accessibleName_const(qtdNativeId, &res);
        return res;
    }

    public final QList!(QAction) actions() const {
        auto res = QList!(QAction).opCall();
        qtd_QWidget_actions_const(qtdNativeId, &res);
        return res;
    }

    public final void activateWindow() {
        qtd_QWidget_activateWindow(qtdNativeId);
    }

    public final void addAction(QAction action) {
        if (action !is null) {
            __rcActions ~= cast(Object) action;
        }
        qtd_QWidget_addAction_QAction(qtdNativeId, action is null ? null : action.qtdNativeId);
    }

    public final void addActions(QList!(QAction) actions) {
        if (actions.length != 0) {
            __rcActions ~= actions.toArray();
        }
        qtd_QWidget_addActions_QList(qtdNativeId, &actions);
    }

    public final void adjustSize() {
        qtd_QWidget_adjustSize(qtdNativeId);
    }

    public final bool autoFillBackground() const {
        return qtd_QWidget_autoFillBackground_const(qtdNativeId);
    }

    public final QPalette.ColorRole backgroundRole() const {
        return cast(QPalette.ColorRole) qtd_QWidget_backgroundRole_const(qtdNativeId);
    }

    public final QSize baseSize() const {
        QSize res;
        qtd_QWidget_baseSize_const(qtdNativeId, &res);
        return res;
    }

    public final QWidget childAt(const(QPoint) p) const {
        void *ret = qtd_QWidget_childAt_QPoint_const(qtdNativeId, p);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QWidget childAt(int x, int y) const {
        void *ret = qtd_QWidget_childAt_int_int_const(qtdNativeId, x, y);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QRect childrenRect() const {
        QRect res;
        qtd_QWidget_childrenRect_const(qtdNativeId, &res);
        return res;
    }

    public final QRegion childrenRegion() const {
        void* ret = qtd_QWidget_childrenRegion_const(qtdNativeId);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }

    public final void clearFocus() {
        qtd_QWidget_clearFocus(qtdNativeId);
    }

    public final void clearMask() {
        qtd_QWidget_clearMask(qtdNativeId);
    }

    public final bool close() {
        return qtd_QWidget_close(qtdNativeId);
    }

    public final int colorCount() const {
        return qtd_QWidget_colorCount_const(qtdNativeId);
    }

    public final QRect contentsRect() const {
        QRect res;
        qtd_QWidget_contentsRect_const(qtdNativeId, &res);
        return res;
    }

    public final Qt.ContextMenuPolicy contextMenuPolicy() const {
        return cast(Qt.ContextMenuPolicy) qtd_QWidget_contextMenuPolicy_const(qtdNativeId);
    }

    public final void createWinId() {
        qtd_QWidget_createWinId(qtdNativeId);
    }

    public final QCursor cursor() const {
        void* ret = qtd_QWidget_cursor_const(qtdNativeId);
        QCursor __d_return_value = new QCursor(ret);
        return __d_return_value;
    }

    public final int depth() const {
        return qtd_QWidget_depth_const(qtdNativeId);
    }

    protected final void destroy(bool destroyWindow = true, bool destroySubWindows = true) {
        qtd_QWidget_destroy_bool_bool(qtdNativeId, destroyWindow, destroySubWindows);
    }

    public final long effectiveWinId() const {
        return qtd_QWidget_effectiveWinId_const(qtdNativeId);
    }

    public final void ensurePolished() const {
        qtd_QWidget_ensurePolished_const(qtdNativeId);
    }

    protected final bool focusNextChild() {
        return qtd_QWidget_focusNextChild(qtdNativeId);
    }

    public final Qt.FocusPolicy focusPolicy() const {
        return cast(Qt.FocusPolicy) qtd_QWidget_focusPolicy_const(qtdNativeId);
    }

    protected final bool focusPreviousChild() {
        return qtd_QWidget_focusPreviousChild(qtdNativeId);
    }

    public final QWidget focusProxy() const {
        void *ret = qtd_QWidget_focusProxy_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QWidget focusWidget() const {
        void *ret = qtd_QWidget_focusWidget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final const(QFont) font() const {
        void* ret = qtd_QWidget_font_const(qtdNativeId);
        const(QFont) __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public final QFontInfo fontInfo() const {
        void* ret = qtd_QWidget_fontInfo_const(qtdNativeId);
        QFontInfo __d_return_value = new QFontInfo(ret);
        return __d_return_value;
    }

    public final QFontMetrics fontMetrics() const {
        void* ret = qtd_QWidget_fontMetrics_const(qtdNativeId);
        QFontMetrics __d_return_value = new QFontMetrics(ret);
        return __d_return_value;
    }

    public final QPalette.ColorRole foregroundRole() const {
        return cast(QPalette.ColorRole) qtd_QWidget_foregroundRole_const(qtdNativeId);
    }

    public final QRect frameGeometry() const {
        QRect res;
        qtd_QWidget_frameGeometry_const(qtdNativeId, &res);
        return res;
    }

    public final QSize frameSize() const {
        QSize res;
        qtd_QWidget_frameSize_const(qtdNativeId, &res);
        return res;
    }

    public final const(QRect) geometry() const {
        QRect res;
        qtd_QWidget_geometry_const(qtdNativeId, &res);
        return res;
    }

    private final void getContentsMargins(int* left, int* top, int* right, int* bottom) const {
        qtd_QWidget_getContentsMargins_nativepointerint_nativepointerint_nativepointerint_nativepointerint_const(qtdNativeId, left, top, right, bottom);
    }

    public final void grabKeyboard() {
        qtd_QWidget_grabKeyboard(qtdNativeId);
    }

    public final void grabMouse() {
        qtd_QWidget_grabMouse(qtdNativeId);
    }

    public final void grabMouse(const(QCursor) arg__1) {
        qtd_QWidget_grabMouse_QCursor(qtdNativeId, arg__1 is null ? null : (cast(QCursor)arg__1).qtdNativeId);
    }

    public final int grabShortcut(const(QKeySequence) key, Qt.ShortcutContext context = Qt.ShortcutContext.WindowShortcut) {
        return qtd_QWidget_grabShortcut_QKeySequence_ShortcutContext(qtdNativeId, key is null ? null : (cast(QKeySequence)key).qtdNativeId, context);
    }

    public final QGraphicsProxyWidget graphicsProxyWidget() const {
        void *ret = qtd_QWidget_graphicsProxyWidget_const(qtdNativeId);
        QGraphicsProxyWidget __d_return_value = QGraphicsProxyWidget.__getObject(ret);
        return __d_return_value;
    }

    public final bool hasFocus() const {
        return qtd_QWidget_hasFocus_const(qtdNativeId);
    }

    public final bool hasMouseTracking() const {
        return qtd_QWidget_hasMouseTracking_const(qtdNativeId);
    }

    public final int height() const {
        return qtd_QWidget_height_const(qtdNativeId);
    }

    public final int heightMM() const {
        return qtd_QWidget_heightMM_const(qtdNativeId);
    }

    public final void hide() {
        qtd_QWidget_hide(qtdNativeId);
    }

    public final QInputContext inputContext() {
        void *ret = qtd_QWidget_inputContext(qtdNativeId);
        QInputContext __d_return_value = QInputContext.__getObject(ret);
        return __d_return_value;
    }

    public final void insertAction(QAction before, QAction action) {
        if (action !is null) {
            __rcActions ~= cast(Object) action;
        }
        qtd_QWidget_insertAction_QAction_QAction(qtdNativeId, before is null ? null : before.qtdNativeId, action is null ? null : action.qtdNativeId);
    }

    public final void insertActions(QAction before, QList!(QAction) actions) {
        if (actions.length != 0) {
            __rcActions ~= actions.toArray();
        }
        qtd_QWidget_insertActions_QAction_QList(qtdNativeId, before is null ? null : before.qtdNativeId, &actions);
    }

    public final bool isActiveWindow() const {
        return qtd_QWidget_isActiveWindow_const(qtdNativeId);
    }

    public final bool isAncestorOf(QWidget child) const {
        return qtd_QWidget_isAncestorOf_QWidget_const(qtdNativeId, child is null ? null : (cast(QWidget)child).qtdNativeId);
    }

    public final bool isEnabled() const {
        return qtd_QWidget_isEnabled_const(qtdNativeId);
    }

    public final bool isEnabledTo(QWidget arg__1) const {
        return qtd_QWidget_isEnabledTo_QWidget_const(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final bool isFullScreen() const {
        return qtd_QWidget_isFullScreen_const(qtdNativeId);
    }

    public final bool isHidden() const {
        return qtd_QWidget_isHidden_const(qtdNativeId);
    }

    public final bool isLeftToRight() const {
        return qtd_QWidget_isLeftToRight_const(qtdNativeId);
    }

    public final bool isMaximized() const {
        return qtd_QWidget_isMaximized_const(qtdNativeId);
    }

    public final bool isMinimized() const {
        return qtd_QWidget_isMinimized_const(qtdNativeId);
    }

    public final bool isModal() const {
        return qtd_QWidget_isModal_const(qtdNativeId);
    }

    public final bool isRightToLeft() const {
        return qtd_QWidget_isRightToLeft_const(qtdNativeId);
    }

    public final bool isVisible() const {
        return qtd_QWidget_isVisible_const(qtdNativeId);
    }

    public final bool isVisibleTo(QWidget arg__1) const {
        return qtd_QWidget_isVisibleTo_QWidget_const(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final bool isWindow() const {
        return qtd_QWidget_isWindow_const(qtdNativeId);
    }

    public final bool isWindowModified() const {
        return qtd_QWidget_isWindowModified_const(qtdNativeId);
    }

    public final QLayout layout() const {
        void *ret = qtd_QWidget_layout_const(qtdNativeId);
        QLayout __d_return_value = QLayout.__getObject(ret);
        return __d_return_value;
    }

    public final Qt.LayoutDirection layoutDirection() const {
        return cast(Qt.LayoutDirection) qtd_QWidget_layoutDirection_const(qtdNativeId);
    }

    public final QLocale locale() const {
        void* ret = qtd_QWidget_locale_const(qtdNativeId);
        QLocale __d_return_value = new QLocale(ret);
        return __d_return_value;
    }

    public final int logicalDpiX() const {
        return qtd_QWidget_logicalDpiX_const(qtdNativeId);
    }

    public final int logicalDpiY() const {
        return qtd_QWidget_logicalDpiY_const(qtdNativeId);
    }

    public final void lower() {
        qtd_QWidget_lower(qtdNativeId);
    }

    public final QPoint mapFrom(QWidget arg__1, const(QPoint) arg__2) const {
        QPoint res;
        qtd_QWidget_mapFrom_QWidget_QPoint_const(qtdNativeId, &res, arg__1 is null ? null : arg__1.qtdNativeId, arg__2);
        return res;
    }

    public final QPoint mapFromGlobal(const(QPoint) arg__1) const {
        QPoint res;
        qtd_QWidget_mapFromGlobal_QPoint_const(qtdNativeId, &res, arg__1);
        return res;
    }

    public final QPoint mapFromParent(const(QPoint) arg__1) const {
        QPoint res;
        qtd_QWidget_mapFromParent_QPoint_const(qtdNativeId, &res, arg__1);
        return res;
    }

    public final QPoint mapTo(QWidget arg__1, const(QPoint) arg__2) const {
        QPoint res;
        qtd_QWidget_mapTo_QWidget_QPoint_const(qtdNativeId, &res, arg__1 is null ? null : arg__1.qtdNativeId, arg__2);
        return res;
    }

    public final QPoint mapToGlobal(const(QPoint) arg__1) const {
        QPoint res;
        qtd_QWidget_mapToGlobal_QPoint_const(qtdNativeId, &res, arg__1);
        return res;
    }

    public final QPoint mapToParent(const(QPoint) arg__1) const {
        QPoint res;
        qtd_QWidget_mapToParent_QPoint_const(qtdNativeId, &res, arg__1);
        return res;
    }

    public final QRegion mask() const {
        void* ret = qtd_QWidget_mask_const(qtdNativeId);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }

    public final int maximumHeight() const {
        return qtd_QWidget_maximumHeight_const(qtdNativeId);
    }

    public final QSize maximumSize() const {
        QSize res;
        qtd_QWidget_maximumSize_const(qtdNativeId, &res);
        return res;
    }

    public final int maximumWidth() const {
        return qtd_QWidget_maximumWidth_const(qtdNativeId);
    }

    public final int minimumHeight() const {
        return qtd_QWidget_minimumHeight_const(qtdNativeId);
    }

    public final QSize minimumSize() const {
        QSize res;
        qtd_QWidget_minimumSize_const(qtdNativeId, &res);
        return res;
    }

    public final int minimumWidth() const {
        return qtd_QWidget_minimumWidth_const(qtdNativeId);
    }

    public final void move(const(QPoint) arg__1) {
        qtd_QWidget_move_QPoint(qtdNativeId, arg__1);
    }

    public final void move(int x, int y) {
        qtd_QWidget_move_int_int(qtdNativeId, x, y);
    }

    public final QWidget nativeParentWidget() const {
        void *ret = qtd_QWidget_nativeParentWidget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QWidget nextInFocusChain() const {
        void *ret = qtd_QWidget_nextInFocusChain_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QRect normalGeometry() const {
        QRect res;
        qtd_QWidget_normalGeometry_const(qtdNativeId, &res);
        return res;
    }

    public final int numColors() const {
        return qtd_QWidget_numColors_const(qtdNativeId);
    }

    public final void overrideWindowFlags(int type) {
        qtd_QWidget_overrideWindowFlags_WindowFlags(qtdNativeId, type);
    }

    public final void overrideWindowState(int state) {
        qtd_QWidget_overrideWindowState_WindowStates(qtdNativeId, state);
    }

    public final bool paintingActive() const {
        return qtd_QWidget_paintingActive_const(qtdNativeId);
    }

    public final const(QPalette) palette() const {
        void* ret = qtd_QWidget_palette_const(qtdNativeId);
        const(QPalette) __d_return_value = new QPalette(ret);
        return __d_return_value;
    }

    public final QWidget parentWidget() const {
        void *ret = qtd_QWidget_parentWidget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final int physicalDpiX() const {
        return qtd_QWidget_physicalDpiX_const(qtdNativeId);
    }

    public final int physicalDpiY() const {
        return qtd_QWidget_physicalDpiY_const(qtdNativeId);
    }

    public final QPoint pos() const {
        QPoint res;
        qtd_QWidget_pos_const(qtdNativeId, &res);
        return res;
    }

    public final QWidget previousInFocusChain() const {
        void *ret = qtd_QWidget_previousInFocusChain_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final void raise() {
        qtd_QWidget_raise(qtdNativeId);
    }

    public final QRect rect() const {
        QRect res;
        qtd_QWidget_rect_const(qtdNativeId, &res);
        return res;
    }

    public final void releaseKeyboard() {
        qtd_QWidget_releaseKeyboard(qtdNativeId);
    }

    public final void releaseMouse() {
        qtd_QWidget_releaseMouse(qtdNativeId);
    }

    public final void releaseShortcut(int id) {
        qtd_QWidget_releaseShortcut_int(qtdNativeId, id);
    }

    public final void removeAction(QAction action) {
        if (action !is null) {
            remove(__rcActions, cast(Object) action);
        }
        qtd_QWidget_removeAction_QAction(qtdNativeId, action is null ? null : action.qtdNativeId);
    }

    public final void render(IQPaintDevice target, const(QPoint) targetOffset = QPoint(), const(QRegion) sourceRegion = new QRegion(), int renderFlags = 0) {
        qtd_QWidget_render_QPaintDevice_QPoint_QRegion_RenderFlags(qtdNativeId, target is null ? null : target.__ptr_IQPaintDevice, targetOffset, sourceRegion is null ? null : (cast(QRegion)sourceRegion).qtdNativeId, renderFlags);
    }

    public final void render(QPainter painter, const(QPoint) targetOffset = QPoint(), const(QRegion) sourceRegion = new QRegion(), int renderFlags = 0) {
        qtd_QWidget_render_QPainter_QPoint_QRegion_RenderFlags(qtdNativeId, painter is null ? null : painter.qtdNativeId, targetOffset, sourceRegion is null ? null : (cast(QRegion)sourceRegion).qtdNativeId, renderFlags);
    }

    public final void repaint() {
        qtd_QWidget_repaint(qtdNativeId);
    }

    public final void repaint(const(QRect) arg__1) {
        qtd_QWidget_repaint_QRect(qtdNativeId, arg__1);
    }

    public final void repaint(const(QRegion) arg__1) {
        qtd_QWidget_repaint_QRegion(qtdNativeId, arg__1 is null ? null : (cast(QRegion)arg__1).qtdNativeId);
    }

    public final void repaint(int x, int y, int w, int h) {
        qtd_QWidget_repaint_int_int_int_int(qtdNativeId, x, y, w, h);
    }

    protected final void resetInputContext() {
        qtd_QWidget_resetInputContext(qtdNativeId);
    }

    public final void resize(const(QSize) arg__1) {
        qtd_QWidget_resize_QSize(qtdNativeId, arg__1);
    }

    public final void resize(int w, int h) {
        qtd_QWidget_resize_int_int(qtdNativeId, w, h);
    }

    public final bool restoreGeometry(const(QByteArray) geometry) {
        return qtd_QWidget_restoreGeometry_QByteArray(qtdNativeId, geometry is null ? null : (cast(QByteArray)geometry).qtdNativeId);
    }

    public final QByteArray saveGeometry() const {
        void* ret = qtd_QWidget_saveGeometry_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final void scroll(int dx, int dy) {
        qtd_QWidget_scroll_int_int(qtdNativeId, dx, dy);
    }

    public final void scroll(int dx, int dy, const(QRect) arg__3) {
        qtd_QWidget_scroll_int_int_QRect(qtdNativeId, dx, dy, arg__3);
    }

    public final void setAcceptDrops(bool on) {
        qtd_QWidget_setAcceptDrops_bool(qtdNativeId, on);
    }

    public final void setAccessibleDescription(string description) {
        qtd_QWidget_setAccessibleDescription_string(qtdNativeId, description);
    }

    public final void setAccessibleName(string name) {
        qtd_QWidget_setAccessibleName_string(qtdNativeId, name);
    }

    public final void setAttribute(Qt.WidgetAttribute arg__1, bool on = true) {
        qtd_QWidget_setAttribute_WidgetAttribute_bool(qtdNativeId, arg__1, on);
    }

    public final void setAutoFillBackground(bool enabled) {
        qtd_QWidget_setAutoFillBackground_bool(qtdNativeId, enabled);
    }

    public final void setBackgroundRole(QPalette.ColorRole arg__1) {
        qtd_QWidget_setBackgroundRole_ColorRole(qtdNativeId, arg__1);
    }

    public final void setBaseSize(const(QSize) arg__1) {
        qtd_QWidget_setBaseSize_QSize(qtdNativeId, arg__1);
    }

    public final void setBaseSize(int basew, int baseh) {
        qtd_QWidget_setBaseSize_int_int(qtdNativeId, basew, baseh);
    }

    public final void setContentsMargins(int left, int top, int right, int bottom) {
        qtd_QWidget_setContentsMargins_int_int_int_int(qtdNativeId, left, top, right, bottom);
    }

    public final void setContextMenuPolicy(Qt.ContextMenuPolicy policy) {
        qtd_QWidget_setContextMenuPolicy_ContextMenuPolicy(qtdNativeId, policy);
    }

    public final void setCursor(const(QCursor) arg__1) {
        qtd_QWidget_setCursor_QCursor(qtdNativeId, arg__1 is null ? null : (cast(QCursor)arg__1).qtdNativeId);
    }

    public final void setDisabled(bool arg__1) {
        qtd_QWidget_setDisabled_bool(qtdNativeId, arg__1);
    }

    public final void setEnabled(bool arg__1) {
        qtd_QWidget_setEnabled_bool(qtdNativeId, arg__1);
    }

    public final void setFixedHeight(int h) {
        qtd_QWidget_setFixedHeight_int(qtdNativeId, h);
    }

    public final void setFixedSize(const(QSize) arg__1) {
        qtd_QWidget_setFixedSize_QSize(qtdNativeId, arg__1);
    }

    public final void setFixedSize(int w, int h) {
        qtd_QWidget_setFixedSize_int_int(qtdNativeId, w, h);
    }

    public final void setFixedWidth(int w) {
        qtd_QWidget_setFixedWidth_int(qtdNativeId, w);
    }

    public final void setFocus() {
        qtd_QWidget_setFocus(qtdNativeId);
    }

    public final void setFocus(Qt.FocusReason reason) {
        qtd_QWidget_setFocus_FocusReason(qtdNativeId, reason);
    }

    public final void setFocusPolicy(Qt.FocusPolicy policy) {
        qtd_QWidget_setFocusPolicy_FocusPolicy(qtdNativeId, policy);
    }

    public final void setFocusProxy(QWidget arg__1) {
        qtd_QWidget_setFocusProxy_QWidget(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void setFont(const(QFont) arg__1) {
        qtd_QWidget_setFont_QFont(qtdNativeId, arg__1 is null ? null : (cast(QFont)arg__1).qtdNativeId);
    }

    public final void setForegroundRole(QPalette.ColorRole arg__1) {
        qtd_QWidget_setForegroundRole_ColorRole(qtdNativeId, arg__1);
    }

    public final void setGeometry(const(QRect) arg__1) {
        qtd_QWidget_setGeometry_QRect(qtdNativeId, arg__1);
    }

    public final void setGeometry(int x, int y, int w, int h) {
        qtd_QWidget_setGeometry_int_int_int_int(qtdNativeId, x, y, w, h);
    }

    public final void setHidden(bool hidden) {
        qtd_QWidget_setHidden_bool(qtdNativeId, hidden);
    }

    public final void setInputContext(QInputContext arg__1) {
        if (arg__1 !is null) {
            arg__1.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QWidget_setInputContext_QInputContext(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void setLayout(QLayout arg__1) {
        qtd_QWidget_setLayout_QLayout(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void setLayoutDirection(Qt.LayoutDirection direction) {
        qtd_QWidget_setLayoutDirection_LayoutDirection(qtdNativeId, direction);
    }

    public final void setLocale(const(QLocale) locale) {
        qtd_QWidget_setLocale_QLocale(qtdNativeId, locale is null ? null : (cast(QLocale)locale).qtdNativeId);
    }

    public final void setMask(const(QBitmap) arg__1) {
        qtd_QWidget_setMask_QBitmap(qtdNativeId, arg__1 is null ? null : (cast(QBitmap)arg__1).qtdNativeId);
    }

    public final void setMask(const(QRegion) arg__1) {
        qtd_QWidget_setMask_QRegion(qtdNativeId, arg__1 is null ? null : (cast(QRegion)arg__1).qtdNativeId);
    }

    public final void setMaximumHeight(int maxh) {
        qtd_QWidget_setMaximumHeight_int(qtdNativeId, maxh);
    }

    public final void setMaximumSize(const(QSize) arg__1) {
        qtd_QWidget_setMaximumSize_QSize(qtdNativeId, arg__1);
    }

    public final void setMaximumSize(int maxw, int maxh) {
        qtd_QWidget_setMaximumSize_int_int(qtdNativeId, maxw, maxh);
    }

    public final void setMaximumWidth(int maxw) {
        qtd_QWidget_setMaximumWidth_int(qtdNativeId, maxw);
    }

    public final void setMinimumHeight(int minh) {
        qtd_QWidget_setMinimumHeight_int(qtdNativeId, minh);
    }

    public final void setMinimumSize(const(QSize) arg__1) {
        qtd_QWidget_setMinimumSize_QSize(qtdNativeId, arg__1);
    }

    public final void setMinimumSize(int minw, int minh) {
        qtd_QWidget_setMinimumSize_int_int(qtdNativeId, minw, minh);
    }

    public final void setMinimumWidth(int minw) {
        qtd_QWidget_setMinimumWidth_int(qtdNativeId, minw);
    }

    public final void setMouseTracking(bool enable) {
        qtd_QWidget_setMouseTracking_bool(qtdNativeId, enable);
    }

    public final void setPalette(const(QPalette) arg__1) {
        qtd_QWidget_setPalette_QPalette(qtdNativeId, arg__1 is null ? null : (cast(QPalette)arg__1).qtdNativeId);
    }

    public final void setParent(QWidget parent_) {
        qtd_QWidget_setParent_QWidget(qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
    }

    public final void setParent(QWidget parent_, int f) {
        qtd_QWidget_setParent_QWidget_WindowFlags(qtdNativeId, parent_ is null ? null : parent_.qtdNativeId, f);
    }

    public final void setShortcutAutoRepeat(int id, bool enable = true) {
        qtd_QWidget_setShortcutAutoRepeat_int_bool(qtdNativeId, id, enable);
    }

    public final void setShortcutEnabled(int id, bool enable = true) {
        qtd_QWidget_setShortcutEnabled_int_bool(qtdNativeId, id, enable);
    }

    public final void setSizeIncrement(const(QSize) arg__1) {
        qtd_QWidget_setSizeIncrement_QSize(qtdNativeId, arg__1);
    }

    public final void setSizeIncrement(int w, int h) {
        qtd_QWidget_setSizeIncrement_int_int(qtdNativeId, w, h);
    }

    public final void setSizePolicy(QSizePolicy arg__1) {
        qtd_QWidget_setSizePolicy_QSizePolicy(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void setSizePolicy(QSizePolicy.Policy horizontal, QSizePolicy.Policy vertical) {
        qtd_QWidget_setSizePolicy_Policy_Policy(qtdNativeId, horizontal, vertical);
    }

    public final void setStatusTip(string arg__1) {
        qtd_QWidget_setStatusTip_string(qtdNativeId, arg__1);
    }

    public final void setStyle(QStyle arg__1) {
        qtd_QWidget_setStyle_QStyle(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void setStyleSheet(string styleSheet) {
        qtd_QWidget_setStyleSheet_string(qtdNativeId, styleSheet);
    }

    public final void setToolTip(string arg__1) {
        qtd_QWidget_setToolTip_string(qtdNativeId, arg__1);
    }

    public final void setUpdatesEnabled(bool enable) {
        qtd_QWidget_setUpdatesEnabled_bool(qtdNativeId, enable);
    }

    public final void setWhatsThis(string arg__1) {
        qtd_QWidget_setWhatsThis_string(qtdNativeId, arg__1);
    }

    public final void setWindowFilePath(string filePath) {
        qtd_QWidget_setWindowFilePath_string(qtdNativeId, filePath);
    }

    public final void setWindowFlags(int type) {
        qtd_QWidget_setWindowFlags_WindowFlags(qtdNativeId, type);
    }

    public final void setWindowIcon(const(QIcon) icon) {
        qtd_QWidget_setWindowIcon_QIcon(qtdNativeId, icon is null ? null : (cast(QIcon)icon).qtdNativeId);
    }

    public final void setWindowIconText(string arg__1) {
        qtd_QWidget_setWindowIconText_string(qtdNativeId, arg__1);
    }

    public final void setWindowModality(Qt.WindowModality windowModality) {
        qtd_QWidget_setWindowModality_WindowModality(qtdNativeId, windowModality);
    }

    public final void setWindowModified(bool arg__1) {
        qtd_QWidget_setWindowModified_bool(qtdNativeId, arg__1);
    }

    public final void setWindowOpacity(double level) {
        qtd_QWidget_setWindowOpacity_double(qtdNativeId, level);
    }

    public final void setWindowRole(string arg__1) {
        qtd_QWidget_setWindowRole_string(qtdNativeId, arg__1);
    }

    public final void setWindowState(int state) {
        qtd_QWidget_setWindowState_WindowStates(qtdNativeId, state);
    }

    public final void setWindowTitle(string arg__1) {
        qtd_QWidget_setWindowTitle_string(qtdNativeId, arg__1);
    }

    public final void show() {
        qtd_QWidget_show(qtdNativeId);
    }

    public final void showFullScreen() {
        qtd_QWidget_showFullScreen(qtdNativeId);
    }

    public final void showMaximized() {
        qtd_QWidget_showMaximized(qtdNativeId);
    }

    public final void showMinimized() {
        qtd_QWidget_showMinimized(qtdNativeId);
    }

    public final void showNormal() {
        qtd_QWidget_showNormal(qtdNativeId);
    }

    public final QSize size() const {
        QSize res;
        qtd_QWidget_size_const(qtdNativeId, &res);
        return res;
    }

    public final QSize sizeIncrement() const {
        QSize res;
        qtd_QWidget_sizeIncrement_const(qtdNativeId, &res);
        return res;
    }

    public final QSizePolicy sizePolicy() const {
        void* ret = qtd_QWidget_sizePolicy_const(qtdNativeId);
        QSizePolicy __d_return_value = new QSizePolicy(ret);
        return __d_return_value;
    }

    public final void stackUnder(QWidget arg__1) {
        qtd_QWidget_stackUnder_QWidget(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final string statusTip() const {
        string res;
        qtd_QWidget_statusTip_const(qtdNativeId, &res);
        return res;
    }

    public final QStyle style() const {
        void *ret = qtd_QWidget_style_const(qtdNativeId);
        QStyle __d_return_value = QStyle.__getObject(ret);
        return __d_return_value;
    }

    public final string styleSheet() const {
        string res;
        qtd_QWidget_styleSheet_const(qtdNativeId, &res);
        return res;
    }

    public final bool testAttribute(Qt.WidgetAttribute arg__1) const {
        return qtd_QWidget_testAttribute_WidgetAttribute_const(qtdNativeId, arg__1);
    }

    public final string toolTip() const {
        string res;
        qtd_QWidget_toolTip_const(qtdNativeId, &res);
        return res;
    }

    public final bool underMouse() const {
        return qtd_QWidget_underMouse_const(qtdNativeId);
    }

    public final void unsetCursor() {
        qtd_QWidget_unsetCursor(qtdNativeId);
    }

    public final void unsetLayoutDirection() {
        qtd_QWidget_unsetLayoutDirection(qtdNativeId);
    }

    public final void unsetLocale() {
        qtd_QWidget_unsetLocale(qtdNativeId);
    }

    public final void update() {
        qtd_QWidget_update(qtdNativeId);
    }

    public final void update(const(QRect) arg__1) {
        qtd_QWidget_update_QRect(qtdNativeId, arg__1);
    }

    public final void update(const(QRegion) arg__1) {
        qtd_QWidget_update_QRegion(qtdNativeId, arg__1 is null ? null : (cast(QRegion)arg__1).qtdNativeId);
    }

    public final void update(int x, int y, int w, int h) {
        qtd_QWidget_update_int_int_int_int(qtdNativeId, x, y, w, h);
    }

    public final void updateGeometry() {
        qtd_QWidget_updateGeometry(qtdNativeId);
    }

    protected final void updateMicroFocus() {
        qtd_QWidget_updateMicroFocus(qtdNativeId);
    }

    public final bool updatesEnabled() const {
        return qtd_QWidget_updatesEnabled_const(qtdNativeId);
    }

    public final QRegion visibleRegion() const {
        void* ret = qtd_QWidget_visibleRegion_const(qtdNativeId);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }

    public final string whatsThis() const {
        string res;
        qtd_QWidget_whatsThis_const(qtdNativeId, &res);
        return res;
    }

    public final int width() const {
        return qtd_QWidget_width_const(qtdNativeId);
    }

    public final int widthMM() const {
        return qtd_QWidget_widthMM_const(qtdNativeId);
    }

    public final long winId() const {
        return qtd_QWidget_winId_const(qtdNativeId);
    }

    public final QWidget window() const {
        void *ret = qtd_QWidget_window_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final string windowFilePath() const {
        string res;
        qtd_QWidget_windowFilePath_const(qtdNativeId, &res);
        return res;
    }

    public final int windowFlags() const {
        return qtd_QWidget_windowFlags_const(qtdNativeId);
    }

    public final QIcon windowIcon() const {
        void* ret = qtd_QWidget_windowIcon_const(qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final string windowIconText() const {
        string res;
        qtd_QWidget_windowIconText_const(qtdNativeId, &res);
        return res;
    }

    public final Qt.WindowModality windowModality() const {
        return cast(Qt.WindowModality) qtd_QWidget_windowModality_const(qtdNativeId);
    }

    public final double windowOpacity() const {
        return qtd_QWidget_windowOpacity_const(qtdNativeId);
    }

    public final string windowRole() const {
        string res;
        qtd_QWidget_windowRole_const(qtdNativeId, &res);
        return res;
    }

    public final int windowState() const {
        return qtd_QWidget_windowState_const(qtdNativeId);
    }

    public final string windowTitle() const {
        string res;
        qtd_QWidget_windowTitle_const(qtdNativeId, &res);
        return res;
    }

    public final Qt.WindowType windowType() const {
        return cast(Qt.WindowType) qtd_QWidget_windowType_const(qtdNativeId);
    }

    public final int x() const {
        return qtd_QWidget_x_const(qtdNativeId);
    }

    public final int y() const {
        return qtd_QWidget_y_const(qtdNativeId);
    }

    protected void actionEvent(QActionEvent arg__1) {
        qtd_QWidget_actionEvent_QActionEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void changeEvent(QEvent arg__1) {
        qtd_QWidget_changeEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void closeEvent(QCloseEvent arg__1) {
        qtd_QWidget_closeEvent_QCloseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void contextMenuEvent(QContextMenuEvent arg__1) {
        qtd_QWidget_contextMenuEvent_QContextMenuEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public int devType() const {
        return qtd_QWidget_devType_const(qtdNativeId);
    }

    protected void dragEnterEvent(QDragEnterEvent arg__1) {
        qtd_QWidget_dragEnterEvent_QDragEnterEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void dragLeaveEvent(QDragLeaveEvent arg__1) {
        qtd_QWidget_dragLeaveEvent_QDragLeaveEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void dragMoveEvent(QDragMoveEvent arg__1) {
        qtd_QWidget_dragMoveEvent_QDragMoveEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void dropEvent(QDropEvent arg__1) {
        qtd_QWidget_dropEvent_QDropEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void enterEvent(QEvent arg__1) {
        qtd_QWidget_enterEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool event(QEvent arg__1) {
        return qtd_QWidget_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void focusInEvent(QFocusEvent arg__1) {
        qtd_QWidget_focusInEvent_QFocusEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected bool focusNextPrevChild(bool next) {
        return qtd_QWidget_focusNextPrevChild_bool(qtdNativeId, next);
    }

    protected void focusOutEvent(QFocusEvent arg__1) {
        qtd_QWidget_focusOutEvent_QFocusEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public int heightForWidth(int arg__1) const {
        return qtd_QWidget_heightForWidth_int_const(qtdNativeId, arg__1);
    }

    protected void hideEvent(QHideEvent arg__1) {
        qtd_QWidget_hideEvent_QHideEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void inputMethodEvent(QInputMethodEvent arg__1) {
        qtd_QWidget_inputMethodEvent_QInputMethodEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QVariant inputMethodQuery(Qt.InputMethodQuery arg__1) const {
        void* ret = qtd_QWidget_inputMethodQuery_InputMethodQuery_const(qtdNativeId, arg__1);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    protected void keyPressEvent(QKeyEvent arg__1) {
        qtd_QWidget_keyPressEvent_QKeyEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void keyReleaseEvent(QKeyEvent arg__1) {
        qtd_QWidget_keyReleaseEvent_QKeyEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void languageChange() {
        qtd_QWidget_languageChange(qtdNativeId);
    }

    protected void leaveEvent(QEvent arg__1) {
        qtd_QWidget_leaveEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public int metric(QPaintDevice.PaintDeviceMetric arg__1) const {
        return qtd_QWidget_metric_PaintDeviceMetric_const(qtdNativeId, arg__1);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QWidget_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void mouseDoubleClickEvent(QMouseEvent arg__1) {
        qtd_QWidget_mouseDoubleClickEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mouseMoveEvent(QMouseEvent arg__1) {
        qtd_QWidget_mouseMoveEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent arg__1) {
        qtd_QWidget_mousePressEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent arg__1) {
        qtd_QWidget_mouseReleaseEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void moveEvent(QMoveEvent arg__1) {
        qtd_QWidget_moveEvent_QMoveEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QPaintEngine paintEngine() const {
        void* ret = qtd_QWidget_paintEngine_const(qtdNativeId);
        QPaintEngine __d_return_value = qtd_QPaintEngine_from_ptr(ret);

        return __d_return_value;
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QWidget_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent arg__1) {
        qtd_QWidget_resizeEvent_QResizeEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public void setVisible(bool visible) {
        qtd_QWidget_setVisible_bool(qtdNativeId, visible);
    }

    protected void showEvent(QShowEvent arg__1) {
        qtd_QWidget_showEvent_QShowEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QWidget_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void tabletEvent(QTabletEvent arg__1) {
        qtd_QWidget_tabletEvent_QTabletEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void wheelEvent(QWheelEvent arg__1) {
        qtd_QWidget_wheelEvent_QWheelEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public static QWidget keyboardGrabber() {
        void *ret = qtd_QWidget_keyboardGrabber();
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public static QWidget mouseGrabber() {
        void *ret = qtd_QWidget_mouseGrabber();
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public static void setTabOrder(QWidget arg__1, QWidget arg__2) {
        qtd_QWidget_setTabOrder_QWidget_QWidget(arg__1 is null ? null : arg__1.qtdNativeId, arg__2 is null ? null : arg__2.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "close()", 
            "hide()", 
            "lower()", 
            "raise()", 
            "repaint()", 
            "setDisabled(bool)", 
            "setEnabled(bool)", 
            "setFocus()", 
            "setHidden(bool)", 
            "setStyleSheet(QString)", 
            "setWindowModified(bool)", 
            "setWindowTitle(QString)", 
            "show()", 
            "showFullScreen()", 
            "showMaximized()", 
            "showMinimized()", 
            "showNormal()", 
            "update()", 
            "updateMicroFocus()", 
            "setVisible(bool)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QWidget_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QWidget);
    }

    static QWidget __getObject(void* nativeId) {
        return static_cast!(QWidget)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QWidget_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QWidget_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QWidget(nativeId, initFlags);
        QWidget.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(const(QPoint))("customContextMenuRequested"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("close"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("hide"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("lower"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!()("raise"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!()("repaint"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setDisabled"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[6]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setEnabled"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[7]);
        mo.addMethod(new QMetaSlot(signature!()("setFocus"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[8]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setHidden"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[9]);
        mo.addMethod(new QMetaSlot(signature!(string)("setStyleSheet"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[10]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setWindowModified"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[11]);
        mo.addMethod(new QMetaSlot(signature!(string)("setWindowTitle"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[12]);
        mo.addMethod(new QMetaSlot(signature!()("show"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[13]);
        mo.addMethod(new QMetaSlot(signature!()("showFullScreen"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[14]);
        mo.addMethod(new QMetaSlot(signature!()("showMaximized"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[15]);
        mo.addMethod(new QMetaSlot(signature!()("showMinimized"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[16]);
        mo.addMethod(new QMetaSlot(signature!()("showNormal"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[17]);
        mo.addMethod(new QMetaSlot(signature!()("update"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[18]);
        mo.addMethod(new QMetaSlot(signature!()("updateMicroFocus"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[19]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setVisible"), index));

    }

    public alias void __isQtType_QWidget;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQPaintDevice = qtd_QWidget_cast_to_QPaintDevice(nativeId);
    }

    private void* __m_ptr_IQPaintDevice;
    public void* __ptr_IQPaintDevice() { return __m_ptr_IQPaintDevice; }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
    private native static void __qt_QMessageBox_setWindowTitle(long native_id, String windowTitle);

    private native static void __qt_QMessageBox_setWindowModality(long native_id, int modality);

    @QtBlockedSlot
    public final QContentsMargins getContentsMargins() {
    QNativePointer left = new QNativePointer(QNativePointer.Type.Int);
    QNativePointer top = new QNativePointer(QNativePointer.Type.Int);
    QNativePointer right = new QNativePointer(QNativePointer.Type.Int);
    QNativePointer bottom = new QNativePointer(QNativePointer.Type.Int);

    getContentsMargins(left, top, right, bottom);
    return new QContentsMargins(left.intValue(), top.intValue(), right.intValue(), bottom.intValue());
    }

    @QtBlockedSlot
    public final void setContentsMargins(QContentsMargins margins) {
    setContentsMargins(margins.left, margins.top, margins.right, margins.bottom);
    }
     */

}
    private static extern (C) void*qtd_QWidget_cast_to_QPaintDevice(void* nativeId);

// C wrappers for signal emitters
private extern(C) void  qtd_QWidget_customContextMenuRequested_QPoint(void* __this_nativeId,
 QPoint pos0);

// C wrappers
private extern(C) void* qtd_QWidget_QWidget_QWidget_WindowFlags(void *d_ptr,
 void* parent0,
 int f1);
private extern(C) bool  qtd_QWidget_acceptDrops_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_accessibleDescription_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QWidget_accessibleName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QWidget_actions_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QWidget_activateWindow(void* __this_nativeId);
private extern(C) void  qtd_QWidget_addAction_QAction(void* __this_nativeId,
 void* action0);
private extern(C) void  qtd_QWidget_addActions_QList(void* __this_nativeId,
 void* actions0);
private extern(C) void  qtd_QWidget_adjustSize(void* __this_nativeId);
private extern(C) bool  qtd_QWidget_autoFillBackground_const(void* __this_nativeId);
private extern(C) int  qtd_QWidget_backgroundRole_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_baseSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void*  qtd_QWidget_childAt_QPoint_const(void* __this_nativeId,
 QPoint p0);
private extern(C) void*  qtd_QWidget_childAt_int_int_const(void* __this_nativeId,
 int x0,
 int y1);
private extern(C) void  qtd_QWidget_childrenRect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void*  qtd_QWidget_childrenRegion_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_clearFocus(void* __this_nativeId);
private extern(C) void  qtd_QWidget_clearMask(void* __this_nativeId);
private extern(C) bool  qtd_QWidget_close(void* __this_nativeId);
private extern(C) int  qtd_QWidget_colorCount_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_contentsRect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) int  qtd_QWidget_contextMenuPolicy_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_createWinId(void* __this_nativeId);
private extern(C) void*  qtd_QWidget_cursor_const(void* __this_nativeId);
private extern(C) int  qtd_QWidget_depth_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_destroy_bool_bool(void* __this_nativeId,
 bool destroyWindow0,
 bool destroySubWindows1);
private extern(C) long  qtd_QWidget_effectiveWinId_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_ensurePolished_const(void* __this_nativeId);
private extern(C) bool  qtd_QWidget_focusNextChild(void* __this_nativeId);
private extern(C) int  qtd_QWidget_focusPolicy_const(void* __this_nativeId);
private extern(C) bool  qtd_QWidget_focusPreviousChild(void* __this_nativeId);
private extern(C) void*  qtd_QWidget_focusProxy_const(void* __this_nativeId);
private extern(C) void*  qtd_QWidget_focusWidget_const(void* __this_nativeId);
private extern(C) void*  qtd_QWidget_font_const(void* __this_nativeId);
private extern(C) void*  qtd_QWidget_fontInfo_const(void* __this_nativeId);
private extern(C) void*  qtd_QWidget_fontMetrics_const(void* __this_nativeId);
private extern(C) int  qtd_QWidget_foregroundRole_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_frameGeometry_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void  qtd_QWidget_frameSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QWidget_geometry_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void  qtd_QWidget_getContentsMargins_nativepointerint_nativepointerint_nativepointerint_nativepointerint_const(void* __this_nativeId,
 int* left0,
 int* top1,
 int* right2,
 int* bottom3);
private extern(C) void  qtd_QWidget_grabKeyboard(void* __this_nativeId);
private extern(C) void  qtd_QWidget_grabMouse(void* __this_nativeId);
private extern(C) void  qtd_QWidget_grabMouse_QCursor(void* __this_nativeId,
 void* arg__1);
private extern(C) int  qtd_QWidget_grabShortcut_QKeySequence_ShortcutContext(void* __this_nativeId,
 void* key0,
 int context1);
private extern(C) void*  qtd_QWidget_graphicsProxyWidget_const(void* __this_nativeId);
private extern(C) bool  qtd_QWidget_hasFocus_const(void* __this_nativeId);
private extern(C) bool  qtd_QWidget_hasMouseTracking_const(void* __this_nativeId);
private extern(C) int  qtd_QWidget_height_const(void* __this_nativeId);
private extern(C) int  qtd_QWidget_heightMM_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_hide(void* __this_nativeId);
private extern(C) void*  qtd_QWidget_inputContext(void* __this_nativeId);
private extern(C) void  qtd_QWidget_insertAction_QAction_QAction(void* __this_nativeId,
 void* before0,
 void* action1);
private extern(C) void  qtd_QWidget_insertActions_QAction_QList(void* __this_nativeId,
 void* before0,
 void* actions1);
private extern(C) bool  qtd_QWidget_isActiveWindow_const(void* __this_nativeId);
private extern(C) bool  qtd_QWidget_isAncestorOf_QWidget_const(void* __this_nativeId,
 void* child0);
private extern(C) bool  qtd_QWidget_isEnabled_const(void* __this_nativeId);
private extern(C) bool  qtd_QWidget_isEnabledTo_QWidget_const(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QWidget_isFullScreen_const(void* __this_nativeId);
private extern(C) bool  qtd_QWidget_isHidden_const(void* __this_nativeId);
private extern(C) bool  qtd_QWidget_isLeftToRight_const(void* __this_nativeId);
private extern(C) bool  qtd_QWidget_isMaximized_const(void* __this_nativeId);
private extern(C) bool  qtd_QWidget_isMinimized_const(void* __this_nativeId);
private extern(C) bool  qtd_QWidget_isModal_const(void* __this_nativeId);
private extern(C) bool  qtd_QWidget_isRightToLeft_const(void* __this_nativeId);
private extern(C) bool  qtd_QWidget_isVisible_const(void* __this_nativeId);
private extern(C) bool  qtd_QWidget_isVisibleTo_QWidget_const(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QWidget_isWindow_const(void* __this_nativeId);
private extern(C) bool  qtd_QWidget_isWindowModified_const(void* __this_nativeId);
private extern(C) void*  qtd_QWidget_layout_const(void* __this_nativeId);
private extern(C) int  qtd_QWidget_layoutDirection_const(void* __this_nativeId);
private extern(C) void*  qtd_QWidget_locale_const(void* __this_nativeId);
private extern(C) int  qtd_QWidget_logicalDpiX_const(void* __this_nativeId);
private extern(C) int  qtd_QWidget_logicalDpiY_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_lower(void* __this_nativeId);
private extern(C) void  qtd_QWidget_mapFrom_QWidget_QPoint_const(void* __this_nativeId,
 QPoint * __d_return_value,
 void* arg__1,
 QPoint arg__2);
private extern(C) void  qtd_QWidget_mapFromGlobal_QPoint_const(void* __this_nativeId,
 QPoint * __d_return_value,
 QPoint arg__1);
private extern(C) void  qtd_QWidget_mapFromParent_QPoint_const(void* __this_nativeId,
 QPoint * __d_return_value,
 QPoint arg__1);
private extern(C) void  qtd_QWidget_mapTo_QWidget_QPoint_const(void* __this_nativeId,
 QPoint * __d_return_value,
 void* arg__1,
 QPoint arg__2);
private extern(C) void  qtd_QWidget_mapToGlobal_QPoint_const(void* __this_nativeId,
 QPoint * __d_return_value,
 QPoint arg__1);
private extern(C) void  qtd_QWidget_mapToParent_QPoint_const(void* __this_nativeId,
 QPoint * __d_return_value,
 QPoint arg__1);
private extern(C) void*  qtd_QWidget_mask_const(void* __this_nativeId);
private extern(C) int  qtd_QWidget_maximumHeight_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_maximumSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) int  qtd_QWidget_maximumWidth_const(void* __this_nativeId);
private extern(C) int  qtd_QWidget_minimumHeight_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_minimumSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) int  qtd_QWidget_minimumWidth_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_move_QPoint(void* __this_nativeId,
 QPoint arg__1);
private extern(C) void  qtd_QWidget_move_int_int(void* __this_nativeId,
 int x0,
 int y1);
private extern(C) void*  qtd_QWidget_nativeParentWidget_const(void* __this_nativeId);
private extern(C) void*  qtd_QWidget_nextInFocusChain_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_normalGeometry_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) int  qtd_QWidget_numColors_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_overrideWindowFlags_WindowFlags(void* __this_nativeId,
 int type0);
private extern(C) void  qtd_QWidget_overrideWindowState_WindowStates(void* __this_nativeId,
 int state0);
private extern(C) bool  qtd_QWidget_paintingActive_const(void* __this_nativeId);
private extern(C) void*  qtd_QWidget_palette_const(void* __this_nativeId);
private extern(C) void*  qtd_QWidget_parentWidget_const(void* __this_nativeId);
private extern(C) int  qtd_QWidget_physicalDpiX_const(void* __this_nativeId);
private extern(C) int  qtd_QWidget_physicalDpiY_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_pos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void*  qtd_QWidget_previousInFocusChain_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_raise(void* __this_nativeId);
private extern(C) void  qtd_QWidget_rect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void  qtd_QWidget_releaseKeyboard(void* __this_nativeId);
private extern(C) void  qtd_QWidget_releaseMouse(void* __this_nativeId);
private extern(C) void  qtd_QWidget_releaseShortcut_int(void* __this_nativeId,
 int id0);
private extern(C) void  qtd_QWidget_removeAction_QAction(void* __this_nativeId,
 void* action0);
private extern(C) void  qtd_QWidget_render_QPaintDevice_QPoint_QRegion_RenderFlags(void* __this_nativeId,
 void* target0,
 QPoint targetOffset1,
 void* sourceRegion2,
 int renderFlags3);
private extern(C) void  qtd_QWidget_render_QPainter_QPoint_QRegion_RenderFlags(void* __this_nativeId,
 void* painter0,
 QPoint targetOffset1,
 void* sourceRegion2,
 int renderFlags3);
private extern(C) void  qtd_QWidget_repaint(void* __this_nativeId);
private extern(C) void  qtd_QWidget_repaint_QRect(void* __this_nativeId,
 QRect arg__1);
private extern(C) void  qtd_QWidget_repaint_QRegion(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_repaint_int_int_int_int(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3);
private extern(C) void  qtd_QWidget_resetInputContext(void* __this_nativeId);
private extern(C) void  qtd_QWidget_resize_QSize(void* __this_nativeId,
 QSize arg__1);
private extern(C) void  qtd_QWidget_resize_int_int(void* __this_nativeId,
 int w0,
 int h1);
private extern(C) bool  qtd_QWidget_restoreGeometry_QByteArray(void* __this_nativeId,
 void* geometry0);
private extern(C) void*  qtd_QWidget_saveGeometry_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_scroll_int_int(void* __this_nativeId,
 int dx0,
 int dy1);
private extern(C) void  qtd_QWidget_scroll_int_int_QRect(void* __this_nativeId,
 int dx0,
 int dy1,
 QRect arg__3);
private extern(C) void  qtd_QWidget_setAcceptDrops_bool(void* __this_nativeId,
 bool on0);
private extern(C) void  qtd_QWidget_setAccessibleDescription_string(void* __this_nativeId,
 string description0);
private extern(C) void  qtd_QWidget_setAccessibleName_string(void* __this_nativeId,
 string name0);
private extern(C) void  qtd_QWidget_setAttribute_WidgetAttribute_bool(void* __this_nativeId,
 int arg__1,
 bool on1);
private extern(C) void  qtd_QWidget_setAutoFillBackground_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QWidget_setBackgroundRole_ColorRole(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QWidget_setBaseSize_QSize(void* __this_nativeId,
 QSize arg__1);
private extern(C) void  qtd_QWidget_setBaseSize_int_int(void* __this_nativeId,
 int basew0,
 int baseh1);
private extern(C) void  qtd_QWidget_setContentsMargins_int_int_int_int(void* __this_nativeId,
 int left0,
 int top1,
 int right2,
 int bottom3);
private extern(C) void  qtd_QWidget_setContextMenuPolicy_ContextMenuPolicy(void* __this_nativeId,
 int policy0);
private extern(C) void  qtd_QWidget_setCursor_QCursor(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_setDisabled_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QWidget_setEnabled_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QWidget_setFixedHeight_int(void* __this_nativeId,
 int h0);
private extern(C) void  qtd_QWidget_setFixedSize_QSize(void* __this_nativeId,
 QSize arg__1);
private extern(C) void  qtd_QWidget_setFixedSize_int_int(void* __this_nativeId,
 int w0,
 int h1);
private extern(C) void  qtd_QWidget_setFixedWidth_int(void* __this_nativeId,
 int w0);
private extern(C) void  qtd_QWidget_setFocus(void* __this_nativeId);
private extern(C) void  qtd_QWidget_setFocus_FocusReason(void* __this_nativeId,
 int reason0);
private extern(C) void  qtd_QWidget_setFocusPolicy_FocusPolicy(void* __this_nativeId,
 int policy0);
private extern(C) void  qtd_QWidget_setFocusProxy_QWidget(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_setFont_QFont(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_setForegroundRole_ColorRole(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QWidget_setGeometry_QRect(void* __this_nativeId,
 QRect arg__1);
private extern(C) void  qtd_QWidget_setGeometry_int_int_int_int(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3);
private extern(C) void  qtd_QWidget_setHidden_bool(void* __this_nativeId,
 bool hidden0);
private extern(C) void  qtd_QWidget_setInputContext_QInputContext(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_setLayout_QLayout(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_setLayoutDirection_LayoutDirection(void* __this_nativeId,
 int direction0);
private extern(C) void  qtd_QWidget_setLocale_QLocale(void* __this_nativeId,
 void* locale0);
private extern(C) void  qtd_QWidget_setMask_QBitmap(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_setMask_QRegion(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_setMaximumHeight_int(void* __this_nativeId,
 int maxh0);
private extern(C) void  qtd_QWidget_setMaximumSize_QSize(void* __this_nativeId,
 QSize arg__1);
private extern(C) void  qtd_QWidget_setMaximumSize_int_int(void* __this_nativeId,
 int maxw0,
 int maxh1);
private extern(C) void  qtd_QWidget_setMaximumWidth_int(void* __this_nativeId,
 int maxw0);
private extern(C) void  qtd_QWidget_setMinimumHeight_int(void* __this_nativeId,
 int minh0);
private extern(C) void  qtd_QWidget_setMinimumSize_QSize(void* __this_nativeId,
 QSize arg__1);
private extern(C) void  qtd_QWidget_setMinimumSize_int_int(void* __this_nativeId,
 int minw0,
 int minh1);
private extern(C) void  qtd_QWidget_setMinimumWidth_int(void* __this_nativeId,
 int minw0);
private extern(C) void  qtd_QWidget_setMouseTracking_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QWidget_setPalette_QPalette(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_setParent_QWidget(void* __this_nativeId,
 void* parent0);
private extern(C) void  qtd_QWidget_setParent_QWidget_WindowFlags(void* __this_nativeId,
 void* parent0,
 int f1);
private extern(C) void  qtd_QWidget_setShortcutAutoRepeat_int_bool(void* __this_nativeId,
 int id0,
 bool enable1);
private extern(C) void  qtd_QWidget_setShortcutEnabled_int_bool(void* __this_nativeId,
 int id0,
 bool enable1);
private extern(C) void  qtd_QWidget_setSizeIncrement_QSize(void* __this_nativeId,
 QSize arg__1);
private extern(C) void  qtd_QWidget_setSizeIncrement_int_int(void* __this_nativeId,
 int w0,
 int h1);
private extern(C) void  qtd_QWidget_setSizePolicy_QSizePolicy(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_setSizePolicy_Policy_Policy(void* __this_nativeId,
 int horizontal0,
 int vertical1);
private extern(C) void  qtd_QWidget_setStatusTip_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QWidget_setStyle_QStyle(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_setStyleSheet_string(void* __this_nativeId,
 string styleSheet0);
private extern(C) void  qtd_QWidget_setToolTip_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QWidget_setUpdatesEnabled_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QWidget_setWhatsThis_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QWidget_setWindowFilePath_string(void* __this_nativeId,
 string filePath0);
private extern(C) void  qtd_QWidget_setWindowFlags_WindowFlags(void* __this_nativeId,
 int type0);
private extern(C) void  qtd_QWidget_setWindowIcon_QIcon(void* __this_nativeId,
 void* icon0);
private extern(C) void  qtd_QWidget_setWindowIconText_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QWidget_setWindowModality_WindowModality(void* __this_nativeId,
 int windowModality0);
private extern(C) void  qtd_QWidget_setWindowModified_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QWidget_setWindowOpacity_double(void* __this_nativeId,
 double level0);
private extern(C) void  qtd_QWidget_setWindowRole_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QWidget_setWindowState_WindowStates(void* __this_nativeId,
 int state0);
private extern(C) void  qtd_QWidget_setWindowTitle_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QWidget_show(void* __this_nativeId);
private extern(C) void  qtd_QWidget_showFullScreen(void* __this_nativeId);
private extern(C) void  qtd_QWidget_showMaximized(void* __this_nativeId);
private extern(C) void  qtd_QWidget_showMinimized(void* __this_nativeId);
private extern(C) void  qtd_QWidget_showNormal(void* __this_nativeId);
private extern(C) void  qtd_QWidget_size_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QWidget_sizeIncrement_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void*  qtd_QWidget_sizePolicy_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_stackUnder_QWidget(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_statusTip_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QWidget_style_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_styleSheet_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QWidget_testAttribute_WidgetAttribute_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QWidget_toolTip_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QWidget_underMouse_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_unsetCursor(void* __this_nativeId);
private extern(C) void  qtd_QWidget_unsetLayoutDirection(void* __this_nativeId);
private extern(C) void  qtd_QWidget_unsetLocale(void* __this_nativeId);
private extern(C) void  qtd_QWidget_update(void* __this_nativeId);
private extern(C) void  qtd_QWidget_update_QRect(void* __this_nativeId,
 QRect arg__1);
private extern(C) void  qtd_QWidget_update_QRegion(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_update_int_int_int_int(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3);
private extern(C) void  qtd_QWidget_updateGeometry(void* __this_nativeId);
private extern(C) void  qtd_QWidget_updateMicroFocus(void* __this_nativeId);
private extern(C) bool  qtd_QWidget_updatesEnabled_const(void* __this_nativeId);
private extern(C) void*  qtd_QWidget_visibleRegion_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_whatsThis_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QWidget_width_const(void* __this_nativeId);
private extern(C) int  qtd_QWidget_widthMM_const(void* __this_nativeId);
private extern(C) long  qtd_QWidget_winId_const(void* __this_nativeId);
private extern(C) void*  qtd_QWidget_window_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_windowFilePath_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QWidget_windowFlags_const(void* __this_nativeId);
private extern(C) void*  qtd_QWidget_windowIcon_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_windowIconText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QWidget_windowModality_const(void* __this_nativeId);
private extern(C) double  qtd_QWidget_windowOpacity_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_windowRole_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QWidget_windowState_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_windowTitle_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QWidget_windowType_const(void* __this_nativeId);
private extern(C) int  qtd_QWidget_x_const(void* __this_nativeId);
private extern(C) int  qtd_QWidget_y_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_actionEvent_QActionEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_changeEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_closeEvent_QCloseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_contextMenuEvent_QContextMenuEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) int  qtd_QWidget_devType_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_dragEnterEvent_QDragEnterEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_dragLeaveEvent_QDragLeaveEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_dragMoveEvent_QDragMoveEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_dropEvent_QDropEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_enterEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QWidget_event_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QWidget_focusNextPrevChild_bool(void* __this_nativeId,
 bool next0);
private extern(C) void  qtd_QWidget_focusOutEvent_QFocusEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) int  qtd_QWidget_heightForWidth_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QWidget_hideEvent_QHideEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_inputMethodEvent_QInputMethodEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QWidget_inputMethodQuery_InputMethodQuery_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QWidget_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_keyReleaseEvent_QKeyEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_languageChange(void* __this_nativeId);
private extern(C) void  qtd_QWidget_leaveEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) int  qtd_QWidget_metric_PaintDeviceMetric_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QWidget_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QWidget_mouseDoubleClickEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_moveEvent_QMoveEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QWidget_paintEngine_const(void* __this_nativeId);
private extern(C) void  qtd_QWidget_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_setVisible_bool(void* __this_nativeId,
 bool visible0);
private extern(C) void  qtd_QWidget_showEvent_QShowEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QWidget_tabletEvent_QTabletEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWidget_wheelEvent_QWheelEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QWidget_keyboardGrabber();
private extern(C) void*  qtd_QWidget_mouseGrabber();
private extern(C) void  qtd_QWidget_setTabOrder_QWidget_QWidget(void* arg__1,
 void* arg__2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_actionEvent_QActionEvent_dispatch; }
extern(C) void qtd_export_QWidget_actionEvent_QActionEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QActionEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.actionEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_changeEvent_QEvent_dispatch; }
extern(C) void qtd_export_QWidget_changeEvent_QEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.changeEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_closeEvent_QCloseEvent_dispatch; }
extern(C) void qtd_export_QWidget_closeEvent_QCloseEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QCloseEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.closeEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch; }
extern(C) void qtd_export_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QContextMenuEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.contextMenuEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch; }
extern(C) void qtd_export_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QDragEnterEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.dragEnterEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch; }
extern(C) void qtd_export_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QDragLeaveEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.dragLeaveEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch; }
extern(C) void qtd_export_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QDragMoveEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.dragMoveEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_dropEvent_QDropEvent_dispatch; }
extern(C) void qtd_export_QWidget_dropEvent_QDropEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QDropEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.dropEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_enterEvent_QEvent_dispatch; }
extern(C) void qtd_export_QWidget_enterEvent_QEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.enterEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_focusInEvent_QFocusEvent_dispatch; }
extern(C) void qtd_export_QWidget_focusInEvent_QFocusEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QFocusEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.focusInEvent(arg__1_d_ref);
}

extern(C){ extern bool function(void *dId, bool next0) qtd_QWidget_focusNextPrevChild_bool_dispatch; }
extern(C) bool qtd_export_QWidget_focusNextPrevChild_bool_dispatch(void *dId, bool next0){
    auto d_object = cast(QWidget) dId;
    auto return_value = d_object.focusNextPrevChild(next0);
    return return_value;
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_focusOutEvent_QFocusEvent_dispatch; }
extern(C) void qtd_export_QWidget_focusOutEvent_QFocusEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QFocusEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.focusOutEvent(arg__1_d_ref);
}

extern(C){ extern int function(void *dId, int arg__1) qtd_QWidget_heightForWidth_int_const_dispatch; }
extern(C) int qtd_export_QWidget_heightForWidth_int_const_dispatch(void *dId, int arg__1){
    auto d_object = cast(QWidget) dId;
    auto return_value = d_object.heightForWidth(arg__1);
    return return_value;
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_hideEvent_QHideEvent_dispatch; }
extern(C) void qtd_export_QWidget_hideEvent_QHideEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QHideEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.hideEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch; }
extern(C) void qtd_export_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QInputMethodEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.inputMethodEvent(arg__1_d_ref);
}

extern(C){ extern void* function(void *dId, int arg__1) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch; }
extern(C) void* qtd_export_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(void *dId, int arg__1){
    auto d_object = cast(QWidget) dId;
    auto arg__1_enum = cast(Qt.InputMethodQuery) arg__1;
    QVariant ret_value = d_object.inputMethodQuery(arg__1_enum);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_keyPressEvent_QKeyEvent_dispatch; }
extern(C) void qtd_export_QWidget_keyPressEvent_QKeyEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QKeyEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.keyPressEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch; }
extern(C) void qtd_export_QWidget_keyReleaseEvent_QKeyEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QKeyEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.keyReleaseEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId) qtd_QWidget_languageChange_dispatch; }
extern(C) void qtd_export_QWidget_languageChange_dispatch(void *dId){
    auto d_object = cast(QWidget) dId;
    d_object.languageChange();
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_leaveEvent_QEvent_dispatch; }
extern(C) void qtd_export_QWidget_leaveEvent_QEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.leaveEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, QSize *__d_return_value) qtd_QWidget_minimumSizeHint_const_dispatch; }
extern(C) void qtd_export_QWidget_minimumSizeHint_const_dispatch(void *dId, QSize *__d_return_value){
    auto d_object = cast(QWidget) dId;
    *__d_return_value = d_object.minimumSizeHint();
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch; }
extern(C) void qtd_export_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QMouseEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.mouseDoubleClickEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch; }
extern(C) void qtd_export_QWidget_mouseMoveEvent_QMouseEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QMouseEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.mouseMoveEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_mousePressEvent_QMouseEvent_dispatch; }
extern(C) void qtd_export_QWidget_mousePressEvent_QMouseEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QMouseEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.mousePressEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch; }
extern(C) void qtd_export_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QMouseEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.mouseReleaseEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_moveEvent_QMoveEvent_dispatch; }
extern(C) void qtd_export_QWidget_moveEvent_QMoveEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QMoveEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.moveEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_paintEvent_QPaintEvent_dispatch; }
extern(C) void qtd_export_QWidget_paintEvent_QPaintEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QPaintEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.paintEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_resizeEvent_QResizeEvent_dispatch; }
extern(C) void qtd_export_QWidget_resizeEvent_QResizeEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QResizeEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.resizeEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, bool visible0) qtd_QWidget_setVisible_bool_dispatch; }
extern(C) void qtd_export_QWidget_setVisible_bool_dispatch(void *dId, bool visible0){
    auto d_object = cast(QWidget) dId;
    d_object.setVisible(visible0);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_showEvent_QShowEvent_dispatch; }
extern(C) void qtd_export_QWidget_showEvent_QShowEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QShowEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.showEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, QSize *__d_return_value) qtd_QWidget_sizeHint_const_dispatch; }
extern(C) void qtd_export_QWidget_sizeHint_const_dispatch(void *dId, QSize *__d_return_value){
    auto d_object = cast(QWidget) dId;
    *__d_return_value = d_object.sizeHint();
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_tabletEvent_QTabletEvent_dispatch; }
extern(C) void qtd_export_QWidget_tabletEvent_QTabletEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QTabletEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.tabletEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QWidget_wheelEvent_QWheelEvent_dispatch; }
extern(C) void qtd_export_QWidget_wheelEvent_QWheelEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QWidget) dId;
    scope arg__1_d_ref = new QWheelEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.wheelEvent(arg__1_d_ref);
}

private extern (C) void qtd_QWidget_initCallBacks(void* virtuals);

extern(C) void static_init_QWidget() {
    void*[33] virt_arr;
    virt_arr[0] = &qtd_export_QWidget_actionEvent_QActionEvent_dispatch;
    virt_arr[1] = &qtd_export_QWidget_changeEvent_QEvent_dispatch;
    virt_arr[2] = &qtd_export_QWidget_closeEvent_QCloseEvent_dispatch;
    virt_arr[3] = &qtd_export_QWidget_contextMenuEvent_QContextMenuEvent_dispatch;
    virt_arr[4] = &qtd_export_QWidget_dragEnterEvent_QDragEnterEvent_dispatch;
    virt_arr[5] = &qtd_export_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch;
    virt_arr[6] = &qtd_export_QWidget_dragMoveEvent_QDragMoveEvent_dispatch;
    virt_arr[7] = &qtd_export_QWidget_dropEvent_QDropEvent_dispatch;
    virt_arr[8] = &qtd_export_QWidget_enterEvent_QEvent_dispatch;
    virt_arr[9] = &qtd_export_QWidget_focusInEvent_QFocusEvent_dispatch;
    virt_arr[10] = &qtd_export_QWidget_focusNextPrevChild_bool_dispatch;
    virt_arr[11] = &qtd_export_QWidget_focusOutEvent_QFocusEvent_dispatch;
    virt_arr[12] = &qtd_export_QWidget_heightForWidth_int_const_dispatch;
    virt_arr[13] = &qtd_export_QWidget_hideEvent_QHideEvent_dispatch;
    virt_arr[14] = &qtd_export_QWidget_inputMethodEvent_QInputMethodEvent_dispatch;
    virt_arr[15] = &qtd_export_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch;
    virt_arr[16] = &qtd_export_QWidget_keyPressEvent_QKeyEvent_dispatch;
    virt_arr[17] = &qtd_export_QWidget_keyReleaseEvent_QKeyEvent_dispatch;
    virt_arr[18] = &qtd_export_QWidget_languageChange_dispatch;
    virt_arr[19] = &qtd_export_QWidget_leaveEvent_QEvent_dispatch;
    virt_arr[20] = &qtd_export_QWidget_minimumSizeHint_const_dispatch;
    virt_arr[21] = &qtd_export_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch;
    virt_arr[22] = &qtd_export_QWidget_mouseMoveEvent_QMouseEvent_dispatch;
    virt_arr[23] = &qtd_export_QWidget_mousePressEvent_QMouseEvent_dispatch;
    virt_arr[24] = &qtd_export_QWidget_mouseReleaseEvent_QMouseEvent_dispatch;
    virt_arr[25] = &qtd_export_QWidget_moveEvent_QMoveEvent_dispatch;
    virt_arr[26] = &qtd_export_QWidget_paintEvent_QPaintEvent_dispatch;
    virt_arr[27] = &qtd_export_QWidget_resizeEvent_QResizeEvent_dispatch;
    virt_arr[28] = &qtd_export_QWidget_setVisible_bool_dispatch;
    virt_arr[29] = &qtd_export_QWidget_showEvent_QShowEvent_dispatch;
    virt_arr[30] = &qtd_export_QWidget_sizeHint_const_dispatch;
    virt_arr[31] = &qtd_export_QWidget_tabletEvent_QTabletEvent_dispatch;
    virt_arr[32] = &qtd_export_QWidget_wheelEvent_QWheelEvent_dispatch;
    qtd_QWidget_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QWidget_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QWidget) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/

extern(C) QMetaObjectNative* qtd_QWidget_staticMetaObject();

extern(C) void qtd_QWidget_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QWidget_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
