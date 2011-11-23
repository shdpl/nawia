module qt.core.QSignalMapper;

public import qt.core.QSignalMapper_aux;
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
private import qt.core.ArrayOps2;
// automatic imports-------------
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSignalMapper : QObject
{

    package Object[] __rcMappings;

    private static const string[] __signalSignatures = [
            "mapped(QObject*)", 
            "mapped(QString)", 
            "mapped(int)"    ];

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

    protected final void mapped(QObject arg__1) {
        qtd_QSignalMapper_mapped_QObject(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected final void mapped(string arg__1) {
        qtd_QSignalMapper_mapped_string(qtdNativeId, arg__1);
    }

    protected final void mapped(int arg__1) {
        qtd_QSignalMapper_mapped_int(qtdNativeId, arg__1);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QSignalMapper_QSignalMapper_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void map() {
        qtd_QSignalMapper_map(qtdNativeId);
    }

    public final void map(QObject sender) {
        qtd_QSignalMapper_map_QObject(qtdNativeId, sender is null ? null : sender.qtdNativeId);
    }

    public final QObject mapping(QObject object) const {
        void *ret = qtd_QSignalMapper_mapping_QObject_const(qtdNativeId, object is null ? null : object.qtdNativeId);
        QObject __d_return_value = QObject.__getObject(ret);
        return __d_return_value;
    }

    public final QObject mapping(string text) const {
        void *ret = qtd_QSignalMapper_mapping_string_const(qtdNativeId, text);
        QObject __d_return_value = QObject.__getObject(ret);
        return __d_return_value;
    }

    public final QObject mapping(int id) const {
        void *ret = qtd_QSignalMapper_mapping_int_const(qtdNativeId, id);
        QObject __d_return_value = QObject.__getObject(ret);
        return __d_return_value;
    }

    public final void removeMappings(QObject sender) {
        if (sender !is null) {
            remove(__rcMappings, cast(Object) sender);
        }
        qtd_QSignalMapper_removeMappings_QObject(qtdNativeId, sender is null ? null : sender.qtdNativeId);
        if (__rcObjectForObject.containsKey(sender)) __rcObjectForObject.remove(sender);
        if (__rcWidgetForObject.containsKey(sender)) __rcWidgetForObject.remove(sender);


    }

    public final void setMapping(QObject sender, QObject object) {
        if (sender !is null) {
            __rcMappings ~= cast(Object) sender;
        }
        qtd_QSignalMapper_setMapping_QObject_QObject(qtdNativeId, sender is null ? null : sender.qtdNativeId, object is null ? null : object.qtdNativeId);
        if (object == null)
            __rcObjectForObject.remove(sender);
        else
            __rcObjectForObject.put(sender,object);


    }

    public final void setMapping(QObject sender, string text) {
        if (sender !is null) {
            __rcMappings ~= cast(Object) sender;
        }
        qtd_QSignalMapper_setMapping_QObject_string(qtdNativeId, sender is null ? null : sender.qtdNativeId, text);
    }

    public final void setMapping(QObject sender, int id) {
        if (sender !is null) {
            __rcMappings ~= cast(Object) sender;
        }
        qtd_QSignalMapper_setMapping_QObject_int(qtdNativeId, sender is null ? null : sender.qtdNativeId, id);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "map()", 
            "map(QObject*)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QSignalMapper_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QSignalMapper);
    }

    static QSignalMapper __getObject(void* nativeId) {
        return static_cast!(QSignalMapper)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QSignalMapper_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QSignalMapper_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QSignalMapper(nativeId, initFlags);
        QSignalMapper.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QObject)("mapped"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(string)("mapped"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(int)("mapped"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("map"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(QObject)("map"), index));

    }

    public alias void __isQtType_QSignalMapper;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    private java.util.Hashtable<QObject, QObject> __rcObjectForObject = new java.util.Hashtable<QObject, QObject>();

    private java.util.Hashtable<QObject, Object> __rcWidgetForObject = new java.util.Hashtable<QObject, Object>();

}

// C wrappers for signal emitters
private extern(C) void  qtd_QSignalMapper_mapped_QObject(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QSignalMapper_mapped_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QSignalMapper_mapped_int(void* __this_nativeId,
 int arg__1);

// C wrappers
private extern(C) void* qtd_QSignalMapper_QSignalMapper_QObject(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QSignalMapper_map(void* __this_nativeId);
private extern(C) void  qtd_QSignalMapper_map_QObject(void* __this_nativeId,
 void* sender0);
private extern(C) void*  qtd_QSignalMapper_mapping_QObject_const(void* __this_nativeId,
 void* object0);
private extern(C) void*  qtd_QSignalMapper_mapping_string_const(void* __this_nativeId,
 string text0);
private extern(C) void*  qtd_QSignalMapper_mapping_int_const(void* __this_nativeId,
 int id0);
private extern(C) void  qtd_QSignalMapper_removeMappings_QObject(void* __this_nativeId,
 void* sender0);
private extern(C) void  qtd_QSignalMapper_setMapping_QObject_QObject(void* __this_nativeId,
 void* sender0,
 void* object1);
private extern(C) void  qtd_QSignalMapper_setMapping_QObject_string(void* __this_nativeId,
 void* sender0,
 string text1);
private extern(C) void  qtd_QSignalMapper_setMapping_QObject_int(void* __this_nativeId,
 void* sender0,
 int id1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QSignalMapper_initCallBacks(void* virtuals);

extern(C) void static_init_QSignalMapper() {
    qtd_QSignalMapper_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QSignalMapper_mapped_handle(void* dId, void** args) {
        auto d_object = cast(QSignalMapper) dId;
        scope arg__1 = new QObject(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.mapped_emit(arg__1);
}*/
/*private extern(C) void qtd_QSignalMapper_mapped_handle(void* dId, void** args) {
        auto d_object = cast(QSignalMapper) dId;
        auto arg__1_ptr = args[1];
        string arg__1 = QStringUtil.toNativeString(arg__1_ptr);
        //d_object.mapped_emit(arg__1);
}*/
/*private extern(C) void qtd_QSignalMapper_mapped_handle(void* dId, void** args) {
        auto d_object = cast(QSignalMapper) dId;
        auto arg__1 = *(cast(int*)args[1]);
        //d_object.mapped_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QSignalMapper_staticMetaObject();

extern(C) void qtd_QSignalMapper_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QSignalMapper_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
