module qt.gui.QDialogButtonBox;

public import qt.gui.QDialogButtonBox_aux;
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
public import qt.gui.QDropEvent;
public import qt.gui.QActionEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QPushButton;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QAbstractButton;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDialogButtonBox : QWidget
{
    public enum ButtonLayout {
        WinLayout = 0,
        MacLayout = 1,
        KdeLayout = 2,
        GnomeLayout = 3
    }

    alias ButtonLayout.WinLayout WinLayout;
    alias ButtonLayout.MacLayout MacLayout;
    alias ButtonLayout.KdeLayout KdeLayout;
    alias ButtonLayout.GnomeLayout GnomeLayout;

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


    private static const string[] __signalSignatures = [
            "accepted()", 
            "clicked(QAbstractButton*)", 
            "helpRequested()", 
            "rejected()"    ];

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

    protected final void accepted() {
        qtd_QDialogButtonBox_accepted(qtdNativeId);
    }

    protected final void clicked(QAbstractButton button) {
        qtd_QDialogButtonBox_clicked_QAbstractButton(qtdNativeId, button is null ? null : button.qtdNativeId);
    }

    protected final void helpRequested() {
        qtd_QDialogButtonBox_helpRequested(qtdNativeId);
    }

    protected final void rejected() {
        qtd_QDialogButtonBox_rejected(qtdNativeId);
    }
// Functions

    public this(int buttons, Qt.Orientation orientation = Qt.Orientation.Horizontal, QWidget parent_ = null) {
        void* ret = qtd_QDialogButtonBox_QDialogButtonBox_StandardButtons_Orientation_QWidget(cast(void*) this, buttons, orientation, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QWidget parent_ = null) {
        void* ret = qtd_QDialogButtonBox_QDialogButtonBox_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(Qt.Orientation orientation, QWidget parent_ = null) {
        void* ret = qtd_QDialogButtonBox_QDialogButtonBox_Orientation_QWidget(cast(void*) this, orientation, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addButton(QAbstractButton button, QDialogButtonBox.ButtonRole role) {
        qtd_QDialogButtonBox_addButton_QAbstractButton_ButtonRole(qtdNativeId, button is null ? null : button.qtdNativeId, role);
    }

    public final QPushButton addButton(QDialogButtonBox.StandardButton button) {
        void *ret = qtd_QDialogButtonBox_addButton_StandardButton(qtdNativeId, button);
        QPushButton __d_return_value = QPushButton.__getObject(ret);
        return __d_return_value;
    }

    public final QPushButton addButton(string text, QDialogButtonBox.ButtonRole role) {
        void *ret = qtd_QDialogButtonBox_addButton_string_ButtonRole(qtdNativeId, text, role);
        QPushButton __d_return_value = QPushButton.__getObject(ret);
        return __d_return_value;
    }

    public final QPushButton button(QDialogButtonBox.StandardButton which) const {
        void *ret = qtd_QDialogButtonBox_button_StandardButton_const(qtdNativeId, which);
        QPushButton __d_return_value = QPushButton.__getObject(ret);
        return __d_return_value;
    }

    public final QDialogButtonBox.ButtonRole buttonRole(QAbstractButton button) const {
        return cast(QDialogButtonBox.ButtonRole) qtd_QDialogButtonBox_buttonRole_QAbstractButton_const(qtdNativeId, button is null ? null : button.qtdNativeId);
    }

    public final QList!(QAbstractButton) buttons() const {
        auto res = QList!(QAbstractButton).opCall();
        qtd_QDialogButtonBox_buttons_const(qtdNativeId, &res);
        return res;
    }

    public final bool centerButtons() const {
        return qtd_QDialogButtonBox_centerButtons_const(qtdNativeId);
    }

    public final void clear() {
        qtd_QDialogButtonBox_clear(qtdNativeId);
    }

    public final Qt.Orientation orientation() const {
        return cast(Qt.Orientation) qtd_QDialogButtonBox_orientation_const(qtdNativeId);
    }

    public final void removeButton(QAbstractButton button) {
        qtd_QDialogButtonBox_removeButton_QAbstractButton(qtdNativeId, button is null ? null : button.qtdNativeId);
    }

    public final void setCenterButtons(bool center) {
        qtd_QDialogButtonBox_setCenterButtons_bool(qtdNativeId, center);
    }

    public final void setOrientation(Qt.Orientation orientation) {
        qtd_QDialogButtonBox_setOrientation_Orientation(qtdNativeId, orientation);
    }

    public final void setStandardButtons(int buttons) {
        qtd_QDialogButtonBox_setStandardButtons_StandardButtons(qtdNativeId, buttons);
    }

    public final QDialogButtonBox.StandardButton standardButton(QAbstractButton button) const {
        return cast(QDialogButtonBox.StandardButton) qtd_QDialogButtonBox_standardButton_QAbstractButton_const(qtdNativeId, button is null ? null : button.qtdNativeId);
    }

    public final int standardButtons() const {
        return qtd_QDialogButtonBox_standardButtons_const(qtdNativeId);
    }

    protected void changeEvent(QEvent event) {
        qtd_QDialogButtonBox_changeEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public bool event(QEvent event) {
        return qtd_QDialogButtonBox_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QDialogButtonBox_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QDialogButtonBox);
    }

    static QDialogButtonBox __getObject(void* nativeId) {
        return static_cast!(QDialogButtonBox)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QDialogButtonBox_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QDialogButtonBox_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QDialogButtonBox(nativeId, initFlags);
        QDialogButtonBox.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("accepted"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(QAbstractButton)("clicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!()("helpRequested"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!()("rejected"), index));

    }

    public alias void __isQtType_QDialogButtonBox;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QDialogButtonBox_accepted(void* __this_nativeId);
private extern(C) void  qtd_QDialogButtonBox_clicked_QAbstractButton(void* __this_nativeId,
 void* button0);
private extern(C) void  qtd_QDialogButtonBox_helpRequested(void* __this_nativeId);
private extern(C) void  qtd_QDialogButtonBox_rejected(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QDialogButtonBox_QDialogButtonBox_StandardButtons_Orientation_QWidget(void *d_ptr,
 int buttons0,
 int orientation1,
 void* parent2);
private extern(C) void* qtd_QDialogButtonBox_QDialogButtonBox_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QDialogButtonBox_QDialogButtonBox_Orientation_QWidget(void *d_ptr,
 int orientation0,
 void* parent1);
private extern(C) void  qtd_QDialogButtonBox_addButton_QAbstractButton_ButtonRole(void* __this_nativeId,
 void* button0,
 int role1);
private extern(C) void*  qtd_QDialogButtonBox_addButton_StandardButton(void* __this_nativeId,
 int button0);
private extern(C) void*  qtd_QDialogButtonBox_addButton_string_ButtonRole(void* __this_nativeId,
 string text0,
 int role1);
private extern(C) void*  qtd_QDialogButtonBox_button_StandardButton_const(void* __this_nativeId,
 int which0);
private extern(C) int  qtd_QDialogButtonBox_buttonRole_QAbstractButton_const(void* __this_nativeId,
 void* button0);
private extern(C) void  qtd_QDialogButtonBox_buttons_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QDialogButtonBox_centerButtons_const(void* __this_nativeId);
private extern(C) void  qtd_QDialogButtonBox_clear(void* __this_nativeId);
private extern(C) int  qtd_QDialogButtonBox_orientation_const(void* __this_nativeId);
private extern(C) void  qtd_QDialogButtonBox_removeButton_QAbstractButton(void* __this_nativeId,
 void* button0);
private extern(C) void  qtd_QDialogButtonBox_setCenterButtons_bool(void* __this_nativeId,
 bool center0);
private extern(C) void  qtd_QDialogButtonBox_setOrientation_Orientation(void* __this_nativeId,
 int orientation0);
private extern(C) void  qtd_QDialogButtonBox_setStandardButtons_StandardButtons(void* __this_nativeId,
 int buttons0);
private extern(C) int  qtd_QDialogButtonBox_standardButton_QAbstractButton_const(void* __this_nativeId,
 void* button0);
private extern(C) int  qtd_QDialogButtonBox_standardButtons_const(void* __this_nativeId);
private extern(C) void  qtd_QDialogButtonBox_changeEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QDialogButtonBox_event_QEvent(void* __this_nativeId,
 void* event0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QDialogButtonBox_initCallBacks(void* virtuals);

extern(C) void static_init_QDialogButtonBox() {
    qtd_QDialogButtonBox_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QDialogButtonBox_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QDialogButtonBox) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QDialogButtonBox_accepted_handle(void* dId, void** args) {
        auto d_object = cast(QDialogButtonBox) dId;
        //d_object.accepted_emit();
}*/
/*private extern(C) void qtd_QDialogButtonBox_clicked_handle(void* dId, void** args) {
        auto d_object = cast(QDialogButtonBox) dId;
        scope button0 = new QAbstractButton_ConcreteWrapper(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.clicked_emit(button0);
}*/
/*private extern(C) void qtd_QDialogButtonBox_helpRequested_handle(void* dId, void** args) {
        auto d_object = cast(QDialogButtonBox) dId;
        //d_object.helpRequested_emit();
}*/
/*private extern(C) void qtd_QDialogButtonBox_rejected_handle(void* dId, void** args) {
        auto d_object = cast(QDialogButtonBox) dId;
        //d_object.rejected_emit();
}*/

extern(C) QMetaObjectNative* qtd_QDialogButtonBox_staticMetaObject();

extern(C) void qtd_QDialogButtonBox_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QDialogButtonBox_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
