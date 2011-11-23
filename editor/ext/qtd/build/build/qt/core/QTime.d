module qt.core.QTime;

public import qt.core.QTime_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.core.QDataStream;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTime : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QTime_QTime();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int h, int m, int s = 0, int ms = 0) {
        void* ret = qtd_QTime_QTime_int_int_int_int(h, m, s, ms);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QTime addMSecs(int ms) const {
        void* ret = qtd_QTime_addMSecs_int_const(qtdNativeId, ms);
        QTime __d_return_value = new QTime(ret);
        return __d_return_value;
    }

    public final QTime addSecs(int secs) const {
        void* ret = qtd_QTime_addSecs_int_const(qtdNativeId, secs);
        QTime __d_return_value = new QTime(ret);
        return __d_return_value;
    }

    public final int elapsed() const {
        return qtd_QTime_elapsed_const(qtdNativeId);
    }

    public final int hour() const {
        return qtd_QTime_hour_const(qtdNativeId);
    }

    public final bool isNull() const {
        return qtd_QTime_isNull_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QTime_isValid_const(qtdNativeId);
    }

    public final int minute() const {
        return qtd_QTime_minute_const(qtdNativeId);
    }

    public final int msec() const {
        return qtd_QTime_msec_const(qtdNativeId);
    }

    public final int msecsTo(const(QTime) arg__1) const {
        return qtd_QTime_msecsTo_QTime_const(qtdNativeId, arg__1 is null ? null : (cast(QTime)arg__1).qtdNativeId);
    }

    private final bool operator_less(const(QTime) other) const {
        return qtd_QTime_operator_less_QTime_const(qtdNativeId, other is null ? null : (cast(QTime)other).qtdNativeId);
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QTime_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool operator_equal(const(QTime) other) const {
        return qtd_QTime_operator_equal_QTime_const(qtdNativeId, other is null ? null : (cast(QTime)other).qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QTime_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final int restart() {
        return qtd_QTime_restart(qtdNativeId);
    }

    public final int second() const {
        return qtd_QTime_second_const(qtdNativeId);
    }

    public final int secsTo(const(QTime) arg__1) const {
        return qtd_QTime_secsTo_QTime_const(qtdNativeId, arg__1 is null ? null : (cast(QTime)arg__1).qtdNativeId);
    }

    public final bool setHMS(int h, int m, int s, int ms = 0) {
        return qtd_QTime_setHMS_int_int_int_int(qtdNativeId, h, m, s, ms);
    }

    public final void start() {
        qtd_QTime_start(qtdNativeId);
    }

    public final string toString(Qt.DateFormat f = Qt.DateFormat.TextDate) const {
        string res;
        qtd_QTime_toString_DateFormat_const(qtdNativeId, &res, f);
        return res;
    }

    public final string toString(string format) const {
        string res;
        qtd_QTime_toString_string_const(qtdNativeId, &res, format);
        return res;
    }

    public static QTime currentTime() {
        void* ret = qtd_QTime_currentTime();
        QTime __d_return_value = new QTime(ret);
        return __d_return_value;
    }

    public static QTime fromString(string s, Qt.DateFormat f = Qt.DateFormat.TextDate) {
        void* ret = qtd_QTime_fromString_string_DateFormat(s, f);
        QTime __d_return_value = new QTime(ret);
        return __d_return_value;
    }

    public static QTime fromString(string s, string format) {
        void* ret = qtd_QTime_fromString_string_string(s, format);
        QTime __d_return_value = new QTime(ret);
        return __d_return_value;
    }

    public static bool isValid(int h, int m, int s, int ms = 0) {
        return qtd_QTime_isValid_int_int_int_int(h, m, s, ms);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QTime;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTime_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTime_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTime_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTime_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTime_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTime_QTypeInfo_isComplex();
        isStatic = qtd_QTime_QTypeInfo_isStatic();
        isLarge = qtd_QTime_QTypeInfo_isLarge();
        isPointer = qtd_QTime_QTypeInfo_isPointer();
        isDummy = qtd_QTime_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QTime_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTime_native_copy(const void* orig);
extern (C) void qtd_QTime_delete(void *ptr);
extern (C) void qtd_QTime_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTime_QTime();
private extern(C) void* qtd_QTime_QTime_int_int_int_int(int h0,
 int m1,
 int s2,
 int ms3);
private extern(C) void*  qtd_QTime_addMSecs_int_const(void* __this_nativeId,
 int ms0);
private extern(C) void*  qtd_QTime_addSecs_int_const(void* __this_nativeId,
 int secs0);
private extern(C) int  qtd_QTime_elapsed_const(void* __this_nativeId);
private extern(C) int  qtd_QTime_hour_const(void* __this_nativeId);
private extern(C) bool  qtd_QTime_isNull_const(void* __this_nativeId);
private extern(C) bool  qtd_QTime_isValid_const(void* __this_nativeId);
private extern(C) int  qtd_QTime_minute_const(void* __this_nativeId);
private extern(C) int  qtd_QTime_msec_const(void* __this_nativeId);
private extern(C) int  qtd_QTime_msecsTo_QTime_const(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QTime_operator_less_QTime_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QTime_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QTime_operator_equal_QTime_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QTime_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) int  qtd_QTime_restart(void* __this_nativeId);
private extern(C) int  qtd_QTime_second_const(void* __this_nativeId);
private extern(C) int  qtd_QTime_secsTo_QTime_const(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QTime_setHMS_int_int_int_int(void* __this_nativeId,
 int h0,
 int m1,
 int s2,
 int ms3);
private extern(C) void  qtd_QTime_start(void* __this_nativeId);
private extern(C) void  qtd_QTime_toString_DateFormat_const(void* __this_nativeId,
 void* __d_return_value,
 int f0);
private extern(C) void  qtd_QTime_toString_string_const(void* __this_nativeId,
 void* __d_return_value,
 string format0);
private extern(C) void*  qtd_QTime_currentTime();
private extern(C) void*  qtd_QTime_fromString_string_DateFormat(string s0,
 int f1);
private extern(C) void*  qtd_QTime_fromString_string_string(string s0,
 string format1);
private extern(C) bool  qtd_QTime_isValid_int_int_int_int(int h0,
 int m1,
 int s2,
 int ms3);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QTime() {
    QTime.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QTime_QTypeInfo_isComplex();
private extern (C) bool qtd_QTime_QTypeInfo_isStatic();
private extern (C) bool qtd_QTime_QTypeInfo_isLarge();
private extern (C) bool qtd_QTime_QTypeInfo_isPointer();
private extern (C) bool qtd_QTime_QTypeInfo_isDummy();
