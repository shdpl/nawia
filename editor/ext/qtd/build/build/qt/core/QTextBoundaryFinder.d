module qt.core.QTextBoundaryFinder;

public import qt.core.QTextBoundaryFinder_aux;
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


public class QTextBoundaryFinder : QtdObject
{
    public enum BoundaryReason {
        NotAtBoundary = 0,
        StartWord = 1,
        EndWord = 2
    }

    alias BoundaryReason.NotAtBoundary NotAtBoundary;
    alias BoundaryReason.StartWord StartWord;
    alias BoundaryReason.EndWord EndWord;

    public enum BoundaryType {
        Grapheme = 0,
        Word = 1,
        Line = 2,
        Sentence = 3
    }

    alias BoundaryType.Grapheme Grapheme;
    alias BoundaryType.Word Word;
    alias BoundaryType.Line Line;
    alias BoundaryType.Sentence Sentence;


// Functions

    public this() {
        void* ret = qtd_QTextBoundaryFinder_QTextBoundaryFinder();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QTextBoundaryFinder.BoundaryType type, string string) {
        void* ret = qtd_QTextBoundaryFinder_QTextBoundaryFinder_BoundaryType_string(type, string);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QTextBoundaryFinder) other) {
        void* ret = qtd_QTextBoundaryFinder_QTextBoundaryFinder_QTextBoundaryFinder(other is null ? null : (cast(QTextBoundaryFinder)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int boundaryReasons() const {
        return qtd_QTextBoundaryFinder_boundaryReasons_const(qtdNativeId);
    }

    public final bool isAtBoundary() const {
        return qtd_QTextBoundaryFinder_isAtBoundary_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QTextBoundaryFinder_isValid_const(qtdNativeId);
    }

    public final int position() const {
        return qtd_QTextBoundaryFinder_position_const(qtdNativeId);
    }

    public final void setPosition(int position) {
        qtd_QTextBoundaryFinder_setPosition_int(qtdNativeId, position);
    }

    public final string string() const {
        string res;
        qtd_QTextBoundaryFinder_string_const(qtdNativeId, &res);
        return res;
    }

    public final void toEnd() {
        qtd_QTextBoundaryFinder_toEnd(qtdNativeId);
    }

    public final int toNextBoundary() {
        return qtd_QTextBoundaryFinder_toNextBoundary(qtdNativeId);
    }

    public final int toPreviousBoundary() {
        return qtd_QTextBoundaryFinder_toPreviousBoundary(qtdNativeId);
    }

    public final void toStart() {
        qtd_QTextBoundaryFinder_toStart(qtdNativeId);
    }

    public final QTextBoundaryFinder.BoundaryType type() const {
        return cast(QTextBoundaryFinder.BoundaryType) qtd_QTextBoundaryFinder_type_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QTextBoundaryFinder;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextBoundaryFinder_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextBoundaryFinder_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextBoundaryFinder_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextBoundaryFinder_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextBoundaryFinder_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextBoundaryFinder_QTypeInfo_isComplex();
        isStatic = qtd_QTextBoundaryFinder_QTypeInfo_isStatic();
        isLarge = qtd_QTextBoundaryFinder_QTypeInfo_isLarge();
        isPointer = qtd_QTextBoundaryFinder_QTypeInfo_isPointer();
        isDummy = qtd_QTextBoundaryFinder_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QTextBoundaryFinder_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextBoundaryFinder_native_copy(const void* orig);
extern (C) void qtd_QTextBoundaryFinder_delete(void *ptr);
extern (C) void qtd_QTextBoundaryFinder_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextBoundaryFinder_QTextBoundaryFinder();
private extern(C) void* qtd_QTextBoundaryFinder_QTextBoundaryFinder_BoundaryType_string(int type0,
 string string1);
private extern(C) void* qtd_QTextBoundaryFinder_QTextBoundaryFinder_QTextBoundaryFinder(void* other0);
private extern(C) int  qtd_QTextBoundaryFinder_boundaryReasons_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextBoundaryFinder_isAtBoundary_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextBoundaryFinder_isValid_const(void* __this_nativeId);
private extern(C) int  qtd_QTextBoundaryFinder_position_const(void* __this_nativeId);
private extern(C) void  qtd_QTextBoundaryFinder_setPosition_int(void* __this_nativeId,
 int position0);
private extern(C) void  qtd_QTextBoundaryFinder_string_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QTextBoundaryFinder_toEnd(void* __this_nativeId);
private extern(C) int  qtd_QTextBoundaryFinder_toNextBoundary(void* __this_nativeId);
private extern(C) int  qtd_QTextBoundaryFinder_toPreviousBoundary(void* __this_nativeId);
private extern(C) void  qtd_QTextBoundaryFinder_toStart(void* __this_nativeId);
private extern(C) int  qtd_QTextBoundaryFinder_type_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QTextBoundaryFinder() {
    QTextBoundaryFinder.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QTextBoundaryFinder_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextBoundaryFinder_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextBoundaryFinder_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextBoundaryFinder_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextBoundaryFinder_QTypeInfo_isDummy();
