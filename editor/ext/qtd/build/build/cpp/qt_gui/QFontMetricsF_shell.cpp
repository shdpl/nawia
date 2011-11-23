#include <QVariant>
#include <qfont.h>
#include <qfontmetrics.h>
#include <qpaintdevice.h>

#include <iostream>
#include <qfontmetrics.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QFontMetricsF_delete(void* nativeId)
{
    delete (QFontMetricsF*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QFontMetricsF_destroy(void* nativeId)
{
    call_destructor((QFontMetricsF*)nativeId);
}

// ---externC---
// QFontMetricsF::QFontMetricsF(const QFont & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QFontMetricsF_QFontMetricsF_QFont
(void* arg__1)
{
    const QFont&  __qt_arg__1 = (const QFont& ) *(QFont *)arg__1;
    QFontMetricsF *__qt_this = new QFontMetricsF((const QFont& )__qt_arg__1);
    return (void *) __qt_this;

}

// QFontMetricsF::QFontMetricsF(const QFont & arg__1, QPaintDevice * pd)
QTD_EXTERN QTD_EXPORT void* qtd_QFontMetricsF_QFontMetricsF_QFont_QPaintDevice
(void* arg__1,
 void* pd1)
{
    const QFont&  __qt_arg__1 = (const QFont& ) *(QFont *)arg__1;
    QPaintDevice*  __qt_pd1 = (QPaintDevice* ) pd1;
    QFontMetricsF *__qt_this = new QFontMetricsF((const QFont& )__qt_arg__1, (QPaintDevice* )__qt_pd1);
    return (void *) __qt_this;

}

// QFontMetricsF::QFontMetricsF(const QFontMetrics & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QFontMetricsF_QFontMetricsF_QFontMetrics
(void* arg__1)
{
    const QFontMetrics&  __qt_arg__1 = (const QFontMetrics& ) *(QFontMetrics *)arg__1;
    QFontMetricsF *__qt_this = new QFontMetricsF((const QFontMetrics& )__qt_arg__1);
    return (void *) __qt_this;

}

// QFontMetricsF::QFontMetricsF(const QFontMetricsF & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QFontMetricsF_QFontMetricsF_QFontMetricsF
(void* arg__1)
{
    const QFontMetricsF&  __qt_arg__1 = (const QFontMetricsF& ) *(QFontMetricsF *)arg__1;
    QFontMetricsF *__qt_this = new QFontMetricsF((const QFontMetricsF& )__qt_arg__1);
    return (void *) __qt_this;

}

// QFontMetricsF::ascent() const
QTD_EXTERN QTD_EXPORT double qtd_QFontMetricsF_ascent_const
(void* __this_nativeId)
{
    QFontMetricsF *__qt_this = (QFontMetricsF *) __this_nativeId;
    double  __qt_return_value = __qt_this->ascent();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetricsF::averageCharWidth() const
QTD_EXTERN QTD_EXPORT double qtd_QFontMetricsF_averageCharWidth_const
(void* __this_nativeId)
{
    QFontMetricsF *__qt_this = (QFontMetricsF *) __this_nativeId;
    double  __qt_return_value = __qt_this->averageCharWidth();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetricsF::boundingRect(QChar arg__1) const
// QFontMetricsF::boundingRect(const QRectF & r, int flags, const QString & string, int tabstops, int * tabarray) const
QTD_EXTERN QTD_EXPORT void qtd_QFontMetricsF_boundingRect_QRectF_int_string_int_nativepointerint_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF r0,
 int flags1,
 DArray string2,
 int tabstops3,
 int* tabarray4)
{
    QString __qt_string2 = QString::fromUtf8((const char *)string2.ptr, string2.length);
    int*  __qt_tabarray4 = (int* ) tabarray4;
    QFontMetricsF *__qt_this = (QFontMetricsF *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->boundingRect((const QRectF& )r0, (int )flags1, (const QString& )__qt_string2, (int )tabstops3, (int* )__qt_tabarray4);

    *__d_return_value = __qt_return_value;

}

// QFontMetricsF::boundingRect(const QString & string) const
QTD_EXTERN QTD_EXPORT void qtd_QFontMetricsF_boundingRect_string_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 DArray string0)
{
    QString __qt_string0 = QString::fromUtf8((const char *)string0.ptr, string0.length);
    QFontMetricsF *__qt_this = (QFontMetricsF *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->boundingRect((const QString& )__qt_string0);

    *__d_return_value = __qt_return_value;

}

// QFontMetricsF::descent() const
QTD_EXTERN QTD_EXPORT double qtd_QFontMetricsF_descent_const
(void* __this_nativeId)
{
    QFontMetricsF *__qt_this = (QFontMetricsF *) __this_nativeId;
    double  __qt_return_value = __qt_this->descent();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetricsF::elidedText(const QString & text, Qt::TextElideMode mode, double width, int flags) const
QTD_EXTERN QTD_EXPORT void qtd_QFontMetricsF_elidedText_string_TextElideMode_double_int_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray text0,
 int mode1,
 double width2,
 int flags3)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    Qt::TextElideMode __qt_mode1 = (Qt::TextElideMode) mode1;
    QFontMetricsF *__qt_this = (QFontMetricsF *) __this_nativeId;
    QString  __qt_return_value = __qt_this->elidedText((const QString& )__qt_text0, (Qt::TextElideMode )__qt_mode1, (double )width2, (int )flags3);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFontMetricsF::height() const
QTD_EXTERN QTD_EXPORT double qtd_QFontMetricsF_height_const
(void* __this_nativeId)
{
    QFontMetricsF *__qt_this = (QFontMetricsF *) __this_nativeId;
    double  __qt_return_value = __qt_this->height();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetricsF::inFont(QChar arg__1) const
// QFontMetricsF::leading() const
QTD_EXTERN QTD_EXPORT double qtd_QFontMetricsF_leading_const
(void* __this_nativeId)
{
    QFontMetricsF *__qt_this = (QFontMetricsF *) __this_nativeId;
    double  __qt_return_value = __qt_this->leading();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetricsF::leftBearing(QChar arg__1) const
// QFontMetricsF::lineSpacing() const
QTD_EXTERN QTD_EXPORT double qtd_QFontMetricsF_lineSpacing_const
(void* __this_nativeId)
{
    QFontMetricsF *__qt_this = (QFontMetricsF *) __this_nativeId;
    double  __qt_return_value = __qt_this->lineSpacing();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetricsF::lineWidth() const
QTD_EXTERN QTD_EXPORT double qtd_QFontMetricsF_lineWidth_const
(void* __this_nativeId)
{
    QFontMetricsF *__qt_this = (QFontMetricsF *) __this_nativeId;
    double  __qt_return_value = __qt_this->lineWidth();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetricsF::maxWidth() const
QTD_EXTERN QTD_EXPORT double qtd_QFontMetricsF_maxWidth_const
(void* __this_nativeId)
{
    QFontMetricsF *__qt_this = (QFontMetricsF *) __this_nativeId;
    double  __qt_return_value = __qt_this->maxWidth();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetricsF::minLeftBearing() const
QTD_EXTERN QTD_EXPORT double qtd_QFontMetricsF_minLeftBearing_const
(void* __this_nativeId)
{
    QFontMetricsF *__qt_this = (QFontMetricsF *) __this_nativeId;
    double  __qt_return_value = __qt_this->minLeftBearing();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetricsF::minRightBearing() const
QTD_EXTERN QTD_EXPORT double qtd_QFontMetricsF_minRightBearing_const
(void* __this_nativeId)
{
    QFontMetricsF *__qt_this = (QFontMetricsF *) __this_nativeId;
    double  __qt_return_value = __qt_this->minRightBearing();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetricsF::operator==(const QFontMetricsF & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QFontMetricsF_operator_equal_QFontMetricsF_const
(void* __this_nativeId,
 void* other0)
{
    const QFontMetricsF&  __qt_other0 = (const QFontMetricsF& ) *(QFontMetricsF *)other0;
    QFontMetricsF *__qt_this = (QFontMetricsF *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QFontMetricsF& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetricsF::overlinePos() const
QTD_EXTERN QTD_EXPORT double qtd_QFontMetricsF_overlinePos_const
(void* __this_nativeId)
{
    QFontMetricsF *__qt_this = (QFontMetricsF *) __this_nativeId;
    double  __qt_return_value = __qt_this->overlinePos();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetricsF::rightBearing(QChar arg__1) const
// QFontMetricsF::size(int flags, const QString & str, int tabstops, int * tabarray) const
QTD_EXTERN QTD_EXPORT void qtd_QFontMetricsF_size_int_string_int_nativepointerint_const
(void* __this_nativeId,
 QSizeF * __d_return_value,
 int flags0,
 DArray str1,
 int tabstops2,
 int* tabarray3)
{
    QString __qt_str1 = QString::fromUtf8((const char *)str1.ptr, str1.length);
    int*  __qt_tabarray3 = (int* ) tabarray3;
    QFontMetricsF *__qt_this = (QFontMetricsF *) __this_nativeId;
    QSizeF  __qt_return_value = __qt_this->size((int )flags0, (const QString& )__qt_str1, (int )tabstops2, (int* )__qt_tabarray3);

    *__d_return_value = __qt_return_value;

}

// QFontMetricsF::strikeOutPos() const
QTD_EXTERN QTD_EXPORT double qtd_QFontMetricsF_strikeOutPos_const
(void* __this_nativeId)
{
    QFontMetricsF *__qt_this = (QFontMetricsF *) __this_nativeId;
    double  __qt_return_value = __qt_this->strikeOutPos();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetricsF::tightBoundingRect(const QString & text) const
QTD_EXTERN QTD_EXPORT void qtd_QFontMetricsF_tightBoundingRect_string_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QFontMetricsF *__qt_this = (QFontMetricsF *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->tightBoundingRect((const QString& )__qt_text0);

    *__d_return_value = __qt_return_value;

}

// QFontMetricsF::underlinePos() const
QTD_EXTERN QTD_EXPORT double qtd_QFontMetricsF_underlinePos_const
(void* __this_nativeId)
{
    QFontMetricsF *__qt_this = (QFontMetricsF *) __this_nativeId;
    double  __qt_return_value = __qt_this->underlinePos();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetricsF::width(QChar arg__1) const
// QFontMetricsF::width(const QString & string) const
QTD_EXTERN QTD_EXPORT double qtd_QFontMetricsF_width_string_const
(void* __this_nativeId,
 DArray string0)
{
    QString __qt_string0 = QString::fromUtf8((const char *)string0.ptr, string0.length);
    QFontMetricsF *__qt_this = (QFontMetricsF *) __this_nativeId;
    double  __qt_return_value = __qt_this->width((const QString& )__qt_string0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetricsF::xHeight() const
QTD_EXTERN QTD_EXPORT double qtd_QFontMetricsF_xHeight_const
(void* __this_nativeId)
{
    QFontMetricsF *__qt_this = (QFontMetricsF *) __this_nativeId;
    double  __qt_return_value = __qt_this->xHeight();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QFontMetricsF_QTypeInfo_isComplex() { return (bool) QTypeInfo<QFontMetricsF>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QFontMetricsF_QTypeInfo_isStatic() { return (bool) QTypeInfo<QFontMetricsF>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QFontMetricsF_QTypeInfo_isLarge() { return (bool) QTypeInfo<QFontMetricsF>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QFontMetricsF_QTypeInfo_isPointer() { return (bool) QTypeInfo<QFontMetricsF>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QFontMetricsF_QTypeInfo_isDummy() { return (bool) QTypeInfo<QFontMetricsF>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QFontMetricsF_placed_copy(void* orig, void* place) {
    const QFontMetricsF&  __qt_orig = (const QFontMetricsF& ) *(QFontMetricsF *)orig;
    QFontMetricsF *result = new (place) QFontMetricsF (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QFontMetricsF_native_copy(void* orig) {
    const QFontMetricsF&  __qt_orig = (const QFontMetricsF& ) *(QFontMetricsF *)orig;
    QFontMetricsF *result = new QFontMetricsF (__qt_orig);
    return result;
}

