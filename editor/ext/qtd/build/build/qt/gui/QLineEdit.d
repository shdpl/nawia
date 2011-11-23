module qt.gui.QLineEdit;

public import qt.gui.QLineEdit_aux;
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
public import qt.gui.QPaintDevice;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QPaintEngine;
public import qt.gui.QWheelEvent;
public import qt.gui.QDropEvent;
public import qt.gui.QActionEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QStyleOptionFrame;
public import qt.gui.QValidator;
public import qt.gui.QFocusEvent;
public import qt.core.QRect;
public import qt.gui.QResizeEvent;
public import qt.gui.QDragMoveEvent;
public import qt.core.QPoint;
public import qt.gui.QKeyEvent;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.core.QObject;
public import qt.gui.QCompleter;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;
public import qt.gui.QMenu;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QLineEdit : QWidget
{
    public enum EchoMode {
        Normal = 0,
        NoEcho = 1,
        Password = 2,
        PasswordEchoOnEdit = 3
    }

    alias EchoMode.Normal Normal;
    alias EchoMode.NoEcho NoEcho;
    alias EchoMode.Password Password;
    alias EchoMode.PasswordEchoOnEdit PasswordEchoOnEdit;


Object __rcCompleter = null;

Object __rcValidator = null;

    private static const string[] __signalSignatures = [
            "cursorPositionChanged(int,int)", 
            "editingFinished()", 
            "returnPressed()", 
            "selectionChanged()", 
            "textChanged(QString)", 
            "textEdited(QString)"    ];

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

    protected final void cursorPositionChanged(int arg__1, int arg__2) {
        qtd_QLineEdit_cursorPositionChanged_int_int(qtdNativeId, arg__1, arg__2);
    }

    protected final void editingFinished() {
        qtd_QLineEdit_editingFinished(qtdNativeId);
    }

    protected final void returnPressed() {
        qtd_QLineEdit_returnPressed(qtdNativeId);
    }

    protected final void selectionChanged() {
        qtd_QLineEdit_selectionChanged(qtdNativeId);
    }

    protected final void textChanged(string arg__1) {
        qtd_QLineEdit_textChanged_string(qtdNativeId, arg__1);
    }

    protected final void textEdited(string arg__1) {
        qtd_QLineEdit_textEdited_string(qtdNativeId, arg__1);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QLineEdit_QLineEdit_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string arg__1, QWidget parent_ = null) {
        void* ret = qtd_QLineEdit_QLineEdit_string_QWidget(cast(void*) this, arg__1, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int alignment() const {
        return qtd_QLineEdit_alignment_const(qtdNativeId);
    }

    public final void backspace() {
        qtd_QLineEdit_backspace(qtdNativeId);
    }

    public final void clear() {
        qtd_QLineEdit_clear(qtdNativeId);
    }

    public final QCompleter completer() const {
        void *ret = qtd_QLineEdit_completer_const(qtdNativeId);
        QCompleter __d_return_value = QCompleter.__getObject(ret);
        return __d_return_value;
    }

    public final void copy() const {
        qtd_QLineEdit_copy_const(qtdNativeId);
    }

    public final QMenu createStandardContextMenu() {
        void *ret = qtd_QLineEdit_createStandardContextMenu(qtdNativeId);
        QMenu __d_return_value = QMenu.__getObject(ret);
        return __d_return_value;
    }

    public final void cursorBackward(bool mark, int steps = 1) {
        qtd_QLineEdit_cursorBackward_bool_int(qtdNativeId, mark, steps);
    }

    public final void cursorForward(bool mark, int steps = 1) {
        qtd_QLineEdit_cursorForward_bool_int(qtdNativeId, mark, steps);
    }

    public final int cursorPosition() const {
        return qtd_QLineEdit_cursorPosition_const(qtdNativeId);
    }

    public final int cursorPositionAt(const(QPoint) pos) {
        return qtd_QLineEdit_cursorPositionAt_QPoint(qtdNativeId, pos);
    }

    protected final QRect cursorRect() const {
        QRect res;
        qtd_QLineEdit_cursorRect_const(qtdNativeId, &res);
        return res;
    }

    public final void cursorWordBackward(bool mark) {
        qtd_QLineEdit_cursorWordBackward_bool(qtdNativeId, mark);
    }

    public final void cursorWordForward(bool mark) {
        qtd_QLineEdit_cursorWordForward_bool(qtdNativeId, mark);
    }

    public final void cut() {
        qtd_QLineEdit_cut(qtdNativeId);
    }

    public final void del() {
        qtd_QLineEdit_del(qtdNativeId);
    }

    public final void deselect() {
        qtd_QLineEdit_deselect(qtdNativeId);
    }

    public final string displayText() const {
        string res;
        qtd_QLineEdit_displayText_const(qtdNativeId, &res);
        return res;
    }

    public final bool dragEnabled() const {
        return qtd_QLineEdit_dragEnabled_const(qtdNativeId);
    }

    public final QLineEdit.EchoMode echoMode() const {
        return cast(QLineEdit.EchoMode) qtd_QLineEdit_echoMode_const(qtdNativeId);
    }

    public final void end(bool mark) {
        qtd_QLineEdit_end_bool(qtdNativeId, mark);
    }

    public final void getTextMargins(int* left, int* top, int* right, int* bottom) const {
        qtd_QLineEdit_getTextMargins_nativepointerint_nativepointerint_nativepointerint_nativepointerint_const(qtdNativeId, left, top, right, bottom);
    }

    public final bool hasAcceptableInput() const {
        return qtd_QLineEdit_hasAcceptableInput_const(qtdNativeId);
    }

    public final bool hasFrame() const {
        return qtd_QLineEdit_hasFrame_const(qtdNativeId);
    }

    public final bool hasSelectedText() const {
        return qtd_QLineEdit_hasSelectedText_const(qtdNativeId);
    }

    public final void home(bool mark) {
        qtd_QLineEdit_home_bool(qtdNativeId, mark);
    }

    protected final void initStyleOption(QStyleOptionFrame option) const {
        qtd_QLineEdit_initStyleOption_nativepointerQStyleOptionFrame_const(qtdNativeId, option is null ? null : option.qtdNativeId);
    }

    public final string inputMask() const {
        string res;
        qtd_QLineEdit_inputMask_const(qtdNativeId, &res);
        return res;
    }

    public final void insert(string arg__1) {
        qtd_QLineEdit_insert_string(qtdNativeId, arg__1);
    }

    public final bool isModified() const {
        return qtd_QLineEdit_isModified_const(qtdNativeId);
    }

    public final bool isReadOnly() const {
        return qtd_QLineEdit_isReadOnly_const(qtdNativeId);
    }

    public final bool isRedoAvailable() const {
        return qtd_QLineEdit_isRedoAvailable_const(qtdNativeId);
    }

    public final bool isUndoAvailable() const {
        return qtd_QLineEdit_isUndoAvailable_const(qtdNativeId);
    }

    public final int maxLength() const {
        return qtd_QLineEdit_maxLength_const(qtdNativeId);
    }

    public final void paste() {
        qtd_QLineEdit_paste(qtdNativeId);
    }

    public final string placeholderText() const {
        string res;
        qtd_QLineEdit_placeholderText_const(qtdNativeId, &res);
        return res;
    }

    public final void redo() {
        qtd_QLineEdit_redo(qtdNativeId);
    }

    public final void selectAll() {
        qtd_QLineEdit_selectAll(qtdNativeId);
    }

    public final string selectedText() const {
        string res;
        qtd_QLineEdit_selectedText_const(qtdNativeId, &res);
        return res;
    }

    public final int selectionStart() const {
        return qtd_QLineEdit_selectionStart_const(qtdNativeId);
    }

    public final void setAlignment(int flag) {
        qtd_QLineEdit_setAlignment_Alignment(qtdNativeId, flag);
    }

    public final void setCompleter(QCompleter completer) {
        {
            __rcCompleter = cast(Object) completer;
        }
        qtd_QLineEdit_setCompleter_QCompleter(qtdNativeId, completer is null ? null : completer.qtdNativeId);
    }

    public final void setCursorPosition(int arg__1) {
        qtd_QLineEdit_setCursorPosition_int(qtdNativeId, arg__1);
    }

    public final void setDragEnabled(bool b) {
        qtd_QLineEdit_setDragEnabled_bool(qtdNativeId, b);
    }

    public final void setEchoMode(QLineEdit.EchoMode arg__1) {
        qtd_QLineEdit_setEchoMode_EchoMode(qtdNativeId, arg__1);
    }

    public final void setFrame(bool arg__1) {
        qtd_QLineEdit_setFrame_bool(qtdNativeId, arg__1);
    }

    public final void setInputMask(string inputMask) {
        qtd_QLineEdit_setInputMask_string(qtdNativeId, inputMask);
    }

    public final void setMaxLength(int arg__1) {
        qtd_QLineEdit_setMaxLength_int(qtdNativeId, arg__1);
    }

    public final void setModified(bool arg__1) {
        qtd_QLineEdit_setModified_bool(qtdNativeId, arg__1);
    }

    public final void setPlaceholderText(string arg__1) {
        qtd_QLineEdit_setPlaceholderText_string(qtdNativeId, arg__1);
    }

    public final void setReadOnly(bool arg__1) {
        qtd_QLineEdit_setReadOnly_bool(qtdNativeId, arg__1);
    }

    public final void setSelection(int arg__1, int arg__2) {
        qtd_QLineEdit_setSelection_int_int(qtdNativeId, arg__1, arg__2);
    }

    public final void setText(string arg__1) {
        qtd_QLineEdit_setText_string(qtdNativeId, arg__1);
    }

    public final void setTextMargins(int left, int top, int right, int bottom) {
        qtd_QLineEdit_setTextMargins_int_int_int_int(qtdNativeId, left, top, right, bottom);
    }

    public final void setValidator(QValidator arg__1) {
        {
            __rcValidator = cast(Object) arg__1;
        }
        qtd_QLineEdit_setValidator_QValidator(qtdNativeId, arg__1 is null ? null : (cast(QValidator)arg__1).qtdNativeId);
    }

    public final string text() const {
        string res;
        qtd_QLineEdit_text_const(qtdNativeId, &res);
        return res;
    }

    public final void undo() {
        qtd_QLineEdit_undo(qtdNativeId);
    }

    public final QValidator validator() const {
        void *ret = qtd_QLineEdit_validator_const(qtdNativeId);
        QValidator __d_return_value = QValidator.__getObject(ret);
        return __d_return_value;
    }

    protected void changeEvent(QEvent arg__1) {
        qtd_QLineEdit_changeEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void contextMenuEvent(QContextMenuEvent arg__1) {
        qtd_QLineEdit_contextMenuEvent_QContextMenuEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void dragEnterEvent(QDragEnterEvent arg__1) {
        qtd_QLineEdit_dragEnterEvent_QDragEnterEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void dragLeaveEvent(QDragLeaveEvent e) {
        qtd_QLineEdit_dragLeaveEvent_QDragLeaveEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void dragMoveEvent(QDragMoveEvent e) {
        qtd_QLineEdit_dragMoveEvent_QDragMoveEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void dropEvent(QDropEvent arg__1) {
        qtd_QLineEdit_dropEvent_QDropEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool event(QEvent arg__1) {
        return qtd_QLineEdit_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void focusInEvent(QFocusEvent arg__1) {
        qtd_QLineEdit_focusInEvent_QFocusEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void focusOutEvent(QFocusEvent arg__1) {
        qtd_QLineEdit_focusOutEvent_QFocusEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void inputMethodEvent(QInputMethodEvent arg__1) {
        qtd_QLineEdit_inputMethodEvent_QInputMethodEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QVariant inputMethodQuery(Qt.InputMethodQuery arg__1) const {
        void* ret = qtd_QLineEdit_inputMethodQuery_InputMethodQuery_const(qtdNativeId, arg__1);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    protected void keyPressEvent(QKeyEvent arg__1) {
        qtd_QLineEdit_keyPressEvent_QKeyEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QLineEdit_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void mouseDoubleClickEvent(QMouseEvent arg__1) {
        qtd_QLineEdit_mouseDoubleClickEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mouseMoveEvent(QMouseEvent arg__1) {
        qtd_QLineEdit_mouseMoveEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent arg__1) {
        qtd_QLineEdit_mousePressEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent arg__1) {
        qtd_QLineEdit_mouseReleaseEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QLineEdit_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QLineEdit_sizeHint_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "clear()", 
            "copy()const", 
            "cut()", 
            "paste()", 
            "redo()", 
            "selectAll()", 
            "setText(QString)", 
            "undo()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QLineEdit_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QLineEdit);
    }

    static QLineEdit __getObject(void* nativeId) {
        return static_cast!(QLineEdit)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QLineEdit_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QLineEdit_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QLineEdit(nativeId, initFlags);
        QLineEdit.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(int,int)("cursorPositionChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!()("editingFinished"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!()("returnPressed"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!()("selectionChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(string)("textChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!(string)("textEdited"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("clear"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("copy"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("cut"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!()("paste"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!()("redo"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!()("selectAll"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[6]);
        mo.addMethod(new QMetaSlot(signature!(string)("setText"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[7]);
        mo.addMethod(new QMetaSlot(signature!()("undo"), index));

    }

    public alias void __isQtType_QLineEdit;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QLineEdit_cursorPositionChanged_int_int(void* __this_nativeId,
 int arg__1,
 int arg__2);
private extern(C) void  qtd_QLineEdit_editingFinished(void* __this_nativeId);
private extern(C) void  qtd_QLineEdit_returnPressed(void* __this_nativeId);
private extern(C) void  qtd_QLineEdit_selectionChanged(void* __this_nativeId);
private extern(C) void  qtd_QLineEdit_textChanged_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QLineEdit_textEdited_string(void* __this_nativeId,
 string arg__1);

// C wrappers
private extern(C) void* qtd_QLineEdit_QLineEdit_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QLineEdit_QLineEdit_string_QWidget(void *d_ptr,
 string arg__1,
 void* parent1);
private extern(C) int  qtd_QLineEdit_alignment_const(void* __this_nativeId);
private extern(C) void  qtd_QLineEdit_backspace(void* __this_nativeId);
private extern(C) void  qtd_QLineEdit_clear(void* __this_nativeId);
private extern(C) void*  qtd_QLineEdit_completer_const(void* __this_nativeId);
private extern(C) void  qtd_QLineEdit_copy_const(void* __this_nativeId);
private extern(C) void*  qtd_QLineEdit_createStandardContextMenu(void* __this_nativeId);
private extern(C) void  qtd_QLineEdit_cursorBackward_bool_int(void* __this_nativeId,
 bool mark0,
 int steps1);
private extern(C) void  qtd_QLineEdit_cursorForward_bool_int(void* __this_nativeId,
 bool mark0,
 int steps1);
private extern(C) int  qtd_QLineEdit_cursorPosition_const(void* __this_nativeId);
private extern(C) int  qtd_QLineEdit_cursorPositionAt_QPoint(void* __this_nativeId,
 QPoint pos0);
private extern(C) void  qtd_QLineEdit_cursorRect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void  qtd_QLineEdit_cursorWordBackward_bool(void* __this_nativeId,
 bool mark0);
private extern(C) void  qtd_QLineEdit_cursorWordForward_bool(void* __this_nativeId,
 bool mark0);
private extern(C) void  qtd_QLineEdit_cut(void* __this_nativeId);
private extern(C) void  qtd_QLineEdit_del(void* __this_nativeId);
private extern(C) void  qtd_QLineEdit_deselect(void* __this_nativeId);
private extern(C) void  qtd_QLineEdit_displayText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QLineEdit_dragEnabled_const(void* __this_nativeId);
private extern(C) int  qtd_QLineEdit_echoMode_const(void* __this_nativeId);
private extern(C) void  qtd_QLineEdit_end_bool(void* __this_nativeId,
 bool mark0);
private extern(C) void  qtd_QLineEdit_getTextMargins_nativepointerint_nativepointerint_nativepointerint_nativepointerint_const(void* __this_nativeId,
 int* left0,
 int* top1,
 int* right2,
 int* bottom3);
private extern(C) bool  qtd_QLineEdit_hasAcceptableInput_const(void* __this_nativeId);
private extern(C) bool  qtd_QLineEdit_hasFrame_const(void* __this_nativeId);
private extern(C) bool  qtd_QLineEdit_hasSelectedText_const(void* __this_nativeId);
private extern(C) void  qtd_QLineEdit_home_bool(void* __this_nativeId,
 bool mark0);
private extern(C) void  qtd_QLineEdit_initStyleOption_nativepointerQStyleOptionFrame_const(void* __this_nativeId,
 void* option0);
private extern(C) void  qtd_QLineEdit_inputMask_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QLineEdit_insert_string(void* __this_nativeId,
 string arg__1);
private extern(C) bool  qtd_QLineEdit_isModified_const(void* __this_nativeId);
private extern(C) bool  qtd_QLineEdit_isReadOnly_const(void* __this_nativeId);
private extern(C) bool  qtd_QLineEdit_isRedoAvailable_const(void* __this_nativeId);
private extern(C) bool  qtd_QLineEdit_isUndoAvailable_const(void* __this_nativeId);
private extern(C) int  qtd_QLineEdit_maxLength_const(void* __this_nativeId);
private extern(C) void  qtd_QLineEdit_paste(void* __this_nativeId);
private extern(C) void  qtd_QLineEdit_placeholderText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QLineEdit_redo(void* __this_nativeId);
private extern(C) void  qtd_QLineEdit_selectAll(void* __this_nativeId);
private extern(C) void  qtd_QLineEdit_selectedText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QLineEdit_selectionStart_const(void* __this_nativeId);
private extern(C) void  qtd_QLineEdit_setAlignment_Alignment(void* __this_nativeId,
 int flag0);
private extern(C) void  qtd_QLineEdit_setCompleter_QCompleter(void* __this_nativeId,
 void* completer0);
private extern(C) void  qtd_QLineEdit_setCursorPosition_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QLineEdit_setDragEnabled_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QLineEdit_setEchoMode_EchoMode(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QLineEdit_setFrame_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QLineEdit_setInputMask_string(void* __this_nativeId,
 string inputMask0);
private extern(C) void  qtd_QLineEdit_setMaxLength_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QLineEdit_setModified_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QLineEdit_setPlaceholderText_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QLineEdit_setReadOnly_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QLineEdit_setSelection_int_int(void* __this_nativeId,
 int arg__1,
 int arg__2);
private extern(C) void  qtd_QLineEdit_setText_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QLineEdit_setTextMargins_int_int_int_int(void* __this_nativeId,
 int left0,
 int top1,
 int right2,
 int bottom3);
private extern(C) void  qtd_QLineEdit_setValidator_QValidator(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLineEdit_text_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QLineEdit_undo(void* __this_nativeId);
private extern(C) void*  qtd_QLineEdit_validator_const(void* __this_nativeId);
private extern(C) void  qtd_QLineEdit_changeEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLineEdit_contextMenuEvent_QContextMenuEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLineEdit_dragEnterEvent_QDragEnterEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLineEdit_dragLeaveEvent_QDragLeaveEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QLineEdit_dragMoveEvent_QDragMoveEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QLineEdit_dropEvent_QDropEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QLineEdit_event_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLineEdit_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLineEdit_focusOutEvent_QFocusEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLineEdit_inputMethodEvent_QInputMethodEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QLineEdit_inputMethodQuery_InputMethodQuery_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QLineEdit_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLineEdit_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QLineEdit_mouseDoubleClickEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLineEdit_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLineEdit_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLineEdit_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLineEdit_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLineEdit_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QLineEdit_initCallBacks(void* virtuals);

extern(C) void static_init_QLineEdit() {
    qtd_QLineEdit_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QLineEdit_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QLineEdit) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QLineEdit_cursorPositionChanged_handle(void* dId, void** args) {
        auto d_object = cast(QLineEdit) dId;
        auto arg__1 = *(cast(int*)args[1]);
        auto arg__2 = *(cast(int*)args[2]);
        //d_object.cursorPositionChanged_emit(arg__1, arg__2);
}*/
/*private extern(C) void qtd_QLineEdit_editingFinished_handle(void* dId, void** args) {
        auto d_object = cast(QLineEdit) dId;
        //d_object.editingFinished_emit();
}*/
/*private extern(C) void qtd_QLineEdit_returnPressed_handle(void* dId, void** args) {
        auto d_object = cast(QLineEdit) dId;
        //d_object.returnPressed_emit();
}*/
/*private extern(C) void qtd_QLineEdit_selectionChanged_handle(void* dId, void** args) {
        auto d_object = cast(QLineEdit) dId;
        //d_object.selectionChanged_emit();
}*/
/*private extern(C) void qtd_QLineEdit_textChanged_handle(void* dId, void** args) {
        auto d_object = cast(QLineEdit) dId;
        auto arg__1_ptr = args[1];
        string arg__1 = QStringUtil.toNativeString(arg__1_ptr);
        //d_object.textChanged_emit(arg__1);
}*/
/*private extern(C) void qtd_QLineEdit_textEdited_handle(void* dId, void** args) {
        auto d_object = cast(QLineEdit) dId;
        auto arg__1_ptr = args[1];
        string arg__1 = QStringUtil.toNativeString(arg__1_ptr);
        //d_object.textEdited_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QLineEdit_staticMetaObject();

extern(C) void qtd_QLineEdit_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QLineEdit_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
