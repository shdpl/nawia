#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qlist.h>
#include <qlocale.h>

#include <iostream>
#include <qlocale.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QLocale_delete(void* nativeId)
{
    delete (QLocale*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QLocale_destroy(void* nativeId)
{
    call_destructor((QLocale*)nativeId);
}

// ---externC---
// QLocale::QLocale()
QTD_EXTERN QTD_EXPORT void* qtd_QLocale_QLocale
()
{
    QLocale *__qt_this = new QLocale();
    return (void *) __qt_this;

}

// QLocale::QLocale(QLocale::Language language, QLocale::Country country)
QTD_EXTERN QTD_EXPORT void* qtd_QLocale_QLocale_Language_Country
(int language0,
 int country1)
{
    QLocale::Language __qt_language0 = (QLocale::Language) language0;
    QLocale::Country __qt_country1 = (QLocale::Country) country1;
    QLocale *__qt_this = new QLocale((QLocale::Language )__qt_language0, (QLocale::Country )__qt_country1);
    return (void *) __qt_this;

}

// QLocale::QLocale(const QLocale & other)
QTD_EXTERN QTD_EXPORT void* qtd_QLocale_QLocale_QLocale
(void* other0)
{
    const QLocale&  __qt_other0 = (const QLocale& ) *(QLocale *)other0;
    QLocale *__qt_this = new QLocale((const QLocale& )__qt_other0);
    return (void *) __qt_this;

}

// QLocale::QLocale(const QString & name)
QTD_EXTERN QTD_EXPORT void* qtd_QLocale_QLocale_string
(DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QLocale *__qt_this = new QLocale((const QString& )__qt_name0);
    return (void *) __qt_this;

}

// QLocale::amText() const
QTD_EXTERN QTD_EXPORT void qtd_QLocale_amText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QString  __qt_return_value = __qt_this->amText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::country() const
QTD_EXTERN QTD_EXPORT int qtd_QLocale_country_const
(void* __this_nativeId)
{
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    int  __qt_return_value = __qt_this->country();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocale::dateFormat(QLocale::FormatType format) const
QTD_EXTERN QTD_EXPORT void qtd_QLocale_dateFormat_FormatType_const
(void* __this_nativeId,
 void* __d_return_value,
 int format0)
{
    QLocale::FormatType __qt_format0 = (QLocale::FormatType) format0;
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QString  __qt_return_value = __qt_this->dateFormat((QLocale::FormatType )__qt_format0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::dateTimeFormat(QLocale::FormatType format) const
QTD_EXTERN QTD_EXPORT void qtd_QLocale_dateTimeFormat_FormatType_const
(void* __this_nativeId,
 void* __d_return_value,
 int format0)
{
    QLocale::FormatType __qt_format0 = (QLocale::FormatType) format0;
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QString  __qt_return_value = __qt_this->dateTimeFormat((QLocale::FormatType )__qt_format0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::dayName(int arg__1, QLocale::FormatType format) const
QTD_EXTERN QTD_EXPORT void qtd_QLocale_dayName_int_FormatType_const
(void* __this_nativeId,
 void* __d_return_value,
 int arg__1,
 int format1)
{
    QLocale::FormatType __qt_format1 = (QLocale::FormatType) format1;
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QString  __qt_return_value = __qt_this->dayName((int )arg__1, (QLocale::FormatType )__qt_format1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::decimalPoint() const
// QLocale::exponential() const
// QLocale::groupSeparator() const
// QLocale::language() const
QTD_EXTERN QTD_EXPORT int qtd_QLocale_language_const
(void* __this_nativeId)
{
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    int  __qt_return_value = __qt_this->language();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocale::measurementSystem() const
QTD_EXTERN QTD_EXPORT int qtd_QLocale_measurementSystem_const
(void* __this_nativeId)
{
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    int  __qt_return_value = __qt_this->measurementSystem();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocale::monthName(int arg__1, QLocale::FormatType format) const
QTD_EXTERN QTD_EXPORT void qtd_QLocale_monthName_int_FormatType_const
(void* __this_nativeId,
 void* __d_return_value,
 int arg__1,
 int format1)
{
    QLocale::FormatType __qt_format1 = (QLocale::FormatType) format1;
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QString  __qt_return_value = __qt_this->monthName((int )arg__1, (QLocale::FormatType )__qt_format1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::name() const
QTD_EXTERN QTD_EXPORT void qtd_QLocale_name_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QString  __qt_return_value = __qt_this->name();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::negativeSign() const
// QLocale::numberOptions() const
QTD_EXTERN QTD_EXPORT int qtd_QLocale_numberOptions_const
(void* __this_nativeId)
{
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    int  __qt_return_value = __qt_this->numberOptions();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocale::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLocale_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QLocale::operator==(const QLocale & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QLocale_operator_equal_QLocale_const
(void* __this_nativeId,
 void* other0)
{
    const QLocale&  __qt_other0 = (const QLocale& ) *(QLocale *)other0;
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QLocale& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocale::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLocale_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QLocale::percent() const
// QLocale::pmText() const
QTD_EXTERN QTD_EXPORT void qtd_QLocale_pmText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QString  __qt_return_value = __qt_this->pmText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::positiveSign() const
// QLocale::setNumberOptions(QFlags<QLocale::NumberOption> options)
QTD_EXTERN QTD_EXPORT void qtd_QLocale_setNumberOptions_NumberOptions
(void* __this_nativeId,
 int options0)
{
    QFlags<QLocale::NumberOption> __qt_options0 = (QFlags<QLocale::NumberOption>) options0;
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    __qt_this->setNumberOptions((QLocale::NumberOptions )__qt_options0);

}

// QLocale::standaloneDayName(int arg__1, QLocale::FormatType format) const
QTD_EXTERN QTD_EXPORT void qtd_QLocale_standaloneDayName_int_FormatType_const
(void* __this_nativeId,
 void* __d_return_value,
 int arg__1,
 int format1)
{
    QLocale::FormatType __qt_format1 = (QLocale::FormatType) format1;
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QString  __qt_return_value = __qt_this->standaloneDayName((int )arg__1, (QLocale::FormatType )__qt_format1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::standaloneMonthName(int arg__1, QLocale::FormatType format) const
QTD_EXTERN QTD_EXPORT void qtd_QLocale_standaloneMonthName_int_FormatType_const
(void* __this_nativeId,
 void* __d_return_value,
 int arg__1,
 int format1)
{
    QLocale::FormatType __qt_format1 = (QLocale::FormatType) format1;
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QString  __qt_return_value = __qt_this->standaloneMonthName((int )arg__1, (QLocale::FormatType )__qt_format1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::textDirection() const
QTD_EXTERN QTD_EXPORT int qtd_QLocale_textDirection_const
(void* __this_nativeId)
{
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    int  __qt_return_value = __qt_this->textDirection();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocale::timeFormat(QLocale::FormatType format) const
QTD_EXTERN QTD_EXPORT void qtd_QLocale_timeFormat_FormatType_const
(void* __this_nativeId,
 void* __d_return_value,
 int format0)
{
    QLocale::FormatType __qt_format0 = (QLocale::FormatType) format0;
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QString  __qt_return_value = __qt_this->timeFormat((QLocale::FormatType )__qt_format0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::toDate(const QString & string, QLocale::FormatType arg__2) const
QTD_EXTERN QTD_EXPORT void* qtd_QLocale_toDate_string_FormatType_const
(void* __this_nativeId,
 DArray string0,
 int arg__2)
{
    QString __qt_string0 = QString::fromUtf8((const char *)string0.ptr, string0.length);
    QLocale::FormatType __qt_arg__2 = (QLocale::FormatType) arg__2;
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QDate  __qt_return_value = __qt_this->toDate((const QString& )__qt_string0, (QLocale::FormatType )__qt_arg__2);

    void* __d_return_value = (void*) new QDate(__qt_return_value);

    return __d_return_value;
}

// QLocale::toDate(const QString & string, const QString & format) const
QTD_EXTERN QTD_EXPORT void* qtd_QLocale_toDate_string_string_const
(void* __this_nativeId,
 DArray string0,
 DArray format1)
{
    QString __qt_string0 = QString::fromUtf8((const char *)string0.ptr, string0.length);
    QString __qt_format1 = QString::fromUtf8((const char *)format1.ptr, format1.length);
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QDate  __qt_return_value = __qt_this->toDate((const QString& )__qt_string0, (const QString& )__qt_format1);

    void* __d_return_value = (void*) new QDate(__qt_return_value);

    return __d_return_value;
}

// QLocale::toDateTime(const QString & string, QLocale::FormatType format) const
QTD_EXTERN QTD_EXPORT void* qtd_QLocale_toDateTime_string_FormatType_const
(void* __this_nativeId,
 DArray string0,
 int format1)
{
    QString __qt_string0 = QString::fromUtf8((const char *)string0.ptr, string0.length);
    QLocale::FormatType __qt_format1 = (QLocale::FormatType) format1;
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->toDateTime((const QString& )__qt_string0, (QLocale::FormatType )__qt_format1);

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QLocale::toDateTime(const QString & string, const QString & format) const
QTD_EXTERN QTD_EXPORT void* qtd_QLocale_toDateTime_string_string_const
(void* __this_nativeId,
 DArray string0,
 DArray format1)
{
    QString __qt_string0 = QString::fromUtf8((const char *)string0.ptr, string0.length);
    QString __qt_format1 = QString::fromUtf8((const char *)format1.ptr, format1.length);
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->toDateTime((const QString& )__qt_string0, (const QString& )__qt_format1);

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QLocale::toDouble(const QString & s, bool * ok) const
QTD_EXTERN QTD_EXPORT double qtd_QLocale_toDouble_string_nativepointerbool_const
(void* __this_nativeId,
 DArray s0,
 bool* ok1)
{
    QString __qt_s0 = QString::fromUtf8((const char *)s0.ptr, s0.length);
    bool*  __qt_ok1 = (bool* ) ok1;
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    double  __qt_return_value = __qt_this->toDouble((const QString& )__qt_s0, (bool* )__qt_ok1);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocale::toFloat(const QString & s, bool * ok) const
QTD_EXTERN QTD_EXPORT float qtd_QLocale_toFloat_string_nativepointerbool_const
(void* __this_nativeId,
 DArray s0,
 bool* ok1)
{
    QString __qt_s0 = QString::fromUtf8((const char *)s0.ptr, s0.length);
    bool*  __qt_ok1 = (bool* ) ok1;
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    float  __qt_return_value = __qt_this->toFloat((const QString& )__qt_s0, (bool* )__qt_ok1);

    float __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocale::toInt(const QString & s, bool * ok, int base) const
QTD_EXTERN QTD_EXPORT int qtd_QLocale_toInt_string_nativepointerbool_int_const
(void* __this_nativeId,
 DArray s0,
 bool* ok1,
 int base2)
{
    QString __qt_s0 = QString::fromUtf8((const char *)s0.ptr, s0.length);
    bool*  __qt_ok1 = (bool* ) ok1;
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    int  __qt_return_value = __qt_this->toInt((const QString& )__qt_s0, (bool* )__qt_ok1, (int )base2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocale::toShort(const QString & s, bool * ok, int base) const
QTD_EXTERN QTD_EXPORT short qtd_QLocale_toShort_string_nativepointerbool_int_const
(void* __this_nativeId,
 DArray s0,
 bool* ok1,
 int base2)
{
    QString __qt_s0 = QString::fromUtf8((const char *)s0.ptr, s0.length);
    bool*  __qt_ok1 = (bool* ) ok1;
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    short  __qt_return_value = __qt_this->toShort((const QString& )__qt_s0, (bool* )__qt_ok1, (int )base2);

    short __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLocale::toString(const QDate & date, QLocale::FormatType format) const
QTD_EXTERN QTD_EXPORT void qtd_QLocale_toString_QDate_FormatType_const
(void* __this_nativeId,
 void* __d_return_value,
 void* date0,
 int format1)
{
    const QDate&  __qt_date0 = (const QDate& ) *(QDate *)date0;
    QLocale::FormatType __qt_format1 = (QLocale::FormatType) format1;
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString((const QDate& )__qt_date0, (QLocale::FormatType )__qt_format1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::toString(const QDate & date, const QString & formatStr) const
QTD_EXTERN QTD_EXPORT void qtd_QLocale_toString_QDate_string_const
(void* __this_nativeId,
 void* __d_return_value,
 void* date0,
 DArray formatStr1)
{
    const QDate&  __qt_date0 = (const QDate& ) *(QDate *)date0;
    QString __qt_formatStr1 = QString::fromUtf8((const char *)formatStr1.ptr, formatStr1.length);
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString((const QDate& )__qt_date0, (const QString& )__qt_formatStr1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::toString(const QDateTime & dateTime, QLocale::FormatType format) const
QTD_EXTERN QTD_EXPORT void qtd_QLocale_toString_QDateTime_FormatType_const
(void* __this_nativeId,
 void* __d_return_value,
 void* dateTime0,
 int format1)
{
    const QDateTime&  __qt_dateTime0 = (const QDateTime& ) *(QDateTime *)dateTime0;
    QLocale::FormatType __qt_format1 = (QLocale::FormatType) format1;
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString((const QDateTime& )__qt_dateTime0, (QLocale::FormatType )__qt_format1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::toString(const QDateTime & dateTime, const QString & format) const
QTD_EXTERN QTD_EXPORT void qtd_QLocale_toString_QDateTime_string_const
(void* __this_nativeId,
 void* __d_return_value,
 void* dateTime0,
 DArray format1)
{
    const QDateTime&  __qt_dateTime0 = (const QDateTime& ) *(QDateTime *)dateTime0;
    QString __qt_format1 = QString::fromUtf8((const char *)format1.ptr, format1.length);
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString((const QDateTime& )__qt_dateTime0, (const QString& )__qt_format1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::toString(const QTime & time, QLocale::FormatType format) const
QTD_EXTERN QTD_EXPORT void qtd_QLocale_toString_QTime_FormatType_const
(void* __this_nativeId,
 void* __d_return_value,
 void* time0,
 int format1)
{
    const QTime&  __qt_time0 = (const QTime& ) *(QTime *)time0;
    QLocale::FormatType __qt_format1 = (QLocale::FormatType) format1;
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString((const QTime& )__qt_time0, (QLocale::FormatType )__qt_format1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::toString(const QTime & time, const QString & formatStr) const
QTD_EXTERN QTD_EXPORT void qtd_QLocale_toString_QTime_string_const
(void* __this_nativeId,
 void* __d_return_value,
 void* time0,
 DArray formatStr1)
{
    const QTime&  __qt_time0 = (const QTime& ) *(QTime *)time0;
    QString __qt_formatStr1 = QString::fromUtf8((const char *)formatStr1.ptr, formatStr1.length);
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString((const QTime& )__qt_time0, (const QString& )__qt_formatStr1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::toString(double i, char f, int prec) const
QTD_EXTERN QTD_EXPORT void qtd_QLocale_toString_double_char_int_const
(void* __this_nativeId,
 void* __d_return_value,
 double i0,
 char f1,
 int prec2)
{
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString((double )i0, (char )f1, (int )prec2);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::toString(float i, char f, int prec) const
QTD_EXTERN QTD_EXPORT void qtd_QLocale_toString_float_char_int_const
(void* __this_nativeId,
 void* __d_return_value,
 float i0,
 char f1,
 int prec2)
{
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString((float )i0, (char )f1, (int )prec2);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::toString(int i) const
QTD_EXTERN QTD_EXPORT void qtd_QLocale_toString_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int i0)
{
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString((int )i0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::toString(short i) const
QTD_EXTERN QTD_EXPORT void qtd_QLocale_toString_short_const
(void* __this_nativeId,
 void* __d_return_value,
 short i0)
{
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString((short )i0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::toTime(const QString & string, QLocale::FormatType arg__2) const
QTD_EXTERN QTD_EXPORT void* qtd_QLocale_toTime_string_FormatType_const
(void* __this_nativeId,
 DArray string0,
 int arg__2)
{
    QString __qt_string0 = QString::fromUtf8((const char *)string0.ptr, string0.length);
    QLocale::FormatType __qt_arg__2 = (QLocale::FormatType) arg__2;
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QTime  __qt_return_value = __qt_this->toTime((const QString& )__qt_string0, (QLocale::FormatType )__qt_arg__2);

    void* __d_return_value = (void*) new QTime(__qt_return_value);

    return __d_return_value;
}

// QLocale::toTime(const QString & string, const QString & format) const
QTD_EXTERN QTD_EXPORT void* qtd_QLocale_toTime_string_string_const
(void* __this_nativeId,
 DArray string0,
 DArray format1)
{
    QString __qt_string0 = QString::fromUtf8((const char *)string0.ptr, string0.length);
    QString __qt_format1 = QString::fromUtf8((const char *)format1.ptr, format1.length);
    QLocale *__qt_this = (QLocale *) __this_nativeId;
    QTime  __qt_return_value = __qt_this->toTime((const QString& )__qt_string0, (const QString& )__qt_format1);

    void* __d_return_value = (void*) new QTime(__qt_return_value);

    return __d_return_value;
}

// QLocale::zeroDigit() const
// QLocale::c()
QTD_EXTERN QTD_EXPORT void* qtd_QLocale_c
()
{
    QLocale  __qt_return_value = QLocale::c();

    void* __d_return_value = (void*) new QLocale(__qt_return_value);

    return __d_return_value;
}

// QLocale::countriesForLanguage(QLocale::Language lang)
QTD_EXTERN QTD_EXPORT void qtd_QLocale_countriesForLanguage_Language
(void* __d_return_value,
 int lang0)
{
    QLocale::Language __qt_lang0 = (QLocale::Language) lang0;
    QList<QLocale::Country >  __qt_return_value = QLocale::countriesForLanguage((QLocale::Language )__qt_lang0);

QList<QLocale::Country > &__d_return_value_tmp = (*(QList<QLocale::Country > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QLocale::countryToString(QLocale::Country country)
QTD_EXTERN QTD_EXPORT void qtd_QLocale_countryToString_Country
(void* __d_return_value,
 int country0)
{
    QLocale::Country __qt_country0 = (QLocale::Country) country0;
    QString  __qt_return_value = QLocale::countryToString((QLocale::Country )__qt_country0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::languageToString(QLocale::Language language)
QTD_EXTERN QTD_EXPORT void qtd_QLocale_languageToString_Language
(void* __d_return_value,
 int language0)
{
    QLocale::Language __qt_language0 = (QLocale::Language) language0;
    QString  __qt_return_value = QLocale::languageToString((QLocale::Language )__qt_language0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLocale::setDefault(const QLocale & locale)
QTD_EXTERN QTD_EXPORT void qtd_QLocale_setDefault_QLocale
(void* locale0)
{
    const QLocale&  __qt_locale0 = (const QLocale& ) *(QLocale *)locale0;
    QLocale::setDefault((const QLocale& )__qt_locale0);

}

// QLocale::system()
QTD_EXTERN QTD_EXPORT void* qtd_QLocale_system
()
{
    QLocale  __qt_return_value = QLocale::system();

    void* __d_return_value = (void*) new QLocale(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QLocale_QTypeInfo_isComplex() { return (bool) QTypeInfo<QLocale>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QLocale_QTypeInfo_isStatic() { return (bool) QTypeInfo<QLocale>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QLocale_QTypeInfo_isLarge() { return (bool) QTypeInfo<QLocale>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QLocale_QTypeInfo_isPointer() { return (bool) QTypeInfo<QLocale>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QLocale_QTypeInfo_isDummy() { return (bool) QTypeInfo<QLocale>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QLocale_placed_copy(void* orig, void* place) {
    const QLocale&  __qt_orig = (const QLocale& ) *(QLocale *)orig;
    QLocale *result = new (place) QLocale (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QLocale_native_copy(void* orig) {
    const QLocale&  __qt_orig = (const QLocale& ) *(QLocale *)orig;
    QLocale *result = new QLocale (__qt_orig);
    return result;
}

