module qt.core.QTextStream;

public import qt.core.QTextStream_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QLocale;
public import qt.core.QIODevice;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextStream : QtdObject
{
    public enum RealNumberNotation {
        SmartNotation = 0,
        FixedNotation = 1,
        ScientificNotation = 2
    }

    alias RealNumberNotation.SmartNotation SmartNotation;
    alias RealNumberNotation.FixedNotation FixedNotation;
    alias RealNumberNotation.ScientificNotation ScientificNotation;

    public enum NumberFlag {
        ShowBase = 1,
        ForcePoint = 2,
        ForceSign = 4,
        UppercaseBase = 8,
        UppercaseDigits = 16
    }

    alias NumberFlag.ShowBase ShowBase;
    alias NumberFlag.ForcePoint ForcePoint;
    alias NumberFlag.ForceSign ForceSign;
    alias NumberFlag.UppercaseBase UppercaseBase;
    alias NumberFlag.UppercaseDigits UppercaseDigits;

    public enum FieldAlignment {
        AlignLeft = 0,
        AlignRight = 1,
        AlignCenter = 2,
        AlignAccountingStyle = 3
    }

    alias FieldAlignment.AlignLeft AlignLeft;
    alias FieldAlignment.AlignRight AlignRight;
    alias FieldAlignment.AlignCenter AlignCenter;
    alias FieldAlignment.AlignAccountingStyle AlignAccountingStyle;

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
        void* ret = qtd_QTextStream_QTextStream(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QIODevice device) {
        {
            __rcDevice = cast(Object) device;
        }
        void* ret = qtd_QTextStream_QTextStream_QIODevice(cast(void*) this, device is null ? null : device.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QByteArray) array, int openMode = 1) {
        void* ret = qtd_QTextStream_QTextStream_QByteArray_OpenMode(cast(void*) this, array is null ? null : (cast(QByteArray)array).qtdNativeId, openMode);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool atEnd() const {
        return qtd_QTextStream_atEnd_const(qtdNativeId);
    }

    public final bool autoDetectUnicode() const {
        return qtd_QTextStream_autoDetectUnicode_const(qtdNativeId);
    }

    public final QIODevice device() const {
        void *ret = qtd_QTextStream_device_const(qtdNativeId);
        QIODevice __d_return_value = QIODevice.__getObject(ret);
        return __d_return_value;
    }

    public final QTextStream.FieldAlignment fieldAlignment() const {
        return cast(QTextStream.FieldAlignment) qtd_QTextStream_fieldAlignment_const(qtdNativeId);
    }

    public final int fieldWidth() const {
        return qtd_QTextStream_fieldWidth_const(qtdNativeId);
    }

    public final void flush() {
        qtd_QTextStream_flush(qtdNativeId);
    }

    public final bool generateByteOrderMark() const {
        return qtd_QTextStream_generateByteOrderMark_const(qtdNativeId);
    }

    public final int integerBase() const {
        return qtd_QTextStream_integerBase_const(qtdNativeId);
    }

    public final QLocale locale() const {
        void* ret = qtd_QTextStream_locale_const(qtdNativeId);
        QLocale __d_return_value = new QLocale(ret);
        return __d_return_value;
    }

    public final int numberFlags() const {
        return qtd_QTextStream_numberFlags_const(qtdNativeId);
    }

    public final QTextStream writeBoolean(bool b) {
        qtd_QTextStream_writeBoolean_bool(qtdNativeId, b);
        return this;
    }

    public final QTextStream writeByte(char ch) {
        qtd_QTextStream_writeByte_char(qtdNativeId, ch);
        return this;
    }

    public final QTextStream writeString(string s) {
        qtd_QTextStream_writeString_string(qtdNativeId, s);
        return this;
    }

    public final QTextStream writeDouble(double f) {
        qtd_QTextStream_writeDouble_double(qtdNativeId, f);
        return this;
    }

    public final QTextStream writeFloat(float f) {
        qtd_QTextStream_writeFloat_float(qtdNativeId, f);
        return this;
    }

    public final QTextStream writeInt(int i) {
        qtd_QTextStream_writeInt_int(qtdNativeId, i);
        return this;
    }

    private final QTextStream writeShort_char(short i) {
        qtd_QTextStream_writeShort_char_short(qtdNativeId, i);
        return this;
    }

    private final QTextStream operator_shift_right_byte(char* ch) {
        qtd_QTextStream_operator_shift_right_byte_nativepointerchar(qtdNativeId, ch);
        return this;
    }

    private final QTextStream operator_shift_right_double(double* f) {
        qtd_QTextStream_operator_shift_right_double_nativepointerdouble(qtdNativeId, f);
        return this;
    }

    private final QTextStream operator_shift_right_float(float* f) {
        qtd_QTextStream_operator_shift_right_float_nativepointerfloat(qtdNativeId, f);
        return this;
    }

    private final QTextStream operator_shift_right_int(int* i) {
        qtd_QTextStream_operator_shift_right_int_nativepointerint(qtdNativeId, i);
        return this;
    }

    private final QTextStream operator_shift_right_short(short* i) {
        qtd_QTextStream_operator_shift_right_short_nativepointershort(qtdNativeId, i);
        return this;
    }

    public final long pos() const {
        return qtd_QTextStream_pos_const(qtdNativeId);
    }

    public final string read(long maxlen) {
        string res;
        qtd_QTextStream_read_long(qtdNativeId, &res, maxlen);
        return res;
    }

    public final string readAll() {
        string res;
        qtd_QTextStream_readAll(qtdNativeId, &res);
        return res;
    }

    public final string readLine(long maxlen = 0) {
        string res;
        qtd_QTextStream_readLine_long(qtdNativeId, &res, maxlen);
        return res;
    }

    public final QTextStream.RealNumberNotation realNumberNotation() const {
        return cast(QTextStream.RealNumberNotation) qtd_QTextStream_realNumberNotation_const(qtdNativeId);
    }

    public final int realNumberPrecision() const {
        return qtd_QTextStream_realNumberPrecision_const(qtdNativeId);
    }

    public final void reset() {
        qtd_QTextStream_reset(qtdNativeId);
    }

    public final void resetStatus() {
        qtd_QTextStream_resetStatus(qtdNativeId);
    }

    public final bool seek(long pos) {
        return qtd_QTextStream_seek_long(qtdNativeId, pos);
    }

    public final void setAutoDetectUnicode(bool enabled) {
        qtd_QTextStream_setAutoDetectUnicode_bool(qtdNativeId, enabled);
    }

    private final void setCodec(const(char*) codecName) {
        qtd_QTextStream_setCodec_nativepointerchar(qtdNativeId, codecName);
    }

    public final void setDevice(QIODevice device) {
        {
            __rcDevice = cast(Object) device;
        }
        qtd_QTextStream_setDevice_QIODevice(qtdNativeId, device is null ? null : device.qtdNativeId);
    }

    public final void setFieldAlignment(QTextStream.FieldAlignment alignment) {
        qtd_QTextStream_setFieldAlignment_FieldAlignment(qtdNativeId, alignment);
    }

    public final void setFieldWidth(int width) {
        qtd_QTextStream_setFieldWidth_int(qtdNativeId, width);
    }

    public final void setGenerateByteOrderMark(bool generate) {
        qtd_QTextStream_setGenerateByteOrderMark_bool(qtdNativeId, generate);
    }

    public final void setIntegerBase(int base) {
        qtd_QTextStream_setIntegerBase_int(qtdNativeId, base);
    }

    public final void setLocale(const(QLocale) locale) {
        qtd_QTextStream_setLocale_QLocale(qtdNativeId, locale is null ? null : (cast(QLocale)locale).qtdNativeId);
    }

    public final void setNumberFlags(int flags) {
        qtd_QTextStream_setNumberFlags_NumberFlags(qtdNativeId, flags);
    }

    public final void setRealNumberNotation(QTextStream.RealNumberNotation notation) {
        qtd_QTextStream_setRealNumberNotation_RealNumberNotation(qtdNativeId, notation);
    }

    public final void setRealNumberPrecision(int precision) {
        qtd_QTextStream_setRealNumberPrecision_int(qtdNativeId, precision);
    }

    public final void setStatus(QTextStream.Status status) {
        qtd_QTextStream_setStatus_Status(qtdNativeId, status);
    }

    public final void skipWhiteSpace() {
        qtd_QTextStream_skipWhiteSpace(qtdNativeId);
    }

    public final QTextStream.Status status() const {
        return cast(QTextStream.Status) qtd_QTextStream_status_const(qtdNativeId);
    }
// Field accessors
    static QTextStream __getObject(void* nativeId) {
        return qtd_QTextStream_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QTextStream;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextStream_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextStream_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextStream_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*    public final void setCodec(String codecName) {
    setCodec(QNativePointer.createCharPointer(codecName));
    if (codec() != __rcCodec)
    __rcCodec = null;
    }

    private QNativePointer srb = new QNativePointer(QNativePointer.Type.Byte, 32) {
    {
    setVerificationEnabled(false);
    }
    };

    public final byte readByte() {
    operator_shift_right_byte(srb);
    return srb.byteValue();
    }

    public final short readShort() {
    operator_shift_right_short(srb);
    return srb.shortValue();
    }

    public final int readInt() {
    operator_shift_right_int(srb);
    return srb.intValue();
    }

    public final long readLong() {
    operator_shift_right_long(srb);
    return srb.longValue();
    }

    public final float readFloat() {
    operator_shift_right_float(srb);
    return srb.floatValue();
    }

    public final double readDouble() {
    operator_shift_right_double(srb);
    return srb.doubleValue();
    }

    public final QTextStream writeShort(short s) {
    writeShort_char((char) s);
    return this;
    }

    public final QTextStream writeChar(char c) {
    writeShort_char(c);
    return this;
    }

    public final char readChar() {
    operator_shift_right_short(srb);
    return srb.charValue();
    }

    public final String readString() {
    return readString_native(nativeId());
    }

    public final void writeString(String string) {
    writeString_native(nativeId(), string);
    }

    private final native String readString_native(long id);

    private final native void writeString_native(long id, String string);
     */

}

extern (C) void *__QTextStream_entity(void *q_ptr);

QTextStream qtd_QTextStream_from_ptr(void* ret) {
    auto return_value = new QTextStream(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QTextStream_delete(void *ptr);
extern (C) void qtd_QTextStream_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextStream_QTextStream(void *d_ptr);
private extern(C) void* qtd_QTextStream_QTextStream_QIODevice(void *d_ptr,
 void* device0);
private extern(C) void* qtd_QTextStream_QTextStream_QByteArray_OpenMode(void *d_ptr,
 void* array0,
 int openMode1);
private extern(C) bool  qtd_QTextStream_atEnd_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextStream_autoDetectUnicode_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextStream_device_const(void* __this_nativeId);
private extern(C) int  qtd_QTextStream_fieldAlignment_const(void* __this_nativeId);
private extern(C) int  qtd_QTextStream_fieldWidth_const(void* __this_nativeId);
private extern(C) void  qtd_QTextStream_flush(void* __this_nativeId);
private extern(C) bool  qtd_QTextStream_generateByteOrderMark_const(void* __this_nativeId);
private extern(C) int  qtd_QTextStream_integerBase_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextStream_locale_const(void* __this_nativeId);
private extern(C) int  qtd_QTextStream_numberFlags_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextStream_writeBoolean_bool(void* __this_nativeId,
 bool b0);
private extern(C) void*  qtd_QTextStream_writeByte_char(void* __this_nativeId,
 char ch0);
private extern(C) void*  qtd_QTextStream_writeString_string(void* __this_nativeId,
 string s0);
private extern(C) void*  qtd_QTextStream_writeDouble_double(void* __this_nativeId,
 double f0);
private extern(C) void*  qtd_QTextStream_writeFloat_float(void* __this_nativeId,
 float f0);
private extern(C) void*  qtd_QTextStream_writeInt_int(void* __this_nativeId,
 int i0);
private extern(C) void*  qtd_QTextStream_writeShort_char_short(void* __this_nativeId,
 short i0);
private extern(C) void*  qtd_QTextStream_operator_shift_right_byte_nativepointerchar(void* __this_nativeId,
 char * ch0);
private extern(C) void*  qtd_QTextStream_operator_shift_right_double_nativepointerdouble(void* __this_nativeId,
 double * f0);
private extern(C) void*  qtd_QTextStream_operator_shift_right_float_nativepointerfloat(void* __this_nativeId,
 float * f0);
private extern(C) void*  qtd_QTextStream_operator_shift_right_int_nativepointerint(void* __this_nativeId,
 int * i0);
private extern(C) void*  qtd_QTextStream_operator_shift_right_short_nativepointershort(void* __this_nativeId,
 short * i0);
private extern(C) long  qtd_QTextStream_pos_const(void* __this_nativeId);
private extern(C) void  qtd_QTextStream_read_long(void* __this_nativeId,
 void* __d_return_value,
 long maxlen0);
private extern(C) void  qtd_QTextStream_readAll(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QTextStream_readLine_long(void* __this_nativeId,
 void* __d_return_value,
 long maxlen0);
private extern(C) int  qtd_QTextStream_realNumberNotation_const(void* __this_nativeId);
private extern(C) int  qtd_QTextStream_realNumberPrecision_const(void* __this_nativeId);
private extern(C) void  qtd_QTextStream_reset(void* __this_nativeId);
private extern(C) void  qtd_QTextStream_resetStatus(void* __this_nativeId);
private extern(C) bool  qtd_QTextStream_seek_long(void* __this_nativeId,
 long pos0);
private extern(C) void  qtd_QTextStream_setAutoDetectUnicode_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QTextStream_setCodec_nativepointerchar(void* __this_nativeId,
 const (char*) codecName0);
private extern(C) void  qtd_QTextStream_setDevice_QIODevice(void* __this_nativeId,
 void* device0);
private extern(C) void  qtd_QTextStream_setFieldAlignment_FieldAlignment(void* __this_nativeId,
 int alignment0);
private extern(C) void  qtd_QTextStream_setFieldWidth_int(void* __this_nativeId,
 int width0);
private extern(C) void  qtd_QTextStream_setGenerateByteOrderMark_bool(void* __this_nativeId,
 bool generate0);
private extern(C) void  qtd_QTextStream_setIntegerBase_int(void* __this_nativeId,
 int base0);
private extern(C) void  qtd_QTextStream_setLocale_QLocale(void* __this_nativeId,
 void* locale0);
private extern(C) void  qtd_QTextStream_setNumberFlags_NumberFlags(void* __this_nativeId,
 int flags0);
private extern(C) void  qtd_QTextStream_setRealNumberNotation_RealNumberNotation(void* __this_nativeId,
 int notation0);
private extern(C) void  qtd_QTextStream_setRealNumberPrecision_int(void* __this_nativeId,
 int precision0);
private extern(C) void  qtd_QTextStream_setStatus_Status(void* __this_nativeId,
 int status0);
private extern(C) void  qtd_QTextStream_skipWhiteSpace(void* __this_nativeId);
private extern(C) int  qtd_QTextStream_status_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTextStream_initCallBacks(void* virtuals);

extern(C) void static_init_QTextStream() {
    qtd_QTextStream_initCallBacks(null);
}

// signal handlers

