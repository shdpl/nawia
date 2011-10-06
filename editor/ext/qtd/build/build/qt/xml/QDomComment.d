module qt.xml.QDomComment;

public import qt.xml.QDomComment_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.xml.QDomCharacterData;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDomComment : QDomCharacterData
{

// Functions

    public this() {
        void* ret = qtd_QDomComment_QDomComment();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDomComment) x) {
        void* ret = qtd_QDomComment_QDomComment_QDomComment(x is null ? null : (cast(QDomComment)x).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors
    public alias void __isQtType_QDomComment;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QDomComment_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QDomComment_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDomComment_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDomComment_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDomComment_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QDomComment_QTypeInfo_isComplex();
        isStatic = qtd_QDomComment_QTypeInfo_isStatic();
        isLarge = qtd_QDomComment_QTypeInfo_isLarge();
        isPointer = qtd_QDomComment_QTypeInfo_isPointer();
        isDummy = qtd_QDomComment_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QDomComment_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QDomComment_native_copy(const void* orig);
extern (C) void qtd_QDomComment_delete(void *ptr);
extern (C) void qtd_QDomComment_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDomComment_QDomComment();
private extern(C) void* qtd_QDomComment_QDomComment_QDomComment(void* x0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QDomComment() {
    QDomComment.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QDomComment_QTypeInfo_isComplex();
private extern (C) bool qtd_QDomComment_QTypeInfo_isStatic();
private extern (C) bool qtd_QDomComment_QTypeInfo_isLarge();
private extern (C) bool qtd_QDomComment_QTypeInfo_isPointer();
private extern (C) bool qtd_QDomComment_QTypeInfo_isDummy();
