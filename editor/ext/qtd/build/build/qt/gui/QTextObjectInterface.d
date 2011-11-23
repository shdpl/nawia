module qt.gui.QTextObjectInterface;

public import qt.gui.QTextObjectInterface_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QPainter;
public import qt.gui.QTextDocument;
public import qt.core.QRectF;
public import qt.core.QSizeF;
public import qt.gui.QTextFormat;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QTextObjectInterface : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QTextObjectInterface_QTextObjectInterface(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract void drawObject(QPainter painter, const(QRectF) rect, QTextDocument doc, int posInDocument, const(QTextFormat) format);

    public abstract QSizeF intrinsicSize(QTextDocument doc, int posInDocument, const(QTextFormat) format);
// Field accessors
    static QTextObjectInterface __getObject(void* nativeId) {
        return qtd_QTextObjectInterface_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QTextObjectInterface;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextObjectInterface_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextObjectInterface_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextObjectInterface_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QTextObjectInterface_ConcreteWrapper : QTextObjectInterface {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public void drawObject(QPainter painter, const(QRectF) rect, QTextDocument doc, int posInDocument, const(QTextFormat) format) {
            qtd_QTextObjectInterface_drawObject_QPainter_QRectF_QTextDocument_int_QTextFormat(qtdNativeId, painter is null ? null : painter.qtdNativeId, rect, doc is null ? null : doc.qtdNativeId, posInDocument, format is null ? null : (cast(QTextFormat)format).qtdNativeId);
        }

        override         public QSizeF intrinsicSize(QTextDocument doc, int posInDocument, const(QTextFormat) format) {
            QSizeF res;
            qtd_QTextObjectInterface_intrinsicSize_QTextDocument_int_QTextFormat(qtdNativeId, &res, doc is null ? null : doc.qtdNativeId, posInDocument, format is null ? null : (cast(QTextFormat)format).qtdNativeId);
            return res;
        }
    }


extern (C) void *__QTextObjectInterface_entity(void *q_ptr);

QTextObjectInterface qtd_QTextObjectInterface_from_ptr(void* ret) {
    void* d_obj = __QTextObjectInterface_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QTextObjectInterface) d_obj_ref;
    } else {
        auto return_value = new QTextObjectInterface_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QTextObjectInterface_delete(void *ptr);
extern (C) void qtd_QTextObjectInterface_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextObjectInterface_QTextObjectInterface(void *d_ptr);
private extern(C) void  qtd_QTextObjectInterface_drawObject_QPainter_QRectF_QTextDocument_int_QTextFormat(void* __this_nativeId,
 void* painter0,
 QRectF rect1,
 void* doc2,
 int posInDocument3,
 void* format4);
private extern(C) void  qtd_QTextObjectInterface_intrinsicSize_QTextDocument_int_QTextFormat(void* __this_nativeId,
 QSizeF * __d_return_value,
 void* doc0,
 int posInDocument1,
 void* format2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, void* painter0, QRectF* rect1, void* doc2, int posInDocument3, void* format4) qtd_QTextObjectInterface_drawObject_QPainter_QRectF_QTextDocument_int_QTextFormat_dispatch; }
extern(C) void qtd_export_QTextObjectInterface_drawObject_QPainter_QRectF_QTextDocument_int_QTextFormat_dispatch(void *dId, void* painter0, QRectF* rect1, void* doc2, int posInDocument3, void* format4){
    auto d_object = cast(QTextObjectInterface) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    scope doc2_d_ref = new QTextDocument(doc2, QtdObjectInitFlags.onStack);

    scope format4_d_ref = new QTextFormat(format4, QtdObjectInitFlags.onStack);
    d_object.drawObject(painter0_d_ref, *rect1, doc2_d_ref, posInDocument3, format4_d_ref);
}

extern(C){ extern void function(void *dId, QSizeF *__d_return_value, void* doc0, int posInDocument1, void* format2) qtd_QTextObjectInterface_intrinsicSize_QTextDocument_int_QTextFormat_dispatch; }
extern(C) void qtd_export_QTextObjectInterface_intrinsicSize_QTextDocument_int_QTextFormat_dispatch(void *dId, QSizeF *__d_return_value, void* doc0, int posInDocument1, void* format2){
    auto d_object = cast(QTextObjectInterface) dId;
    scope doc0_d_ref = new QTextDocument(doc0, QtdObjectInitFlags.onStack);

    scope format2_d_ref = new QTextFormat(format2, QtdObjectInitFlags.onStack);
    *__d_return_value = d_object.intrinsicSize(doc0_d_ref, posInDocument1, format2_d_ref);
}

private extern (C) void qtd_QTextObjectInterface_initCallBacks(void* virtuals);

extern(C) void static_init_QTextObjectInterface() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QTextObjectInterface_drawObject_QPainter_QRectF_QTextDocument_int_QTextFormat_dispatch;
    virt_arr[1] = &qtd_export_QTextObjectInterface_intrinsicSize_QTextDocument_int_QTextFormat_dispatch;
    qtd_QTextObjectInterface_initCallBacks(virt_arr.ptr);
}

// signal handlers

