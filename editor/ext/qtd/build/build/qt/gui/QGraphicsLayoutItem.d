module qt.gui.QGraphicsLayoutItem;

public import qt.gui.QGraphicsLayoutItem_aux;
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
public import qt.core.QSizeF;
public import qt.gui.QSizePolicy;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QGraphicsLayoutItem : QtdObject, IQGraphicsLayoutItem
{

// Functions

    public this(IQGraphicsLayoutItem parent_ = null, bool isLayout = false) {
        void* ret = qtd_QGraphicsLayoutItem_QGraphicsLayoutItem_QGraphicsLayoutItem_bool(cast(void*) this, parent_ is null ? null : parent_.__ptr_IQGraphicsLayoutItem, isLayout);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QRectF contentsRect() const {
        QRectF res;
        qtd_QGraphicsLayoutItem_contentsRect_const(qtdNativeId, &res);
        return res;
    }

    public final QSizeF effectiveSizeHint(Qt.SizeHint which, const(QSizeF) constraint = QSizeF()) const {
        QSizeF res;
        qtd_QGraphicsLayoutItem_effectiveSizeHint_SizeHint_QSizeF_const(qtdNativeId, &res, which, constraint);
        return res;
    }

    public final QRectF geometry() const {
        QRectF res;
        qtd_QGraphicsLayoutItem_geometry_const(qtdNativeId, &res);
        return res;
    }

    public final IQGraphicsItem graphicsItem() const {
        void* ret = qtd_QGraphicsLayoutItem_graphicsItem_const(qtdNativeId);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final bool isLayout() const {
        return qtd_QGraphicsLayoutItem_isLayout_const(qtdNativeId);
    }

    public final double maximumHeight() const {
        return qtd_QGraphicsLayoutItem_maximumHeight_const(qtdNativeId);
    }

    public final QSizeF maximumSize() const {
        QSizeF res;
        qtd_QGraphicsLayoutItem_maximumSize_const(qtdNativeId, &res);
        return res;
    }

    public final double maximumWidth() const {
        return qtd_QGraphicsLayoutItem_maximumWidth_const(qtdNativeId);
    }

    public final double minimumHeight() const {
        return qtd_QGraphicsLayoutItem_minimumHeight_const(qtdNativeId);
    }

    public final QSizeF minimumSize() const {
        QSizeF res;
        qtd_QGraphicsLayoutItem_minimumSize_const(qtdNativeId, &res);
        return res;
    }

    public final double minimumWidth() const {
        return qtd_QGraphicsLayoutItem_minimumWidth_const(qtdNativeId);
    }

    public final bool ownedByLayout() const {
        return qtd_QGraphicsLayoutItem_ownedByLayout_const(qtdNativeId);
    }

    public final IQGraphicsLayoutItem parentLayoutItem() const {
        void* ret = qtd_QGraphicsLayoutItem_parentLayoutItem_const(qtdNativeId);
        IQGraphicsLayoutItem __d_return_value = qtd_QGraphicsLayoutItem_from_ptr(ret);

        return __d_return_value;
    }

    public final double preferredHeight() const {
        return qtd_QGraphicsLayoutItem_preferredHeight_const(qtdNativeId);
    }

    public final QSizeF preferredSize() const {
        QSizeF res;
        qtd_QGraphicsLayoutItem_preferredSize_const(qtdNativeId, &res);
        return res;
    }

    public final double preferredWidth() const {
        return qtd_QGraphicsLayoutItem_preferredWidth_const(qtdNativeId);
    }

    public final void setGraphicsItem(IQGraphicsItem item) {
        qtd_QGraphicsLayoutItem_setGraphicsItem_QGraphicsItem(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem);
    }

    public final void setMaximumHeight(double height) {
        qtd_QGraphicsLayoutItem_setMaximumHeight_double(qtdNativeId, height);
    }

    public final void setMaximumSize(const(QSizeF) size) {
        qtd_QGraphicsLayoutItem_setMaximumSize_QSizeF(qtdNativeId, size);
    }

    public final void setMaximumSize(double w, double h) {
        qtd_QGraphicsLayoutItem_setMaximumSize_double_double(qtdNativeId, w, h);
    }

    public final void setMaximumWidth(double width) {
        qtd_QGraphicsLayoutItem_setMaximumWidth_double(qtdNativeId, width);
    }

    public final void setMinimumHeight(double height) {
        qtd_QGraphicsLayoutItem_setMinimumHeight_double(qtdNativeId, height);
    }

    public final void setMinimumSize(const(QSizeF) size) {
        qtd_QGraphicsLayoutItem_setMinimumSize_QSizeF(qtdNativeId, size);
    }

    public final void setMinimumSize(double w, double h) {
        qtd_QGraphicsLayoutItem_setMinimumSize_double_double(qtdNativeId, w, h);
    }

    public final void setMinimumWidth(double width) {
        qtd_QGraphicsLayoutItem_setMinimumWidth_double(qtdNativeId, width);
    }

    public final void setOwnedByLayout(bool ownedByLayout) {
        qtd_QGraphicsLayoutItem_setOwnedByLayout_bool(qtdNativeId, ownedByLayout);
    }

    public final void setParentLayoutItem(IQGraphicsLayoutItem parent_) {
        qtd_QGraphicsLayoutItem_setParentLayoutItem_QGraphicsLayoutItem(qtdNativeId, parent_ is null ? null : parent_.__ptr_IQGraphicsLayoutItem);
    }

    public final void setPreferredHeight(double height) {
        qtd_QGraphicsLayoutItem_setPreferredHeight_double(qtdNativeId, height);
    }

    public final void setPreferredSize(const(QSizeF) size) {
        qtd_QGraphicsLayoutItem_setPreferredSize_QSizeF(qtdNativeId, size);
    }

    public final void setPreferredSize(double w, double h) {
        qtd_QGraphicsLayoutItem_setPreferredSize_double_double(qtdNativeId, w, h);
    }

    public final void setPreferredWidth(double width) {
        qtd_QGraphicsLayoutItem_setPreferredWidth_double(qtdNativeId, width);
    }

    public final void setSizePolicy(QSizePolicy.Policy hPolicy, QSizePolicy.Policy vPolicy, QSizePolicy.ControlType controlType = QSizePolicy.ControlType.DefaultType) {
        qtd_QGraphicsLayoutItem_setSizePolicy_Policy_Policy_ControlType(qtdNativeId, hPolicy, vPolicy, controlType);
    }

    public final void setSizePolicy(const(QSizePolicy) policy) {
        qtd_QGraphicsLayoutItem_setSizePolicy_QSizePolicy(qtdNativeId, policy is null ? null : (cast(QSizePolicy)policy).qtdNativeId);
    }

    public final QSizePolicy sizePolicy() const {
        void* ret = qtd_QGraphicsLayoutItem_sizePolicy_const(qtdNativeId);
        QSizePolicy __d_return_value = new QSizePolicy(ret);
        return __d_return_value;
    }

    public void setGeometry(const(QRectF) rect) {
        qtd_QGraphicsLayoutItem_setGeometry_QRectF(qtdNativeId, rect);
    }

    public abstract QSizeF sizeHint(Qt.SizeHint which, const(QSizeF) constraint = QSizeF()) const;

    public void updateGeometry() {
        qtd_QGraphicsLayoutItem_updateGeometry(qtdNativeId);
    }
// Field accessors
    static IQGraphicsLayoutItem __getObject(void* nativeId) {
        return qtd_QGraphicsLayoutItem_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QGraphicsLayoutItem;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQGraphicsLayoutItem = qtd_QGraphicsLayoutItem_cast_to_QGraphicsLayoutItem(nativeId);
    }

    private void* __m_ptr_IQGraphicsLayoutItem;
    public void* __ptr_IQGraphicsLayoutItem() { return __m_ptr_IQGraphicsLayoutItem; }

    protected override void qtdDeleteNative() {
        qtd_QGraphicsLayoutItem_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QGraphicsLayoutItem_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QGraphicsLayoutItem_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QGraphicsLayoutItem_cast_to_QGraphicsLayoutItem(void* nativeId);

    public class QGraphicsLayoutItem_ConcreteWrapper : QGraphicsLayoutItem {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public QSizeF sizeHint(Qt.SizeHint which, const(QSizeF) constraint = QSizeF()) const {
            QSizeF res;
            qtd_QGraphicsLayoutItem_sizeHint_SizeHint_QSizeF_const(qtdNativeId, &res, which, constraint);
            return res;
        }
    }


extern (C) void *__QGraphicsLayoutItem_entity(void *q_ptr);

IQGraphicsLayoutItem qtd_QGraphicsLayoutItem_from_ptr(void* ret) {
    void* d_obj = __QGraphicsLayoutItem_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(IQGraphicsLayoutItem) d_obj_ref;
    } else {
        auto return_value = new QGraphicsLayoutItem_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QGraphicsLayoutItem_delete(void *ptr);
extern (C) void qtd_QGraphicsLayoutItem_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGraphicsLayoutItem_QGraphicsLayoutItem_QGraphicsLayoutItem_bool(void *d_ptr,
 void* parent0,
 bool isLayout1);
private extern(C) void  qtd_QGraphicsLayoutItem_contentsRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void  qtd_QGraphicsLayoutItem_effectiveSizeHint_SizeHint_QSizeF_const(void* __this_nativeId,
 QSizeF * __d_return_value,
 int which0,
 QSizeF constraint1);
private extern(C) void  qtd_QGraphicsLayoutItem_geometry_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void*  qtd_QGraphicsLayoutItem_graphicsItem_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsLayoutItem_isLayout_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsLayoutItem_maximumHeight_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsLayoutItem_maximumSize_const(void* __this_nativeId,
 QSizeF * __d_return_value);
private extern(C) double  qtd_QGraphicsLayoutItem_maximumWidth_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsLayoutItem_minimumHeight_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsLayoutItem_minimumSize_const(void* __this_nativeId,
 QSizeF * __d_return_value);
private extern(C) double  qtd_QGraphicsLayoutItem_minimumWidth_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsLayoutItem_ownedByLayout_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsLayoutItem_parentLayoutItem_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsLayoutItem_preferredHeight_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsLayoutItem_preferredSize_const(void* __this_nativeId,
 QSizeF * __d_return_value);
private extern(C) double  qtd_QGraphicsLayoutItem_preferredWidth_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsLayoutItem_setGraphicsItem_QGraphicsItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QGraphicsLayoutItem_setMaximumHeight_double(void* __this_nativeId,
 double height0);
private extern(C) void  qtd_QGraphicsLayoutItem_setMaximumSize_QSizeF(void* __this_nativeId,
 QSizeF size0);
private extern(C) void  qtd_QGraphicsLayoutItem_setMaximumSize_double_double(void* __this_nativeId,
 double w0,
 double h1);
private extern(C) void  qtd_QGraphicsLayoutItem_setMaximumWidth_double(void* __this_nativeId,
 double width0);
private extern(C) void  qtd_QGraphicsLayoutItem_setMinimumHeight_double(void* __this_nativeId,
 double height0);
private extern(C) void  qtd_QGraphicsLayoutItem_setMinimumSize_QSizeF(void* __this_nativeId,
 QSizeF size0);
private extern(C) void  qtd_QGraphicsLayoutItem_setMinimumSize_double_double(void* __this_nativeId,
 double w0,
 double h1);
private extern(C) void  qtd_QGraphicsLayoutItem_setMinimumWidth_double(void* __this_nativeId,
 double width0);
private extern(C) void  qtd_QGraphicsLayoutItem_setOwnedByLayout_bool(void* __this_nativeId,
 bool ownedByLayout0);
private extern(C) void  qtd_QGraphicsLayoutItem_setParentLayoutItem_QGraphicsLayoutItem(void* __this_nativeId,
 void* parent0);
private extern(C) void  qtd_QGraphicsLayoutItem_setPreferredHeight_double(void* __this_nativeId,
 double height0);
private extern(C) void  qtd_QGraphicsLayoutItem_setPreferredSize_QSizeF(void* __this_nativeId,
 QSizeF size0);
private extern(C) void  qtd_QGraphicsLayoutItem_setPreferredSize_double_double(void* __this_nativeId,
 double w0,
 double h1);
private extern(C) void  qtd_QGraphicsLayoutItem_setPreferredWidth_double(void* __this_nativeId,
 double width0);
private extern(C) void  qtd_QGraphicsLayoutItem_setSizePolicy_Policy_Policy_ControlType(void* __this_nativeId,
 int hPolicy0,
 int vPolicy1,
 int controlType2);
private extern(C) void  qtd_QGraphicsLayoutItem_setSizePolicy_QSizePolicy(void* __this_nativeId,
 void* policy0);
private extern(C) void*  qtd_QGraphicsLayoutItem_sizePolicy_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsLayoutItem_setGeometry_QRectF(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsLayoutItem_sizeHint_SizeHint_QSizeF_const(void* __this_nativeId,
 QSizeF * __d_return_value,
 int which0,
 QSizeF constraint1);
private extern(C) void  qtd_QGraphicsLayoutItem_updateGeometry(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, QRectF* rect0) qtd_QGraphicsLayoutItem_setGeometry_QRectF_dispatch; }
extern(C) void qtd_export_QGraphicsLayoutItem_setGeometry_QRectF_dispatch(void *dId, QRectF* rect0){
    auto d_object = cast(IQGraphicsLayoutItem)cast(Object) dId;
    d_object.setGeometry(*rect0);
}

extern(C){ extern void function(void *dId, QSizeF *__d_return_value, int which0, QSizeF* constraint1) qtd_QGraphicsLayoutItem_sizeHint_SizeHint_QSizeF_const_dispatch; }
extern(C) void qtd_export_QGraphicsLayoutItem_sizeHint_SizeHint_QSizeF_const_dispatch(void *dId, QSizeF *__d_return_value, int which0, QSizeF* constraint1){
    auto d_object = cast(IQGraphicsLayoutItem)cast(Object) dId;
    auto which0_enum = cast(Qt.SizeHint) which0;
    *__d_return_value = d_object.sizeHint(which0_enum, *constraint1);
}

extern(C){ extern void function(void *dId) qtd_QGraphicsLayoutItem_updateGeometry_dispatch; }
extern(C) void qtd_export_QGraphicsLayoutItem_updateGeometry_dispatch(void *dId){
    auto d_object = cast(IQGraphicsLayoutItem)cast(Object) dId;
    d_object.updateGeometry();
}

private extern (C) void qtd_QGraphicsLayoutItem_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsLayoutItem() {
    void*[3] virt_arr;
    virt_arr[0] = &qtd_export_QGraphicsLayoutItem_setGeometry_QRectF_dispatch;
    virt_arr[1] = &qtd_export_QGraphicsLayoutItem_sizeHint_SizeHint_QSizeF_const_dispatch;
    virt_arr[2] = &qtd_export_QGraphicsLayoutItem_updateGeometry_dispatch;
    qtd_QGraphicsLayoutItem_initCallBacks(virt_arr.ptr);
}

// signal handlers

public interface IQGraphicsLayoutItem
{
// Functions

        public QRectF contentsRect() const;

        public QSizeF effectiveSizeHint(Qt.SizeHint which, const(QSizeF) constraint = QSizeF()) const;

        public QRectF geometry() const;

        public IQGraphicsItem graphicsItem() const;

        public bool isLayout() const;

        public double maximumHeight() const;

        public QSizeF maximumSize() const;

        public double maximumWidth() const;

        public double minimumHeight() const;

        public QSizeF minimumSize() const;

        public double minimumWidth() const;

        public bool ownedByLayout() const;

        public IQGraphicsLayoutItem parentLayoutItem() const;

        public double preferredHeight() const;

        public QSizeF preferredSize() const;

        public double preferredWidth() const;

        public void setGraphicsItem(IQGraphicsItem item);

        public void setMaximumHeight(double height);

        public void setMaximumSize(const(QSizeF) size);

        public void setMaximumSize(double w, double h);

        public void setMaximumWidth(double width);

        public void setMinimumHeight(double height);

        public void setMinimumSize(const(QSizeF) size);

        public void setMinimumSize(double w, double h);

        public void setMinimumWidth(double width);

        public void setOwnedByLayout(bool ownedByLayout);

        public void setParentLayoutItem(IQGraphicsLayoutItem parent_);

        public void setPreferredHeight(double height);

        public void setPreferredSize(const(QSizeF) size);

        public void setPreferredSize(double w, double h);

        public void setPreferredWidth(double width);

        public void setSizePolicy(QSizePolicy.Policy hPolicy, QSizePolicy.Policy vPolicy, QSizePolicy.ControlType controlType = QSizePolicy.ControlType.DefaultType);

        public void setSizePolicy(const(QSizePolicy) policy);

        public QSizePolicy sizePolicy() const;

        public void setGeometry(const(QRectF) rect);

        public QSizeF sizeHint(Qt.SizeHint which, const(QSizeF) constraint = QSizeF()) const;

        public void updateGeometry();

        public void* __ptr_IQGraphicsLayoutItem();

// Field accessors
        public alias void __isQtType_IQGraphicsLayoutItem;

        void qtdSetOwnership(QtdObjectOwnership own) const;// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

