module qt.core.QRegExp;

public import qt.core.QRegExp_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.core.QDataStream;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QRegExp : QtdObject
{
    public enum PatternSyntax {
        RegExp = 0,
        Wildcard = 1,
        FixedString = 2,
        RegExp2 = 3,
        WildcardUnix = 4,
        W3CXmlSchema11 = 5
    }

    alias PatternSyntax.RegExp RegExp;
    alias PatternSyntax.Wildcard Wildcard;
    alias PatternSyntax.FixedString FixedString;
    alias PatternSyntax.RegExp2 RegExp2;
    alias PatternSyntax.WildcardUnix WildcardUnix;
    alias PatternSyntax.W3CXmlSchema11 W3CXmlSchema11;

    public enum CaretMode {
        CaretAtZero = 0,
        CaretAtOffset = 1,
        CaretWontMatch = 2
    }

    alias CaretMode.CaretAtZero CaretAtZero;
    alias CaretMode.CaretAtOffset CaretAtOffset;
    alias CaretMode.CaretWontMatch CaretWontMatch;


// Functions

    public this() {
        void* ret = qtd_QRegExp_QRegExp();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QRegExp) rx) {
        void* ret = qtd_QRegExp_QRegExp_QRegExp(rx is null ? null : (cast(QRegExp)rx).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string pattern, Qt.CaseSensitivity cs = Qt.CaseSensitivity.CaseSensitive, QRegExp.PatternSyntax syntax = QRegExp.PatternSyntax.RegExp) {
        void* ret = qtd_QRegExp_QRegExp_string_CaseSensitivity_PatternSyntax(pattern, cs, syntax);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string cap(int nth = 0) {
        string res;
        qtd_QRegExp_cap_int(qtdNativeId, &res, nth);
        return res;
    }

    public final int captureCount() const {
        return qtd_QRegExp_captureCount_const(qtdNativeId);
    }

    public final QList!(string) capturedTexts() {
        auto res = QList!(string).opCall();
        qtd_QRegExp_capturedTexts(qtdNativeId, &res);
        return res;
    }

    public final Qt.CaseSensitivity caseSensitivity() const {
        return cast(Qt.CaseSensitivity) qtd_QRegExp_caseSensitivity_const(qtdNativeId);
    }

    public final string errorString() {
        string res;
        qtd_QRegExp_errorString(qtdNativeId, &res);
        return res;
    }

    public final bool exactMatch(string str) const {
        return qtd_QRegExp_exactMatch_string_const(qtdNativeId, str);
    }

    public final int indexIn(string str, int offset = 0, QRegExp.CaretMode caretMode = QRegExp.CaretMode.CaretAtZero) const {
        return qtd_QRegExp_indexIn_string_int_CaretMode_const(qtdNativeId, str, offset, caretMode);
    }

    public final bool isEmpty() const {
        return qtd_QRegExp_isEmpty_const(qtdNativeId);
    }

    public final bool isMinimal() const {
        return qtd_QRegExp_isMinimal_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QRegExp_isValid_const(qtdNativeId);
    }

    public final int lastIndexIn(string str, int offset = -1, QRegExp.CaretMode caretMode = QRegExp.CaretMode.CaretAtZero) const {
        return qtd_QRegExp_lastIndexIn_string_int_CaretMode_const(qtdNativeId, str, offset, caretMode);
    }

    public final int matchedLength() const {
        return qtd_QRegExp_matchedLength_const(qtdNativeId);
    }

    public final int numCaptures() const {
        return qtd_QRegExp_numCaptures_const(qtdNativeId);
    }

    public final void writeTo(QDataStream out_) {
        qtd_QRegExp_writeTo_QDataStream(qtdNativeId, out_ is null ? null : out_.qtdNativeId);
    }

    private final bool operator_equal(const(QRegExp) rx) const {
        return qtd_QRegExp_operator_equal_QRegExp_const(qtdNativeId, rx is null ? null : (cast(QRegExp)rx).qtdNativeId);
    }

    public final void readFrom(QDataStream in_) {
        qtd_QRegExp_readFrom_QDataStream(qtdNativeId, in_ is null ? null : in_.qtdNativeId);
    }

    public final string pattern() const {
        string res;
        qtd_QRegExp_pattern_const(qtdNativeId, &res);
        return res;
    }

    public final QRegExp.PatternSyntax patternSyntax() const {
        return cast(QRegExp.PatternSyntax) qtd_QRegExp_patternSyntax_const(qtdNativeId);
    }

    public final int pos(int nth = 0) {
        return qtd_QRegExp_pos_int(qtdNativeId, nth);
    }

    public final void setCaseSensitivity(Qt.CaseSensitivity cs) {
        qtd_QRegExp_setCaseSensitivity_CaseSensitivity(qtdNativeId, cs);
    }

    public final void setMinimal(bool minimal) {
        qtd_QRegExp_setMinimal_bool(qtdNativeId, minimal);
    }

    public final void setPattern(string pattern) {
        qtd_QRegExp_setPattern_string(qtdNativeId, pattern);
    }

    public final void setPatternSyntax(QRegExp.PatternSyntax syntax) {
        qtd_QRegExp_setPatternSyntax_PatternSyntax(qtdNativeId, syntax);
    }

    public static string escape(string str) {
        string res;
        qtd_QRegExp_escape_string(&res, str);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QRegExp;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QRegExp_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QRegExp_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QRegExp_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QRegExp_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QRegExp_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QRegExp_QTypeInfo_isComplex();
        isStatic = qtd_QRegExp_QTypeInfo_isStatic();
        isLarge = qtd_QRegExp_QTypeInfo_isLarge();
        isPointer = qtd_QRegExp_QTypeInfo_isPointer();
        isDummy = qtd_QRegExp_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QRegExp_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QRegExp_native_copy(const void* orig);
extern (C) void qtd_QRegExp_delete(void *ptr);
extern (C) void qtd_QRegExp_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QRegExp_QRegExp();
private extern(C) void* qtd_QRegExp_QRegExp_QRegExp(void* rx0);
private extern(C) void* qtd_QRegExp_QRegExp_string_CaseSensitivity_PatternSyntax(string pattern0,
 int cs1,
 int syntax2);
private extern(C) void  qtd_QRegExp_cap_int(void* __this_nativeId,
 void* __d_return_value,
 int nth0);
private extern(C) int  qtd_QRegExp_captureCount_const(void* __this_nativeId);
private extern(C) void  qtd_QRegExp_capturedTexts(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QRegExp_caseSensitivity_const(void* __this_nativeId);
private extern(C) void  qtd_QRegExp_errorString(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QRegExp_exactMatch_string_const(void* __this_nativeId,
 string str0);
private extern(C) int  qtd_QRegExp_indexIn_string_int_CaretMode_const(void* __this_nativeId,
 string str0,
 int offset1,
 int caretMode2);
private extern(C) bool  qtd_QRegExp_isEmpty_const(void* __this_nativeId);
private extern(C) bool  qtd_QRegExp_isMinimal_const(void* __this_nativeId);
private extern(C) bool  qtd_QRegExp_isValid_const(void* __this_nativeId);
private extern(C) int  qtd_QRegExp_lastIndexIn_string_int_CaretMode_const(void* __this_nativeId,
 string str0,
 int offset1,
 int caretMode2);
private extern(C) int  qtd_QRegExp_matchedLength_const(void* __this_nativeId);
private extern(C) int  qtd_QRegExp_numCaptures_const(void* __this_nativeId);
private extern(C) void  qtd_QRegExp_writeTo_QDataStream(void* __this_nativeId,
 void* out0);
private extern(C) bool  qtd_QRegExp_operator_equal_QRegExp_const(void* __this_nativeId,
 void* rx0);
private extern(C) void  qtd_QRegExp_readFrom_QDataStream(void* __this_nativeId,
 void* in0);
private extern(C) void  qtd_QRegExp_pattern_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QRegExp_patternSyntax_const(void* __this_nativeId);
private extern(C) int  qtd_QRegExp_pos_int(void* __this_nativeId,
 int nth0);
private extern(C) void  qtd_QRegExp_setCaseSensitivity_CaseSensitivity(void* __this_nativeId,
 int cs0);
private extern(C) void  qtd_QRegExp_setMinimal_bool(void* __this_nativeId,
 bool minimal0);
private extern(C) void  qtd_QRegExp_setPattern_string(void* __this_nativeId,
 string pattern0);
private extern(C) void  qtd_QRegExp_setPatternSyntax_PatternSyntax(void* __this_nativeId,
 int syntax0);
private extern(C) void  qtd_QRegExp_escape_string(void* __d_return_value,
 string str0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QRegExp() {
    QRegExp.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QRegExp_QTypeInfo_isComplex();
private extern (C) bool qtd_QRegExp_QTypeInfo_isStatic();
private extern (C) bool qtd_QRegExp_QTypeInfo_isLarge();
private extern (C) bool qtd_QRegExp_QTypeInfo_isPointer();
private extern (C) bool qtd_QRegExp_QTypeInfo_isDummy();
