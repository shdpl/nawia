module qt.gui.QLayout;

public import qt.gui.QLayout_aux;
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
public import qt.core.QObject;
public import qt.gui.QLayoutItem;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QRect;
public import qt.gui.QSpacerItem;
public import qt.gui.QWidget;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QLayout : QObject, IQLayoutItem
{
    public enum SizeConstraint {
        SetDefaultConstraint = 0,
        SetNoConstraint = 1,
        SetMinimumSize = 2,
        SetFixedSize = 3,
        SetMaximumSize = 4,
        SetMinAndMaxSize = 5
    }

    alias SizeConstraint.SetDefaultConstraint SetDefaultConstraint;
    alias SizeConstraint.SetNoConstraint SetNoConstraint;
    alias SizeConstraint.SetMinimumSize SetMinimumSize;
    alias SizeConstraint.SetFixedSize SetFixedSize;
    alias SizeConstraint.SetMaximumSize SetMaximumSize;
    alias SizeConstraint.SetMinAndMaxSize SetMinAndMaxSize;


Object __rcMenuBar = null;

    package Object[] __rcWidgets;

    private static const string[] __signalSignatures = [    ];

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
// Functions

    public this() {
        void* ret = qtd_QLayout_QLayout(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QWidget parent_) {
        void* ret = qtd_QLayout_QLayout_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool activate() {
        return qtd_QLayout_activate(qtdNativeId);
    }

    protected final void addChildLayout(QLayout l) {
        if (l !is null) {
            l.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QLayout_addChildLayout_QLayout(qtdNativeId, l is null ? null : l.qtdNativeId);
    }

    protected final void addChildWidget(QWidget w) {
        /*if (w is null)
            throw new NullPointerException("Argument 'w': null not expected."); */
        if (w !is null) {
            __rcWidgets ~= cast(Object) w;
        }
        qtd_QLayout_addChildWidget_QWidget(qtdNativeId, w is null ? null : w.qtdNativeId);
    }

    public final void addWidget(QWidget w) {
        /*if (w is null)
            throw new NullPointerException("Argument 'w': null not expected."); */
        if (w !is null) {
            __rcWidgets ~= cast(Object) w;
        }
        qtd_QLayout_addWidget_QWidget(qtdNativeId, w is null ? null : w.qtdNativeId);
    }

    public final int alignment() const {
        return qtd_QLayout_alignment_const(qtdNativeId);
    }

    protected final QRect alignmentRect(const(QRect) arg__1) const {
        QRect res;
        qtd_QLayout_alignmentRect_QRect_const(qtdNativeId, &res, arg__1);
        return res;
    }

    public final QRect contentsRect() const {
        QRect res;
        qtd_QLayout_contentsRect_const(qtdNativeId, &res);
        return res;
    }

    public final int controlTypes() const {
        return qtd_QLayout_controlTypes_const(qtdNativeId);
    }

    private final void getContentsMargins(int* left, int* top, int* right, int* bottom) const {
        qtd_QLayout_getContentsMargins_nativepointerint_nativepointerint_nativepointerint_nativepointerint_const(qtdNativeId, left, top, right, bottom);
    }

    public final bool isEnabled() const {
        return qtd_QLayout_isEnabled_const(qtdNativeId);
    }

    public final QWidget menuBar() const {
        void *ret = qtd_QLayout_menuBar_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QWidget parentWidget() const {
        void *ret = qtd_QLayout_parentWidget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final void removeItem(IQLayoutItem arg__1) {
        if (arg__1 !is null) {
            arg__1.qtdSetOwnership(QtdObjectOwnership.d);
        }
        qtd_QLayout_removeItem_QLayoutItem(qtdNativeId, arg__1 is null ? null : arg__1.__ptr_IQLayoutItem);
    }

    public final void removeWidget(QWidget w) {
        /*if (w is null)
            throw new NullPointerException("Argument 'w': null not expected."); */
        if (w !is null) {
            remove(__rcWidgets, cast(Object) w);
        }
        qtd_QLayout_removeWidget_QWidget(qtdNativeId, w is null ? null : w.qtdNativeId);
    }

    public final void setAlignment(int alignment) {
        qtd_QLayout_setAlignment_Alignment(qtdNativeId, alignment);
    }

    public final bool setAlignment(QLayout l, int alignment) {
        return qtd_QLayout_setAlignment_QLayout_Alignment(qtdNativeId, l is null ? null : l.qtdNativeId, alignment);
    }

    public final bool setAlignment(QWidget w, int alignment) {
        return qtd_QLayout_setAlignment_QWidget_Alignment(qtdNativeId, w is null ? null : w.qtdNativeId, alignment);
    }

    public final void setContentsMargins(int left, int top, int right, int bottom) {
        qtd_QLayout_setContentsMargins_int_int_int_int(qtdNativeId, left, top, right, bottom);
    }

    public final void setEnabled(bool arg__1) {
        qtd_QLayout_setEnabled_bool(qtdNativeId, arg__1);
    }

    public final void setMargin(int arg__1) {
        qtd_QLayout_setMargin_int(qtdNativeId, arg__1);
    }

    public final void setMenuBar(QWidget w) {
        {
            __rcMenuBar = cast(Object) w;
        }
        qtd_QLayout_setMenuBar_QWidget(qtdNativeId, w is null ? null : w.qtdNativeId);
    }

    public final void setSizeConstraint(QLayout.SizeConstraint arg__1) {
        qtd_QLayout_setSizeConstraint_SizeConstraint(qtdNativeId, arg__1);
    }

    public final void setWidgetSpacing(int arg__1) {
        qtd_QLayout_setWidgetSpacing_int(qtdNativeId, arg__1);
    }

    public final QLayout.SizeConstraint sizeConstraint() const {
        return cast(QLayout.SizeConstraint) qtd_QLayout_sizeConstraint_const(qtdNativeId);
    }

    public final int widgetSpacing() const {
        return qtd_QLayout_widgetSpacing_const(qtdNativeId);
    }

    public final int totalHeightForWidth(int w) const {
        return qtd_QLayout_totalHeightForWidth_int_const(qtdNativeId, w);
    }

    public final QSize totalMaximumSize() const {
        QSize res;
        qtd_QLayout_totalMaximumSize_const(qtdNativeId, &res);
        return res;
    }

    public final QSize totalMinimumSize() const {
        QSize res;
        qtd_QLayout_totalMinimumSize_const(qtdNativeId, &res);
        return res;
    }

    public final QSize totalSizeHint() const {
        QSize res;
        qtd_QLayout_totalSizeHint_const(qtdNativeId, &res);
        return res;
    }

    public final void update() {
        qtd_QLayout_update(qtdNativeId);
    }

    protected final void widgetEvent(QEvent arg__1) {
        qtd_QLayout_widgetEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public abstract void addItem(IQLayoutItem arg__1);

    protected void childEvent(QChildEvent e) {
        qtd_QLayout_childEvent_QChildEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public abstract int count() const;

    public int expandingDirections() const {
        return qtd_QLayout_expandingDirections_const(qtdNativeId);
    }

    public QRect geometry() const {
        QRect res;
        qtd_QLayout_geometry_const(qtdNativeId, &res);
        return res;
    }

    public bool hasHeightForWidth() const {
        return qtd_QLayout_hasHeightForWidth_const(qtdNativeId);
    }

    public int heightForWidth(int arg__1) const {
        return qtd_QLayout_heightForWidth_int_const(qtdNativeId, arg__1);
    }

    public int indexOf(QWidget arg__1) const {
        return qtd_QLayout_indexOf_QWidget_const(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public void invalidate() {
        qtd_QLayout_invalidate(qtdNativeId);
    }

    public bool isEmpty() const {
        return qtd_QLayout_isEmpty_const(qtdNativeId);
    }

    public abstract IQLayoutItem itemAt(int index) const;

    public QLayout layout() {
        void *ret = qtd_QLayout_layout(qtdNativeId);
        QLayout __d_return_value = QLayout.__getObject(ret);
        return __d_return_value;
    }

    public QSize maximumSize() const {
        QSize res;
        qtd_QLayout_maximumSize_const(qtdNativeId, &res);
        return res;
    }

    public int minimumHeightForWidth(int arg__1) const {
        return qtd_QLayout_minimumHeightForWidth_int_const(qtdNativeId, arg__1);
    }

    public QSize minimumSize() const {
        QSize res;
        qtd_QLayout_minimumSize_const(qtdNativeId, &res);
        return res;
    }

    public void setGeometry(const(QRect) arg__1) {
        qtd_QLayout_setGeometry_QRect(qtdNativeId, arg__1);
    }

    public abstract QSize sizeHint() const;

    public QSpacerItem spacerItem() {
        void* ret = qtd_QLayout_spacerItem(qtdNativeId);
        QSpacerItem __d_return_value = qtd_QSpacerItem_from_ptr(ret);

        return __d_return_value;
    }

    public abstract IQLayoutItem takeAt(int index);

    public QWidget widget() {
        void *ret = qtd_QLayout_widget(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public static QSize closestAcceptableSize(QWidget w, const(QSize) s) {
        QSize res;
        qtd_QLayout_closestAcceptableSize_QWidget_QSize(&res, w is null ? null : (cast(QWidget)w).qtdNativeId, s);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QLayout_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QLayout);
    }

    static QLayout __getObject(void* nativeId) {
        return static_cast!(QLayout)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QLayout_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QLayout_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QLayout_ConcreteWrapper(nativeId, initFlags);
        QLayout.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QLayout;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQLayoutItem = qtd_QLayout_cast_to_QLayoutItem(nativeId);
    }

    private void* __m_ptr_IQLayoutItem;
    public void* __ptr_IQLayoutItem() { return __m_ptr_IQLayoutItem; }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
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
    private static extern (C) void*qtd_QLayout_cast_to_QLayoutItem(void* nativeId);

    public class QLayout_ConcreteWrapper : QLayout {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public void addItem(IQLayoutItem arg__1) {
            qtd_QLayout_addItem_QLayoutItem(qtdNativeId, arg__1 is null ? null : arg__1.__ptr_IQLayoutItem);
        }

        override         public int count() const {
            return qtd_QLayout_count_const(qtdNativeId);
        }

        override         public IQLayoutItem itemAt(int index) const {
            void* ret = qtd_QLayout_itemAt_int_const(qtdNativeId, index);
            IQLayoutItem __d_return_value = qtd_QLayoutItem_from_ptr(ret);

            return __d_return_value;
        }

        override         public QSize sizeHint() const {
            QSize res;
            qtd_QLayout_sizeHint_const(qtdNativeId, &res);
            return res;
        }

        override         public IQLayoutItem takeAt(int index) {
            void* ret = qtd_QLayout_takeAt_int(qtdNativeId, index);
            IQLayoutItem __d_return_value = qtd_QLayoutItem_from_ptr(ret);

            return __d_return_value;
        }
    }


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QLayout_QLayout(void *d_ptr);
private extern(C) void* qtd_QLayout_QLayout_QWidget(void *d_ptr,
 void* parent0);
private extern(C) bool  qtd_QLayout_activate(void* __this_nativeId);
private extern(C) void  qtd_QLayout_addChildLayout_QLayout(void* __this_nativeId,
 void* l0);
private extern(C) void  qtd_QLayout_addChildWidget_QWidget(void* __this_nativeId,
 void* w0);
private extern(C) void  qtd_QLayout_addWidget_QWidget(void* __this_nativeId,
 void* w0);
private extern(C) int  qtd_QLayout_alignment_const(void* __this_nativeId);
private extern(C) void  qtd_QLayout_alignmentRect_QRect_const(void* __this_nativeId,
 QRect * __d_return_value,
 QRect arg__1);
private extern(C) void  qtd_QLayout_contentsRect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) int  qtd_QLayout_controlTypes_const(void* __this_nativeId);
private extern(C) void  qtd_QLayout_getContentsMargins_nativepointerint_nativepointerint_nativepointerint_nativepointerint_const(void* __this_nativeId,
 int* left0,
 int* top1,
 int* right2,
 int* bottom3);
private extern(C) bool  qtd_QLayout_isEnabled_const(void* __this_nativeId);
private extern(C) void*  qtd_QLayout_menuBar_const(void* __this_nativeId);
private extern(C) void*  qtd_QLayout_parentWidget_const(void* __this_nativeId);
private extern(C) void  qtd_QLayout_removeItem_QLayoutItem(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLayout_removeWidget_QWidget(void* __this_nativeId,
 void* w0);
private extern(C) void  qtd_QLayout_setAlignment_Alignment(void* __this_nativeId,
 int alignment0);
private extern(C) bool  qtd_QLayout_setAlignment_QLayout_Alignment(void* __this_nativeId,
 void* l0,
 int alignment1);
private extern(C) bool  qtd_QLayout_setAlignment_QWidget_Alignment(void* __this_nativeId,
 void* w0,
 int alignment1);
private extern(C) void  qtd_QLayout_setContentsMargins_int_int_int_int(void* __this_nativeId,
 int left0,
 int top1,
 int right2,
 int bottom3);
private extern(C) void  qtd_QLayout_setEnabled_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QLayout_setMargin_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QLayout_setMenuBar_QWidget(void* __this_nativeId,
 void* w0);
private extern(C) void  qtd_QLayout_setSizeConstraint_SizeConstraint(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QLayout_setWidgetSpacing_int(void* __this_nativeId,
 int arg__1);
private extern(C) int  qtd_QLayout_sizeConstraint_const(void* __this_nativeId);
private extern(C) int  qtd_QLayout_widgetSpacing_const(void* __this_nativeId);
private extern(C) int  qtd_QLayout_totalHeightForWidth_int_const(void* __this_nativeId,
 int w0);
private extern(C) void  qtd_QLayout_totalMaximumSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QLayout_totalMinimumSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QLayout_totalSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QLayout_update(void* __this_nativeId);
private extern(C) void  qtd_QLayout_widgetEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLayout_addItem_QLayoutItem(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLayout_childEvent_QChildEvent(void* __this_nativeId,
 void* e0);
private extern(C) int  qtd_QLayout_count_const(void* __this_nativeId);
private extern(C) int  qtd_QLayout_expandingDirections_const(void* __this_nativeId);
private extern(C) void  qtd_QLayout_geometry_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) bool  qtd_QLayout_hasHeightForWidth_const(void* __this_nativeId);
private extern(C) int  qtd_QLayout_heightForWidth_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) int  qtd_QLayout_indexOf_QWidget_const(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLayout_invalidate(void* __this_nativeId);
private extern(C) bool  qtd_QLayout_isEmpty_const(void* __this_nativeId);
private extern(C) void*  qtd_QLayout_itemAt_int_const(void* __this_nativeId,
 int index0);
private extern(C) void*  qtd_QLayout_layout(void* __this_nativeId);
private extern(C) void  qtd_QLayout_maximumSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) int  qtd_QLayout_minimumHeightForWidth_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QLayout_minimumSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QLayout_setGeometry_QRect(void* __this_nativeId,
 QRect arg__1);
private extern(C) void  qtd_QLayout_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void*  qtd_QLayout_spacerItem(void* __this_nativeId);
private extern(C) void*  qtd_QLayout_takeAt_int(void* __this_nativeId,
 int index0);
private extern(C) void*  qtd_QLayout_widget(void* __this_nativeId);
private extern(C) void  qtd_QLayout_closestAcceptableSize_QWidget_QSize(QSize * __d_return_value,
 void* w0,
 QSize s1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, void* arg__1) qtd_QLayout_addItem_QLayoutItem_dispatch; }
extern(C) void qtd_export_QLayout_addItem_QLayoutItem_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QLayout) dId;
    scope arg__1_d_ref = new QLayoutItem_ConcreteWrapper(arg__1, QtdObjectInitFlags.onStack);
    d_object.addItem(arg__1_d_ref);
}

extern(C){ extern int function(void *dId) qtd_QLayout_count_const_dispatch; }
extern(C) int qtd_export_QLayout_count_const_dispatch(void *dId){
    auto d_object = cast(QLayout) dId;
    auto return_value = d_object.count();
    return return_value;
}

extern(C){ extern int function(void *dId, void* arg__1) qtd_QLayout_indexOf_QWidget_const_dispatch; }
extern(C) int qtd_export_QLayout_indexOf_QWidget_const_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QLayout) dId;
    scope arg__1_d_ref = new QWidget(arg__1, QtdObjectInitFlags.onStack);

    auto return_value = d_object.indexOf(arg__1_d_ref);
    return return_value;
}

extern(C){ extern void* function(void *dId, int index0) qtd_QLayout_itemAt_int_const_dispatch; }
extern(C) void* qtd_export_QLayout_itemAt_int_const_dispatch(void *dId, int index0){
    auto d_object = cast(QLayout) dId;
    IQLayoutItem ret_value = d_object.itemAt(index0);
    return ret_value is null? null : ret_value.__ptr_IQLayoutItem;
}

extern(C){ extern void* function(void *dId, int index0) qtd_QLayout_takeAt_int_dispatch; }
extern(C) void* qtd_export_QLayout_takeAt_int_dispatch(void *dId, int index0){
    auto d_object = cast(QLayout) dId;
    IQLayoutItem ret_value = d_object.takeAt(index0);
    return ret_value is null? null : ret_value.__ptr_IQLayoutItem;
}

private extern (C) void qtd_QLayout_initCallBacks(void* virtuals);

extern(C) void static_init_QLayout() {
    void*[5] virt_arr;
    virt_arr[0] = &qtd_export_QLayout_addItem_QLayoutItem_dispatch;
    virt_arr[1] = &qtd_export_QLayout_count_const_dispatch;
    virt_arr[2] = &qtd_export_QLayout_indexOf_QWidget_const_dispatch;
    virt_arr[3] = &qtd_export_QLayout_itemAt_int_const_dispatch;
    virt_arr[4] = &qtd_export_QLayout_takeAt_int_dispatch;
    qtd_QLayout_initCallBacks(virt_arr.ptr);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QLayout_staticMetaObject();

extern(C) void qtd_QLayout_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QLayout_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
