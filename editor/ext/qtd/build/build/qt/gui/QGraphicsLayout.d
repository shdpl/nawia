module qt.gui.QGraphicsLayout;

public import qt.gui.QGraphicsLayout_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QSizePolicy;
public import qt.gui.QGraphicsItem;
public import qt.core.QRectF;
public import qt.core.QEvent;
public import qt.core.QSizeF;
public import qt.gui.QGraphicsLayoutItem;
public import qt.gui.QSizePolicy;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QGraphicsLayout : QtdObject, IQGraphicsLayoutItem
{

Object __rcParentLayoutItem = null;

// Functions

    public this(IQGraphicsLayoutItem parent_ = null) {
        void* ret = qtd_QGraphicsLayout_QGraphicsLayout_QGraphicsLayoutItem(cast(void*) this, parent_ is null ? null : parent_.__ptr_IQGraphicsLayoutItem);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void activate() {
        qtd_QGraphicsLayout_activate(qtdNativeId);
    }

    protected final void addChildLayoutItem(IQGraphicsLayoutItem layoutItem) {
        qtd_QGraphicsLayout_addChildLayoutItem_QGraphicsLayoutItem(qtdNativeId, layoutItem is null ? null : layoutItem.__ptr_IQGraphicsLayoutItem);
    }

    public final QRectF contentsRect() const {
        QRectF res;
        qtd_QGraphicsLayout_contentsRect_const(qtdNativeId, &res);
        return res;
    }

    public final QSizeF effectiveSizeHint(Qt.SizeHint which, const(QSizeF) constraint = QSizeF()) const {
        QSizeF res;
        qtd_QGraphicsLayout_effectiveSizeHint_SizeHint_QSizeF_const(qtdNativeId, &res, which, constraint);
        return res;
    }

    public final QRectF geometry() const {
        QRectF res;
        qtd_QGraphicsLayout_geometry_const(qtdNativeId, &res);
        return res;
    }

    public final IQGraphicsItem graphicsItem() const {
        void* ret = qtd_QGraphicsLayout_graphicsItem_const(qtdNativeId);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final bool isActivated() const {
        return qtd_QGraphicsLayout_isActivated_const(qtdNativeId);
    }

    public final bool isLayout() const {
        return qtd_QGraphicsLayout_isLayout_const(qtdNativeId);
    }

    public final double maximumHeight() const {
        return qtd_QGraphicsLayout_maximumHeight_const(qtdNativeId);
    }

    public final QSizeF maximumSize() const {
        QSizeF res;
        qtd_QGraphicsLayout_maximumSize_const(qtdNativeId, &res);
        return res;
    }

    public final double maximumWidth() const {
        return qtd_QGraphicsLayout_maximumWidth_const(qtdNativeId);
    }

    public final double minimumHeight() const {
        return qtd_QGraphicsLayout_minimumHeight_const(qtdNativeId);
    }

    public final QSizeF minimumSize() const {
        QSizeF res;
        qtd_QGraphicsLayout_minimumSize_const(qtdNativeId, &res);
        return res;
    }

    public final double minimumWidth() const {
        return qtd_QGraphicsLayout_minimumWidth_const(qtdNativeId);
    }

    public final bool ownedByLayout() const {
        return qtd_QGraphicsLayout_ownedByLayout_const(qtdNativeId);
    }

    public final IQGraphicsLayoutItem parentLayoutItem() const {
        void* ret = qtd_QGraphicsLayout_parentLayoutItem_const(qtdNativeId);
        IQGraphicsLayoutItem __d_return_value = qtd_QGraphicsLayoutItem_from_ptr(ret);

        return __d_return_value;
    }

    public final double preferredHeight() const {
        return qtd_QGraphicsLayout_preferredHeight_const(qtdNativeId);
    }

    public final QSizeF preferredSize() const {
        QSizeF res;
        qtd_QGraphicsLayout_preferredSize_const(qtdNativeId, &res);
        return res;
    }

    public final double preferredWidth() const {
        return qtd_QGraphicsLayout_preferredWidth_const(qtdNativeId);
    }

    public final void setContentsMargins(double left, double top, double right, double bottom) {
        qtd_QGraphicsLayout_setContentsMargins_double_double_double_double(qtdNativeId, left, top, right, bottom);
    }

    public final void setGraphicsItem(IQGraphicsItem item) {
        qtd_QGraphicsLayout_setGraphicsItem_QGraphicsItem(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem);
    }

    public final void setMaximumHeight(double height) {
        qtd_QGraphicsLayout_setMaximumHeight_double(qtdNativeId, height);
    }

    public final void setMaximumSize(const(QSizeF) size) {
        qtd_QGraphicsLayout_setMaximumSize_QSizeF(qtdNativeId, size);
    }

    public final void setMaximumSize(double w, double h) {
        qtd_QGraphicsLayout_setMaximumSize_double_double(qtdNativeId, w, h);
    }

    public final void setMaximumWidth(double width) {
        qtd_QGraphicsLayout_setMaximumWidth_double(qtdNativeId, width);
    }

    public final void setMinimumHeight(double height) {
        qtd_QGraphicsLayout_setMinimumHeight_double(qtdNativeId, height);
    }

    public final void setMinimumSize(const(QSizeF) size) {
        qtd_QGraphicsLayout_setMinimumSize_QSizeF(qtdNativeId, size);
    }

    public final void setMinimumSize(double w, double h) {
        qtd_QGraphicsLayout_setMinimumSize_double_double(qtdNativeId, w, h);
    }

    public final void setMinimumWidth(double width) {
        qtd_QGraphicsLayout_setMinimumWidth_double(qtdNativeId, width);
    }

    public final void setOwnedByLayout(bool ownedByLayout) {
        qtd_QGraphicsLayout_setOwnedByLayout_bool(qtdNativeId, ownedByLayout);
    }

    public final void setParentLayoutItem(IQGraphicsLayoutItem parent_) {
        {
            __rcParentLayoutItem = cast(Object) parent_;
        }
        qtd_QGraphicsLayout_setParentLayoutItem_QGraphicsLayoutItem(qtdNativeId, parent_ is null ? null : parent_.__ptr_IQGraphicsLayoutItem);
    }

    public final void setPreferredHeight(double height) {
        qtd_QGraphicsLayout_setPreferredHeight_double(qtdNativeId, height);
    }

    public final void setPreferredSize(const(QSizeF) size) {
        qtd_QGraphicsLayout_setPreferredSize_QSizeF(qtdNativeId, size);
    }

    public final void setPreferredSize(double w, double h) {
        qtd_QGraphicsLayout_setPreferredSize_double_double(qtdNativeId, w, h);
    }

    public final void setPreferredWidth(double width) {
        qtd_QGraphicsLayout_setPreferredWidth_double(qtdNativeId, width);
    }

    public final void setSizePolicy(QSizePolicy.Policy hPolicy, QSizePolicy.Policy vPolicy, QSizePolicy.ControlType controlType = QSizePolicy.ControlType.DefaultType) {
        qtd_QGraphicsLayout_setSizePolicy_Policy_Policy_ControlType(qtdNativeId, hPolicy, vPolicy, controlType);
    }

    public final void setSizePolicy(const(QSizePolicy) policy) {
        qtd_QGraphicsLayout_setSizePolicy_QSizePolicy(qtdNativeId, policy is null ? null : (cast(QSizePolicy)policy).qtdNativeId);
    }

    public final QSizePolicy sizePolicy() const {
        void* ret = qtd_QGraphicsLayout_sizePolicy_const(qtdNativeId);
        QSizePolicy __d_return_value = new QSizePolicy(ret);
        return __d_return_value;
    }

    public abstract int count() const;

    public void invalidate() {
        qtd_QGraphicsLayout_invalidate(qtdNativeId);
    }

    public abstract IQGraphicsLayoutItem itemAt(int i) const;

    public abstract void removeAt(int index);

    public void setGeometry(const(QRectF) rect) {
        qtd_QGraphicsLayout_setGeometry_QRectF(qtdNativeId, rect);
    }

    public abstract QSizeF sizeHint(Qt.SizeHint which, const(QSizeF) constraint = QSizeF()) const;

    public void updateGeometry() {
        qtd_QGraphicsLayout_updateGeometry(qtdNativeId);
    }

    public void widgetEvent(QEvent e) {
        qtd_QGraphicsLayout_widgetEvent_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }
// Field accessors
    static QGraphicsLayout __getObject(void* nativeId) {
        return qtd_QGraphicsLayout_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QGraphicsLayout;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQGraphicsLayoutItem = qtd_QGraphicsLayout_cast_to_QGraphicsLayoutItem(nativeId);
    }

    private void* __m_ptr_IQGraphicsLayoutItem;
    public void* __ptr_IQGraphicsLayoutItem() { return __m_ptr_IQGraphicsLayoutItem; }

    protected override void qtdDeleteNative() {
        qtd_QGraphicsLayout_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QGraphicsLayout_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QGraphicsLayout_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
    @QtBlockedSlot
    public final QMarginsF getContentsMargins() {
    QNativePointer left = new QNativePointer(QNativePointer.Type.Double);
    QNativePointer top = new QNativePointer(QNativePointer.Type.Double);
    QNativePointer right = new QNativePointer(QNativePointer.Type.Double);
    QNativePointer bottom = new QNativePointer(QNativePointer.Type.Double);

    getContentsMargins(left, top, right, bottom);
    return new QMarginsF(left.doubleValue(), top.doubleValue(), right.doubleValue(), bottom.doubleValue());
    }*/

}
    private static extern (C) void*qtd_QGraphicsLayout_cast_to_QGraphicsLayoutItem(void* nativeId);

    public class QGraphicsLayout_ConcreteWrapper : QGraphicsLayout {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public int count() const {
            return qtd_QGraphicsLayout_count_const(qtdNativeId);
        }

        override         public IQGraphicsLayoutItem itemAt(int i) const {
            void* ret = qtd_QGraphicsLayout_itemAt_int_const(qtdNativeId, i);
            IQGraphicsLayoutItem __d_return_value = qtd_QGraphicsLayoutItem_from_ptr(ret);

            return __d_return_value;
        }

        override         public void removeAt(int index) {
            qtd_QGraphicsLayout_removeAt_int(qtdNativeId, index);
        }

        override         public QSizeF sizeHint(Qt.SizeHint which, const(QSizeF) constraint = QSizeF()) const {
            QSizeF res;
            qtd_QGraphicsLayout_sizeHint_SizeHint_QSizeF_const(qtdNativeId, &res, which, constraint);
            return res;
        }
    }


extern (C) void *__QGraphicsLayout_entity(void *q_ptr);

QGraphicsLayout qtd_QGraphicsLayout_from_ptr(void* ret) {
    void* d_obj = __QGraphicsLayout_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QGraphicsLayout) d_obj_ref;
    } else {
        auto return_value = new QGraphicsLayout_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QGraphicsLayout_delete(void *ptr);
extern (C) void qtd_QGraphicsLayout_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGraphicsLayout_QGraphicsLayout_QGraphicsLayoutItem(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QGraphicsLayout_activate(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsLayout_addChildLayoutItem_QGraphicsLayoutItem(void* __this_nativeId,
 void* layoutItem0);
private extern(C) void  qtd_QGraphicsLayout_contentsRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void  qtd_QGraphicsLayout_effectiveSizeHint_SizeHint_QSizeF_const(void* __this_nativeId,
 QSizeF * __d_return_value,
 int which0,
 QSizeF constraint1);
private extern(C) void  qtd_QGraphicsLayout_geometry_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void*  qtd_QGraphicsLayout_graphicsItem_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsLayout_isActivated_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsLayout_isLayout_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsLayout_maximumHeight_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsLayout_maximumSize_const(void* __this_nativeId,
 QSizeF * __d_return_value);
private extern(C) double  qtd_QGraphicsLayout_maximumWidth_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsLayout_minimumHeight_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsLayout_minimumSize_const(void* __this_nativeId,
 QSizeF * __d_return_value);
private extern(C) double  qtd_QGraphicsLayout_minimumWidth_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsLayout_ownedByLayout_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsLayout_parentLayoutItem_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsLayout_preferredHeight_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsLayout_preferredSize_const(void* __this_nativeId,
 QSizeF * __d_return_value);
private extern(C) double  qtd_QGraphicsLayout_preferredWidth_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsLayout_setContentsMargins_double_double_double_double(void* __this_nativeId,
 double left0,
 double top1,
 double right2,
 double bottom3);
private extern(C) void  qtd_QGraphicsLayout_setGraphicsItem_QGraphicsItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QGraphicsLayout_setMaximumHeight_double(void* __this_nativeId,
 double height0);
private extern(C) void  qtd_QGraphicsLayout_setMaximumSize_QSizeF(void* __this_nativeId,
 QSizeF size0);
private extern(C) void  qtd_QGraphicsLayout_setMaximumSize_double_double(void* __this_nativeId,
 double w0,
 double h1);
private extern(C) void  qtd_QGraphicsLayout_setMaximumWidth_double(void* __this_nativeId,
 double width0);
private extern(C) void  qtd_QGraphicsLayout_setMinimumHeight_double(void* __this_nativeId,
 double height0);
private extern(C) void  qtd_QGraphicsLayout_setMinimumSize_QSizeF(void* __this_nativeId,
 QSizeF size0);
private extern(C) void  qtd_QGraphicsLayout_setMinimumSize_double_double(void* __this_nativeId,
 double w0,
 double h1);
private extern(C) void  qtd_QGraphicsLayout_setMinimumWidth_double(void* __this_nativeId,
 double width0);
private extern(C) void  qtd_QGraphicsLayout_setOwnedByLayout_bool(void* __this_nativeId,
 bool ownedByLayout0);
private extern(C) void  qtd_QGraphicsLayout_setParentLayoutItem_QGraphicsLayoutItem(void* __this_nativeId,
 void* parent0);
private extern(C) void  qtd_QGraphicsLayout_setPreferredHeight_double(void* __this_nativeId,
 double height0);
private extern(C) void  qtd_QGraphicsLayout_setPreferredSize_QSizeF(void* __this_nativeId,
 QSizeF size0);
private extern(C) void  qtd_QGraphicsLayout_setPreferredSize_double_double(void* __this_nativeId,
 double w0,
 double h1);
private extern(C) void  qtd_QGraphicsLayout_setPreferredWidth_double(void* __this_nativeId,
 double width0);
private extern(C) void  qtd_QGraphicsLayout_setSizePolicy_Policy_Policy_ControlType(void* __this_nativeId,
 int hPolicy0,
 int vPolicy1,
 int controlType2);
private extern(C) void  qtd_QGraphicsLayout_setSizePolicy_QSizePolicy(void* __this_nativeId,
 void* policy0);
private extern(C) void*  qtd_QGraphicsLayout_sizePolicy_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsLayout_count_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsLayout_invalidate(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsLayout_itemAt_int_const(void* __this_nativeId,
 int i0);
private extern(C) void  qtd_QGraphicsLayout_removeAt_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QGraphicsLayout_setGeometry_QRectF(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsLayout_sizeHint_SizeHint_QSizeF_const(void* __this_nativeId,
 QSizeF * __d_return_value,
 int which0,
 QSizeF constraint1);
private extern(C) void  qtd_QGraphicsLayout_updateGeometry(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsLayout_widgetEvent_QEvent(void* __this_nativeId,
 void* e0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern int function(void *dId) qtd_QGraphicsLayout_count_const_dispatch; }
extern(C) int qtd_export_QGraphicsLayout_count_const_dispatch(void *dId){
    auto d_object = cast(QGraphicsLayout) dId;
    auto return_value = d_object.count();
    return return_value;
}

extern(C){ extern void function(void *dId) qtd_QGraphicsLayout_invalidate_dispatch; }
extern(C) void qtd_export_QGraphicsLayout_invalidate_dispatch(void *dId){
    auto d_object = cast(QGraphicsLayout) dId;
    d_object.invalidate();
}

extern(C){ extern void* function(void *dId, int i0) qtd_QGraphicsLayout_itemAt_int_const_dispatch; }
extern(C) void* qtd_export_QGraphicsLayout_itemAt_int_const_dispatch(void *dId, int i0){
    auto d_object = cast(QGraphicsLayout) dId;
    IQGraphicsLayoutItem ret_value = d_object.itemAt(i0);
    return ret_value is null? null : ret_value.__ptr_IQGraphicsLayoutItem;
}

extern(C){ extern void function(void *dId, int index0) qtd_QGraphicsLayout_removeAt_int_dispatch; }
extern(C) void qtd_export_QGraphicsLayout_removeAt_int_dispatch(void *dId, int index0){
    auto d_object = cast(QGraphicsLayout) dId;
    d_object.removeAt(index0);
}

extern(C){ extern void function(void *dId, void* e0) qtd_QGraphicsLayout_widgetEvent_QEvent_dispatch; }
extern(C) void qtd_export_QGraphicsLayout_widgetEvent_QEvent_dispatch(void *dId, void* e0){
    auto d_object = cast(QGraphicsLayout) dId;
    scope e0_d_ref = new QEvent(e0, QtdObjectInitFlags.onStack);
    d_object.widgetEvent(e0_d_ref);
}

private extern (C) void qtd_QGraphicsLayout_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsLayout() {
    void*[5] virt_arr;
    virt_arr[0] = &qtd_export_QGraphicsLayout_count_const_dispatch;
    virt_arr[1] = &qtd_export_QGraphicsLayout_invalidate_dispatch;
    virt_arr[2] = &qtd_export_QGraphicsLayout_itemAt_int_const_dispatch;
    virt_arr[3] = &qtd_export_QGraphicsLayout_removeAt_int_dispatch;
    virt_arr[4] = &qtd_export_QGraphicsLayout_widgetEvent_QEvent_dispatch;
    qtd_QGraphicsLayout_initCallBacks(virt_arr.ptr);
}

// signal handlers

