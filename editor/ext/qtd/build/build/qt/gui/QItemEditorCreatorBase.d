module qt.gui.QItemEditorCreatorBase;

public import qt.gui.QItemEditorCreatorBase_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QByteArray;
public import qt.gui.QWidget;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QItemEditorCreatorBase : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QItemEditorCreatorBase_QItemEditorCreatorBase(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract QWidget createWidget(QWidget parent_) const;

    public abstract QByteArray valuePropertyName() const;
// Field accessors
    static QItemEditorCreatorBase __getObject(void* nativeId) {
        return qtd_QItemEditorCreatorBase_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QItemEditorCreatorBase;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QItemEditorCreatorBase_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QItemEditorCreatorBase_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QItemEditorCreatorBase_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QItemEditorCreatorBase_ConcreteWrapper : QItemEditorCreatorBase {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public QWidget createWidget(QWidget parent_) const {
            void *ret = qtd_QItemEditorCreatorBase_createWidget_QWidget_const(qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
            QWidget __d_return_value = QWidget.__getObject(ret);
            return __d_return_value;
        }

        override         public QByteArray valuePropertyName() const {
            void* ret = qtd_QItemEditorCreatorBase_valuePropertyName_const(qtdNativeId);
            QByteArray __d_return_value = new QByteArray(ret);
            return __d_return_value;
        }
    }


extern (C) void *__QItemEditorCreatorBase_entity(void *q_ptr);

QItemEditorCreatorBase qtd_QItemEditorCreatorBase_from_ptr(void* ret) {
    void* d_obj = __QItemEditorCreatorBase_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QItemEditorCreatorBase) d_obj_ref;
    } else {
        auto return_value = new QItemEditorCreatorBase_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QItemEditorCreatorBase_delete(void *ptr);
extern (C) void qtd_QItemEditorCreatorBase_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QItemEditorCreatorBase_QItemEditorCreatorBase(void *d_ptr);
private extern(C) void*  qtd_QItemEditorCreatorBase_createWidget_QWidget_const(void* __this_nativeId,
 void* parent0);
private extern(C) void*  qtd_QItemEditorCreatorBase_valuePropertyName_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId, void* parent0) qtd_QItemEditorCreatorBase_createWidget_QWidget_const_dispatch; }
extern(C) void* qtd_export_QItemEditorCreatorBase_createWidget_QWidget_const_dispatch(void *dId, void* parent0){
    auto d_object = cast(QItemEditorCreatorBase) dId;
    scope parent0_d_ref = new QWidget(parent0, QtdObjectInitFlags.onStack);

    QWidget ret_value = d_object.createWidget(parent0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void* function(void *dId) qtd_QItemEditorCreatorBase_valuePropertyName_const_dispatch; }
extern(C) void* qtd_export_QItemEditorCreatorBase_valuePropertyName_const_dispatch(void *dId){
    auto d_object = cast(QItemEditorCreatorBase) dId;
    QByteArray ret_value = d_object.valuePropertyName();
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QItemEditorCreatorBase_initCallBacks(void* virtuals);

extern(C) void static_init_QItemEditorCreatorBase() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QItemEditorCreatorBase_createWidget_QWidget_const_dispatch;
    virt_arr[1] = &qtd_export_QItemEditorCreatorBase_valuePropertyName_const_dispatch;
    qtd_QItemEditorCreatorBase_initCallBacks(virt_arr.ptr);
}

// signal handlers

