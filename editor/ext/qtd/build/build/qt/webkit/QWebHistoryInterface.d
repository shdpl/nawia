module qt.webkit.QWebHistoryInterface;

public import qt.webkit.QWebHistoryInterface_aux;
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
private import qt.webkit.ArrayOps2;
// automatic imports-------------
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QWebHistoryInterface : QObject
{

static Object __rcInterface = null;

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
        void* ret = qtd_QWebHistoryInterface_QWebHistoryInterface_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract void addHistoryEntry(string url);

    public abstract bool historyContains(string url) const;

    public static QWebHistoryInterface defaultInterface() {
        void *ret = qtd_QWebHistoryInterface_defaultInterface();
        QWebHistoryInterface __d_return_value = QWebHistoryInterface.__getObject(ret);
        return __d_return_value;
    }

    public static void setDefaultInterface(QWebHistoryInterface defaultInterface) {
        {
            __rcInterface = cast(Object) defaultInterface;
        }
        qtd_QWebHistoryInterface_setDefaultInterface_QWebHistoryInterface(defaultInterface is null ? null : defaultInterface.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QWebHistoryInterface_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QWebHistoryInterface);
    }

    static QWebHistoryInterface __getObject(void* nativeId) {
        return static_cast!(QWebHistoryInterface)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QWebHistoryInterface_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QWebHistoryInterface_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QWebHistoryInterface_ConcreteWrapper(nativeId, initFlags);
        QWebHistoryInterface.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QWebHistoryInterface;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QWebHistoryInterface_ConcreteWrapper : QWebHistoryInterface {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public void addHistoryEntry(string url) {
            qtd_QWebHistoryInterface_addHistoryEntry_string(qtdNativeId, url);
        }

        override         public bool historyContains(string url) const {
            return qtd_QWebHistoryInterface_historyContains_string_const(qtdNativeId, url);
        }
    }


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QWebHistoryInterface_QWebHistoryInterface_QObject(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QWebHistoryInterface_addHistoryEntry_string(void* __this_nativeId,
 string url0);
private extern(C) bool  qtd_QWebHistoryInterface_historyContains_string_const(void* __this_nativeId,
 string url0);
private extern(C) void*  qtd_QWebHistoryInterface_defaultInterface();
private extern(C) void  qtd_QWebHistoryInterface_setDefaultInterface_QWebHistoryInterface(void* defaultInterface0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, wchar* url0, int url0_size) qtd_QWebHistoryInterface_addHistoryEntry_string_dispatch; }
extern(C) void qtd_export_QWebHistoryInterface_addHistoryEntry_string_dispatch(void *dId, wchar* url0, int url0_size){
    auto d_object = cast(QWebHistoryInterface) dId;
    string url0_d_ref = toUTF8(url0[0..url0_size]);
    d_object.addHistoryEntry(url0_d_ref);
}

extern(C){ extern bool function(void *dId, wchar* url0, int url0_size) qtd_QWebHistoryInterface_historyContains_string_const_dispatch; }
extern(C) bool qtd_export_QWebHistoryInterface_historyContains_string_const_dispatch(void *dId, wchar* url0, int url0_size){
    auto d_object = cast(QWebHistoryInterface) dId;
    string url0_d_ref = toUTF8(url0[0..url0_size]);
    auto return_value = d_object.historyContains(url0_d_ref);
    return return_value;
}

private extern (C) void qtd_QWebHistoryInterface_initCallBacks(void* virtuals);

extern(C) void static_init_QWebHistoryInterface() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QWebHistoryInterface_addHistoryEntry_string_dispatch;
    virt_arr[1] = &qtd_export_QWebHistoryInterface_historyContains_string_const_dispatch;
    qtd_QWebHistoryInterface_initCallBacks(virt_arr.ptr);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QWebHistoryInterface_staticMetaObject();

extern(C) void qtd_QWebHistoryInterface_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QWebHistoryInterface_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
