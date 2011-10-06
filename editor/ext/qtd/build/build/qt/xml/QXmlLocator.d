module qt.xml.QXmlLocator;

public import qt.xml.QXmlLocator_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QXmlLocator : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QXmlLocator_QXmlLocator(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract int columnNumber() const;

    public abstract int lineNumber() const;
// Field accessors
    static QXmlLocator __getObject(void* nativeId) {
        return qtd_QXmlLocator_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QXmlLocator;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QXmlLocator_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QXmlLocator_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QXmlLocator_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QXmlLocator_ConcreteWrapper : QXmlLocator {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public int columnNumber() const {
            return qtd_QXmlLocator_columnNumber_const(qtdNativeId);
        }

        override         public int lineNumber() const {
            return qtd_QXmlLocator_lineNumber_const(qtdNativeId);
        }
    }


extern (C) void *__QXmlLocator_entity(void *q_ptr);

QXmlLocator qtd_QXmlLocator_from_ptr(void* ret) {
    void* d_obj = __QXmlLocator_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QXmlLocator) d_obj_ref;
    } else {
        auto return_value = new QXmlLocator_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QXmlLocator_delete(void *ptr);
extern (C) void qtd_QXmlLocator_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlLocator_QXmlLocator(void *d_ptr);
private extern(C) int  qtd_QXmlLocator_columnNumber_const(void* __this_nativeId);
private extern(C) int  qtd_QXmlLocator_lineNumber_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern int function(void *dId) qtd_QXmlLocator_columnNumber_const_dispatch; }
extern(C) int qtd_export_QXmlLocator_columnNumber_const_dispatch(void *dId){
    auto d_object = cast(QXmlLocator) dId;
    auto return_value = d_object.columnNumber();
    return return_value;
}

extern(C){ extern int function(void *dId) qtd_QXmlLocator_lineNumber_const_dispatch; }
extern(C) int qtd_export_QXmlLocator_lineNumber_const_dispatch(void *dId){
    auto d_object = cast(QXmlLocator) dId;
    auto return_value = d_object.lineNumber();
    return return_value;
}

private extern (C) void qtd_QXmlLocator_initCallBacks(void* virtuals);

extern(C) void static_init_QXmlLocator() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QXmlLocator_columnNumber_const_dispatch;
    virt_arr[1] = &qtd_export_QXmlLocator_lineNumber_const_dispatch;
    qtd_QXmlLocator_initCallBacks(virt_arr.ptr);
}

// signal handlers

