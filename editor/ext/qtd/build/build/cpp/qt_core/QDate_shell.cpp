#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>

#include <iostream>
#include <qdatetime.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QDate_delete(void* nativeId)
{
    delete (QDate*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDate_destroy(void* nativeId)
{
    call_destructor((QDate*)nativeId);
}

// ---externC---
// QDate::QDate()
QTD_EXTERN QTD_EXPORT void* qtd_QDate_QDate
()
{
    QDate *__qt_this = new QDate();
    return (void *) __qt_this;

}

// QDate::QDate(int y, int m, int d)
QTD_EXTERN QTD_EXPORT void* qtd_QDate_QDate_int_int_int
(int y0,
 int m1,
 int d2)
{
    QDate *__qt_this = new QDate((int )y0, (int )m1, (int )d2);
    return (void *) __qt_this;

}

// QDate::addDays(int days) const
QTD_EXTERN QTD_EXPORT void* qtd_QDate_addDays_int_const
(void* __this_nativeId,
 int days0)
{
    QDate *__qt_this = (QDate *) __this_nativeId;
    QDate  __qt_return_value = __qt_this->addDays((int )days0);

    void* __d_return_value = (void*) new QDate(__qt_return_value);

    return __d_return_value;
}

// QDate::addMonths(int months) const
QTD_EXTERN QTD_EXPORT void* qtd_QDate_addMonths_int_const
(void* __this_nativeId,
 int months0)
{
    QDate *__qt_this = (QDate *) __this_nativeId;
    QDate  __qt_return_value = __qt_this->addMonths((int )months0);

    void* __d_return_value = (void*) new QDate(__qt_return_value);

    return __d_return_value;
}

// QDate::addYears(int years) const
QTD_EXTERN QTD_EXPORT void* qtd_QDate_addYears_int_const
(void* __this_nativeId,
 int years0)
{
    QDate *__qt_this = (QDate *) __this_nativeId;
    QDate  __qt_return_value = __qt_this->addYears((int )years0);

    void* __d_return_value = (void*) new QDate(__qt_return_value);

    return __d_return_value;
}

// QDate::day() const
QTD_EXTERN QTD_EXPORT int qtd_QDate_day_const
(void* __this_nativeId)
{
    QDate *__qt_this = (QDate *) __this_nativeId;
    int  __qt_return_value = __qt_this->day();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDate::dayOfWeek() const
QTD_EXTERN QTD_EXPORT int qtd_QDate_dayOfWeek_const
(void* __this_nativeId)
{
    QDate *__qt_this = (QDate *) __this_nativeId;
    int  __qt_return_value = __qt_this->dayOfWeek();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDate::dayOfYear() const
QTD_EXTERN QTD_EXPORT int qtd_QDate_dayOfYear_const
(void* __this_nativeId)
{
    QDate *__qt_this = (QDate *) __this_nativeId;
    int  __qt_return_value = __qt_this->dayOfYear();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDate::daysInMonth() const
QTD_EXTERN QTD_EXPORT int qtd_QDate_daysInMonth_const
(void* __this_nativeId)
{
    QDate *__qt_this = (QDate *) __this_nativeId;
    int  __qt_return_value = __qt_this->daysInMonth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDate::daysInYear() const
QTD_EXTERN QTD_EXPORT int qtd_QDate_daysInYear_const
(void* __this_nativeId)
{
    QDate *__qt_this = (QDate *) __this_nativeId;
    int  __qt_return_value = __qt_this->daysInYear();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDate::daysTo(const QDate & arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QDate_daysTo_QDate_const
(void* __this_nativeId,
 void* arg__1)
{
    const QDate&  __qt_arg__1 = (const QDate& ) *(QDate *)arg__1;
    QDate *__qt_this = (QDate *) __this_nativeId;
    int  __qt_return_value = __qt_this->daysTo((const QDate& )__qt_arg__1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDate::getDate(int * year, int * month, int * day)
QTD_EXTERN QTD_EXPORT void qtd_QDate_getDate_nativepointerint_nativepointerint_nativepointerint
(void* __this_nativeId,
 int* year0,
 int* month1,
 int* day2)
{
    int*  __qt_year0 = (int* ) year0;
    int*  __qt_month1 = (int* ) month1;
    int*  __qt_day2 = (int* ) day2;
    QDate *__qt_this = (QDate *) __this_nativeId;
    __qt_this->getDate((int* )__qt_year0, (int* )__qt_month1, (int* )__qt_day2);

}

// QDate::isNull() const
QTD_EXTERN QTD_EXPORT bool qtd_QDate_isNull_const
(void* __this_nativeId)
{
    QDate *__qt_this = (QDate *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNull();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDate::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QDate_isValid_const
(void* __this_nativeId)
{
    QDate *__qt_this = (QDate *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDate::month() const
QTD_EXTERN QTD_EXPORT int qtd_QDate_month_const
(void* __this_nativeId)
{
    QDate *__qt_this = (QDate *) __this_nativeId;
    int  __qt_return_value = __qt_this->month();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDate::operator<(const QDate & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QDate_operator_less_QDate_const
(void* __this_nativeId,
 void* other0)
{
    const QDate&  __qt_other0 = (const QDate& ) *(QDate *)other0;
    QDate *__qt_this = (QDate *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator<((const QDate& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDate::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QDate_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QDate *__qt_this = (QDate *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QDate::operator==(const QDate & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QDate_operator_equal_QDate_const
(void* __this_nativeId,
 void* other0)
{
    const QDate&  __qt_other0 = (const QDate& ) *(QDate *)other0;
    QDate *__qt_this = (QDate *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QDate& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDate::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QDate_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QDate *__qt_this = (QDate *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QDate::setDate(int year, int month, int day)
QTD_EXTERN QTD_EXPORT bool qtd_QDate_setDate_int_int_int
(void* __this_nativeId,
 int year0,
 int month1,
 int day2)
{
    QDate *__qt_this = (QDate *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setDate((int )year0, (int )month1, (int )day2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDate::toJulianDay() const
QTD_EXTERN QTD_EXPORT int qtd_QDate_toJulianDay_const
(void* __this_nativeId)
{
    QDate *__qt_this = (QDate *) __this_nativeId;
    int  __qt_return_value = __qt_this->toJulianDay();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDate::toString(Qt::DateFormat f) const
QTD_EXTERN QTD_EXPORT void qtd_QDate_toString_DateFormat_const
(void* __this_nativeId,
 void* __d_return_value,
 int f0)
{
    Qt::DateFormat __qt_f0 = (Qt::DateFormat) f0;
    QDate *__qt_this = (QDate *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString((Qt::DateFormat )__qt_f0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDate::toString(const QString & format) const
QTD_EXTERN QTD_EXPORT void qtd_QDate_toString_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray format0)
{
    QString __qt_format0 = QString::fromUtf8((const char *)format0.ptr, format0.length);
    QDate *__qt_this = (QDate *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString((const QString& )__qt_format0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDate::weekNumber(int * yearNum) const
QTD_EXTERN QTD_EXPORT int qtd_QDate_weekNumber_nativepointerint_const
(void* __this_nativeId,
 int* yearNum0)
{
    int*  __qt_yearNum0 = (int* ) yearNum0;
    QDate *__qt_this = (QDate *) __this_nativeId;
    int  __qt_return_value = __qt_this->weekNumber((int* )__qt_yearNum0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDate::year() const
QTD_EXTERN QTD_EXPORT int qtd_QDate_year_const
(void* __this_nativeId)
{
    QDate *__qt_this = (QDate *) __this_nativeId;
    int  __qt_return_value = __qt_this->year();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDate::currentDate()
QTD_EXTERN QTD_EXPORT void* qtd_QDate_currentDate
()
{
    QDate  __qt_return_value = QDate::currentDate();

    void* __d_return_value = (void*) new QDate(__qt_return_value);

    return __d_return_value;
}

// QDate::fromJulianDay(int jd)
QTD_EXTERN QTD_EXPORT void* qtd_QDate_fromJulianDay_int
(int jd0)
{
    QDate  __qt_return_value = QDate::fromJulianDay((int )jd0);

    void* __d_return_value = (void*) new QDate(__qt_return_value);

    return __d_return_value;
}

// QDate::fromString(const QString & s, Qt::DateFormat f)
QTD_EXTERN QTD_EXPORT void* qtd_QDate_fromString_string_DateFormat
(DArray s0,
 int f1)
{
    QString __qt_s0 = QString::fromUtf8((const char *)s0.ptr, s0.length);
    Qt::DateFormat __qt_f1 = (Qt::DateFormat) f1;
    QDate  __qt_return_value = QDate::fromString((const QString& )__qt_s0, (Qt::DateFormat )__qt_f1);

    void* __d_return_value = (void*) new QDate(__qt_return_value);

    return __d_return_value;
}

// QDate::fromString(const QString & s, const QString & format)
QTD_EXTERN QTD_EXPORT void* qtd_QDate_fromString_string_string
(DArray s0,
 DArray format1)
{
    QString __qt_s0 = QString::fromUtf8((const char *)s0.ptr, s0.length);
    QString __qt_format1 = QString::fromUtf8((const char *)format1.ptr, format1.length);
    QDate  __qt_return_value = QDate::fromString((const QString& )__qt_s0, (const QString& )__qt_format1);

    void* __d_return_value = (void*) new QDate(__qt_return_value);

    return __d_return_value;
}

// QDate::gregorianToJulian(int y, int m, int d)
QTD_EXTERN QTD_EXPORT uint qtd_QDate_gregorianToJulian_int_int_int
(int y0,
 int m1,
 int d2)
{
    uint  __qt_return_value = QDate::gregorianToJulian((int )y0, (int )m1, (int )d2);

    uint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDate::isLeapYear(int year)
QTD_EXTERN QTD_EXPORT bool qtd_QDate_isLeapYear_int
(int year0)
{
    bool  __qt_return_value = QDate::isLeapYear((int )year0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDate::isValid(int y, int m, int d)
QTD_EXTERN QTD_EXPORT bool qtd_QDate_isValid_int_int_int
(int y0,
 int m1,
 int d2)
{
    bool  __qt_return_value = QDate::isValid((int )y0, (int )m1, (int )d2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDate::longDayName(int weekday)
QTD_EXTERN QTD_EXPORT void qtd_QDate_longDayName_int
(void* __d_return_value,
 int weekday0)
{
    QString  __qt_return_value = QDate::longDayName((int )weekday0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDate::longMonthName(int month)
QTD_EXTERN QTD_EXPORT void qtd_QDate_longMonthName_int
(void* __d_return_value,
 int month0)
{
    QString  __qt_return_value = QDate::longMonthName((int )month0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDate::shortDayName(int weekday)
QTD_EXTERN QTD_EXPORT void qtd_QDate_shortDayName_int
(void* __d_return_value,
 int weekday0)
{
    QString  __qt_return_value = QDate::shortDayName((int )weekday0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDate::shortMonthName(int month)
QTD_EXTERN QTD_EXPORT void qtd_QDate_shortMonthName_int
(void* __d_return_value,
 int month0)
{
    QString  __qt_return_value = QDate::shortMonthName((int )month0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QDate_QTypeInfo_isComplex() { return (bool) QTypeInfo<QDate>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QDate_QTypeInfo_isStatic() { return (bool) QTypeInfo<QDate>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QDate_QTypeInfo_isLarge() { return (bool) QTypeInfo<QDate>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QDate_QTypeInfo_isPointer() { return (bool) QTypeInfo<QDate>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QDate_QTypeInfo_isDummy() { return (bool) QTypeInfo<QDate>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QDate_placed_copy(void* orig, void* place) {
    const QDate&  __qt_orig = (const QDate& ) *(QDate *)orig;
    QDate *result = new (place) QDate (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QDate_native_copy(void* orig) {
    const QDate&  __qt_orig = (const QDate& ) *(QDate *)orig;
    QDate *result = new QDate (__qt_orig);
    return result;
}

