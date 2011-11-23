module qt.gui.QGraphicsWidget;

public import qt.gui.QGraphicsWidget_aux;
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
public import qt.gui.QGraphicsItem;
public import qt.core.Qt;
public import qt.gui.QSizePolicy;
public import qt.gui.QStyleOption;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QStyle;
public import qt.core.QChildEvent;
public import qt.core.QRectF;
public import qt.gui.QKeyEvent;
public import qt.core.QObject;
public import qt.gui.QPainter;
public import qt.core.QPointF;
public import qt.gui.QGraphicsSceneMouseEvent;
public import qt.core.QList;
public import qt.core.QEvent;
public import qt.gui.QPalette;
public import qt.gui.QGraphicsSceneResizeEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QAction;
public import qt.gui.QGraphicsSceneHoverEvent;
public import qt.gui.QCloseEvent;
public import qt.core.QSizeF;
public import qt.gui.QGraphicsObject;
public import qt.gui.QGraphicsSceneContextMenuEvent;
public import qt.gui.QGraphicsItem;
public import qt.gui.QGraphicsSceneMoveEvent;
public import qt.gui.QFont;
public import qt.gui.QGraphicsLayout;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QPainterPath;
public import qt.gui.QKeySequence;
public import qt.core.QVariant;
public import qt.gui.QFocusEvent;
public import qt.gui.QGraphicsSceneDragDropEvent;
public import qt.gui.QStyleOptionGraphicsItem;
public import qt.gui.QWidget;
public import qt.gui.QSizePolicy;
public import qt.gui.QGraphicsLayoutItem;
public import qt.gui.QGraphicsSceneWheelEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGraphicsWidget : QGraphicsObject, IQGraphicsLayoutItem
{
    public enum enum_1 {
        Type = 11
    }

    alias enum_1.Type Type;


Object __rcStyle = null;

Object __rcLayout = null;

    private static const string[] __signalSignatures = [
            "geometryChanged()", 
            "layoutChanged()"    ];

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

    protected final void geometryChanged() {
        qtd_QGraphicsWidget_geometryChanged(qtdNativeId);
    }

    protected final void layoutChanged() {
        qtd_QGraphicsWidget_layoutChanged(qtdNativeId);
    }
// Functions

    public this(IQGraphicsItem parent_ = null, int wFlags = 0) {
        void* ret = qtd_QGraphicsWidget_QGraphicsWidget_QGraphicsItem_WindowFlags(cast(void*) this, parent_ is null ? null : parent_.__ptr_IQGraphicsItem, wFlags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QList!(QAction) actions() const {
        auto res = QList!(QAction).opCall();
        qtd_QGraphicsWidget_actions_const(qtdNativeId, &res);
        return res;
    }

    public final void addAction(QAction action) {
        qtd_QGraphicsWidget_addAction_QAction(qtdNativeId, action is null ? null : action.qtdNativeId);
    }

    public final void addActions(QList!(QAction) actions) {
        qtd_QGraphicsWidget_addActions_QList(qtdNativeId, &actions);
    }

    public final void adjustSize() {
        qtd_QGraphicsWidget_adjustSize(qtdNativeId);
    }

    public final bool autoFillBackground() const {
        return qtd_QGraphicsWidget_autoFillBackground_const(qtdNativeId);
    }

    public final bool close() {
        return qtd_QGraphicsWidget_close(qtdNativeId);
    }

    public final QRectF contentsRect() const {
        QRectF res;
        qtd_QGraphicsWidget_contentsRect_const(qtdNativeId, &res);
        return res;
    }

    public final QSizeF effectiveSizeHint(Qt.SizeHint which, const(QSizeF) constraint = QSizeF()) const {
        QSizeF res;
        qtd_QGraphicsWidget_effectiveSizeHint_SizeHint_QSizeF_const(qtdNativeId, &res, which, constraint);
        return res;
    }

    public final Qt.FocusPolicy focusPolicy() const {
        return cast(Qt.FocusPolicy) qtd_QGraphicsWidget_focusPolicy_const(qtdNativeId);
    }

    public final QGraphicsWidget focusWidget() const {
        void *ret = qtd_QGraphicsWidget_focusWidget_const(qtdNativeId);
        QGraphicsWidget __d_return_value = QGraphicsWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QFont font() const {
        void* ret = qtd_QGraphicsWidget_font_const(qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public final QRectF geometry() const {
        QRectF res;
        qtd_QGraphicsWidget_geometry_const(qtdNativeId, &res);
        return res;
    }

    public final void getContentsMargins(double* left, double* top, double* right, double* bottom) const {
        qtd_QGraphicsWidget_getContentsMargins_nativepointerdouble_nativepointerdouble_nativepointerdouble_nativepointerdouble_const(qtdNativeId, left, top, right, bottom);
    }

    public final void getWindowFrameMargins(double* left, double* top, double* right, double* bottom) const {
        qtd_QGraphicsWidget_getWindowFrameMargins_nativepointerdouble_nativepointerdouble_nativepointerdouble_nativepointerdouble_const(qtdNativeId, left, top, right, bottom);
    }

    public final int grabShortcut(const(QKeySequence) sequence, Qt.ShortcutContext context = Qt.ShortcutContext.WindowShortcut) {
        return qtd_QGraphicsWidget_grabShortcut_QKeySequence_ShortcutContext(qtdNativeId, sequence is null ? null : (cast(QKeySequence)sequence).qtdNativeId, context);
    }

    public final IQGraphicsItem graphicsItem() const {
        void* ret = qtd_QGraphicsWidget_graphicsItem_const(qtdNativeId);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final void insertAction(QAction before, QAction action) {
        qtd_QGraphicsWidget_insertAction_QAction_QAction(qtdNativeId, before is null ? null : before.qtdNativeId, action is null ? null : action.qtdNativeId);
    }

    public final void insertActions(QAction before, QList!(QAction) actions) {
        qtd_QGraphicsWidget_insertActions_QAction_QList(qtdNativeId, before is null ? null : before.qtdNativeId, &actions);
    }

    public final bool isActiveWindow() const {
        return qtd_QGraphicsWidget_isActiveWindow_const(qtdNativeId);
    }

    public final bool isLayout() const {
        return qtd_QGraphicsWidget_isLayout_const(qtdNativeId);
    }

    public final QGraphicsLayout layout() const {
        void* ret = qtd_QGraphicsWidget_layout_const(qtdNativeId);
        QGraphicsLayout __d_return_value = qtd_QGraphicsLayout_from_ptr(ret);

        return __d_return_value;
    }

    public final Qt.LayoutDirection layoutDirection() const {
        return cast(Qt.LayoutDirection) qtd_QGraphicsWidget_layoutDirection_const(qtdNativeId);
    }

    public final double maximumHeight() const {
        return qtd_QGraphicsWidget_maximumHeight_const(qtdNativeId);
    }

    public final QSizeF maximumSize() const {
        QSizeF res;
        qtd_QGraphicsWidget_maximumSize_const(qtdNativeId, &res);
        return res;
    }

    public final double maximumWidth() const {
        return qtd_QGraphicsWidget_maximumWidth_const(qtdNativeId);
    }

    public final double minimumHeight() const {
        return qtd_QGraphicsWidget_minimumHeight_const(qtdNativeId);
    }

    public final QSizeF minimumSize() const {
        QSizeF res;
        qtd_QGraphicsWidget_minimumSize_const(qtdNativeId, &res);
        return res;
    }

    public final double minimumWidth() const {
        return qtd_QGraphicsWidget_minimumWidth_const(qtdNativeId);
    }

    public final bool ownedByLayout() const {
        return qtd_QGraphicsWidget_ownedByLayout_const(qtdNativeId);
    }

    public final QPalette palette() const {
        void* ret = qtd_QGraphicsWidget_palette_const(qtdNativeId);
        QPalette __d_return_value = new QPalette(ret);
        return __d_return_value;
    }

    public final IQGraphicsLayoutItem parentLayoutItem() const {
        void* ret = qtd_QGraphicsWidget_parentLayoutItem_const(qtdNativeId);
        IQGraphicsLayoutItem __d_return_value = qtd_QGraphicsLayoutItem_from_ptr(ret);

        return __d_return_value;
    }

    public final double preferredHeight() const {
        return qtd_QGraphicsWidget_preferredHeight_const(qtdNativeId);
    }

    public final QSizeF preferredSize() const {
        QSizeF res;
        qtd_QGraphicsWidget_preferredSize_const(qtdNativeId, &res);
        return res;
    }

    public final double preferredWidth() const {
        return qtd_QGraphicsWidget_preferredWidth_const(qtdNativeId);
    }

    public final QRectF rect() const {
        QRectF res;
        qtd_QGraphicsWidget_rect_const(qtdNativeId, &res);
        return res;
    }

    public final void releaseShortcut(int id) {
        qtd_QGraphicsWidget_releaseShortcut_int(qtdNativeId, id);
    }

    public final void removeAction(QAction action) {
        qtd_QGraphicsWidget_removeAction_QAction(qtdNativeId, action is null ? null : action.qtdNativeId);
    }

    public final void resize(const(QSizeF) size) {
        qtd_QGraphicsWidget_resize_QSizeF(qtdNativeId, size);
    }

    public final void resize(double w, double h) {
        qtd_QGraphicsWidget_resize_double_double(qtdNativeId, w, h);
    }

    public final void setAttribute(Qt.WidgetAttribute attribute, bool on = true) {
        qtd_QGraphicsWidget_setAttribute_WidgetAttribute_bool(qtdNativeId, attribute, on);
    }

    public final void setAutoFillBackground(bool enabled) {
        qtd_QGraphicsWidget_setAutoFillBackground_bool(qtdNativeId, enabled);
    }

    public final void setContentsMargins(double left, double top, double right, double bottom) {
        qtd_QGraphicsWidget_setContentsMargins_double_double_double_double(qtdNativeId, left, top, right, bottom);
    }

    public final void setFocusPolicy(Qt.FocusPolicy policy) {
        qtd_QGraphicsWidget_setFocusPolicy_FocusPolicy(qtdNativeId, policy);
    }

    public final void setFont(const(QFont) font) {
        qtd_QGraphicsWidget_setFont_QFont(qtdNativeId, font is null ? null : (cast(QFont)font).qtdNativeId);
    }

    public final void setGeometry(double x, double y, double w, double h) {
        qtd_QGraphicsWidget_setGeometry_double_double_double_double(qtdNativeId, x, y, w, h);
    }

    public final void setGraphicsItem(IQGraphicsItem item) {
        qtd_QGraphicsWidget_setGraphicsItem_QGraphicsItem(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem);
    }

    public final void setLayout(QGraphicsLayout layout) {
        {
            __rcLayout = cast(Object) layout;
        }
        qtd_QGraphicsWidget_setLayout_QGraphicsLayout(qtdNativeId, layout is null ? null : layout.qtdNativeId);
    }

    public final void setLayoutDirection(Qt.LayoutDirection direction) {
        qtd_QGraphicsWidget_setLayoutDirection_LayoutDirection(qtdNativeId, direction);
    }

    public final void setMaximumHeight(double height) {
        qtd_QGraphicsWidget_setMaximumHeight_double(qtdNativeId, height);
    }

    public final void setMaximumSize(const(QSizeF) size) {
        qtd_QGraphicsWidget_setMaximumSize_QSizeF(qtdNativeId, size);
    }

    public final void setMaximumSize(double w, double h) {
        qtd_QGraphicsWidget_setMaximumSize_double_double(qtdNativeId, w, h);
    }

    public final void setMaximumWidth(double width) {
        qtd_QGraphicsWidget_setMaximumWidth_double(qtdNativeId, width);
    }

    public final void setMinimumHeight(double height) {
        qtd_QGraphicsWidget_setMinimumHeight_double(qtdNativeId, height);
    }

    public final void setMinimumSize(const(QSizeF) size) {
        qtd_QGraphicsWidget_setMinimumSize_QSizeF(qtdNativeId, size);
    }

    public final void setMinimumSize(double w, double h) {
        qtd_QGraphicsWidget_setMinimumSize_double_double(qtdNativeId, w, h);
    }

    public final void setMinimumWidth(double width) {
        qtd_QGraphicsWidget_setMinimumWidth_double(qtdNativeId, width);
    }

    public final void setOwnedByLayout(bool ownedByLayout) {
        qtd_QGraphicsWidget_setOwnedByLayout_bool(qtdNativeId, ownedByLayout);
    }

    public final void setPalette(const(QPalette) palette) {
        qtd_QGraphicsWidget_setPalette_QPalette(qtdNativeId, palette is null ? null : (cast(QPalette)palette).qtdNativeId);
    }

    public final void setParentLayoutItem(IQGraphicsLayoutItem parent_) {
        qtd_QGraphicsWidget_setParentLayoutItem_QGraphicsLayoutItem(qtdNativeId, parent_ is null ? null : parent_.__ptr_IQGraphicsLayoutItem);
    }

    public final void setPreferredHeight(double height) {
        qtd_QGraphicsWidget_setPreferredHeight_double(qtdNativeId, height);
    }

    public final void setPreferredSize(const(QSizeF) size) {
        qtd_QGraphicsWidget_setPreferredSize_QSizeF(qtdNativeId, size);
    }

    public final void setPreferredSize(double w, double h) {
        qtd_QGraphicsWidget_setPreferredSize_double_double(qtdNativeId, w, h);
    }

    public final void setPreferredWidth(double width) {
        qtd_QGraphicsWidget_setPreferredWidth_double(qtdNativeId, width);
    }

    public final void setShortcutAutoRepeat(int id, bool enabled = true) {
        qtd_QGraphicsWidget_setShortcutAutoRepeat_int_bool(qtdNativeId, id, enabled);
    }

    public final void setShortcutEnabled(int id, bool enabled = true) {
        qtd_QGraphicsWidget_setShortcutEnabled_int_bool(qtdNativeId, id, enabled);
    }

    public final void setSizePolicy(QSizePolicy.Policy hPolicy, QSizePolicy.Policy vPolicy, QSizePolicy.ControlType controlType = QSizePolicy.ControlType.DefaultType) {
        qtd_QGraphicsWidget_setSizePolicy_Policy_Policy_ControlType(qtdNativeId, hPolicy, vPolicy, controlType);
    }

    public final void setSizePolicy(const(QSizePolicy) policy) {
        qtd_QGraphicsWidget_setSizePolicy_QSizePolicy(qtdNativeId, policy is null ? null : (cast(QSizePolicy)policy).qtdNativeId);
    }

    public final void setStyle(QStyle style) {
        {
            __rcStyle = cast(Object) style;
        }
        qtd_QGraphicsWidget_setStyle_QStyle(qtdNativeId, style is null ? null : style.qtdNativeId);
    }

    public final void setWindowFlags(int wFlags) {
        qtd_QGraphicsWidget_setWindowFlags_WindowFlags(qtdNativeId, wFlags);
    }

    public final void setWindowFrameMargins(double left, double top, double right, double bottom) {
        qtd_QGraphicsWidget_setWindowFrameMargins_double_double_double_double(qtdNativeId, left, top, right, bottom);
    }

    public final void setWindowTitle(string title) {
        qtd_QGraphicsWidget_setWindowTitle_string(qtdNativeId, title);
    }

    public final QSizeF size() const {
        QSizeF res;
        qtd_QGraphicsWidget_size_const(qtdNativeId, &res);
        return res;
    }

    public final QSizePolicy sizePolicy() const {
        void* ret = qtd_QGraphicsWidget_sizePolicy_const(qtdNativeId);
        QSizePolicy __d_return_value = new QSizePolicy(ret);
        return __d_return_value;
    }

    public final QStyle style() const {
        void *ret = qtd_QGraphicsWidget_style_const(qtdNativeId);
        QStyle __d_return_value = QStyle.__getObject(ret);
        return __d_return_value;
    }

    public final bool testAttribute(Qt.WidgetAttribute attribute) const {
        return qtd_QGraphicsWidget_testAttribute_WidgetAttribute_const(qtdNativeId, attribute);
    }

    public final void unsetLayoutDirection() {
        qtd_QGraphicsWidget_unsetLayoutDirection(qtdNativeId);
    }

    public final void unsetWindowFrameMargins() {
        qtd_QGraphicsWidget_unsetWindowFrameMargins(qtdNativeId);
    }

    public final int windowFlags() const {
        return qtd_QGraphicsWidget_windowFlags_const(qtdNativeId);
    }

    public final QRectF windowFrameGeometry() const {
        QRectF res;
        qtd_QGraphicsWidget_windowFrameGeometry_const(qtdNativeId, &res);
        return res;
    }

    public final QRectF windowFrameRect() const {
        QRectF res;
        qtd_QGraphicsWidget_windowFrameRect_const(qtdNativeId, &res);
        return res;
    }

    public final string windowTitle() const {
        string res;
        qtd_QGraphicsWidget_windowTitle_const(qtdNativeId, &res);
        return res;
    }

    public final Qt.WindowType windowType() const {
        return cast(Qt.WindowType) qtd_QGraphicsWidget_windowType_const(qtdNativeId);
    }

    public QRectF boundingRect() const {
        QRectF res;
        qtd_QGraphicsWidget_boundingRect_const(qtdNativeId, &res);
        return res;
    }

    protected void changeEvent(QEvent event) {
        qtd_QGraphicsWidget_changeEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void closeEvent(QCloseEvent event) {
        qtd_QGraphicsWidget_closeEvent_QCloseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public bool event(QEvent event) {
        return qtd_QGraphicsWidget_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void focusInEvent(QFocusEvent event) {
        qtd_QGraphicsWidget_focusInEvent_QFocusEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected bool focusNextPrevChild(bool next) {
        return qtd_QGraphicsWidget_focusNextPrevChild_bool(qtdNativeId, next);
    }

    public void focusOutEvent(QFocusEvent event) {
        qtd_QGraphicsWidget_focusOutEvent_QFocusEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void grabKeyboardEvent(QEvent event) {
        qtd_QGraphicsWidget_grabKeyboardEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void grabMouseEvent(QEvent event) {
        qtd_QGraphicsWidget_grabMouseEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void hideEvent(QHideEvent event) {
        qtd_QGraphicsWidget_hideEvent_QHideEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void hoverLeaveEvent(QGraphicsSceneHoverEvent event) {
        qtd_QGraphicsWidget_hoverLeaveEvent_QGraphicsSceneHoverEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void hoverMoveEvent(QGraphicsSceneHoverEvent event) {
        qtd_QGraphicsWidget_hoverMoveEvent_QGraphicsSceneHoverEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void initStyleOption(QStyleOption option) const {
        qtd_QGraphicsWidget_initStyleOption_nativepointerQStyleOption_const(qtdNativeId, option is null ? null : option.qtdNativeId);
    }

    public QVariant itemChange(QGraphicsItem.GraphicsItemChange change, QVariant value) {
        void* ret = qtd_QGraphicsWidget_itemChange_GraphicsItemChange_QVariant(qtdNativeId, change, value is null ? null : value.qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    protected void moveEvent(QGraphicsSceneMoveEvent event) {
        qtd_QGraphicsWidget_moveEvent_QGraphicsSceneMoveEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void paint(QPainter painter, QStyleOptionGraphicsItem option, QWidget widget = null) {
        qtd_QGraphicsWidget_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget(qtdNativeId, painter is null ? null : painter.qtdNativeId, option is null ? null : (cast(QStyleOptionGraphicsItem)option).qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public void paintWindowFrame(QPainter painter, QStyleOptionGraphicsItem option, QWidget widget = null) {
        qtd_QGraphicsWidget_paintWindowFrame_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget(qtdNativeId, painter is null ? null : painter.qtdNativeId, option is null ? null : (cast(QStyleOptionGraphicsItem)option).qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    protected void polishEvent() {
        qtd_QGraphicsWidget_polishEvent(qtdNativeId);
    }

    protected QVariant propertyChange(string propertyName, QVariant value) {
        void* ret = qtd_QGraphicsWidget_propertyChange_string_QVariant(qtdNativeId, propertyName, value is null ? null : value.qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    protected void resizeEvent(QGraphicsSceneResizeEvent event) {
        qtd_QGraphicsWidget_resizeEvent_QGraphicsSceneResizeEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public bool sceneEvent(QEvent event) {
        return qtd_QGraphicsWidget_sceneEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void setGeometry(const(QRectF) rect) {
        qtd_QGraphicsWidget_setGeometry_QRectF(qtdNativeId, rect);
    }

    public QPainterPath shape() const {
        void* ret = qtd_QGraphicsWidget_shape_const(qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    protected void showEvent(QShowEvent event) {
        qtd_QGraphicsWidget_showEvent_QShowEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QSizeF sizeHint(Qt.SizeHint which, const(QSizeF) constraint = QSizeF()) const {
        QSizeF res;
        qtd_QGraphicsWidget_sizeHint_SizeHint_QSizeF_const(qtdNativeId, &res, which, constraint);
        return res;
    }

    public int type() const {
        return qtd_QGraphicsWidget_type_const(qtdNativeId);
    }

    protected void ungrabKeyboardEvent(QEvent event) {
        qtd_QGraphicsWidget_ungrabKeyboardEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void ungrabMouseEvent(QEvent event) {
        qtd_QGraphicsWidget_ungrabMouseEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void updateGeometry() {
        qtd_QGraphicsWidget_updateGeometry(qtdNativeId);
    }

    protected bool windowFrameEvent(QEvent e) {
        return qtd_QGraphicsWidget_windowFrameEvent_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected Qt.WindowFrameSection windowFrameSectionAt(const(QPointF) pos) const {
        return cast(Qt.WindowFrameSection) qtd_QGraphicsWidget_windowFrameSectionAt_QPointF_const(qtdNativeId, pos);
    }

    public static void setTabOrder(QGraphicsWidget first, QGraphicsWidget second) {
        qtd_QGraphicsWidget_setTabOrder_QGraphicsWidget_QGraphicsWidget(first is null ? null : first.qtdNativeId, second is null ? null : second.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "close()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QGraphicsWidget_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QGraphicsWidget);
    }

    static QGraphicsWidget __getObject(void* nativeId) {
        return static_cast!(QGraphicsWidget)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QGraphicsWidget_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QGraphicsWidget_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QGraphicsWidget(nativeId, initFlags);
        QGraphicsWidget.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("geometryChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!()("layoutChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("close"), index));

    }

    public alias void __isQtType_QGraphicsWidget;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQGraphicsLayoutItem = qtd_QGraphicsWidget_cast_to_QGraphicsLayoutItem(nativeId);
    }

    private void* __m_ptr_IQGraphicsLayoutItem;
    public void* __ptr_IQGraphicsLayoutItem() { return __m_ptr_IQGraphicsLayoutItem; }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QGraphicsWidget_cast_to_QGraphicsLayoutItem(void* nativeId);

// C wrappers for signal emitters
private extern(C) void  qtd_QGraphicsWidget_geometryChanged(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsWidget_layoutChanged(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QGraphicsWidget_QGraphicsWidget_QGraphicsItem_WindowFlags(void *d_ptr,
 void* parent0,
 int wFlags1);
private extern(C) void  qtd_QGraphicsWidget_actions_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QGraphicsWidget_addAction_QAction(void* __this_nativeId,
 void* action0);
private extern(C) void  qtd_QGraphicsWidget_addActions_QList(void* __this_nativeId,
 void* actions0);
private extern(C) void  qtd_QGraphicsWidget_adjustSize(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsWidget_autoFillBackground_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsWidget_close(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsWidget_contentsRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void  qtd_QGraphicsWidget_effectiveSizeHint_SizeHint_QSizeF_const(void* __this_nativeId,
 QSizeF * __d_return_value,
 int which0,
 QSizeF constraint1);
private extern(C) int  qtd_QGraphicsWidget_focusPolicy_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsWidget_focusWidget_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsWidget_font_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsWidget_geometry_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void  qtd_QGraphicsWidget_getContentsMargins_nativepointerdouble_nativepointerdouble_nativepointerdouble_nativepointerdouble_const(void* __this_nativeId,
 double* left0,
 double* top1,
 double* right2,
 double* bottom3);
private extern(C) void  qtd_QGraphicsWidget_getWindowFrameMargins_nativepointerdouble_nativepointerdouble_nativepointerdouble_nativepointerdouble_const(void* __this_nativeId,
 double* left0,
 double* top1,
 double* right2,
 double* bottom3);
private extern(C) int  qtd_QGraphicsWidget_grabShortcut_QKeySequence_ShortcutContext(void* __this_nativeId,
 void* sequence0,
 int context1);
private extern(C) void*  qtd_QGraphicsWidget_graphicsItem_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsWidget_insertAction_QAction_QAction(void* __this_nativeId,
 void* before0,
 void* action1);
private extern(C) void  qtd_QGraphicsWidget_insertActions_QAction_QList(void* __this_nativeId,
 void* before0,
 void* actions1);
private extern(C) bool  qtd_QGraphicsWidget_isActiveWindow_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsWidget_isLayout_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsWidget_layout_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsWidget_layoutDirection_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsWidget_maximumHeight_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsWidget_maximumSize_const(void* __this_nativeId,
 QSizeF * __d_return_value);
private extern(C) double  qtd_QGraphicsWidget_maximumWidth_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsWidget_minimumHeight_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsWidget_minimumSize_const(void* __this_nativeId,
 QSizeF * __d_return_value);
private extern(C) double  qtd_QGraphicsWidget_minimumWidth_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsWidget_ownedByLayout_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsWidget_palette_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsWidget_parentLayoutItem_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsWidget_preferredHeight_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsWidget_preferredSize_const(void* __this_nativeId,
 QSizeF * __d_return_value);
private extern(C) double  qtd_QGraphicsWidget_preferredWidth_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsWidget_rect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void  qtd_QGraphicsWidget_releaseShortcut_int(void* __this_nativeId,
 int id0);
private extern(C) void  qtd_QGraphicsWidget_removeAction_QAction(void* __this_nativeId,
 void* action0);
private extern(C) void  qtd_QGraphicsWidget_resize_QSizeF(void* __this_nativeId,
 QSizeF size0);
private extern(C) void  qtd_QGraphicsWidget_resize_double_double(void* __this_nativeId,
 double w0,
 double h1);
private extern(C) void  qtd_QGraphicsWidget_setAttribute_WidgetAttribute_bool(void* __this_nativeId,
 int attribute0,
 bool on1);
private extern(C) void  qtd_QGraphicsWidget_setAutoFillBackground_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QGraphicsWidget_setContentsMargins_double_double_double_double(void* __this_nativeId,
 double left0,
 double top1,
 double right2,
 double bottom3);
private extern(C) void  qtd_QGraphicsWidget_setFocusPolicy_FocusPolicy(void* __this_nativeId,
 int policy0);
private extern(C) void  qtd_QGraphicsWidget_setFont_QFont(void* __this_nativeId,
 void* font0);
private extern(C) void  qtd_QGraphicsWidget_setGeometry_double_double_double_double(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void  qtd_QGraphicsWidget_setGraphicsItem_QGraphicsItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QGraphicsWidget_setLayout_QGraphicsLayout(void* __this_nativeId,
 void* layout0);
private extern(C) void  qtd_QGraphicsWidget_setLayoutDirection_LayoutDirection(void* __this_nativeId,
 int direction0);
private extern(C) void  qtd_QGraphicsWidget_setMaximumHeight_double(void* __this_nativeId,
 double height0);
private extern(C) void  qtd_QGraphicsWidget_setMaximumSize_QSizeF(void* __this_nativeId,
 QSizeF size0);
private extern(C) void  qtd_QGraphicsWidget_setMaximumSize_double_double(void* __this_nativeId,
 double w0,
 double h1);
private extern(C) void  qtd_QGraphicsWidget_setMaximumWidth_double(void* __this_nativeId,
 double width0);
private extern(C) void  qtd_QGraphicsWidget_setMinimumHeight_double(void* __this_nativeId,
 double height0);
private extern(C) void  qtd_QGraphicsWidget_setMinimumSize_QSizeF(void* __this_nativeId,
 QSizeF size0);
private extern(C) void  qtd_QGraphicsWidget_setMinimumSize_double_double(void* __this_nativeId,
 double w0,
 double h1);
private extern(C) void  qtd_QGraphicsWidget_setMinimumWidth_double(void* __this_nativeId,
 double width0);
private extern(C) void  qtd_QGraphicsWidget_setOwnedByLayout_bool(void* __this_nativeId,
 bool ownedByLayout0);
private extern(C) void  qtd_QGraphicsWidget_setPalette_QPalette(void* __this_nativeId,
 void* palette0);
private extern(C) void  qtd_QGraphicsWidget_setParentLayoutItem_QGraphicsLayoutItem(void* __this_nativeId,
 void* parent0);
private extern(C) void  qtd_QGraphicsWidget_setPreferredHeight_double(void* __this_nativeId,
 double height0);
private extern(C) void  qtd_QGraphicsWidget_setPreferredSize_QSizeF(void* __this_nativeId,
 QSizeF size0);
private extern(C) void  qtd_QGraphicsWidget_setPreferredSize_double_double(void* __this_nativeId,
 double w0,
 double h1);
private extern(C) void  qtd_QGraphicsWidget_setPreferredWidth_double(void* __this_nativeId,
 double width0);
private extern(C) void  qtd_QGraphicsWidget_setShortcutAutoRepeat_int_bool(void* __this_nativeId,
 int id0,
 bool enabled1);
private extern(C) void  qtd_QGraphicsWidget_setShortcutEnabled_int_bool(void* __this_nativeId,
 int id0,
 bool enabled1);
private extern(C) void  qtd_QGraphicsWidget_setSizePolicy_Policy_Policy_ControlType(void* __this_nativeId,
 int hPolicy0,
 int vPolicy1,
 int controlType2);
private extern(C) void  qtd_QGraphicsWidget_setSizePolicy_QSizePolicy(void* __this_nativeId,
 void* policy0);
private extern(C) void  qtd_QGraphicsWidget_setStyle_QStyle(void* __this_nativeId,
 void* style0);
private extern(C) void  qtd_QGraphicsWidget_setWindowFlags_WindowFlags(void* __this_nativeId,
 int wFlags0);
private extern(C) void  qtd_QGraphicsWidget_setWindowFrameMargins_double_double_double_double(void* __this_nativeId,
 double left0,
 double top1,
 double right2,
 double bottom3);
private extern(C) void  qtd_QGraphicsWidget_setWindowTitle_string(void* __this_nativeId,
 string title0);
private extern(C) void  qtd_QGraphicsWidget_size_const(void* __this_nativeId,
 QSizeF * __d_return_value);
private extern(C) void*  qtd_QGraphicsWidget_sizePolicy_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsWidget_style_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsWidget_testAttribute_WidgetAttribute_const(void* __this_nativeId,
 int attribute0);
private extern(C) void  qtd_QGraphicsWidget_unsetLayoutDirection(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsWidget_unsetWindowFrameMargins(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsWidget_windowFlags_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsWidget_windowFrameGeometry_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void  qtd_QGraphicsWidget_windowFrameRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void  qtd_QGraphicsWidget_windowTitle_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QGraphicsWidget_windowType_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsWidget_boundingRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void  qtd_QGraphicsWidget_changeEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsWidget_closeEvent_QCloseEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QGraphicsWidget_event_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsWidget_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QGraphicsWidget_focusNextPrevChild_bool(void* __this_nativeId,
 bool next0);
private extern(C) void  qtd_QGraphicsWidget_focusOutEvent_QFocusEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsWidget_grabKeyboardEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsWidget_grabMouseEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsWidget_hideEvent_QHideEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsWidget_hoverLeaveEvent_QGraphicsSceneHoverEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsWidget_hoverMoveEvent_QGraphicsSceneHoverEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsWidget_initStyleOption_nativepointerQStyleOption_const(void* __this_nativeId,
 void* option0);
private extern(C) void*  qtd_QGraphicsWidget_itemChange_GraphicsItemChange_QVariant(void* __this_nativeId,
 int change0,
 void* value1);
private extern(C) void  qtd_QGraphicsWidget_moveEvent_QGraphicsSceneMoveEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsWidget_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget(void* __this_nativeId,
 void* painter0,
 void* option1,
 void* widget2);
private extern(C) void  qtd_QGraphicsWidget_paintWindowFrame_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget(void* __this_nativeId,
 void* painter0,
 void* option1,
 void* widget2);
private extern(C) void  qtd_QGraphicsWidget_polishEvent(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsWidget_propertyChange_string_QVariant(void* __this_nativeId,
 string propertyName0,
 void* value1);
private extern(C) void  qtd_QGraphicsWidget_resizeEvent_QGraphicsSceneResizeEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QGraphicsWidget_sceneEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsWidget_setGeometry_QRectF(void* __this_nativeId,
 QRectF rect0);
private extern(C) void*  qtd_QGraphicsWidget_shape_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsWidget_showEvent_QShowEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsWidget_sizeHint_SizeHint_QSizeF_const(void* __this_nativeId,
 QSizeF * __d_return_value,
 int which0,
 QSizeF constraint1);
private extern(C) int  qtd_QGraphicsWidget_type_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsWidget_ungrabKeyboardEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsWidget_ungrabMouseEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsWidget_updateGeometry(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsWidget_windowFrameEvent_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) int  qtd_QGraphicsWidget_windowFrameSectionAt_QPointF_const(void* __this_nativeId,
 QPointF pos0);
private extern(C) void  qtd_QGraphicsWidget_setTabOrder_QGraphicsWidget_QGraphicsWidget(void* first0,
 void* second1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsWidget_changeEvent_QEvent_dispatch; }
extern(C) void qtd_export_QGraphicsWidget_changeEvent_QEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsWidget) dId;
    scope event0_d_ref = new QEvent(event0, QtdObjectInitFlags.onStack);
    d_object.changeEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsWidget_closeEvent_QCloseEvent_dispatch; }
extern(C) void qtd_export_QGraphicsWidget_closeEvent_QCloseEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsWidget) dId;
    scope event0_d_ref = new QCloseEvent(event0, QtdObjectInitFlags.onStack);
    d_object.closeEvent(event0_d_ref);
}

extern(C){ extern bool function(void *dId, bool next0) qtd_QGraphicsWidget_focusNextPrevChild_bool_dispatch; }
extern(C) bool qtd_export_QGraphicsWidget_focusNextPrevChild_bool_dispatch(void *dId, bool next0){
    auto d_object = cast(QGraphicsWidget) dId;
    auto return_value = d_object.focusNextPrevChild(next0);
    return return_value;
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsWidget_grabKeyboardEvent_QEvent_dispatch; }
extern(C) void qtd_export_QGraphicsWidget_grabKeyboardEvent_QEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsWidget) dId;
    scope event0_d_ref = new QEvent(event0, QtdObjectInitFlags.onStack);
    d_object.grabKeyboardEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsWidget_grabMouseEvent_QEvent_dispatch; }
extern(C) void qtd_export_QGraphicsWidget_grabMouseEvent_QEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsWidget) dId;
    scope event0_d_ref = new QEvent(event0, QtdObjectInitFlags.onStack);
    d_object.grabMouseEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsWidget_hideEvent_QHideEvent_dispatch; }
extern(C) void qtd_export_QGraphicsWidget_hideEvent_QHideEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsWidget) dId;
    scope event0_d_ref = new QHideEvent(event0, QtdObjectInitFlags.onStack);
    d_object.hideEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* option0) qtd_QGraphicsWidget_initStyleOption_nativepointerQStyleOption_const_dispatch; }
extern(C) void qtd_export_QGraphicsWidget_initStyleOption_nativepointerQStyleOption_const_dispatch(void *dId, void* option0){
    auto d_object = cast(QGraphicsWidget) dId;
    scope option0_d_ref = new QStyleOption(option0, QtdObjectInitFlags.onStack);
    d_object.initStyleOption(option0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsWidget_moveEvent_QGraphicsSceneMoveEvent_dispatch; }
extern(C) void qtd_export_QGraphicsWidget_moveEvent_QGraphicsSceneMoveEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsWidget) dId;
    scope event0_d_ref = new QGraphicsSceneMoveEvent(event0, QtdObjectInitFlags.onStack);
    d_object.moveEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* painter0, void* option1, void* widget2) qtd_QGraphicsWidget_paintWindowFrame_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch; }
extern(C) void qtd_export_QGraphicsWidget_paintWindowFrame_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch(void *dId, void* painter0, void* option1, void* widget2){
    auto d_object = cast(QGraphicsWidget) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    scope option1_d_ref = new QStyleOptionGraphicsItem(option1, QtdObjectInitFlags.onStack);
    scope widget2_d_ref = new QWidget(widget2, QtdObjectInitFlags.onStack);

    d_object.paintWindowFrame(painter0_d_ref, option1_d_ref, widget2_d_ref);
}

extern(C){ extern void function(void *dId) qtd_QGraphicsWidget_polishEvent_dispatch; }
extern(C) void qtd_export_QGraphicsWidget_polishEvent_dispatch(void *dId){
    auto d_object = cast(QGraphicsWidget) dId;
    d_object.polishEvent();
}

extern(C){ extern void* function(void *dId, wchar* propertyName0, int propertyName0_size, void* value1) qtd_QGraphicsWidget_propertyChange_string_QVariant_dispatch; }
extern(C) void* qtd_export_QGraphicsWidget_propertyChange_string_QVariant_dispatch(void *dId, wchar* propertyName0, int propertyName0_size, void* value1){
    auto d_object = cast(QGraphicsWidget) dId;
    string propertyName0_d_ref = toUTF8(propertyName0[0..propertyName0_size]);
    scope value1_d_ref = new QVariant(value1, QtdObjectInitFlags.onStack);
    QVariant ret_value = d_object.propertyChange(propertyName0_d_ref, value1_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsWidget_resizeEvent_QGraphicsSceneResizeEvent_dispatch; }
extern(C) void qtd_export_QGraphicsWidget_resizeEvent_QGraphicsSceneResizeEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsWidget) dId;
    scope event0_d_ref = new QGraphicsSceneResizeEvent(event0, QtdObjectInitFlags.onStack);
    d_object.resizeEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsWidget_showEvent_QShowEvent_dispatch; }
extern(C) void qtd_export_QGraphicsWidget_showEvent_QShowEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsWidget) dId;
    scope event0_d_ref = new QShowEvent(event0, QtdObjectInitFlags.onStack);
    d_object.showEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsWidget_ungrabKeyboardEvent_QEvent_dispatch; }
extern(C) void qtd_export_QGraphicsWidget_ungrabKeyboardEvent_QEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsWidget) dId;
    scope event0_d_ref = new QEvent(event0, QtdObjectInitFlags.onStack);
    d_object.ungrabKeyboardEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsWidget_ungrabMouseEvent_QEvent_dispatch; }
extern(C) void qtd_export_QGraphicsWidget_ungrabMouseEvent_QEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsWidget) dId;
    scope event0_d_ref = new QEvent(event0, QtdObjectInitFlags.onStack);
    d_object.ungrabMouseEvent(event0_d_ref);
}

extern(C){ extern bool function(void *dId, void* e0) qtd_QGraphicsWidget_windowFrameEvent_QEvent_dispatch; }
extern(C) bool qtd_export_QGraphicsWidget_windowFrameEvent_QEvent_dispatch(void *dId, void* e0){
    auto d_object = cast(QGraphicsWidget) dId;
    scope e0_d_ref = new QEvent(e0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.windowFrameEvent(e0_d_ref);
    return return_value;
}

extern(C){ extern int function(void *dId, QPointF* pos0) qtd_QGraphicsWidget_windowFrameSectionAt_QPointF_const_dispatch; }
extern(C) int qtd_export_QGraphicsWidget_windowFrameSectionAt_QPointF_const_dispatch(void *dId, QPointF* pos0){
    auto d_object = cast(QGraphicsWidget) dId;
    auto return_value = d_object.windowFrameSectionAt(*pos0);
    return return_value;
}

private extern (C) void qtd_QGraphicsWidget_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsWidget() {
    void*[17] virt_arr;
    virt_arr[0] = &qtd_export_QGraphicsWidget_changeEvent_QEvent_dispatch;
    virt_arr[1] = &qtd_export_QGraphicsWidget_closeEvent_QCloseEvent_dispatch;
    virt_arr[2] = &qtd_export_QGraphicsWidget_focusNextPrevChild_bool_dispatch;
    virt_arr[3] = &qtd_export_QGraphicsWidget_grabKeyboardEvent_QEvent_dispatch;
    virt_arr[4] = &qtd_export_QGraphicsWidget_grabMouseEvent_QEvent_dispatch;
    virt_arr[5] = &qtd_export_QGraphicsWidget_hideEvent_QHideEvent_dispatch;
    virt_arr[6] = &qtd_export_QGraphicsWidget_initStyleOption_nativepointerQStyleOption_const_dispatch;
    virt_arr[7] = &qtd_export_QGraphicsWidget_moveEvent_QGraphicsSceneMoveEvent_dispatch;
    virt_arr[8] = &qtd_export_QGraphicsWidget_paintWindowFrame_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch;
    virt_arr[9] = &qtd_export_QGraphicsWidget_polishEvent_dispatch;
    virt_arr[10] = &qtd_export_QGraphicsWidget_propertyChange_string_QVariant_dispatch;
    virt_arr[11] = &qtd_export_QGraphicsWidget_resizeEvent_QGraphicsSceneResizeEvent_dispatch;
    virt_arr[12] = &qtd_export_QGraphicsWidget_showEvent_QShowEvent_dispatch;
    virt_arr[13] = &qtd_export_QGraphicsWidget_ungrabKeyboardEvent_QEvent_dispatch;
    virt_arr[14] = &qtd_export_QGraphicsWidget_ungrabMouseEvent_QEvent_dispatch;
    virt_arr[15] = &qtd_export_QGraphicsWidget_windowFrameEvent_QEvent_dispatch;
    virt_arr[16] = &qtd_export_QGraphicsWidget_windowFrameSectionAt_QPointF_const_dispatch;
    qtd_QGraphicsWidget_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QGraphicsWidget_childrenChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsWidget) dId;
        //d_object.childrenChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsWidget_enabledChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsWidget) dId;
        //d_object.enabledChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsWidget_heightChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsWidget) dId;
        //d_object.heightChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsWidget_opacityChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsWidget) dId;
        //d_object.opacityChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsWidget_parentChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsWidget) dId;
        //d_object.parentChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsWidget_rotationChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsWidget) dId;
        //d_object.rotationChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsWidget_scaleChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsWidget) dId;
        //d_object.scaleChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsWidget_visibleChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsWidget) dId;
        //d_object.visibleChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsWidget_widthChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsWidget) dId;
        //d_object.widthChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsWidget_xChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsWidget) dId;
        //d_object.xChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsWidget_yChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsWidget) dId;
        //d_object.yChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsWidget_zChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsWidget) dId;
        //d_object.zChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsWidget_geometryChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsWidget) dId;
        //d_object.geometryChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsWidget_layoutChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsWidget) dId;
        //d_object.layoutChanged_emit();
}*/

extern(C) QMetaObjectNative* qtd_QGraphicsWidget_staticMetaObject();

extern(C) void qtd_QGraphicsWidget_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QGraphicsWidget_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
