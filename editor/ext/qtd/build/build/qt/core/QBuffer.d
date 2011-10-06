module qt.core.QBuffer;

public import qt.core.QBuffer_aux;
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
public import qt.core.QIODevice;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QBuffer : QIODevice
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

    public this(QByteArray buf, QObject parent_ = null) {
        void* ret = qtd_QBuffer_QBuffer_nativepointerQByteArray_QObject(cast(void*) this, buf is null ? null : buf.qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QObject parent_ = null) {
        void* ret = qtd_QBuffer_QBuffer_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QByteArray buffer() {
        void* ret = qtd_QBuffer_buffer(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    protected final void connectNotify(const(char*) arg__1) {
        qtd_QBuffer_connectNotify_nativepointerchar(qtdNativeId, arg__1);
    }

    public final const(QByteArray) data() const {
        void* ret = qtd_QBuffer_data_const(qtdNativeId);
        const(QByteArray) __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    protected final void disconnectNotify(const(char*) arg__1) {
        qtd_QBuffer_disconnectNotify_nativepointerchar(qtdNativeId, arg__1);
    }

    private final void setBuffer_private(QByteArray a) {
        qtd_QBuffer_setBuffer_private_nativepointerQByteArray(qtdNativeId, a is null ? null : a.qtdNativeId);
    }

    public final void setData(const(QByteArray) data) {
        qtd_QBuffer_setData_QByteArray(qtdNativeId, data is null ? null : (cast(QByteArray)data).qtdNativeId);
    }

    private final void setData(const(char*) data, int len) {
        qtd_QBuffer_setData_nativepointerchar_int(qtdNativeId, data, len);
    }

    public bool atEnd() const {
        return qtd_QBuffer_atEnd_const(qtdNativeId);
    }

    public bool canReadLine() const {
        return qtd_QBuffer_canReadLine_const(qtdNativeId);
    }

    public void close() {
        qtd_QBuffer_close(qtdNativeId);
    }

    public bool open(int openMode) {
        return qtd_QBuffer_open_OpenMode(qtdNativeId, openMode);
    }

    public long pos() const {
        return qtd_QBuffer_pos_const(qtdNativeId);
    }

    protected long readData(char* data, long maxlen) {
        return qtd_QBuffer_readData_nativepointerchar_long(qtdNativeId, data, maxlen);
    }

    public bool seek(long off) {
        return qtd_QBuffer_seek_long(qtdNativeId, off);
    }

    public long size() const {
        return qtd_QBuffer_size_const(qtdNativeId);
    }

    protected long writeData(const(char*) data, long len) {
        return qtd_QBuffer_writeData_nativepointerchar_long(qtdNativeId, data, len);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QBuffer_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QBuffer);
    }

    static QBuffer __getObject(void* nativeId) {
        return static_cast!(QBuffer)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QBuffer_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QBuffer_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QBuffer(nativeId, initFlags);
        QBuffer.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QBuffer;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    // retain a reference to avoid gc
    private Object strongDataReference = null;
    public final void setBuffer(QByteArray byteArray) {
        setBuffer_private(byteArray);
        strongDataReference = byteArray;
    }

    public final void setData(byte data[]) {
        setData(cast(char*)data.ptr, cast(int)data.length);
    }

}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QBuffer_QBuffer_nativepointerQByteArray_QObject(void *d_ptr,
 void* buf0,
 void* parent1);
private extern(C) void* qtd_QBuffer_QBuffer_QObject(void *d_ptr,
 void* parent0);
private extern(C) void*  qtd_QBuffer_buffer(void* __this_nativeId);
private extern(C) void  qtd_QBuffer_connectNotify_nativepointerchar(void* __this_nativeId,
 const (char*) arg__1);
private extern(C) void*  qtd_QBuffer_data_const(void* __this_nativeId);
private extern(C) void  qtd_QBuffer_disconnectNotify_nativepointerchar(void* __this_nativeId,
 const (char*) arg__1);
private extern(C) void  qtd_QBuffer_setBuffer_private_nativepointerQByteArray(void* __this_nativeId,
 void* a0);
private extern(C) void  qtd_QBuffer_setData_QByteArray(void* __this_nativeId,
 void* data0);
private extern(C) void  qtd_QBuffer_setData_nativepointerchar_int(void* __this_nativeId,
 const (char*) data0,
 int len1);
private extern(C) bool  qtd_QBuffer_atEnd_const(void* __this_nativeId);
private extern(C) bool  qtd_QBuffer_canReadLine_const(void* __this_nativeId);
private extern(C) void  qtd_QBuffer_close(void* __this_nativeId);
private extern(C) bool  qtd_QBuffer_open_OpenMode(void* __this_nativeId,
 int openMode0);
private extern(C) long  qtd_QBuffer_pos_const(void* __this_nativeId);
private extern(C) long  qtd_QBuffer_readData_nativepointerchar_long(void* __this_nativeId,
 char* data0,
 long maxlen1);
private extern(C) bool  qtd_QBuffer_seek_long(void* __this_nativeId,
 long off0);
private extern(C) long  qtd_QBuffer_size_const(void* __this_nativeId);
private extern(C) long  qtd_QBuffer_writeData_nativepointerchar_long(void* __this_nativeId,
 const (char*) data0,
 long len1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QBuffer_initCallBacks(void* virtuals);

extern(C) void static_init_QBuffer() {
    qtd_QBuffer_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QBuffer_aboutToClose_handle(void* dId, void** args) {
        auto d_object = cast(QBuffer) dId;
        //d_object.aboutToClose_emit();
}*/
/*private extern(C) void qtd_QBuffer_bytesWritten_handle(void* dId, void** args) {
        auto d_object = cast(QBuffer) dId;
        auto bytes0 = *(cast(long*)args[1]);
        //d_object.bytesWritten_emit(bytes0);
}*/
/*private extern(C) void qtd_QBuffer_readChannelFinished_handle(void* dId, void** args) {
        auto d_object = cast(QBuffer) dId;
        //d_object.readChannelFinished_emit();
}*/
/*private extern(C) void qtd_QBuffer_readyRead_handle(void* dId, void** args) {
        auto d_object = cast(QBuffer) dId;
        //d_object.readyRead_emit();
}*/

extern(C) QMetaObjectNative* qtd_QBuffer_staticMetaObject();

extern(C) void qtd_QBuffer_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QBuffer_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
