module qt.core.QIODevice;

public import qt.core.QIODevice_aux;
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
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QIODevice : QObject
{
    public enum OpenModeFlag {
        NotOpen = 0,
        ReadOnly = 1,
        WriteOnly = 2,
        ReadWrite = 3,
        Append = 4,
        Truncate = 8,
        Text = 16,
        Unbuffered = 32
    }

    alias OpenModeFlag.NotOpen NotOpen;
    alias OpenModeFlag.ReadOnly ReadOnly;
    alias OpenModeFlag.WriteOnly WriteOnly;
    alias OpenModeFlag.ReadWrite ReadWrite;
    alias OpenModeFlag.Append Append;
    alias OpenModeFlag.Truncate Truncate;
    alias OpenModeFlag.Text Text;
    alias OpenModeFlag.Unbuffered Unbuffered;


    private static const string[] __signalSignatures = [
            "aboutToClose()", 
            "bytesWritten(qint64)", 
            "readChannelFinished()", 
            "readyRead()"    ];

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

    protected final void aboutToClose() {
        qtd_QIODevice_aboutToClose(qtdNativeId);
    }

    protected final void bytesWritten(long bytes) {
        qtd_QIODevice_bytesWritten_long(qtdNativeId, bytes);
    }

    protected final void readChannelFinished() {
        qtd_QIODevice_readChannelFinished(qtdNativeId);
    }

    protected final void readyRead() {
        qtd_QIODevice_readyRead(qtdNativeId);
    }
// Functions

    public this() {
        void* ret = qtd_QIODevice_QIODevice(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QObject parent_) {
        void* ret = qtd_QIODevice_QIODevice_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string errorString() const {
        string res;
        qtd_QIODevice_errorString_const(qtdNativeId, &res);
        return res;
    }

    private final bool getByte(char* c) {
        return qtd_QIODevice_getByte_nativepointerchar(qtdNativeId, c);
    }

    public final bool isOpen() const {
        return qtd_QIODevice_isOpen_const(qtdNativeId);
    }

    public final bool isReadable() const {
        return qtd_QIODevice_isReadable_const(qtdNativeId);
    }

    public final bool isTextModeEnabled() const {
        return qtd_QIODevice_isTextModeEnabled_const(qtdNativeId);
    }

    public final bool isWritable() const {
        return qtd_QIODevice_isWritable_const(qtdNativeId);
    }

    public final int openMode() const {
        return qtd_QIODevice_openMode_const(qtdNativeId);
    }

    public final long peek(char* data, long maxlen) {
        return qtd_QIODevice_peek_nativepointerchar_long(qtdNativeId, data, maxlen);
    }

    public final QByteArray peek(long maxlen) {
        void* ret = qtd_QIODevice_peek_long(qtdNativeId, maxlen);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final bool putByte(char c) {
        return qtd_QIODevice_putByte_char(qtdNativeId, c);
    }

    public final long read(char* data, long maxlen) {
        return qtd_QIODevice_read_nativepointerchar_long(qtdNativeId, data, maxlen);
    }

    public final QByteArray read(long maxlen) {
        void* ret = qtd_QIODevice_read_long(qtdNativeId, maxlen);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QByteArray readAll() {
        void* ret = qtd_QIODevice_readAll(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final long readLine(char* data, long maxlen) {
        return qtd_QIODevice_readLine_nativepointerchar_long(qtdNativeId, data, maxlen);
    }

    public final QByteArray readLine(long maxlen = 0) {
        void* ret = qtd_QIODevice_readLine_long(qtdNativeId, maxlen);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    protected final void setErrorString(string errorString) {
        qtd_QIODevice_setErrorString_string(qtdNativeId, errorString);
    }

    protected final void setOpenMode(int openMode) {
        qtd_QIODevice_setOpenMode_OpenMode(qtdNativeId, openMode);
    }

    public final void setTextModeEnabled(bool enabled) {
        qtd_QIODevice_setTextModeEnabled_bool(qtdNativeId, enabled);
    }

    public final void ungetByte(char c) {
        qtd_QIODevice_ungetByte_char(qtdNativeId, c);
    }

    public final long write(const(QByteArray) data) {
        return qtd_QIODevice_write_QByteArray(qtdNativeId, data is null ? null : (cast(QByteArray)data).qtdNativeId);
    }

    private final long write(const(char*) data) {
        return qtd_QIODevice_write_nativepointerchar(qtdNativeId, data);
    }

    public final long write(const(char*) data, long len) {
        return qtd_QIODevice_write_nativepointerchar_long(qtdNativeId, data, len);
    }

    public bool atEnd() const {
        return qtd_QIODevice_atEnd_const(qtdNativeId);
    }

    public long bytesAvailable() const {
        return qtd_QIODevice_bytesAvailable_const(qtdNativeId);
    }

    public long bytesToWrite() const {
        return qtd_QIODevice_bytesToWrite_const(qtdNativeId);
    }

    public bool canReadLine() const {
        return qtd_QIODevice_canReadLine_const(qtdNativeId);
    }

    public void close() {
        qtd_QIODevice_close(qtdNativeId);
    }

    public bool isSequential() const {
        return qtd_QIODevice_isSequential_const(qtdNativeId);
    }

    public bool open(int mode) {
        return qtd_QIODevice_open_OpenMode(qtdNativeId, mode);
    }

    public long pos() const {
        return qtd_QIODevice_pos_const(qtdNativeId);
    }

    protected abstract long readData(char* data, long maxlen);

    protected long readLineData(char* data, long maxlen) {
        return qtd_QIODevice_readLineData_nativepointerchar_long(qtdNativeId, data, maxlen);
    }

    public bool reset() {
        return qtd_QIODevice_reset(qtdNativeId);
    }

    public bool seek(long pos) {
        return qtd_QIODevice_seek_long(qtdNativeId, pos);
    }

    public long size() const {
        return qtd_QIODevice_size_const(qtdNativeId);
    }

    public bool waitForBytesWritten(int msecs) {
        return qtd_QIODevice_waitForBytesWritten_int(qtdNativeId, msecs);
    }

    public bool waitForReadyRead(int msecs) {
        return qtd_QIODevice_waitForReadyRead_int(qtdNativeId, msecs);
    }

    protected abstract long writeData(const(char*) data, long len);
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QIODevice_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QIODevice);
    }

    static QIODevice __getObject(void* nativeId) {
        return static_cast!(QIODevice)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QIODevice_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QIODevice_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QIODevice_ConcreteWrapper(nativeId, initFlags);
        QIODevice.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("aboutToClose"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(long)("bytesWritten"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!()("readChannelFinished"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!()("readyRead"), index));

    }

    public alias void __isQtType_QIODevice;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /**
     * Gets a byte from the device.
     *
     * @return -1 on failure, or the value of the byte on success
     */
    /*    public final int getByte() {
    QNativePointer np = new QNativePointer(QNativePointer.Type.Byte);
    boolean success = getByte(np);
    return success ? np.byteValue() : -1;
    }
     */

    public final long write(string str) {
        return write(str.ptr, str.length);
    }

}

    public class QIODevice_ConcreteWrapper : QIODevice {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         protected long readData(char* data, long maxlen) {
            return qtd_QIODevice_readData_nativepointerchar_long(qtdNativeId, data, maxlen);
        }

        override         protected long writeData(const(char*) data, long len) {
            return qtd_QIODevice_writeData_nativepointerchar_long(qtdNativeId, data, len);
        }
    }


// C wrappers for signal emitters
private extern(C) void  qtd_QIODevice_aboutToClose(void* __this_nativeId);
private extern(C) void  qtd_QIODevice_bytesWritten_long(void* __this_nativeId,
 long bytes0);
private extern(C) void  qtd_QIODevice_readChannelFinished(void* __this_nativeId);
private extern(C) void  qtd_QIODevice_readyRead(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QIODevice_QIODevice(void *d_ptr);
private extern(C) void* qtd_QIODevice_QIODevice_QObject(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QIODevice_errorString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QIODevice_getByte_nativepointerchar(void* __this_nativeId,
 char* c0);
private extern(C) bool  qtd_QIODevice_isOpen_const(void* __this_nativeId);
private extern(C) bool  qtd_QIODevice_isReadable_const(void* __this_nativeId);
private extern(C) bool  qtd_QIODevice_isTextModeEnabled_const(void* __this_nativeId);
private extern(C) bool  qtd_QIODevice_isWritable_const(void* __this_nativeId);
private extern(C) int  qtd_QIODevice_openMode_const(void* __this_nativeId);
private extern(C) long  qtd_QIODevice_peek_nativepointerchar_long(void* __this_nativeId,
 char* data0,
 long maxlen1);
private extern(C) void*  qtd_QIODevice_peek_long(void* __this_nativeId,
 long maxlen0);
private extern(C) bool  qtd_QIODevice_putByte_char(void* __this_nativeId,
 char c0);
private extern(C) long  qtd_QIODevice_read_nativepointerchar_long(void* __this_nativeId,
 char* data0,
 long maxlen1);
private extern(C) void*  qtd_QIODevice_read_long(void* __this_nativeId,
 long maxlen0);
private extern(C) void*  qtd_QIODevice_readAll(void* __this_nativeId);
private extern(C) long  qtd_QIODevice_readLine_nativepointerchar_long(void* __this_nativeId,
 char* data0,
 long maxlen1);
private extern(C) void*  qtd_QIODevice_readLine_long(void* __this_nativeId,
 long maxlen0);
private extern(C) void  qtd_QIODevice_setErrorString_string(void* __this_nativeId,
 string errorString0);
private extern(C) void  qtd_QIODevice_setOpenMode_OpenMode(void* __this_nativeId,
 int openMode0);
private extern(C) void  qtd_QIODevice_setTextModeEnabled_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QIODevice_ungetByte_char(void* __this_nativeId,
 char c0);
private extern(C) long  qtd_QIODevice_write_QByteArray(void* __this_nativeId,
 void* data0);
private extern(C) long  qtd_QIODevice_write_nativepointerchar(void* __this_nativeId,
 const (char*) data0);
private extern(C) long  qtd_QIODevice_write_nativepointerchar_long(void* __this_nativeId,
 const (char*) data0,
 long len1);
private extern(C) bool  qtd_QIODevice_atEnd_const(void* __this_nativeId);
private extern(C) long  qtd_QIODevice_bytesAvailable_const(void* __this_nativeId);
private extern(C) long  qtd_QIODevice_bytesToWrite_const(void* __this_nativeId);
private extern(C) bool  qtd_QIODevice_canReadLine_const(void* __this_nativeId);
private extern(C) void  qtd_QIODevice_close(void* __this_nativeId);
private extern(C) bool  qtd_QIODevice_isSequential_const(void* __this_nativeId);
private extern(C) bool  qtd_QIODevice_open_OpenMode(void* __this_nativeId,
 int mode0);
private extern(C) long  qtd_QIODevice_pos_const(void* __this_nativeId);
private extern(C) long  qtd_QIODevice_readData_nativepointerchar_long(void* __this_nativeId,
 char* data0,
 long maxlen1);
private extern(C) long  qtd_QIODevice_readLineData_nativepointerchar_long(void* __this_nativeId,
 char* data0,
 long maxlen1);
private extern(C) bool  qtd_QIODevice_reset(void* __this_nativeId);
private extern(C) bool  qtd_QIODevice_seek_long(void* __this_nativeId,
 long pos0);
private extern(C) long  qtd_QIODevice_size_const(void* __this_nativeId);
private extern(C) bool  qtd_QIODevice_waitForBytesWritten_int(void* __this_nativeId,
 int msecs0);
private extern(C) bool  qtd_QIODevice_waitForReadyRead_int(void* __this_nativeId,
 int msecs0);
private extern(C) long  qtd_QIODevice_writeData_nativepointerchar_long(void* __this_nativeId,
 const (char*) data0,
 long len1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId) qtd_QIODevice_atEnd_const_dispatch; }
extern(C) bool qtd_export_QIODevice_atEnd_const_dispatch(void *dId){
    auto d_object = cast(QIODevice) dId;
    auto return_value = d_object.atEnd();
    return return_value;
}

extern(C){ extern qint64 function(void *dId) qtd_QIODevice_bytesAvailable_const_dispatch; }
extern(C) qint64 qtd_export_QIODevice_bytesAvailable_const_dispatch(void *dId){
    auto d_object = cast(QIODevice) dId;
    auto return_value = d_object.bytesAvailable();
    return return_value;
}

extern(C){ extern qint64 function(void *dId) qtd_QIODevice_bytesToWrite_const_dispatch; }
extern(C) qint64 qtd_export_QIODevice_bytesToWrite_const_dispatch(void *dId){
    auto d_object = cast(QIODevice) dId;
    auto return_value = d_object.bytesToWrite();
    return return_value;
}

extern(C){ extern bool function(void *dId) qtd_QIODevice_canReadLine_const_dispatch; }
extern(C) bool qtd_export_QIODevice_canReadLine_const_dispatch(void *dId){
    auto d_object = cast(QIODevice) dId;
    auto return_value = d_object.canReadLine();
    return return_value;
}

extern(C){ extern void function(void *dId) qtd_QIODevice_close_dispatch; }
extern(C) void qtd_export_QIODevice_close_dispatch(void *dId){
    auto d_object = cast(QIODevice) dId;
    d_object.close();
}

extern(C){ extern bool function(void *dId) qtd_QIODevice_isSequential_const_dispatch; }
extern(C) bool qtd_export_QIODevice_isSequential_const_dispatch(void *dId){
    auto d_object = cast(QIODevice) dId;
    auto return_value = d_object.isSequential();
    return return_value;
}

extern(C){ extern bool function(void *dId, int mode0) qtd_QIODevice_open_OpenMode_dispatch; }
extern(C) bool qtd_export_QIODevice_open_OpenMode_dispatch(void *dId, int mode0){
    auto d_object = cast(QIODevice) dId;
    auto return_value = d_object.open(mode0);
    return return_value;
}

extern(C){ extern qint64 function(void *dId) qtd_QIODevice_pos_const_dispatch; }
extern(C) qint64 qtd_export_QIODevice_pos_const_dispatch(void *dId){
    auto d_object = cast(QIODevice) dId;
    auto return_value = d_object.pos();
    return return_value;
}

extern(C){ extern qint64 function(void *dId, char* data0, long maxlen1) qtd_QIODevice_readData_nativepointerchar_long_dispatch; }
extern(C) qint64 qtd_export_QIODevice_readData_nativepointerchar_long_dispatch(void *dId, char* data0, long maxlen1){
    auto d_object = cast(QIODevice) dId;
    auto return_value = d_object.readData(data0, maxlen1);
    return return_value;
}

extern(C){ extern qint64 function(void *dId, char* data0, long maxlen1) qtd_QIODevice_readLineData_nativepointerchar_long_dispatch; }
extern(C) qint64 qtd_export_QIODevice_readLineData_nativepointerchar_long_dispatch(void *dId, char* data0, long maxlen1){
    auto d_object = cast(QIODevice) dId;
    auto return_value = d_object.readLineData(data0, maxlen1);
    return return_value;
}

extern(C){ extern bool function(void *dId) qtd_QIODevice_reset_dispatch; }
extern(C) bool qtd_export_QIODevice_reset_dispatch(void *dId){
    auto d_object = cast(QIODevice) dId;
    auto return_value = d_object.reset();
    return return_value;
}

extern(C){ extern bool function(void *dId, long pos0) qtd_QIODevice_seek_long_dispatch; }
extern(C) bool qtd_export_QIODevice_seek_long_dispatch(void *dId, long pos0){
    auto d_object = cast(QIODevice) dId;
    auto return_value = d_object.seek(pos0);
    return return_value;
}

extern(C){ extern qint64 function(void *dId) qtd_QIODevice_size_const_dispatch; }
extern(C) qint64 qtd_export_QIODevice_size_const_dispatch(void *dId){
    auto d_object = cast(QIODevice) dId;
    auto return_value = d_object.size();
    return return_value;
}

extern(C){ extern bool function(void *dId, int msecs0) qtd_QIODevice_waitForBytesWritten_int_dispatch; }
extern(C) bool qtd_export_QIODevice_waitForBytesWritten_int_dispatch(void *dId, int msecs0){
    auto d_object = cast(QIODevice) dId;
    auto return_value = d_object.waitForBytesWritten(msecs0);
    return return_value;
}

extern(C){ extern bool function(void *dId, int msecs0) qtd_QIODevice_waitForReadyRead_int_dispatch; }
extern(C) bool qtd_export_QIODevice_waitForReadyRead_int_dispatch(void *dId, int msecs0){
    auto d_object = cast(QIODevice) dId;
    auto return_value = d_object.waitForReadyRead(msecs0);
    return return_value;
}

extern(C){ extern qint64 function(void *dId, const (char*) data0, long len1) qtd_QIODevice_writeData_nativepointerchar_long_dispatch; }
extern(C) qint64 qtd_export_QIODevice_writeData_nativepointerchar_long_dispatch(void *dId, const (char*) data0, long len1){
    auto d_object = cast(QIODevice) dId;
    auto return_value = d_object.writeData(data0, len1);
    return return_value;
}

private extern (C) void qtd_QIODevice_initCallBacks(void* virtuals);

extern(C) void static_init_QIODevice() {
    void*[16] virt_arr;
    virt_arr[0] = &qtd_export_QIODevice_atEnd_const_dispatch;
    virt_arr[1] = &qtd_export_QIODevice_bytesAvailable_const_dispatch;
    virt_arr[2] = &qtd_export_QIODevice_bytesToWrite_const_dispatch;
    virt_arr[3] = &qtd_export_QIODevice_canReadLine_const_dispatch;
    virt_arr[4] = &qtd_export_QIODevice_close_dispatch;
    virt_arr[5] = &qtd_export_QIODevice_isSequential_const_dispatch;
    virt_arr[6] = &qtd_export_QIODevice_open_OpenMode_dispatch;
    virt_arr[7] = &qtd_export_QIODevice_pos_const_dispatch;
    virt_arr[8] = &qtd_export_QIODevice_readData_nativepointerchar_long_dispatch;
    virt_arr[9] = &qtd_export_QIODevice_readLineData_nativepointerchar_long_dispatch;
    virt_arr[10] = &qtd_export_QIODevice_reset_dispatch;
    virt_arr[11] = &qtd_export_QIODevice_seek_long_dispatch;
    virt_arr[12] = &qtd_export_QIODevice_size_const_dispatch;
    virt_arr[13] = &qtd_export_QIODevice_waitForBytesWritten_int_dispatch;
    virt_arr[14] = &qtd_export_QIODevice_waitForReadyRead_int_dispatch;
    virt_arr[15] = &qtd_export_QIODevice_writeData_nativepointerchar_long_dispatch;
    qtd_QIODevice_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QIODevice_aboutToClose_handle(void* dId, void** args) {
        auto d_object = cast(QIODevice) dId;
        //d_object.aboutToClose_emit();
}*/
/*private extern(C) void qtd_QIODevice_bytesWritten_handle(void* dId, void** args) {
        auto d_object = cast(QIODevice) dId;
        auto bytes0 = *(cast(long*)args[1]);
        //d_object.bytesWritten_emit(bytes0);
}*/
/*private extern(C) void qtd_QIODevice_readChannelFinished_handle(void* dId, void** args) {
        auto d_object = cast(QIODevice) dId;
        //d_object.readChannelFinished_emit();
}*/
/*private extern(C) void qtd_QIODevice_readyRead_handle(void* dId, void** args) {
        auto d_object = cast(QIODevice) dId;
        //d_object.readyRead_emit();
}*/

extern(C) QMetaObjectNative* qtd_QIODevice_staticMetaObject();

extern(C) void qtd_QIODevice_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QIODevice_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
