module qt.gui.QAbstractSpinBox;

public import qt.gui.QAbstractSpinBox_aux;
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
public import qt.gui.QValidator;
public import qt.gui.QPaintDevice;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QWheelEvent;
public import qt.gui.QPaintEngine;
public import qt.gui.QActionEvent;
public import qt.gui.QDropEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QLineEdit;
public import qt.gui.QShowEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QKeyEvent;
public import qt.gui.QDragMoveEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.gui.QStyleOptionSpinBox;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.core.QObject;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QAbstractSpinBox : QWidget
{
    public enum StepEnabledFlag {
        StepNone = 0,
        StepUpEnabled = 1,
        StepDownEnabled = 2
    }

    alias StepEnabledFlag.StepNone StepNone;
    alias StepEnabledFlag.StepUpEnabled StepUpEnabled;
    alias StepEnabledFlag.StepDownEnabled StepDownEnabled;

    public enum CorrectionMode {
        CorrectToPreviousValue = 0,
        CorrectToNearestValue = 1
    }

    alias CorrectionMode.CorrectToPreviousValue CorrectToPreviousValue;
    alias CorrectionMode.CorrectToNearestValue CorrectToNearestValue;

    public enum ButtonSymbols {
        UpDownArrows = 0,
        PlusMinus = 1,
        NoButtons = 2
    }

    alias ButtonSymbols.UpDownArrows UpDownArrows;
    alias ButtonSymbols.PlusMinus PlusMinus;
    alias ButtonSymbols.NoButtons NoButtons;


    private static const string[] __signalSignatures = [
            "editingFinished()"    ];

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

    protected final void editingFinished() {
        qtd_QAbstractSpinBox_editingFinished(qtdNativeId);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QAbstractSpinBox_QAbstractSpinBox_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int alignment() const {
        return qtd_QAbstractSpinBox_alignment_const(qtdNativeId);
    }

    public final QAbstractSpinBox.ButtonSymbols buttonSymbols() const {
        return cast(QAbstractSpinBox.ButtonSymbols) qtd_QAbstractSpinBox_buttonSymbols_const(qtdNativeId);
    }

    public final QAbstractSpinBox.CorrectionMode correctionMode() const {
        return cast(QAbstractSpinBox.CorrectionMode) qtd_QAbstractSpinBox_correctionMode_const(qtdNativeId);
    }

    public final bool hasAcceptableInput() const {
        return qtd_QAbstractSpinBox_hasAcceptableInput_const(qtdNativeId);
    }

    public final bool hasFrame() const {
        return qtd_QAbstractSpinBox_hasFrame_const(qtdNativeId);
    }

    private final void initStyleOption(QStyleOptionSpinBox option) const {
        qtd_QAbstractSpinBox_initStyleOption_nativepointerQStyleOptionSpinBox_const(qtdNativeId, option is null ? null : option.qtdNativeId);
    }

    public final void interpretText() {
        qtd_QAbstractSpinBox_interpretText(qtdNativeId);
    }

    public final bool isAccelerated() const {
        return qtd_QAbstractSpinBox_isAccelerated_const(qtdNativeId);
    }

    public final bool isReadOnly() const {
        return qtd_QAbstractSpinBox_isReadOnly_const(qtdNativeId);
    }

    public final bool keyboardTracking() const {
        return qtd_QAbstractSpinBox_keyboardTracking_const(qtdNativeId);
    }

    protected final QLineEdit lineEdit() const {
        void *ret = qtd_QAbstractSpinBox_lineEdit_const(qtdNativeId);
        QLineEdit __d_return_value = QLineEdit.__getObject(ret);
        return __d_return_value;
    }

    public final void selectAll() {
        qtd_QAbstractSpinBox_selectAll(qtdNativeId);
    }

    public final void setAccelerated(bool on) {
        qtd_QAbstractSpinBox_setAccelerated_bool(qtdNativeId, on);
    }

    public final void setAlignment(int flag) {
        qtd_QAbstractSpinBox_setAlignment_Alignment(qtdNativeId, flag);
    }

    public final void setButtonSymbols(QAbstractSpinBox.ButtonSymbols bs) {
        qtd_QAbstractSpinBox_setButtonSymbols_ButtonSymbols(qtdNativeId, bs);
    }

    public final void setCorrectionMode(QAbstractSpinBox.CorrectionMode cm) {
        qtd_QAbstractSpinBox_setCorrectionMode_CorrectionMode(qtdNativeId, cm);
    }

    public final void setFrame(bool arg__1) {
        qtd_QAbstractSpinBox_setFrame_bool(qtdNativeId, arg__1);
    }

    public final void setKeyboardTracking(bool kt) {
        qtd_QAbstractSpinBox_setKeyboardTracking_bool(qtdNativeId, kt);
    }

    protected final void setLineEdit(QLineEdit edit) {
        /*if (edit is null)
            throw new NullPointerException("Argument 'edit': null not expected."); */
        qtd_QAbstractSpinBox_setLineEdit_QLineEdit(qtdNativeId, edit is null ? null : edit.qtdNativeId);
    }

    public final void setReadOnly(bool r) {
        qtd_QAbstractSpinBox_setReadOnly_bool(qtdNativeId, r);
    }

    public final void setSpecialValueText(string txt) {
        qtd_QAbstractSpinBox_setSpecialValueText_string(qtdNativeId, txt);
    }

    public final void setWrapping(bool w) {
        qtd_QAbstractSpinBox_setWrapping_bool(qtdNativeId, w);
    }

    public final string specialValueText() const {
        string res;
        qtd_QAbstractSpinBox_specialValueText_const(qtdNativeId, &res);
        return res;
    }

    public final void stepDown() {
        qtd_QAbstractSpinBox_stepDown(qtdNativeId);
    }

    public final void stepUp() {
        qtd_QAbstractSpinBox_stepUp(qtdNativeId);
    }

    public final string text() const {
        string res;
        qtd_QAbstractSpinBox_text_const(qtdNativeId, &res);
        return res;
    }

    public final bool wrapping() const {
        return qtd_QAbstractSpinBox_wrapping_const(qtdNativeId);
    }

    protected void changeEvent(QEvent event) {
        qtd_QAbstractSpinBox_changeEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void clear() {
        qtd_QAbstractSpinBox_clear(qtdNativeId);
    }

    protected void closeEvent(QCloseEvent event) {
        qtd_QAbstractSpinBox_closeEvent_QCloseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void contextMenuEvent(QContextMenuEvent event) {
        qtd_QAbstractSpinBox_contextMenuEvent_QContextMenuEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public bool event(QEvent event) {
        return qtd_QAbstractSpinBox_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void fixup(ref string input) const {
        qtd_QAbstractSpinBox_fixup_nativepointerstring_const(qtdNativeId, input);
    }

    protected void focusInEvent(QFocusEvent event) {
        qtd_QAbstractSpinBox_focusInEvent_QFocusEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void focusOutEvent(QFocusEvent event) {
        qtd_QAbstractSpinBox_focusOutEvent_QFocusEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void hideEvent(QHideEvent event) {
        qtd_QAbstractSpinBox_hideEvent_QHideEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QVariant inputMethodQuery(Qt.InputMethodQuery arg__1) const {
        void* ret = qtd_QAbstractSpinBox_inputMethodQuery_InputMethodQuery_const(qtdNativeId, arg__1);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    protected void keyPressEvent(QKeyEvent event) {
        qtd_QAbstractSpinBox_keyPressEvent_QKeyEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void keyReleaseEvent(QKeyEvent event) {
        qtd_QAbstractSpinBox_keyReleaseEvent_QKeyEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QAbstractSpinBox_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void mouseMoveEvent(QMouseEvent event) {
        qtd_QAbstractSpinBox_mouseMoveEvent_QMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent event) {
        qtd_QAbstractSpinBox_mousePressEvent_QMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent event) {
        qtd_QAbstractSpinBox_mouseReleaseEvent_QMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent event) {
        qtd_QAbstractSpinBox_paintEvent_QPaintEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent event) {
        qtd_QAbstractSpinBox_resizeEvent_QResizeEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void showEvent(QShowEvent event) {
        qtd_QAbstractSpinBox_showEvent_QShowEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QAbstractSpinBox_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    public void stepBy(int steps) {
        qtd_QAbstractSpinBox_stepBy_int(qtdNativeId, steps);
    }

    protected int stepEnabled() const {
        return qtd_QAbstractSpinBox_stepEnabled_const(qtdNativeId);
    }

    protected void timerEvent(QTimerEvent event) {
        qtd_QAbstractSpinBox_timerEvent_QTimerEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QValidator.State validate(ref string input, int* pos) const {
        return cast(QValidator.State) qtd_QAbstractSpinBox_validate_nativepointerstring_nativepointerint_const(qtdNativeId, input, pos);
    }

    protected void wheelEvent(QWheelEvent event) {
        qtd_QAbstractSpinBox_wheelEvent_QWheelEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "selectAll()", 
            "stepDown()", 
            "stepUp()", 
            "clear()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QAbstractSpinBox_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QAbstractSpinBox);
    }

    static QAbstractSpinBox __getObject(void* nativeId) {
        return static_cast!(QAbstractSpinBox)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QAbstractSpinBox_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QAbstractSpinBox_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QAbstractSpinBox(nativeId, initFlags);
        QAbstractSpinBox.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("editingFinished"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("selectAll"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("stepDown"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("stepUp"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!()("clear"), index));

    }

    public alias void __isQtType_QAbstractSpinBox;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QAbstractSpinBox_editingFinished(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QAbstractSpinBox_QAbstractSpinBox_QWidget(void *d_ptr,
 void* parent0);
private extern(C) int  qtd_QAbstractSpinBox_alignment_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractSpinBox_buttonSymbols_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractSpinBox_correctionMode_const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractSpinBox_hasAcceptableInput_const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractSpinBox_hasFrame_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractSpinBox_initStyleOption_nativepointerQStyleOptionSpinBox_const(void* __this_nativeId,
 void* option0);
private extern(C) void  qtd_QAbstractSpinBox_interpretText(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractSpinBox_isAccelerated_const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractSpinBox_isReadOnly_const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractSpinBox_keyboardTracking_const(void* __this_nativeId);
private extern(C) void*  qtd_QAbstractSpinBox_lineEdit_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractSpinBox_selectAll(void* __this_nativeId);
private extern(C) void  qtd_QAbstractSpinBox_setAccelerated_bool(void* __this_nativeId,
 bool on0);
private extern(C) void  qtd_QAbstractSpinBox_setAlignment_Alignment(void* __this_nativeId,
 int flag0);
private extern(C) void  qtd_QAbstractSpinBox_setButtonSymbols_ButtonSymbols(void* __this_nativeId,
 int bs0);
private extern(C) void  qtd_QAbstractSpinBox_setCorrectionMode_CorrectionMode(void* __this_nativeId,
 int cm0);
private extern(C) void  qtd_QAbstractSpinBox_setFrame_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QAbstractSpinBox_setKeyboardTracking_bool(void* __this_nativeId,
 bool kt0);
private extern(C) void  qtd_QAbstractSpinBox_setLineEdit_QLineEdit(void* __this_nativeId,
 void* edit0);
private extern(C) void  qtd_QAbstractSpinBox_setReadOnly_bool(void* __this_nativeId,
 bool r0);
private extern(C) void  qtd_QAbstractSpinBox_setSpecialValueText_string(void* __this_nativeId,
 string txt0);
private extern(C) void  qtd_QAbstractSpinBox_setWrapping_bool(void* __this_nativeId,
 bool w0);
private extern(C) void  qtd_QAbstractSpinBox_specialValueText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QAbstractSpinBox_stepDown(void* __this_nativeId);
private extern(C) void  qtd_QAbstractSpinBox_stepUp(void* __this_nativeId);
private extern(C) void  qtd_QAbstractSpinBox_text_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QAbstractSpinBox_wrapping_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractSpinBox_changeEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractSpinBox_clear(void* __this_nativeId);
private extern(C) void  qtd_QAbstractSpinBox_closeEvent_QCloseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractSpinBox_contextMenuEvent_QContextMenuEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QAbstractSpinBox_event_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractSpinBox_fixup_nativepointerstring_const(void* __this_nativeId,
 string input0);
private extern(C) void  qtd_QAbstractSpinBox_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractSpinBox_focusOutEvent_QFocusEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractSpinBox_hideEvent_QHideEvent(void* __this_nativeId,
 void* event0);
private extern(C) void*  qtd_QAbstractSpinBox_inputMethodQuery_InputMethodQuery_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QAbstractSpinBox_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractSpinBox_keyReleaseEvent_QKeyEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractSpinBox_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QAbstractSpinBox_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractSpinBox_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractSpinBox_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractSpinBox_paintEvent_QPaintEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractSpinBox_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractSpinBox_showEvent_QShowEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QAbstractSpinBox_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QAbstractSpinBox_stepBy_int(void* __this_nativeId,
 int steps0);
private extern(C) int  qtd_QAbstractSpinBox_stepEnabled_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractSpinBox_timerEvent_QTimerEvent(void* __this_nativeId,
 void* event0);
private extern(C) int  qtd_QAbstractSpinBox_validate_nativepointerstring_nativepointerint_const(void* __this_nativeId,
 string input0,
 int * pos1);
private extern(C) void  qtd_QAbstractSpinBox_wheelEvent_QWheelEvent(void* __this_nativeId,
 void* event0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId) qtd_QAbstractSpinBox_clear_dispatch; }
extern(C) void qtd_export_QAbstractSpinBox_clear_dispatch(void *dId){
    auto d_object = cast(QAbstractSpinBox) dId;
    d_object.clear();
}

extern(C){ extern void function(void *dId, void* input0) qtd_QAbstractSpinBox_fixup_nativepointerstring_const_dispatch; }
extern(C) void qtd_export_QAbstractSpinBox_fixup_nativepointerstring_const_dispatch(void *dId, void* input0){
    auto d_object = cast(QAbstractSpinBox) dId;
    auto input0_d_qstr = QStringUtil(input0, true);
    string input0_d_ref = input0_d_qstr.toNativeString();
    d_object.fixup(input0_d_ref);
    input0_d_qstr.assign(input0_d_ref);
}

extern(C){ extern void function(void *dId, int steps0) qtd_QAbstractSpinBox_stepBy_int_dispatch; }
extern(C) void qtd_export_QAbstractSpinBox_stepBy_int_dispatch(void *dId, int steps0){
    auto d_object = cast(QAbstractSpinBox) dId;
    d_object.stepBy(steps0);
}

extern(C){ extern int function(void *dId) qtd_QAbstractSpinBox_stepEnabled_const_dispatch; }
extern(C) int qtd_export_QAbstractSpinBox_stepEnabled_const_dispatch(void *dId){
    auto d_object = cast(QAbstractSpinBox) dId;
    auto return_value = d_object.stepEnabled();
    return return_value;
}

extern(C){ extern int function(void *dId, void* input0, int * pos1) qtd_QAbstractSpinBox_validate_nativepointerstring_nativepointerint_const_dispatch; }
extern(C) int qtd_export_QAbstractSpinBox_validate_nativepointerstring_nativepointerint_const_dispatch(void *dId, void* input0, int * pos1){
    auto d_object = cast(QAbstractSpinBox) dId;
    auto input0_d_qstr = QStringUtil(input0, true);
    string input0_d_ref = input0_d_qstr.toNativeString();
    auto return_value = d_object.validate(input0_d_ref, pos1);
    input0_d_qstr.assign(input0_d_ref);
    return return_value;
}

private extern (C) void qtd_QAbstractSpinBox_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractSpinBox() {
    void*[5] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractSpinBox_clear_dispatch;
    virt_arr[1] = &qtd_export_QAbstractSpinBox_fixup_nativepointerstring_const_dispatch;
    virt_arr[2] = &qtd_export_QAbstractSpinBox_stepBy_int_dispatch;
    virt_arr[3] = &qtd_export_QAbstractSpinBox_stepEnabled_const_dispatch;
    virt_arr[4] = &qtd_export_QAbstractSpinBox_validate_nativepointerstring_nativepointerint_const_dispatch;
    qtd_QAbstractSpinBox_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QAbstractSpinBox_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractSpinBox) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QAbstractSpinBox_editingFinished_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractSpinBox) dId;
        //d_object.editingFinished_emit();
}*/

extern(C) QMetaObjectNative* qtd_QAbstractSpinBox_staticMetaObject();

extern(C) void qtd_QAbstractSpinBox_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QAbstractSpinBox_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
