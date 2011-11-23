module qt.core.QObject;

public import qt.core.QObject_aux;
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
private import qt.core.ArrayOps2;
// automatic imports-------------
public import qt.core.QList;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QVariant;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QObject : PolymorphicObject
{

    package Object[] __rcEventFilters;

    private static const string[] __signalSignatures = [    ];

    int signalSignature(int signalId, ref stringz signature) {
        if (signalId < __signalSignatures.length)
            signature = __signalSignatures[signalId].ptr;
        else
            signalId -= __signalSignatures.length;
        return signalId;
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QObject_QObject_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool blockSignals(bool b) {
        return qtd_QObject_blockSignals_bool(qtdNativeId, b);
    }

    public final QList!(QObject) children() const {
        auto res = QList!(QObject).opCall();
        qtd_QObject_children_const(qtdNativeId, &res);
        return res;
    }

    public final void deleteLater() {
        qtd_QObject_deleteLater(qtdNativeId);
    }

    public final void dumpObjectInfo() {
        qtd_QObject_dumpObjectInfo(qtdNativeId);
    }

    public final void dumpObjectTree() {
        qtd_QObject_dumpObjectTree(qtdNativeId);
    }

    public final QList!(QByteArray) dynamicPropertyNames() const {
        auto res = QList!(QByteArray).opCall();
        qtd_QObject_dynamicPropertyNames_const(qtdNativeId, &res);
        return res;
    }

    public final void installEventFilter(QObject arg__1) {
        if (arg__1 !is null) {
            __rcEventFilters ~= cast(Object) arg__1;
        }
        qtd_QObject_installEventFilter_QObject(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final bool isWidgetType() const {
        return qtd_QObject_isWidgetType_const(qtdNativeId);
    }

    public final void killTimer(int id) {
        qtd_QObject_killTimer_int(qtdNativeId, id);
    }

    public final string objectName() const {
        string res;
        qtd_QObject_objectName_const(qtdNativeId, &res);
        return res;
    }

    public final QObject parent() const {
        void *ret = qtd_QObject_parent_const(qtdNativeId);
        QObject __d_return_value = QObject.__getObject(ret);
        return __d_return_value;
    }

    private final QVariant property(const(char*) name) const {
        void* ret = qtd_QObject_property_nativepointerchar_const(qtdNativeId, name);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final void removeEventFilter(QObject arg__1) {
        if (arg__1 !is null) {
            remove(__rcEventFilters, cast(Object) arg__1);
        }
        qtd_QObject_removeEventFilter_QObject(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected final QObject sender() const {
        void *ret = qtd_QObject_sender_const(qtdNativeId);
        QObject __d_return_value = QObject.__getObject(ret);
        return __d_return_value;
    }

    public final void setObjectName(string name) {
        qtd_QObject_setObjectName_string(qtdNativeId, name);
    }

    public final void setParent(QObject arg__1) {
        qtd_QObject_setParent_QObject(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool setProperty(const(char*) name, QVariant value) {
        return qtd_QObject_setProperty_nativepointerchar_QVariant(qtdNativeId, name, value is null ? null : value.qtdNativeId);
    }

    public final bool signalsBlocked() const {
        return qtd_QObject_signalsBlocked_const(qtdNativeId);
    }

    public final int startTimer(int interval) {
        return qtd_QObject_startTimer_int(qtdNativeId, interval);
    }

    protected void childEvent(QChildEvent arg__1) {
        qtd_QObject_childEvent_QChildEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void customEvent(QEvent arg__1) {
        qtd_QObject_customEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool event(QEvent arg__1) {
        return qtd_QObject_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool eventFilter(QObject arg__1, QEvent arg__2) {
        return qtd_QObject_eventFilter_QObject_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId, arg__2 is null ? null : arg__2.qtdNativeId);
    }

    protected void timerEvent(QTimerEvent arg__1) {
        qtd_QObject_timerEvent_QTimerEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "deleteLater()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QObject_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QObject);
    }

    static QObject __getObject(void* nativeId) {
        return static_cast!(QObject)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QObject_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QObject_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QObject(nativeId, initFlags);
        QObject.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("deleteLater"), index));

    }

    public alias void __isQObjectType;

    public alias void __isQtType_QObject;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        //assert (!(initFlags & QtdObjectInitFlags.onStack));
        qtdPin();
        _flags.isQObject = true;
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QObject_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QObject_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QObject_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    alias QMetaObject Meta;

    /* TODO: test whether the linked list is really a better solution
    public bool __stackAllocated = false;

    new(size_t size, void* p = null)
    {
    if (!p)
    {
    p = malloc(size);
    if (!p)
    assert(false, "Out of memory");
    GC.addRange(p, size);
    }
    return p;
    }

    delete(void* p)
    {
    if(p)
    {
    if (!(cast(typeof(this))p).__stackAllocated) {
    free(p);
    GC.removeRange(p);
    }
    }
    }
     */

    /*
    override void onSignalHandlerCreated(ref SignalHandler sh)
    {
    sh.signalEvent = &onSignalEvent;
    }

    private void onSignalEvent(int signalId, SignalEventId event)
    {
    stringz signature;
    signalSignature(signalId, signature);
    if (signature)
    {
    switch (event)
    {
    case SignalEventId.firstSlotConnected:
    qtd_connect(__nativeId, signature, signalId, cast(bool)(__flags_ & QtdObjectFlags.dynamicEntity));
    break;
    case SignalEventId.lastSlotDisconnected:
    qtd_disconnect(__nativeId, signature, signalId, cast(bool)(__flags_ & QtdObjectFlags.dynamicEntity));
    break;
    default:
    assert (false);
    }
    }
    }
     */

    /**
     */
        T findChild(T : QObject = QObject)(string name = null)
    {
        foreach (obj; children)
        {
            auto tmp = cast(T)obj;
            if (tmp && (!name.length || tmp.objectName == name))
                return tmp;

            tmp = obj.findChild!(T)(name);
            if (tmp)
                return tmp;
        }

        return null;
    }

    /**
     */
        T[] findChildren(T : QObject = QObject)(string name = null)
    {
        T[] result;

        void find(QObject[] objects)
        {
            foreach (obj; objects)
            {
                auto tmp = cast(T)obj;
                if (tmp && (!name.length || tmp.objectName == name))
                    result ~= tmp;
                find(obj.children);
            }
        }

        find(children);
        return result;
    }

    static void connect(QObject sender, string signal, QObject receiver, string method, int type = 0)
    {
        QMetaObject.connectImpl(sender, signal, receiver, method, type);
    }

    public final QVariant property(string name) {
        return property(name is null? null : toStringz(name));
    }

    public final bool setProperty(string name, QVariant value) {
        return setProperty(name is null? null : toStringz(name), value);
    }

}

    extern(C) void* qtd_get_d_qobject(void* nativeId);
    extern(C) void* qtd_create_qobject_entity(void* nativeId, void* dId);
    extern(C) void* qtd_QObject_metaObject(void* nativeId);

extern (C) void qtd_QObject_delete(void *ptr);
extern (C) void qtd_QObject_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QObject_QObject_QObject(void *d_ptr,
 void* parent0);
private extern(C) bool  qtd_QObject_blockSignals_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QObject_children_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QObject_deleteLater(void* __this_nativeId);
private extern(C) void  qtd_QObject_dumpObjectInfo(void* __this_nativeId);
private extern(C) void  qtd_QObject_dumpObjectTree(void* __this_nativeId);
private extern(C) void  qtd_QObject_dynamicPropertyNames_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QObject_installEventFilter_QObject(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QObject_isWidgetType_const(void* __this_nativeId);
private extern(C) void  qtd_QObject_killTimer_int(void* __this_nativeId,
 int id0);
private extern(C) void  qtd_QObject_objectName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QObject_parent_const(void* __this_nativeId);
private extern(C) void*  qtd_QObject_property_nativepointerchar_const(void* __this_nativeId,
 const (char*) name0);
private extern(C) void  qtd_QObject_removeEventFilter_QObject(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QObject_sender_const(void* __this_nativeId);
private extern(C) void  qtd_QObject_setObjectName_string(void* __this_nativeId,
 string name0);
private extern(C) void  qtd_QObject_setParent_QObject(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QObject_setProperty_nativepointerchar_QVariant(void* __this_nativeId,
 const (char*) name0,
 void* value1);
private extern(C) bool  qtd_QObject_signalsBlocked_const(void* __this_nativeId);
private extern(C) int  qtd_QObject_startTimer_int(void* __this_nativeId,
 int interval0);
private extern(C) void  qtd_QObject_childEvent_QChildEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QObject_customEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QObject_event_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QObject_eventFilter_QObject_QEvent(void* __this_nativeId,
 void* arg__1,
 void* arg__2);
private extern(C) void  qtd_QObject_timerEvent_QTimerEvent(void* __this_nativeId,
 void* arg__1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, void* arg__1) qtd_QObject_childEvent_QChildEvent_dispatch; }
extern(C) void qtd_export_QObject_childEvent_QChildEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QObject) dId;
    scope arg__1_d_ref = new QChildEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.childEvent(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QObject_customEvent_QEvent_dispatch; }
extern(C) void qtd_export_QObject_customEvent_QEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QObject) dId;
    scope arg__1_d_ref = new QEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.customEvent(arg__1_d_ref);
}

extern(C){ extern bool function(void *dId, void* arg__1) qtd_QObject_event_QEvent_dispatch; }
extern(C) bool qtd_export_QObject_event_QEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QObject) dId;
    scope arg__1_d_ref = new QEvent(arg__1, QtdObjectInitFlags.onStack);
    auto return_value = d_object.event(arg__1_d_ref);
    return return_value;
}

extern(C){ extern bool function(void *dId, void* arg__1, void* arg__2) qtd_QObject_eventFilter_QObject_QEvent_dispatch; }
extern(C) bool qtd_export_QObject_eventFilter_QObject_QEvent_dispatch(void *dId, void* arg__1, void* arg__2){
    auto d_object = cast(QObject) dId;
    scope arg__1_d_ref = new QObject(arg__1, QtdObjectInitFlags.onStack);

    scope arg__2_d_ref = new QEvent(arg__2, QtdObjectInitFlags.onStack);
    auto return_value = d_object.eventFilter(arg__1_d_ref, arg__2_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QObject_timerEvent_QTimerEvent_dispatch; }
extern(C) void qtd_export_QObject_timerEvent_QTimerEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QObject) dId;
    scope arg__1_d_ref = new QTimerEvent(arg__1, QtdObjectInitFlags.onStack);
    d_object.timerEvent(arg__1_d_ref);
}

private extern (C) void qtd_QObject_initCallBacks(void* virtuals, void* signals);

extern(C) void static_init_QObject() {
    void*[5] virt_arr;
    virt_arr[0] = &qtd_export_QObject_childEvent_QChildEvent_dispatch;
    virt_arr[1] = &qtd_export_QObject_customEvent_QEvent_dispatch;
    virt_arr[2] = &qtd_export_QObject_event_QEvent_dispatch;
    virt_arr[3] = &qtd_export_QObject_eventFilter_QObject_QEvent_dispatch;
    virt_arr[4] = &qtd_export_QObject_timerEvent_QTimerEvent_dispatch;

    void*[2] sign_arr;
    sign_arr[0] = &qtd_export_QObject_qt_metacall_dispatch;
    sign_arr[1] = &qtd_export_QObject_metaObject_dispatch;
    qtd_QObject_initCallBacks(virt_arr.ptr, sign_arr.ptr);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QObject_staticMetaObject();

extern(C) void qtd_QObject_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QObject_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
extern(C) int qtd_export_QObject_qt_metacall_dispatch(void *d_entity, MetaCall _c, int _id, void **_a) {
    auto d_object = cast(QObject) d_entity;
    return d_object.qt_metacall(_c, _id, _a);
};

extern(C) void* qtd_export_QObject_metaObject_dispatch(void *d_entity) {
    auto d_object = cast(QObject) d_entity;
    return d_object.metaObject().nativeId();
};

