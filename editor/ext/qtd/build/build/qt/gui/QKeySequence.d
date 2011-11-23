module qt.gui.QKeySequence;

public import qt.gui.QKeySequence_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QList;
public import qt.core.QVariant;
public import qt.core.QDataStream;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QKeySequence : QtdObject
{
    public enum SequenceFormat {
        NativeText = 0,
        PortableText = 1
    }

    alias SequenceFormat.NativeText NativeText;
    alias SequenceFormat.PortableText PortableText;

    public enum StandardKey {
        UnknownKey = 0,
        HelpContents = 1,
        WhatsThis = 2,
        Open = 3,
        Close = 4,
        Save = 5,
        New = 6,
        Delete = 7,
        Cut = 8,
        Copy = 9,
        Paste = 10,
        Undo = 11,
        Redo = 12,
        Back = 13,
        Forward = 14,
        Refresh = 15,
        ZoomIn = 16,
        ZoomOut = 17,
        Print = 18,
        AddTab = 19,
        NextChild = 20,
        PreviousChild = 21,
        Find = 22,
        FindNext = 23,
        FindPrevious = 24,
        Replace = 25,
        SelectAll = 26,
        Bold = 27,
        Italic = 28,
        Underline = 29,
        MoveToNextChar = 30,
        MoveToPreviousChar = 31,
        MoveToNextWord = 32,
        MoveToPreviousWord = 33,
        MoveToNextLine = 34,
        MoveToPreviousLine = 35,
        MoveToNextPage = 36,
        MoveToPreviousPage = 37,
        MoveToStartOfLine = 38,
        MoveToEndOfLine = 39,
        MoveToStartOfBlock = 40,
        MoveToEndOfBlock = 41,
        MoveToStartOfDocument = 42,
        MoveToEndOfDocument = 43,
        SelectNextChar = 44,
        SelectPreviousChar = 45,
        SelectNextWord = 46,
        SelectPreviousWord = 47,
        SelectNextLine = 48,
        SelectPreviousLine = 49,
        SelectNextPage = 50,
        SelectPreviousPage = 51,
        SelectStartOfLine = 52,
        SelectEndOfLine = 53,
        SelectStartOfBlock = 54,
        SelectEndOfBlock = 55,
        SelectStartOfDocument = 56,
        SelectEndOfDocument = 57,
        DeleteStartOfWord = 58,
        DeleteEndOfWord = 59,
        DeleteEndOfLine = 60,
        InsertParagraphSeparator = 61,
        InsertLineSeparator = 62,
        SaveAs = 63,
        Preferences = 64,
        Quit = 65
    }

    alias StandardKey.UnknownKey UnknownKey;
    alias StandardKey.HelpContents HelpContents;
    alias StandardKey.WhatsThis WhatsThis;
    alias StandardKey.Open Open;
    alias StandardKey.Close Close;
    alias StandardKey.Save Save;
    alias StandardKey.New New;
    alias StandardKey.Delete Delete;
    alias StandardKey.Cut Cut;
    alias StandardKey.Copy Copy;
    alias StandardKey.Paste Paste;
    alias StandardKey.Undo Undo;
    alias StandardKey.Redo Redo;
    alias StandardKey.Back Back;
    alias StandardKey.Forward Forward;
    alias StandardKey.Refresh Refresh;
    alias StandardKey.ZoomIn ZoomIn;
    alias StandardKey.ZoomOut ZoomOut;
    alias StandardKey.Print Print;
    alias StandardKey.AddTab AddTab;
    alias StandardKey.NextChild NextChild;
    alias StandardKey.PreviousChild PreviousChild;
    alias StandardKey.Find Find;
    alias StandardKey.FindNext FindNext;
    alias StandardKey.FindPrevious FindPrevious;
    alias StandardKey.Replace Replace;
    alias StandardKey.SelectAll SelectAll;
    alias StandardKey.Bold Bold;
    alias StandardKey.Italic Italic;
    alias StandardKey.Underline Underline;
    alias StandardKey.MoveToNextChar MoveToNextChar;
    alias StandardKey.MoveToPreviousChar MoveToPreviousChar;
    alias StandardKey.MoveToNextWord MoveToNextWord;
    alias StandardKey.MoveToPreviousWord MoveToPreviousWord;
    alias StandardKey.MoveToNextLine MoveToNextLine;
    alias StandardKey.MoveToPreviousLine MoveToPreviousLine;
    alias StandardKey.MoveToNextPage MoveToNextPage;
    alias StandardKey.MoveToPreviousPage MoveToPreviousPage;
    alias StandardKey.MoveToStartOfLine MoveToStartOfLine;
    alias StandardKey.MoveToEndOfLine MoveToEndOfLine;
    alias StandardKey.MoveToStartOfBlock MoveToStartOfBlock;
    alias StandardKey.MoveToEndOfBlock MoveToEndOfBlock;
    alias StandardKey.MoveToStartOfDocument MoveToStartOfDocument;
    alias StandardKey.MoveToEndOfDocument MoveToEndOfDocument;
    alias StandardKey.SelectNextChar SelectNextChar;
    alias StandardKey.SelectPreviousChar SelectPreviousChar;
    alias StandardKey.SelectNextWord SelectNextWord;
    alias StandardKey.SelectPreviousWord SelectPreviousWord;
    alias StandardKey.SelectNextLine SelectNextLine;
    alias StandardKey.SelectPreviousLine SelectPreviousLine;
    alias StandardKey.SelectNextPage SelectNextPage;
    alias StandardKey.SelectPreviousPage SelectPreviousPage;
    alias StandardKey.SelectStartOfLine SelectStartOfLine;
    alias StandardKey.SelectEndOfLine SelectEndOfLine;
    alias StandardKey.SelectStartOfBlock SelectStartOfBlock;
    alias StandardKey.SelectEndOfBlock SelectEndOfBlock;
    alias StandardKey.SelectStartOfDocument SelectStartOfDocument;
    alias StandardKey.SelectEndOfDocument SelectEndOfDocument;
    alias StandardKey.DeleteStartOfWord DeleteStartOfWord;
    alias StandardKey.DeleteEndOfWord DeleteEndOfWord;
    alias StandardKey.DeleteEndOfLine DeleteEndOfLine;
    alias StandardKey.InsertParagraphSeparator InsertParagraphSeparator;
    alias StandardKey.InsertLineSeparator InsertLineSeparator;
    alias StandardKey.SaveAs SaveAs;
    alias StandardKey.Preferences Preferences;
    alias StandardKey.Quit Quit;

    public enum SequenceMatch {
        NoMatch = 0,
        PartialMatch = 1,
        ExactMatch = 2
    }

    alias SequenceMatch.NoMatch NoMatch;
    alias SequenceMatch.PartialMatch PartialMatch;
    alias SequenceMatch.ExactMatch ExactMatch;


// Functions

    public this() {
        void* ret = qtd_QKeySequence_QKeySequence();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QKeySequence.StandardKey key) {
        void* ret = qtd_QKeySequence_QKeySequence_StandardKey(key);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QKeySequence) ks) {
        void* ret = qtd_QKeySequence_QKeySequence_QKeySequence(ks is null ? null : (cast(QKeySequence)ks).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string key) {
        void* ret = qtd_QKeySequence_QKeySequence_string(key);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string key, QKeySequence.SequenceFormat format) {
        void* ret = qtd_QKeySequence_QKeySequence_string_SequenceFormat(key, format);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int k1, int k2 = 0, int k3 = 0, int k4 = 0) {
        void* ret = qtd_QKeySequence_QKeySequence_int_int_int_int(k1, k2, k3, k4);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final uint count() const {
        return qtd_QKeySequence_count_const(qtdNativeId);
    }

    public final bool isEmpty() const {
        return qtd_QKeySequence_isEmpty_const(qtdNativeId);
    }

    public final QKeySequence.SequenceMatch matches(const(QKeySequence) seq) const {
        return cast(QKeySequence.SequenceMatch) qtd_QKeySequence_matches_QKeySequence_const(qtdNativeId, seq is null ? null : (cast(QKeySequence)seq).qtdNativeId);
    }

    public final QVariant operator_cast_QVariant() const {
        void* ret = qtd_QKeySequence_operator_cast_QVariant_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    private final int operator_cast_int() const {
        return qtd_QKeySequence_operator_cast_int_const(qtdNativeId);
    }

    private final bool operator_less(const(QKeySequence) ks) const {
        return qtd_QKeySequence_operator_less_QKeySequence_const(qtdNativeId, ks is null ? null : (cast(QKeySequence)ks).qtdNativeId);
    }

    public final void writeTo(QDataStream in_) {
        qtd_QKeySequence_writeTo_QDataStream(qtdNativeId, in_ is null ? null : in_.qtdNativeId);
    }

    private final bool operator_equal(const(QKeySequence) other) const {
        return qtd_QKeySequence_operator_equal_QKeySequence_const(qtdNativeId, other is null ? null : (cast(QKeySequence)other).qtdNativeId);
    }

    public final void readFrom(QDataStream out_) {
        qtd_QKeySequence_readFrom_QDataStream(qtdNativeId, out_ is null ? null : out_.qtdNativeId);
    }

    private final int operator_subscript(uint i) const {
        return qtd_QKeySequence_operator_subscript_uint_const(qtdNativeId, i);
    }

    public final string toString(QKeySequence.SequenceFormat format = QKeySequence.SequenceFormat.PortableText) const {
        string res;
        qtd_QKeySequence_toString_SequenceFormat_const(qtdNativeId, &res, format);
        return res;
    }

    public static QKeySequence fromString(string str, QKeySequence.SequenceFormat format = QKeySequence.SequenceFormat.PortableText) {
        void* ret = qtd_QKeySequence_fromString_string_SequenceFormat(str, format);
        QKeySequence __d_return_value = new QKeySequence(ret);
        return __d_return_value;
    }

    public static QList!(QKeySequence) keyBindings(QKeySequence.StandardKey key) {
        auto res = QList!(QKeySequence).opCall();
        qtd_QKeySequence_keyBindings_StandardKey(&res, key);
        return res;
    }

    public static QKeySequence mnemonic(string text) {
        void* ret = qtd_QKeySequence_mnemonic_string(text);
        QKeySequence __d_return_value = new QKeySequence(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QKeySequence;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QKeySequence_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QKeySequence_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QKeySequence_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QKeySequence_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QKeySequence_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QKeySequence_QTypeInfo_isComplex();
        isStatic = qtd_QKeySequence_QTypeInfo_isStatic();
        isLarge = qtd_QKeySequence_QTypeInfo_isLarge();
        isPointer = qtd_QKeySequence_QTypeInfo_isPointer();
        isDummy = qtd_QKeySequence_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
    @QtBlockedSlot
    public final int toInt() {
    return operator_cast_int();
    }

    @QtBlockedSlot
    public final int at(int i) {
    return operator_subscript(i);
    }
     */

}
private extern(C) void qtd_QKeySequence_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QKeySequence_native_copy(const void* orig);
extern (C) void qtd_QKeySequence_delete(void *ptr);
extern (C) void qtd_QKeySequence_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QKeySequence_QKeySequence();
private extern(C) void* qtd_QKeySequence_QKeySequence_StandardKey(int key0);
private extern(C) void* qtd_QKeySequence_QKeySequence_QKeySequence(void* ks0);
private extern(C) void* qtd_QKeySequence_QKeySequence_string(string key0);
private extern(C) void* qtd_QKeySequence_QKeySequence_string_SequenceFormat(string key0,
 int format1);
private extern(C) void* qtd_QKeySequence_QKeySequence_int_int_int_int(int k10,
 int k21,
 int k32,
 int k43);
private extern(C) uint  qtd_QKeySequence_count_const(void* __this_nativeId);
private extern(C) bool  qtd_QKeySequence_isEmpty_const(void* __this_nativeId);
private extern(C) int  qtd_QKeySequence_matches_QKeySequence_const(void* __this_nativeId,
 void* seq0);
private extern(C) void*  qtd_QKeySequence_operator_cast_QVariant_const(void* __this_nativeId);
private extern(C) int  qtd_QKeySequence_operator_cast_int_const(void* __this_nativeId);
private extern(C) bool  qtd_QKeySequence_operator_less_QKeySequence_const(void* __this_nativeId,
 void* ks0);
private extern(C) void  qtd_QKeySequence_writeTo_QDataStream(void* __this_nativeId,
 void* in0);
private extern(C) bool  qtd_QKeySequence_operator_equal_QKeySequence_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QKeySequence_readFrom_QDataStream(void* __this_nativeId,
 void* out0);
private extern(C) int  qtd_QKeySequence_operator_subscript_uint_const(void* __this_nativeId,
 uint i0);
private extern(C) void  qtd_QKeySequence_toString_SequenceFormat_const(void* __this_nativeId,
 void* __d_return_value,
 int format0);
private extern(C) void*  qtd_QKeySequence_fromString_string_SequenceFormat(string str0,
 int format1);
private extern(C) void  qtd_QKeySequence_keyBindings_StandardKey(void* __d_return_value,
 int key0);
private extern(C) void*  qtd_QKeySequence_mnemonic_string(string text0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QKeySequence() {
    QKeySequence.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QKeySequence_QTypeInfo_isComplex();
private extern (C) bool qtd_QKeySequence_QTypeInfo_isStatic();
private extern (C) bool qtd_QKeySequence_QTypeInfo_isLarge();
private extern (C) bool qtd_QKeySequence_QTypeInfo_isPointer();
private extern (C) bool qtd_QKeySequence_QTypeInfo_isDummy();
