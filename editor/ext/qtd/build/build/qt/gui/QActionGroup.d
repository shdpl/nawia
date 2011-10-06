module qt.gui.QActionGroup;

public import qt.gui.QActionGroup_aux;
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
public import qt.core.QList;
public import qt.core.QObject;
public import qt.gui.QIcon;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.gui.QAction;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QActionGroup : QObject
{

    package Object[] __rcActions;

    private static const string[] __signalSignatures = [
            "hovered(QAction*)", 
            "triggered(QAction*)"    ];

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

    protected final void hovered(QAction arg__1) {
        qtd_QActionGroup_hovered_QAction(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected final void triggered(QAction arg__1) {
        qtd_QActionGroup_triggered_QAction(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }
// Functions

    public this(QObject parent_) {
        void* ret = qtd_QActionGroup_QActionGroup_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QList!(QAction) actions() const {
        auto res = QList!(QAction).opCall();
        qtd_QActionGroup_actions_const(qtdNativeId, &res);
        return res;
    }

    public final QAction addAction(QAction a) {
        if (a !is null) {
            __rcActions ~= cast(Object) a;
        }
        void *ret = qtd_QActionGroup_addAction_QAction(qtdNativeId, a is null ? null : a.qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QAction addAction(const(QIcon) icon, string text) {
        void *ret = qtd_QActionGroup_addAction_QIcon_string(qtdNativeId, icon is null ? null : (cast(QIcon)icon).qtdNativeId, text);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QAction addAction(string text) {
        void *ret = qtd_QActionGroup_addAction_string(qtdNativeId, text);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QAction checkedAction() const {
        void *ret = qtd_QActionGroup_checkedAction_const(qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final bool isEnabled() const {
        return qtd_QActionGroup_isEnabled_const(qtdNativeId);
    }

    public final bool isExclusive() const {
        return qtd_QActionGroup_isExclusive_const(qtdNativeId);
    }

    public final bool isVisible() const {
        return qtd_QActionGroup_isVisible_const(qtdNativeId);
    }

    public final void removeAction(QAction a) {
        if (a !is null) {
            remove(__rcActions, cast(Object) a);
        }
        qtd_QActionGroup_removeAction_QAction(qtdNativeId, a is null ? null : a.qtdNativeId);
    }

    public final void setDisabled(bool b) {
        qtd_QActionGroup_setDisabled_bool(qtdNativeId, b);
    }

    public final void setEnabled(bool arg__1) {
        qtd_QActionGroup_setEnabled_bool(qtdNativeId, arg__1);
    }

    public final void setExclusive(bool arg__1) {
        qtd_QActionGroup_setExclusive_bool(qtdNativeId, arg__1);
    }

    public final void setVisible(bool arg__1) {
        qtd_QActionGroup_setVisible_bool(qtdNativeId, arg__1);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "setDisabled(bool)", 
            "setEnabled(bool)", 
            "setExclusive(bool)", 
            "setVisible(bool)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QActionGroup_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QActionGroup);
    }

    static QActionGroup __getObject(void* nativeId) {
        return static_cast!(QActionGroup)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QActionGroup_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QActionGroup_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QActionGroup(nativeId, initFlags);
        QActionGroup.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QAction)("hovered"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(QAction)("triggered"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setDisabled"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setEnabled"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setExclusive"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setVisible"), index));

    }

    public alias void __isQtType_QActionGroup;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QActionGroup_hovered_QAction(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QActionGroup_triggered_QAction(void* __this_nativeId,
 void* arg__1);

// C wrappers
private extern(C) void* qtd_QActionGroup_QActionGroup_QObject(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QActionGroup_actions_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QActionGroup_addAction_QAction(void* __this_nativeId,
 void* a0);
private extern(C) void*  qtd_QActionGroup_addAction_QIcon_string(void* __this_nativeId,
 void* icon0,
 string text1);
private extern(C) void*  qtd_QActionGroup_addAction_string(void* __this_nativeId,
 string text0);
private extern(C) void*  qtd_QActionGroup_checkedAction_const(void* __this_nativeId);
private extern(C) bool  qtd_QActionGroup_isEnabled_const(void* __this_nativeId);
private extern(C) bool  qtd_QActionGroup_isExclusive_const(void* __this_nativeId);
private extern(C) bool  qtd_QActionGroup_isVisible_const(void* __this_nativeId);
private extern(C) void  qtd_QActionGroup_removeAction_QAction(void* __this_nativeId,
 void* a0);
private extern(C) void  qtd_QActionGroup_setDisabled_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QActionGroup_setEnabled_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QActionGroup_setExclusive_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QActionGroup_setVisible_bool(void* __this_nativeId,
 bool arg__1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QActionGroup_initCallBacks(void* virtuals);

extern(C) void static_init_QActionGroup() {
    qtd_QActionGroup_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QActionGroup_hovered_handle(void* dId, void** args) {
        auto d_object = cast(QActionGroup) dId;
        scope arg__1 = new QAction(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.hovered_emit(arg__1);
}*/
/*private extern(C) void qtd_QActionGroup_triggered_handle(void* dId, void** args) {
        auto d_object = cast(QActionGroup) dId;
        scope arg__1 = new QAction(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.triggered_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QActionGroup_staticMetaObject();

extern(C) void qtd_QActionGroup_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QActionGroup_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
