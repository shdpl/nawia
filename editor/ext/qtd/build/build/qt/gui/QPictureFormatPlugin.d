module qt.gui.QPictureFormatPlugin;

public import qt.gui.QPictureFormatPlugin_aux;
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
public import qt.gui.QPicture;
public import qt.core.QObject;
public import qt.gui.QAbstractPictureFormat;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QAbstractFactory;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QPictureFormatPlugin : QObject, IQAbstractPictureFormat, IQAbstractFactory
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
        void* ret = qtd_QPictureFormatPlugin_QPictureFormatPlugin_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract bool installIOHandler(string format);

    public abstract QList!(string) keys() const;

    public bool loadPicture(string format, string filename, QPicture pic) {
        return qtd_QPictureFormatPlugin_loadPicture_string_string_nativepointerQPicture(qtdNativeId, format, filename, pic is null ? null : pic.qtdNativeId);
    }

    public bool savePicture(string format, string filename, const(QPicture) pic) {
        return qtd_QPictureFormatPlugin_savePicture_string_string_QPicture(qtdNativeId, format, filename, pic is null ? null : (cast(QPicture)pic).qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QPictureFormatPlugin_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QPictureFormatPlugin);
    }

    static QPictureFormatPlugin __getObject(void* nativeId) {
        return static_cast!(QPictureFormatPlugin)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QPictureFormatPlugin_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QPictureFormatPlugin_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QPictureFormatPlugin_ConcreteWrapper(nativeId, initFlags);
        QPictureFormatPlugin.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QPictureFormatPlugin;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQAbstractPictureFormat = qtd_QPictureFormatPlugin_cast_to_QAbstractPictureFormat(nativeId);
            __m_ptr_IQAbstractFactory = qtd_QPictureFormatPlugin_cast_to_QAbstractFactory(nativeId);
    }

    private void* __m_ptr_IQAbstractPictureFormat;
    public void* __ptr_IQAbstractPictureFormat() { return __m_ptr_IQAbstractPictureFormat; }

    private void* __m_ptr_IQAbstractFactory;
    public void* __ptr_IQAbstractFactory() { return __m_ptr_IQAbstractFactory; }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QPictureFormatPlugin_cast_to_QAbstractPictureFormat(void* nativeId);
    private static extern (C) void*qtd_QPictureFormatPlugin_cast_to_QAbstractFactory(void* nativeId);

    public class QPictureFormatPlugin_ConcreteWrapper : QPictureFormatPlugin {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public bool installIOHandler(string format) {
            return qtd_QPictureFormatPlugin_installIOHandler_string(qtdNativeId, format);
        }

        override         public QList!(string) keys() const {
            auto res = QList!(string).opCall();
            qtd_QPictureFormatPlugin_keys_const(qtdNativeId, &res);
            return res;
        }
    }


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPictureFormatPlugin_QPictureFormatPlugin_QObject(void *d_ptr,
 void* parent0);
private extern(C) bool  qtd_QPictureFormatPlugin_installIOHandler_string(void* __this_nativeId,
 string format0);
private extern(C) void  qtd_QPictureFormatPlugin_keys_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QPictureFormatPlugin_loadPicture_string_string_nativepointerQPicture(void* __this_nativeId,
 string format0,
 string filename1,
 void* pic2);
private extern(C) bool  qtd_QPictureFormatPlugin_savePicture_string_string_QPicture(void* __this_nativeId,
 string format0,
 string filename1,
 void* pic2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QPictureFormatPlugin_initCallBacks(void* virtuals);

extern(C) void static_init_QPictureFormatPlugin() {
    qtd_QPictureFormatPlugin_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QPictureFormatPlugin_staticMetaObject();

extern(C) void qtd_QPictureFormatPlugin_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QPictureFormatPlugin_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
