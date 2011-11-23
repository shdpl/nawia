module qt.gui.QMessageBox;

public import qt.gui.QMessageBox_aux;
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
public import qt.core.QList;
public import qt.gui.QActionEvent;
public import qt.gui.QDropEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QPushButton;
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
public import qt.gui.QDialog;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QPixmap;
public import qt.gui.QAbstractButton;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QMessageBox : QDialog
{
    public enum ButtonRole {
        InvalidRole = -1,
        AcceptRole = 0,
        RejectRole = 1,
        DestructiveRole = 2,
        ActionRole = 3,
        HelpRole = 4,
        YesRole = 5,
        NoRole = 6,
        ResetRole = 7,
        ApplyRole = 8,
        NRoles = 9
    }

    alias ButtonRole.InvalidRole InvalidRole;
    alias ButtonRole.AcceptRole AcceptRole;
    alias ButtonRole.RejectRole RejectRole;
    alias ButtonRole.DestructiveRole DestructiveRole;
    alias ButtonRole.ActionRole ActionRole;
    alias ButtonRole.HelpRole HelpRole;
    alias ButtonRole.YesRole YesRole;
    alias ButtonRole.NoRole NoRole;
    alias ButtonRole.ResetRole ResetRole;
    alias ButtonRole.ApplyRole ApplyRole;
    alias ButtonRole.NRoles NRoles;

    public enum StandardButton {
        NoButton = 0,
        Ok = 1024,
        Save = 2048,
        SaveAll = 4096,
        Open = 8192,
        Yes = 16384,
        YesToAll = 32768,
        No = 65536,
        NoToAll = 131072,
        Abort = 262144,
        Retry = 524288,
        Ignore = 1048576,
        Close = 2097152,
        Cancel = 4194304,
        Discard = 8388608,
        Help = 16777216,
        Apply = 33554432,
        Reset = 67108864,
        RestoreDefaults = 134217728,
        Default = 256,
        Escape = 512,
        FlagMask = 768,
        ButtonMask = 769
    }

    alias StandardButton.NoButton NoButton;
    alias StandardButton.Ok Ok;
    alias StandardButton.Save Save;
    alias StandardButton.SaveAll SaveAll;
    alias StandardButton.Open Open;
    alias StandardButton.Yes Yes;
    alias StandardButton.YesToAll YesToAll;
    alias StandardButton.No No;
    alias StandardButton.NoToAll NoToAll;
    alias StandardButton.Abort Abort;
    alias StandardButton.Retry Retry;
    alias StandardButton.Ignore Ignore;
    alias StandardButton.Close Close;
    alias StandardButton.Cancel Cancel;
    alias StandardButton.Discard Discard;
    alias StandardButton.Help Help;
    alias StandardButton.Apply Apply;
    alias StandardButton.Reset Reset;
    alias StandardButton.RestoreDefaults RestoreDefaults;
    alias StandardButton.Default Default;
    alias StandardButton.Escape Escape;
    alias StandardButton.FlagMask FlagMask;
    alias StandardButton.ButtonMask ButtonMask;

    public enum Icon {
        NoIcon = 0,
        Information = 1,
        Warning = 2,
        Critical = 3,
        Question = 4
    }

    alias Icon.NoIcon NoIcon;
    alias Icon.Information Information;
    alias Icon.Warning Warning;
    alias Icon.Critical Critical;
    alias Icon.Question Question;


    private static const string[] __signalSignatures = [
            "buttonClicked(QAbstractButton*)"    ];

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

    protected final void buttonClicked(QAbstractButton button) {
        qtd_QMessageBox_buttonClicked_QAbstractButton(qtdNativeId, button is null ? null : button.qtdNativeId);
    }
// Functions

    public this(QMessageBox.Icon icon, string title, string text, int buttons = 0, QWidget parent_ = null, int flags = 259) {
        void* ret = qtd_QMessageBox_QMessageBox_Icon_string_string_StandardButtons_QWidget_WindowFlags(cast(void*) this, icon, title, text, buttons, parent_ is null ? null : parent_.qtdNativeId, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QWidget parent_ = null) {
        void* ret = qtd_QMessageBox_QMessageBox_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addButton(QAbstractButton button, QMessageBox.ButtonRole role) {
        qtd_QMessageBox_addButton_QAbstractButton_ButtonRole(qtdNativeId, button is null ? null : button.qtdNativeId, role);
    }

    public final QPushButton addButton(QMessageBox.StandardButton button) {
        void *ret = qtd_QMessageBox_addButton_StandardButton(qtdNativeId, button);
        QPushButton __d_return_value = QPushButton.__getObject(ret);
        return __d_return_value;
    }

    public final QPushButton addButton(string text, QMessageBox.ButtonRole role) {
        void *ret = qtd_QMessageBox_addButton_string_ButtonRole(qtdNativeId, text, role);
        QPushButton __d_return_value = QPushButton.__getObject(ret);
        return __d_return_value;
    }

    public final QAbstractButton button(QMessageBox.StandardButton which) const {
        void *ret = qtd_QMessageBox_button_StandardButton_const(qtdNativeId, which);
        QAbstractButton __d_return_value = QAbstractButton.__getObject(ret);
        return __d_return_value;
    }

    public final QMessageBox.ButtonRole buttonRole(QAbstractButton button) const {
        return cast(QMessageBox.ButtonRole) qtd_QMessageBox_buttonRole_QAbstractButton_const(qtdNativeId, button is null ? null : button.qtdNativeId);
    }

    public final QList!(QAbstractButton) buttons() const {
        auto res = QList!(QAbstractButton).opCall();
        qtd_QMessageBox_buttons_const(qtdNativeId, &res);
        return res;
    }

    public final QAbstractButton clickedButton() const {
        void *ret = qtd_QMessageBox_clickedButton_const(qtdNativeId);
        QAbstractButton __d_return_value = QAbstractButton.__getObject(ret);
        return __d_return_value;
    }

    public final QPushButton defaultButton() const {
        void *ret = qtd_QMessageBox_defaultButton_const(qtdNativeId);
        QPushButton __d_return_value = QPushButton.__getObject(ret);
        return __d_return_value;
    }

    public final string detailedText() const {
        string res;
        qtd_QMessageBox_detailedText_const(qtdNativeId, &res);
        return res;
    }

    public final QAbstractButton escapeButton() const {
        void *ret = qtd_QMessageBox_escapeButton_const(qtdNativeId);
        QAbstractButton __d_return_value = QAbstractButton.__getObject(ret);
        return __d_return_value;
    }

    public final QMessageBox.Icon icon() const {
        return cast(QMessageBox.Icon) qtd_QMessageBox_icon_const(qtdNativeId);
    }

    public final QPixmap iconPixmap() const {
        void* ret = qtd_QMessageBox_iconPixmap_const(qtdNativeId);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public final string informativeText() const {
        string res;
        qtd_QMessageBox_informativeText_const(qtdNativeId, &res);
        return res;
    }

    public final void open(QObject receiver, const(char*) member) {
        qtd_QMessageBox_open_QObject_nativepointerchar(qtdNativeId, receiver is null ? null : receiver.qtdNativeId, member);
    }

    public final void removeButton(QAbstractButton button) {
        qtd_QMessageBox_removeButton_QAbstractButton(qtdNativeId, button is null ? null : button.qtdNativeId);
    }

    public final void setDefaultButton(QMessageBox.StandardButton button) {
        qtd_QMessageBox_setDefaultButton_StandardButton(qtdNativeId, button);
    }

    public final void setDefaultButton(QPushButton button) {
        qtd_QMessageBox_setDefaultButton_QPushButton(qtdNativeId, button is null ? null : button.qtdNativeId);
    }

    public final void setDetailedText(string text) {
        qtd_QMessageBox_setDetailedText_string(qtdNativeId, text);
    }

    public final void setEscapeButton(QAbstractButton button) {
        qtd_QMessageBox_setEscapeButton_QAbstractButton(qtdNativeId, button is null ? null : button.qtdNativeId);
    }

    public final void setEscapeButton(QMessageBox.StandardButton button) {
        qtd_QMessageBox_setEscapeButton_StandardButton(qtdNativeId, button);
    }

    public final void setIcon(QMessageBox.Icon arg__1) {
        qtd_QMessageBox_setIcon_Icon(qtdNativeId, arg__1);
    }

    public final void setIconPixmap(const(QPixmap) pixmap) {
        qtd_QMessageBox_setIconPixmap_QPixmap(qtdNativeId, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId);
    }

    public final void setInformativeText(string text) {
        qtd_QMessageBox_setInformativeText_string(qtdNativeId, text);
    }

    public final void setStandardButtons(int buttons) {
        qtd_QMessageBox_setStandardButtons_StandardButtons(qtdNativeId, buttons);
    }

    public final void setText(string text) {
        qtd_QMessageBox_setText_string(qtdNativeId, text);
    }

    public final void setTextFormat(Qt.TextFormat format) {
        qtd_QMessageBox_setTextFormat_TextFormat(qtdNativeId, format);
    }

    public final QMessageBox.StandardButton standardButton(QAbstractButton button) const {
        return cast(QMessageBox.StandardButton) qtd_QMessageBox_standardButton_QAbstractButton_const(qtdNativeId, button is null ? null : button.qtdNativeId);
    }

    public final int standardButtons() const {
        return qtd_QMessageBox_standardButtons_const(qtdNativeId);
    }

    public final string text() const {
        string res;
        qtd_QMessageBox_text_const(qtdNativeId, &res);
        return res;
    }

    public final Qt.TextFormat textFormat() const {
        return cast(Qt.TextFormat) qtd_QMessageBox_textFormat_const(qtdNativeId);
    }

    protected void changeEvent(QEvent event) {
        qtd_QMessageBox_changeEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void closeEvent(QCloseEvent event) {
        qtd_QMessageBox_closeEvent_QCloseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QMessageBox_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void keyPressEvent(QKeyEvent event) {
        qtd_QMessageBox_keyPressEvent_QKeyEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent event) {
        qtd_QMessageBox_resizeEvent_QResizeEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void showEvent(QShowEvent event) {
        qtd_QMessageBox_showEvent_QShowEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QMessageBox_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    public static void about(QWidget parent_, string title, string text) {
        qtd_QMessageBox_about_QWidget_string_string(parent_ is null ? null : parent_.qtdNativeId, title, text);
    }

    public static void aboutQt(QWidget parent_, string title = "") {
        qtd_QMessageBox_aboutQt_QWidget_string(parent_ is null ? null : parent_.qtdNativeId, title);
    }

    public static QMessageBox.StandardButton critical(QWidget parent_, string title, string text, int buttons = 1024, QMessageBox.StandardButton defaultButton = QMessageBox.StandardButton.NoButton) {
        return cast(QMessageBox.StandardButton) qtd_QMessageBox_critical_QWidget_string_string_StandardButtons_StandardButton(parent_ is null ? null : parent_.qtdNativeId, title, text, buttons, defaultButton);
    }

    public static int critical(QWidget parent_, string title, string text, QMessageBox.StandardButton button0, QMessageBox.StandardButton button1) {
        return qtd_QMessageBox_critical_QWidget_string_string_StandardButton_StandardButton(parent_ is null ? null : parent_.qtdNativeId, title, text, button0, button1);
    }

    public static QMessageBox.StandardButton information(QWidget parent_, string title, string text, int buttons = 1024, QMessageBox.StandardButton defaultButton = QMessageBox.StandardButton.NoButton) {
        return cast(QMessageBox.StandardButton) qtd_QMessageBox_information_QWidget_string_string_StandardButtons_StandardButton(parent_ is null ? null : parent_.qtdNativeId, title, text, buttons, defaultButton);
    }

    public static QMessageBox.StandardButton information(QWidget parent_, string title, string text, QMessageBox.StandardButton button0, QMessageBox.StandardButton button1 = QMessageBox.StandardButton.NoButton) {
        return cast(QMessageBox.StandardButton) qtd_QMessageBox_information_QWidget_string_string_StandardButton_StandardButton(parent_ is null ? null : parent_.qtdNativeId, title, text, button0, button1);
    }

    public static QMessageBox.StandardButton question(QWidget parent_, string title, string text, int buttons = 1024, QMessageBox.StandardButton defaultButton = QMessageBox.StandardButton.NoButton) {
        return cast(QMessageBox.StandardButton) qtd_QMessageBox_question_QWidget_string_string_StandardButtons_StandardButton(parent_ is null ? null : parent_.qtdNativeId, title, text, buttons, defaultButton);
    }

    public static int question(QWidget parent_, string title, string text, QMessageBox.StandardButton button0, QMessageBox.StandardButton button1) {
        return qtd_QMessageBox_question_QWidget_string_string_StandardButton_StandardButton(parent_ is null ? null : parent_.qtdNativeId, title, text, button0, button1);
    }

    public static QMessageBox.StandardButton warning(QWidget parent_, string title, string text, int buttons = 1024, QMessageBox.StandardButton defaultButton = QMessageBox.StandardButton.NoButton) {
        return cast(QMessageBox.StandardButton) qtd_QMessageBox_warning_QWidget_string_string_StandardButtons_StandardButton(parent_ is null ? null : parent_.qtdNativeId, title, text, buttons, defaultButton);
    }

    public static int warning(QWidget parent_, string title, string text, QMessageBox.StandardButton button0, QMessageBox.StandardButton button1) {
        return qtd_QMessageBox_warning_QWidget_string_string_StandardButton_StandardButton(parent_ is null ? null : parent_.qtdNativeId, title, text, button0, button1);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QMessageBox_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QMessageBox);
    }

    static QMessageBox __getObject(void* nativeId) {
        return static_cast!(QMessageBox)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QMessageBox_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QMessageBox_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QMessageBox(nativeId, initFlags);
        QMessageBox.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QAbstractButton)("buttonClicked"), index));

    }

    public alias void __isQtType_QMessageBox;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QMessageBox_buttonClicked_QAbstractButton(void* __this_nativeId,
 void* button0);

// C wrappers
private extern(C) void* qtd_QMessageBox_QMessageBox_Icon_string_string_StandardButtons_QWidget_WindowFlags(void *d_ptr,
 int icon0,
 string title1,
 string text2,
 int buttons3,
 void* parent4,
 int flags5);
private extern(C) void* qtd_QMessageBox_QMessageBox_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QMessageBox_addButton_QAbstractButton_ButtonRole(void* __this_nativeId,
 void* button0,
 int role1);
private extern(C) void*  qtd_QMessageBox_addButton_StandardButton(void* __this_nativeId,
 int button0);
private extern(C) void*  qtd_QMessageBox_addButton_string_ButtonRole(void* __this_nativeId,
 string text0,
 int role1);
private extern(C) void*  qtd_QMessageBox_button_StandardButton_const(void* __this_nativeId,
 int which0);
private extern(C) int  qtd_QMessageBox_buttonRole_QAbstractButton_const(void* __this_nativeId,
 void* button0);
private extern(C) void  qtd_QMessageBox_buttons_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QMessageBox_clickedButton_const(void* __this_nativeId);
private extern(C) void*  qtd_QMessageBox_defaultButton_const(void* __this_nativeId);
private extern(C) void  qtd_QMessageBox_detailedText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QMessageBox_escapeButton_const(void* __this_nativeId);
private extern(C) int  qtd_QMessageBox_icon_const(void* __this_nativeId);
private extern(C) void*  qtd_QMessageBox_iconPixmap_const(void* __this_nativeId);
private extern(C) void  qtd_QMessageBox_informativeText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QMessageBox_open_QObject_nativepointerchar(void* __this_nativeId,
 void* receiver0,
 const (char*) member1);
private extern(C) void  qtd_QMessageBox_removeButton_QAbstractButton(void* __this_nativeId,
 void* button0);
private extern(C) void  qtd_QMessageBox_setDefaultButton_StandardButton(void* __this_nativeId,
 int button0);
private extern(C) void  qtd_QMessageBox_setDefaultButton_QPushButton(void* __this_nativeId,
 void* button0);
private extern(C) void  qtd_QMessageBox_setDetailedText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QMessageBox_setEscapeButton_QAbstractButton(void* __this_nativeId,
 void* button0);
private extern(C) void  qtd_QMessageBox_setEscapeButton_StandardButton(void* __this_nativeId,
 int button0);
private extern(C) void  qtd_QMessageBox_setIcon_Icon(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QMessageBox_setIconPixmap_QPixmap(void* __this_nativeId,
 void* pixmap0);
private extern(C) void  qtd_QMessageBox_setInformativeText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QMessageBox_setStandardButtons_StandardButtons(void* __this_nativeId,
 int buttons0);
private extern(C) void  qtd_QMessageBox_setText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QMessageBox_setTextFormat_TextFormat(void* __this_nativeId,
 int format0);
private extern(C) int  qtd_QMessageBox_standardButton_QAbstractButton_const(void* __this_nativeId,
 void* button0);
private extern(C) int  qtd_QMessageBox_standardButtons_const(void* __this_nativeId);
private extern(C) void  qtd_QMessageBox_text_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QMessageBox_textFormat_const(void* __this_nativeId);
private extern(C) void  qtd_QMessageBox_changeEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QMessageBox_closeEvent_QCloseEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QMessageBox_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QMessageBox_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QMessageBox_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QMessageBox_showEvent_QShowEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QMessageBox_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QMessageBox_about_QWidget_string_string(void* parent0,
 string title1,
 string text2);
private extern(C) void  qtd_QMessageBox_aboutQt_QWidget_string(void* parent0,
 string title1);
private extern(C) int  qtd_QMessageBox_critical_QWidget_string_string_StandardButtons_StandardButton(void* parent0,
 string title1,
 string text2,
 int buttons3,
 int defaultButton4);
private extern(C) int  qtd_QMessageBox_critical_QWidget_string_string_StandardButton_StandardButton(void* parent0,
 string title1,
 string text2,
 int button03,
 int button14);
private extern(C) int  qtd_QMessageBox_information_QWidget_string_string_StandardButtons_StandardButton(void* parent0,
 string title1,
 string text2,
 int buttons3,
 int defaultButton4);
private extern(C) int  qtd_QMessageBox_information_QWidget_string_string_StandardButton_StandardButton(void* parent0,
 string title1,
 string text2,
 int button03,
 int button14);
private extern(C) int  qtd_QMessageBox_question_QWidget_string_string_StandardButtons_StandardButton(void* parent0,
 string title1,
 string text2,
 int buttons3,
 int defaultButton4);
private extern(C) int  qtd_QMessageBox_question_QWidget_string_string_StandardButton_StandardButton(void* parent0,
 string title1,
 string text2,
 int button03,
 int button14);
private extern(C) int  qtd_QMessageBox_warning_QWidget_string_string_StandardButtons_StandardButton(void* parent0,
 string title1,
 string text2,
 int buttons3,
 int defaultButton4);
private extern(C) int  qtd_QMessageBox_warning_QWidget_string_string_StandardButton_StandardButton(void* parent0,
 string title1,
 string text2,
 int button03,
 int button14);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QMessageBox_initCallBacks(void* virtuals);

extern(C) void static_init_QMessageBox() {
    qtd_QMessageBox_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QMessageBox_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QMessageBox) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QMessageBox_accepted_handle(void* dId, void** args) {
        auto d_object = cast(QMessageBox) dId;
        //d_object.accepted_emit();
}*/
/*private extern(C) void qtd_QMessageBox_finished_handle(void* dId, void** args) {
        auto d_object = cast(QMessageBox) dId;
        auto result0 = *(cast(int*)args[1]);
        //d_object.finished_emit(result0);
}*/
/*private extern(C) void qtd_QMessageBox_rejected_handle(void* dId, void** args) {
        auto d_object = cast(QMessageBox) dId;
        //d_object.rejected_emit();
}*/
/*private extern(C) void qtd_QMessageBox_buttonClicked_handle(void* dId, void** args) {
        auto d_object = cast(QMessageBox) dId;
        scope button0 = new QAbstractButton_ConcreteWrapper(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.buttonClicked_emit(button0);
}*/

extern(C) QMetaObjectNative* qtd_QMessageBox_staticMetaObject();

extern(C) void qtd_QMessageBox_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QMessageBox_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
