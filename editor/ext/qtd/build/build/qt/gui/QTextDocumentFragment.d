module qt.gui.QTextDocumentFragment;

public import qt.gui.QTextDocumentFragment_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QTextDocument;
public import qt.gui.QTextCursor;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextDocumentFragment : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QTextDocumentFragment_QTextDocumentFragment();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QTextCursor) range) {
        void* ret = qtd_QTextDocumentFragment_QTextDocumentFragment_QTextCursor(range is null ? null : (cast(QTextCursor)range).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QTextDocument document) {
        void* ret = qtd_QTextDocumentFragment_QTextDocumentFragment_QTextDocument(document is null ? null : (cast(QTextDocument)document).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QTextDocumentFragment) rhs) {
        void* ret = qtd_QTextDocumentFragment_QTextDocumentFragment_QTextDocumentFragment(rhs is null ? null : (cast(QTextDocumentFragment)rhs).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool isEmpty() const {
        return qtd_QTextDocumentFragment_isEmpty_const(qtdNativeId);
    }

    public final string toHtml() const {
        string res;
        qtd_QTextDocumentFragment_toHtml_const(qtdNativeId, &res);
        return res;
    }

    public final string toHtml(const(QByteArray) encoding) const {
        string res;
        qtd_QTextDocumentFragment_toHtml_QByteArray_const(qtdNativeId, &res, encoding is null ? null : (cast(QByteArray)encoding).qtdNativeId);
        return res;
    }

    public final string toPlainText() const {
        string res;
        qtd_QTextDocumentFragment_toPlainText_const(qtdNativeId, &res);
        return res;
    }

    public static QTextDocumentFragment fromHtml(string html) {
        void* ret = qtd_QTextDocumentFragment_fromHtml_string(html);
        QTextDocumentFragment __d_return_value = new QTextDocumentFragment(ret);
        return __d_return_value;
    }

    public static QTextDocumentFragment fromHtml(string html, QTextDocument resourceProvider) {
        void* ret = qtd_QTextDocumentFragment_fromHtml_string_QTextDocument(html, resourceProvider is null ? null : (cast(QTextDocument)resourceProvider).qtdNativeId);
        QTextDocumentFragment __d_return_value = new QTextDocumentFragment(ret);
        return __d_return_value;
    }

    public static QTextDocumentFragment fromPlainText(string plainText) {
        void* ret = qtd_QTextDocumentFragment_fromPlainText_string(plainText);
        QTextDocumentFragment __d_return_value = new QTextDocumentFragment(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QTextDocumentFragment;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextDocumentFragment_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextDocumentFragment_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextDocumentFragment_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextDocumentFragment_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextDocumentFragment_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextDocumentFragment_QTypeInfo_isComplex();
        isStatic = qtd_QTextDocumentFragment_QTypeInfo_isStatic();
        isLarge = qtd_QTextDocumentFragment_QTypeInfo_isLarge();
        isPointer = qtd_QTextDocumentFragment_QTypeInfo_isPointer();
        isDummy = qtd_QTextDocumentFragment_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QTextDocumentFragment_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextDocumentFragment_native_copy(const void* orig);
extern (C) void qtd_QTextDocumentFragment_delete(void *ptr);
extern (C) void qtd_QTextDocumentFragment_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextDocumentFragment_QTextDocumentFragment();
private extern(C) void* qtd_QTextDocumentFragment_QTextDocumentFragment_QTextCursor(void* range0);
private extern(C) void* qtd_QTextDocumentFragment_QTextDocumentFragment_QTextDocument(void* document0);
private extern(C) void* qtd_QTextDocumentFragment_QTextDocumentFragment_QTextDocumentFragment(void* rhs0);
private extern(C) bool  qtd_QTextDocumentFragment_isEmpty_const(void* __this_nativeId);
private extern(C) void  qtd_QTextDocumentFragment_toHtml_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QTextDocumentFragment_toHtml_QByteArray_const(void* __this_nativeId,
 void* __d_return_value,
 void* encoding0);
private extern(C) void  qtd_QTextDocumentFragment_toPlainText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QTextDocumentFragment_fromHtml_string(string html0);
private extern(C) void*  qtd_QTextDocumentFragment_fromHtml_string_QTextDocument(string html0,
 void* resourceProvider1);
private extern(C) void*  qtd_QTextDocumentFragment_fromPlainText_string(string plainText0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QTextDocumentFragment() {
    QTextDocumentFragment.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QTextDocumentFragment_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextDocumentFragment_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextDocumentFragment_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextDocumentFragment_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextDocumentFragment_QTypeInfo_isDummy();
