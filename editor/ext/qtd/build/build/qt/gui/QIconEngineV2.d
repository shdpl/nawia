module qt.gui.QIconEngineV2;

import qt.core.QSize;
public import qt.gui.QIconEngineV2_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QIcon;
public import qt.gui.QPainter;
public import qt.core.QList;
public import qt.gui.QIconEngine;
public import qt.gui.QPixmap;
public import qt.core.QDataStream;
public import qt.core.QRect;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QIconEngineV2 : QIconEngine
{

// Functions

    public this() {
        void* ret = qtd_QIconEngineV2_QIconEngineV2(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QList!(QSize) availableSizes(QIcon.Mode mode = QIcon.Mode.Normal, QIcon.State state = QIcon.State.Off) {
        auto res = QList!(QSize).opCall();
        qtd_QIconEngineV2_availableSizes_Mode_State(qtdNativeId, &res, mode, state);
        return res;
    }

    public final string iconName() {
        string res;
        qtd_QIconEngineV2_iconName(qtdNativeId, &res);
        return res;
    }

    public string key() const {
        string res;
        qtd_QIconEngineV2_key_const(qtdNativeId, &res);
        return res;
    }

    public bool read(QDataStream in_) {
        return qtd_QIconEngineV2_read_QDataStream(qtdNativeId, in_ is null ? null : in_.qtdNativeId);
    }

    public bool write(QDataStream out_) const {
        return qtd_QIconEngineV2_write_QDataStream_const(qtdNativeId, out_ is null ? null : out_.qtdNativeId);
    }
// Field accessors
    static QIconEngineV2 __getObject(void* nativeId) {
        return qtd_QIconEngineV2_from_ptr(nativeId);
    }

    public alias void __isQtType_QIconEngineV2;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    public QIconEngineV2 clone() {
        return null;
    }

}

    public class QIconEngineV2_ConcreteWrapper : QIconEngineV2 {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public void paint(QPainter painter, const(QRect) rect, QIcon.Mode mode, QIcon.State state) {
            qtd_QIconEngineV2_paint_QPainter_QRect_Mode_State(qtdNativeId, painter is null ? null : painter.qtdNativeId, rect, mode, state);
        }
    }


extern (C) void *__QIconEngineV2_entity(void *q_ptr);

QIconEngineV2 qtd_QIconEngineV2_from_ptr(void* ret) {
    void* d_obj = __QIconEngineV2_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QIconEngineV2) d_obj_ref;
    } else {
        auto return_value = new QIconEngineV2_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QIconEngineV2_QIconEngineV2(void *d_ptr);
private extern(C) void  qtd_QIconEngineV2_availableSizes_Mode_State(void* __this_nativeId,
 void* __d_return_value,
 int mode0,
 int state1);
private extern(C) void  qtd_QIconEngineV2_iconName(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QIconEngineV2_key_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QIconEngineV2_read_QDataStream(void* __this_nativeId,
 void* in0);
private extern(C) bool  qtd_QIconEngineV2_write_QDataStream_const(void* __this_nativeId,
 void* out0);
// Just the private functions for abstract functions implemeneted in superclasses

private extern(C) void  qtd_QIconEngineV2_paint_QPainter_QRect_Mode_State(void* __this_nativeId,
 void* painter0,
 QRect rect1,
 int mode2,
 int state3);



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, string* ret_str) qtd_QIconEngineV2_key_const_dispatch; }
extern(C) void qtd_export_QIconEngineV2_key_const_dispatch(void *dId, string* ret_str){
    auto d_object = cast(QIconEngineV2) dId;
    string _d_str = d_object.key();
    *ret_str = _d_str;
}

extern(C){ extern bool function(void *dId, void* in0) qtd_QIconEngineV2_read_QDataStream_dispatch; }
extern(C) bool qtd_export_QIconEngineV2_read_QDataStream_dispatch(void *dId, void* in0){
    auto d_object = cast(QIconEngineV2) dId;
    scope in0_d_ref = new QDataStream(in0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.read(in0_d_ref);
    return return_value;
}

extern(C){ extern bool function(void *dId, void* out0) qtd_QIconEngineV2_write_QDataStream_const_dispatch; }
extern(C) bool qtd_export_QIconEngineV2_write_QDataStream_const_dispatch(void *dId, void* out0){
    auto d_object = cast(QIconEngineV2) dId;
    scope out0_d_ref = new QDataStream(out0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.write(out0_d_ref);
    return return_value;
}

private extern (C) void qtd_QIconEngineV2_initCallBacks(void* virtuals);

extern(C) void static_init_QIconEngineV2() {
    void*[3] virt_arr;
    virt_arr[0] = &qtd_export_QIconEngineV2_key_const_dispatch;
    virt_arr[1] = &qtd_export_QIconEngineV2_read_QDataStream_dispatch;
    virt_arr[2] = &qtd_export_QIconEngineV2_write_QDataStream_const_dispatch;
    qtd_QIconEngineV2_initCallBacks(virt_arr.ptr);
}

// signal handlers

