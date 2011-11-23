module qt.core.QDataStream;

public import qt.core.QDataStream_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QIODevice;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDataStream : QtdObject
{
    public enum Version {
        Qt_1_0 = 1,
        Qt_2_0 = 2,
        Qt_2_1 = 3,
        Qt_3_0 = 4,
        Qt_3_1 = 5,
        Qt_3_3 = 6,
        Qt_4_0 = 7,
        Qt_4_2 = 8,
        Qt_4_3 = 9,
        Qt_4_4 = 10,
        Qt_4_6 = 12,
        Qt_4_7 = 12
    }

    alias Version.Qt_1_0 Qt_1_0;
    alias Version.Qt_2_0 Qt_2_0;
    alias Version.Qt_2_1 Qt_2_1;
    alias Version.Qt_3_0 Qt_3_0;
    alias Version.Qt_3_1 Qt_3_1;
    alias Version.Qt_3_3 Qt_3_3;
    alias Version.Qt_4_0 Qt_4_0;
    alias Version.Qt_4_2 Qt_4_2;
    alias Version.Qt_4_3 Qt_4_3;
    alias Version.Qt_4_4 Qt_4_4;
    alias Version.Qt_4_6 Qt_4_6;
    alias Version.Qt_4_7 Qt_4_7;

    public enum Status {
        Ok = 0,
        ReadPastEnd = 1,
        ReadCorruptData = 2
    }

    alias Status.Ok Ok;
    alias Status.ReadPastEnd ReadPastEnd;
    alias Status.ReadCorruptData ReadCorruptData;


Object __rcDevice = null;

// Functions

    public this() {
        void* ret = qtd_QDataStream_QDataStream(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QByteArray arg__1, int flags) {
        void* ret = qtd_QDataStream_QDataStream_nativepointerQByteArray_OpenMode(cast(void*) this, arg__1 is null ? null : arg__1.qtdNativeId, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QIODevice arg__1) {
        void* ret = qtd_QDataStream_QDataStream_QIODevice(cast(void*) this, arg__1 is null ? null : arg__1.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QByteArray) arg__1) {
        void* ret = qtd_QDataStream_QDataStream_QByteArray(cast(void*) this, arg__1 is null ? null : (cast(QByteArray)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool atEnd() const {
        return qtd_QDataStream_atEnd_const(qtdNativeId);
    }

    public final QDataStream writeBoolean(bool i) {
        qtd_QDataStream_writeBoolean_bool(qtdNativeId, i);
        return this;
    }

    public final QDataStream writeDouble(double f) {
        qtd_QDataStream_writeDouble_double(qtdNativeId, f);
        return this;
    }

    public final QDataStream writeFloat(float f) {
        qtd_QDataStream_writeFloat_float(qtdNativeId, f);
        return this;
    }

    public final QDataStream writeInt(int i) {
        qtd_QDataStream_writeInt_int(qtdNativeId, i);
        return this;
    }

    public final QDataStream writeLong(long i) {
        qtd_QDataStream_writeLong_long(qtdNativeId, i);
        return this;
    }

    private final QDataStream writeShort_char(short i) {
        qtd_QDataStream_writeShort_char_short(qtdNativeId, i);
        return this;
    }

    public final QDataStream writeByte(byte i) {
        qtd_QDataStream_writeByte_byte(qtdNativeId, i);
        return this;
    }

    private final QDataStream operator_shift_right_boolean(bool* i) {
        qtd_QDataStream_operator_shift_right_boolean_nativepointerbool(qtdNativeId, i);
        return this;
    }

    private final QDataStream operator_shift_right_double(double* f) {
        qtd_QDataStream_operator_shift_right_double_nativepointerdouble(qtdNativeId, f);
        return this;
    }

    private final QDataStream operator_shift_right_float(float* f) {
        qtd_QDataStream_operator_shift_right_float_nativepointerfloat(qtdNativeId, f);
        return this;
    }

    private final QDataStream operator_shift_right_int(int* i) {
        qtd_QDataStream_operator_shift_right_int_nativepointerint(qtdNativeId, i);
        return this;
    }

    private final QDataStream operator_shift_right_long(long* i) {
        qtd_QDataStream_operator_shift_right_long_nativepointerlong(qtdNativeId, i);
        return this;
    }

    private final QDataStream operator_shift_right_short(short* i) {
        qtd_QDataStream_operator_shift_right_short_nativepointershort(qtdNativeId, i);
        return this;
    }

    private final QDataStream operator_shift_right_byte(byte* i) {
        qtd_QDataStream_operator_shift_right_byte_nativepointerbyte(qtdNativeId, i);
        return this;
    }

    private final QDataStream operator_shift_right_char(ushort* i) {
        qtd_QDataStream_operator_shift_right_char_nativepointerushort(qtdNativeId, i);
        return this;
    }

    public final void resetStatus() {
        qtd_QDataStream_resetStatus(qtdNativeId);
    }

    public final void setDevice(QIODevice arg__1) {
        {
            __rcDevice = cast(Object) arg__1;
        }
        qtd_QDataStream_setDevice_QIODevice(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void setStatus(QDataStream.Status status) {
        qtd_QDataStream_setStatus_Status(qtdNativeId, status);
    }

    public final void setVersion(int arg__1) {
        qtd_QDataStream_setVersion_int(qtdNativeId, arg__1);
    }

    public final int skipRawData(int len) {
        return qtd_QDataStream_skipRawData_int(qtdNativeId, len);
    }

    public final QDataStream.Status status() const {
        return cast(QDataStream.Status) qtd_QDataStream_status_const(qtdNativeId);
    }

    public final void unsetDevice() {
        qtd_QDataStream_unsetDevice(qtdNativeId);
        __rcDevice = null;


    }

    public final int version_() const {
        return qtd_QDataStream_version__const(qtdNativeId);
    }
// Field accessors
    static QDataStream __getObject(void* nativeId) {
        return qtd_QDataStream_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QDataStream;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDataStream_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDataStream_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDataStream_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    public final bool readBoolean() {
        bool res;
        operator_shift_right_boolean(&res);
        return res;
    }

    public final byte readByte() {
        byte res;
        operator_shift_right_byte(&res);
        return res;
    }

    public final short readShort() {
        short res;
        operator_shift_right_short(&res);
        return res;
    }

    public final int readInt() {
        int res;
        operator_shift_right_int(&res);
        return res;
    }

    public final long readLong() {
        long res;
        operator_shift_right_long(&res);
        return res;
    }

    public final ushort readChar() {
        ushort res;
        operator_shift_right_char(&res);
        return res;
    }

    public final float readFloat() {
        float res;
        operator_shift_right_float(&res);
        return res;
    }

    public final double readDouble() {
        double res;
        operator_shift_right_double(&res);
        return res;
    }

    public final QDataStream writeShort(short s) {
        writeShort_char(s);
        return this;
    }
    /*
    private static extern(C) void qtd_QDataStream_readString_private(void* __this_nativeId);

    private native void writeString_private(long nativeId, String string);

    public final String readString() {
    if (nativeId() == 0)
    throw new QNoNativeResourcesException("Function call on incomplete object of type: " + getClass().getName());
    return readString_private(nativeId());
    }

    public final void writeString(String string) {
    if (nativeId() == 0)
    throw new QNoNativeResourcesException("Function call on incomplete object of type: " + getClass().getName());
    writeString_private(nativeId(), string);
    }

    private native int writeBytes(long id, byte buffer[], int length);

    private native int readBytes(long id, byte buffer[], int length);

    public final int writeBytes(byte buffer[]) {
    return writeBytes(buffer, buffer.length);
    }

    public final int writeBytes(byte buffer[], int length) {
    return writeBytes(nativeId(), buffer, length);
    }

    public final int readBytes(byte buffer[]) {
    return readBytes(buffer, buffer.length);
    }

    public final int readBytes(byte buffer[], int length) {
    return readBytes(nativeId(), buffer, length);
    }
     */

}

extern (C) void *__QDataStream_entity(void *q_ptr);

QDataStream qtd_QDataStream_from_ptr(void* ret) {
    auto return_value = new QDataStream(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QDataStream_delete(void *ptr);
extern (C) void qtd_QDataStream_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDataStream_QDataStream(void *d_ptr);
private extern(C) void* qtd_QDataStream_QDataStream_nativepointerQByteArray_OpenMode(void *d_ptr,
 void* arg__1,
 int flags1);
private extern(C) void* qtd_QDataStream_QDataStream_QIODevice(void *d_ptr,
 void* arg__1);
private extern(C) void* qtd_QDataStream_QDataStream_QByteArray(void *d_ptr,
 void* arg__1);
private extern(C) bool  qtd_QDataStream_atEnd_const(void* __this_nativeId);
private extern(C) void*  qtd_QDataStream_writeBoolean_bool(void* __this_nativeId,
 bool i0);
private extern(C) void*  qtd_QDataStream_writeDouble_double(void* __this_nativeId,
 double f0);
private extern(C) void*  qtd_QDataStream_writeFloat_float(void* __this_nativeId,
 float f0);
private extern(C) void*  qtd_QDataStream_writeInt_int(void* __this_nativeId,
 int i0);
private extern(C) void*  qtd_QDataStream_writeLong_long(void* __this_nativeId,
 long i0);
private extern(C) void*  qtd_QDataStream_writeShort_char_short(void* __this_nativeId,
 short i0);
private extern(C) void*  qtd_QDataStream_writeByte_byte(void* __this_nativeId,
 byte i0);
private extern(C) void*  qtd_QDataStream_operator_shift_right_boolean_nativepointerbool(void* __this_nativeId,
 bool * i0);
private extern(C) void*  qtd_QDataStream_operator_shift_right_double_nativepointerdouble(void* __this_nativeId,
 double * f0);
private extern(C) void*  qtd_QDataStream_operator_shift_right_float_nativepointerfloat(void* __this_nativeId,
 float * f0);
private extern(C) void*  qtd_QDataStream_operator_shift_right_int_nativepointerint(void* __this_nativeId,
 int * i0);
private extern(C) void*  qtd_QDataStream_operator_shift_right_long_nativepointerlong(void* __this_nativeId,
 long * i0);
private extern(C) void*  qtd_QDataStream_operator_shift_right_short_nativepointershort(void* __this_nativeId,
 short * i0);
private extern(C) void*  qtd_QDataStream_operator_shift_right_byte_nativepointerbyte(void* __this_nativeId,
 byte * i0);
private extern(C) void*  qtd_QDataStream_operator_shift_right_char_nativepointerushort(void* __this_nativeId,
 ushort * i0);
private extern(C) void  qtd_QDataStream_resetStatus(void* __this_nativeId);
private extern(C) void  qtd_QDataStream_setDevice_QIODevice(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QDataStream_setStatus_Status(void* __this_nativeId,
 int status0);
private extern(C) void  qtd_QDataStream_setVersion_int(void* __this_nativeId,
 int arg__1);
private extern(C) int  qtd_QDataStream_skipRawData_int(void* __this_nativeId,
 int len0);
private extern(C) int  qtd_QDataStream_status_const(void* __this_nativeId);
private extern(C) void  qtd_QDataStream_unsetDevice(void* __this_nativeId);
private extern(C) int  qtd_QDataStream_version__const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QDataStream_initCallBacks(void* virtuals);

extern(C) void static_init_QDataStream() {
    qtd_QDataStream_initCallBacks(null);
}

// signal handlers

