module qt.gui.QAbstractTextDocumentLayout;

public import qt.gui.QAbstractTextDocumentLayout_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
public import qtd.MOC : Q_OBJECT;
import qtd.Signal;
import qt.core.QMetaObject;
import qtd.meta.Runtime;
import qt.core.QObject;
private import qt.gui.ArrayOps2;
// automatic imports-------------
public import qt.core.Qt;
public import qt.core.QSizeF;
public import qt.core.QRectF;
public import qt.gui.QTextInlineObject;
public import qt.gui.QTextFormat;
public import qt.gui.QPaintDevice;
public import qt.gui.QTextObjectInterface;
public import qt.gui.QPainter;
public import qt.core.QChildEvent;
public import qt.gui.QAbstractTextDocumentLayout_PaintContext;
public import qt.gui.QTextFrame;
public import qt.gui.QTextBlock;
public import qt.core.QEvent;
public import qt.gui.QTextCharFormat;
public import qt.gui.QTextDocument;
public import qt.core.QPointF;
public import qt.core.QObject;
public import qt.core.QTimerEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAbstractTextDocumentLayout : QObject
{

Object __rcPaintDevice = null;

    private static const string[] __signalSignatures = [
            "documentSizeChanged(QSizeF)", 
            "pageCountChanged(int)", 
            "update(QRectF)", 
            "update()", 
            "updateBlock(QTextBlock)"    ];

    int signalSignature(int signalId, ref stringz signature) {
        signalId = super.signalSignature(signalId, signature);
        if (signature)
            return signalId;
        if (signalId < __signalSignatures.length)
            signature = __signalSignatures[signalId].ptr;
        else
            signalId -= __signalSignatures.length;
        return signalId;
    }

    protected final void documentSizeChanged(const(QSizeF) newSize) {
        qtd_QAbstractTextDocumentLayout_documentSizeChanged_QSizeF(qtdNativeId, newSize);
    }

    protected final void pageCountChanged(int newPages) {
        qtd_QAbstractTextDocumentLayout_pageCountChanged_int(qtdNativeId, newPages);
    }

    protected final void update(const(QRectF) arg__1 = QRectF(0., 0., 1000000000., 1000000000.)) {
        qtd_QAbstractTextDocumentLayout_update_QRectF(qtdNativeId, arg__1);
    }

    protected final void updateBlock(const(QTextBlock) block) {
        qtd_QAbstractTextDocumentLayout_updateBlock_QTextBlock(qtdNativeId, block is null ? null : (cast(QTextBlock)block).qtdNativeId);
    }
// Functions

    public this(QTextDocument doc) {
        void* ret = qtd_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout_QTextDocument(cast(void*) this, doc is null ? null : doc.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string anchorAt(const(QPointF) pos) const {
        string res;
        qtd_QAbstractTextDocumentLayout_anchorAt_QPointF_const(qtdNativeId, &res, pos);
        return res;
    }

    public final QTextDocument document() const {
        void *ret = qtd_QAbstractTextDocumentLayout_document_const(qtdNativeId);
        QTextDocument __d_return_value = QTextDocument.__getObject(ret);
        return __d_return_value;
    }

    protected final QTextCharFormat format(int pos) {
        void* ret = qtd_QAbstractTextDocumentLayout_format_int(qtdNativeId, pos);
        QTextCharFormat __d_return_value = new QTextCharFormat(ret);
        return __d_return_value;
    }

    protected final int formatIndex(int pos) {
        return qtd_QAbstractTextDocumentLayout_formatIndex_int(qtdNativeId, pos);
    }

    public final QTextObjectInterface handlerForObject(int objectType) const {
        void* ret = qtd_QAbstractTextDocumentLayout_handlerForObject_int_const(qtdNativeId, objectType);
        QTextObjectInterface __d_return_value = qtd_QTextObjectInterface_from_ptr(ret);

        return __d_return_value;
    }

    public final IQPaintDevice paintDevice() const {
        void* ret = qtd_QAbstractTextDocumentLayout_paintDevice_const(qtdNativeId);
        IQPaintDevice __d_return_value = qtd_QPaintDevice_from_ptr(ret);

        return __d_return_value;
    }

    public final void registerHandler(int objectType, QObject component) {
        qtd_QAbstractTextDocumentLayout_registerHandler_int_QObject(qtdNativeId, objectType, component is null ? null : component.qtdNativeId);
    }

    public final void setPaintDevice(IQPaintDevice device) {
        {
            __rcPaintDevice = cast(Object) device;
        }
        qtd_QAbstractTextDocumentLayout_setPaintDevice_QPaintDevice(qtdNativeId, device is null ? null : device.__ptr_IQPaintDevice);
    }

    public abstract QRectF blockBoundingRect(const(QTextBlock) block) const;

    protected abstract void documentChanged(int from, int charsRemoved, int charsAdded);

    public abstract QSizeF documentSize() const;

    public abstract void draw(QPainter painter, const(QAbstractTextDocumentLayout_PaintContext) context);

    protected void drawInlineObject(QPainter painter, const(QRectF) rect, QTextInlineObject object, int posInDocument, const(QTextFormat) format) {
        qtd_QAbstractTextDocumentLayout_drawInlineObject_QPainter_QRectF_QTextInlineObject_int_QTextFormat(qtdNativeId, painter is null ? null : painter.qtdNativeId, rect, object is null ? null : object.qtdNativeId, posInDocument, format is null ? null : (cast(QTextFormat)format).qtdNativeId);
    }

    public abstract QRectF frameBoundingRect(QTextFrame frame) const;

    public abstract int hitTest(const(QPointF) point, Qt.HitTestAccuracy accuracy) const;

    public abstract int pageCount() const;

    protected void positionInlineObject(QTextInlineObject item, int posInDocument, const(QTextFormat) format) {
        qtd_QAbstractTextDocumentLayout_positionInlineObject_QTextInlineObject_int_QTextFormat(qtdNativeId, item is null ? null : item.qtdNativeId, posInDocument, format is null ? null : (cast(QTextFormat)format).qtdNativeId);
    }

    protected void resizeInlineObject(QTextInlineObject item, int posInDocument, const(QTextFormat) format) {
        qtd_QAbstractTextDocumentLayout_resizeInlineObject_QTextInlineObject_int_QTextFormat(qtdNativeId, item is null ? null : item.qtdNativeId, posInDocument, format is null ? null : (cast(QTextFormat)format).qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QAbstractTextDocumentLayout_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QAbstractTextDocumentLayout);
    }

    static QAbstractTextDocumentLayout __getObject(void* nativeId) {
        return static_cast!(QAbstractTextDocumentLayout)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QAbstractTextDocumentLayout_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QAbstractTextDocumentLayout_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QAbstractTextDocumentLayout_ConcreteWrapper(nativeId, initFlags);
        QAbstractTextDocumentLayout.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(const(QSizeF))("documentSizeChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int)("pageCountChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(const(QRectF))("update"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!()("update"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(const(QTextBlock))("updateBlock"), index));

    }

    public alias void __isQtType_QAbstractTextDocumentLayout;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QAbstractTextDocumentLayout_ConcreteWrapper : QAbstractTextDocumentLayout {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public QRectF blockBoundingRect(const(QTextBlock) block) const {
            QRectF res;
            qtd_QAbstractTextDocumentLayout_blockBoundingRect_QTextBlock_const(qtdNativeId, &res, block is null ? null : (cast(QTextBlock)block).qtdNativeId);
            return res;
        }

        override         protected void documentChanged(int from, int charsRemoved, int charsAdded) {
            qtd_QAbstractTextDocumentLayout_documentChanged_int_int_int(qtdNativeId, from, charsRemoved, charsAdded);
        }

        override         public QSizeF documentSize() const {
            QSizeF res;
            qtd_QAbstractTextDocumentLayout_documentSize_const(qtdNativeId, &res);
            return res;
        }

        override         public void draw(QPainter painter, const(QAbstractTextDocumentLayout_PaintContext) context) {
            qtd_QAbstractTextDocumentLayout_draw_QPainter_QAbstractTextDocumentLayout_PaintContext(qtdNativeId, painter is null ? null : painter.qtdNativeId, context is null ? null : (cast(QAbstractTextDocumentLayout_PaintContext)context).qtdNativeId);
        }

        override         public QRectF frameBoundingRect(QTextFrame frame) const {
            QRectF res;
            qtd_QAbstractTextDocumentLayout_frameBoundingRect_QTextFrame_const(qtdNativeId, &res, frame is null ? null : frame.qtdNativeId);
            return res;
        }

        override         public int hitTest(const(QPointF) point, Qt.HitTestAccuracy accuracy) const {
            return qtd_QAbstractTextDocumentLayout_hitTest_QPointF_HitTestAccuracy_const(qtdNativeId, point, accuracy);
        }

        override         public int pageCount() const {
            return qtd_QAbstractTextDocumentLayout_pageCount_const(qtdNativeId);
        }
    }


// C wrappers for signal emitters
private extern(C) void  qtd_QAbstractTextDocumentLayout_documentSizeChanged_QSizeF(void* __this_nativeId,
 QSizeF newSize0);
private extern(C) void  qtd_QAbstractTextDocumentLayout_pageCountChanged_int(void* __this_nativeId,
 int newPages0);
private extern(C) void  qtd_QAbstractTextDocumentLayout_update_QRectF(void* __this_nativeId,
 QRectF arg__1);
private extern(C) void  qtd_QAbstractTextDocumentLayout_updateBlock_QTextBlock(void* __this_nativeId,
 void* block0);

// C wrappers
private extern(C) void* qtd_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout_QTextDocument(void *d_ptr,
 void* doc0);
private extern(C) void  qtd_QAbstractTextDocumentLayout_anchorAt_QPointF_const(void* __this_nativeId,
 void* __d_return_value,
 QPointF pos0);
private extern(C) void*  qtd_QAbstractTextDocumentLayout_document_const(void* __this_nativeId);
private extern(C) void*  qtd_QAbstractTextDocumentLayout_format_int(void* __this_nativeId,
 int pos0);
private extern(C) int  qtd_QAbstractTextDocumentLayout_formatIndex_int(void* __this_nativeId,
 int pos0);
private extern(C) void*  qtd_QAbstractTextDocumentLayout_handlerForObject_int_const(void* __this_nativeId,
 int objectType0);
private extern(C) void*  qtd_QAbstractTextDocumentLayout_paintDevice_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractTextDocumentLayout_registerHandler_int_QObject(void* __this_nativeId,
 int objectType0,
 void* component1);
private extern(C) void  qtd_QAbstractTextDocumentLayout_setPaintDevice_QPaintDevice(void* __this_nativeId,
 void* device0);
private extern(C) void  qtd_QAbstractTextDocumentLayout_blockBoundingRect_QTextBlock_const(void* __this_nativeId,
 QRectF * __d_return_value,
 void* block0);
private extern(C) void  qtd_QAbstractTextDocumentLayout_documentChanged_int_int_int(void* __this_nativeId,
 int from0,
 int charsRemoved1,
 int charsAdded2);
private extern(C) void  qtd_QAbstractTextDocumentLayout_documentSize_const(void* __this_nativeId,
 QSizeF * __d_return_value);
private extern(C) void  qtd_QAbstractTextDocumentLayout_draw_QPainter_QAbstractTextDocumentLayout_PaintContext(void* __this_nativeId,
 void* painter0,
 void* context1);
private extern(C) void  qtd_QAbstractTextDocumentLayout_drawInlineObject_QPainter_QRectF_QTextInlineObject_int_QTextFormat(void* __this_nativeId,
 void* painter0,
 QRectF rect1,
 void* object2,
 int posInDocument3,
 void* format4);
private extern(C) void  qtd_QAbstractTextDocumentLayout_frameBoundingRect_QTextFrame_const(void* __this_nativeId,
 QRectF * __d_return_value,
 void* frame0);
private extern(C) int  qtd_QAbstractTextDocumentLayout_hitTest_QPointF_HitTestAccuracy_const(void* __this_nativeId,
 QPointF point0,
 int accuracy1);
private extern(C) int  qtd_QAbstractTextDocumentLayout_pageCount_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractTextDocumentLayout_positionInlineObject_QTextInlineObject_int_QTextFormat(void* __this_nativeId,
 void* item0,
 int posInDocument1,
 void* format2);
private extern(C) void  qtd_QAbstractTextDocumentLayout_resizeInlineObject_QTextInlineObject_int_QTextFormat(void* __this_nativeId,
 void* item0,
 int posInDocument1,
 void* format2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, QRectF *__d_return_value, void* block0) qtd_QAbstractTextDocumentLayout_blockBoundingRect_QTextBlock_const_dispatch; }
extern(C) void qtd_export_QAbstractTextDocumentLayout_blockBoundingRect_QTextBlock_const_dispatch(void *dId, QRectF *__d_return_value, void* block0){
    auto d_object = cast(QAbstractTextDocumentLayout) dId;
    scope block0_d_ref = new QTextBlock(block0, QtdObjectInitFlags.onStack);
    *__d_return_value = d_object.blockBoundingRect(block0_d_ref);
}

extern(C){ extern void function(void *dId, int from0, int charsRemoved1, int charsAdded2) qtd_QAbstractTextDocumentLayout_documentChanged_int_int_int_dispatch; }
extern(C) void qtd_export_QAbstractTextDocumentLayout_documentChanged_int_int_int_dispatch(void *dId, int from0, int charsRemoved1, int charsAdded2){
    auto d_object = cast(QAbstractTextDocumentLayout) dId;
    d_object.documentChanged(from0, charsRemoved1, charsAdded2);
}

extern(C){ extern void function(void *dId, QSizeF *__d_return_value) qtd_QAbstractTextDocumentLayout_documentSize_const_dispatch; }
extern(C) void qtd_export_QAbstractTextDocumentLayout_documentSize_const_dispatch(void *dId, QSizeF *__d_return_value){
    auto d_object = cast(QAbstractTextDocumentLayout) dId;
    *__d_return_value = d_object.documentSize();
}

extern(C){ extern void function(void *dId, void* painter0, void* context1) qtd_QAbstractTextDocumentLayout_draw_QPainter_QAbstractTextDocumentLayout_PaintContext_dispatch; }
extern(C) void qtd_export_QAbstractTextDocumentLayout_draw_QPainter_QAbstractTextDocumentLayout_PaintContext_dispatch(void *dId, void* painter0, void* context1){
    auto d_object = cast(QAbstractTextDocumentLayout) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    scope context1_d_ref = new QAbstractTextDocumentLayout_PaintContext(context1, QtdObjectInitFlags.onStack);
    d_object.draw(painter0_d_ref, context1_d_ref);
}

extern(C){ extern void function(void *dId, void* painter0, QRectF* rect1, void* object2, int posInDocument3, void* format4) qtd_QAbstractTextDocumentLayout_drawInlineObject_QPainter_QRectF_QTextInlineObject_int_QTextFormat_dispatch; }
extern(C) void qtd_export_QAbstractTextDocumentLayout_drawInlineObject_QPainter_QRectF_QTextInlineObject_int_QTextFormat_dispatch(void *dId, void* painter0, QRectF* rect1, void* object2, int posInDocument3, void* format4){
    auto d_object = cast(QAbstractTextDocumentLayout) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    scope object2_d_ref = new QTextInlineObject(object2, QtdObjectInitFlags.onStack);
    scope format4_d_ref = new QTextFormat(format4, QtdObjectInitFlags.onStack);
    d_object.drawInlineObject(painter0_d_ref, *rect1, object2_d_ref, posInDocument3, format4_d_ref);
}

extern(C){ extern void function(void *dId, QRectF *__d_return_value, void* frame0) qtd_QAbstractTextDocumentLayout_frameBoundingRect_QTextFrame_const_dispatch; }
extern(C) void qtd_export_QAbstractTextDocumentLayout_frameBoundingRect_QTextFrame_const_dispatch(void *dId, QRectF *__d_return_value, void* frame0){
    auto d_object = cast(QAbstractTextDocumentLayout) dId;
    scope frame0_d_ref = new QTextFrame(frame0, QtdObjectInitFlags.onStack);

    *__d_return_value = d_object.frameBoundingRect(frame0_d_ref);
}

extern(C){ extern int function(void *dId, QPointF* point0, int accuracy1) qtd_QAbstractTextDocumentLayout_hitTest_QPointF_HitTestAccuracy_const_dispatch; }
extern(C) int qtd_export_QAbstractTextDocumentLayout_hitTest_QPointF_HitTestAccuracy_const_dispatch(void *dId, QPointF* point0, int accuracy1){
    auto d_object = cast(QAbstractTextDocumentLayout) dId;
    auto accuracy1_enum = cast(Qt.HitTestAccuracy) accuracy1;
    auto return_value = d_object.hitTest(*point0, accuracy1_enum);
    return return_value;
}

extern(C){ extern int function(void *dId) qtd_QAbstractTextDocumentLayout_pageCount_const_dispatch; }
extern(C) int qtd_export_QAbstractTextDocumentLayout_pageCount_const_dispatch(void *dId){
    auto d_object = cast(QAbstractTextDocumentLayout) dId;
    auto return_value = d_object.pageCount();
    return return_value;
}

extern(C){ extern void function(void *dId, void* item0, int posInDocument1, void* format2) qtd_QAbstractTextDocumentLayout_positionInlineObject_QTextInlineObject_int_QTextFormat_dispatch; }
extern(C) void qtd_export_QAbstractTextDocumentLayout_positionInlineObject_QTextInlineObject_int_QTextFormat_dispatch(void *dId, void* item0, int posInDocument1, void* format2){
    auto d_object = cast(QAbstractTextDocumentLayout) dId;
    scope item0_d_ref = new QTextInlineObject(item0, QtdObjectInitFlags.onStack);
    scope format2_d_ref = new QTextFormat(format2, QtdObjectInitFlags.onStack);
    d_object.positionInlineObject(item0_d_ref, posInDocument1, format2_d_ref);
}

extern(C){ extern void function(void *dId, void* item0, int posInDocument1, void* format2) qtd_QAbstractTextDocumentLayout_resizeInlineObject_QTextInlineObject_int_QTextFormat_dispatch; }
extern(C) void qtd_export_QAbstractTextDocumentLayout_resizeInlineObject_QTextInlineObject_int_QTextFormat_dispatch(void *dId, void* item0, int posInDocument1, void* format2){
    auto d_object = cast(QAbstractTextDocumentLayout) dId;
    scope item0_d_ref = new QTextInlineObject(item0, QtdObjectInitFlags.onStack);
    scope format2_d_ref = new QTextFormat(format2, QtdObjectInitFlags.onStack);
    d_object.resizeInlineObject(item0_d_ref, posInDocument1, format2_d_ref);
}

private extern (C) void qtd_QAbstractTextDocumentLayout_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractTextDocumentLayout() {
    void*[10] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractTextDocumentLayout_blockBoundingRect_QTextBlock_const_dispatch;
    virt_arr[1] = &qtd_export_QAbstractTextDocumentLayout_documentChanged_int_int_int_dispatch;
    virt_arr[2] = &qtd_export_QAbstractTextDocumentLayout_documentSize_const_dispatch;
    virt_arr[3] = &qtd_export_QAbstractTextDocumentLayout_draw_QPainter_QAbstractTextDocumentLayout_PaintContext_dispatch;
    virt_arr[4] = &qtd_export_QAbstractTextDocumentLayout_drawInlineObject_QPainter_QRectF_QTextInlineObject_int_QTextFormat_dispatch;
    virt_arr[5] = &qtd_export_QAbstractTextDocumentLayout_frameBoundingRect_QTextFrame_const_dispatch;
    virt_arr[6] = &qtd_export_QAbstractTextDocumentLayout_hitTest_QPointF_HitTestAccuracy_const_dispatch;
    virt_arr[7] = &qtd_export_QAbstractTextDocumentLayout_pageCount_const_dispatch;
    virt_arr[8] = &qtd_export_QAbstractTextDocumentLayout_positionInlineObject_QTextInlineObject_int_QTextFormat_dispatch;
    virt_arr[9] = &qtd_export_QAbstractTextDocumentLayout_resizeInlineObject_QTextInlineObject_int_QTextFormat_dispatch;
    qtd_QAbstractTextDocumentLayout_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QAbstractTextDocumentLayout_documentSizeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractTextDocumentLayout) dId;
        auto newSize0 = *(cast(QSizeF*)args[1]);
        //d_object.documentSizeChanged_emit(newSize0);
}*/
/*private extern(C) void qtd_QAbstractTextDocumentLayout_pageCountChanged_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractTextDocumentLayout) dId;
        auto newPages0 = *(cast(int*)args[1]);
        //d_object.pageCountChanged_emit(newPages0);
}*/
/*private extern(C) void qtd_QAbstractTextDocumentLayout_update_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractTextDocumentLayout) dId;
        auto arg__1 = *(cast(QRectF*)args[1]);
        //d_object.update_emit(arg__1);
}*/
/*private extern(C) void qtd_QAbstractTextDocumentLayout_updateBlock_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractTextDocumentLayout) dId;
        scope block0 = new QTextBlock(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.updateBlock_emit(block0);
}*/

extern(C) QMetaObjectNative* qtd_QAbstractTextDocumentLayout_staticMetaObject();

extern(C) void qtd_QAbstractTextDocumentLayout_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QAbstractTextDocumentLayout_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
