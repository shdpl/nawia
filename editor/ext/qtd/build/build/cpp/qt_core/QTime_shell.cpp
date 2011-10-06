#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>

#include <iostream>
#include <qdatetime.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QTime_delete(void* nativeId)
{
    delete (QTime*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTime_destroy(void* nativeId)
{
    call_destructor((QTime*)nativeId);
}

// ---externC---
// QTime::QTime()
QTD_EXTERN QTD_EXPORT void* qtd_QTime_QTime
()
{
    QTime *__qt_this = new QTime();
    return (void *) __qt_this;

}

// QTime::QTime(int h, int m, int s, int ms)
QTD_EXTERN QTD_EXPORT void* qtd_QTime_QTime_int_int_int_int
(int h0,
 int m1,
 int s2,
 int ms3)
{
    QTime *__qt_this = new QTime((int )h0, (int )m1, (int )s2, (int )ms3);
    return (void *) __qt_this;

}

// QTime::addMSecs(int ms) const
QTD_EXTERN QTD_EXPORT void* qtd_QTime_addMSecs_int_const
(void* __this_nativeId,
 int ms0)
{
    QTime *__qt_this = (QTime *) __this_nativeId;
    QTime  __qt_return_value = __qt_this->addMSecs((int )ms0);

    void* __d_return_value = (void*) new QTime(__qt_return_value);

    return __d_return_value;
}

// QTime::addSecs(int secs) const
QTD_EXTERN QTD_EXPORT void* qtd_QTime_addSecs_int_const
(void* __this_nativeId,
 int secs0)
{
    QTime *__qt_this = (QTime *) __this_nativeId;
    QTime  __qt_return_value = __qt_this->addSecs((int )secs0);

    void* __d_return_value = (void*) new QTime(__qt_return_value);

    return __d_return_value;
}

// QTime::elapsed() const
QTD_EXTERN QTD_EXPORT int qtd_QTime_elapsed_const
(void* __this_nativeId)
{
    QTime *__qt_this = (QTime *) __this_nativeId;
    int  __qt_return_value = __qt_this->elapsed();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTime::hour() const
QTD_EXTERN QTD_EXPORT int qtd_QTime_hour_const
(void* __this_nativeId)
{
    QTime *__qt_this = (QTime *) __this_nativeId;
    int  __qt_return_value = __qt_this->hour();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTime::isNull() const
QTD_EXTERN QTD_EXPORT bool qtd_QTime_isNull_const
(void* __this_nativeId)
{
    QTime *__qt_this = (QTime *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNull();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTime::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QTime_isValid_const
(void* __this_nativeId)
{
    QTime *__qt_this = (QTime *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTime::minute() const
QTD_EXTERN QTD_EXPORT int qtd_QTime_minute_const
(void* __this_nativeId)
{
    QTime *__qt_this = (QTime *) __this_nativeId;
    int  __qt_return_value = __qt_this->minute();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTime::msec() const
QTD_EXTERN QTD_EXPORT int qtd_QTime_msec_const
(void* __this_nativeId)
{
    QTime *__qt_this = (QTime *) __this_nativeId;
    int  __qt_return_value = __qt_this->msec();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTime::msecsTo(const QTime & arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QTime_msecsTo_QTime_const
(void* __this_nativeId,
 void* arg__1)
{
    const QTime&  __qt_arg__1 = (const QTime& ) *(QTime *)arg__1;
    QTime *__qt_this = (QTime *) __this_nativeId;
    int  __qt_return_value = __qt_this->msecsTo((const QTime& )__qt_arg__1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTime::operator<(const QTime & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QTime_operator_less_QTime_const
(void* __this_nativeId,
 void* other0)
{
    const QTime&  __qt_other0 = (const QTime& ) *(QTime *)other0;
    QTime *__qt_this = (QTime *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator<((const QTime& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTime::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTime_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QTime *__qt_this = (QTime *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QTime::operator==(const QTime & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QTime_operator_equal_QTime_const
(void* __this_nativeId,
 void* other0)
{
    const QTime&  __qt_other0 = (const QTime& ) *(QTime *)other0;
    QTime *__qt_this = (QTime *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QTime& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTime::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTime_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QTime *__qt_this = (QTime *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QTime::restart()
QTD_EXTERN QTD_EXPORT int qtd_QTime_restart
(void* __this_nativeId)
{
    QTime *__qt_this = (QTime *) __this_nativeId;
    int  __qt_return_value = __qt_this->restart();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTime::second() const
QTD_EXTERN QTD_EXPORT int qtd_QTime_second_const
(void* __this_nativeId)
{
    QTime *__qt_this = (QTime *) __this_nativeId;
    int  __qt_return_value = __qt_this->second();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTime::secsTo(const QTime & arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QTime_secsTo_QTime_const
(void* __this_nativeId,
 void* arg__1)
{
    const QTime&  __qt_arg__1 = (const QTime& ) *(QTime *)arg__1;
    QTime *__qt_this = (QTime *) __this_nativeId;
    int  __qt_return_value = __qt_this->secsTo((const QTime& )__qt_arg__1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTime::setHMS(int h, int m, int s, int ms)
QTD_EXTERN QTD_EXPORT bool qtd_QTime_setHMS_int_int_int_int
(void* __this_nativeId,
 int h0,
 int m1,
 int s2,
 int ms3)
{
    QTime *__qt_this = (QTime *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setHMS((int )h0, (int )m1, (int )s2, (int )ms3);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTime::start()
QTD_EXTERN QTD_EXPORT void qtd_QTime_start
(void* __this_nativeId)
{
    QTime *__qt_this = (QTime *) __this_nativeId;
    __qt_this->start();

}

// QTime::toString(Qt::DateFormat f) const
QTD_EXTERN QTD_EXPORT void qtd_QTime_toString_DateFormat_const
(void* __this_nativeId,
 void* __d_return_value,
 int f0)
{
    Qt::DateFormat __qt_f0 = (Qt::DateFormat) f0;
    QTime *__qt_this = (QTime *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString((Qt::DateFormat )__qt_f0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTime::toString(const QString & format) const
QTD_EXTERN QTD_EXPORT void qtd_QTime_toString_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray format0)
{
    QString __qt_format0 = QString::fromUtf8((const char *)format0.ptr, format0.length);
    QTime *__qt_this = (QTime *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString((const QString& )__qt_format0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTime::currentTime()
QTD_EXTERN QTD_EXPORT void* qtd_QTime_currentTime
()
{
    QTime  __qt_return_value = QTime::currentTime();

    void* __d_return_value = (void*) new QTime(__qt_return_value);

    return __d_return_value;
}

// QTime::fromString(const QString & s, Qt::DateFormat f)
QTD_EXTERN QTD_EXPORT void* qtd_QTime_fromString_string_DateFormat
(DArray s0,
 int f1)
{
    QString __qt_s0 = QString::fromUtf8((const char *)s0.ptr, s0.length);
    Qt::DateFormat __qt_f1 = (Qt::DateFormat) f1;
    QTime  __qt_return_value = QTime::fromString((const QString& )__qt_s0, (Qt::DateFormat )__qt_f1);

    void* __d_return_value = (void*) new QTime(__qt_return_value);

    return __d_return_value;
}

// QTime::fromString(const QString & s, const QString & format)
QTD_EXTERN QTD_EXPORT void* qtd_QTime_fromString_string_string
(DArray s0,
 DArray format1)
{
    QString __qt_s0 = QString::fromUtf8((const char *)s0.ptr, s0.length);
    QString __qt_format1 = QString::fromUtf8((const char *)format1.ptr, format1.length);
    QTime  __qt_return_value = QTime::fromString((const QString& )__qt_s0, (const QString& )__qt_format1);

    void* __d_return_value = (void*) new QTime(__qt_return_value);

    return __d_return_value;
}

// QTime::isValid(int h, int m, int s, int ms)
QTD_EXTERN QTD_EXPORT bool qtd_QTime_isValid_int_int_int_int
(int h0,
 int m1,
 int s2,
 int ms3)
{
    bool  __qt_return_value = QTime::isValid((int )h0, (int )m1, (int )s2, (int )ms3);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTime_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTime>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTime_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTime>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTime_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTime>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTime_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTime>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTime_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTime>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTime_placed_copy(void* orig, void* place) {
    const QTime&  __qt_orig = (const QTime& ) *(QTime *)orig;
    QTime *result = new (place) QTime (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTime_native_copy(void* orig) {
    const QTime&  __qt_orig = (const QTime& ) *(QTime *)orig;
    QTime *result = new QTime (__qt_orig);
    return result;
}

