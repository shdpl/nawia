module qt.gui.QIconEngine;

public import qt.gui.QIconEngine_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QIcon;
public import qt.gui.QPainter;
public import qt.gui.QPixmap;
public import qt.core.QRect;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QIconEngine : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QIconEngine_QIconEngine(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public QSize actualSize(const(QSize) size, QIcon.Mode mode, QIcon.State state) {
        QSize res;
        qtd_QIconEngine_actualSize_QSize_Mode_State(qtdNativeId, &res, size, mode, state);
        return res;
    }

    public void addFile(string fileName, const(QSize) size, QIcon.Mode mode, QIcon.State state) {
        qtd_QIconEngine_addFile_string_QSize_Mode_State(qtdNativeId, fileName, size, mode, state);
    }

    public void addPixmap(const(QPixmap) pixmap, QIcon.Mode mode, QIcon.State state) {
        qtd_QIconEngine_addPixmap_QPixmap_Mode_State(qtdNativeId, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId, mode, state);
    }

    public abstract void paint(QPainter painter, const(QRect) rect, QIcon.Mode mode, QIcon.State state);

    public QPixmap pixmap(const(QSize) size, QIcon.Mode mode, QIcon.State state) {
        void* ret = qtd_QIconEngine_pixmap_QSize_Mode_State(qtdNativeId, size, mode, state);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }
// Field accessors
    static QIconEngine __getObject(void* nativeId) {
        return qtd_QIconEngine_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QIconEngine;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QIconEngine_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QIconEngine_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QIconEngine_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QIconEngine_ConcreteWrapper : QIconEngine {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public void paint(QPainter painter, const(QRect) rect, QIcon.Mode mode, QIcon.State state) {
            qtd_QIconEngine_paint_QPainter_QRect_Mode_State(qtdNativeId, painter is null ? null : painter.qtdNativeId, rect, mode, state);
        }
    }


extern (C) void *__QIconEngine_entity(void *q_ptr);

QIconEngine qtd_QIconEngine_from_ptr(void* ret) {
    void* d_obj = __QIconEngine_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QIconEngine) d_obj_ref;
    } else {
        auto return_value = new QIconEngine_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QIconEngine_delete(void *ptr);
extern (C) void qtd_QIconEngine_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QIconEngine_QIconEngine(void *d_ptr);
private extern(C) void  qtd_QIconEngine_actualSize_QSize_Mode_State(void* __this_nativeId,
 QSize * __d_return_value,
 QSize size0,
 int mode1,
 int state2);
private extern(C) void  qtd_QIconEngine_addFile_string_QSize_Mode_State(void* __this_nativeId,
 string fileName0,
 QSize size1,
 int mode2,
 int state3);
private extern(C) void  qtd_QIconEngine_addPixmap_QPixmap_Mode_State(void* __this_nativeId,
 void* pixmap0,
 int mode1,
 int state2);
private extern(C) void  qtd_QIconEngine_paint_QPainter_QRect_Mode_State(void* __this_nativeId,
 void* painter0,
 QRect rect1,
 int mode2,
 int state3);
private extern(C) void*  qtd_QIconEngine_pixmap_QSize_Mode_State(void* __this_nativeId,
 QSize size0,
 int mode1,
 int state2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, QSize *__d_return_value, QSize* size0, int mode1, int state2) qtd_QIconEngine_actualSize_QSize_Mode_State_dispatch; }
extern(C) void qtd_export_QIconEngine_actualSize_QSize_Mode_State_dispatch(void *dId, QSize *__d_return_value, QSize* size0, int mode1, int state2){
    auto d_object = cast(QIconEngine) dId;
    auto mode1_enum = cast(QIcon.Mode) mode1;
    auto state2_enum = cast(QIcon.State) state2;
    *__d_return_value = d_object.actualSize(*size0, mode1_enum, state2_enum);
}

extern(C){ extern void function(void *dId, wchar* fileName0, int fileName0_size, QSize* size1, int mode2, int state3) qtd_QIconEngine_addFile_string_QSize_Mode_State_dispatch; }
extern(C) void qtd_export_QIconEngine_addFile_string_QSize_Mode_State_dispatch(void *dId, wchar* fileName0, int fileName0_size, QSize* size1, int mode2, int state3){
    auto d_object = cast(QIconEngine) dId;
    string fileName0_d_ref = toUTF8(fileName0[0..fileName0_size]);
    auto mode2_enum = cast(QIcon.Mode) mode2;
    auto state3_enum = cast(QIcon.State) state3;
    d_object.addFile(fileName0_d_ref, *size1, mode2_enum, state3_enum);
}

extern(C){ extern void function(void *dId, void* pixmap0, int mode1, int state2) qtd_QIconEngine_addPixmap_QPixmap_Mode_State_dispatch; }
extern(C) void qtd_export_QIconEngine_addPixmap_QPixmap_Mode_State_dispatch(void *dId, void* pixmap0, int mode1, int state2){
    auto d_object = cast(QIconEngine) dId;
    scope pixmap0_d_ref = new QPixmap(pixmap0, QtdObjectInitFlags.onStack);
    auto mode1_enum = cast(QIcon.Mode) mode1;
    auto state2_enum = cast(QIcon.State) state2;
    d_object.addPixmap(pixmap0_d_ref, mode1_enum, state2_enum);
}

extern(C){ extern void function(void *dId, void* painter0, QRect* rect1, int mode2, int state3) qtd_QIconEngine_paint_QPainter_QRect_Mode_State_dispatch; }
extern(C) void qtd_export_QIconEngine_paint_QPainter_QRect_Mode_State_dispatch(void *dId, void* painter0, QRect* rect1, int mode2, int state3){
    auto d_object = cast(QIconEngine) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    auto mode2_enum = cast(QIcon.Mode) mode2;
    auto state3_enum = cast(QIcon.State) state3;
    d_object.paint(painter0_d_ref, *rect1, mode2_enum, state3_enum);
}

extern(C){ extern void* function(void *dId, QSize* size0, int mode1, int state2) qtd_QIconEngine_pixmap_QSize_Mode_State_dispatch; }
extern(C) void* qtd_export_QIconEngine_pixmap_QSize_Mode_State_dispatch(void *dId, QSize* size0, int mode1, int state2){
    auto d_object = cast(QIconEngine) dId;
    auto mode1_enum = cast(QIcon.Mode) mode1;
    auto state2_enum = cast(QIcon.State) state2;
    QPixmap ret_value = d_object.pixmap(*size0, mode1_enum, state2_enum);
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QIconEngine_initCallBacks(void* virtuals);

extern(C) void static_init_QIconEngine() {
    void*[5] virt_arr;
    virt_arr[0] = &qtd_export_QIconEngine_actualSize_QSize_Mode_State_dispatch;
    virt_arr[1] = &qtd_export_QIconEngine_addFile_string_QSize_Mode_State_dispatch;
    virt_arr[2] = &qtd_export_QIconEngine_addPixmap_QPixmap_Mode_State_dispatch;
    virt_arr[3] = &qtd_export_QIconEngine_paint_QPainter_QRect_Mode_State_dispatch;
    virt_arr[4] = &qtd_export_QIconEngine_pixmap_QSize_Mode_State_dispatch;
    qtd_QIconEngine_initCallBacks(virt_arr.ptr);
}

// signal handlers

