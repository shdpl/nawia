module qt.gui.QAccessibleBridge;

public import qt.gui.QAccessibleBridge_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QAccessibleInterface;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAccessibleBridge : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QAccessibleBridge_QAccessibleBridge(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract void notifyAccessibilityUpdate(int arg__1, QAccessibleInterface arg__2, int arg__3);

    public abstract void setRootObject(QAccessibleInterface arg__1);
// Field accessors
    static QAccessibleBridge __getObject(void* nativeId) {
        return qtd_QAccessibleBridge_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QAccessibleBridge;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QAccessibleBridge_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QAccessibleBridge_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QAccessibleBridge_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QAccessibleBridge_ConcreteWrapper : QAccessibleBridge {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public void notifyAccessibilityUpdate(int arg__1, QAccessibleInterface arg__2, int arg__3) {
            qtd_QAccessibleBridge_notifyAccessibilityUpdate_int_QAccessibleInterface_int(qtdNativeId, arg__1, arg__2 is null ? null : arg__2.qtdNativeId, arg__3);
        }

        override         public void setRootObject(QAccessibleInterface arg__1) {
            qtd_QAccessibleBridge_setRootObject_QAccessibleInterface(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
        }
    }


extern (C) void *__QAccessibleBridge_entity(void *q_ptr);

QAccessibleBridge qtd_QAccessibleBridge_from_ptr(void* ret) {
    void* d_obj = __QAccessibleBridge_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QAccessibleBridge) d_obj_ref;
    } else {
        auto return_value = new QAccessibleBridge_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QAccessibleBridge_delete(void *ptr);
extern (C) void qtd_QAccessibleBridge_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAccessibleBridge_QAccessibleBridge(void *d_ptr);
private extern(C) void  qtd_QAccessibleBridge_notifyAccessibilityUpdate_int_QAccessibleInterface_int(void* __this_nativeId,
 int arg__1,
 void* arg__2,
 int arg__3);
private extern(C) void  qtd_QAccessibleBridge_setRootObject_QAccessibleInterface(void* __this_nativeId,
 void* arg__1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, int arg__1, void* arg__2, int arg__3) qtd_QAccessibleBridge_notifyAccessibilityUpdate_int_QAccessibleInterface_int_dispatch; }
extern(C) void qtd_export_QAccessibleBridge_notifyAccessibilityUpdate_int_QAccessibleInterface_int_dispatch(void *dId, int arg__1, void* arg__2, int arg__3){
    auto d_object = cast(QAccessibleBridge) dId;
    scope arg__2_d_ref = new QAccessibleInterface_ConcreteWrapper(arg__2, QtdObjectInitFlags.onStack);
    d_object.notifyAccessibilityUpdate(arg__1, arg__2_d_ref, arg__3);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QAccessibleBridge_setRootObject_QAccessibleInterface_dispatch; }
extern(C) void qtd_export_QAccessibleBridge_setRootObject_QAccessibleInterface_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QAccessibleBridge) dId;
    scope arg__1_d_ref = new QAccessibleInterface_ConcreteWrapper(arg__1, QtdObjectInitFlags.onStack);
    d_object.setRootObject(arg__1_d_ref);
}

private extern (C) void qtd_QAccessibleBridge_initCallBacks(void* virtuals);

extern(C) void static_init_QAccessibleBridge() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QAccessibleBridge_notifyAccessibilityUpdate_int_QAccessibleInterface_int_dispatch;
    virt_arr[1] = &qtd_export_QAccessibleBridge_setRootObject_QAccessibleInterface_dispatch;
    qtd_QAccessibleBridge_initCallBacks(virt_arr.ptr);
}

// signal handlers

