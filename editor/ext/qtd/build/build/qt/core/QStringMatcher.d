module qt.core.QStringMatcher;

public import qt.core.QStringMatcher_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStringMatcher : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QStringMatcher_QStringMatcher();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(wchar* uc, int len, Qt.CaseSensitivity cs = Qt.CaseSensitivity.CaseSensitive) {
        void* ret = qtd_QStringMatcher_QStringMatcher_nativepointerchar_int_CaseSensitivity(uc, len, cs);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string pattern, Qt.CaseSensitivity cs = Qt.CaseSensitivity.CaseSensitive) {
        void* ret = qtd_QStringMatcher_QStringMatcher_string_CaseSensitivity(pattern, cs);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStringMatcher) other) {
        void* ret = qtd_QStringMatcher_QStringMatcher_QStringMatcher(other is null ? null : (cast(QStringMatcher)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final Qt.CaseSensitivity caseSensitivity() const {
        return cast(Qt.CaseSensitivity) qtd_QStringMatcher_caseSensitivity_const(qtdNativeId);
    }

    public final int indexIn(wchar* str, int length, int from = 0) const {
        return qtd_QStringMatcher_indexIn_nativepointerchar_int_int_const(qtdNativeId, str, length, from);
    }

    public final int indexIn(string str, int from = 0) const {
        return qtd_QStringMatcher_indexIn_string_int_const(qtdNativeId, str, from);
    }

    public final string pattern() const {
        string res;
        qtd_QStringMatcher_pattern_const(qtdNativeId, &res);
        return res;
    }

    public final void setCaseSensitivity(Qt.CaseSensitivity cs) {
        qtd_QStringMatcher_setCaseSensitivity_CaseSensitivity(qtdNativeId, cs);
    }

    public final void setPattern(string pattern) {
        qtd_QStringMatcher_setPattern_string(qtdNativeId, pattern);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QStringMatcher;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStringMatcher_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStringMatcher_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStringMatcher_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStringMatcher_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStringMatcher_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStringMatcher_QTypeInfo_isComplex();
        isStatic = qtd_QStringMatcher_QTypeInfo_isStatic();
        isLarge = qtd_QStringMatcher_QTypeInfo_isLarge();
        isPointer = qtd_QStringMatcher_QTypeInfo_isPointer();
        isDummy = qtd_QStringMatcher_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStringMatcher_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStringMatcher_native_copy(const void* orig);
extern (C) void qtd_QStringMatcher_delete(void *ptr);
extern (C) void qtd_QStringMatcher_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStringMatcher_QStringMatcher();
private extern(C) void* qtd_QStringMatcher_QStringMatcher_nativepointerchar_int_CaseSensitivity(void* uc0,
 int len1,
 int cs2);
private extern(C) void* qtd_QStringMatcher_QStringMatcher_string_CaseSensitivity(string pattern0,
 int cs1);
private extern(C) void* qtd_QStringMatcher_QStringMatcher_QStringMatcher(void* other0);
private extern(C) int  qtd_QStringMatcher_caseSensitivity_const(void* __this_nativeId);
private extern(C) int  qtd_QStringMatcher_indexIn_nativepointerchar_int_int_const(void* __this_nativeId,
 void* str0,
 int length1,
 int from2);
private extern(C) int  qtd_QStringMatcher_indexIn_string_int_const(void* __this_nativeId,
 string str0,
 int from1);
private extern(C) void  qtd_QStringMatcher_pattern_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QStringMatcher_setCaseSensitivity_CaseSensitivity(void* __this_nativeId,
 int cs0);
private extern(C) void  qtd_QStringMatcher_setPattern_string(void* __this_nativeId,
 string pattern0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QStringMatcher() {
    QStringMatcher.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QStringMatcher_QTypeInfo_isComplex();
private extern (C) bool qtd_QStringMatcher_QTypeInfo_isStatic();
private extern (C) bool qtd_QStringMatcher_QTypeInfo_isLarge();
private extern (C) bool qtd_QStringMatcher_QTypeInfo_isPointer();
private extern (C) bool qtd_QStringMatcher_QTypeInfo_isDummy();
