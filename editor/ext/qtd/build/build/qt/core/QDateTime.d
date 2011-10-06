module qt.core.QDateTime;

public import qt.core.QDateTime_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.core.QDate;
public import qt.core.QTime;
public import qt.core.QDataStream;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDateTime : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QDateTime_QDateTime();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDate) arg__1) {
        void* ret = qtd_QDateTime_QDateTime_QDate(arg__1 is null ? null : (cast(QDate)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDate) arg__1, const(QTime) arg__2, Qt.TimeSpec spec = Qt.TimeSpec.LocalTime) {
        void* ret = qtd_QDateTime_QDateTime_QDate_QTime_TimeSpec(arg__1 is null ? null : (cast(QDate)arg__1).qtdNativeId, arg__2 is null ? null : (cast(QTime)arg__2).qtdNativeId, spec);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDateTime) other) {
        void* ret = qtd_QDateTime_QDateTime_QDateTime(other is null ? null : (cast(QDateTime)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QDateTime addDays(int days) const {
        void* ret = qtd_QDateTime_addDays_int_const(qtdNativeId, days);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final QDateTime addMSecs(long msecs) const {
        void* ret = qtd_QDateTime_addMSecs_long_const(qtdNativeId, msecs);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final QDateTime addMonths(int months) const {
        void* ret = qtd_QDateTime_addMonths_int_const(qtdNativeId, months);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final QDateTime addSecs(int secs) const {
        void* ret = qtd_QDateTime_addSecs_int_const(qtdNativeId, secs);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final QDateTime addYears(int years) const {
        void* ret = qtd_QDateTime_addYears_int_const(qtdNativeId, years);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final QDate date() const {
        void* ret = qtd_QDateTime_date_const(qtdNativeId);
        QDate __d_return_value = new QDate(ret);
        return __d_return_value;
    }

    public final int daysTo(const(QDateTime) arg__1) const {
        return qtd_QDateTime_daysTo_QDateTime_const(qtdNativeId, arg__1 is null ? null : (cast(QDateTime)arg__1).qtdNativeId);
    }

    public final bool isNull() const {
        return qtd_QDateTime_isNull_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QDateTime_isValid_const(qtdNativeId);
    }

    public final long msecsTo(const(QDateTime) arg__1) const {
        return qtd_QDateTime_msecsTo_QDateTime_const(qtdNativeId, arg__1 is null ? null : (cast(QDateTime)arg__1).qtdNativeId);
    }

    private final bool operator_less(const(QDateTime) other) const {
        return qtd_QDateTime_operator_less_QDateTime_const(qtdNativeId, other is null ? null : (cast(QDateTime)other).qtdNativeId);
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QDateTime_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool operator_equal(const(QDateTime) other) const {
        return qtd_QDateTime_operator_equal_QDateTime_const(qtdNativeId, other is null ? null : (cast(QDateTime)other).qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QDateTime_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final int secsTo(const(QDateTime) arg__1) const {
        return qtd_QDateTime_secsTo_QDateTime_const(qtdNativeId, arg__1 is null ? null : (cast(QDateTime)arg__1).qtdNativeId);
    }

    public final void setDate(const(QDate) date) {
        qtd_QDateTime_setDate_QDate(qtdNativeId, date is null ? null : (cast(QDate)date).qtdNativeId);
    }

    public final void setMSecsSinceEpoch(long msecs) {
        qtd_QDateTime_setMSecsSinceEpoch_long(qtdNativeId, msecs);
    }

    public final void setTime(const(QTime) time) {
        qtd_QDateTime_setTime_QTime(qtdNativeId, time is null ? null : (cast(QTime)time).qtdNativeId);
    }

    public final void setTimeSpec(Qt.TimeSpec spec) {
        qtd_QDateTime_setTimeSpec_TimeSpec(qtdNativeId, spec);
    }

    public final void setTime_t(uint secsSince1Jan1970UTC) {
        qtd_QDateTime_setTime_t_uint(qtdNativeId, secsSince1Jan1970UTC);
    }

    public final void setUtcOffset(int seconds) {
        qtd_QDateTime_setUtcOffset_int(qtdNativeId, seconds);
    }

    public final QTime time() const {
        void* ret = qtd_QDateTime_time_const(qtdNativeId);
        QTime __d_return_value = new QTime(ret);
        return __d_return_value;
    }

    public final Qt.TimeSpec timeSpec() const {
        return cast(Qt.TimeSpec) qtd_QDateTime_timeSpec_const(qtdNativeId);
    }

    public final QDateTime toLocalTime() const {
        void* ret = qtd_QDateTime_toLocalTime_const(qtdNativeId);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final long toMSecsSinceEpoch() const {
        return qtd_QDateTime_toMSecsSinceEpoch_const(qtdNativeId);
    }

    public final string toString(Qt.DateFormat f = Qt.DateFormat.TextDate) const {
        string res;
        qtd_QDateTime_toString_DateFormat_const(qtdNativeId, &res, f);
        return res;
    }

    public final string toString(string format) const {
        string res;
        qtd_QDateTime_toString_string_const(qtdNativeId, &res, format);
        return res;
    }

    public final QDateTime toTimeSpec(Qt.TimeSpec spec) const {
        void* ret = qtd_QDateTime_toTimeSpec_TimeSpec_const(qtdNativeId, spec);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final uint toTime_t() const {
        return qtd_QDateTime_toTime_t_const(qtdNativeId);
    }

    public final QDateTime toUTC() const {
        void* ret = qtd_QDateTime_toUTC_const(qtdNativeId);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final int utcOffset() const {
        return qtd_QDateTime_utcOffset_const(qtdNativeId);
    }

    public static QDateTime currentDateTime() {
        void* ret = qtd_QDateTime_currentDateTime();
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public static QDateTime currentDateTimeUtc() {
        void* ret = qtd_QDateTime_currentDateTimeUtc();
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public static long currentMSecsSinceEpoch() {
        return qtd_QDateTime_currentMSecsSinceEpoch();
    }

    public static QDateTime fromMSecsSinceEpoch(long msecs) {
        void* ret = qtd_QDateTime_fromMSecsSinceEpoch_long(msecs);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public static QDateTime fromString(string s, Qt.DateFormat f = Qt.DateFormat.TextDate) {
        void* ret = qtd_QDateTime_fromString_string_DateFormat(s, f);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public static QDateTime fromString(string s, string format) {
        void* ret = qtd_QDateTime_fromString_string_string(s, format);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public static QDateTime fromTime_t(uint secsSince1Jan1970UTC) {
        void* ret = qtd_QDateTime_fromTime_t_uint(secsSince1Jan1970UTC);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QDateTime;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QDateTime_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QDateTime_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDateTime_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDateTime_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDateTime_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QDateTime_QTypeInfo_isComplex();
        isStatic = qtd_QDateTime_QTypeInfo_isStatic();
        isLarge = qtd_QDateTime_QTypeInfo_isLarge();
        isPointer = qtd_QDateTime_QTypeInfo_isPointer();
        isDummy = qtd_QDateTime_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QDateTime_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QDateTime_native_copy(const void* orig);
extern (C) void qtd_QDateTime_delete(void *ptr);
extern (C) void qtd_QDateTime_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDateTime_QDateTime();
private extern(C) void* qtd_QDateTime_QDateTime_QDate(void* arg__1);
private extern(C) void* qtd_QDateTime_QDateTime_QDate_QTime_TimeSpec(void* arg__1,
 void* arg__2,
 int spec2);
private extern(C) void* qtd_QDateTime_QDateTime_QDateTime(void* other0);
private extern(C) void*  qtd_QDateTime_addDays_int_const(void* __this_nativeId,
 int days0);
private extern(C) void*  qtd_QDateTime_addMSecs_long_const(void* __this_nativeId,
 long msecs0);
private extern(C) void*  qtd_QDateTime_addMonths_int_const(void* __this_nativeId,
 int months0);
private extern(C) void*  qtd_QDateTime_addSecs_int_const(void* __this_nativeId,
 int secs0);
private extern(C) void*  qtd_QDateTime_addYears_int_const(void* __this_nativeId,
 int years0);
private extern(C) void*  qtd_QDateTime_date_const(void* __this_nativeId);
private extern(C) int  qtd_QDateTime_daysTo_QDateTime_const(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QDateTime_isNull_const(void* __this_nativeId);
private extern(C) bool  qtd_QDateTime_isValid_const(void* __this_nativeId);
private extern(C) long  qtd_QDateTime_msecsTo_QDateTime_const(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QDateTime_operator_less_QDateTime_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QDateTime_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QDateTime_operator_equal_QDateTime_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QDateTime_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) int  qtd_QDateTime_secsTo_QDateTime_const(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QDateTime_setDate_QDate(void* __this_nativeId,
 void* date0);
private extern(C) void  qtd_QDateTime_setMSecsSinceEpoch_long(void* __this_nativeId,
 long msecs0);
private extern(C) void  qtd_QDateTime_setTime_QTime(void* __this_nativeId,
 void* time0);
private extern(C) void  qtd_QDateTime_setTimeSpec_TimeSpec(void* __this_nativeId,
 int spec0);
private extern(C) void  qtd_QDateTime_setTime_t_uint(void* __this_nativeId,
 uint secsSince1Jan1970UTC0);
private extern(C) void  qtd_QDateTime_setUtcOffset_int(void* __this_nativeId,
 int seconds0);
private extern(C) void*  qtd_QDateTime_time_const(void* __this_nativeId);
private extern(C) int  qtd_QDateTime_timeSpec_const(void* __this_nativeId);
private extern(C) void*  qtd_QDateTime_toLocalTime_const(void* __this_nativeId);
private extern(C) long  qtd_QDateTime_toMSecsSinceEpoch_const(void* __this_nativeId);
private extern(C) void  qtd_QDateTime_toString_DateFormat_const(void* __this_nativeId,
 void* __d_return_value,
 int f0);
private extern(C) void  qtd_QDateTime_toString_string_const(void* __this_nativeId,
 void* __d_return_value,
 string format0);
private extern(C) void*  qtd_QDateTime_toTimeSpec_TimeSpec_const(void* __this_nativeId,
 int spec0);
private extern(C) uint  qtd_QDateTime_toTime_t_const(void* __this_nativeId);
private extern(C) void*  qtd_QDateTime_toUTC_const(void* __this_nativeId);
private extern(C) int  qtd_QDateTime_utcOffset_const(void* __this_nativeId);
private extern(C) void*  qtd_QDateTime_currentDateTime();
private extern(C) void*  qtd_QDateTime_currentDateTimeUtc();
private extern(C) long  qtd_QDateTime_currentMSecsSinceEpoch();
private extern(C) void*  qtd_QDateTime_fromMSecsSinceEpoch_long(long msecs0);
private extern(C) void*  qtd_QDateTime_fromString_string_DateFormat(string s0,
 int f1);
private extern(C) void*  qtd_QDateTime_fromString_string_string(string s0,
 string format1);
private extern(C) void*  qtd_QDateTime_fromTime_t_uint(uint secsSince1Jan1970UTC0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QDateTime() {
    QDateTime.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QDateTime_QTypeInfo_isComplex();
private extern (C) bool qtd_QDateTime_QTypeInfo_isStatic();
private extern (C) bool qtd_QDateTime_QTypeInfo_isLarge();
private extern (C) bool qtd_QDateTime_QTypeInfo_isPointer();
private extern (C) bool qtd_QDateTime_QTypeInfo_isDummy();
