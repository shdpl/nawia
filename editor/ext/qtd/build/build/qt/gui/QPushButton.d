module qt.gui.QPushButton;

public import qt.gui.QPushButton_aux;
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
public import qt.gui.QActionEvent;
public import qt.gui.QDropEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
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
public import qt.gui.QStyleOptionButton;
public import qt.gui.QPaintEvent;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QAbstractButton;
public import qt.gui.QIcon;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;
public import qt.gui.QMenu;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QPushButton : QAbstractButton
{

Object __rcMenu = null;

    private static const string[] __signalSignatures = [    ];

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
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QPushButton_QPushButton_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QIcon) icon, string text, QWidget parent_ = null) {
        void* ret = qtd_QPushButton_QPushButton_QIcon_string_QWidget(cast(void*) this, icon is null ? null : (cast(QIcon)icon).qtdNativeId, text, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string text, QWidget parent_ = null) {
        void* ret = qtd_QPushButton_QPushButton_string_QWidget(cast(void*) this, text, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool autoDefault() const {
        return qtd_QPushButton_autoDefault_const(qtdNativeId);
    }

    protected final void initStyleOption(QStyleOptionButton option) const {
        qtd_QPushButton_initStyleOption_nativepointerQStyleOptionButton_const(qtdNativeId, option is null ? null : option.qtdNativeId);
    }

    public final bool isDefault() const {
        return qtd_QPushButton_isDefault_const(qtdNativeId);
    }

    public final bool isFlat() const {
        return qtd_QPushButton_isFlat_const(qtdNativeId);
    }

    public final QMenu menu() const {
        void *ret = qtd_QPushButton_menu_const(qtdNativeId);
        QMenu __d_return_value = QMenu.__getObject(ret);
        return __d_return_value;
    }

    public final void setAutoDefault(bool arg__1) {
        qtd_QPushButton_setAutoDefault_bool(qtdNativeId, arg__1);
    }

    public final void setDefault(bool arg__1) {
        qtd_QPushButton_setDefault_bool(qtdNativeId, arg__1);
    }

    public final void setFlat(bool arg__1) {
        qtd_QPushButton_setFlat_bool(qtdNativeId, arg__1);
    }

    public final void setMenu(QMenu menu) {
        {
            __rcMenu = cast(Object) menu;
        }
        qtd_QPushButton_setMenu_QMenu(qtdNativeId, menu is null ? null : menu.qtdNativeId);
    }

    public final void showMenu() {
        qtd_QPushButton_showMenu(qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QPushButton_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void focusInEvent(QFocusEvent arg__1) {
        qtd_QPushButton_focusInEvent_QFocusEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void focusOutEvent(QFocusEvent arg__1) {
        qtd_QPushButton_focusOutEvent_QFocusEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void keyPressEvent(QKeyEvent arg__1) {
        qtd_QPushButton_keyPressEvent_QKeyEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QPushButton_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QPushButton_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QPushButton_sizeHint_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "showMenu()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QPushButton_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QPushButton);
    }

    static QPushButton __getObject(void* nativeId) {
        return static_cast!(QPushButton)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QPushButton_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QPushButton_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QPushButton(nativeId, initFlags);
        QPushButton.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("showMenu"), index));

    }

    public alias void __isQtType_QPushButton;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPushButton_QPushButton_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QPushButton_QPushButton_QIcon_string_QWidget(void *d_ptr,
 void* icon0,
 string text1,
 void* parent2);
private extern(C) void* qtd_QPushButton_QPushButton_string_QWidget(void *d_ptr,
 string text0,
 void* parent1);
private extern(C) bool  qtd_QPushButton_autoDefault_const(void* __this_nativeId);
private extern(C) void  qtd_QPushButton_initStyleOption_nativepointerQStyleOptionButton_const(void* __this_nativeId,
 void* option0);
private extern(C) bool  qtd_QPushButton_isDefault_const(void* __this_nativeId);
private extern(C) bool  qtd_QPushButton_isFlat_const(void* __this_nativeId);
private extern(C) void*  qtd_QPushButton_menu_const(void* __this_nativeId);
private extern(C) void  qtd_QPushButton_setAutoDefault_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QPushButton_setDefault_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QPushButton_setFlat_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QPushButton_setMenu_QMenu(void* __this_nativeId,
 void* menu0);
private extern(C) void  qtd_QPushButton_showMenu(void* __this_nativeId);
private extern(C) bool  qtd_QPushButton_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QPushButton_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QPushButton_focusOutEvent_QFocusEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QPushButton_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QPushButton_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QPushButton_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QPushButton_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QPushButton_initCallBacks(void* virtuals);

extern(C) void static_init_QPushButton() {
    qtd_QPushButton_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QPushButton_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QPushButton) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QPushButton_clicked_handle(void* dId, void** args) {
        auto d_object = cast(QPushButton) dId;
        auto checked0 = *(cast(bool*)args[1]);
        //d_object.clicked_emit(checked0);
}*/
/*private extern(C) void qtd_QPushButton_pressed_handle(void* dId, void** args) {
        auto d_object = cast(QPushButton) dId;
        //d_object.pressed_emit();
}*/
/*private extern(C) void qtd_QPushButton_released_handle(void* dId, void** args) {
        auto d_object = cast(QPushButton) dId;
        //d_object.released_emit();
}*/
/*private extern(C) void qtd_QPushButton_toggled_handle(void* dId, void** args) {
        auto d_object = cast(QPushButton) dId;
        auto checked0 = *(cast(bool*)args[1]);
        //d_object.toggled_emit(checked0);
}*/

extern(C) QMetaObjectNative* qtd_QPushButton_staticMetaObject();

extern(C) void qtd_QPushButton_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QPushButton_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
