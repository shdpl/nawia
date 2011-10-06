module qt.gui.QSystemTrayIcon;

public import qt.gui.QSystemTrayIcon_aux;
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
public import qt.gui.QMenu;
public import qt.core.QObject;
public import qt.gui.QIcon;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QRect;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSystemTrayIcon : QObject
{
    public enum MessageIcon {
        NoIcon = 0,
        Information = 1,
        Warning = 2,
        Critical = 3
    }

    alias MessageIcon.NoIcon NoIcon;
    alias MessageIcon.Information Information;
    alias MessageIcon.Warning Warning;
    alias MessageIcon.Critical Critical;

    public enum ActivationReason {
        Unknown = 0,
        Context = 1,
        DoubleClick = 2,
        Trigger = 3,
        MiddleClick = 4
    }

    alias ActivationReason.Unknown Unknown;
    alias ActivationReason.Context Context;
    alias ActivationReason.DoubleClick DoubleClick;
    alias ActivationReason.Trigger Trigger;
    alias ActivationReason.MiddleClick MiddleClick;


Object __rcContextMenu = null;

    private static const string[] __signalSignatures = [
            "activated(QSystemTrayIcon::ActivationReason)", 
            "messageClicked()"    ];

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

    protected final void activated(QSystemTrayIcon.ActivationReason reason) {
        qtd_QSystemTrayIcon_activated_ActivationReason(qtdNativeId, reason);
    }

    protected final void messageClicked() {
        qtd_QSystemTrayIcon_messageClicked(qtdNativeId);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QSystemTrayIcon_QSystemTrayIcon_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QIcon) icon, QObject parent_ = null) {
        void* ret = qtd_QSystemTrayIcon_QSystemTrayIcon_QIcon_QObject(cast(void*) this, icon is null ? null : (cast(QIcon)icon).qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QMenu contextMenu() const {
        void *ret = qtd_QSystemTrayIcon_contextMenu_const(qtdNativeId);
        QMenu __d_return_value = QMenu.__getObject(ret);
        return __d_return_value;
    }

    public final QRect geometry() const {
        QRect res;
        qtd_QSystemTrayIcon_geometry_const(qtdNativeId, &res);
        return res;
    }

    public final void hide() {
        qtd_QSystemTrayIcon_hide(qtdNativeId);
    }

    public final QIcon icon() const {
        void* ret = qtd_QSystemTrayIcon_icon_const(qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final bool isVisible() const {
        return qtd_QSystemTrayIcon_isVisible_const(qtdNativeId);
    }

    public final void setContextMenu(QMenu menu) {
        {
            __rcContextMenu = cast(Object) menu;
        }
        qtd_QSystemTrayIcon_setContextMenu_QMenu(qtdNativeId, menu is null ? null : menu.qtdNativeId);
    }

    public final void setIcon(const(QIcon) icon) {
        qtd_QSystemTrayIcon_setIcon_QIcon(qtdNativeId, icon is null ? null : (cast(QIcon)icon).qtdNativeId);
    }

    public final void setToolTip(string tip) {
        qtd_QSystemTrayIcon_setToolTip_string(qtdNativeId, tip);
    }

    public final void setVisible(bool visible) {
        qtd_QSystemTrayIcon_setVisible_bool(qtdNativeId, visible);
    }

    public final void show() {
        qtd_QSystemTrayIcon_show(qtdNativeId);
    }

    public final void showMessage(string title, string msg, QSystemTrayIcon.MessageIcon icon = QSystemTrayIcon.MessageIcon.Information, int msecs = 10000) {
        qtd_QSystemTrayIcon_showMessage_string_string_MessageIcon_int(qtdNativeId, title, msg, icon, msecs);
    }

    public final string toolTip() const {
        string res;
        qtd_QSystemTrayIcon_toolTip_const(qtdNativeId, &res);
        return res;
    }

    public bool event(QEvent event) {
        return qtd_QSystemTrayIcon_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public static bool isSystemTrayAvailable() {
        return qtd_QSystemTrayIcon_isSystemTrayAvailable();
    }

    public static bool supportsMessages() {
        return qtd_QSystemTrayIcon_supportsMessages();
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "hide()", 
            "setVisible(bool)", 
            "show()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QSystemTrayIcon_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QSystemTrayIcon);
    }

    static QSystemTrayIcon __getObject(void* nativeId) {
        return static_cast!(QSystemTrayIcon)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QSystemTrayIcon_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QSystemTrayIcon_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QSystemTrayIcon(nativeId, initFlags);
        QSystemTrayIcon.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QSystemTrayIcon.ActivationReason)("activated"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!()("messageClicked"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("hide"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setVisible"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("show"), index));

    }

    public alias void __isQtType_QSystemTrayIcon;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QSystemTrayIcon_activated_ActivationReason(void* __this_nativeId,
 int reason0);
private extern(C) void  qtd_QSystemTrayIcon_messageClicked(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QSystemTrayIcon_QSystemTrayIcon_QObject(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QSystemTrayIcon_QSystemTrayIcon_QIcon_QObject(void *d_ptr,
 void* icon0,
 void* parent1);
private extern(C) void*  qtd_QSystemTrayIcon_contextMenu_const(void* __this_nativeId);
private extern(C) void  qtd_QSystemTrayIcon_geometry_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void  qtd_QSystemTrayIcon_hide(void* __this_nativeId);
private extern(C) void*  qtd_QSystemTrayIcon_icon_const(void* __this_nativeId);
private extern(C) bool  qtd_QSystemTrayIcon_isVisible_const(void* __this_nativeId);
private extern(C) void  qtd_QSystemTrayIcon_setContextMenu_QMenu(void* __this_nativeId,
 void* menu0);
private extern(C) void  qtd_QSystemTrayIcon_setIcon_QIcon(void* __this_nativeId,
 void* icon0);
private extern(C) void  qtd_QSystemTrayIcon_setToolTip_string(void* __this_nativeId,
 string tip0);
private extern(C) void  qtd_QSystemTrayIcon_setVisible_bool(void* __this_nativeId,
 bool visible0);
private extern(C) void  qtd_QSystemTrayIcon_show(void* __this_nativeId);
private extern(C) void  qtd_QSystemTrayIcon_showMessage_string_string_MessageIcon_int(void* __this_nativeId,
 string title0,
 string msg1,
 int icon2,
 int msecs3);
private extern(C) void  qtd_QSystemTrayIcon_toolTip_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QSystemTrayIcon_event_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QSystemTrayIcon_isSystemTrayAvailable();
private extern(C) bool  qtd_QSystemTrayIcon_supportsMessages();
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QSystemTrayIcon_initCallBacks(void* virtuals);

extern(C) void static_init_QSystemTrayIcon() {
    qtd_QSystemTrayIcon_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QSystemTrayIcon_activated_handle(void* dId, void** args) {
        auto d_object = cast(QSystemTrayIcon) dId;
        auto reason0 = *(cast(QSystemTrayIcon.ActivationReason*)args[1]);
        //d_object.activated_emit(reason0);
}*/
/*private extern(C) void qtd_QSystemTrayIcon_messageClicked_handle(void* dId, void** args) {
        auto d_object = cast(QSystemTrayIcon) dId;
        //d_object.messageClicked_emit();
}*/

extern(C) QMetaObjectNative* qtd_QSystemTrayIcon_staticMetaObject();

extern(C) void qtd_QSystemTrayIcon_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QSystemTrayIcon_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
