module qt.gui.QSyntaxHighlighter;

public import qt.gui.QSyntaxHighlighter_aux;
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
public import qt.gui.QTextDocument;
public import qt.gui.QTextBlock;
public import qt.gui.QColor;
public import qt.gui.QTextEdit;
public import qt.gui.QTextCharFormat;
public import qt.core.QObject;
public import qt.gui.QFont;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.gui.QTextBlockUserData;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QSyntaxHighlighter : QObject
{

Object __rcDocument = null;

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

    public this(QObject parent_) {
        void* ret = qtd_QSyntaxHighlighter_QSyntaxHighlighter_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QTextDocument parent_) {
        void* ret = qtd_QSyntaxHighlighter_QSyntaxHighlighter_QTextDocument(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QTextEdit parent_) {
        void* ret = qtd_QSyntaxHighlighter_QSyntaxHighlighter_QTextEdit(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected final QTextBlock currentBlock() const {
        void* ret = qtd_QSyntaxHighlighter_currentBlock_const(qtdNativeId);
        QTextBlock __d_return_value = new QTextBlock(ret);
        return __d_return_value;
    }

    protected final int currentBlockState() const {
        return qtd_QSyntaxHighlighter_currentBlockState_const(qtdNativeId);
    }

    protected final QTextBlockUserData currentBlockUserData() const {
        void* ret = qtd_QSyntaxHighlighter_currentBlockUserData_const(qtdNativeId);
        QTextBlockUserData __d_return_value = qtd_QTextBlockUserData_from_ptr(ret);

        return __d_return_value;
    }

    public final QTextDocument document() const {
        void *ret = qtd_QSyntaxHighlighter_document_const(qtdNativeId);
        QTextDocument __d_return_value = QTextDocument.__getObject(ret);
        return __d_return_value;
    }

    protected final QTextCharFormat format(int pos) const {
        void* ret = qtd_QSyntaxHighlighter_format_int_const(qtdNativeId, pos);
        QTextCharFormat __d_return_value = new QTextCharFormat(ret);
        return __d_return_value;
    }

    protected final int previousBlockState() const {
        return qtd_QSyntaxHighlighter_previousBlockState_const(qtdNativeId);
    }

    public final void rehighlight() {
        qtd_QSyntaxHighlighter_rehighlight(qtdNativeId);
    }

    public final void rehighlightBlock(const(QTextBlock) block) {
        qtd_QSyntaxHighlighter_rehighlightBlock_QTextBlock(qtdNativeId, block is null ? null : (cast(QTextBlock)block).qtdNativeId);
    }

    protected final void setCurrentBlockState(int newState) {
        qtd_QSyntaxHighlighter_setCurrentBlockState_int(qtdNativeId, newState);
    }

    protected final void setCurrentBlockUserData(QTextBlockUserData data) {
        if (data !is null) {
            data.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QSyntaxHighlighter_setCurrentBlockUserData_QTextBlockUserData(qtdNativeId, data is null ? null : data.qtdNativeId);
    }

    public final void setDocument(QTextDocument doc) {
        {
            __rcDocument = cast(Object) doc;
        }
        qtd_QSyntaxHighlighter_setDocument_QTextDocument(qtdNativeId, doc is null ? null : doc.qtdNativeId);
    }

    protected final void setFormat(int start, int count, const(QColor) color) {
        qtd_QSyntaxHighlighter_setFormat_int_int_QColor(qtdNativeId, start, count, color is null ? null : (cast(QColor)color).qtdNativeId);
    }

    protected final void setFormat(int start, int count, const(QFont) font) {
        qtd_QSyntaxHighlighter_setFormat_int_int_QFont(qtdNativeId, start, count, font is null ? null : (cast(QFont)font).qtdNativeId);
    }

    protected final void setFormat(int start, int count, const(QTextCharFormat) format) {
        qtd_QSyntaxHighlighter_setFormat_int_int_QTextCharFormat(qtdNativeId, start, count, format is null ? null : (cast(QTextCharFormat)format).qtdNativeId);
    }

    protected abstract void highlightBlock(string text);
// Field accessors
    private static const string[] __slotSignatures = [
            "rehighlight()", 
            "rehighlightBlock(QTextBlock)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QSyntaxHighlighter_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QSyntaxHighlighter);
    }

    static QSyntaxHighlighter __getObject(void* nativeId) {
        return static_cast!(QSyntaxHighlighter)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QSyntaxHighlighter_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QSyntaxHighlighter_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QSyntaxHighlighter_ConcreteWrapper(nativeId, initFlags);
        QSyntaxHighlighter.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("rehighlight"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(const(QTextBlock))("rehighlightBlock"), index));

    }

    public alias void __isQtType_QSyntaxHighlighter;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QSyntaxHighlighter_ConcreteWrapper : QSyntaxHighlighter {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         protected void highlightBlock(string text) {
            qtd_QSyntaxHighlighter_highlightBlock_string(qtdNativeId, text);
        }
    }


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QSyntaxHighlighter_QSyntaxHighlighter_QObject(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QSyntaxHighlighter_QSyntaxHighlighter_QTextDocument(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QSyntaxHighlighter_QSyntaxHighlighter_QTextEdit(void *d_ptr,
 void* parent0);
private extern(C) void*  qtd_QSyntaxHighlighter_currentBlock_const(void* __this_nativeId);
private extern(C) int  qtd_QSyntaxHighlighter_currentBlockState_const(void* __this_nativeId);
private extern(C) void*  qtd_QSyntaxHighlighter_currentBlockUserData_const(void* __this_nativeId);
private extern(C) void*  qtd_QSyntaxHighlighter_document_const(void* __this_nativeId);
private extern(C) void*  qtd_QSyntaxHighlighter_format_int_const(void* __this_nativeId,
 int pos0);
private extern(C) int  qtd_QSyntaxHighlighter_previousBlockState_const(void* __this_nativeId);
private extern(C) void  qtd_QSyntaxHighlighter_rehighlight(void* __this_nativeId);
private extern(C) void  qtd_QSyntaxHighlighter_rehighlightBlock_QTextBlock(void* __this_nativeId,
 void* block0);
private extern(C) void  qtd_QSyntaxHighlighter_setCurrentBlockState_int(void* __this_nativeId,
 int newState0);
private extern(C) void  qtd_QSyntaxHighlighter_setCurrentBlockUserData_QTextBlockUserData(void* __this_nativeId,
 void* data0);
private extern(C) void  qtd_QSyntaxHighlighter_setDocument_QTextDocument(void* __this_nativeId,
 void* doc0);
private extern(C) void  qtd_QSyntaxHighlighter_setFormat_int_int_QColor(void* __this_nativeId,
 int start0,
 int count1,
 void* color2);
private extern(C) void  qtd_QSyntaxHighlighter_setFormat_int_int_QFont(void* __this_nativeId,
 int start0,
 int count1,
 void* font2);
private extern(C) void  qtd_QSyntaxHighlighter_setFormat_int_int_QTextCharFormat(void* __this_nativeId,
 int start0,
 int count1,
 void* format2);
private extern(C) void  qtd_QSyntaxHighlighter_highlightBlock_string(void* __this_nativeId,
 string text0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, wchar* text0, int text0_size) qtd_QSyntaxHighlighter_highlightBlock_string_dispatch; }
extern(C) void qtd_export_QSyntaxHighlighter_highlightBlock_string_dispatch(void *dId, wchar* text0, int text0_size){
    auto d_object = cast(QSyntaxHighlighter) dId;
    string text0_d_ref = toUTF8(text0[0..text0_size]);
    d_object.highlightBlock(text0_d_ref);
}

private extern (C) void qtd_QSyntaxHighlighter_initCallBacks(void* virtuals);

extern(C) void static_init_QSyntaxHighlighter() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QSyntaxHighlighter_highlightBlock_string_dispatch;
    qtd_QSyntaxHighlighter_initCallBacks(virt_arr.ptr);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QSyntaxHighlighter_staticMetaObject();

extern(C) void qtd_QSyntaxHighlighter_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QSyntaxHighlighter_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
