module qt.gui.QButtonGroup;

public import qt.gui.QButtonGroup_aux;
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
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.gui.QAbstractButton;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QButtonGroup : QObject
{

    package Object[] __rcButtons;

    private static const string[] __signalSignatures = [
            "buttonClicked(QAbstractButton*)", 
            "buttonClicked(int)", 
            "buttonPressed(QAbstractButton*)", 
            "buttonPressed(int)", 
            "buttonReleased(QAbstractButton*)", 
            "buttonReleased(int)"    ];

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

    protected final void buttonClicked(QAbstractButton arg__1) {
        qtd_QButtonGroup_buttonClicked_QAbstractButton(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected final void buttonClicked(int arg__1) {
        qtd_QButtonGroup_buttonClicked_int(qtdNativeId, arg__1);
    }

    protected final void buttonPressed(QAbstractButton arg__1) {
        qtd_QButtonGroup_buttonPressed_QAbstractButton(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected final void buttonPressed(int arg__1) {
        qtd_QButtonGroup_buttonPressed_int(qtdNativeId, arg__1);
    }

    protected final void buttonReleased(QAbstractButton arg__1) {
        qtd_QButtonGroup_buttonReleased_QAbstractButton(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected final void buttonReleased(int arg__1) {
        qtd_QButtonGroup_buttonReleased_int(qtdNativeId, arg__1);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QButtonGroup_QButtonGroup_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addButton(QAbstractButton arg__1) {
        /*if (arg__1 is null)
            throw new NullPointerException("Argument 'arg__1': null not expected."); */
        if (arg__1 !is null) {
            __rcButtons ~= cast(Object) arg__1;
        }
        qtd_QButtonGroup_addButton_QAbstractButton(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void addButton(QAbstractButton arg__1, int id) {
        /*if (arg__1 is null)
            throw new NullPointerException("Argument 'arg__1': null not expected."); */
        if (arg__1 !is null) {
            __rcButtons ~= cast(Object) arg__1;
        }
        qtd_QButtonGroup_addButton_QAbstractButton_int(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId, id);
    }

    public final QAbstractButton button(int id) const {
        void *ret = qtd_QButtonGroup_button_int_const(qtdNativeId, id);
        QAbstractButton __d_return_value = QAbstractButton.__getObject(ret);
        return __d_return_value;
    }

    public final QList!(QAbstractButton) buttons() const {
        auto res = QList!(QAbstractButton).opCall();
        qtd_QButtonGroup_buttons_const(qtdNativeId, &res);
        return res;
    }

    public final QAbstractButton checkedButton() const {
        void *ret = qtd_QButtonGroup_checkedButton_const(qtdNativeId);
        QAbstractButton __d_return_value = QAbstractButton.__getObject(ret);
        return __d_return_value;
    }

    public final int checkedId() const {
        return qtd_QButtonGroup_checkedId_const(qtdNativeId);
    }

    public final bool exclusive() const {
        return qtd_QButtonGroup_exclusive_const(qtdNativeId);
    }

    public final int id(QAbstractButton button) const {
        return qtd_QButtonGroup_id_QAbstractButton_const(qtdNativeId, button is null ? null : button.qtdNativeId);
    }

    public final void removeButton(QAbstractButton arg__1) {
        /*if (arg__1 is null)
            throw new NullPointerException("Argument 'arg__1': null not expected."); */
        if (arg__1 !is null) {
            remove(__rcButtons, cast(Object) arg__1);
        }
        qtd_QButtonGroup_removeButton_QAbstractButton(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void setExclusive(bool arg__1) {
        qtd_QButtonGroup_setExclusive_bool(qtdNativeId, arg__1);
    }

    public final void setId(QAbstractButton button, int id) {
        qtd_QButtonGroup_setId_QAbstractButton_int(qtdNativeId, button is null ? null : button.qtdNativeId, id);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QButtonGroup_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QButtonGroup);
    }

    static QButtonGroup __getObject(void* nativeId) {
        return static_cast!(QButtonGroup)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QButtonGroup_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QButtonGroup_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QButtonGroup(nativeId, initFlags);
        QButtonGroup.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QAbstractButton)("buttonClicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int)("buttonClicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(QAbstractButton)("buttonPressed"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(int)("buttonPressed"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(QAbstractButton)("buttonReleased"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!(int)("buttonReleased"), index));

    }

    public alias void __isQtType_QButtonGroup;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QButtonGroup_buttonClicked_QAbstractButton(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QButtonGroup_buttonClicked_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QButtonGroup_buttonPressed_QAbstractButton(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QButtonGroup_buttonPressed_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QButtonGroup_buttonReleased_QAbstractButton(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QButtonGroup_buttonReleased_int(void* __this_nativeId,
 int arg__1);

// C wrappers
private extern(C) void* qtd_QButtonGroup_QButtonGroup_QObject(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QButtonGroup_addButton_QAbstractButton(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QButtonGroup_addButton_QAbstractButton_int(void* __this_nativeId,
 void* arg__1,
 int id1);
private extern(C) void*  qtd_QButtonGroup_button_int_const(void* __this_nativeId,
 int id0);
private extern(C) void  qtd_QButtonGroup_buttons_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QButtonGroup_checkedButton_const(void* __this_nativeId);
private extern(C) int  qtd_QButtonGroup_checkedId_const(void* __this_nativeId);
private extern(C) bool  qtd_QButtonGroup_exclusive_const(void* __this_nativeId);
private extern(C) int  qtd_QButtonGroup_id_QAbstractButton_const(void* __this_nativeId,
 void* button0);
private extern(C) void  qtd_QButtonGroup_removeButton_QAbstractButton(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QButtonGroup_setExclusive_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QButtonGroup_setId_QAbstractButton_int(void* __this_nativeId,
 void* button0,
 int id1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QButtonGroup_initCallBacks(void* virtuals);

extern(C) void static_init_QButtonGroup() {
    qtd_QButtonGroup_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QButtonGroup_buttonClicked_handle(void* dId, void** args) {
        auto d_object = cast(QButtonGroup) dId;
        scope arg__1 = new QAbstractButton_ConcreteWrapper(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.buttonClicked_emit(arg__1);
}*/
/*private extern(C) void qtd_QButtonGroup_buttonClicked_handle(void* dId, void** args) {
        auto d_object = cast(QButtonGroup) dId;
        auto arg__1 = *(cast(int*)args[1]);
        //d_object.buttonClicked_emit(arg__1);
}*/
/*private extern(C) void qtd_QButtonGroup_buttonPressed_handle(void* dId, void** args) {
        auto d_object = cast(QButtonGroup) dId;
        scope arg__1 = new QAbstractButton_ConcreteWrapper(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.buttonPressed_emit(arg__1);
}*/
/*private extern(C) void qtd_QButtonGroup_buttonPressed_handle(void* dId, void** args) {
        auto d_object = cast(QButtonGroup) dId;
        auto arg__1 = *(cast(int*)args[1]);
        //d_object.buttonPressed_emit(arg__1);
}*/
/*private extern(C) void qtd_QButtonGroup_buttonReleased_handle(void* dId, void** args) {
        auto d_object = cast(QButtonGroup) dId;
        scope arg__1 = new QAbstractButton_ConcreteWrapper(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.buttonReleased_emit(arg__1);
}*/
/*private extern(C) void qtd_QButtonGroup_buttonReleased_handle(void* dId, void** args) {
        auto d_object = cast(QButtonGroup) dId;
        auto arg__1 = *(cast(int*)args[1]);
        //d_object.buttonReleased_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QButtonGroup_staticMetaObject();

extern(C) void qtd_QButtonGroup_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QButtonGroup_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
