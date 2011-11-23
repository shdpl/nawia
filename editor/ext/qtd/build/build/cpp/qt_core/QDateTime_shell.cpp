#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>

#include <iostream>
#include <qdatetime.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QDateTime_delete(void* nativeId)
{
    delete (QDateTime*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDateTime_destroy(void* nativeId)
{
    call_destructor((QDateTime*)nativeId);
}

// ---externC---
// QDateTime::QDateTime()
QTD_EXTERN QTD_EXPORT void* qtd_QDateTime_QDateTime
()
{
    QDateTime *__qt_this = new QDateTime();
    return (void *) __qt_this;

}

// QDateTime::QDateTime(const QDate & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QDateTime_QDateTime_QDate
(void* arg__1)
{
    const QDate&  __qt_arg__1 = (const QDate& ) *(QDate *)arg__1;
    QDateTime *__qt_this = new QDateTime((const QDate& )__qt_arg__1);
    return (void *) __qt_this;

}

// QDateTime::QDateTime(const QDate & arg__1, const QTime & arg__2, Qt::TimeSpec spec)
QTD_EXTERN QTD_EXPORT void* qtd_QDateTime_QDateTime_QDate_QTime_TimeSpec
(void* arg__1,
 void* arg__2,
 int spec2)
{
    const QDate&  __qt_arg__1 = (const QDate& ) *(QDate *)arg__1;
    const QTime&  __qt_arg__2 = (const QTime& ) *(QTime *)arg__2;
    Qt::TimeSpec __qt_spec2 = (Qt::TimeSpec) spec2;
    QDateTime *__qt_this = new QDateTime((const QDate& )__qt_arg__1, (const QTime& )__qt_arg__2, (Qt::TimeSpec )__qt_spec2);
    return (void *) __qt_this;

}

// QDateTime::QDateTime(const QDateTime & other)
QTD_EXTERN QTD_EXPORT void* qtd_QDateTime_QDateTime_QDateTime
(void* other0)
{
    const QDateTime&  __qt_other0 = (const QDateTime& ) *(QDateTime *)other0;
    QDateTime *__qt_this = new QDateTime((const QDateTime& )__qt_other0);
    return (void *) __qt_this;

}

// QDateTime::addDays(int days) const
QTD_EXTERN QTD_EXPORT void* qtd_QDateTime_addDays_int_const
(void* __this_nativeId,
 int days0)
{
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->addDays((int )days0);

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QDateTime::addMSecs(qint64 msecs) const
QTD_EXTERN QTD_EXPORT void* qtd_QDateTime_addMSecs_long_const
(void* __this_nativeId,
 qint64 msecs0)
{
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->addMSecs((qint64 )msecs0);

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QDateTime::addMonths(int months) const
QTD_EXTERN QTD_EXPORT void* qtd_QDateTime_addMonths_int_const
(void* __this_nativeId,
 int months0)
{
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->addMonths((int )months0);

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QDateTime::addSecs(int secs) const
QTD_EXTERN QTD_EXPORT void* qtd_QDateTime_addSecs_int_const
(void* __this_nativeId,
 int secs0)
{
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->addSecs((int )secs0);

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QDateTime::addYears(int years) const
QTD_EXTERN QTD_EXPORT void* qtd_QDateTime_addYears_int_const
(void* __this_nativeId,
 int years0)
{
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->addYears((int )years0);

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QDateTime::date() const
QTD_EXTERN QTD_EXPORT void* qtd_QDateTime_date_const
(void* __this_nativeId)
{
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    QDate  __qt_return_value = __qt_this->date();

    void* __d_return_value = (void*) new QDate(__qt_return_value);

    return __d_return_value;
}

// QDateTime::daysTo(const QDateTime & arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QDateTime_daysTo_QDateTime_const
(void* __this_nativeId,
 void* arg__1)
{
    const QDateTime&  __qt_arg__1 = (const QDateTime& ) *(QDateTime *)arg__1;
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    int  __qt_return_value = __qt_this->daysTo((const QDateTime& )__qt_arg__1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTime::isNull() const
QTD_EXTERN QTD_EXPORT bool qtd_QDateTime_isNull_const
(void* __this_nativeId)
{
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNull();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTime::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QDateTime_isValid_const
(void* __this_nativeId)
{
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTime::msecsTo(const QDateTime & arg__1) const
QTD_EXTERN QTD_EXPORT qint64 qtd_QDateTime_msecsTo_QDateTime_const
(void* __this_nativeId,
 void* arg__1)
{
    const QDateTime&  __qt_arg__1 = (const QDateTime& ) *(QDateTime *)arg__1;
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->msecsTo((const QDateTime& )__qt_arg__1);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTime::operator<(const QDateTime & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QDateTime_operator_less_QDateTime_const
(void* __this_nativeId,
 void* other0)
{
    const QDateTime&  __qt_other0 = (const QDateTime& ) *(QDateTime *)other0;
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator<((const QDateTime& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTime::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QDateTime_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QDateTime::operator==(const QDateTime & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QDateTime_operator_equal_QDateTime_const
(void* __this_nativeId,
 void* other0)
{
    const QDateTime&  __qt_other0 = (const QDateTime& ) *(QDateTime *)other0;
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QDateTime& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTime::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QDateTime_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QDateTime::secsTo(const QDateTime & arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QDateTime_secsTo_QDateTime_const
(void* __this_nativeId,
 void* arg__1)
{
    const QDateTime&  __qt_arg__1 = (const QDateTime& ) *(QDateTime *)arg__1;
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    int  __qt_return_value = __qt_this->secsTo((const QDateTime& )__qt_arg__1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTime::setDate(const QDate & date)
QTD_EXTERN QTD_EXPORT void qtd_QDateTime_setDate_QDate
(void* __this_nativeId,
 void* date0)
{
    const QDate&  __qt_date0 = (const QDate& ) *(QDate *)date0;
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    __qt_this->setDate((const QDate& )__qt_date0);

}

// QDateTime::setMSecsSinceEpoch(qint64 msecs)
QTD_EXTERN QTD_EXPORT void qtd_QDateTime_setMSecsSinceEpoch_long
(void* __this_nativeId,
 qint64 msecs0)
{
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    __qt_this->setMSecsSinceEpoch((qint64 )msecs0);

}

// QDateTime::setTime(const QTime & time)
QTD_EXTERN QTD_EXPORT void qtd_QDateTime_setTime_QTime
(void* __this_nativeId,
 void* time0)
{
    const QTime&  __qt_time0 = (const QTime& ) *(QTime *)time0;
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    __qt_this->setTime((const QTime& )__qt_time0);

}

// QDateTime::setTimeSpec(Qt::TimeSpec spec)
QTD_EXTERN QTD_EXPORT void qtd_QDateTime_setTimeSpec_TimeSpec
(void* __this_nativeId,
 int spec0)
{
    Qt::TimeSpec __qt_spec0 = (Qt::TimeSpec) spec0;
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    __qt_this->setTimeSpec((Qt::TimeSpec )__qt_spec0);

}

// QDateTime::setTime_t(uint secsSince1Jan1970UTC)
QTD_EXTERN QTD_EXPORT void qtd_QDateTime_setTime_t_uint
(void* __this_nativeId,
 uint secsSince1Jan1970UTC0)
{
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    __qt_this->setTime_t((uint )secsSince1Jan1970UTC0);

}

// QDateTime::setUtcOffset(int seconds)
QTD_EXTERN QTD_EXPORT void qtd_QDateTime_setUtcOffset_int
(void* __this_nativeId,
 int seconds0)
{
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    __qt_this->setUtcOffset((int )seconds0);

}

// QDateTime::time() const
QTD_EXTERN QTD_EXPORT void* qtd_QDateTime_time_const
(void* __this_nativeId)
{
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    QTime  __qt_return_value = __qt_this->time();

    void* __d_return_value = (void*) new QTime(__qt_return_value);

    return __d_return_value;
}

// QDateTime::timeSpec() const
QTD_EXTERN QTD_EXPORT int qtd_QDateTime_timeSpec_const
(void* __this_nativeId)
{
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    int  __qt_return_value = __qt_this->timeSpec();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTime::toLocalTime() const
QTD_EXTERN QTD_EXPORT void* qtd_QDateTime_toLocalTime_const
(void* __this_nativeId)
{
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->toLocalTime();

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QDateTime::toMSecsSinceEpoch() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QDateTime_toMSecsSinceEpoch_const
(void* __this_nativeId)
{
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->toMSecsSinceEpoch();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTime::toString(Qt::DateFormat f) const
QTD_EXTERN QTD_EXPORT void qtd_QDateTime_toString_DateFormat_const
(void* __this_nativeId,
 void* __d_return_value,
 int f0)
{
    Qt::DateFormat __qt_f0 = (Qt::DateFormat) f0;
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString((Qt::DateFormat )__qt_f0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDateTime::toString(const QString & format) const
QTD_EXTERN QTD_EXPORT void qtd_QDateTime_toString_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray format0)
{
    QString __qt_format0 = QString::fromUtf8((const char *)format0.ptr, format0.length);
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString((const QString& )__qt_format0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDateTime::toTimeSpec(Qt::TimeSpec spec) const
QTD_EXTERN QTD_EXPORT void* qtd_QDateTime_toTimeSpec_TimeSpec_const
(void* __this_nativeId,
 int spec0)
{
    Qt::TimeSpec __qt_spec0 = (Qt::TimeSpec) spec0;
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->toTimeSpec((Qt::TimeSpec )__qt_spec0);

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QDateTime::toTime_t() const
QTD_EXTERN QTD_EXPORT uint qtd_QDateTime_toTime_t_const
(void* __this_nativeId)
{
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    uint  __qt_return_value = __qt_this->toTime_t();

    uint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTime::toUTC() const
QTD_EXTERN QTD_EXPORT void* qtd_QDateTime_toUTC_const
(void* __this_nativeId)
{
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->toUTC();

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QDateTime::utcOffset() const
QTD_EXTERN QTD_EXPORT int qtd_QDateTime_utcOffset_const
(void* __this_nativeId)
{
    QDateTime *__qt_this = (QDateTime *) __this_nativeId;
    int  __qt_return_value = __qt_this->utcOffset();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTime::currentDateTime()
QTD_EXTERN QTD_EXPORT void* qtd_QDateTime_currentDateTime
()
{
    QDateTime  __qt_return_value = QDateTime::currentDateTime();

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QDateTime::currentDateTimeUtc()
QTD_EXTERN QTD_EXPORT void* qtd_QDateTime_currentDateTimeUtc
()
{
    QDateTime  __qt_return_value = QDateTime::currentDateTimeUtc();

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QDateTime::currentMSecsSinceEpoch()
QTD_EXTERN QTD_EXPORT qint64 qtd_QDateTime_currentMSecsSinceEpoch
()
{
    qint64  __qt_return_value = QDateTime::currentMSecsSinceEpoch();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTime::fromMSecsSinceEpoch(qint64 msecs)
QTD_EXTERN QTD_EXPORT void* qtd_QDateTime_fromMSecsSinceEpoch_long
(qint64 msecs0)
{
    QDateTime  __qt_return_value = QDateTime::fromMSecsSinceEpoch((qint64 )msecs0);

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QDateTime::fromString(const QString & s, Qt::DateFormat f)
QTD_EXTERN QTD_EXPORT void* qtd_QDateTime_fromString_string_DateFormat
(DArray s0,
 int f1)
{
    QString __qt_s0 = QString::fromUtf8((const char *)s0.ptr, s0.length);
    Qt::DateFormat __qt_f1 = (Qt::DateFormat) f1;
    QDateTime  __qt_return_value = QDateTime::fromString((const QString& )__qt_s0, (Qt::DateFormat )__qt_f1);

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QDateTime::fromString(const QString & s, const QString & format)
QTD_EXTERN QTD_EXPORT void* qtd_QDateTime_fromString_string_string
(DArray s0,
 DArray format1)
{
    QString __qt_s0 = QString::fromUtf8((const char *)s0.ptr, s0.length);
    QString __qt_format1 = QString::fromUtf8((const char *)format1.ptr, format1.length);
    QDateTime  __qt_return_value = QDateTime::fromString((const QString& )__qt_s0, (const QString& )__qt_format1);

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QDateTime::fromTime_t(uint secsSince1Jan1970UTC)
QTD_EXTERN QTD_EXPORT void* qtd_QDateTime_fromTime_t_uint
(uint secsSince1Jan1970UTC0)
{
    QDateTime  __qt_return_value = QDateTime::fromTime_t((uint )secsSince1Jan1970UTC0);

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QDateTime_QTypeInfo_isComplex() { return (bool) QTypeInfo<QDateTime>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QDateTime_QTypeInfo_isStatic() { return (bool) QTypeInfo<QDateTime>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QDateTime_QTypeInfo_isLarge() { return (bool) QTypeInfo<QDateTime>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QDateTime_QTypeInfo_isPointer() { return (bool) QTypeInfo<QDateTime>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QDateTime_QTypeInfo_isDummy() { return (bool) QTypeInfo<QDateTime>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QDateTime_placed_copy(void* orig, void* place) {
    const QDateTime&  __qt_orig = (const QDateTime& ) *(QDateTime *)orig;
    QDateTime *result = new (place) QDateTime (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QDateTime_native_copy(void* orig) {
    const QDateTime&  __qt_orig = (const QDateTime& ) *(QDateTime *)orig;
    QDateTime *result = new QDateTime (__qt_orig);
    return result;
}

