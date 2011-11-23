module qt.gui.QTextEdit;

public import qt.gui.QTextEdit_aux;
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
public import qt.gui.QColor;
public import qt.gui.QKeyEvent;
public import qt.core.QObject;
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
public import qt.gui.QMouseEvent;
public import qt.gui.QTabletEvent;
public import qt.core.QRect;
public import qt.gui.QFont;
public import qt.gui.QInputMethodEvent;
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


public class QTextEdit : QAbstractScrollArea
{
    public enum AutoFormattingFlag {
        AutoNone = 0,
        AutoBulletList = 1,
        AutoAll = -1
    }

    alias AutoFormattingFlag.AutoNone AutoNone;
    alias AutoFormattingFlag.AutoBulletList AutoBulletList;
    alias AutoFormattingFlag.AutoAll AutoAll;

    public enum LineWrapMode {
        NoWrap = 0,
        WidgetWidth = 1,
        FixedPixelWidth = 2,
        FixedColumnWidth = 3
    }

    alias LineWrapMode.NoWrap NoWrap;
    alias LineWrapMode.WidgetWidth WidgetWidth;
    alias LineWrapMode.FixedPixelWidth FixedPixelWidth;
    alias LineWrapMode.FixedColumnWidth FixedColumnWidth;


Object __rcDocument = null;

    private static const string[] __signalSignatures = [
            "copyAvailable(bool)", 
            "currentCharFormatChanged(QTextCharFormat)", 
            "cursorPositionChanged()", 
            "redoAvailable(bool)", 
            "selectionChanged()", 
            "textChanged()", 
            "undoAvailable(bool)"    ];

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

    protected final void copyAvailable(bool b) {
        qtd_QTextEdit_copyAvailable_bool(qtdNativeId, b);
    }

    protected final void currentCharFormatChanged(const(QTextCharFormat) format) {
        qtd_QTextEdit_currentCharFormatChanged_QTextCharFormat(qtdNativeId, format is null ? null : (cast(QTextCharFormat)format).qtdNativeId);
    }

    protected final void cursorPositionChanged() {
        qtd_QTextEdit_cursorPositionChanged(qtdNativeId);
    }

    protected final void redoAvailable(bool b) {
        qtd_QTextEdit_redoAvailable_bool(qtdNativeId, b);
    }

    protected final void selectionChanged() {
        qtd_QTextEdit_selectionChanged(qtdNativeId);
    }

    protected final void textChanged() {
        qtd_QTextEdit_textChanged(qtdNativeId);
    }

    protected final void undoAvailable(bool b) {
        qtd_QTextEdit_undoAvailable_bool(qtdNativeId, b);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QTextEdit_QTextEdit_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string text, QWidget parent_ = null) {
        void* ret = qtd_QTextEdit_QTextEdit_string_QWidget(cast(void*) this, text, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool acceptRichText() const {
        return qtd_QTextEdit_acceptRichText_const(qtdNativeId);
    }

    public final int alignment() const {
        return qtd_QTextEdit_alignment_const(qtdNativeId);
    }

    public final string anchorAt(const(QPoint) pos) const {
        string res;
        qtd_QTextEdit_anchorAt_QPoint_const(qtdNativeId, &res, pos);
        return res;
    }

    public final void append(string text) {
        qtd_QTextEdit_append_string(qtdNativeId, text);
    }

    public final int autoFormatting() const {
        return qtd_QTextEdit_autoFormatting_const(qtdNativeId);
    }

    public final bool canPaste() const {
        return qtd_QTextEdit_canPaste_const(qtdNativeId);
    }

    public final void clear() {
        qtd_QTextEdit_clear(qtdNativeId);
    }

    public final void copy() {
        qtd_QTextEdit_copy(qtdNativeId);
    }

    public final QMenu createStandardContextMenu() {
        void *ret = qtd_QTextEdit_createStandardContextMenu(qtdNativeId);
        QMenu __d_return_value = QMenu.__getObject(ret);
        return __d_return_value;
    }

    public final QMenu createStandardContextMenu(const(QPoint) position) {
        void *ret = qtd_QTextEdit_createStandardContextMenu_QPoint(qtdNativeId, position);
        QMenu __d_return_value = QMenu.__getObject(ret);
        return __d_return_value;
    }

    public final QTextCharFormat currentCharFormat() const {
        void* ret = qtd_QTextEdit_currentCharFormat_const(qtdNativeId);
        QTextCharFormat __d_return_value = new QTextCharFormat(ret);
        return __d_return_value;
    }

    public final QFont currentFont() const {
        void* ret = qtd_QTextEdit_currentFont_const(qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public final QTextCursor cursorForPosition(const(QPoint) pos) const {
        void* ret = qtd_QTextEdit_cursorForPosition_QPoint_const(qtdNativeId, pos);
        QTextCursor __d_return_value = new QTextCursor(ret);
        return __d_return_value;
    }

    public final QRect cursorRect() const {
        QRect res;
        qtd_QTextEdit_cursorRect_const(qtdNativeId, &res);
        return res;
    }

    public final QRect cursorRect(const(QTextCursor) cursor) const {
        QRect res;
        qtd_QTextEdit_cursorRect_QTextCursor_const(qtdNativeId, &res, cursor is null ? null : (cast(QTextCursor)cursor).qtdNativeId);
        return res;
    }

    public final int cursorWidth() const {
        return qtd_QTextEdit_cursorWidth_const(qtdNativeId);
    }

    public final void cut() {
        qtd_QTextEdit_cut(qtdNativeId);
    }

    public final QTextDocument document() const {
        void *ret = qtd_QTextEdit_document_const(qtdNativeId);
        QTextDocument __d_return_value = QTextDocument.__getObject(ret);
        return __d_return_value;
    }

    public final string documentTitle() const {
        string res;
        qtd_QTextEdit_documentTitle_const(qtdNativeId, &res);
        return res;
    }

    public final void ensureCursorVisible() {
        qtd_QTextEdit_ensureCursorVisible(qtdNativeId);
    }

    public final QList!(QTextEdit_ExtraSelection) extraSelections() const {
        auto res = QList!(QTextEdit_ExtraSelection).opCall();
        qtd_QTextEdit_extraSelections_const(qtdNativeId, &res);
        return res;
    }

    public final bool find(string exp, int options = 0) {
        return qtd_QTextEdit_find_string_FindFlags(qtdNativeId, exp, options);
    }

    public final string fontFamily() const {
        string res;
        qtd_QTextEdit_fontFamily_const(qtdNativeId, &res);
        return res;
    }

    public final bool fontItalic() const {
        return qtd_QTextEdit_fontItalic_const(qtdNativeId);
    }

    public final double fontPointSize() const {
        return qtd_QTextEdit_fontPointSize_const(qtdNativeId);
    }

    public final bool fontUnderline() const {
        return qtd_QTextEdit_fontUnderline_const(qtdNativeId);
    }

    public final int fontWeight() const {
        return qtd_QTextEdit_fontWeight_const(qtdNativeId);
    }

    public final void insertHtml(string text) {
        qtd_QTextEdit_insertHtml_string(qtdNativeId, text);
    }

    public final void insertPlainText(string text) {
        qtd_QTextEdit_insertPlainText_string(qtdNativeId, text);
    }

    public final bool isReadOnly() const {
        return qtd_QTextEdit_isReadOnly_const(qtdNativeId);
    }

    public final bool isUndoRedoEnabled() const {
        return qtd_QTextEdit_isUndoRedoEnabled_const(qtdNativeId);
    }

    public final int lineWrapColumnOrWidth() const {
        return qtd_QTextEdit_lineWrapColumnOrWidth_const(qtdNativeId);
    }

    public final QTextEdit.LineWrapMode lineWrapMode() const {
        return cast(QTextEdit.LineWrapMode) qtd_QTextEdit_lineWrapMode_const(qtdNativeId);
    }

    public final void mergeCurrentCharFormat(const(QTextCharFormat) modifier) {
        qtd_QTextEdit_mergeCurrentCharFormat_QTextCharFormat(qtdNativeId, modifier is null ? null : (cast(QTextCharFormat)modifier).qtdNativeId);
    }

    public final void moveCursor(QTextCursor.MoveOperation operation, QTextCursor.MoveMode mode = QTextCursor.MoveMode.MoveAnchor) {
        qtd_QTextEdit_moveCursor_MoveOperation_MoveMode(qtdNativeId, operation, mode);
    }

    public final bool overwriteMode() const {
        return qtd_QTextEdit_overwriteMode_const(qtdNativeId);
    }

    public final void paste() {
        qtd_QTextEdit_paste(qtdNativeId);
    }

    public final void print(QPrinter printer) const {
        qtd_QTextEdit_print_QPrinter_const(qtdNativeId, printer is null ? null : printer.qtdNativeId);
    }

    public final void redo() {
        qtd_QTextEdit_redo(qtdNativeId);
    }

    public final void scrollToAnchor(string name) {
        qtd_QTextEdit_scrollToAnchor_string(qtdNativeId, name);
    }

    public final void selectAll() {
        qtd_QTextEdit_selectAll(qtdNativeId);
    }

    public final void setAcceptRichText(bool accept) {
        qtd_QTextEdit_setAcceptRichText_bool(qtdNativeId, accept);
    }

    public final void setAlignment(int a) {
        qtd_QTextEdit_setAlignment_Alignment(qtdNativeId, a);
    }

    public final void setAutoFormatting(int features) {
        qtd_QTextEdit_setAutoFormatting_AutoFormatting(qtdNativeId, features);
    }

    public final void setCurrentCharFormat(const(QTextCharFormat) format) {
        qtd_QTextEdit_setCurrentCharFormat_QTextCharFormat(qtdNativeId, format is null ? null : (cast(QTextCharFormat)format).qtdNativeId);
    }

    public final void setCurrentFont(const(QFont) f) {
        qtd_QTextEdit_setCurrentFont_QFont(qtdNativeId, f is null ? null : (cast(QFont)f).qtdNativeId);
    }

    public final void setCursorWidth(int width) {
        qtd_QTextEdit_setCursorWidth_int(qtdNativeId, width);
    }

    public final void setDocument(QTextDocument document) {
        {
            __rcDocument = cast(Object) document;
        }
        qtd_QTextEdit_setDocument_QTextDocument(qtdNativeId, document is null ? null : document.qtdNativeId);
    }

    public final void setDocumentTitle(string title) {
        qtd_QTextEdit_setDocumentTitle_string(qtdNativeId, title);
    }

    public final void setExtraSelections(QList!(QTextEdit_ExtraSelection) selections) {
        qtd_QTextEdit_setExtraSelections_QList(qtdNativeId, &selections);
    }

    public final void setFontFamily(string fontFamily) {
        qtd_QTextEdit_setFontFamily_string(qtdNativeId, fontFamily);
    }

    public final void setFontItalic(bool b) {
        qtd_QTextEdit_setFontItalic_bool(qtdNativeId, b);
    }

    public final void setFontPointSize(double s) {
        qtd_QTextEdit_setFontPointSize_double(qtdNativeId, s);
    }

    public final void setFontUnderline(bool b) {
        qtd_QTextEdit_setFontUnderline_bool(qtdNativeId, b);
    }

    public final void setFontWeight(int w) {
        qtd_QTextEdit_setFontWeight_int(qtdNativeId, w);
    }

    public final void setHtml(string text) {
        qtd_QTextEdit_setHtml_string(qtdNativeId, text);
    }

    public final void setLineWrapColumnOrWidth(int w) {
        qtd_QTextEdit_setLineWrapColumnOrWidth_int(qtdNativeId, w);
    }

    public final void setLineWrapMode(QTextEdit.LineWrapMode mode) {
        qtd_QTextEdit_setLineWrapMode_LineWrapMode(qtdNativeId, mode);
    }

    public final void setOverwriteMode(bool overwrite) {
        qtd_QTextEdit_setOverwriteMode_bool(qtdNativeId, overwrite);
    }

    public final void setPlainText(string text) {
        qtd_QTextEdit_setPlainText_string(qtdNativeId, text);
    }

    public final void setReadOnly(bool ro) {
        qtd_QTextEdit_setReadOnly_bool(qtdNativeId, ro);
    }

    public final void setTabChangesFocus(bool b) {
        qtd_QTextEdit_setTabChangesFocus_bool(qtdNativeId, b);
    }

    public final void setTabStopWidth(int width) {
        qtd_QTextEdit_setTabStopWidth_int(qtdNativeId, width);
    }

    public final void setText(string text) {
        qtd_QTextEdit_setText_string(qtdNativeId, text);
    }

    public final void setTextBackgroundColor(const(QColor) c) {
        qtd_QTextEdit_setTextBackgroundColor_QColor(qtdNativeId, c is null ? null : (cast(QColor)c).qtdNativeId);
    }

    public final void setTextColor(const(QColor) c) {
        qtd_QTextEdit_setTextColor_QColor(qtdNativeId, c is null ? null : (cast(QColor)c).qtdNativeId);
    }

    public final void setTextCursor(const(QTextCursor) cursor) {
        qtd_QTextEdit_setTextCursor_QTextCursor(qtdNativeId, cursor is null ? null : (cast(QTextCursor)cursor).qtdNativeId);
    }

    public final void setTextInteractionFlags(int flags) {
        qtd_QTextEdit_setTextInteractionFlags_TextInteractionFlags(qtdNativeId, flags);
    }

    public final void setUndoRedoEnabled(bool enable) {
        qtd_QTextEdit_setUndoRedoEnabled_bool(qtdNativeId, enable);
    }

    public final void setWordWrapMode(QTextOption.WrapMode policy) {
        qtd_QTextEdit_setWordWrapMode_WrapMode(qtdNativeId, policy);
    }

    public final bool tabChangesFocus() const {
        return qtd_QTextEdit_tabChangesFocus_const(qtdNativeId);
    }

    public final int tabStopWidth() const {
        return qtd_QTextEdit_tabStopWidth_const(qtdNativeId);
    }

    public final QColor textBackgroundColor() const {
        void* ret = qtd_QTextEdit_textBackgroundColor_const(qtdNativeId);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final QColor textColor() const {
        void* ret = qtd_QTextEdit_textColor_const(qtdNativeId);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final QTextCursor textCursor() const {
        void* ret = qtd_QTextEdit_textCursor_const(qtdNativeId);
        QTextCursor __d_return_value = new QTextCursor(ret);
        return __d_return_value;
    }

    public final int textInteractionFlags() const {
        return qtd_QTextEdit_textInteractionFlags_const(qtdNativeId);
    }

    public final string toHtml() const {
        string res;
        qtd_QTextEdit_toHtml_const(qtdNativeId, &res);
        return res;
    }

    public final string toPlainText() const {
        string res;
        qtd_QTextEdit_toPlainText_const(qtdNativeId, &res);
        return res;
    }

    public final void undo() {
        qtd_QTextEdit_undo(qtdNativeId);
    }

    public final QTextOption.WrapMode wordWrapMode() const {
        return cast(QTextOption.WrapMode) qtd_QTextEdit_wordWrapMode_const(qtdNativeId);
    }

    public final void zoomIn(int range = 1) {
        qtd_QTextEdit_zoomIn_int(qtdNativeId, range);
    }

    public final void zoomOut(int range = 1) {
        qtd_QTextEdit_zoomOut_int(qtdNativeId, range);
    }

    protected bool canInsertFromMimeData(QMimeData source) const {
        return qtd_QTextEdit_canInsertFromMimeData_QMimeData_const(qtdNativeId, source is null ? null : (cast(QMimeData)source).qtdNativeId);
    }

    protected void changeEvent(QEvent e) {
        qtd_QTextEdit_changeEvent_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void contextMenuEvent(QContextMenuEvent e) {
        qtd_QTextEdit_contextMenuEvent_QContextMenuEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected QMimeData createMimeDataFromSelection() const {
        void *ret = qtd_QTextEdit_createMimeDataFromSelection_const(qtdNativeId);
        QMimeData __d_return_value = QMimeData.__getObject(ret);
        return __d_return_value;
    }

    protected void dragEnterEvent(QDragEnterEvent e) {
        qtd_QTextEdit_dragEnterEvent_QDragEnterEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void dragLeaveEvent(QDragLeaveEvent e) {
        qtd_QTextEdit_dragLeaveEvent_QDragLeaveEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void dragMoveEvent(QDragMoveEvent e) {
        qtd_QTextEdit_dragMoveEvent_QDragMoveEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void dropEvent(QDropEvent e) {
        qtd_QTextEdit_dropEvent_QDropEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QTextEdit_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void focusInEvent(QFocusEvent e) {
        qtd_QTextEdit_focusInEvent_QFocusEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected bool focusNextPrevChild(bool next) {
        return qtd_QTextEdit_focusNextPrevChild_bool(qtdNativeId, next);
    }

    protected void focusOutEvent(QFocusEvent e) {
        qtd_QTextEdit_focusOutEvent_QFocusEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void inputMethodEvent(QInputMethodEvent arg__1) {
        qtd_QTextEdit_inputMethodEvent_QInputMethodEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QVariant inputMethodQuery(Qt.InputMethodQuery property) const {
        void* ret = qtd_QTextEdit_inputMethodQuery_InputMethodQuery_const(qtdNativeId, property);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    protected void insertFromMimeData(QMimeData source) {
        qtd_QTextEdit_insertFromMimeData_QMimeData(qtdNativeId, source is null ? null : (cast(QMimeData)source).qtdNativeId);
    }

    protected void keyPressEvent(QKeyEvent e) {
        qtd_QTextEdit_keyPressEvent_QKeyEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void keyReleaseEvent(QKeyEvent e) {
        qtd_QTextEdit_keyReleaseEvent_QKeyEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public QVariant loadResource(int type, const(QUrl) name) {
        void* ret = qtd_QTextEdit_loadResource_int_QUrl(qtdNativeId, type, name is null ? null : (cast(QUrl)name).qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    protected void mouseDoubleClickEvent(QMouseEvent e) {
        qtd_QTextEdit_mouseDoubleClickEvent_QMouseEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void mouseMoveEvent(QMouseEvent e) {
        qtd_QTextEdit_mouseMoveEvent_QMouseEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent e) {
        qtd_QTextEdit_mousePressEvent_QMouseEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent e) {
        qtd_QTextEdit_mouseReleaseEvent_QMouseEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent e) {
        qtd_QTextEdit_paintEvent_QPaintEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent e) {
        qtd_QTextEdit_resizeEvent_QResizeEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void scrollContentsBy(int dx, int dy) {
        qtd_QTextEdit_scrollContentsBy_int_int(qtdNativeId, dx, dy);
    }

    protected void showEvent(QShowEvent arg__1) {
        qtd_QTextEdit_showEvent_QShowEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void timerEvent(QTimerEvent e) {
        qtd_QTextEdit_timerEvent_QTimerEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void wheelEvent(QWheelEvent e) {
        qtd_QTextEdit_wheelEvent_QWheelEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "append(QString)", 
            "clear()", 
            "copy()", 
            "cut()", 
            "insertHtml(QString)", 
            "insertPlainText(QString)", 
            "paste()", 
            "redo()", 
            "scrollToAnchor(QString)", 
            "selectAll()", 
            "setAlignment(QFlags<Qt::AlignmentFlag>)", 
            "setCurrentFont(QFont)", 
            "setFontFamily(QString)", 
            "setFontItalic(bool)", 
            "setFontPointSize(double)", 
            "setFontUnderline(bool)", 
            "setFontWeight(int)", 
            "setHtml(QString)", 
            "setPlainText(QString)", 
            "setText(QString)", 
            "setTextBackgroundColor(QColor)", 
            "setTextColor(QColor)", 
            "undo()", 
            "zoomIn(int)", 
            "zoomIn()", 
            "zoomOut(int)", 
            "zoomOut()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTextEdit_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTextEdit);
    }

    static QTextEdit __getObject(void* nativeId) {
        return static_cast!(QTextEdit)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTextEdit_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTextEdit_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTextEdit(nativeId, initFlags);
        QTextEdit.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(bool)("copyAvailable"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(const(QTextCharFormat))("currentCharFormatChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!()("cursorPositionChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(bool)("redoAvailable"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!()("selectionChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!()("textChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[6]);
        mo.addMethod(new QMetaSignal(signature!(bool)("undoAvailable"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(string)("append"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("clear"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("copy"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!()("cut"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(string)("insertHtml"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!(string)("insertPlainText"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[6]);
        mo.addMethod(new QMetaSlot(signature!()("paste"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[7]);
        mo.addMethod(new QMetaSlot(signature!()("redo"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[8]);
        mo.addMethod(new QMetaSlot(signature!(string)("scrollToAnchor"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[9]);
        mo.addMethod(new QMetaSlot(signature!()("selectAll"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[10]);
        mo.addMethod(new QMetaSlot(signature!(int)("setAlignment"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[11]);
        mo.addMethod(new QMetaSlot(signature!(const(QFont))("setCurrentFont"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[12]);
        mo.addMethod(new QMetaSlot(signature!(string)("setFontFamily"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[13]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setFontItalic"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[14]);
        mo.addMethod(new QMetaSlot(signature!(double)("setFontPointSize"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[15]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setFontUnderline"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[16]);
        mo.addMethod(new QMetaSlot(signature!(int)("setFontWeight"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[17]);
        mo.addMethod(new QMetaSlot(signature!(string)("setHtml"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[18]);
        mo.addMethod(new QMetaSlot(signature!(string)("setPlainText"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[19]);
        mo.addMethod(new QMetaSlot(signature!(string)("setText"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[20]);
        mo.addMethod(new QMetaSlot(signature!(const(QColor))("setTextBackgroundColor"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[21]);
        mo.addMethod(new QMetaSlot(signature!(const(QColor))("setTextColor"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[22]);
        mo.addMethod(new QMetaSlot(signature!()("undo"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[23]);
        mo.addMethod(new QMetaSlot(signature!(int)("zoomIn"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[24]);
        mo.addMethod(new QMetaSlot(signature!()("zoomIn"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[25]);
        mo.addMethod(new QMetaSlot(signature!(int)("zoomOut"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[26]);
        mo.addMethod(new QMetaSlot(signature!()("zoomOut"), index));

    }

    public alias void __isQtType_QTextEdit;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QTextEdit_copyAvailable_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QTextEdit_currentCharFormatChanged_QTextCharFormat(void* __this_nativeId,
 void* format0);
private extern(C) void  qtd_QTextEdit_cursorPositionChanged(void* __this_nativeId);
private extern(C) void  qtd_QTextEdit_redoAvailable_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QTextEdit_selectionChanged(void* __this_nativeId);
private extern(C) void  qtd_QTextEdit_textChanged(void* __this_nativeId);
private extern(C) void  qtd_QTextEdit_undoAvailable_bool(void* __this_nativeId,
 bool b0);

// C wrappers
private extern(C) void* qtd_QTextEdit_QTextEdit_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QTextEdit_QTextEdit_string_QWidget(void *d_ptr,
 string text0,
 void* parent1);
private extern(C) bool  qtd_QTextEdit_acceptRichText_const(void* __this_nativeId);
private extern(C) int  qtd_QTextEdit_alignment_const(void* __this_nativeId);
private extern(C) void  qtd_QTextEdit_anchorAt_QPoint_const(void* __this_nativeId,
 void* __d_return_value,
 QPoint pos0);
private extern(C) void  qtd_QTextEdit_append_string(void* __this_nativeId,
 string text0);
private extern(C) int  qtd_QTextEdit_autoFormatting_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextEdit_canPaste_const(void* __this_nativeId);
private extern(C) void  qtd_QTextEdit_clear(void* __this_nativeId);
private extern(C) void  qtd_QTextEdit_copy(void* __this_nativeId);
private extern(C) void*  qtd_QTextEdit_createStandardContextMenu(void* __this_nativeId);
private extern(C) void*  qtd_QTextEdit_createStandardContextMenu_QPoint(void* __this_nativeId,
 QPoint position0);
private extern(C) void*  qtd_QTextEdit_currentCharFormat_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextEdit_currentFont_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextEdit_cursorForPosition_QPoint_const(void* __this_nativeId,
 QPoint pos0);
private extern(C) void  qtd_QTextEdit_cursorRect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void  qtd_QTextEdit_cursorRect_QTextCursor_const(void* __this_nativeId,
 QRect * __d_return_value,
 void* cursor0);
private extern(C) int  qtd_QTextEdit_cursorWidth_const(void* __this_nativeId);
private extern(C) void  qtd_QTextEdit_cut(void* __this_nativeId);
private extern(C) void*  qtd_QTextEdit_document_const(void* __this_nativeId);
private extern(C) void  qtd_QTextEdit_documentTitle_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QTextEdit_ensureCursorVisible(void* __this_nativeId);
private extern(C) void  qtd_QTextEdit_extraSelections_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QTextEdit_find_string_FindFlags(void* __this_nativeId,
 string exp0,
 int options1);
private extern(C) void  qtd_QTextEdit_fontFamily_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QTextEdit_fontItalic_const(void* __this_nativeId);
private extern(C) double  qtd_QTextEdit_fontPointSize_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextEdit_fontUnderline_const(void* __this_nativeId);
private extern(C) int  qtd_QTextEdit_fontWeight_const(void* __this_nativeId);
private extern(C) void  qtd_QTextEdit_insertHtml_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QTextEdit_insertPlainText_string(void* __this_nativeId,
 string text0);
private extern(C) bool  qtd_QTextEdit_isReadOnly_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextEdit_isUndoRedoEnabled_const(void* __this_nativeId);
private extern(C) int  qtd_QTextEdit_lineWrapColumnOrWidth_const(void* __this_nativeId);
private extern(C) int  qtd_QTextEdit_lineWrapMode_const(void* __this_nativeId);
private extern(C) void  qtd_QTextEdit_mergeCurrentCharFormat_QTextCharFormat(void* __this_nativeId,
 void* modifier0);
private extern(C) void  qtd_QTextEdit_moveCursor_MoveOperation_MoveMode(void* __this_nativeId,
 int operation0,
 int mode1);
private extern(C) bool  qtd_QTextEdit_overwriteMode_const(void* __this_nativeId);
private extern(C) void  qtd_QTextEdit_paste(void* __this_nativeId);
private extern(C) void  qtd_QTextEdit_print_QPrinter_const(void* __this_nativeId,
 void* printer0);
private extern(C) void  qtd_QTextEdit_redo(void* __this_nativeId);
private extern(C) void  qtd_QTextEdit_scrollToAnchor_string(void* __this_nativeId,
 string name0);
private extern(C) void  qtd_QTextEdit_selectAll(void* __this_nativeId);
private extern(C) void  qtd_QTextEdit_setAcceptRichText_bool(void* __this_nativeId,
 bool accept0);
private extern(C) void  qtd_QTextEdit_setAlignment_Alignment(void* __this_nativeId,
 int a0);
private extern(C) void  qtd_QTextEdit_setAutoFormatting_AutoFormatting(void* __this_nativeId,
 int features0);
private extern(C) void  qtd_QTextEdit_setCurrentCharFormat_QTextCharFormat(void* __this_nativeId,
 void* format0);
private extern(C) void  qtd_QTextEdit_setCurrentFont_QFont(void* __this_nativeId,
 void* f0);
private extern(C) void  qtd_QTextEdit_setCursorWidth_int(void* __this_nativeId,
 int width0);
private extern(C) void  qtd_QTextEdit_setDocument_QTextDocument(void* __this_nativeId,
 void* document0);
private extern(C) void  qtd_QTextEdit_setDocumentTitle_string(void* __this_nativeId,
 string title0);
private extern(C) void  qtd_QTextEdit_setExtraSelections_QList(void* __this_nativeId,
 void* selections0);
private extern(C) void  qtd_QTextEdit_setFontFamily_string(void* __this_nativeId,
 string fontFamily0);
private extern(C) void  qtd_QTextEdit_setFontItalic_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QTextEdit_setFontPointSize_double(void* __this_nativeId,
 double s0);
private extern(C) void  qtd_QTextEdit_setFontUnderline_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QTextEdit_setFontWeight_int(void* __this_nativeId,
 int w0);
private extern(C) void  qtd_QTextEdit_setHtml_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QTextEdit_setLineWrapColumnOrWidth_int(void* __this_nativeId,
 int w0);
private extern(C) void  qtd_QTextEdit_setLineWrapMode_LineWrapMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QTextEdit_setOverwriteMode_bool(void* __this_nativeId,
 bool overwrite0);
private extern(C) void  qtd_QTextEdit_setPlainText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QTextEdit_setReadOnly_bool(void* __this_nativeId,
 bool ro0);
private extern(C) void  qtd_QTextEdit_setTabChangesFocus_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QTextEdit_setTabStopWidth_int(void* __this_nativeId,
 int width0);
private extern(C) void  qtd_QTextEdit_setText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QTextEdit_setTextBackgroundColor_QColor(void* __this_nativeId,
 void* c0);
private extern(C) void  qtd_QTextEdit_setTextColor_QColor(void* __this_nativeId,
 void* c0);
private extern(C) void  qtd_QTextEdit_setTextCursor_QTextCursor(void* __this_nativeId,
 void* cursor0);
private extern(C) void  qtd_QTextEdit_setTextInteractionFlags_TextInteractionFlags(void* __this_nativeId,
 int flags0);
private extern(C) void  qtd_QTextEdit_setUndoRedoEnabled_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QTextEdit_setWordWrapMode_WrapMode(void* __this_nativeId,
 int policy0);
private extern(C) bool  qtd_QTextEdit_tabChangesFocus_const(void* __this_nativeId);
private extern(C) int  qtd_QTextEdit_tabStopWidth_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextEdit_textBackgroundColor_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextEdit_textColor_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextEdit_textCursor_const(void* __this_nativeId);
private extern(C) int  qtd_QTextEdit_textInteractionFlags_const(void* __this_nativeId);
private extern(C) void  qtd_QTextEdit_toHtml_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QTextEdit_toPlainText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QTextEdit_undo(void* __this_nativeId);
private extern(C) int  qtd_QTextEdit_wordWrapMode_const(void* __this_nativeId);
private extern(C) void  qtd_QTextEdit_zoomIn_int(void* __this_nativeId,
 int range0);
private extern(C) void  qtd_QTextEdit_zoomOut_int(void* __this_nativeId,
 int range0);
private extern(C) bool  qtd_QTextEdit_canInsertFromMimeData_QMimeData_const(void* __this_nativeId,
 void* source0);
private extern(C) void  qtd_QTextEdit_changeEvent_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QTextEdit_contextMenuEvent_QContextMenuEvent(void* __this_nativeId,
 void* e0);
private extern(C) void*  qtd_QTextEdit_createMimeDataFromSelection_const(void* __this_nativeId);
private extern(C) void  qtd_QTextEdit_dragEnterEvent_QDragEnterEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QTextEdit_dragLeaveEvent_QDragLeaveEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QTextEdit_dragMoveEvent_QDragMoveEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QTextEdit_dropEvent_QDropEvent(void* __this_nativeId,
 void* e0);
private extern(C) bool  qtd_QTextEdit_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QTextEdit_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* e0);
private extern(C) bool  qtd_QTextEdit_focusNextPrevChild_bool(void* __this_nativeId,
 bool next0);
private extern(C) void  qtd_QTextEdit_focusOutEvent_QFocusEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QTextEdit_inputMethodEvent_QInputMethodEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QTextEdit_inputMethodQuery_InputMethodQuery_const(void* __this_nativeId,
 int property0);
private extern(C) void  qtd_QTextEdit_insertFromMimeData_QMimeData(void* __this_nativeId,
 void* source0);
private extern(C) void  qtd_QTextEdit_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QTextEdit_keyReleaseEvent_QKeyEvent(void* __this_nativeId,
 void* e0);
private extern(C) void*  qtd_QTextEdit_loadResource_int_QUrl(void* __this_nativeId,
 int type0,
 void* name1);
private extern(C) void  qtd_QTextEdit_mouseDoubleClickEvent_QMouseEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QTextEdit_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QTextEdit_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QTextEdit_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QTextEdit_paintEvent_QPaintEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QTextEdit_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QTextEdit_scrollContentsBy_int_int(void* __this_nativeId,
 int dx0,
 int dy1);
private extern(C) void  qtd_QTextEdit_showEvent_QShowEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTextEdit_timerEvent_QTimerEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QTextEdit_wheelEvent_QWheelEvent(void* __this_nativeId,
 void* e0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId, void* source0) qtd_QTextEdit_canInsertFromMimeData_QMimeData_const_dispatch; }
extern(C) bool qtd_export_QTextEdit_canInsertFromMimeData_QMimeData_const_dispatch(void *dId, void* source0){
    auto d_object = cast(QTextEdit) dId;
    scope source0_d_ref = new QMimeData(source0, QtdObjectInitFlags.onStack);

    auto return_value = d_object.canInsertFromMimeData(source0_d_ref);
    return return_value;
}

extern(C){ extern void* function(void *dId) qtd_QTextEdit_createMimeDataFromSelection_const_dispatch; }
extern(C) void* qtd_export_QTextEdit_createMimeDataFromSelection_const_dispatch(void *dId){
    auto d_object = cast(QTextEdit) dId;
    QMimeData ret_value = d_object.createMimeDataFromSelection();
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, void* source0) qtd_QTextEdit_insertFromMimeData_QMimeData_dispatch; }
extern(C) void qtd_export_QTextEdit_insertFromMimeData_QMimeData_dispatch(void *dId, void* source0){
    auto d_object = cast(QTextEdit) dId;
    scope source0_d_ref = new QMimeData(source0, QtdObjectInitFlags.onStack);

    d_object.insertFromMimeData(source0_d_ref);
}

extern(C){ extern void* function(void *dId, int type0, void* name1) qtd_QTextEdit_loadResource_int_QUrl_dispatch; }
extern(C) void* qtd_export_QTextEdit_loadResource_int_QUrl_dispatch(void *dId, int type0, void* name1){
    auto d_object = cast(QTextEdit) dId;
    scope name1_d_ref = new QUrl(name1, QtdObjectInitFlags.onStack);
    QVariant ret_value = d_object.loadResource(type0, name1_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QTextEdit_initCallBacks(void* virtuals);

extern(C) void static_init_QTextEdit() {
    void*[4] virt_arr;
    virt_arr[0] = &qtd_export_QTextEdit_canInsertFromMimeData_QMimeData_const_dispatch;
    virt_arr[1] = &qtd_export_QTextEdit_createMimeDataFromSelection_const_dispatch;
    virt_arr[2] = &qtd_export_QTextEdit_insertFromMimeData_QMimeData_dispatch;
    virt_arr[3] = &qtd_export_QTextEdit_loadResource_int_QUrl_dispatch;
    qtd_QTextEdit_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QTextEdit_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QTextEdit) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QTextEdit_copyAvailable_handle(void* dId, void** args) {
        auto d_object = cast(QTextEdit) dId;
        auto b0 = *(cast(bool*)args[1]);
        //d_object.copyAvailable_emit(b0);
}*/
/*private extern(C) void qtd_QTextEdit_currentCharFormatChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTextEdit) dId;
        scope format0 = new QTextCharFormat(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.currentCharFormatChanged_emit(format0);
}*/
/*private extern(C) void qtd_QTextEdit_cursorPositionChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTextEdit) dId;
        //d_object.cursorPositionChanged_emit();
}*/
/*private extern(C) void qtd_QTextEdit_redoAvailable_handle(void* dId, void** args) {
        auto d_object = cast(QTextEdit) dId;
        auto b0 = *(cast(bool*)args[1]);
        //d_object.redoAvailable_emit(b0);
}*/
/*private extern(C) void qtd_QTextEdit_selectionChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTextEdit) dId;
        //d_object.selectionChanged_emit();
}*/
/*private extern(C) void qtd_QTextEdit_textChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTextEdit) dId;
        //d_object.textChanged_emit();
}*/
/*private extern(C) void qtd_QTextEdit_undoAvailable_handle(void* dId, void** args) {
        auto d_object = cast(QTextEdit) dId;
        auto b0 = *(cast(bool*)args[1]);
        //d_object.undoAvailable_emit(b0);
}*/

extern(C) QMetaObjectNative* qtd_QTextEdit_staticMetaObject();

extern(C) void qtd_QTextEdit_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTextEdit_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
