module qt.core.QDate;

public import qt.core.QDate_aux;
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


public class QDate : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QDate_QDate();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int y, int m, int d) {
        void* ret = qtd_QDate_QDate_int_int_int(y, m, d);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QDate addDays(int days) const {
        void* ret = qtd_QDate_addDays_int_const(qtdNativeId, days);
        QDate __d_return_value = new QDate(ret);
        return __d_return_value;
    }

    public final QDate addMonths(int months) const {
        void* ret = qtd_QDate_addMonths_int_const(qtdNativeId, months);
        QDate __d_return_value = new QDate(ret);
        return __d_return_value;
    }

    public final QDate addYears(int years) const {
        void* ret = qtd_QDate_addYears_int_const(qtdNativeId, years);
        QDate __d_return_value = new QDate(ret);
        return __d_return_value;
    }

    public final int day() const {
        return qtd_QDate_day_const(qtdNativeId);
    }

    public final int dayOfWeek() const {
        return qtd_QDate_dayOfWeek_const(qtdNativeId);
    }

    public final int dayOfYear() const {
        return qtd_QDate_dayOfYear_const(qtdNativeId);
    }

    public final int daysInMonth() const {
        return qtd_QDate_daysInMonth_const(qtdNativeId);
    }

    public final int daysInYear() const {
        return qtd_QDate_daysInYear_const(qtdNativeId);
    }

    public final int daysTo(const(QDate) arg__1) const {
        return qtd_QDate_daysTo_QDate_const(qtdNativeId, arg__1 is null ? null : (cast(QDate)arg__1).qtdNativeId);
    }

    public final void getDate(int* year, int* month, int* day) {
        qtd_QDate_getDate_nativepointerint_nativepointerint_nativepointerint(qtdNativeId, year, month, day);
    }

    public final bool isNull() const {
        return qtd_QDate_isNull_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QDate_isValid_const(qtdNativeId);
    }

    public final int month() const {
        return qtd_QDate_month_const(qtdNativeId);
    }

    private final bool operator_less(const(QDate) other) const {
        return qtd_QDate_operator_less_QDate_const(qtdNativeId, other is null ? null : (cast(QDate)other).qtdNativeId);
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QDate_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool operator_equal(const(QDate) other) const {
        return qtd_QDate_operator_equal_QDate_const(qtdNativeId, other is null ? null : (cast(QDate)other).qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QDate_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final bool setDate(int year, int month, int day) {
        return qtd_QDate_setDate_int_int_int(qtdNativeId, year, month, day);
    }

    public final int toJulianDay() const {
        return qtd_QDate_toJulianDay_const(qtdNativeId);
    }

    public final string toString(Qt.DateFormat f = Qt.DateFormat.TextDate) const {
        string res;
        qtd_QDate_toString_DateFormat_const(qtdNativeId, &res, f);
        return res;
    }

    public final string toString(string format) const {
        string res;
        qtd_QDate_toString_string_const(qtdNativeId, &res, format);
        return res;
    }

    private final int weekNumber(int* yearNum) const {
        return qtd_QDate_weekNumber_nativepointerint_const(qtdNativeId, yearNum);
    }

    public final int year() const {
        return qtd_QDate_year_const(qtdNativeId);
    }

    public static QDate currentDate() {
        void* ret = qtd_QDate_currentDate();
        QDate __d_return_value = new QDate(ret);
        return __d_return_value;
    }

    public static QDate fromJulianDay(int jd) {
        void* ret = qtd_QDate_fromJulianDay_int(jd);
        QDate __d_return_value = new QDate(ret);
        return __d_return_value;
    }

    public static QDate fromString(string s, Qt.DateFormat f = Qt.DateFormat.TextDate) {
        void* ret = qtd_QDate_fromString_string_DateFormat(s, f);
        QDate __d_return_value = new QDate(ret);
        return __d_return_value;
    }

    public static QDate fromString(string s, string format) {
        void* ret = qtd_QDate_fromString_string_string(s, format);
        QDate __d_return_value = new QDate(ret);
        return __d_return_value;
    }

    public static uint gregorianToJulian(int y, int m, int d) {
        return qtd_QDate_gregorianToJulian_int_int_int(y, m, d);
    }

    public static bool isLeapYear(int year) {
        return qtd_QDate_isLeapYear_int(year);
    }

    public static bool isValid(int y, int m, int d) {
        return qtd_QDate_isValid_int_int_int(y, m, d);
    }

    public static string longDayName(int weekday) {
        string res;
        qtd_QDate_longDayName_int(&res, weekday);
        return res;
    }

    public static string longMonthName(int month) {
        string res;
        qtd_QDate_longMonthName_int(&res, month);
        return res;
    }

    public static string shortDayName(int weekday) {
        string res;
        qtd_QDate_shortDayName_int(&res, weekday);
        return res;
    }

    public static string shortMonthName(int month) {
        string res;
        qtd_QDate_shortMonthName_int(&res, month);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QDate;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QDate_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QDate_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDate_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDate_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDate_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QDate_QTypeInfo_isComplex();
        isStatic = qtd_QDate_QTypeInfo_isStatic();
        isLarge = qtd_QDate_QTypeInfo_isLarge();
        isPointer = qtd_QDate_QTypeInfo_isPointer();
        isDummy = qtd_QDate_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    public final int weekNumber() {
        return weekNumber(null);
    }

    public final int yearOfWeekNumber() {
        int np;
        weekNumber(&np);
        return np;
    }

}
private extern(C) void qtd_QDate_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QDate_native_copy(const void* orig);
extern (C) void qtd_QDate_delete(void *ptr);
extern (C) void qtd_QDate_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDate_QDate();
private extern(C) void* qtd_QDate_QDate_int_int_int(int y0,
 int m1,
 int d2);
private extern(C) void*  qtd_QDate_addDays_int_const(void* __this_nativeId,
 int days0);
private extern(C) void*  qtd_QDate_addMonths_int_const(void* __this_nativeId,
 int months0);
private extern(C) void*  qtd_QDate_addYears_int_const(void* __this_nativeId,
 int years0);
private extern(C) int  qtd_QDate_day_const(void* __this_nativeId);
private extern(C) int  qtd_QDate_dayOfWeek_const(void* __this_nativeId);
private extern(C) int  qtd_QDate_dayOfYear_const(void* __this_nativeId);
private extern(C) int  qtd_QDate_daysInMonth_const(void* __this_nativeId);
private extern(C) int  qtd_QDate_daysInYear_const(void* __this_nativeId);
private extern(C) int  qtd_QDate_daysTo_QDate_const(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QDate_getDate_nativepointerint_nativepointerint_nativepointerint(void* __this_nativeId,
 int* year0,
 int* month1,
 int* day2);
private extern(C) bool  qtd_QDate_isNull_const(void* __this_nativeId);
private extern(C) bool  qtd_QDate_isValid_const(void* __this_nativeId);
private extern(C) int  qtd_QDate_month_const(void* __this_nativeId);
private extern(C) bool  qtd_QDate_operator_less_QDate_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QDate_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QDate_operator_equal_QDate_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QDate_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QDate_setDate_int_int_int(void* __this_nativeId,
 int year0,
 int month1,
 int day2);
private extern(C) int  qtd_QDate_toJulianDay_const(void* __this_nativeId);
private extern(C) void  qtd_QDate_toString_DateFormat_const(void* __this_nativeId,
 void* __d_return_value,
 int f0);
private extern(C) void  qtd_QDate_toString_string_const(void* __this_nativeId,
 void* __d_return_value,
 string format0);
private extern(C) int  qtd_QDate_weekNumber_nativepointerint_const(void* __this_nativeId,
 int* yearNum0);
private extern(C) int  qtd_QDate_year_const(void* __this_nativeId);
private extern(C) void*  qtd_QDate_currentDate();
private extern(C) void*  qtd_QDate_fromJulianDay_int(int jd0);
private extern(C) void*  qtd_QDate_fromString_string_DateFormat(string s0,
 int f1);
private extern(C) void*  qtd_QDate_fromString_string_string(string s0,
 string format1);
private extern(C) uint  qtd_QDate_gregorianToJulian_int_int_int(int y0,
 int m1,
 int d2);
private extern(C) bool  qtd_QDate_isLeapYear_int(int year0);
private extern(C) bool  qtd_QDate_isValid_int_int_int(int y0,
 int m1,
 int d2);
private extern(C) void  qtd_QDate_longDayName_int(void* __d_return_value,
 int weekday0);
private extern(C) void  qtd_QDate_longMonthName_int(void* __d_return_value,
 int month0);
private extern(C) void  qtd_QDate_shortDayName_int(void* __d_return_value,
 int weekday0);
private extern(C) void  qtd_QDate_shortMonthName_int(void* __d_return_value,
 int month0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QDate() {
    QDate.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QDate_QTypeInfo_isComplex();
private extern (C) bool qtd_QDate_QTypeInfo_isStatic();
private extern (C) bool qtd_QDate_QTypeInfo_isLarge();
private extern (C) bool qtd_QDate_QTypeInfo_isPointer();
private extern (C) bool qtd_QDate_QTypeInfo_isDummy();
