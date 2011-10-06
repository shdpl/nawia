module qt.gui.QPlainTextDocumentLayout;

public import qt.gui.QPlainTextDocumentLayout_aux;
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
public import qt.gui.QTextDocument;
public import qt.gui.QTextBlock;
public import qt.gui.QPainter;
public import qt.core.QRectF;
public import qt.gui.QTextInlineObject;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.gui.QTextFrame;
public import qt.core.QTimerEvent;
public import qt.gui.QAbstractTextDocumentLayout_PaintContext;
public import qt.core.QPointF;
public import qt.core.QChildEvent;
public import qt.core.QSizeF;
public import qt.gui.QAbstractTextDocumentLayout;
public import qt.gui.QTextFormat;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QPlainTextDocumentLayout : QAbstractTextDocumentLayout
{

    private static const string[] __signalSignatures = [    ];

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
// Functions

    public this(QTextDocument document) {
        void* ret = qtd_QPlainTextDocumentLayout_QPlainTextDocumentLayout_QTextDocument(cast(void*) this, document is null ? null : document.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int cursorWidth() const {
        return qtd_QPlainTextDocumentLayout_cursorWidth_const(qtdNativeId);
    }

    public final void ensureBlockLayout(const(QTextBlock) block) const {
        qtd_QPlainTextDocumentLayout_ensureBlockLayout_QTextBlock_const(qtdNativeId, block is null ? null : (cast(QTextBlock)block).qtdNativeId);
    }

    public final void requestUpdate() {
        qtd_QPlainTextDocumentLayout_requestUpdate(qtdNativeId);
    }

    public final void setCursorWidth(int width) {
        qtd_QPlainTextDocumentLayout_setCursorWidth_int(qtdNativeId, width);
    }

    public QRectF blockBoundingRect(const(QTextBlock) block) const {
        QRectF res;
        qtd_QPlainTextDocumentLayout_blockBoundingRect_QTextBlock_const(qtdNativeId, &res, block is null ? null : (cast(QTextBlock)block).qtdNativeId);
        return res;
    }

    protected void documentChanged(int from, int arg__2, int charsAdded) {
        qtd_QPlainTextDocumentLayout_documentChanged_int_int_int(qtdNativeId, from, arg__2, charsAdded);
    }

    public QSizeF documentSize() const {
        QSizeF res;
        qtd_QPlainTextDocumentLayout_documentSize_const(qtdNativeId, &res);
        return res;
    }

    public void draw(QPainter arg__1, const(QAbstractTextDocumentLayout_PaintContext) arg__2) {
        qtd_QPlainTextDocumentLayout_draw_QPainter_QAbstractTextDocumentLayout_PaintContext(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId, arg__2 is null ? null : (cast(QAbstractTextDocumentLayout_PaintContext)arg__2).qtdNativeId);
    }

    public QRectF frameBoundingRect(QTextFrame arg__1) const {
        QRectF res;
        qtd_QPlainTextDocumentLayout_frameBoundingRect_QTextFrame_const(qtdNativeId, &res, arg__1 is null ? null : arg__1.qtdNativeId);
        return res;
    }

    public int hitTest(const(QPointF) arg__1, Qt.HitTestAccuracy arg__2) const {
        return qtd_QPlainTextDocumentLayout_hitTest_QPointF_HitTestAccuracy_const(qtdNativeId, arg__1, arg__2);
    }

    public int pageCount() const {
        return qtd_QPlainTextDocumentLayout_pageCount_const(qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QPlainTextDocumentLayout_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QPlainTextDocumentLayout);
    }

    static QPlainTextDocumentLayout __getObject(void* nativeId) {
        return static_cast!(QPlainTextDocumentLayout)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QPlainTextDocumentLayout_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QPlainTextDocumentLayout_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QPlainTextDocumentLayout(nativeId, initFlags);
        QPlainTextDocumentLayout.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QPlainTextDocumentLayout;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPlainTextDocumentLayout_QPlainTextDocumentLayout_QTextDocument(void *d_ptr,
 void* document0);
private extern(C) int  qtd_QPlainTextDocumentLayout_cursorWidth_const(void* __this_nativeId);
private extern(C) void  qtd_QPlainTextDocumentLayout_ensureBlockLayout_QTextBlock_const(void* __this_nativeId,
 void* block0);
private extern(C) void  qtd_QPlainTextDocumentLayout_requestUpdate(void* __this_nativeId);
private extern(C) void  qtd_QPlainTextDocumentLayout_setCursorWidth_int(void* __this_nativeId,
 int width0);
private extern(C) void  qtd_QPlainTextDocumentLayout_blockBoundingRect_QTextBlock_const(void* __this_nativeId,
 QRectF * __d_return_value,
 void* block0);
private extern(C) void  qtd_QPlainTextDocumentLayout_documentChanged_int_int_int(void* __this_nativeId,
 int from0,
 int arg__2,
 int charsAdded2);
private extern(C) void  qtd_QPlainTextDocumentLayout_documentSize_const(void* __this_nativeId,
 QSizeF * __d_return_value);
private extern(C) void  qtd_QPlainTextDocumentLayout_draw_QPainter_QAbstractTextDocumentLayout_PaintContext(void* __this_nativeId,
 void* arg__1,
 void* arg__2);
private extern(C) void  qtd_QPlainTextDocumentLayout_frameBoundingRect_QTextFrame_const(void* __this_nativeId,
 QRectF * __d_return_value,
 void* arg__1);
private extern(C) int  qtd_QPlainTextDocumentLayout_hitTest_QPointF_HitTestAccuracy_const(void* __this_nativeId,
 QPointF arg__1,
 int arg__2);
private extern(C) int  qtd_QPlainTextDocumentLayout_pageCount_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QPlainTextDocumentLayout_initCallBacks(void* virtuals);

extern(C) void static_init_QPlainTextDocumentLayout() {
    qtd_QPlainTextDocumentLayout_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QPlainTextDocumentLayout_documentSizeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QPlainTextDocumentLayout) dId;
        auto newSize0 = *(cast(QSizeF*)args[1]);
        //d_object.documentSizeChanged_emit(newSize0);
}*/
/*private extern(C) void qtd_QPlainTextDocumentLayout_pageCountChanged_handle(void* dId, void** args) {
        auto d_object = cast(QPlainTextDocumentLayout) dId;
        auto newPages0 = *(cast(int*)args[1]);
        //d_object.pageCountChanged_emit(newPages0);
}*/
/*private extern(C) void qtd_QPlainTextDocumentLayout_update_handle(void* dId, void** args) {
        auto d_object = cast(QPlainTextDocumentLayout) dId;
        auto arg__1 = *(cast(QRectF*)args[1]);
        //d_object.update_emit(arg__1);
}*/
/*private extern(C) void qtd_QPlainTextDocumentLayout_updateBlock_handle(void* dId, void** args) {
        auto d_object = cast(QPlainTextDocumentLayout) dId;
        scope block0 = new QTextBlock(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.updateBlock_emit(block0);
}*/

extern(C) QMetaObjectNative* qtd_QPlainTextDocumentLayout_staticMetaObject();

extern(C) void qtd_QPlainTextDocumentLayout_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QPlainTextDocumentLayout_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
