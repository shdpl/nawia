module qt.gui.QPlainTextEdit;

public import qt.gui.QPlainTextEdit_aux;
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
public import qt.gui.QTextOption;
public import qt.gui.QTextCursor;
public import qt.gui.QPaintDevice;
public import qt.gui.QTextDocument;
public import qt.core.QUrl;
public import qt.gui.QDropEvent;
public import qt.gui.QHideEvent;
public import qt.core.QPoint;
public import qt.core.QTimerEvent;
public import qt.gui.QMenu;
public import qt.core.QChildEvent;
public import qt.gui.QTextCharFormat;
public import qt.core.QRectF;
public import qt.gui.QKeyEvent;
public import qt.core.QObject;
public import qt.core.QPointF;
public import qt.gui.QResizeEvent;
public import qt.core.QList;
public import qt.core.QEvent;
public import qt.gui.QPrinter;
public import qt.gui.QPaintEngine;
public import qt.gui.QActionEvent;
public import qt.core.QMimeData;
public import qt.gui.QWheelEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QTextEdit_ExtraSelection;
public import qt.gui.QCloseEvent;
public import qt.gui.QAbstractTextDocumentLayout_PaintContext;
public import qt.gui.QMouseEvent;
public import qt.gui.QTabletEvent;
public import qt.core.QRect;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QTextBlock;
public import qt.core.QSize;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QAbstractScrollArea;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.gui.QMoveEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QWidget;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QTextCursor;
public import qt.gui.QDragLeaveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QPlainTextEdit : QAbstractScrollArea
{
    public enum LineWrapMode {
        NoWrap = 0,
        WidgetWidth = 1
    }

    alias LineWrapMode.NoWrap NoWrap;
    alias LineWrapMode.WidgetWidth WidgetWidth;


Object __rcDocument = null;

    private static const string[] __signalSignatures = [
            "blockCountChanged(int)", 
            "copyAvailable(bool)", 
            "cursorPositionChanged()", 
            "modificationChanged(bool)", 
            "redoAvailable(bool)", 
            "selectionChanged()", 
            "textChanged()", 
            "undoAvailable(bool)", 
            "updateRequest(QRect,int)"    ];

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

    protected final void blockCountChanged(int newBlockCount) {
        qtd_QPlainTextEdit_blockCountChanged_int(qtdNativeId, newBlockCount);
    }

    protected final void copyAvailable(bool b) {
        qtd_QPlainTextEdit_copyAvailable_bool(qtdNativeId, b);
    }

    protected final void cursorPositionChanged() {
        qtd_QPlainTextEdit_cursorPositionChanged(qtdNativeId);
    }

    protected final void modificationChanged(bool arg__1) {
        qtd_QPlainTextEdit_modificationChanged_bool(qtdNativeId, arg__1);
    }

    protected final void redoAvailable(bool b) {
        qtd_QPlainTextEdit_redoAvailable_bool(qtdNativeId, b);
    }

    protected final void selectionChanged() {
        qtd_QPlainTextEdit_selectionChanged(qtdNativeId);
    }

    protected final void textChanged() {
        qtd_QPlainTextEdit_textChanged(qtdNativeId);
    }

    protected final void undoAvailable(bool b) {
        qtd_QPlainTextEdit_undoAvailable_bool(qtdNativeId, b);
    }

    protected final void updateRequest(const(QRect) rect, int dy) {
        qtd_QPlainTextEdit_updateRequest_QRect_int(qtdNativeId, rect, dy);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QPlainTextEdit_QPlainTextEdit_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string text, QWidget parent_ = null) {
        void* ret = qtd_QPlainTextEdit_QPlainTextEdit_string_QWidget(cast(void*) this, text, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string anchorAt(const(QPoint) pos) const {
        string res;
        qtd_QPlainTextEdit_anchorAt_QPoint_const(qtdNativeId, &res, pos);
        return res;
    }

    public final void appendHtml(string html) {
        qtd_QPlainTextEdit_appendHtml_string(qtdNativeId, html);
    }

    public final void appendPlainText(string text) {
        qtd_QPlainTextEdit_appendPlainText_string(qtdNativeId, text);
    }

    public final bool backgroundVisible() const {
        return qtd_QPlainTextEdit_backgroundVisible_const(qtdNativeId);
    }

    protected final QRectF blockBoundingGeometry(const(QTextBlock) block) const {
        QRectF res;
        qtd_QPlainTextEdit_blockBoundingGeometry_QTextBlock_const(qtdNativeId, &res, block is null ? null : (cast(QTextBlock)block).qtdNativeId);
        return res;
    }

    protected final QRectF blockBoundingRect(const(QTextBlock) block) const {
        QRectF res;
        qtd_QPlainTextEdit_blockBoundingRect_QTextBlock_const(qtdNativeId, &res, block is null ? null : (cast(QTextBlock)block).qtdNativeId);
        return res;
    }

    public final int blockCount() const {
        return qtd_QPlainTextEdit_blockCount_const(qtdNativeId);
    }

    public final bool canPaste() const {
        return qtd_QPlainTextEdit_canPaste_const(qtdNativeId);
    }

    public final void centerCursor() {
        qtd_QPlainTextEdit_centerCursor(qtdNativeId);
    }

    public final bool centerOnScroll() const {
        return qtd_QPlainTextEdit_centerOnScroll_const(qtdNativeId);
    }

    public final void clear() {
        qtd_QPlainTextEdit_clear(qtdNativeId);
    }

    protected final QPointF contentOffset() const {
        QPointF res;
        qtd_QPlainTextEdit_contentOffset_const(qtdNativeId, &res);
        return res;
    }

    public final void copy() {
        qtd_QPlainTextEdit_copy(qtdNativeId);
    }

    public final QMenu createStandardContextMenu() {
        void *ret = qtd_QPlainTextEdit_createStandardContextMenu(qtdNativeId);
        QMenu __d_return_value = QMenu.__getObject(ret);
        return __d_return_value;
    }

    public final QTextCharFormat currentCharFormat() const {
        void* ret = qtd_QPlainTextEdit_currentCharFormat_const(qtdNativeId);
        QTextCharFormat __d_return_value = new QTextCharFormat(ret);
        return __d_return_value;
    }

    public final QTextCursor cursorForPosition(const(QPoint) pos) const {
        void* ret = qtd_QPlainTextEdit_cursorForPosition_QPoint_const(qtdNativeId, pos);
        QTextCursor __d_return_value = new QTextCursor(ret);
        return __d_return_value;
    }

    public final QRect cursorRect() const {
        QRect res;
        qtd_QPlainTextEdit_cursorRect_const(qtdNativeId, &res);
        return res;
    }

    public final QRect cursorRect(const(QTextCursor) cursor) const {
        QRect res;
        qtd_QPlainTextEdit_cursorRect_QTextCursor_const(qtdNativeId, &res, cursor is null ? null : (cast(QTextCursor)cursor).qtdNativeId);
        return res;
    }

    public final int cursorWidth() const {
        return qtd_QPlainTextEdit_cursorWidth_const(qtdNativeId);
    }

    public final void cut() {
        qtd_QPlainTextEdit_cut(qtdNativeId);
    }

    public final QTextDocument document() const {
        void *ret = qtd_QPlainTextEdit_document_const(qtdNativeId);
        QTextDocument __d_return_value = QTextDocument.__getObject(ret);
        return __d_return_value;
    }

    public final string documentTitle() const {
        string res;
        qtd_QPlainTextEdit_documentTitle_const(qtdNativeId, &res);
        return res;
    }

    public final void ensureCursorVisible() {
        qtd_QPlainTextEdit_ensureCursorVisible(qtdNativeId);
    }

    public final QList!(QTextEdit_ExtraSelection) extraSelections() const {
        auto res = QList!(QTextEdit_ExtraSelection).opCall();
        qtd_QPlainTextEdit_extraSelections_const(qtdNativeId, &res);
        return res;
    }

    public final bool find(string exp, int options = 0) {
        return qtd_QPlainTextEdit_find_string_FindFlags(qtdNativeId, exp, options);
    }

    protected final QTextBlock firstVisibleBlock() const {
        void* ret = qtd_QPlainTextEdit_firstVisibleBlock_const(qtdNativeId);
        QTextBlock __d_return_value = new QTextBlock(ret);
        return __d_return_value;
    }

    protected final QAbstractTextDocumentLayout_PaintContext getPaintContext() const {
        void* ret = qtd_QPlainTextEdit_getPaintContext_const(qtdNativeId);
        QAbstractTextDocumentLayout_PaintContext __d_return_value = new QAbstractTextDocumentLayout_PaintContext(ret);
        return __d_return_value;
    }

    public final void insertPlainText(string text) {
        qtd_QPlainTextEdit_insertPlainText_string(qtdNativeId, text);
    }

    public final bool isReadOnly() const {
        return qtd_QPlainTextEdit_isReadOnly_const(qtdNativeId);
    }

    public final bool isUndoRedoEnabled() const {
        return qtd_QPlainTextEdit_isUndoRedoEnabled_const(qtdNativeId);
    }

    public final QPlainTextEdit.LineWrapMode lineWrapMode() const {
        return cast(QPlainTextEdit.LineWrapMode) qtd_QPlainTextEdit_lineWrapMode_const(qtdNativeId);
    }

    public final int maximumBlockCount() const {
        return qtd_QPlainTextEdit_maximumBlockCount_const(qtdNativeId);
    }

    public final void mergeCurrentCharFormat(const(QTextCharFormat) modifier) {
        qtd_QPlainTextEdit_mergeCurrentCharFormat_QTextCharFormat(qtdNativeId, modifier is null ? null : (cast(QTextCharFormat)modifier).qtdNativeId);
    }

    public final void moveCursor(QTextCursor.MoveOperation operation, QTextCursor.MoveMode mode = QTextCursor.MoveMode.MoveAnchor) {
        qtd_QPlainTextEdit_moveCursor_MoveOperation_MoveMode(qtdNativeId, operation, mode);
    }

    public final bool overwriteMode() const {
        return qtd_QPlainTextEdit_overwriteMode_const(qtdNativeId);
    }

    public final void paste() {
        qtd_QPlainTextEdit_paste(qtdNativeId);
    }

    public final void print(QPrinter printer) const {
        qtd_QPlainTextEdit_print_QPrinter_const(qtdNativeId, printer is null ? null : printer.qtdNativeId);
    }

    public final void redo() {
        qtd_QPlainTextEdit_redo(qtdNativeId);
    }

    public final void selectAll() {
        qtd_QPlainTextEdit_selectAll(qtdNativeId);
    }

    public final void setBackgroundVisible(bool visible) {
        qtd_QPlainTextEdit_setBackgroundVisible_bool(qtdNativeId, visible);
    }

    public final void setCenterOnScroll(bool enabled) {
        qtd_QPlainTextEdit_setCenterOnScroll_bool(qtdNativeId, enabled);
    }

    public final void setCurrentCharFormat(const(QTextCharFormat) format) {
        qtd_QPlainTextEdit_setCurrentCharFormat_QTextCharFormat(qtdNativeId, format is null ? null : (cast(QTextCharFormat)format).qtdNativeId);
    }

    public final void setCursorWidth(int width) {
        qtd_QPlainTextEdit_setCursorWidth_int(qtdNativeId, width);
    }

    public final void setDocument(QTextDocument document) {
        {
            __rcDocument = cast(Object) document;
        }
        qtd_QPlainTextEdit_setDocument_QTextDocument(qtdNativeId, document is null ? null : document.qtdNativeId);
    }

    public final void setDocumentTitle(string title) {
        qtd_QPlainTextEdit_setDocumentTitle_string(qtdNativeId, title);
    }

    public final void setExtraSelections(QList!(QTextEdit_ExtraSelection) selections) {
        qtd_QPlainTextEdit_setExtraSelections_QList(qtdNativeId, &selections);
    }

    public final void setLineWrapMode(QPlainTextEdit.LineWrapMode mode) {
        qtd_QPlainTextEdit_setLineWrapMode_LineWrapMode(qtdNativeId, mode);
    }

    public final void setMaximumBlockCount(int maximum) {
        qtd_QPlainTextEdit_setMaximumBlockCount_int(qtdNativeId, maximum);
    }

    public final void setOverwriteMode(bool overwrite) {
        qtd_QPlainTextEdit_setOverwriteMode_bool(qtdNativeId, overwrite);
    }

    public final void setPlainText(string text) {
        qtd_QPlainTextEdit_setPlainText_string(qtdNativeId, text);
    }

    public final void setReadOnly(bool ro) {
        qtd_QPlainTextEdit_setReadOnly_bool(qtdNativeId, ro);
    }

    public final void setTabChangesFocus(bool b) {
        qtd_QPlainTextEdit_setTabChangesFocus_bool(qtdNativeId, b);
    }

    public final void setTabStopWidth(int width) {
        qtd_QPlainTextEdit_setTabStopWidth_int(qtdNativeId, width);
    }

    public final void setTextCursor(const(QTextCursor) cursor) {
        qtd_QPlainTextEdit_setTextCursor_QTextCursor(qtdNativeId, cursor is null ? null : (cast(QTextCursor)cursor).qtdNativeId);
    }

    public final void setTextInteractionFlags(int flags) {
        qtd_QPlainTextEdit_setTextInteractionFlags_TextInteractionFlags(qtdNativeId, flags);
    }

    public final void setUndoRedoEnabled(bool enable) {
        qtd_QPlainTextEdit_setUndoRedoEnabled_bool(qtdNativeId, enable);
    }

    public final void setWordWrapMode(QTextOption.WrapMode policy) {
        qtd_QPlainTextEdit_setWordWrapMode_WrapMode(qtdNativeId, policy);
    }

    public final bool tabChangesFocus() const {
        return qtd_QPlainTextEdit_tabChangesFocus_const(qtdNativeId);
    }

    public final int tabStopWidth() const {
        return qtd_QPlainTextEdit_tabStopWidth_const(qtdNativeId);
    }

    public final QTextCursor textCursor() const {
        void* ret = qtd_QPlainTextEdit_textCursor_const(qtdNativeId);
        QTextCursor __d_return_value = new QTextCursor(ret);
        return __d_return_value;
    }

    public final int textInteractionFlags() const {
        return qtd_QPlainTextEdit_textInteractionFlags_const(qtdNativeId);
    }

    public final string toPlainText() const {
        string res;
        qtd_QPlainTextEdit_toPlainText_const(qtdNativeId, &res);
        return res;
    }

    public final void undo() {
        qtd_QPlainTextEdit_undo(qtdNativeId);
    }

    public final QTextOption.WrapMode wordWrapMode() const {
        return cast(QTextOption.WrapMode) qtd_QPlainTextEdit_wordWrapMode_const(qtdNativeId);
    }

    protected bool canInsertFromMimeData(QMimeData source) const {
        return qtd_QPlainTextEdit_canInsertFromMimeData_QMimeData_const(qtdNativeId, source is null ? null : (cast(QMimeData)source).qtdNativeId);
    }

    protected void changeEvent(QEvent e) {
        qtd_QPlainTextEdit_changeEvent_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void contextMenuEvent(QContextMenuEvent e) {
        qtd_QPlainTextEdit_contextMenuEvent_QContextMenuEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected QMimeData createMimeDataFromSelection() const {
        void *ret = qtd_QPlainTextEdit_createMimeDataFromSelection_const(qtdNativeId);
        QMimeData __d_return_value = QMimeData.__getObject(ret);
        return __d_return_value;
    }

    protected void dragEnterEvent(QDragEnterEvent e) {
        qtd_QPlainTextEdit_dragEnterEvent_QDragEnterEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void dragLeaveEvent(QDragLeaveEvent e) {
        qtd_QPlainTextEdit_dragLeaveEvent_QDragLeaveEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void dragMoveEvent(QDragMoveEvent e) {
        qtd_QPlainTextEdit_dragMoveEvent_QDragMoveEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void dropEvent(QDropEvent e) {
        qtd_QPlainTextEdit_dropEvent_QDropEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QPlainTextEdit_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void focusInEvent(QFocusEvent e) {
        qtd_QPlainTextEdit_focusInEvent_QFocusEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected bool focusNextPrevChild(bool next) {
        return qtd_QPlainTextEdit_focusNextPrevChild_bool(qtdNativeId, next);
    }

    protected void focusOutEvent(QFocusEvent e) {
        qtd_QPlainTextEdit_focusOutEvent_QFocusEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void inputMethodEvent(QInputMethodEvent arg__1) {
        qtd_QPlainTextEdit_inputMethodEvent_QInputMethodEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QVariant inputMethodQuery(Qt.InputMethodQuery property) const {
        void* ret = qtd_QPlainTextEdit_inputMethodQuery_InputMethodQuery_const(qtdNativeId, property);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    protected void insertFromMimeData(QMimeData source) {
        qtd_QPlainTextEdit_insertFromMimeData_QMimeData(qtdNativeId, source is null ? null : (cast(QMimeData)source).qtdNativeId);
    }

    protected void keyPressEvent(QKeyEvent e) {
        qtd_QPlainTextEdit_keyPressEvent_QKeyEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void keyReleaseEvent(QKeyEvent e) {
        qtd_QPlainTextEdit_keyReleaseEvent_QKeyEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public QVariant loadResource(int type, const(QUrl) name) {
        void* ret = qtd_QPlainTextEdit_loadResource_int_QUrl(qtdNativeId, type, name is null ? null : (cast(QUrl)name).qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    protected void mouseDoubleClickEvent(QMouseEvent e) {
        qtd_QPlainTextEdit_mouseDoubleClickEvent_QMouseEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void mouseMoveEvent(QMouseEvent e) {
        qtd_QPlainTextEdit_mouseMoveEvent_QMouseEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent e) {
        qtd_QPlainTextEdit_mousePressEvent_QMouseEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent e) {
        qtd_QPlainTextEdit_mouseReleaseEvent_QMouseEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent e) {
        qtd_QPlainTextEdit_paintEvent_QPaintEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent e) {
        qtd_QPlainTextEdit_resizeEvent_QResizeEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void scrollContentsBy(int dx, int dy) {
        qtd_QPlainTextEdit_scrollContentsBy_int_int(qtdNativeId, dx, dy);
    }

    protected void showEvent(QShowEvent arg__1) {
        qtd_QPlainTextEdit_showEvent_QShowEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void timerEvent(QTimerEvent e) {
        qtd_QPlainTextEdit_timerEvent_QTimerEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void wheelEvent(QWheelEvent e) {
        qtd_QPlainTextEdit_wheelEvent_QWheelEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "appendHtml(QString)", 
            "appendPlainText(QString)", 
            "centerCursor()", 
            "clear()", 
            "copy()", 
            "cut()", 
            "insertPlainText(QString)", 
            "paste()", 
            "redo()", 
            "selectAll()", 
            "setPlainText(QString)", 
            "undo()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QPlainTextEdit_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QPlainTextEdit);
    }

    static QPlainTextEdit __getObject(void* nativeId) {
        return static_cast!(QPlainTextEdit)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QPlainTextEdit_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QPlainTextEdit_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QPlainTextEdit(nativeId, initFlags);
        QPlainTextEdit.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(int)("blockCountChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(bool)("copyAvailable"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!()("cursorPositionChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(bool)("modificationChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(bool)("redoAvailable"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!()("selectionChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[6]);
        mo.addMethod(new QMetaSignal(signature!()("textChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[7]);
        mo.addMethod(new QMetaSignal(signature!(bool)("undoAvailable"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[8]);
        mo.addMethod(new QMetaSignal(signature!(const(QRect),int)("updateRequest"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(string)("appendHtml"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(string)("appendPlainText"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("centerCursor"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!()("clear"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!()("copy"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!()("cut"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[6]);
        mo.addMethod(new QMetaSlot(signature!(string)("insertPlainText"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[7]);
        mo.addMethod(new QMetaSlot(signature!()("paste"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[8]);
        mo.addMethod(new QMetaSlot(signature!()("redo"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[9]);
        mo.addMethod(new QMetaSlot(signature!()("selectAll"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[10]);
        mo.addMethod(new QMetaSlot(signature!(string)("setPlainText"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[11]);
        mo.addMethod(new QMetaSlot(signature!()("undo"), index));

    }

    public alias void __isQtType_QPlainTextEdit;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QPlainTextEdit_blockCountChanged_int(void* __this_nativeId,
 int newBlockCount0);
private extern(C) void  qtd_QPlainTextEdit_copyAvailable_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QPlainTextEdit_cursorPositionChanged(void* __this_nativeId);
private extern(C) void  qtd_QPlainTextEdit_modificationChanged_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QPlainTextEdit_redoAvailable_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QPlainTextEdit_selectionChanged(void* __this_nativeId);
private extern(C) void  qtd_QPlainTextEdit_textChanged(void* __this_nativeId);
private extern(C) void  qtd_QPlainTextEdit_undoAvailable_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QPlainTextEdit_updateRequest_QRect_int(void* __this_nativeId,
 QRect rect0,
 int dy1);

// C wrappers
private extern(C) void* qtd_QPlainTextEdit_QPlainTextEdit_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QPlainTextEdit_QPlainTextEdit_string_QWidget(void *d_ptr,
 string text0,
 void* parent1);
private extern(C) void  qtd_QPlainTextEdit_anchorAt_QPoint_const(void* __this_nativeId,
 void* __d_return_value,
 QPoint pos0);
private extern(C) void  qtd_QPlainTextEdit_appendHtml_string(void* __this_nativeId,
 string html0);
private extern(C) void  qtd_QPlainTextEdit_appendPlainText_string(void* __this_nativeId,
 string text0);
private extern(C) bool  qtd_QPlainTextEdit_backgroundVisible_const(void* __this_nativeId);
private extern(C) void  qtd_QPlainTextEdit_blockBoundingGeometry_QTextBlock_const(void* __this_nativeId,
 QRectF * __d_return_value,
 void* block0);
private extern(C) void  qtd_QPlainTextEdit_blockBoundingRect_QTextBlock_const(void* __this_nativeId,
 QRectF * __d_return_value,
 void* block0);
private extern(C) int  qtd_QPlainTextEdit_blockCount_const(void* __this_nativeId);
private extern(C) bool  qtd_QPlainTextEdit_canPaste_const(void* __this_nativeId);
private extern(C) void  qtd_QPlainTextEdit_centerCursor(void* __this_nativeId);
private extern(C) bool  qtd_QPlainTextEdit_centerOnScroll_const(void* __this_nativeId);
private extern(C) void  qtd_QPlainTextEdit_clear(void* __this_nativeId);
private extern(C) void  qtd_QPlainTextEdit_contentOffset_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QPlainTextEdit_copy(void* __this_nativeId);
private extern(C) void*  qtd_QPlainTextEdit_createStandardContextMenu(void* __this_nativeId);
private extern(C) void*  qtd_QPlainTextEdit_currentCharFormat_const(void* __this_nativeId);
private extern(C) void*  qtd_QPlainTextEdit_cursorForPosition_QPoint_const(void* __this_nativeId,
 QPoint pos0);
private extern(C) void  qtd_QPlainTextEdit_cursorRect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void  qtd_QPlainTextEdit_cursorRect_QTextCursor_const(void* __this_nativeId,
 QRect * __d_return_value,
 void* cursor0);
private extern(C) int  qtd_QPlainTextEdit_cursorWidth_const(void* __this_nativeId);
private extern(C) void  qtd_QPlainTextEdit_cut(void* __this_nativeId);
private extern(C) void*  qtd_QPlainTextEdit_document_const(void* __this_nativeId);
private extern(C) void  qtd_QPlainTextEdit_documentTitle_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QPlainTextEdit_ensureCursorVisible(void* __this_nativeId);
private extern(C) void  qtd_QPlainTextEdit_extraSelections_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QPlainTextEdit_find_string_FindFlags(void* __this_nativeId,
 string exp0,
 int options1);
private extern(C) void*  qtd_QPlainTextEdit_firstVisibleBlock_const(void* __this_nativeId);
private extern(C) void*  qtd_QPlainTextEdit_getPaintContext_const(void* __this_nativeId);
private extern(C) void  qtd_QPlainTextEdit_insertPlainText_string(void* __this_nativeId,
 string text0);
private extern(C) bool  qtd_QPlainTextEdit_isReadOnly_const(void* __this_nativeId);
private extern(C) bool  qtd_QPlainTextEdit_isUndoRedoEnabled_const(void* __this_nativeId);
private extern(C) int  qtd_QPlainTextEdit_lineWrapMode_const(void* __this_nativeId);
private extern(C) int  qtd_QPlainTextEdit_maximumBlockCount_const(void* __this_nativeId);
private extern(C) void  qtd_QPlainTextEdit_mergeCurrentCharFormat_QTextCharFormat(void* __this_nativeId,
 void* modifier0);
private extern(C) void  qtd_QPlainTextEdit_moveCursor_MoveOperation_MoveMode(void* __this_nativeId,
 int operation0,
 int mode1);
private extern(C) bool  qtd_QPlainTextEdit_overwriteMode_const(void* __this_nativeId);
private extern(C) void  qtd_QPlainTextEdit_paste(void* __this_nativeId);
private extern(C) void  qtd_QPlainTextEdit_print_QPrinter_const(void* __this_nativeId,
 void* printer0);
private extern(C) void  qtd_QPlainTextEdit_redo(void* __this_nativeId);
private extern(C) void  qtd_QPlainTextEdit_selectAll(void* __this_nativeId);
private extern(C) void  qtd_QPlainTextEdit_setBackgroundVisible_bool(void* __this_nativeId,
 bool visible0);
private extern(C) void  qtd_QPlainTextEdit_setCenterOnScroll_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QPlainTextEdit_setCurrentCharFormat_QTextCharFormat(void* __this_nativeId,
 void* format0);
private extern(C) void  qtd_QPlainTextEdit_setCursorWidth_int(void* __this_nativeId,
 int width0);
private extern(C) void  qtd_QPlainTextEdit_setDocument_QTextDocument(void* __this_nativeId,
 void* document0);
private extern(C) void  qtd_QPlainTextEdit_setDocumentTitle_string(void* __this_nativeId,
 string title0);
private extern(C) void  qtd_QPlainTextEdit_setExtraSelections_QList(void* __this_nativeId,
 void* selections0);
private extern(C) void  qtd_QPlainTextEdit_setLineWrapMode_LineWrapMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QPlainTextEdit_setMaximumBlockCount_int(void* __this_nativeId,
 int maximum0);
private extern(C) void  qtd_QPlainTextEdit_setOverwriteMode_bool(void* __this_nativeId,
 bool overwrite0);
private extern(C) void  qtd_QPlainTextEdit_setPlainText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QPlainTextEdit_setReadOnly_bool(void* __this_nativeId,
 bool ro0);
private extern(C) void  qtd_QPlainTextEdit_setTabChangesFocus_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QPlainTextEdit_setTabStopWidth_int(void* __this_nativeId,
 int width0);
private extern(C) void  qtd_QPlainTextEdit_setTextCursor_QTextCursor(void* __this_nativeId,
 void* cursor0);
private extern(C) void  qtd_QPlainTextEdit_setTextInteractionFlags_TextInteractionFlags(void* __this_nativeId,
 int flags0);
private extern(C) void  qtd_QPlainTextEdit_setUndoRedoEnabled_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QPlainTextEdit_setWordWrapMode_WrapMode(void* __this_nativeId,
 int policy0);
private extern(C) bool  qtd_QPlainTextEdit_tabChangesFocus_const(void* __this_nativeId);
private extern(C) int  qtd_QPlainTextEdit_tabStopWidth_const(void* __this_nativeId);
private extern(C) void*  qtd_QPlainTextEdit_textCursor_const(void* __this_nativeId);
private extern(C) int  qtd_QPlainTextEdit_textInteractionFlags_const(void* __this_nativeId);
private extern(C) void  qtd_QPlainTextEdit_toPlainText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QPlainTextEdit_undo(void* __this_nativeId);
private extern(C) int  qtd_QPlainTextEdit_wordWrapMode_const(void* __this_nativeId);
private extern(C) bool  qtd_QPlainTextEdit_canInsertFromMimeData_QMimeData_const(void* __this_nativeId,
 void* source0);
private extern(C) void  qtd_QPlainTextEdit_changeEvent_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QPlainTextEdit_contextMenuEvent_QContextMenuEvent(void* __this_nativeId,
 void* e0);
private extern(C) void*  qtd_QPlainTextEdit_createMimeDataFromSelection_const(void* __this_nativeId);
private extern(C) void  qtd_QPlainTextEdit_dragEnterEvent_QDragEnterEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QPlainTextEdit_dragLeaveEvent_QDragLeaveEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QPlainTextEdit_dragMoveEvent_QDragMoveEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QPlainTextEdit_dropEvent_QDropEvent(void* __this_nativeId,
 void* e0);
private extern(C) bool  qtd_QPlainTextEdit_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QPlainTextEdit_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* e0);
private extern(C) bool  qtd_QPlainTextEdit_focusNextPrevChild_bool(void* __this_nativeId,
 bool next0);
private extern(C) void  qtd_QPlainTextEdit_focusOutEvent_QFocusEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QPlainTextEdit_inputMethodEvent_QInputMethodEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QPlainTextEdit_inputMethodQuery_InputMethodQuery_const(void* __this_nativeId,
 int property0);
private extern(C) void  qtd_QPlainTextEdit_insertFromMimeData_QMimeData(void* __this_nativeId,
 void* source0);
private extern(C) void  qtd_QPlainTextEdit_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QPlainTextEdit_keyReleaseEvent_QKeyEvent(void* __this_nativeId,
 void* e0);
private extern(C) void*  qtd_QPlainTextEdit_loadResource_int_QUrl(void* __this_nativeId,
 int type0,
 void* name1);
private extern(C) void  qtd_QPlainTextEdit_mouseDoubleClickEvent_QMouseEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QPlainTextEdit_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QPlainTextEdit_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QPlainTextEdit_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QPlainTextEdit_paintEvent_QPaintEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QPlainTextEdit_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QPlainTextEdit_scrollContentsBy_int_int(void* __this_nativeId,
 int dx0,
 int dy1);
private extern(C) void  qtd_QPlainTextEdit_showEvent_QShowEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QPlainTextEdit_timerEvent_QTimerEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QPlainTextEdit_wheelEvent_QWheelEvent(void* __this_nativeId,
 void* e0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId, void* source0) qtd_QPlainTextEdit_canInsertFromMimeData_QMimeData_const_dispatch; }
extern(C) bool qtd_export_QPlainTextEdit_canInsertFromMimeData_QMimeData_const_dispatch(void *dId, void* source0){
    auto d_object = cast(QPlainTextEdit) dId;
    scope source0_d_ref = new QMimeData(source0, QtdObjectInitFlags.onStack);

    auto return_value = d_object.canInsertFromMimeData(source0_d_ref);
    return return_value;
}

extern(C){ extern void* function(void *dId) qtd_QPlainTextEdit_createMimeDataFromSelection_const_dispatch; }
extern(C) void* qtd_export_QPlainTextEdit_createMimeDataFromSelection_const_dispatch(void *dId){
    auto d_object = cast(QPlainTextEdit) dId;
    QMimeData ret_value = d_object.createMimeDataFromSelection();
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, void* source0) qtd_QPlainTextEdit_insertFromMimeData_QMimeData_dispatch; }
extern(C) void qtd_export_QPlainTextEdit_insertFromMimeData_QMimeData_dispatch(void *dId, void* source0){
    auto d_object = cast(QPlainTextEdit) dId;
    scope source0_d_ref = new QMimeData(source0, QtdObjectInitFlags.onStack);

    d_object.insertFromMimeData(source0_d_ref);
}

extern(C){ extern void* function(void *dId, int type0, void* name1) qtd_QPlainTextEdit_loadResource_int_QUrl_dispatch; }
extern(C) void* qtd_export_QPlainTextEdit_loadResource_int_QUrl_dispatch(void *dId, int type0, void* name1){
    auto d_object = cast(QPlainTextEdit) dId;
    scope name1_d_ref = new QUrl(name1, QtdObjectInitFlags.onStack);
    QVariant ret_value = d_object.loadResource(type0, name1_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QPlainTextEdit_initCallBacks(void* virtuals);

extern(C) void static_init_QPlainTextEdit() {
    void*[4] virt_arr;
    virt_arr[0] = &qtd_export_QPlainTextEdit_canInsertFromMimeData_QMimeData_const_dispatch;
    virt_arr[1] = &qtd_export_QPlainTextEdit_createMimeDataFromSelection_const_dispatch;
    virt_arr[2] = &qtd_export_QPlainTextEdit_insertFromMimeData_QMimeData_dispatch;
    virt_arr[3] = &qtd_export_QPlainTextEdit_loadResource_int_QUrl_dispatch;
    qtd_QPlainTextEdit_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QPlainTextEdit_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QPlainTextEdit) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QPlainTextEdit_blockCountChanged_handle(void* dId, void** args) {
        auto d_object = cast(QPlainTextEdit) dId;
        auto newBlockCount0 = *(cast(int*)args[1]);
        //d_object.blockCountChanged_emit(newBlockCount0);
}*/
/*private extern(C) void qtd_QPlainTextEdit_copyAvailable_handle(void* dId, void** args) {
        auto d_object = cast(QPlainTextEdit) dId;
        auto b0 = *(cast(bool*)args[1]);
        //d_object.copyAvailable_emit(b0);
}*/
/*private extern(C) void qtd_QPlainTextEdit_cursorPositionChanged_handle(void* dId, void** args) {
        auto d_object = cast(QPlainTextEdit) dId;
        //d_object.cursorPositionChanged_emit();
}*/
/*private extern(C) void qtd_QPlainTextEdit_modificationChanged_handle(void* dId, void** args) {
        auto d_object = cast(QPlainTextEdit) dId;
        auto arg__1 = *(cast(bool*)args[1]);
        //d_object.modificationChanged_emit(arg__1);
}*/
/*private extern(C) void qtd_QPlainTextEdit_redoAvailable_handle(void* dId, void** args) {
        auto d_object = cast(QPlainTextEdit) dId;
        auto b0 = *(cast(bool*)args[1]);
        //d_object.redoAvailable_emit(b0);
}*/
/*private extern(C) void qtd_QPlainTextEdit_selectionChanged_handle(void* dId, void** args) {
        auto d_object = cast(QPlainTextEdit) dId;
        //d_object.selectionChanged_emit();
}*/
/*private extern(C) void qtd_QPlainTextEdit_textChanged_handle(void* dId, void** args) {
        auto d_object = cast(QPlainTextEdit) dId;
        //d_object.textChanged_emit();
}*/
/*private extern(C) void qtd_QPlainTextEdit_undoAvailable_handle(void* dId, void** args) {
        auto d_object = cast(QPlainTextEdit) dId;
        auto b0 = *(cast(bool*)args[1]);
        //d_object.undoAvailable_emit(b0);
}*/
/*private extern(C) void qtd_QPlainTextEdit_updateRequest_handle(void* dId, void** args) {
        auto d_object = cast(QPlainTextEdit) dId;
        auto rect0 = *(cast(QRect*)args[1]);
        auto dy1 = *(cast(int*)args[2]);
        //d_object.updateRequest_emit(rect0, dy1);
}*/

extern(C) QMetaObjectNative* qtd_QPlainTextEdit_staticMetaObject();

extern(C) void qtd_QPlainTextEdit_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QPlainTextEdit_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
