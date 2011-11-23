module qt.gui.QGraphicsLinearLayout;

public import qt.gui.QGraphicsLinearLayout_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.core.QRectF;
public import qt.core.QEvent;
public import qt.core.QSizeF;
public import qt.gui.QGraphicsLayoutItem;
public import qt.gui.QGraphicsLayout;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGraphicsLinearLayout : QGraphicsLayout
{

    package Object[] __rcItems;

// Functions

    public this(IQGraphicsLayoutItem parent_ = null) {
        void* ret = qtd_QGraphicsLinearLayout_QGraphicsLinearLayout_QGraphicsLayoutItem(cast(void*) this, parent_ is null ? null : parent_.__ptr_IQGraphicsLayoutItem);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(Qt.Orientation orientation, IQGraphicsLayoutItem parent_ = null) {
        void* ret = qtd_QGraphicsLinearLayout_QGraphicsLinearLayout_Orientation_QGraphicsLayoutItem(cast(void*) this, orientation, parent_ is null ? null : parent_.__ptr_IQGraphicsLayoutItem);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addItem(IQGraphicsLayoutItem item) {
        if (item !is null) {
            __rcItems ~= cast(Object) item;
        }
        qtd_QGraphicsLinearLayout_addItem_QGraphicsLayoutItem(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsLayoutItem);
    }

    public final void addStretch(int stretch = 1) {
        qtd_QGraphicsLinearLayout_addStretch_int(qtdNativeId, stretch);
    }

    public final int alignment(IQGraphicsLayoutItem item) const {
        return qtd_QGraphicsLinearLayout_alignment_QGraphicsLayoutItem_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsLayoutItem);
    }

    public final void dump(int indent = 0) const {
        qtd_QGraphicsLinearLayout_dump_int_const(qtdNativeId, indent);
    }

    public final void insertItem(int index, IQGraphicsLayoutItem item) {
        if (item !is null) {
            __rcItems ~= cast(Object) item;
        }
        qtd_QGraphicsLinearLayout_insertItem_int_QGraphicsLayoutItem(qtdNativeId, index, item is null ? null : item.__ptr_IQGraphicsLayoutItem);
    }

    public final void insertStretch(int index, int stretch = 1) {
        qtd_QGraphicsLinearLayout_insertStretch_int_int(qtdNativeId, index, stretch);
    }

    public final double itemSpacing(int index) const {
        return qtd_QGraphicsLinearLayout_itemSpacing_int_const(qtdNativeId, index);
    }

    public final Qt.Orientation orientation() const {
        return cast(Qt.Orientation) qtd_QGraphicsLinearLayout_orientation_const(qtdNativeId);
    }

    public final void removeItem(IQGraphicsLayoutItem item) {
        if (item !is null) {
            remove(__rcItems, cast(Object) item);
        }
        qtd_QGraphicsLinearLayout_removeItem_QGraphicsLayoutItem(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsLayoutItem);
    }

    public final void setAlignment(IQGraphicsLayoutItem item, int alignment) {
        qtd_QGraphicsLinearLayout_setAlignment_QGraphicsLayoutItem_Alignment(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsLayoutItem, alignment);
    }

    public final void setItemSpacing(int index, double spacing) {
        qtd_QGraphicsLinearLayout_setItemSpacing_int_double(qtdNativeId, index, spacing);
    }

    public final void setOrientation(Qt.Orientation orientation) {
        qtd_QGraphicsLinearLayout_setOrientation_Orientation(qtdNativeId, orientation);
    }

    public final void setSpacing(double spacing) {
        qtd_QGraphicsLinearLayout_setSpacing_double(qtdNativeId, spacing);
    }

    public final void setStretchFactor(IQGraphicsLayoutItem item, int stretch) {
        qtd_QGraphicsLinearLayout_setStretchFactor_QGraphicsLayoutItem_int(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsLayoutItem, stretch);
    }

    public final double spacing() const {
        return qtd_QGraphicsLinearLayout_spacing_const(qtdNativeId);
    }

    public final int stretchFactor(IQGraphicsLayoutItem item) const {
        return qtd_QGraphicsLinearLayout_stretchFactor_QGraphicsLayoutItem_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsLayoutItem);
    }

    public int count() const {
        return qtd_QGraphicsLinearLayout_count_const(qtdNativeId);
    }

    public void invalidate() {
        qtd_QGraphicsLinearLayout_invalidate(qtdNativeId);
    }

    public IQGraphicsLayoutItem itemAt(int index) const {
        void* ret = qtd_QGraphicsLinearLayout_itemAt_int_const(qtdNativeId, index);
        IQGraphicsLayoutItem __d_return_value = qtd_QGraphicsLayoutItem_from_ptr(ret);

        return __d_return_value;
    }

    public void removeAt(int index) {
        qtd_QGraphicsLinearLayout_removeAt_int(qtdNativeId, index);
    }

    public void setGeometry(const(QRectF) rect) {
        qtd_QGraphicsLinearLayout_setGeometry_QRectF(qtdNativeId, rect);
    }

    public QSizeF sizeHint(Qt.SizeHint which, const(QSizeF) constraint = QSizeF()) const {
        QSizeF res;
        qtd_QGraphicsLinearLayout_sizeHint_SizeHint_QSizeF_const(qtdNativeId, &res, which, constraint);
        return res;
    }
// Field accessors
    static QGraphicsLinearLayout __getObject(void* nativeId) {
        return qtd_QGraphicsLinearLayout_from_ptr(nativeId);
    }

    public alias void __isQtType_QGraphicsLinearLayout;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QGraphicsLinearLayout_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QGraphicsLinearLayout_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QGraphicsLinearLayout_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QGraphicsLinearLayout_entity(void *q_ptr);

QGraphicsLinearLayout qtd_QGraphicsLinearLayout_from_ptr(void* ret) {
    void* d_obj = __QGraphicsLinearLayout_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QGraphicsLinearLayout) d_obj_ref;
    } else {
        auto return_value = new QGraphicsLinearLayout(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QGraphicsLinearLayout_delete(void *ptr);
extern (C) void qtd_QGraphicsLinearLayout_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGraphicsLinearLayout_QGraphicsLinearLayout_QGraphicsLayoutItem(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QGraphicsLinearLayout_QGraphicsLinearLayout_Orientation_QGraphicsLayoutItem(void *d_ptr,
 int orientation0,
 void* parent1);
private extern(C) void  qtd_QGraphicsLinearLayout_addItem_QGraphicsLayoutItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QGraphicsLinearLayout_addStretch_int(void* __this_nativeId,
 int stretch0);
private extern(C) int  qtd_QGraphicsLinearLayout_alignment_QGraphicsLayoutItem_const(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QGraphicsLinearLayout_dump_int_const(void* __this_nativeId,
 int indent0);
private extern(C) void  qtd_QGraphicsLinearLayout_insertItem_int_QGraphicsLayoutItem(void* __this_nativeId,
 int index0,
 void* item1);
private extern(C) void  qtd_QGraphicsLinearLayout_insertStretch_int_int(void* __this_nativeId,
 int index0,
 int stretch1);
private extern(C) double  qtd_QGraphicsLinearLayout_itemSpacing_int_const(void* __this_nativeId,
 int index0);
private extern(C) int  qtd_QGraphicsLinearLayout_orientation_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsLinearLayout_removeItem_QGraphicsLayoutItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QGraphicsLinearLayout_setAlignment_QGraphicsLayoutItem_Alignment(void* __this_nativeId,
 void* item0,
 int alignment1);
private extern(C) void  qtd_QGraphicsLinearLayout_setItemSpacing_int_double(void* __this_nativeId,
 int index0,
 double spacing1);
private extern(C) void  qtd_QGraphicsLinearLayout_setOrientation_Orientation(void* __this_nativeId,
 int orientation0);
private extern(C) void  qtd_QGraphicsLinearLayout_setSpacing_double(void* __this_nativeId,
 double spacing0);
private extern(C) void  qtd_QGraphicsLinearLayout_setStretchFactor_QGraphicsLayoutItem_int(void* __this_nativeId,
 void* item0,
 int stretch1);
private extern(C) double  qtd_QGraphicsLinearLayout_spacing_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsLinearLayout_stretchFactor_QGraphicsLayoutItem_const(void* __this_nativeId,
 void* item0);
private extern(C) int  qtd_QGraphicsLinearLayout_count_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsLinearLayout_invalidate(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsLinearLayout_itemAt_int_const(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QGraphicsLinearLayout_removeAt_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QGraphicsLinearLayout_setGeometry_QRectF(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsLinearLayout_sizeHint_SizeHint_QSizeF_const(void* __this_nativeId,
 QSizeF * __d_return_value,
 int which0,
 QSizeF constraint1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGraphicsLinearLayout_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsLinearLayout() {
    qtd_QGraphicsLinearLayout_initCallBacks(null);
}

// signal handlers

