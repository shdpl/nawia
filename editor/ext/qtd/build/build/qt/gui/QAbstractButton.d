module qt.gui.QAbstractButton;

public import qt.gui.QAbstractButton_aux;
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
public import qt.gui.QKeySequence;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QPaintEngine;
public import qt.gui.QWheelEvent;
public import qt.gui.QActionEvent;
public import qt.gui.QDropEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QButtonGroup;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QPoint;
public import qt.gui.QDragMoveEvent;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.gui.QPaintEvent;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QIcon;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAbstractButton : QWidget
{

    private static const string[] __signalSignatures = [
            "clicked(bool)", 
            "clicked()", 
            "pressed()", 
            "released()", 
            "toggled(bool)"    ];

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

    protected final void clicked(bool checked = false) {
        qtd_QAbstractButton_clicked_bool(qtdNativeId, checked);
    }

    protected final void pressed() {
        qtd_QAbstractButton_pressed(qtdNativeId);
    }

    protected final void released() {
        qtd_QAbstractButton_released(qtdNativeId);
    }

    protected final void toggled(bool checked) {
        qtd_QAbstractButton_toggled_bool(qtdNativeId, checked);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QAbstractButton_QAbstractButton_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void animateClick(int msec = 100) {
        qtd_QAbstractButton_animateClick_int(qtdNativeId, msec);
    }

    public final bool autoExclusive() const {
        return qtd_QAbstractButton_autoExclusive_const(qtdNativeId);
    }

    public final bool autoRepeat() const {
        return qtd_QAbstractButton_autoRepeat_const(qtdNativeId);
    }

    public final int autoRepeatDelay() const {
        return qtd_QAbstractButton_autoRepeatDelay_const(qtdNativeId);
    }

    public final int autoRepeatInterval() const {
        return qtd_QAbstractButton_autoRepeatInterval_const(qtdNativeId);
    }

    public final void click() {
        qtd_QAbstractButton_click(qtdNativeId);
    }

    public final QButtonGroup group() const {
        void *ret = qtd_QAbstractButton_group_const(qtdNativeId);
        QButtonGroup __d_return_value = QButtonGroup.__getObject(ret);
        return __d_return_value;
    }

    public final QIcon icon() const {
        void* ret = qtd_QAbstractButton_icon_const(qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final QSize iconSize() const {
        QSize res;
        qtd_QAbstractButton_iconSize_const(qtdNativeId, &res);
        return res;
    }

    public final bool isCheckable() const {
        return qtd_QAbstractButton_isCheckable_const(qtdNativeId);
    }

    public final bool isChecked() const {
        return qtd_QAbstractButton_isChecked_const(qtdNativeId);
    }

    public final bool isDown() const {
        return qtd_QAbstractButton_isDown_const(qtdNativeId);
    }

    public final void setAutoExclusive(bool arg__1) {
        qtd_QAbstractButton_setAutoExclusive_bool(qtdNativeId, arg__1);
    }

    public final void setAutoRepeat(bool arg__1) {
        qtd_QAbstractButton_setAutoRepeat_bool(qtdNativeId, arg__1);
    }

    public final void setAutoRepeatDelay(int arg__1) {
        qtd_QAbstractButton_setAutoRepeatDelay_int(qtdNativeId, arg__1);
    }

    public final void setAutoRepeatInterval(int arg__1) {
        qtd_QAbstractButton_setAutoRepeatInterval_int(qtdNativeId, arg__1);
    }

    public final void setCheckable(bool arg__1) {
        qtd_QAbstractButton_setCheckable_bool(qtdNativeId, arg__1);
    }

    public final void setChecked(bool arg__1) {
        qtd_QAbstractButton_setChecked_bool(qtdNativeId, arg__1);
    }

    public final void setDown(bool arg__1) {
        qtd_QAbstractButton_setDown_bool(qtdNativeId, arg__1);
    }

    public final void setIcon(const(QIcon) icon) {
        qtd_QAbstractButton_setIcon_QIcon(qtdNativeId, icon is null ? null : (cast(QIcon)icon).qtdNativeId);
    }

    public final void setIconSize(const(QSize) size) {
        qtd_QAbstractButton_setIconSize_QSize(qtdNativeId, size);
    }

    public final void setShortcut(const(QKeySequence) key) {
        qtd_QAbstractButton_setShortcut_QKeySequence(qtdNativeId, key is null ? null : (cast(QKeySequence)key).qtdNativeId);
    }

    public final void setText(string text) {
        qtd_QAbstractButton_setText_string(qtdNativeId, text);
    }

    public final QKeySequence shortcut() const {
        void* ret = qtd_QAbstractButton_shortcut_const(qtdNativeId);
        QKeySequence __d_return_value = new QKeySequence(ret);
        return __d_return_value;
    }

    public final string text() const {
        string res;
        qtd_QAbstractButton_text_const(qtdNativeId, &res);
        return res;
    }

    public final void toggle() {
        qtd_QAbstractButton_toggle(qtdNativeId);
    }

    protected void changeEvent(QEvent e) {
        qtd_QAbstractButton_changeEvent_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void checkStateSet() {
        qtd_QAbstractButton_checkStateSet(qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QAbstractButton_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void focusInEvent(QFocusEvent e) {
        qtd_QAbstractButton_focusInEvent_QFocusEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void focusOutEvent(QFocusEvent e) {
        qtd_QAbstractButton_focusOutEvent_QFocusEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected bool hitButton(const(QPoint) pos) const {
        return qtd_QAbstractButton_hitButton_QPoint_const(qtdNativeId, pos);
    }

    protected void keyPressEvent(QKeyEvent e) {
        qtd_QAbstractButton_keyPressEvent_QKeyEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void keyReleaseEvent(QKeyEvent e) {
        qtd_QAbstractButton_keyReleaseEvent_QKeyEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void mouseMoveEvent(QMouseEvent e) {
        qtd_QAbstractButton_mouseMoveEvent_QMouseEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent e) {
        qtd_QAbstractButton_mousePressEvent_QMouseEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent e) {
        qtd_QAbstractButton_mouseReleaseEvent_QMouseEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void nextCheckState() {
        qtd_QAbstractButton_nextCheckState(qtdNativeId);
    }

    protected abstract void paintEvent(QPaintEvent e);

    protected void timerEvent(QTimerEvent e) {
        qtd_QAbstractButton_timerEvent_QTimerEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "animateClick(int)", 
            "animateClick()", 
            "click()", 
            "setChecked(bool)", 
            "setIconSize(QSize)", 
            "toggle()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QAbstractButton_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QAbstractButton);
    }

    static QAbstractButton __getObject(void* nativeId) {
        return static_cast!(QAbstractButton)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QAbstractButton_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QAbstractButton_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QAbstractButton_ConcreteWrapper(nativeId, initFlags);
        QAbstractButton.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(bool)("clicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!()("clicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!()("pressed"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!()("released"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(bool)("toggled"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(int)("animateClick"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("animateClick"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("click"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setChecked"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(const(QSize))("setIconSize"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!()("toggle"), index));

    }

    public alias void __isQtType_QAbstractButton;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

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
    public final void setShortcut(string key) {
        setShortcut(new QKeySequence(key));
    }

    /**
     * Sets the shortcut to the key sequence for the given key. The result will
     * depend on the currently running platform. The key sequence will be based
     * on the first element in the list of key bindings for the key.
     *
     * @param key
     *            The key for which to select a key sequence
     */
    public final void setShortcut(QKeySequence.StandardKey key) {
        setShortcut(new QKeySequence(key));
    }

}

    public class QAbstractButton_ConcreteWrapper : QAbstractButton {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         protected void paintEvent(QPaintEvent e) {
            qtd_QAbstractButton_paintEvent_QPaintEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
        }
    }


// C wrappers for signal emitters
private extern(C) void  qtd_QAbstractButton_clicked_bool(void* __this_nativeId,
 bool checked0);
private extern(C) void  qtd_QAbstractButton_pressed(void* __this_nativeId);
private extern(C) void  qtd_QAbstractButton_released(void* __this_nativeId);
private extern(C) void  qtd_QAbstractButton_toggled_bool(void* __this_nativeId,
 bool checked0);

// C wrappers
private extern(C) void* qtd_QAbstractButton_QAbstractButton_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QAbstractButton_animateClick_int(void* __this_nativeId,
 int msec0);
private extern(C) bool  qtd_QAbstractButton_autoExclusive_const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractButton_autoRepeat_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractButton_autoRepeatDelay_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractButton_autoRepeatInterval_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractButton_click(void* __this_nativeId);
private extern(C) void*  qtd_QAbstractButton_group_const(void* __this_nativeId);
private extern(C) void*  qtd_QAbstractButton_icon_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractButton_iconSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) bool  qtd_QAbstractButton_isCheckable_const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractButton_isChecked_const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractButton_isDown_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractButton_setAutoExclusive_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QAbstractButton_setAutoRepeat_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QAbstractButton_setAutoRepeatDelay_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QAbstractButton_setAutoRepeatInterval_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QAbstractButton_setCheckable_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QAbstractButton_setChecked_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QAbstractButton_setDown_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QAbstractButton_setIcon_QIcon(void* __this_nativeId,
 void* icon0);
private extern(C) void  qtd_QAbstractButton_setIconSize_QSize(void* __this_nativeId,
 QSize size0);
private extern(C) void  qtd_QAbstractButton_setShortcut_QKeySequence(void* __this_nativeId,
 void* key0);
private extern(C) void  qtd_QAbstractButton_setText_string(void* __this_nativeId,
 string text0);
private extern(C) void*  qtd_QAbstractButton_shortcut_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractButton_text_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QAbstractButton_toggle(void* __this_nativeId);
private extern(C) void  qtd_QAbstractButton_changeEvent_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QAbstractButton_checkStateSet(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractButton_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QAbstractButton_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QAbstractButton_focusOutEvent_QFocusEvent(void* __this_nativeId,
 void* e0);
private extern(C) bool  qtd_QAbstractButton_hitButton_QPoint_const(void* __this_nativeId,
 QPoint pos0);
private extern(C) void  qtd_QAbstractButton_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QAbstractButton_keyReleaseEvent_QKeyEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QAbstractButton_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QAbstractButton_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QAbstractButton_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QAbstractButton_nextCheckState(void* __this_nativeId);
private extern(C) void  qtd_QAbstractButton_paintEvent_QPaintEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QAbstractButton_timerEvent_QTimerEvent(void* __this_nativeId,
 void* e0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId) qtd_QAbstractButton_checkStateSet_dispatch; }
extern(C) void qtd_export_QAbstractButton_checkStateSet_dispatch(void *dId){
    auto d_object = cast(QAbstractButton) dId;
    d_object.checkStateSet();
}

extern(C){ extern bool function(void *dId, QPoint* pos0) qtd_QAbstractButton_hitButton_QPoint_const_dispatch; }
extern(C) bool qtd_export_QAbstractButton_hitButton_QPoint_const_dispatch(void *dId, QPoint* pos0){
    auto d_object = cast(QAbstractButton) dId;
    auto return_value = d_object.hitButton(*pos0);
    return return_value;
}

extern(C){ extern void function(void *dId) qtd_QAbstractButton_nextCheckState_dispatch; }
extern(C) void qtd_export_QAbstractButton_nextCheckState_dispatch(void *dId){
    auto d_object = cast(QAbstractButton) dId;
    d_object.nextCheckState();
}

private extern (C) void qtd_QAbstractButton_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractButton() {
    void*[3] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractButton_checkStateSet_dispatch;
    virt_arr[1] = &qtd_export_QAbstractButton_hitButton_QPoint_const_dispatch;
    virt_arr[2] = &qtd_export_QAbstractButton_nextCheckState_dispatch;
    qtd_QAbstractButton_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QAbstractButton_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractButton) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QAbstractButton_clicked_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractButton) dId;
        auto checked0 = *(cast(bool*)args[1]);
        //d_object.clicked_emit(checked0);
}*/
/*private extern(C) void qtd_QAbstractButton_pressed_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractButton) dId;
        //d_object.pressed_emit();
}*/
/*private extern(C) void qtd_QAbstractButton_released_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractButton) dId;
        //d_object.released_emit();
}*/
/*private extern(C) void qtd_QAbstractButton_toggled_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractButton) dId;
        auto checked0 = *(cast(bool*)args[1]);
        //d_object.toggled_emit(checked0);
}*/

extern(C) QMetaObjectNative* qtd_QAbstractButton_staticMetaObject();

extern(C) void qtd_QAbstractButton_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QAbstractButton_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
