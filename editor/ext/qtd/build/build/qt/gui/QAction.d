module qt.gui.QAction;

public import qt.gui.QAction_aux;
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
public import qt.gui.QKeySequence;
public import qt.gui.QMenu;
public import qt.core.QList;
public import qt.core.QObject;
public import qt.gui.QIcon;
public import qt.gui.QFont;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QActionGroup;
public import qt.core.QChildEvent;
public import qt.core.QVariant;
public import qt.gui.QGraphicsWidget;
public import qt.gui.QWidget;
public import qt.gui.QKeySequence;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QAction : QObject
{
    public enum ActionEvent {
        Trigger = 0,
        Hover = 1
    }

    alias ActionEvent.Trigger Trigger;
    alias ActionEvent.Hover Hover;

    public enum MenuRole {
        NoRole = 0,
        TextHeuristicRole = 1,
        ApplicationSpecificRole = 2,
        AboutQtRole = 3,
        AboutRole = 4,
        PreferencesRole = 5,
        QuitRole = 6
    }

    alias MenuRole.NoRole NoRole;
    alias MenuRole.TextHeuristicRole TextHeuristicRole;
    alias MenuRole.ApplicationSpecificRole ApplicationSpecificRole;
    alias MenuRole.AboutQtRole AboutQtRole;
    alias MenuRole.AboutRole AboutRole;
    alias MenuRole.PreferencesRole PreferencesRole;
    alias MenuRole.QuitRole QuitRole;


Object __rcMenu = null;

    private static const string[] __signalSignatures = [
            "changed()", 
            "hovered()", 
            "toggled(bool)", 
            "triggered(bool)", 
            "triggered()"    ];

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

    protected final void changed() {
        qtd_QAction_changed(qtdNativeId);
    }

    protected final void hovered() {
        qtd_QAction_hovered(qtdNativeId);
    }

    protected final void toggled(bool arg__1) {
        qtd_QAction_toggled_bool(qtdNativeId, arg__1);
    }

    protected final void triggered(bool checked = false) {
        qtd_QAction_triggered_bool(qtdNativeId, checked);
    }
// Functions

    public this(QObject parent_) {
        void* ret = qtd_QAction_QAction_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QIcon) icon, string text, QObject parent_) {
        void* ret = qtd_QAction_QAction_QIcon_string_QObject(cast(void*) this, icon is null ? null : (cast(QIcon)icon).qtdNativeId, text, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string text, QObject parent_) {
        void* ret = qtd_QAction_QAction_string_QObject(cast(void*) this, text, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QActionGroup actionGroup() const {
        void *ret = qtd_QAction_actionGroup_const(qtdNativeId);
        QActionGroup __d_return_value = QActionGroup.__getObject(ret);
        return __d_return_value;
    }

    public final void activate(QAction.ActionEvent event) {
        qtd_QAction_activate_ActionEvent(qtdNativeId, event);
    }

    public final QList!(QGraphicsWidget) associatedGraphicsWidgets() const {
        auto res = QList!(QGraphicsWidget).opCall();
        qtd_QAction_associatedGraphicsWidgets_const(qtdNativeId, &res);
        return res;
    }

    public final QList!(QWidget) associatedWidgets() const {
        auto res = QList!(QWidget).opCall();
        qtd_QAction_associatedWidgets_const(qtdNativeId, &res);
        return res;
    }

    public final bool autoRepeat() const {
        return qtd_QAction_autoRepeat_const(qtdNativeId);
    }

    public final QVariant data() const {
        void* ret = qtd_QAction_data_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final QFont font() const {
        void* ret = qtd_QAction_font_const(qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public final void hover() {
        qtd_QAction_hover(qtdNativeId);
    }

    public final QIcon icon() const {
        void* ret = qtd_QAction_icon_const(qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final string iconText() const {
        string res;
        qtd_QAction_iconText_const(qtdNativeId, &res);
        return res;
    }

    public final bool isCheckable() const {
        return qtd_QAction_isCheckable_const(qtdNativeId);
    }

    public final bool isChecked() const {
        return qtd_QAction_isChecked_const(qtdNativeId);
    }

    public final bool isEnabled() const {
        return qtd_QAction_isEnabled_const(qtdNativeId);
    }

    public final bool isIconVisibleInMenu() const {
        return qtd_QAction_isIconVisibleInMenu_const(qtdNativeId);
    }

    public final bool isSeparator() const {
        return qtd_QAction_isSeparator_const(qtdNativeId);
    }

    public final bool isVisible() const {
        return qtd_QAction_isVisible_const(qtdNativeId);
    }

    public final QMenu menu() const {
        void *ret = qtd_QAction_menu_const(qtdNativeId);
        QMenu __d_return_value = QMenu.__getObject(ret);
        return __d_return_value;
    }

    public final QAction.MenuRole menuRole() const {
        return cast(QAction.MenuRole) qtd_QAction_menuRole_const(qtdNativeId);
    }

    public final QWidget parentWidget() const {
        void *ret = qtd_QAction_parentWidget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final void setActionGroup(QActionGroup group) {
        qtd_QAction_setActionGroup_QActionGroup(qtdNativeId, group is null ? null : group.qtdNativeId);
    }

    public final void setAutoRepeat(bool arg__1) {
        qtd_QAction_setAutoRepeat_bool(qtdNativeId, arg__1);
    }

    public final void setCheckable(bool arg__1) {
        qtd_QAction_setCheckable_bool(qtdNativeId, arg__1);
    }

    public final void setChecked(bool arg__1) {
        qtd_QAction_setChecked_bool(qtdNativeId, arg__1);
    }

    public final void setData(QVariant var) {
        qtd_QAction_setData_QVariant(qtdNativeId, var is null ? null : var.qtdNativeId);
    }

    public final void setDisabled(bool b) {
        qtd_QAction_setDisabled_bool(qtdNativeId, b);
    }

    public final void setEnabled(bool arg__1) {
        qtd_QAction_setEnabled_bool(qtdNativeId, arg__1);
    }

    public final void setFont(const(QFont) font) {
        qtd_QAction_setFont_QFont(qtdNativeId, font is null ? null : (cast(QFont)font).qtdNativeId);
    }

    public final void setIcon(const(QIcon) icon) {
        qtd_QAction_setIcon_QIcon(qtdNativeId, icon is null ? null : (cast(QIcon)icon).qtdNativeId);
    }

    public final void setIconText(string text) {
        qtd_QAction_setIconText_string(qtdNativeId, text);
    }

    public final void setIconVisibleInMenu(bool visible) {
        qtd_QAction_setIconVisibleInMenu_bool(qtdNativeId, visible);
    }

    public final void setMenu(QMenu menu) {
        {
            __rcMenu = cast(Object) menu;
        }
        qtd_QAction_setMenu_QMenu(qtdNativeId, menu is null ? null : menu.qtdNativeId);
    }

    public final void setMenuRole(QAction.MenuRole menuRole) {
        qtd_QAction_setMenuRole_MenuRole(qtdNativeId, menuRole);
    }

    public final void setSeparator(bool b) {
        qtd_QAction_setSeparator_bool(qtdNativeId, b);
    }

    public final void setShortcut(const(QKeySequence) shortcut) {
        qtd_QAction_setShortcut_QKeySequence(qtdNativeId, shortcut is null ? null : (cast(QKeySequence)shortcut).qtdNativeId);
    }

    public final void setShortcutContext(Qt.ShortcutContext context) {
        qtd_QAction_setShortcutContext_ShortcutContext(qtdNativeId, context);
    }

    public final void setShortcuts(QKeySequence.StandardKey arg__1) {
        qtd_QAction_setShortcuts_StandardKey(qtdNativeId, arg__1);
    }

    public final void setShortcuts(QList!(QKeySequence) shortcuts) {
        qtd_QAction_setShortcuts_QList(qtdNativeId, &shortcuts);
    }

    public final void setStatusTip(string statusTip) {
        qtd_QAction_setStatusTip_string(qtdNativeId, statusTip);
    }

    public final void setText(string text) {
        qtd_QAction_setText_string(qtdNativeId, text);
    }

    public final void setToolTip(string tip) {
        qtd_QAction_setToolTip_string(qtdNativeId, tip);
    }

    public final void setVisible(bool arg__1) {
        qtd_QAction_setVisible_bool(qtdNativeId, arg__1);
    }

    public final void setWhatsThis(string what) {
        qtd_QAction_setWhatsThis_string(qtdNativeId, what);
    }

    public final QKeySequence shortcut() const {
        void* ret = qtd_QAction_shortcut_const(qtdNativeId);
        QKeySequence __d_return_value = new QKeySequence(ret);
        return __d_return_value;
    }

    public final Qt.ShortcutContext shortcutContext() const {
        return cast(Qt.ShortcutContext) qtd_QAction_shortcutContext_const(qtdNativeId);
    }

    public final QList!(QKeySequence) shortcuts() const {
        auto res = QList!(QKeySequence).opCall();
        qtd_QAction_shortcuts_const(qtdNativeId, &res);
        return res;
    }

    public final bool showStatusText(QWidget widget = null) {
        return qtd_QAction_showStatusText_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final string statusTip() const {
        string res;
        qtd_QAction_statusTip_const(qtdNativeId, &res);
        return res;
    }

    public final string text() const {
        string res;
        qtd_QAction_text_const(qtdNativeId, &res);
        return res;
    }

    public final void toggle() {
        qtd_QAction_toggle(qtdNativeId);
    }

    public final string toolTip() const {
        string res;
        qtd_QAction_toolTip_const(qtdNativeId, &res);
        return res;
    }

    public final void trigger() {
        qtd_QAction_trigger(qtdNativeId);
    }

    public final string whatsThis() const {
        string res;
        qtd_QAction_whatsThis_const(qtdNativeId, &res);
        return res;
    }

    public bool event(QEvent arg__1) {
        return qtd_QAction_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "hover()", 
            "setChecked(bool)", 
            "setDisabled(bool)", 
            "setEnabled(bool)", 
            "setVisible(bool)", 
            "toggle()", 
            "trigger()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QAction_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QAction);
    }

    static QAction __getObject(void* nativeId) {
        return static_cast!(QAction)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QAction_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QAction_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QAction(nativeId, initFlags);
        QAction.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("changed"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!()("hovered"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(bool)("toggled"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(bool)("triggered"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!()("triggered"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("hover"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setChecked"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setDisabled"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setEnabled"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setVisible"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!()("toggle"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[6]);
        mo.addMethod(new QMetaSlot(signature!()("trigger"), index));

    }

    public alias void __isQtType_QAction;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    public final void setShortcut(string key) {
        setShortcut(new QKeySequence(key));
    }
    /*
    private QActionGroup __rcActionGroup = null;
     */
    /**
     * Sets the shortcut to the key sequence for the given key string. For
     * example "Ctrl+O" gives CTRL+'O'. The strings "Ctrl", "Shift", "Alt" and
     * "Meta" are recognized, as well as their translated equivalents in the
     * "QShortcut" context (using QObject::tr()). Up to four key codes may be
     * entered by separating them with commas, e.g. "Alt+X,Ctrl+S,Q".
     *
     * @param key
     *            The description of the key sequence. Typically used with tr()
     *            so key sequences can be locale aware.
     */
    /*    public final void setShortcut(String key) {
    setShortcut(new QKeySequence(key));
    }
     */
    /**
     * Sets the shortcut to the key sequence for the given key. The result will
     * depend on the currently running platform. The key sequence will be based
     * on the first element in the list of key bindings for the key.
     *
     * @param key
     *            The key for which to select a key sequence
     */
    /*    public final void setShortcut(QKeySequence.StandardKey key) {
    setShortcut(new QKeySequence(key));
    }

    public final void setIcon(QPixmap pm) {
    setIcon(new QIcon(pm));
    }
     */

}

// C wrappers for signal emitters
private extern(C) void  qtd_QAction_changed(void* __this_nativeId);
private extern(C) void  qtd_QAction_hovered(void* __this_nativeId);
private extern(C) void  qtd_QAction_toggled_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QAction_triggered_bool(void* __this_nativeId,
 bool checked0);

// C wrappers
private extern(C) void* qtd_QAction_QAction_QObject(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QAction_QAction_QIcon_string_QObject(void *d_ptr,
 void* icon0,
 string text1,
 void* parent2);
private extern(C) void* qtd_QAction_QAction_string_QObject(void *d_ptr,
 string text0,
 void* parent1);
private extern(C) void*  qtd_QAction_actionGroup_const(void* __this_nativeId);
private extern(C) void  qtd_QAction_activate_ActionEvent(void* __this_nativeId,
 int event0);
private extern(C) void  qtd_QAction_associatedGraphicsWidgets_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QAction_associatedWidgets_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QAction_autoRepeat_const(void* __this_nativeId);
private extern(C) void*  qtd_QAction_data_const(void* __this_nativeId);
private extern(C) void*  qtd_QAction_font_const(void* __this_nativeId);
private extern(C) void  qtd_QAction_hover(void* __this_nativeId);
private extern(C) void*  qtd_QAction_icon_const(void* __this_nativeId);
private extern(C) void  qtd_QAction_iconText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QAction_isCheckable_const(void* __this_nativeId);
private extern(C) bool  qtd_QAction_isChecked_const(void* __this_nativeId);
private extern(C) bool  qtd_QAction_isEnabled_const(void* __this_nativeId);
private extern(C) bool  qtd_QAction_isIconVisibleInMenu_const(void* __this_nativeId);
private extern(C) bool  qtd_QAction_isSeparator_const(void* __this_nativeId);
private extern(C) bool  qtd_QAction_isVisible_const(void* __this_nativeId);
private extern(C) void*  qtd_QAction_menu_const(void* __this_nativeId);
private extern(C) int  qtd_QAction_menuRole_const(void* __this_nativeId);
private extern(C) void*  qtd_QAction_parentWidget_const(void* __this_nativeId);
private extern(C) void  qtd_QAction_setActionGroup_QActionGroup(void* __this_nativeId,
 void* group0);
private extern(C) void  qtd_QAction_setAutoRepeat_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QAction_setCheckable_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QAction_setChecked_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QAction_setData_QVariant(void* __this_nativeId,
 void* var0);
private extern(C) void  qtd_QAction_setDisabled_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QAction_setEnabled_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QAction_setFont_QFont(void* __this_nativeId,
 void* font0);
private extern(C) void  qtd_QAction_setIcon_QIcon(void* __this_nativeId,
 void* icon0);
private extern(C) void  qtd_QAction_setIconText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QAction_setIconVisibleInMenu_bool(void* __this_nativeId,
 bool visible0);
private extern(C) void  qtd_QAction_setMenu_QMenu(void* __this_nativeId,
 void* menu0);
private extern(C) void  qtd_QAction_setMenuRole_MenuRole(void* __this_nativeId,
 int menuRole0);
private extern(C) void  qtd_QAction_setSeparator_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QAction_setShortcut_QKeySequence(void* __this_nativeId,
 void* shortcut0);
private extern(C) void  qtd_QAction_setShortcutContext_ShortcutContext(void* __this_nativeId,
 int context0);
private extern(C) void  qtd_QAction_setShortcuts_StandardKey(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QAction_setShortcuts_QList(void* __this_nativeId,
 void* shortcuts0);
private extern(C) void  qtd_QAction_setStatusTip_string(void* __this_nativeId,
 string statusTip0);
private extern(C) void  qtd_QAction_setText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QAction_setToolTip_string(void* __this_nativeId,
 string tip0);
private extern(C) void  qtd_QAction_setVisible_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QAction_setWhatsThis_string(void* __this_nativeId,
 string what0);
private extern(C) void*  qtd_QAction_shortcut_const(void* __this_nativeId);
private extern(C) int  qtd_QAction_shortcutContext_const(void* __this_nativeId);
private extern(C) void  qtd_QAction_shortcuts_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QAction_showStatusText_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QAction_statusTip_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QAction_text_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QAction_toggle(void* __this_nativeId);
private extern(C) void  qtd_QAction_toolTip_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QAction_trigger(void* __this_nativeId);
private extern(C) void  qtd_QAction_whatsThis_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QAction_event_QEvent(void* __this_nativeId,
 void* arg__1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QAction_initCallBacks(void* virtuals);

extern(C) void static_init_QAction() {
    qtd_QAction_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QAction_changed_handle(void* dId, void** args) {
        auto d_object = cast(QAction) dId;
        //d_object.changed_emit();
}*/
/*private extern(C) void qtd_QAction_hovered_handle(void* dId, void** args) {
        auto d_object = cast(QAction) dId;
        //d_object.hovered_emit();
}*/
/*private extern(C) void qtd_QAction_toggled_handle(void* dId, void** args) {
        auto d_object = cast(QAction) dId;
        auto arg__1 = *(cast(bool*)args[1]);
        //d_object.toggled_emit(arg__1);
}*/
/*private extern(C) void qtd_QAction_triggered_handle(void* dId, void** args) {
        auto d_object = cast(QAction) dId;
        auto checked0 = *(cast(bool*)args[1]);
        //d_object.triggered_emit(checked0);
}*/

extern(C) QMetaObjectNative* qtd_QAction_staticMetaObject();

extern(C) void qtd_QAction_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QAction_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
