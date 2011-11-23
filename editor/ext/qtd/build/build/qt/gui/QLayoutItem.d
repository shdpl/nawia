module qt.gui.QLayoutItem;

public import qt.gui.QLayoutItem_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QLayout;
public import qt.core.QRect;
public import qt.gui.QSpacerItem;
public import qt.gui.QWidget;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QLayoutItem : QtdObject, IQLayoutItem
{

// Functions

    public this(int alignment = 0) {
        void* ret = qtd_QLayoutItem_QLayoutItem_Alignment(cast(void*) this, alignment);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int alignment() const {
        return qtd_QLayoutItem_alignment_const(qtdNativeId);
    }

    public final int controlTypes() const {
        return qtd_QLayoutItem_controlTypes_const(qtdNativeId);
    }

    public final void setAlignment(int a) {
        qtd_QLayoutItem_setAlignment_Alignment(qtdNativeId, a);
    }

    public abstract int expandingDirections() const;

    public abstract QRect geometry() const;

    public bool hasHeightForWidth() const {
        return qtd_QLayoutItem_hasHeightForWidth_const(qtdNativeId);
    }

    public int heightForWidth(int arg__1) const {
        return qtd_QLayoutItem_heightForWidth_int_const(qtdNativeId, arg__1);
    }

    public void invalidate() {
        qtd_QLayoutItem_invalidate(qtdNativeId);
    }

    public abstract bool isEmpty() const;

    public QLayout layout() {
        void *ret = qtd_QLayoutItem_layout(qtdNativeId);
        QLayout __d_return_value = QLayout.__getObject(ret);
        return __d_return_value;
    }

    public abstract QSize maximumSize() const;

    public int minimumHeightForWidth(int arg__1) const {
        return qtd_QLayoutItem_minimumHeightForWidth_int_const(qtdNativeId, arg__1);
    }

    public abstract QSize minimumSize() const;

    public abstract void setGeometry(const(QRect) arg__1);

    public abstract QSize sizeHint() const;

    public QSpacerItem spacerItem() {
        void* ret = qtd_QLayoutItem_spacerItem(qtdNativeId);
        QSpacerItem __d_return_value = qtd_QSpacerItem_from_ptr(ret);

        return __d_return_value;
    }

    public QWidget widget() {
        void *ret = qtd_QLayoutItem_widget(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }
// Field accessors

    protected final void align_(int align_) {
        qtd_QLayoutItem_align__Alignment(qtdNativeId, align_);
    }

    protected final int align_() {
        return qtd_QLayoutItem_align_(qtdNativeId);
    }
    static IQLayoutItem __getObject(void* nativeId) {
        return qtd_QLayoutItem_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QLayoutItem;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQLayoutItem = qtd_QLayoutItem_cast_to_QLayoutItem(nativeId);
    }

    private void* __m_ptr_IQLayoutItem;
    public void* __ptr_IQLayoutItem() { return __m_ptr_IQLayoutItem; }

    protected override void qtdDeleteNative() {
        qtd_QLayoutItem_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QLayoutItem_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QLayoutItem_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QLayoutItem_cast_to_QLayoutItem(void* nativeId);

    public class QLayoutItem_ConcreteWrapper : QLayoutItem {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public int expandingDirections() const {
            return qtd_QLayoutItem_expandingDirections_const(qtdNativeId);
        }

        override         public QRect geometry() const {
            QRect res;
            qtd_QLayoutItem_geometry_const(qtdNativeId, &res);
            return res;
        }

        override         public bool isEmpty() const {
            return qtd_QLayoutItem_isEmpty_const(qtdNativeId);
        }

        override         public QSize maximumSize() const {
            QSize res;
            qtd_QLayoutItem_maximumSize_const(qtdNativeId, &res);
            return res;
        }

        override         public QSize minimumSize() const {
            QSize res;
            qtd_QLayoutItem_minimumSize_const(qtdNativeId, &res);
            return res;
        }

        override         public void setGeometry(const(QRect) arg__1) {
            qtd_QLayoutItem_setGeometry_QRect(qtdNativeId, arg__1);
        }

        override         public QSize sizeHint() const {
            QSize res;
            qtd_QLayoutItem_sizeHint_const(qtdNativeId, &res);
            return res;
        }
    }


extern (C) void *__QLayoutItem_entity(void *q_ptr);

IQLayoutItem qtd_QLayoutItem_from_ptr(void* ret) {
    void* d_obj = __QLayoutItem_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(IQLayoutItem) d_obj_ref;
    } else {
        auto return_value = new QLayoutItem_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QLayoutItem_delete(void *ptr);
extern (C) void qtd_QLayoutItem_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QLayoutItem_QLayoutItem_Alignment(void *d_ptr,
 int alignment0);
private extern(C) int  qtd_QLayoutItem_alignment_const(void* __this_nativeId);
private extern(C) int  qtd_QLayoutItem_controlTypes_const(void* __this_nativeId);
private extern(C) void  qtd_QLayoutItem_setAlignment_Alignment(void* __this_nativeId,
 int a0);
private extern(C) int  qtd_QLayoutItem_expandingDirections_const(void* __this_nativeId);
private extern(C) void  qtd_QLayoutItem_geometry_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) bool  qtd_QLayoutItem_hasHeightForWidth_const(void* __this_nativeId);
private extern(C) int  qtd_QLayoutItem_heightForWidth_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QLayoutItem_invalidate(void* __this_nativeId);
private extern(C) bool  qtd_QLayoutItem_isEmpty_const(void* __this_nativeId);
private extern(C) void*  qtd_QLayoutItem_layout(void* __this_nativeId);
private extern(C) void  qtd_QLayoutItem_maximumSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) int  qtd_QLayoutItem_minimumHeightForWidth_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QLayoutItem_minimumSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QLayoutItem_setGeometry_QRect(void* __this_nativeId,
 QRect arg__1);
private extern(C) void  qtd_QLayoutItem_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void*  qtd_QLayoutItem_spacerItem(void* __this_nativeId);
private extern(C) void*  qtd_QLayoutItem_widget(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QLayoutItem_align__Alignment(void* __this_nativeId,
 int align0);
private extern(C) int  qtd_QLayoutItem_align_(void* __this_nativeId);



// Virtual Dispatch functions
extern(C){ extern int function(void *dId) qtd_QLayoutItem_expandingDirections_const_dispatch; }
extern(C) int qtd_export_QLayoutItem_expandingDirections_const_dispatch(void *dId){
    auto d_object = cast(IQLayoutItem)cast(Object) dId;
    auto return_value = d_object.expandingDirections();
    return return_value;
}

extern(C){ extern void function(void *dId, QRect *__d_return_value) qtd_QLayoutItem_geometry_const_dispatch; }
extern(C) void qtd_export_QLayoutItem_geometry_const_dispatch(void *dId, QRect *__d_return_value){
    auto d_object = cast(IQLayoutItem)cast(Object) dId;
    *__d_return_value = d_object.geometry();
}

extern(C){ extern bool function(void *dId) qtd_QLayoutItem_hasHeightForWidth_const_dispatch; }
extern(C) bool qtd_export_QLayoutItem_hasHeightForWidth_const_dispatch(void *dId){
    auto d_object = cast(IQLayoutItem)cast(Object) dId;
    auto return_value = d_object.hasHeightForWidth();
    return return_value;
}

extern(C){ extern int function(void *dId, int arg__1) qtd_QLayoutItem_heightForWidth_int_const_dispatch; }
extern(C) int qtd_export_QLayoutItem_heightForWidth_int_const_dispatch(void *dId, int arg__1){
    auto d_object = cast(IQLayoutItem)cast(Object) dId;
    auto return_value = d_object.heightForWidth(arg__1);
    return return_value;
}

extern(C){ extern void function(void *dId) qtd_QLayoutItem_invalidate_dispatch; }
extern(C) void qtd_export_QLayoutItem_invalidate_dispatch(void *dId){
    auto d_object = cast(IQLayoutItem)cast(Object) dId;
    d_object.invalidate();
}

extern(C){ extern bool function(void *dId) qtd_QLayoutItem_isEmpty_const_dispatch; }
extern(C) bool qtd_export_QLayoutItem_isEmpty_const_dispatch(void *dId){
    auto d_object = cast(IQLayoutItem)cast(Object) dId;
    auto return_value = d_object.isEmpty();
    return return_value;
}

extern(C){ extern void* function(void *dId) qtd_QLayoutItem_layout_dispatch; }
extern(C) void* qtd_export_QLayoutItem_layout_dispatch(void *dId){
    auto d_object = cast(IQLayoutItem)cast(Object) dId;
    QLayout ret_value = d_object.layout();
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, QSize *__d_return_value) qtd_QLayoutItem_maximumSize_const_dispatch; }
extern(C) void qtd_export_QLayoutItem_maximumSize_const_dispatch(void *dId, QSize *__d_return_value){
    auto d_object = cast(IQLayoutItem)cast(Object) dId;
    *__d_return_value = d_object.maximumSize();
}

extern(C){ extern int function(void *dId, int arg__1) qtd_QLayoutItem_minimumHeightForWidth_int_const_dispatch; }
extern(C) int qtd_export_QLayoutItem_minimumHeightForWidth_int_const_dispatch(void *dId, int arg__1){
    auto d_object = cast(IQLayoutItem)cast(Object) dId;
    auto return_value = d_object.minimumHeightForWidth(arg__1);
    return return_value;
}

extern(C){ extern void function(void *dId, QSize *__d_return_value) qtd_QLayoutItem_minimumSize_const_dispatch; }
extern(C) void qtd_export_QLayoutItem_minimumSize_const_dispatch(void *dId, QSize *__d_return_value){
    auto d_object = cast(IQLayoutItem)cast(Object) dId;
    *__d_return_value = d_object.minimumSize();
}

extern(C){ extern void function(void *dId, QRect* arg__1) qtd_QLayoutItem_setGeometry_QRect_dispatch; }
extern(C) void qtd_export_QLayoutItem_setGeometry_QRect_dispatch(void *dId, QRect* arg__1){
    auto d_object = cast(IQLayoutItem)cast(Object) dId;
    d_object.setGeometry(*arg__1);
}

extern(C){ extern void function(void *dId, QSize *__d_return_value) qtd_QLayoutItem_sizeHint_const_dispatch; }
extern(C) void qtd_export_QLayoutItem_sizeHint_const_dispatch(void *dId, QSize *__d_return_value){
    auto d_object = cast(IQLayoutItem)cast(Object) dId;
    *__d_return_value = d_object.sizeHint();
}

extern(C){ extern void* function(void *dId) qtd_QLayoutItem_spacerItem_dispatch; }
extern(C) void* qtd_export_QLayoutItem_spacerItem_dispatch(void *dId){
    auto d_object = cast(IQLayoutItem)cast(Object) dId;
    QSpacerItem ret_value = d_object.spacerItem();
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void* function(void *dId) qtd_QLayoutItem_widget_dispatch; }
extern(C) void* qtd_export_QLayoutItem_widget_dispatch(void *dId){
    auto d_object = cast(IQLayoutItem)cast(Object) dId;
    QWidget ret_value = d_object.widget();
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QLayoutItem_initCallBacks(void* virtuals);

extern(C) void static_init_QLayoutItem() {
    void*[14] virt_arr;
    virt_arr[0] = &qtd_export_QLayoutItem_expandingDirections_const_dispatch;
    virt_arr[1] = &qtd_export_QLayoutItem_geometry_const_dispatch;
    virt_arr[2] = &qtd_export_QLayoutItem_hasHeightForWidth_const_dispatch;
    virt_arr[3] = &qtd_export_QLayoutItem_heightForWidth_int_const_dispatch;
    virt_arr[4] = &qtd_export_QLayoutItem_invalidate_dispatch;
    virt_arr[5] = &qtd_export_QLayoutItem_isEmpty_const_dispatch;
    virt_arr[6] = &qtd_export_QLayoutItem_layout_dispatch;
    virt_arr[7] = &qtd_export_QLayoutItem_maximumSize_const_dispatch;
    virt_arr[8] = &qtd_export_QLayoutItem_minimumHeightForWidth_int_const_dispatch;
    virt_arr[9] = &qtd_export_QLayoutItem_minimumSize_const_dispatch;
    virt_arr[10] = &qtd_export_QLayoutItem_setGeometry_QRect_dispatch;
    virt_arr[11] = &qtd_export_QLayoutItem_sizeHint_const_dispatch;
    virt_arr[12] = &qtd_export_QLayoutItem_spacerItem_dispatch;
    virt_arr[13] = &qtd_export_QLayoutItem_widget_dispatch;
    qtd_QLayoutItem_initCallBacks(virt_arr.ptr);
}

// signal handlers

public interface IQLayoutItem
{
// Functions

        public int alignment() const;

        public int controlTypes() const;

        public void setAlignment(int a);

        public int expandingDirections() const;

        public QRect geometry() const;

        public bool hasHeightForWidth() const;

        public int heightForWidth(int arg__1) const;

        public void invalidate();

        public bool isEmpty() const;

        public QLayout layout();

        public QSize maximumSize() const;

        public int minimumHeightForWidth(int arg__1) const;

        public QSize minimumSize() const;

        public void setGeometry(const(QRect) arg__1);

        public QSize sizeHint() const;

        public QSpacerItem spacerItem();

        public QWidget widget();

        public void* __ptr_IQLayoutItem();

// Field accessors
        public alias void __isQtType_IQLayoutItem;

        void qtdSetOwnership(QtdObjectOwnership own) const;// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

