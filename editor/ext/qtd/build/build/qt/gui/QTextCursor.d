module qt.gui.QTextCursor;

public import qt.gui.QTextCursor_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QTextFrameFormat;
public import qt.gui.QTextListFormat;
public import qt.gui.QTextDocument;
public import qt.gui.QTextBlock;
public import qt.gui.QTextBlockFormat;
public import qt.gui.QTextImageFormat;
public import qt.gui.QTextCharFormat;
public import qt.gui.QTextList;
public import qt.gui.QTextDocumentFragment;
public import qt.gui.QTextFrame;
public import qt.gui.QTextFrameFormat;
public import qt.gui.QTextTable;
public import qt.gui.QImage;
public import qt.gui.QTextTableFormat;
public import qt.gui.QTextListFormat;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextCursor : QtdObject
{
    public enum MoveMode {
        MoveAnchor = 0,
        KeepAnchor = 1
    }

    alias MoveMode.MoveAnchor MoveAnchor;
    alias MoveMode.KeepAnchor KeepAnchor;

    public enum MoveOperation {
        NoMove = 0,
        Start = 1,
        Up = 2,
        StartOfLine = 3,
        StartOfBlock = 4,
        StartOfWord = 5,
        PreviousBlock = 6,
        PreviousCharacter = 7,
        PreviousWord = 8,
        Left = 9,
        WordLeft = 10,
        End = 11,
        Down = 12,
        EndOfLine = 13,
        EndOfWord = 14,
        EndOfBlock = 15,
        NextBlock = 16,
        NextCharacter = 17,
        NextWord = 18,
        Right = 19,
        WordRight = 20,
        NextCell = 21,
        PreviousCell = 22,
        NextRow = 23,
        PreviousRow = 24
    }

    alias MoveOperation.NoMove NoMove;
    alias MoveOperation.Start Start;
    alias MoveOperation.Up Up;
    alias MoveOperation.StartOfLine StartOfLine;
    alias MoveOperation.StartOfBlock StartOfBlock;
    alias MoveOperation.StartOfWord StartOfWord;
    alias MoveOperation.PreviousBlock PreviousBlock;
    alias MoveOperation.PreviousCharacter PreviousCharacter;
    alias MoveOperation.PreviousWord PreviousWord;
    alias MoveOperation.Left Left;
    alias MoveOperation.WordLeft WordLeft;
    alias MoveOperation.End End;
    alias MoveOperation.Down Down;
    alias MoveOperation.EndOfLine EndOfLine;
    alias MoveOperation.EndOfWord EndOfWord;
    alias MoveOperation.EndOfBlock EndOfBlock;
    alias MoveOperation.NextBlock NextBlock;
    alias MoveOperation.NextCharacter NextCharacter;
    alias MoveOperation.NextWord NextWord;
    alias MoveOperation.Right Right;
    alias MoveOperation.WordRight WordRight;
    alias MoveOperation.NextCell NextCell;
    alias MoveOperation.PreviousCell PreviousCell;
    alias MoveOperation.NextRow NextRow;
    alias MoveOperation.PreviousRow PreviousRow;

    public enum SelectionType {
        WordUnderCursor = 0,
        LineUnderCursor = 1,
        BlockUnderCursor = 2,
        Document = 3
    }

    alias SelectionType.WordUnderCursor WordUnderCursor;
    alias SelectionType.LineUnderCursor LineUnderCursor;
    alias SelectionType.BlockUnderCursor BlockUnderCursor;
    alias SelectionType.Document Document;


// Functions

    public this() {
        void* ret = qtd_QTextCursor_QTextCursor();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QTextDocument document) {
        void* ret = qtd_QTextCursor_QTextCursor_QTextDocument(document is null ? null : document.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QTextFrame frame) {
        void* ret = qtd_QTextCursor_QTextCursor_QTextFrame(frame is null ? null : frame.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QTextBlock) block) {
        void* ret = qtd_QTextCursor_QTextCursor_QTextBlock(block is null ? null : (cast(QTextBlock)block).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QTextCursor) cursor) {
        void* ret = qtd_QTextCursor_QTextCursor_QTextCursor(cursor is null ? null : (cast(QTextCursor)cursor).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int anchor() const {
        return qtd_QTextCursor_anchor_const(qtdNativeId);
    }

    public final bool atBlockEnd() const {
        return qtd_QTextCursor_atBlockEnd_const(qtdNativeId);
    }

    public final bool atBlockStart() const {
        return qtd_QTextCursor_atBlockStart_const(qtdNativeId);
    }

    public final bool atEnd() const {
        return qtd_QTextCursor_atEnd_const(qtdNativeId);
    }

    public final bool atStart() const {
        return qtd_QTextCursor_atStart_const(qtdNativeId);
    }

    public final void beginEditBlock() {
        qtd_QTextCursor_beginEditBlock(qtdNativeId);
    }

    public final QTextBlock block() const {
        void* ret = qtd_QTextCursor_block_const(qtdNativeId);
        QTextBlock __d_return_value = new QTextBlock(ret);
        return __d_return_value;
    }

    public final QTextCharFormat blockCharFormat() const {
        void* ret = qtd_QTextCursor_blockCharFormat_const(qtdNativeId);
        QTextCharFormat __d_return_value = new QTextCharFormat(ret);
        return __d_return_value;
    }

    public final QTextBlockFormat blockFormat() const {
        void* ret = qtd_QTextCursor_blockFormat_const(qtdNativeId);
        QTextBlockFormat __d_return_value = new QTextBlockFormat(ret);
        return __d_return_value;
    }

    public final int blockNumber() const {
        return qtd_QTextCursor_blockNumber_const(qtdNativeId);
    }

    public final QTextCharFormat charFormat() const {
        void* ret = qtd_QTextCursor_charFormat_const(qtdNativeId);
        QTextCharFormat __d_return_value = new QTextCharFormat(ret);
        return __d_return_value;
    }

    public final void clearSelection() {
        qtd_QTextCursor_clearSelection(qtdNativeId);
    }

    public final int columnNumber() const {
        return qtd_QTextCursor_columnNumber_const(qtdNativeId);
    }

    public final QTextList createList(QTextListFormat.Style style) {
        void *ret = qtd_QTextCursor_createList_Style(qtdNativeId, style);
        QTextList __d_return_value = QTextList.__getObject(ret);
        return __d_return_value;
    }

    public final QTextList createList(const(QTextListFormat) format) {
        void *ret = qtd_QTextCursor_createList_QTextListFormat(qtdNativeId, format is null ? null : (cast(QTextListFormat)format).qtdNativeId);
        QTextList __d_return_value = QTextList.__getObject(ret);
        return __d_return_value;
    }

    public final QTextFrame currentFrame() const {
        void *ret = qtd_QTextCursor_currentFrame_const(qtdNativeId);
        QTextFrame __d_return_value = QTextFrame.__getObject(ret);
        return __d_return_value;
    }

    public final QTextList currentList() const {
        void *ret = qtd_QTextCursor_currentList_const(qtdNativeId);
        QTextList __d_return_value = QTextList.__getObject(ret);
        return __d_return_value;
    }

    public final QTextTable currentTable() const {
        void *ret = qtd_QTextCursor_currentTable_const(qtdNativeId);
        QTextTable __d_return_value = QTextTable.__getObject(ret);
        return __d_return_value;
    }

    public final void deleteChar() {
        qtd_QTextCursor_deleteChar(qtdNativeId);
    }

    public final void deletePreviousChar() {
        qtd_QTextCursor_deletePreviousChar(qtdNativeId);
    }

    public final QTextDocument document() const {
        void *ret = qtd_QTextCursor_document_const(qtdNativeId);
        QTextDocument __d_return_value = QTextDocument.__getObject(ret);
        return __d_return_value;
    }

    public final void endEditBlock() {
        qtd_QTextCursor_endEditBlock(qtdNativeId);
    }

    public final bool hasComplexSelection() const {
        return qtd_QTextCursor_hasComplexSelection_const(qtdNativeId);
    }

    public final bool hasSelection() const {
        return qtd_QTextCursor_hasSelection_const(qtdNativeId);
    }

    public final void insertBlock() {
        qtd_QTextCursor_insertBlock(qtdNativeId);
    }

    public final void insertBlock(const(QTextBlockFormat) format) {
        qtd_QTextCursor_insertBlock_QTextBlockFormat(qtdNativeId, format is null ? null : (cast(QTextBlockFormat)format).qtdNativeId);
    }

    public final void insertBlock(const(QTextBlockFormat) format, const(QTextCharFormat) charFormat) {
        qtd_QTextCursor_insertBlock_QTextBlockFormat_QTextCharFormat(qtdNativeId, format is null ? null : (cast(QTextBlockFormat)format).qtdNativeId, charFormat is null ? null : (cast(QTextCharFormat)charFormat).qtdNativeId);
    }

    public final void insertFragment(const(QTextDocumentFragment) fragment) {
        qtd_QTextCursor_insertFragment_QTextDocumentFragment(qtdNativeId, fragment is null ? null : (cast(QTextDocumentFragment)fragment).qtdNativeId);
    }

    public final QTextFrame insertFrame(const(QTextFrameFormat) format) {
        void *ret = qtd_QTextCursor_insertFrame_QTextFrameFormat(qtdNativeId, format is null ? null : (cast(QTextFrameFormat)format).qtdNativeId);
        QTextFrame __d_return_value = QTextFrame.__getObject(ret);
        return __d_return_value;
    }

    public final void insertHtml(string html) {
        qtd_QTextCursor_insertHtml_string(qtdNativeId, html);
    }

    public final void insertImage(const(QImage) image, string name = "") {
        qtd_QTextCursor_insertImage_QImage_string(qtdNativeId, image is null ? null : (cast(QImage)image).qtdNativeId, name);
    }

    public final void insertImage(string name) {
        qtd_QTextCursor_insertImage_string(qtdNativeId, name);
    }

    public final void insertImage(const(QTextImageFormat) format) {
        qtd_QTextCursor_insertImage_QTextImageFormat(qtdNativeId, format is null ? null : (cast(QTextImageFormat)format).qtdNativeId);
    }

    public final void insertImage(const(QTextImageFormat) format, QTextFrameFormat.Position alignment) {
        qtd_QTextCursor_insertImage_QTextImageFormat_Position(qtdNativeId, format is null ? null : (cast(QTextImageFormat)format).qtdNativeId, alignment);
    }

    public final QTextList insertList(QTextListFormat.Style style) {
        void *ret = qtd_QTextCursor_insertList_Style(qtdNativeId, style);
        QTextList __d_return_value = QTextList.__getObject(ret);
        return __d_return_value;
    }

    public final QTextList insertList(const(QTextListFormat) format) {
        void *ret = qtd_QTextCursor_insertList_QTextListFormat(qtdNativeId, format is null ? null : (cast(QTextListFormat)format).qtdNativeId);
        QTextList __d_return_value = QTextList.__getObject(ret);
        return __d_return_value;
    }

    public final QTextTable insertTable(int rows, int cols) {
        void *ret = qtd_QTextCursor_insertTable_int_int(qtdNativeId, rows, cols);
        QTextTable __d_return_value = QTextTable.__getObject(ret);
        return __d_return_value;
    }

    public final QTextTable insertTable(int rows, int cols, const(QTextTableFormat) format) {
        void *ret = qtd_QTextCursor_insertTable_int_int_QTextTableFormat(qtdNativeId, rows, cols, format is null ? null : (cast(QTextTableFormat)format).qtdNativeId);
        QTextTable __d_return_value = QTextTable.__getObject(ret);
        return __d_return_value;
    }

    public final void insertText(string text) {
        qtd_QTextCursor_insertText_string(qtdNativeId, text);
    }

    public final void insertText(string text, const(QTextCharFormat) format) {
        qtd_QTextCursor_insertText_string_QTextCharFormat(qtdNativeId, text, format is null ? null : (cast(QTextCharFormat)format).qtdNativeId);
    }

    public final bool isCopyOf(const(QTextCursor) other) const {
        return qtd_QTextCursor_isCopyOf_QTextCursor_const(qtdNativeId, other is null ? null : (cast(QTextCursor)other).qtdNativeId);
    }

    public final bool isNull() const {
        return qtd_QTextCursor_isNull_const(qtdNativeId);
    }

    public final void joinPreviousEditBlock() {
        qtd_QTextCursor_joinPreviousEditBlock(qtdNativeId);
    }

    public final bool keepPositionOnInsert() const {
        return qtd_QTextCursor_keepPositionOnInsert_const(qtdNativeId);
    }

    public final void mergeBlockCharFormat(const(QTextCharFormat) modifier) {
        qtd_QTextCursor_mergeBlockCharFormat_QTextCharFormat(qtdNativeId, modifier is null ? null : (cast(QTextCharFormat)modifier).qtdNativeId);
    }

    public final void mergeBlockFormat(const(QTextBlockFormat) modifier) {
        qtd_QTextCursor_mergeBlockFormat_QTextBlockFormat(qtdNativeId, modifier is null ? null : (cast(QTextBlockFormat)modifier).qtdNativeId);
    }

    public final void mergeCharFormat(const(QTextCharFormat) modifier) {
        qtd_QTextCursor_mergeCharFormat_QTextCharFormat(qtdNativeId, modifier is null ? null : (cast(QTextCharFormat)modifier).qtdNativeId);
    }

    public final bool movePosition(QTextCursor.MoveOperation op, QTextCursor.MoveMode arg__2 = QTextCursor.MoveMode.MoveAnchor, int n = 1) {
        return qtd_QTextCursor_movePosition_MoveOperation_MoveMode_int(qtdNativeId, op, arg__2, n);
    }

    private final bool operator_less(const(QTextCursor) rhs) const {
        return qtd_QTextCursor_operator_less_QTextCursor_const(qtdNativeId, rhs is null ? null : (cast(QTextCursor)rhs).qtdNativeId);
    }

    private final bool operator_equal(const(QTextCursor) rhs) const {
        return qtd_QTextCursor_operator_equal_QTextCursor_const(qtdNativeId, rhs is null ? null : (cast(QTextCursor)rhs).qtdNativeId);
    }

    public final int position() const {
        return qtd_QTextCursor_position_const(qtdNativeId);
    }

    public final int positionInBlock() const {
        return qtd_QTextCursor_positionInBlock_const(qtdNativeId);
    }

    public final void removeSelectedText() {
        qtd_QTextCursor_removeSelectedText(qtdNativeId);
    }

    public final void select(QTextCursor.SelectionType selection) {
        qtd_QTextCursor_select_SelectionType(qtdNativeId, selection);
    }

    private final void selectedTableCells(int* firstRow, int* numRows, int* firstColumn, int* numColumns) const {
        qtd_QTextCursor_selectedTableCells_nativepointerint_nativepointerint_nativepointerint_nativepointerint_const(qtdNativeId, firstRow, numRows, firstColumn, numColumns);
    }

    public final string selectedText() const {
        string res;
        qtd_QTextCursor_selectedText_const(qtdNativeId, &res);
        return res;
    }

    public final QTextDocumentFragment selection() const {
        void* ret = qtd_QTextCursor_selection_const(qtdNativeId);
        QTextDocumentFragment __d_return_value = new QTextDocumentFragment(ret);
        return __d_return_value;
    }

    public final int selectionEnd() const {
        return qtd_QTextCursor_selectionEnd_const(qtdNativeId);
    }

    public final int selectionStart() const {
        return qtd_QTextCursor_selectionStart_const(qtdNativeId);
    }

    public final void setBlockCharFormat(const(QTextCharFormat) format) {
        qtd_QTextCursor_setBlockCharFormat_QTextCharFormat(qtdNativeId, format is null ? null : (cast(QTextCharFormat)format).qtdNativeId);
    }

    public final void setBlockFormat(const(QTextBlockFormat) format) {
        qtd_QTextCursor_setBlockFormat_QTextBlockFormat(qtdNativeId, format is null ? null : (cast(QTextBlockFormat)format).qtdNativeId);
    }

    public final void setCharFormat(const(QTextCharFormat) format) {
        qtd_QTextCursor_setCharFormat_QTextCharFormat(qtdNativeId, format is null ? null : (cast(QTextCharFormat)format).qtdNativeId);
    }

    public final void setKeepPositionOnInsert(bool b) {
        qtd_QTextCursor_setKeepPositionOnInsert_bool(qtdNativeId, b);
    }

    public final void setPosition(int pos, QTextCursor.MoveMode mode = QTextCursor.MoveMode.MoveAnchor) {
        qtd_QTextCursor_setPosition_int_MoveMode(qtdNativeId, pos, mode);
    }

    public final void setVerticalMovementX(int x) {
        qtd_QTextCursor_setVerticalMovementX_int(qtdNativeId, x);
    }

    public final void setVisualNavigation(bool b) {
        qtd_QTextCursor_setVisualNavigation_bool(qtdNativeId, b);
    }

    public final int verticalMovementX() const {
        return qtd_QTextCursor_verticalMovementX_const(qtdNativeId);
    }

    public final bool visualNavigation() const {
        return qtd_QTextCursor_visualNavigation_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QTextCursor;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextCursor_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextCursor_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextCursor_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextCursor_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextCursor_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextCursor_QTypeInfo_isComplex();
        isStatic = qtd_QTextCursor_QTypeInfo_isStatic();
        isLarge = qtd_QTextCursor_QTypeInfo_isLarge();
        isPointer = qtd_QTextCursor_QTypeInfo_isPointer();
        isDummy = qtd_QTextCursor_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*    public final QTableArea selectedTableCells() {
    QNativePointer firstRow = new QNativePointer(QNativePointer.Type.Int);
    QNativePointer numRows = new QNativePointer(QNativePointer.Type.Int);
    QNativePointer firstColumn = new QNativePointer(QNativePointer.Type.Int);
    QNativePointer numColumns = new QNativePointer(QNativePointer.Type.Int);

    selectedTableCells(firstRow, numRows, firstColumn, numColumns);

    return new QTableArea(firstRow.intValue(), firstColumn.intValue(), numRows.intValue(), numColumns.intValue());
    }*/

}
private extern(C) void qtd_QTextCursor_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextCursor_native_copy(const void* orig);
extern (C) void qtd_QTextCursor_delete(void *ptr);
extern (C) void qtd_QTextCursor_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextCursor_QTextCursor();
private extern(C) void* qtd_QTextCursor_QTextCursor_QTextDocument(void* document0);
private extern(C) void* qtd_QTextCursor_QTextCursor_QTextFrame(void* frame0);
private extern(C) void* qtd_QTextCursor_QTextCursor_QTextBlock(void* block0);
private extern(C) void* qtd_QTextCursor_QTextCursor_QTextCursor(void* cursor0);
private extern(C) int  qtd_QTextCursor_anchor_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextCursor_atBlockEnd_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextCursor_atBlockStart_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextCursor_atEnd_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextCursor_atStart_const(void* __this_nativeId);
private extern(C) void  qtd_QTextCursor_beginEditBlock(void* __this_nativeId);
private extern(C) void*  qtd_QTextCursor_block_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextCursor_blockCharFormat_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextCursor_blockFormat_const(void* __this_nativeId);
private extern(C) int  qtd_QTextCursor_blockNumber_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextCursor_charFormat_const(void* __this_nativeId);
private extern(C) void  qtd_QTextCursor_clearSelection(void* __this_nativeId);
private extern(C) int  qtd_QTextCursor_columnNumber_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextCursor_createList_Style(void* __this_nativeId,
 int style0);
private extern(C) void*  qtd_QTextCursor_createList_QTextListFormat(void* __this_nativeId,
 void* format0);
private extern(C) void*  qtd_QTextCursor_currentFrame_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextCursor_currentList_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextCursor_currentTable_const(void* __this_nativeId);
private extern(C) void  qtd_QTextCursor_deleteChar(void* __this_nativeId);
private extern(C) void  qtd_QTextCursor_deletePreviousChar(void* __this_nativeId);
private extern(C) void*  qtd_QTextCursor_document_const(void* __this_nativeId);
private extern(C) void  qtd_QTextCursor_endEditBlock(void* __this_nativeId);
private extern(C) bool  qtd_QTextCursor_hasComplexSelection_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextCursor_hasSelection_const(void* __this_nativeId);
private extern(C) void  qtd_QTextCursor_insertBlock(void* __this_nativeId);
private extern(C) void  qtd_QTextCursor_insertBlock_QTextBlockFormat(void* __this_nativeId,
 void* format0);
private extern(C) void  qtd_QTextCursor_insertBlock_QTextBlockFormat_QTextCharFormat(void* __this_nativeId,
 void* format0,
 void* charFormat1);
private extern(C) void  qtd_QTextCursor_insertFragment_QTextDocumentFragment(void* __this_nativeId,
 void* fragment0);
private extern(C) void*  qtd_QTextCursor_insertFrame_QTextFrameFormat(void* __this_nativeId,
 void* format0);
private extern(C) void  qtd_QTextCursor_insertHtml_string(void* __this_nativeId,
 string html0);
private extern(C) void  qtd_QTextCursor_insertImage_QImage_string(void* __this_nativeId,
 void* image0,
 string name1);
private extern(C) void  qtd_QTextCursor_insertImage_string(void* __this_nativeId,
 string name0);
private extern(C) void  qtd_QTextCursor_insertImage_QTextImageFormat(void* __this_nativeId,
 void* format0);
private extern(C) void  qtd_QTextCursor_insertImage_QTextImageFormat_Position(void* __this_nativeId,
 void* format0,
 int alignment1);
private extern(C) void*  qtd_QTextCursor_insertList_Style(void* __this_nativeId,
 int style0);
private extern(C) void*  qtd_QTextCursor_insertList_QTextListFormat(void* __this_nativeId,
 void* format0);
private extern(C) void*  qtd_QTextCursor_insertTable_int_int(void* __this_nativeId,
 int rows0,
 int cols1);
private extern(C) void*  qtd_QTextCursor_insertTable_int_int_QTextTableFormat(void* __this_nativeId,
 int rows0,
 int cols1,
 void* format2);
private extern(C) void  qtd_QTextCursor_insertText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QTextCursor_insertText_string_QTextCharFormat(void* __this_nativeId,
 string text0,
 void* format1);
private extern(C) bool  qtd_QTextCursor_isCopyOf_QTextCursor_const(void* __this_nativeId,
 void* other0);
private extern(C) bool  qtd_QTextCursor_isNull_const(void* __this_nativeId);
private extern(C) void  qtd_QTextCursor_joinPreviousEditBlock(void* __this_nativeId);
private extern(C) bool  qtd_QTextCursor_keepPositionOnInsert_const(void* __this_nativeId);
private extern(C) void  qtd_QTextCursor_mergeBlockCharFormat_QTextCharFormat(void* __this_nativeId,
 void* modifier0);
private extern(C) void  qtd_QTextCursor_mergeBlockFormat_QTextBlockFormat(void* __this_nativeId,
 void* modifier0);
private extern(C) void  qtd_QTextCursor_mergeCharFormat_QTextCharFormat(void* __this_nativeId,
 void* modifier0);
private extern(C) bool  qtd_QTextCursor_movePosition_MoveOperation_MoveMode_int(void* __this_nativeId,
 int op0,
 int arg__2,
 int n2);
private extern(C) bool  qtd_QTextCursor_operator_less_QTextCursor_const(void* __this_nativeId,
 void* rhs0);
private extern(C) bool  qtd_QTextCursor_operator_equal_QTextCursor_const(void* __this_nativeId,
 void* rhs0);
private extern(C) int  qtd_QTextCursor_position_const(void* __this_nativeId);
private extern(C) int  qtd_QTextCursor_positionInBlock_const(void* __this_nativeId);
private extern(C) void  qtd_QTextCursor_removeSelectedText(void* __this_nativeId);
private extern(C) void  qtd_QTextCursor_select_SelectionType(void* __this_nativeId,
 int selection0);
private extern(C) void  qtd_QTextCursor_selectedTableCells_nativepointerint_nativepointerint_nativepointerint_nativepointerint_const(void* __this_nativeId,
 int* firstRow0,
 int* numRows1,
 int* firstColumn2,
 int* numColumns3);
private extern(C) void  qtd_QTextCursor_selectedText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QTextCursor_selection_const(void* __this_nativeId);
private extern(C) int  qtd_QTextCursor_selectionEnd_const(void* __this_nativeId);
private extern(C) int  qtd_QTextCursor_selectionStart_const(void* __this_nativeId);
private extern(C) void  qtd_QTextCursor_setBlockCharFormat_QTextCharFormat(void* __this_nativeId,
 void* format0);
private extern(C) void  qtd_QTextCursor_setBlockFormat_QTextBlockFormat(void* __this_nativeId,
 void* format0);
private extern(C) void  qtd_QTextCursor_setCharFormat_QTextCharFormat(void* __this_nativeId,
 void* format0);
private extern(C) void  qtd_QTextCursor_setKeepPositionOnInsert_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QTextCursor_setPosition_int_MoveMode(void* __this_nativeId,
 int pos0,
 int mode1);
private extern(C) void  qtd_QTextCursor_setVerticalMovementX_int(void* __this_nativeId,
 int x0);
private extern(C) void  qtd_QTextCursor_setVisualNavigation_bool(void* __this_nativeId,
 bool b0);
private extern(C) int  qtd_QTextCursor_verticalMovementX_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextCursor_visualNavigation_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QTextCursor() {
    QTextCursor.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QTextCursor_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextCursor_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextCursor_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextCursor_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextCursor_QTypeInfo_isDummy();
