module qt.gui.QHeaderView;

public import qt.gui.QHeaderView_aux;
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
public import qt.gui.QAbstractItemDelegate;
public import qt.gui.QAbstractItemView;
public import qt.gui.QPaintDevice;
public import qt.gui.QDropEvent;
public import qt.core.QAbstractItemModel;
public import qt.gui.QItemSelectionModel;
public import qt.gui.QHideEvent;
public import qt.gui.QStyleOptionHeader;
public import qt.core.QPoint;
public import qt.core.QTimerEvent;
public import qt.core.QModelIndex;
public import qt.core.QChildEvent;
public import qt.gui.QKeyEvent;
public import qt.gui.QAbstractItemView;
public import qt.core.QObject;
public import qt.gui.QPainter;
public import qt.gui.QResizeEvent;
public import qt.core.QByteArray;
public import qt.gui.QPaintEngine;
public import qt.core.QList;
public import qt.core.QEvent;
public import qt.gui.QActionEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QWheelEvent;
public import qt.gui.QItemSelection;
public import qt.gui.QCloseEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QTabletEvent;
public import qt.core.QRect;
public import qt.gui.QInputMethodEvent;
public import qt.core.QSize;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QStyleOptionViewItem;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.gui.QMoveEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QWidget;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QRegion;
public import qt.gui.QDragLeaveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QHeaderView : QAbstractItemView
{
    public enum ResizeMode {
        Interactive = 0,
        Stretch = 1,
        Fixed = 2,
        ResizeToContents = 3
    }

    alias ResizeMode.Interactive Interactive;
    alias ResizeMode.Stretch Stretch;
    alias ResizeMode.Fixed Fixed;
    alias ResizeMode.ResizeToContents ResizeToContents;


    private static const string[] __signalSignatures = [
            "geometriesChanged()", 
            "sectionAutoResize(int,QHeaderView::ResizeMode)", 
            "sectionClicked(int)", 
            "sectionCountChanged(int,int)", 
            "sectionDoubleClicked(int)", 
            "sectionEntered(int)", 
            "sectionHandleDoubleClicked(int)", 
            "sectionMoved(int,int,int)", 
            "sectionPressed(int)", 
            "sectionResized(int,int,int)", 
            "sortIndicatorChanged(int,Qt::SortOrder)"    ];

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

    protected final void geometriesChanged() {
        qtd_QHeaderView_geometriesChanged(qtdNativeId);
    }

    protected final void sectionAutoResize(int logicalIndex, QHeaderView.ResizeMode mode) {
        qtd_QHeaderView_sectionAutoResize_int_ResizeMode(qtdNativeId, logicalIndex, mode);
    }

    protected final void sectionClicked(int logicalIndex) {
        qtd_QHeaderView_sectionClicked_int(qtdNativeId, logicalIndex);
    }

    protected final void sectionCountChanged(int oldCount, int newCount) {
        qtd_QHeaderView_sectionCountChanged_int_int(qtdNativeId, oldCount, newCount);
    }

    protected final void sectionDoubleClicked(int logicalIndex) {
        qtd_QHeaderView_sectionDoubleClicked_int(qtdNativeId, logicalIndex);
    }

    protected final void sectionEntered(int logicalIndex) {
        qtd_QHeaderView_sectionEntered_int(qtdNativeId, logicalIndex);
    }

    protected final void sectionHandleDoubleClicked(int logicalIndex) {
        qtd_QHeaderView_sectionHandleDoubleClicked_int(qtdNativeId, logicalIndex);
    }

    protected final void sectionMoved(int logicalIndex, int oldVisualIndex, int newVisualIndex) {
        qtd_QHeaderView_sectionMoved_int_int_int(qtdNativeId, logicalIndex, oldVisualIndex, newVisualIndex);
    }

    protected final void sectionPressed(int logicalIndex) {
        qtd_QHeaderView_sectionPressed_int(qtdNativeId, logicalIndex);
    }

    protected final void sectionResized(int logicalIndex, int oldSize, int newSize) {
        qtd_QHeaderView_sectionResized_int_int_int(qtdNativeId, logicalIndex, oldSize, newSize);
    }

    protected final void sortIndicatorChanged(int logicalIndex, Qt.SortOrder order) {
        qtd_QHeaderView_sortIndicatorChanged_int_SortOrder(qtdNativeId, logicalIndex, order);
    }
// Functions

    public this(Qt.Orientation orientation, QWidget parent_ = null) {
        void* ret = qtd_QHeaderView_QHeaderView_Orientation_QWidget(cast(void*) this, orientation, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool cascadingSectionResizes() const {
        return qtd_QHeaderView_cascadingSectionResizes_const(qtdNativeId);
    }

    public final int count() const {
        return qtd_QHeaderView_count_const(qtdNativeId);
    }

    public final int defaultAlignment() const {
        return qtd_QHeaderView_defaultAlignment_const(qtdNativeId);
    }

    public final int defaultSectionSize() const {
        return qtd_QHeaderView_defaultSectionSize_const(qtdNativeId);
    }

    public final void headerDataChanged(Qt.Orientation orientation, int logicalFirst, int logicalLast) {
        qtd_QHeaderView_headerDataChanged_Orientation_int_int(qtdNativeId, orientation, logicalFirst, logicalLast);
    }

    public final int hiddenSectionCount() const {
        return qtd_QHeaderView_hiddenSectionCount_const(qtdNativeId);
    }

    public final void hideSection(int logicalIndex) {
        qtd_QHeaderView_hideSection_int(qtdNativeId, logicalIndex);
    }

    public final bool highlightSections() const {
        return qtd_QHeaderView_highlightSections_const(qtdNativeId);
    }

    protected final void initStyleOption(QStyleOptionHeader option) const {
        qtd_QHeaderView_initStyleOption_nativepointerQStyleOptionHeader_const(qtdNativeId, option is null ? null : option.qtdNativeId);
    }

    protected final void initialize() {
        qtd_QHeaderView_initialize(qtdNativeId);
    }

    protected final void initializeSections() {
        qtd_QHeaderView_initializeSections(qtdNativeId);
    }

    protected final void initializeSections(int start, int end) {
        qtd_QHeaderView_initializeSections_int_int(qtdNativeId, start, end);
    }

    public final bool isClickable() const {
        return qtd_QHeaderView_isClickable_const(qtdNativeId);
    }

    public final bool isMovable() const {
        return qtd_QHeaderView_isMovable_const(qtdNativeId);
    }

    public final bool isSectionHidden(int logicalIndex) const {
        return qtd_QHeaderView_isSectionHidden_int_const(qtdNativeId, logicalIndex);
    }

    public final bool isSortIndicatorShown() const {
        return qtd_QHeaderView_isSortIndicatorShown_const(qtdNativeId);
    }

    public final int length() const {
        return qtd_QHeaderView_length_const(qtdNativeId);
    }

    public final int logicalIndex(int visualIndex) const {
        return qtd_QHeaderView_logicalIndex_int_const(qtdNativeId, visualIndex);
    }

    public final int logicalIndexAt(const(QPoint) pos) const {
        return qtd_QHeaderView_logicalIndexAt_QPoint_const(qtdNativeId, pos);
    }

    public final int logicalIndexAt(int position) const {
        return qtd_QHeaderView_logicalIndexAt_int_const(qtdNativeId, position);
    }

    public final int logicalIndexAt(int x, int y) const {
        return qtd_QHeaderView_logicalIndexAt_int_int_const(qtdNativeId, x, y);
    }

    public final int minimumSectionSize() const {
        return qtd_QHeaderView_minimumSectionSize_const(qtdNativeId);
    }

    public final void moveSection(int from, int to) {
        qtd_QHeaderView_moveSection_int_int(qtdNativeId, from, to);
    }

    public final int offset() const {
        return qtd_QHeaderView_offset_const(qtdNativeId);
    }

    public final Qt.Orientation orientation() const {
        return cast(Qt.Orientation) qtd_QHeaderView_orientation_const(qtdNativeId);
    }

    public final QHeaderView.ResizeMode resizeMode(int logicalIndex) const {
        return cast(QHeaderView.ResizeMode) qtd_QHeaderView_resizeMode_int_const(qtdNativeId, logicalIndex);
    }

    public final void resizeSection(int logicalIndex, int size) {
        qtd_QHeaderView_resizeSection_int_int(qtdNativeId, logicalIndex, size);
    }

    protected final void resizeSections() {
        qtd_QHeaderView_resizeSections(qtdNativeId);
    }

    public final void resizeSections(QHeaderView.ResizeMode mode) {
        qtd_QHeaderView_resizeSections_ResizeMode(qtdNativeId, mode);
    }

    public final bool restoreState(const(QByteArray) state) {
        return qtd_QHeaderView_restoreState_QByteArray(qtdNativeId, state is null ? null : (cast(QByteArray)state).qtdNativeId);
    }

    public final QByteArray saveState() const {
        void* ret = qtd_QHeaderView_saveState_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final int sectionPosition(int logicalIndex) const {
        return qtd_QHeaderView_sectionPosition_int_const(qtdNativeId, logicalIndex);
    }

    public final int sectionSize(int logicalIndex) const {
        return qtd_QHeaderView_sectionSize_int_const(qtdNativeId, logicalIndex);
    }

    public final int sectionSizeHint(int logicalIndex) const {
        return qtd_QHeaderView_sectionSizeHint_int_const(qtdNativeId, logicalIndex);
    }

    public final int sectionViewportPosition(int logicalIndex) const {
        return qtd_QHeaderView_sectionViewportPosition_int_const(qtdNativeId, logicalIndex);
    }

    protected final void sectionsAboutToBeRemoved(const(QModelIndex) parent_, int logicalFirst, int logicalLast) {
        qtd_QHeaderView_sectionsAboutToBeRemoved_QModelIndex_int_int(qtdNativeId, parent_, logicalFirst, logicalLast);
    }

    public final bool sectionsHidden() const {
        return qtd_QHeaderView_sectionsHidden_const(qtdNativeId);
    }

    protected final void sectionsInserted(const(QModelIndex) parent_, int logicalFirst, int logicalLast) {
        qtd_QHeaderView_sectionsInserted_QModelIndex_int_int(qtdNativeId, parent_, logicalFirst, logicalLast);
    }

    public final bool sectionsMoved() const {
        return qtd_QHeaderView_sectionsMoved_const(qtdNativeId);
    }

    public final void setCascadingSectionResizes(bool enable) {
        qtd_QHeaderView_setCascadingSectionResizes_bool(qtdNativeId, enable);
    }

    public final void setClickable(bool clickable) {
        qtd_QHeaderView_setClickable_bool(qtdNativeId, clickable);
    }

    public final void setDefaultAlignment(int alignment) {
        qtd_QHeaderView_setDefaultAlignment_Alignment(qtdNativeId, alignment);
    }

    public final void setDefaultSectionSize(int size) {
        qtd_QHeaderView_setDefaultSectionSize_int(qtdNativeId, size);
    }

    public final void setHighlightSections(bool highlight) {
        qtd_QHeaderView_setHighlightSections_bool(qtdNativeId, highlight);
    }

    public final void setMinimumSectionSize(int size) {
        qtd_QHeaderView_setMinimumSectionSize_int(qtdNativeId, size);
    }

    public final void setMovable(bool movable) {
        qtd_QHeaderView_setMovable_bool(qtdNativeId, movable);
    }

    public final void setOffset(int offset) {
        qtd_QHeaderView_setOffset_int(qtdNativeId, offset);
    }

    public final void setOffsetToLastSection() {
        qtd_QHeaderView_setOffsetToLastSection(qtdNativeId);
    }

    public final void setOffsetToSectionPosition(int visualIndex) {
        qtd_QHeaderView_setOffsetToSectionPosition_int(qtdNativeId, visualIndex);
    }

    public final void setResizeMode(QHeaderView.ResizeMode mode) {
        qtd_QHeaderView_setResizeMode_ResizeMode(qtdNativeId, mode);
    }

    public final void setResizeMode(int logicalIndex, QHeaderView.ResizeMode mode) {
        qtd_QHeaderView_setResizeMode_int_ResizeMode(qtdNativeId, logicalIndex, mode);
    }

    public final void setSectionHidden(int logicalIndex, bool hide) {
        qtd_QHeaderView_setSectionHidden_int_bool(qtdNativeId, logicalIndex, hide);
    }

    public final void setSortIndicator(int logicalIndex, Qt.SortOrder order) {
        qtd_QHeaderView_setSortIndicator_int_SortOrder(qtdNativeId, logicalIndex, order);
    }

    public final void setSortIndicatorShown(bool show) {
        qtd_QHeaderView_setSortIndicatorShown_bool(qtdNativeId, show);
    }

    public final void setStretchLastSection(bool stretch) {
        qtd_QHeaderView_setStretchLastSection_bool(qtdNativeId, stretch);
    }

    public final void showSection(int logicalIndex) {
        qtd_QHeaderView_showSection_int(qtdNativeId, logicalIndex);
    }

    public final Qt.SortOrder sortIndicatorOrder() const {
        return cast(Qt.SortOrder) qtd_QHeaderView_sortIndicatorOrder_const(qtdNativeId);
    }

    public final int sortIndicatorSection() const {
        return qtd_QHeaderView_sortIndicatorSection_const(qtdNativeId);
    }

    public final bool stretchLastSection() const {
        return qtd_QHeaderView_stretchLastSection_const(qtdNativeId);
    }

    public final int stretchSectionCount() const {
        return qtd_QHeaderView_stretchSectionCount_const(qtdNativeId);
    }

    public final void swapSections(int first, int second) {
        qtd_QHeaderView_swapSections_int_int(qtdNativeId, first, second);
    }

    protected final void updateSection(int logicalIndex) {
        qtd_QHeaderView_updateSection_int(qtdNativeId, logicalIndex);
    }

    public final int visualIndex(int logicalIndex) const {
        return qtd_QHeaderView_visualIndex_int_const(qtdNativeId, logicalIndex);
    }

    public final int visualIndexAt(int position) const {
        return qtd_QHeaderView_visualIndexAt_int_const(qtdNativeId, position);
    }

    protected void currentChanged(const(QModelIndex) current, const(QModelIndex) old) {
        qtd_QHeaderView_currentChanged_QModelIndex_QModelIndex(qtdNativeId, current, old);
    }

    protected void dataChanged(const(QModelIndex) topLeft, const(QModelIndex) bottomRight) {
        qtd_QHeaderView_dataChanged_QModelIndex_QModelIndex(qtdNativeId, topLeft, bottomRight);
    }

    public void doItemsLayout() {
        qtd_QHeaderView_doItemsLayout(qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QHeaderView_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected int horizontalOffset() const {
        return qtd_QHeaderView_horizontalOffset_const(qtdNativeId);
    }

    public QModelIndex indexAt(const(QPoint) p) const {
        QModelIndex res;
        qtd_QHeaderView_indexAt_QPoint_const(qtdNativeId, &res, p);
        return res;
    }

    protected bool isIndexHidden(const(QModelIndex) index) const {
        return qtd_QHeaderView_isIndexHidden_QModelIndex_const(qtdNativeId, index);
    }

    protected void mouseDoubleClickEvent(QMouseEvent e) {
        qtd_QHeaderView_mouseDoubleClickEvent_QMouseEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void mouseMoveEvent(QMouseEvent e) {
        qtd_QHeaderView_mouseMoveEvent_QMouseEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent e) {
        qtd_QHeaderView_mousePressEvent_QMouseEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent e) {
        qtd_QHeaderView_mouseReleaseEvent_QMouseEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected QModelIndex moveCursor(QAbstractItemView.CursorAction arg__1, int arg__2) {
        QModelIndex res;
        qtd_QHeaderView_moveCursor_CursorAction_KeyboardModifiers(qtdNativeId, &res, arg__1, arg__2);
        return res;
    }

    protected void paintEvent(QPaintEvent e) {
        qtd_QHeaderView_paintEvent_QPaintEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void paintSection(QPainter painter, const(QRect) rect, int logicalIndex) const {
        qtd_QHeaderView_paintSection_QPainter_QRect_int_const(qtdNativeId, painter is null ? null : painter.qtdNativeId, rect, logicalIndex);
    }

    public void reset() {
        qtd_QHeaderView_reset(qtdNativeId);
    }

    protected void rowsInserted(const(QModelIndex) parent_, int start, int end) {
        qtd_QHeaderView_rowsInserted_QModelIndex_int_int(qtdNativeId, parent_, start, end);
    }

    protected void scrollContentsBy(int dx, int dy) {
        qtd_QHeaderView_scrollContentsBy_int_int(qtdNativeId, dx, dy);
    }

    public void scrollTo(const(QModelIndex) index, QAbstractItemView.ScrollHint hint) {
        qtd_QHeaderView_scrollTo_QModelIndex_ScrollHint(qtdNativeId, index, hint);
    }

    protected QSize sectionSizeFromContents(int logicalIndex) const {
        QSize res;
        qtd_QHeaderView_sectionSizeFromContents_int_const(qtdNativeId, &res, logicalIndex);
        return res;
    }

    public void setModel(QAbstractItemModel model) {
        {
            __rcItemModel = cast(Object) model;
        }
        qtd_QHeaderView_setModel_QAbstractItemModel(qtdNativeId, model is null ? null : model.qtdNativeId);
        // setModel() creates a new selection model for the object
        __rcItemSelectionModel = null;


    }

    protected void setSelection(const(QRect) rect, int flags) {
        qtd_QHeaderView_setSelection_QRect_SelectionFlags(qtdNativeId, rect, flags);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QHeaderView_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void updateGeometries() {
        qtd_QHeaderView_updateGeometries(qtdNativeId);
    }

    protected int verticalOffset() const {
        return qtd_QHeaderView_verticalOffset_const(qtdNativeId);
    }

    protected bool viewportEvent(QEvent e) {
        return qtd_QHeaderView_viewportEvent_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public QRect visualRect(const(QModelIndex) index) const {
        QRect res;
        qtd_QHeaderView_visualRect_QModelIndex_const(qtdNativeId, &res, index);
        return res;
    }

    protected QRegion visualRegionForSelection(const(QItemSelection) selection) const {
        void* ret = qtd_QHeaderView_visualRegionForSelection_QItemSelection_const(qtdNativeId, selection is null ? null : (cast(QItemSelection)selection).qtdNativeId);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "headerDataChanged(Qt::Orientation,int,int)", 
            "resizeSections()", 
            "sectionsAboutToBeRemoved(QModelIndex,int,int)", 
            "sectionsInserted(QModelIndex,int,int)", 
            "setOffset(int)", 
            "setOffsetToLastSection()", 
            "setOffsetToSectionPosition(int)", 
            "updateSection(int)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QHeaderView_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QHeaderView);
    }

    static QHeaderView __getObject(void* nativeId) {
        return static_cast!(QHeaderView)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QHeaderView_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QHeaderView_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QHeaderView(nativeId, initFlags);
        QHeaderView.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("geometriesChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int,QHeaderView.ResizeMode)("sectionAutoResize"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(int)("sectionClicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(int,int)("sectionCountChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(int)("sectionDoubleClicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!(int)("sectionEntered"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[6]);
        mo.addMethod(new QMetaSignal(signature!(int)("sectionHandleDoubleClicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[7]);
        mo.addMethod(new QMetaSignal(signature!(int,int,int)("sectionMoved"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[8]);
        mo.addMethod(new QMetaSignal(signature!(int)("sectionPressed"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[9]);
        mo.addMethod(new QMetaSignal(signature!(int,int,int)("sectionResized"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[10]);
        mo.addMethod(new QMetaSignal(signature!(int,Qt.SortOrder)("sortIndicatorChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(Qt.Orientation,int,int)("headerDataChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("resizeSections"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(const(QModelIndex),int,int)("sectionsAboutToBeRemoved"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(const(QModelIndex),int,int)("sectionsInserted"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(int)("setOffset"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!()("setOffsetToLastSection"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[6]);
        mo.addMethod(new QMetaSlot(signature!(int)("setOffsetToSectionPosition"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[7]);
        mo.addMethod(new QMetaSlot(signature!(int)("updateSection"), index));

    }

    public alias void __isQtType_QHeaderView;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QHeaderView_geometriesChanged(void* __this_nativeId);
private extern(C) void  qtd_QHeaderView_sectionAutoResize_int_ResizeMode(void* __this_nativeId,
 int logicalIndex0,
 int mode1);
private extern(C) void  qtd_QHeaderView_sectionClicked_int(void* __this_nativeId,
 int logicalIndex0);
private extern(C) void  qtd_QHeaderView_sectionCountChanged_int_int(void* __this_nativeId,
 int oldCount0,
 int newCount1);
private extern(C) void  qtd_QHeaderView_sectionDoubleClicked_int(void* __this_nativeId,
 int logicalIndex0);
private extern(C) void  qtd_QHeaderView_sectionEntered_int(void* __this_nativeId,
 int logicalIndex0);
private extern(C) void  qtd_QHeaderView_sectionHandleDoubleClicked_int(void* __this_nativeId,
 int logicalIndex0);
private extern(C) void  qtd_QHeaderView_sectionMoved_int_int_int(void* __this_nativeId,
 int logicalIndex0,
 int oldVisualIndex1,
 int newVisualIndex2);
private extern(C) void  qtd_QHeaderView_sectionPressed_int(void* __this_nativeId,
 int logicalIndex0);
private extern(C) void  qtd_QHeaderView_sectionResized_int_int_int(void* __this_nativeId,
 int logicalIndex0,
 int oldSize1,
 int newSize2);
private extern(C) void  qtd_QHeaderView_sortIndicatorChanged_int_SortOrder(void* __this_nativeId,
 int logicalIndex0,
 int order1);

// C wrappers
private extern(C) void* qtd_QHeaderView_QHeaderView_Orientation_QWidget(void *d_ptr,
 int orientation0,
 void* parent1);
private extern(C) bool  qtd_QHeaderView_cascadingSectionResizes_const(void* __this_nativeId);
private extern(C) int  qtd_QHeaderView_count_const(void* __this_nativeId);
private extern(C) int  qtd_QHeaderView_defaultAlignment_const(void* __this_nativeId);
private extern(C) int  qtd_QHeaderView_defaultSectionSize_const(void* __this_nativeId);
private extern(C) void  qtd_QHeaderView_headerDataChanged_Orientation_int_int(void* __this_nativeId,
 int orientation0,
 int logicalFirst1,
 int logicalLast2);
private extern(C) int  qtd_QHeaderView_hiddenSectionCount_const(void* __this_nativeId);
private extern(C) void  qtd_QHeaderView_hideSection_int(void* __this_nativeId,
 int logicalIndex0);
private extern(C) bool  qtd_QHeaderView_highlightSections_const(void* __this_nativeId);
private extern(C) void  qtd_QHeaderView_initStyleOption_nativepointerQStyleOptionHeader_const(void* __this_nativeId,
 void* option0);
private extern(C) void  qtd_QHeaderView_initialize(void* __this_nativeId);
private extern(C) void  qtd_QHeaderView_initializeSections(void* __this_nativeId);
private extern(C) void  qtd_QHeaderView_initializeSections_int_int(void* __this_nativeId,
 int start0,
 int end1);
private extern(C) bool  qtd_QHeaderView_isClickable_const(void* __this_nativeId);
private extern(C) bool  qtd_QHeaderView_isMovable_const(void* __this_nativeId);
private extern(C) bool  qtd_QHeaderView_isSectionHidden_int_const(void* __this_nativeId,
 int logicalIndex0);
private extern(C) bool  qtd_QHeaderView_isSortIndicatorShown_const(void* __this_nativeId);
private extern(C) int  qtd_QHeaderView_length_const(void* __this_nativeId);
private extern(C) int  qtd_QHeaderView_logicalIndex_int_const(void* __this_nativeId,
 int visualIndex0);
private extern(C) int  qtd_QHeaderView_logicalIndexAt_QPoint_const(void* __this_nativeId,
 QPoint pos0);
private extern(C) int  qtd_QHeaderView_logicalIndexAt_int_const(void* __this_nativeId,
 int position0);
private extern(C) int  qtd_QHeaderView_logicalIndexAt_int_int_const(void* __this_nativeId,
 int x0,
 int y1);
private extern(C) int  qtd_QHeaderView_minimumSectionSize_const(void* __this_nativeId);
private extern(C) void  qtd_QHeaderView_moveSection_int_int(void* __this_nativeId,
 int from0,
 int to1);
private extern(C) int  qtd_QHeaderView_offset_const(void* __this_nativeId);
private extern(C) int  qtd_QHeaderView_orientation_const(void* __this_nativeId);
private extern(C) int  qtd_QHeaderView_resizeMode_int_const(void* __this_nativeId,
 int logicalIndex0);
private extern(C) void  qtd_QHeaderView_resizeSection_int_int(void* __this_nativeId,
 int logicalIndex0,
 int size1);
private extern(C) void  qtd_QHeaderView_resizeSections(void* __this_nativeId);
private extern(C) void  qtd_QHeaderView_resizeSections_ResizeMode(void* __this_nativeId,
 int mode0);
private extern(C) bool  qtd_QHeaderView_restoreState_QByteArray(void* __this_nativeId,
 void* state0);
private extern(C) void*  qtd_QHeaderView_saveState_const(void* __this_nativeId);
private extern(C) int  qtd_QHeaderView_sectionPosition_int_const(void* __this_nativeId,
 int logicalIndex0);
private extern(C) int  qtd_QHeaderView_sectionSize_int_const(void* __this_nativeId,
 int logicalIndex0);
private extern(C) int  qtd_QHeaderView_sectionSizeHint_int_const(void* __this_nativeId,
 int logicalIndex0);
private extern(C) int  qtd_QHeaderView_sectionViewportPosition_int_const(void* __this_nativeId,
 int logicalIndex0);
private extern(C) void  qtd_QHeaderView_sectionsAboutToBeRemoved_QModelIndex_int_int(void* __this_nativeId,
 const(QModelIndexAccessor) parent0,
 int logicalFirst1,
 int logicalLast2);
private extern(C) bool  qtd_QHeaderView_sectionsHidden_const(void* __this_nativeId);
private extern(C) void  qtd_QHeaderView_sectionsInserted_QModelIndex_int_int(void* __this_nativeId,
 const(QModelIndexAccessor) parent0,
 int logicalFirst1,
 int logicalLast2);
private extern(C) bool  qtd_QHeaderView_sectionsMoved_const(void* __this_nativeId);
private extern(C) void  qtd_QHeaderView_setCascadingSectionResizes_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QHeaderView_setClickable_bool(void* __this_nativeId,
 bool clickable0);
private extern(C) void  qtd_QHeaderView_setDefaultAlignment_Alignment(void* __this_nativeId,
 int alignment0);
private extern(C) void  qtd_QHeaderView_setDefaultSectionSize_int(void* __this_nativeId,
 int size0);
private extern(C) void  qtd_QHeaderView_setHighlightSections_bool(void* __this_nativeId,
 bool highlight0);
private extern(C) void  qtd_QHeaderView_setMinimumSectionSize_int(void* __this_nativeId,
 int size0);
private extern(C) void  qtd_QHeaderView_setMovable_bool(void* __this_nativeId,
 bool movable0);
private extern(C) void  qtd_QHeaderView_setOffset_int(void* __this_nativeId,
 int offset0);
private extern(C) void  qtd_QHeaderView_setOffsetToLastSection(void* __this_nativeId);
private extern(C) void  qtd_QHeaderView_setOffsetToSectionPosition_int(void* __this_nativeId,
 int visualIndex0);
private extern(C) void  qtd_QHeaderView_setResizeMode_ResizeMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QHeaderView_setResizeMode_int_ResizeMode(void* __this_nativeId,
 int logicalIndex0,
 int mode1);
private extern(C) void  qtd_QHeaderView_setSectionHidden_int_bool(void* __this_nativeId,
 int logicalIndex0,
 bool hide1);
private extern(C) void  qtd_QHeaderView_setSortIndicator_int_SortOrder(void* __this_nativeId,
 int logicalIndex0,
 int order1);
private extern(C) void  qtd_QHeaderView_setSortIndicatorShown_bool(void* __this_nativeId,
 bool show0);
private extern(C) void  qtd_QHeaderView_setStretchLastSection_bool(void* __this_nativeId,
 bool stretch0);
private extern(C) void  qtd_QHeaderView_showSection_int(void* __this_nativeId,
 int logicalIndex0);
private extern(C) int  qtd_QHeaderView_sortIndicatorOrder_const(void* __this_nativeId);
private extern(C) int  qtd_QHeaderView_sortIndicatorSection_const(void* __this_nativeId);
private extern(C) bool  qtd_QHeaderView_stretchLastSection_const(void* __this_nativeId);
private extern(C) int  qtd_QHeaderView_stretchSectionCount_const(void* __this_nativeId);
private extern(C) void  qtd_QHeaderView_swapSections_int_int(void* __this_nativeId,
 int first0,
 int second1);
private extern(C) void  qtd_QHeaderView_updateSection_int(void* __this_nativeId,
 int logicalIndex0);
private extern(C) int  qtd_QHeaderView_visualIndex_int_const(void* __this_nativeId,
 int logicalIndex0);
private extern(C) int  qtd_QHeaderView_visualIndexAt_int_const(void* __this_nativeId,
 int position0);
private extern(C) void  qtd_QHeaderView_currentChanged_QModelIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) current0,
 const(QModelIndexAccessor) old1);
private extern(C) void  qtd_QHeaderView_dataChanged_QModelIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) topLeft0,
 const(QModelIndexAccessor) bottomRight1);
private extern(C) void  qtd_QHeaderView_doItemsLayout(void* __this_nativeId);
private extern(C) bool  qtd_QHeaderView_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) int  qtd_QHeaderView_horizontalOffset_const(void* __this_nativeId);
private extern(C) void  qtd_QHeaderView_indexAt_QPoint_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QPoint p0);
private extern(C) bool  qtd_QHeaderView_isIndexHidden_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QHeaderView_mouseDoubleClickEvent_QMouseEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QHeaderView_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QHeaderView_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QHeaderView_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QHeaderView_moveCursor_CursorAction_KeyboardModifiers(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int arg__1,
 int arg__2);
private extern(C) void  qtd_QHeaderView_paintEvent_QPaintEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QHeaderView_paintSection_QPainter_QRect_int_const(void* __this_nativeId,
 void* painter0,
 QRect rect1,
 int logicalIndex2);
private extern(C) void  qtd_QHeaderView_reset(void* __this_nativeId);
private extern(C) void  qtd_QHeaderView_rowsInserted_QModelIndex_int_int(void* __this_nativeId,
 const(QModelIndexAccessor) parent0,
 int start1,
 int end2);
private extern(C) void  qtd_QHeaderView_scrollContentsBy_int_int(void* __this_nativeId,
 int dx0,
 int dy1);
private extern(C) void  qtd_QHeaderView_scrollTo_QModelIndex_ScrollHint(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 int hint1);
private extern(C) void  qtd_QHeaderView_sectionSizeFromContents_int_const(void* __this_nativeId,
 QSize * __d_return_value,
 int logicalIndex0);
private extern(C) void  qtd_QHeaderView_setModel_QAbstractItemModel(void* __this_nativeId,
 void* model0);
private extern(C) void  qtd_QHeaderView_setSelection_QRect_SelectionFlags(void* __this_nativeId,
 QRect rect0,
 int flags1);
private extern(C) void  qtd_QHeaderView_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QHeaderView_updateGeometries(void* __this_nativeId);
private extern(C) int  qtd_QHeaderView_verticalOffset_const(void* __this_nativeId);
private extern(C) bool  qtd_QHeaderView_viewportEvent_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QHeaderView_visualRect_QModelIndex_const(void* __this_nativeId,
 QRect * __d_return_value,
 const(QModelIndexAccessor) index0);
private extern(C) void*  qtd_QHeaderView_visualRegionForSelection_QItemSelection_const(void* __this_nativeId,
 void* selection0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, void* painter0, QRect* rect1, int logicalIndex2) qtd_QHeaderView_paintSection_QPainter_QRect_int_const_dispatch; }
extern(C) void qtd_export_QHeaderView_paintSection_QPainter_QRect_int_const_dispatch(void *dId, void* painter0, QRect* rect1, int logicalIndex2){
    auto d_object = cast(QHeaderView) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    d_object.paintSection(painter0_d_ref, *rect1, logicalIndex2);
}

extern(C){ extern void function(void *dId, QSize *__d_return_value, int logicalIndex0) qtd_QHeaderView_sectionSizeFromContents_int_const_dispatch; }
extern(C) void qtd_export_QHeaderView_sectionSizeFromContents_int_const_dispatch(void *dId, QSize *__d_return_value, int logicalIndex0){
    auto d_object = cast(QHeaderView) dId;
    *__d_return_value = d_object.sectionSizeFromContents(logicalIndex0);
}

private extern (C) void qtd_QHeaderView_initCallBacks(void* virtuals);

extern(C) void static_init_QHeaderView() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QHeaderView_paintSection_QPainter_QRect_int_const_dispatch;
    virt_arr[1] = &qtd_export_QHeaderView_sectionSizeFromContents_int_const_dispatch;
    qtd_QHeaderView_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QHeaderView_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QHeaderView) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QHeaderView_activated_handle(void* dId, void** args) {
        auto d_object = cast(QHeaderView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.activated_emit(index0);
}*/
/*private extern(C) void qtd_QHeaderView_clicked_handle(void* dId, void** args) {
        auto d_object = cast(QHeaderView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.clicked_emit(index0);
}*/
/*private extern(C) void qtd_QHeaderView_doubleClicked_handle(void* dId, void** args) {
        auto d_object = cast(QHeaderView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.doubleClicked_emit(index0);
}*/
/*private extern(C) void qtd_QHeaderView_entered_handle(void* dId, void** args) {
        auto d_object = cast(QHeaderView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.entered_emit(index0);
}*/
/*private extern(C) void qtd_QHeaderView_pressed_handle(void* dId, void** args) {
        auto d_object = cast(QHeaderView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.pressed_emit(index0);
}*/
/*private extern(C) void qtd_QHeaderView_viewportEntered_handle(void* dId, void** args) {
        auto d_object = cast(QHeaderView) dId;
        //d_object.viewportEntered_emit();
}*/
/*private extern(C) void qtd_QHeaderView_geometriesChanged_handle(void* dId, void** args) {
        auto d_object = cast(QHeaderView) dId;
        //d_object.geometriesChanged_emit();
}*/
/*private extern(C) void qtd_QHeaderView_sectionAutoResize_handle(void* dId, void** args) {
        auto d_object = cast(QHeaderView) dId;
        auto logicalIndex0 = *(cast(int*)args[1]);
        auto mode1 = *(cast(QHeaderView.ResizeMode*)args[2]);
        //d_object.sectionAutoResize_emit(logicalIndex0, mode1);
}*/
/*private extern(C) void qtd_QHeaderView_sectionClicked_handle(void* dId, void** args) {
        auto d_object = cast(QHeaderView) dId;
        auto logicalIndex0 = *(cast(int*)args[1]);
        //d_object.sectionClicked_emit(logicalIndex0);
}*/
/*private extern(C) void qtd_QHeaderView_sectionCountChanged_handle(void* dId, void** args) {
        auto d_object = cast(QHeaderView) dId;
        auto oldCount0 = *(cast(int*)args[1]);
        auto newCount1 = *(cast(int*)args[2]);
        //d_object.sectionCountChanged_emit(oldCount0, newCount1);
}*/
/*private extern(C) void qtd_QHeaderView_sectionDoubleClicked_handle(void* dId, void** args) {
        auto d_object = cast(QHeaderView) dId;
        auto logicalIndex0 = *(cast(int*)args[1]);
        //d_object.sectionDoubleClicked_emit(logicalIndex0);
}*/
/*private extern(C) void qtd_QHeaderView_sectionEntered_handle(void* dId, void** args) {
        auto d_object = cast(QHeaderView) dId;
        auto logicalIndex0 = *(cast(int*)args[1]);
        //d_object.sectionEntered_emit(logicalIndex0);
}*/
/*private extern(C) void qtd_QHeaderView_sectionHandleDoubleClicked_handle(void* dId, void** args) {
        auto d_object = cast(QHeaderView) dId;
        auto logicalIndex0 = *(cast(int*)args[1]);
        //d_object.sectionHandleDoubleClicked_emit(logicalIndex0);
}*/
/*private extern(C) void qtd_QHeaderView_sectionMoved_handle(void* dId, void** args) {
        auto d_object = cast(QHeaderView) dId;
        auto logicalIndex0 = *(cast(int*)args[1]);
        auto oldVisualIndex1 = *(cast(int*)args[2]);
        auto newVisualIndex2 = *(cast(int*)args[3]);
        //d_object.sectionMoved_emit(logicalIndex0, oldVisualIndex1, newVisualIndex2);
}*/
/*private extern(C) void qtd_QHeaderView_sectionPressed_handle(void* dId, void** args) {
        auto d_object = cast(QHeaderView) dId;
        auto logicalIndex0 = *(cast(int*)args[1]);
        //d_object.sectionPressed_emit(logicalIndex0);
}*/
/*private extern(C) void qtd_QHeaderView_sectionResized_handle(void* dId, void** args) {
        auto d_object = cast(QHeaderView) dId;
        auto logicalIndex0 = *(cast(int*)args[1]);
        auto oldSize1 = *(cast(int*)args[2]);
        auto newSize2 = *(cast(int*)args[3]);
        //d_object.sectionResized_emit(logicalIndex0, oldSize1, newSize2);
}*/
/*private extern(C) void qtd_QHeaderView_sortIndicatorChanged_handle(void* dId, void** args) {
        auto d_object = cast(QHeaderView) dId;
        auto logicalIndex0 = *(cast(int*)args[1]);
        auto order1 = *(cast(Qt.SortOrder*)args[2]);
        //d_object.sortIndicatorChanged_emit(logicalIndex0, order1);
}*/

extern(C) QMetaObjectNative* qtd_QHeaderView_staticMetaObject();

extern(C) void qtd_QHeaderView_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QHeaderView_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
