module qt.gui.QTextCodecPlugin;

public import qt.gui.QTextCodecPlugin_aux;
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
public import qt.core.QTextCodec;
public import qt.gui.QAbstractTextCodecFactory;
public import qt.core.QList;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QAbstractFactory;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QTextCodecPlugin : QObject, IQAbstractTextCodecFactory, IQAbstractFactory
{

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

    public this(QObject parent_ = null) {
        void* ret = qtd_QTextCodecPlugin_QTextCodecPlugin_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    deprecated     public final QTextCodec create(string name) {
        void* ret = qtd_QTextCodecPlugin_create_string(qtdNativeId, name);
        QTextCodec __d_return_value = qtd_QTextCodec_from_ptr(ret);

        return __d_return_value;
    }

    deprecated     public final QList!(string) keys() const {
        auto res = QList!(string).opCall();
        qtd_QTextCodecPlugin_keys_const(qtdNativeId, &res);
        return res;
    }

    public abstract QList!(QByteArray) aliases() const;

    public abstract QTextCodec createForMib(int mib);

    public abstract QTextCodec createForName(const(QByteArray) name);

    public abstract QList!(int) mibEnums() const;

    public abstract QList!(QByteArray) names() const;
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTextCodecPlugin_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTextCodecPlugin);
    }

    static QTextCodecPlugin __getObject(void* nativeId) {
        return static_cast!(QTextCodecPlugin)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTextCodecPlugin_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTextCodecPlugin_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTextCodecPlugin_ConcreteWrapper(nativeId, initFlags);
        QTextCodecPlugin.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QTextCodecPlugin;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQAbstractTextCodecFactory = qtd_QTextCodecPlugin_cast_to_QAbstractTextCodecFactory(nativeId);
            __m_ptr_IQAbstractFactory = qtd_QTextCodecPlugin_cast_to_QAbstractFactory(nativeId);
    }

    private void* __m_ptr_IQAbstractTextCodecFactory;
    public void* __ptr_IQAbstractTextCodecFactory() { return __m_ptr_IQAbstractTextCodecFactory; }

    private void* __m_ptr_IQAbstractFactory;
    public void* __ptr_IQAbstractFactory() { return __m_ptr_IQAbstractFactory; }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QTextCodecPlugin_cast_to_QAbstractTextCodecFactory(void* nativeId);
    private static extern (C) void*qtd_QTextCodecPlugin_cast_to_QAbstractFactory(void* nativeId);

    public class QTextCodecPlugin_ConcreteWrapper : QTextCodecPlugin {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public QList!(QByteArray) aliases() const {
            auto res = QList!(QByteArray).opCall();
            qtd_QTextCodecPlugin_aliases_const(qtdNativeId, &res);
            return res;
        }

        override         public QTextCodec createForMib(int mib) {
            void* ret = qtd_QTextCodecPlugin_createForMib_int(qtdNativeId, mib);
            QTextCodec __d_return_value = qtd_QTextCodec_from_ptr(ret);

            return __d_return_value;
        }

        override         public QTextCodec createForName(const(QByteArray) name) {
            void* ret = qtd_QTextCodecPlugin_createForName_QByteArray(qtdNativeId, name is null ? null : (cast(QByteArray)name).qtdNativeId);
            QTextCodec __d_return_value = qtd_QTextCodec_from_ptr(ret);

            return __d_return_value;
        }

        override         public QList!(int) mibEnums() const {
            auto res = QList!(int).opCall();
            qtd_QTextCodecPlugin_mibEnums_const(qtdNativeId, &res);
            return res;
        }

        override         public QList!(QByteArray) names() const {
            auto res = QList!(QByteArray).opCall();
            qtd_QTextCodecPlugin_names_const(qtdNativeId, &res);
            return res;
        }
    }


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextCodecPlugin_QTextCodecPlugin_QObject(void *d_ptr,
 void* parent0);
    deprecated final void*  qtd_QTextCodecPlugin_create_string(void* __this_nativeId,
 string name0)
    {
        throw new Exception("No Implementation Exception");
    }

    deprecated final void  qtd_QTextCodecPlugin_keys_const(void* __this_nativeId,
 void* __d_return_value)
    {
        throw new Exception("No Implementation Exception");
    }

private extern(C) void  qtd_QTextCodecPlugin_aliases_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QTextCodecPlugin_createForMib_int(void* __this_nativeId,
 int mib0);
private extern(C) void*  qtd_QTextCodecPlugin_createForName_QByteArray(void* __this_nativeId,
 void* name0);
private extern(C) void  qtd_QTextCodecPlugin_mibEnums_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QTextCodecPlugin_names_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, QList!(QByteArray)* __d_arr) qtd_QTextCodecPlugin_aliases_const_dispatch; }
extern(C) void qtd_export_QTextCodecPlugin_aliases_const_dispatch(void *dId, QList!(QByteArray)* __d_arr){
    auto d_object = cast(QTextCodecPlugin) dId;
    auto return_value = d_object.aliases();
    *__d_arr = return_value;
}

extern(C){ extern void* function(void *dId, int mib0) qtd_QTextCodecPlugin_createForMib_int_dispatch; }
extern(C) void* qtd_export_QTextCodecPlugin_createForMib_int_dispatch(void *dId, int mib0){
    auto d_object = cast(QTextCodecPlugin) dId;
    QTextCodec ret_value = d_object.createForMib(mib0);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void* function(void *dId, void* name0) qtd_QTextCodecPlugin_createForName_QByteArray_dispatch; }
extern(C) void* qtd_export_QTextCodecPlugin_createForName_QByteArray_dispatch(void *dId, void* name0){
    auto d_object = cast(QTextCodecPlugin) dId;
    scope name0_d_ref = new QByteArray(name0, QtdObjectInitFlags.onStack);
    QTextCodec ret_value = d_object.createForName(name0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, QList!(int)* __d_arr) qtd_QTextCodecPlugin_mibEnums_const_dispatch; }
extern(C) void qtd_export_QTextCodecPlugin_mibEnums_const_dispatch(void *dId, QList!(int)* __d_arr){
    auto d_object = cast(QTextCodecPlugin) dId;
    auto return_value = d_object.mibEnums();
    *__d_arr = return_value;
}

extern(C){ extern void function(void *dId, QList!(QByteArray)* __d_arr) qtd_QTextCodecPlugin_names_const_dispatch; }
extern(C) void qtd_export_QTextCodecPlugin_names_const_dispatch(void *dId, QList!(QByteArray)* __d_arr){
    auto d_object = cast(QTextCodecPlugin) dId;
    auto return_value = d_object.names();
    *__d_arr = return_value;
}

private extern (C) void qtd_QTextCodecPlugin_initCallBacks(void* virtuals);

extern(C) void static_init_QTextCodecPlugin() {
    void*[5] virt_arr;
    virt_arr[0] = &qtd_export_QTextCodecPlugin_aliases_const_dispatch;
    virt_arr[1] = &qtd_export_QTextCodecPlugin_createForMib_int_dispatch;
    virt_arr[2] = &qtd_export_QTextCodecPlugin_createForName_QByteArray_dispatch;
    virt_arr[3] = &qtd_export_QTextCodecPlugin_mibEnums_const_dispatch;
    virt_arr[4] = &qtd_export_QTextCodecPlugin_names_const_dispatch;
    qtd_QTextCodecPlugin_initCallBacks(virt_arr.ptr);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QTextCodecPlugin_staticMetaObject();

extern(C) void qtd_QTextCodecPlugin_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTextCodecPlugin_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
