module qt.gui.QTextBlock;

public import qt.gui.QTextBlock_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QTextDocument;
public import qt.gui.QTextBlockFormat;
public import qt.gui.QTextCharFormat;
public import qt.gui.QTextList;
public import qt.gui.QTextLayout;
public import qt.gui.QTextBlockUserData;
public import qt.gui.QTextBlock_iterator;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextBlock : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QTextBlock_QTextBlock();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QTextBlock) o) {
        void* ret = qtd_QTextBlock_QTextBlock_QTextBlock(o is null ? null : (cast(QTextBlock)o).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QTextBlock_iterator begin() const {
        void* ret = qtd_QTextBlock_begin_const(qtdNativeId);
        QTextBlock_iterator __d_return_value = new QTextBlock_iterator(ret);
        return __d_return_value;
    }

    public final QTextBlockFormat blockFormat() const {
        void* ret = qtd_QTextBlock_blockFormat_const(qtdNativeId);
        QTextBlockFormat __d_return_value = new QTextBlockFormat(ret);
        return __d_return_value;
    }

    public final int blockFormatIndex() const {
        return qtd_QTextBlock_blockFormatIndex_const(qtdNativeId);
    }

    public final int blockNumber() const {
        return qtd_QTextBlock_blockNumber_const(qtdNativeId);
    }

    public final QTextCharFormat charFormat() const {
        void* ret = qtd_QTextBlock_charFormat_const(qtdNativeId);
        QTextCharFormat __d_return_value = new QTextCharFormat(ret);
        return __d_return_value;
    }

    public final int charFormatIndex() const {
        return qtd_QTextBlock_charFormatIndex_const(qtdNativeId);
    }

    public final void clearLayout() {
        qtd_QTextBlock_clearLayout(qtdNativeId);
    }

    public final bool contains(int position) const {
        return qtd_QTextBlock_contains_int_const(qtdNativeId, position);
    }

    public final QTextDocument document() const {
        void *ret = qtd_QTextBlock_document_const(qtdNativeId);
        QTextDocument __d_return_value = QTextDocument.__getObject(ret);
        return __d_return_value;
    }

    public final QTextBlock_iterator end() const {
        void* ret = qtd_QTextBlock_end_const(qtdNativeId);
        QTextBlock_iterator __d_return_value = new QTextBlock_iterator(ret);
        return __d_return_value;
    }

    public final int firstLineNumber() const {
        return qtd_QTextBlock_firstLineNumber_const(qtdNativeId);
    }

    public final int fragmentIndex() const {
        return qtd_QTextBlock_fragmentIndex_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QTextBlock_isValid_const(qtdNativeId);
    }

    public final bool isVisible() const {
        return qtd_QTextBlock_isVisible_const(qtdNativeId);
    }

    public final QTextLayout layout() const {
        void* ret = qtd_QTextBlock_layout_const(qtdNativeId);
        QTextLayout __d_return_value = qtd_QTextLayout_from_ptr(ret);

        return __d_return_value;
    }

    public final int length() const {
        return qtd_QTextBlock_length_const(qtdNativeId);
    }

    public final int lineCount() const {
        return qtd_QTextBlock_lineCount_const(qtdNativeId);
    }

    public final QTextBlock next() const {
        void* ret = qtd_QTextBlock_next_const(qtdNativeId);
        QTextBlock __d_return_value = new QTextBlock(ret);
        return __d_return_value;
    }

    private final bool operator_less(const(QTextBlock) o) const {
        return qtd_QTextBlock_operator_less_QTextBlock_const(qtdNativeId, o is null ? null : (cast(QTextBlock)o).qtdNativeId);
    }

    private final bool operator_equal(const(QTextBlock) o) const {
        return qtd_QTextBlock_operator_equal_QTextBlock_const(qtdNativeId, o is null ? null : (cast(QTextBlock)o).qtdNativeId);
    }

    public final int position() const {
        return qtd_QTextBlock_position_const(qtdNativeId);
    }

    public final QTextBlock previous() const {
        void* ret = qtd_QTextBlock_previous_const(qtdNativeId);
        QTextBlock __d_return_value = new QTextBlock(ret);
        return __d_return_value;
    }

    public final int revision() const {
        return qtd_QTextBlock_revision_const(qtdNativeId);
    }

    public final void setLineCount(int count) {
        qtd_QTextBlock_setLineCount_int(qtdNativeId, count);
    }

    public final void setRevision(int rev) {
        qtd_QTextBlock_setRevision_int(qtdNativeId, rev);
    }

    public final void setUserData(QTextBlockUserData data) {
        if (data !is null) {
            data.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QTextBlock_setUserData_QTextBlockUserData(qtdNativeId, data is null ? null : data.qtdNativeId);
    }

    public final void setUserState(int state) {
        qtd_QTextBlock_setUserState_int(qtdNativeId, state);
    }

    public final void setVisible(bool visible) {
        qtd_QTextBlock_setVisible_bool(qtdNativeId, visible);
    }

    public final string text() const {
        string res;
        qtd_QTextBlock_text_const(qtdNativeId, &res);
        return res;
    }

    public final Qt.LayoutDirection textDirection() const {
        return cast(Qt.LayoutDirection) qtd_QTextBlock_textDirection_const(qtdNativeId);
    }

    public final QTextList textList() const {
        void *ret = qtd_QTextBlock_textList_const(qtdNativeId);
        QTextList __d_return_value = QTextList.__getObject(ret);
        return __d_return_value;
    }

    public final QTextBlockUserData userData() const {
        void* ret = qtd_QTextBlock_userData_const(qtdNativeId);
        QTextBlockUserData __d_return_value = qtd_QTextBlockUserData_from_ptr(ret);

        return __d_return_value;
    }

    public final int userState() const {
        return qtd_QTextBlock_userState_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QTextBlock;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextBlock_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextBlock_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextBlock_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextBlock_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextBlock_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextBlock_QTypeInfo_isComplex();
        isStatic = qtd_QTextBlock_QTypeInfo_isStatic();
        isLarge = qtd_QTextBlock_QTypeInfo_isLarge();
        isPointer = qtd_QTextBlock_QTypeInfo_isPointer();
        isDummy = qtd_QTextBlock_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QTextBlock_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextBlock_native_copy(const void* orig);
extern (C) void qtd_QTextBlock_delete(void *ptr);
extern (C) void qtd_QTextBlock_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextBlock_QTextBlock();
private extern(C) void* qtd_QTextBlock_QTextBlock_QTextBlock(void* o0);
private extern(C) void*  qtd_QTextBlock_begin_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextBlock_blockFormat_const(void* __this_nativeId);
private extern(C) int  qtd_QTextBlock_blockFormatIndex_const(void* __this_nativeId);
private extern(C) int  qtd_QTextBlock_blockNumber_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextBlock_charFormat_const(void* __this_nativeId);
private extern(C) int  qtd_QTextBlock_charFormatIndex_const(void* __this_nativeId);
private extern(C) void  qtd_QTextBlock_clearLayout(void* __this_nativeId);
private extern(C) bool  qtd_QTextBlock_contains_int_const(void* __this_nativeId,
 int position0);
private extern(C) void*  qtd_QTextBlock_document_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextBlock_end_const(void* __this_nativeId);
private extern(C) int  qtd_QTextBlock_firstLineNumber_const(void* __this_nativeId);
private extern(C) int  qtd_QTextBlock_fragmentIndex_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextBlock_isValid_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextBlock_isVisible_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextBlock_layout_const(void* __this_nativeId);
private extern(C) int  qtd_QTextBlock_length_const(void* __this_nativeId);
private extern(C) int  qtd_QTextBlock_lineCount_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextBlock_next_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextBlock_operator_less_QTextBlock_const(void* __this_nativeId,
 void* o0);
private extern(C) bool  qtd_QTextBlock_operator_equal_QTextBlock_const(void* __this_nativeId,
 void* o0);
private extern(C) int  qtd_QTextBlock_position_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextBlock_previous_const(void* __this_nativeId);
private extern(C) int  qtd_QTextBlock_revision_const(void* __this_nativeId);
private extern(C) void  qtd_QTextBlock_setLineCount_int(void* __this_nativeId,
 int count0);
private extern(C) void  qtd_QTextBlock_setRevision_int(void* __this_nativeId,
 int rev0);
private extern(C) void  qtd_QTextBlock_setUserData_QTextBlockUserData(void* __this_nativeId,
 void* data0);
private extern(C) void  qtd_QTextBlock_setUserState_int(void* __this_nativeId,
 int state0);
private extern(C) void  qtd_QTextBlock_setVisible_bool(void* __this_nativeId,
 bool visible0);
private extern(C) void  qtd_QTextBlock_text_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QTextBlock_textDirection_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextBlock_textList_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextBlock_userData_const(void* __this_nativeId);
private extern(C) int  qtd_QTextBlock_userState_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QTextBlock() {
    QTextBlock.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QTextBlock_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextBlock_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextBlock_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextBlock_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextBlock_QTypeInfo_isDummy();
