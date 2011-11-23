module qt.gui.QColumnView;

public import qt.gui.QColumnView_aux;
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
public import qt.core.QPoint;
public import qt.core.QTimerEvent;
public import qt.core.QModelIndex;
public import qt.core.QChildEvent;
public import qt.gui.QKeyEvent;
public import qt.gui.QAbstractItemView;
public import qt.core.QObject;
public import qt.gui.QResizeEvent;
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


public class QColumnView : QAbstractItemView
{

    private static const string[] __signalSignatures = [
            "updatePreviewWidget(QModelIndex)"    ];

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

    protected final void updatePreviewWidget(const(QModelIndex) index) {
        qtd_QColumnView_updatePreviewWidget_QModelIndex(qtdNativeId, index);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QColumnView_QColumnView_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QList!(int) columnWidths() const {
        auto res = QList!(int).opCall();
        qtd_QColumnView_columnWidths_const(qtdNativeId, &res);
        return res;
    }

    protected final void initializeColumn(QAbstractItemView column) const {
        qtd_QColumnView_initializeColumn_QAbstractItemView_const(qtdNativeId, column is null ? null : column.qtdNativeId);
    }

    public final QWidget previewWidget() const {
        void *ret = qtd_QColumnView_previewWidget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final bool resizeGripsVisible() const {
        return qtd_QColumnView_resizeGripsVisible_const(qtdNativeId);
    }

    public final void setColumnWidths(QList!(int) list) {
        qtd_QColumnView_setColumnWidths_QList(qtdNativeId, &list);
    }

    public final void setPreviewWidget(QWidget widget) {
        qtd_QColumnView_setPreviewWidget_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final void setResizeGripsVisible(bool visible) {
        qtd_QColumnView_setResizeGripsVisible_bool(qtdNativeId, visible);
    }

    protected QAbstractItemView createColumn(const(QModelIndex) rootIndex) {
        void *ret = qtd_QColumnView_createColumn_QModelIndex(qtdNativeId, rootIndex);
        QAbstractItemView __d_return_value = QAbstractItemView.__getObject(ret);
        return __d_return_value;
    }

    protected void currentChanged(const(QModelIndex) current, const(QModelIndex) previous) {
        qtd_QColumnView_currentChanged_QModelIndex_QModelIndex(qtdNativeId, current, previous);
    }

    protected int horizontalOffset() const {
        return qtd_QColumnView_horizontalOffset_const(qtdNativeId);
    }

    public QModelIndex indexAt(const(QPoint) point) const {
        QModelIndex res;
        qtd_QColumnView_indexAt_QPoint_const(qtdNativeId, &res, point);
        return res;
    }

    protected bool isIndexHidden(const(QModelIndex) index) const {
        return qtd_QColumnView_isIndexHidden_QModelIndex_const(qtdNativeId, index);
    }

    protected QModelIndex moveCursor(QAbstractItemView.CursorAction cursorAction, int modifiers) {
        QModelIndex res;
        qtd_QColumnView_moveCursor_CursorAction_KeyboardModifiers(qtdNativeId, &res, cursorAction, modifiers);
        return res;
    }

    protected void resizeEvent(QResizeEvent event) {
        qtd_QColumnView_resizeEvent_QResizeEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void rowsInserted(const(QModelIndex) parent_, int start, int end) {
        qtd_QColumnView_rowsInserted_QModelIndex_int_int(qtdNativeId, parent_, start, end);
    }

    protected void scrollContentsBy(int dx, int dy) {
        qtd_QColumnView_scrollContentsBy_int_int(qtdNativeId, dx, dy);
    }

    public void scrollTo(const(QModelIndex) index, QAbstractItemView.ScrollHint hint = QAbstractItemView.ScrollHint.EnsureVisible) {
        qtd_QColumnView_scrollTo_QModelIndex_ScrollHint(qtdNativeId, index, hint);
    }

    public void selectAll() {
        qtd_QColumnView_selectAll(qtdNativeId);
    }

    public void setModel(QAbstractItemModel model) {
        {
            __rcItemModel = cast(Object) model;
        }
        qtd_QColumnView_setModel_QAbstractItemModel(qtdNativeId, model is null ? null : model.qtdNativeId);
        // setModel() creates a new selection model for the object
        __rcItemSelectionModel = null;


    }

    public void setRootIndex(const(QModelIndex) index) {
        qtd_QColumnView_setRootIndex_QModelIndex(qtdNativeId, index);
    }

    protected void setSelection(const(QRect) rect, int command) {
        qtd_QColumnView_setSelection_QRect_SelectionFlags(qtdNativeId, rect, command);
    }

    public void setSelectionModel(QItemSelectionModel selectionModel) {
        /*if (selectionModel is null)
            throw new NullPointerException("Argument 'selectionModel': null not expected."); */
        {
            __rcItemSelectionModel = cast(Object) selectionModel;
        }
        qtd_QColumnView_setSelectionModel_QItemSelectionModel(qtdNativeId, selectionModel is null ? null : selectionModel.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QColumnView_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected int verticalOffset() const {
        return qtd_QColumnView_verticalOffset_const(qtdNativeId);
    }

    public QRect visualRect(const(QModelIndex) index) const {
        QRect res;
        qtd_QColumnView_visualRect_QModelIndex_const(qtdNativeId, &res, index);
        return res;
    }

    protected QRegion visualRegionForSelection(const(QItemSelection) selection) const {
        void* ret = qtd_QColumnView_visualRegionForSelection_QItemSelection_const(qtdNativeId, selection is null ? null : (cast(QItemSelection)selection).qtdNativeId);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QColumnView_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QColumnView);
    }

    static QColumnView __getObject(void* nativeId) {
        return static_cast!(QColumnView)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QColumnView_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QColumnView_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QColumnView(nativeId, initFlags);
        QColumnView.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(const(QModelIndex))("updatePreviewWidget"), index));

    }

    public alias void __isQtType_QColumnView;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QColumnView_updatePreviewWidget_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);

// C wrappers
private extern(C) void* qtd_QColumnView_QColumnView_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QColumnView_columnWidths_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QColumnView_initializeColumn_QAbstractItemView_const(void* __this_nativeId,
 void* column0);
private extern(C) void*  qtd_QColumnView_previewWidget_const(void* __this_nativeId);
private extern(C) bool  qtd_QColumnView_resizeGripsVisible_const(void* __this_nativeId);
private extern(C) void  qtd_QColumnView_setColumnWidths_QList(void* __this_nativeId,
 void* list0);
private extern(C) void  qtd_QColumnView_setPreviewWidget_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QColumnView_setResizeGripsVisible_bool(void* __this_nativeId,
 bool visible0);
private extern(C) void*  qtd_QColumnView_createColumn_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) rootIndex0);
private extern(C) void  qtd_QColumnView_currentChanged_QModelIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) current0,
 const(QModelIndexAccessor) previous1);
private extern(C) int  qtd_QColumnView_horizontalOffset_const(void* __this_nativeId);
private extern(C) void  qtd_QColumnView_indexAt_QPoint_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QPoint point0);
private extern(C) bool  qtd_QColumnView_isIndexHidden_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QColumnView_moveCursor_CursorAction_KeyboardModifiers(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int cursorAction0,
 int modifiers1);
private extern(C) void  qtd_QColumnView_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QColumnView_rowsInserted_QModelIndex_int_int(void* __this_nativeId,
 const(QModelIndexAccessor) parent0,
 int start1,
 int end2);
private extern(C) void  qtd_QColumnView_scrollContentsBy_int_int(void* __this_nativeId,
 int dx0,
 int dy1);
private extern(C) void  qtd_QColumnView_scrollTo_QModelIndex_ScrollHint(void* __this_nativeId,
 const(QModelIndexAccessor) index0,
 int hint1);
private extern(C) void  qtd_QColumnView_selectAll(void* __this_nativeId);
private extern(C) void  qtd_QColumnView_setModel_QAbstractItemModel(void* __this_nativeId,
 void* model0);
private extern(C) void  qtd_QColumnView_setRootIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) void  qtd_QColumnView_setSelection_QRect_SelectionFlags(void* __this_nativeId,
 QRect rect0,
 int command1);
private extern(C) void  qtd_QColumnView_setSelectionModel_QItemSelectionModel(void* __this_nativeId,
 void* selectionModel0);
private extern(C) void  qtd_QColumnView_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) int  qtd_QColumnView_verticalOffset_const(void* __this_nativeId);
private extern(C) void  qtd_QColumnView_visualRect_QModelIndex_const(void* __this_nativeId,
 QRect * __d_return_value,
 const(QModelIndexAccessor) index0);
private extern(C) void*  qtd_QColumnView_visualRegionForSelection_QItemSelection_const(void* __this_nativeId,
 void* selection0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId, QModelIndexAccessor* rootIndex0) qtd_QColumnView_createColumn_QModelIndex_dispatch; }
extern(C) void* qtd_export_QColumnView_createColumn_QModelIndex_dispatch(void *dId, QModelIndexAccessor* rootIndex0){
    auto d_object = cast(QColumnView) dId;
    QAbstractItemView ret_value = d_object.createColumn(*rootIndex0);
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QColumnView_initCallBacks(void* virtuals);

extern(C) void static_init_QColumnView() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QColumnView_createColumn_QModelIndex_dispatch;
    qtd_QColumnView_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QColumnView_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QColumnView) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QColumnView_activated_handle(void* dId, void** args) {
        auto d_object = cast(QColumnView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.activated_emit(index0);
}*/
/*private extern(C) void qtd_QColumnView_clicked_handle(void* dId, void** args) {
        auto d_object = cast(QColumnView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.clicked_emit(index0);
}*/
/*private extern(C) void qtd_QColumnView_doubleClicked_handle(void* dId, void** args) {
        auto d_object = cast(QColumnView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.doubleClicked_emit(index0);
}*/
/*private extern(C) void qtd_QColumnView_entered_handle(void* dId, void** args) {
        auto d_object = cast(QColumnView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.entered_emit(index0);
}*/
/*private extern(C) void qtd_QColumnView_pressed_handle(void* dId, void** args) {
        auto d_object = cast(QColumnView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.pressed_emit(index0);
}*/
/*private extern(C) void qtd_QColumnView_viewportEntered_handle(void* dId, void** args) {
        auto d_object = cast(QColumnView) dId;
        //d_object.viewportEntered_emit();
}*/
/*private extern(C) void qtd_QColumnView_updatePreviewWidget_handle(void* dId, void** args) {
        auto d_object = cast(QColumnView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.updatePreviewWidget_emit(index0);
}*/

extern(C) QMetaObjectNative* qtd_QColumnView_staticMetaObject();

extern(C) void qtd_QColumnView_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QColumnView_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
