module qt.gui.QShortcut;

public import qt.gui.QShortcut_aux;
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
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.gui.QKeySequence;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QShortcut : QObject
{

    private static const string[] __signalSignatures = [
            "activated()", 
            "activatedAmbiguously()"    ];

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

    protected final void activated() {
        qtd_QShortcut_activated(qtdNativeId);
    }

    protected final void activatedAmbiguously() {
        qtd_QShortcut_activatedAmbiguously(qtdNativeId);
    }
// Functions

    public this(QWidget parent_) {
        void* ret = qtd_QShortcut_QShortcut_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    private this(const(QKeySequence) key, QWidget parent_, const(char*) member, const(char*) ambiguousMember, Qt.ShortcutContext context) {
        void* ret = qtd_QShortcut_QShortcut_QKeySequence_QWidget_nativepointerchar_nativepointerchar_ShortcutContext(cast(void*) this, key is null ? null : (cast(QKeySequence)key).qtdNativeId, parent_ is null ? null : parent_.qtdNativeId, member, ambiguousMember, context);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool autoRepeat() const {
        return qtd_QShortcut_autoRepeat_const(qtdNativeId);
    }

    public final Qt.ShortcutContext context() {
        return cast(Qt.ShortcutContext) qtd_QShortcut_context(qtdNativeId);
    }

    public final int id() const {
        return qtd_QShortcut_id_const(qtdNativeId);
    }

    public final bool isEnabled() const {
        return qtd_QShortcut_isEnabled_const(qtdNativeId);
    }

    public final QKeySequence key() const {
        void* ret = qtd_QShortcut_key_const(qtdNativeId);
        QKeySequence __d_return_value = new QKeySequence(ret);
        return __d_return_value;
    }

    public final QWidget parentWidget() const {
        void *ret = qtd_QShortcut_parentWidget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final void setAutoRepeat(bool on) {
        qtd_QShortcut_setAutoRepeat_bool(qtdNativeId, on);
    }

    public final void setContext(Qt.ShortcutContext context) {
        qtd_QShortcut_setContext_ShortcutContext(qtdNativeId, context);
    }

    public final void setEnabled(bool enable) {
        qtd_QShortcut_setEnabled_bool(qtdNativeId, enable);
    }

    public final void setKey(const(QKeySequence) key) {
        qtd_QShortcut_setKey_QKeySequence(qtdNativeId, key is null ? null : (cast(QKeySequence)key).qtdNativeId);
    }

    public final void setWhatsThis(string text) {
        qtd_QShortcut_setWhatsThis_string(qtdNativeId, text);
    }

    public final string whatsThis() const {
        string res;
        qtd_QShortcut_whatsThis_const(qtdNativeId, &res);
        return res;
    }

    public bool event(QEvent e) {
        return qtd_QShortcut_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QShortcut_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QShortcut);
    }

    static QShortcut __getObject(void* nativeId) {
        return static_cast!(QShortcut)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QShortcut_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QShortcut_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QShortcut(nativeId, initFlags);
        QShortcut.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("activated"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!()("activatedAmbiguously"), index));

    }

    public alias void __isQtType_QShortcut;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    public this(QKeySequence key, QWidget parent, Qt.ShortcutContext context = Qt.WindowShortcut) {
        this(key, parent, null, null, context);
    }

}

// C wrappers for signal emitters
private extern(C) void  qtd_QShortcut_activated(void* __this_nativeId);
private extern(C) void  qtd_QShortcut_activatedAmbiguously(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QShortcut_QShortcut_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QShortcut_QShortcut_QKeySequence_QWidget_nativepointerchar_nativepointerchar_ShortcutContext(void *d_ptr,
 void* key0,
 void* parent1,
 const (char*) member2,
 const (char*) ambiguousMember3,
 int context4);
private extern(C) bool  qtd_QShortcut_autoRepeat_const(void* __this_nativeId);
private extern(C) int  qtd_QShortcut_context(void* __this_nativeId);
private extern(C) int  qtd_QShortcut_id_const(void* __this_nativeId);
private extern(C) bool  qtd_QShortcut_isEnabled_const(void* __this_nativeId);
private extern(C) void*  qtd_QShortcut_key_const(void* __this_nativeId);
private extern(C) void*  qtd_QShortcut_parentWidget_const(void* __this_nativeId);
private extern(C) void  qtd_QShortcut_setAutoRepeat_bool(void* __this_nativeId,
 bool on0);
private extern(C) void  qtd_QShortcut_setContext_ShortcutContext(void* __this_nativeId,
 int context0);
private extern(C) void  qtd_QShortcut_setEnabled_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QShortcut_setKey_QKeySequence(void* __this_nativeId,
 void* key0);
private extern(C) void  qtd_QShortcut_setWhatsThis_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QShortcut_whatsThis_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QShortcut_event_QEvent(void* __this_nativeId,
 void* e0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QShortcut_initCallBacks(void* virtuals);

extern(C) void static_init_QShortcut() {
    qtd_QShortcut_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QShortcut_activated_handle(void* dId, void** args) {
        auto d_object = cast(QShortcut) dId;
        //d_object.activated_emit();
}*/
/*private extern(C) void qtd_QShortcut_activatedAmbiguously_handle(void* dId, void** args) {
        auto d_object = cast(QShortcut) dId;
        //d_object.activatedAmbiguously_emit();
}*/

extern(C) QMetaObjectNative* qtd_QShortcut_staticMetaObject();

extern(C) void qtd_QShortcut_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QShortcut_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
