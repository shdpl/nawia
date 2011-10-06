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

QTD_EXTERN QTD_EXPORT void qtd_QFontMetrics_delete(void* nativeId)
{
    delete (QFontMetrics*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QFontMetrics_destroy(void* nativeId)
{
    call_destructor((QFontMetrics*)nativeId);
}

// ---externC---
// QFontMetrics::QFontMetrics(const QFont & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QFontMetrics_QFontMetrics_QFont
(void* arg__1)
{
    const QFont&  __qt_arg__1 = (const QFont& ) *(QFont *)arg__1;
    QFontMetrics *__qt_this = new QFontMetrics((const QFont& )__qt_arg__1);
    return (void *) __qt_this;

}

// QFontMetrics::QFontMetrics(const QFont & arg__1, QPaintDevice * pd)
QTD_EXTERN QTD_EXPORT void* qtd_QFontMetrics_QFontMetrics_QFont_QPaintDevice
(void* arg__1,
 void* pd1)
{
    const QFont&  __qt_arg__1 = (const QFont& ) *(QFont *)arg__1;
    QPaintDevice*  __qt_pd1 = (QPaintDevice* ) pd1;
    QFontMetrics *__qt_this = new QFontMetrics((const QFont& )__qt_arg__1, (QPaintDevice* )__qt_pd1);
    return (void *) __qt_this;

}

// QFontMetrics::QFontMetrics(const QFontMetrics & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QFontMetrics_QFontMetrics_QFontMetrics
(void* arg__1)
{
    const QFontMetrics&  __qt_arg__1 = (const QFontMetrics& ) *(QFontMetrics *)arg__1;
    QFontMetrics *__qt_this = new QFontMetrics((const QFontMetrics& )__qt_arg__1);
    return (void *) __qt_this;

}

// QFontMetrics::ascent() const
QTD_EXTERN QTD_EXPORT int qtd_QFontMetrics_ascent_const
(void* __this_nativeId)
{
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    int  __qt_return_value = __qt_this->ascent();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetrics::averageCharWidth() const
QTD_EXTERN QTD_EXPORT int qtd_QFontMetrics_averageCharWidth_const
(void* __this_nativeId)
{
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    int  __qt_return_value = __qt_this->averageCharWidth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetrics::boundingRect(QChar arg__1) const
// QFontMetrics::boundingRect(const QRect & r, int flags, const QString & text, int tabstops, int * tabarray) const
QTD_EXTERN QTD_EXPORT void qtd_QFontMetrics_boundingRect_QRect_int_string_int_nativepointerint_const
(void* __this_nativeId,
 QRect * __d_return_value,
 QRect r0,
 int flags1,
 DArray text2,
 int tabstops3,
 int* tabarray4)
{
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    int*  __qt_tabarray4 = (int* ) tabarray4;
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->boundingRect((const QRect& )r0, (int )flags1, (const QString& )__qt_text2, (int )tabstops3, (int* )__qt_tabarray4);

    *__d_return_value = __qt_return_value;

}

// QFontMetrics::boundingRect(const QString & text) const
QTD_EXTERN QTD_EXPORT void qtd_QFontMetrics_boundingRect_string_const
(void* __this_nativeId,
 QRect * __d_return_value,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->boundingRect((const QString& )__qt_text0);

    *__d_return_value = __qt_return_value;

}

// QFontMetrics::boundingRect(int x, int y, int w, int h, int flags, const QString & text, int tabstops, int * tabarray) const
QTD_EXTERN QTD_EXPORT void qtd_QFontMetrics_boundingRect_int_int_int_int_int_string_int_nativepointerint_const
(void* __this_nativeId,
 QRect * __d_return_value,
 int x0,
 int y1,
 int w2,
 int h3,
 int flags4,
 DArray text5,
 int tabstops6,
 int* tabarray7)
{
    QString __qt_text5 = QString::fromUtf8((const char *)text5.ptr, text5.length);
    int*  __qt_tabarray7 = (int* ) tabarray7;
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->boundingRect((int )x0, (int )y1, (int )w2, (int )h3, (int )flags4, (const QString& )__qt_text5, (int )tabstops6, (int* )__qt_tabarray7);

    *__d_return_value = __qt_return_value;

}

// QFontMetrics::charWidth(const QString & str, int pos) const
QTD_EXTERN QTD_EXPORT int qtd_QFontMetrics_charWidth_string_int_const
(void* __this_nativeId,
 DArray str0,
 int pos1)
{
    QString __qt_str0 = QString::fromUtf8((const char *)str0.ptr, str0.length);
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    int  __qt_return_value = __qt_this->charWidth((const QString& )__qt_str0, (int )pos1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetrics::descent() const
QTD_EXTERN QTD_EXPORT int qtd_QFontMetrics_descent_const
(void* __this_nativeId)
{
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    int  __qt_return_value = __qt_this->descent();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetrics::elidedText(const QString & text, Qt::TextElideMode mode, int width, int flags) const
QTD_EXTERN QTD_EXPORT void qtd_QFontMetrics_elidedText_string_TextElideMode_int_int_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray text0,
 int mode1,
 int width2,
 int flags3)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    Qt::TextElideMode __qt_mode1 = (Qt::TextElideMode) mode1;
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    QString  __qt_return_value = __qt_this->elidedText((const QString& )__qt_text0, (Qt::TextElideMode )__qt_mode1, (int )width2, (int )flags3);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFontMetrics::height() const
QTD_EXTERN QTD_EXPORT int qtd_QFontMetrics_height_const
(void* __this_nativeId)
{
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    int  __qt_return_value = __qt_this->height();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetrics::inFont(QChar arg__1) const
// QFontMetrics::leading() const
QTD_EXTERN QTD_EXPORT int qtd_QFontMetrics_leading_const
(void* __this_nativeId)
{
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    int  __qt_return_value = __qt_this->leading();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetrics::leftBearing(QChar arg__1) const
// QFontMetrics::lineSpacing() const
QTD_EXTERN QTD_EXPORT int qtd_QFontMetrics_lineSpacing_const
(void* __this_nativeId)
{
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    int  __qt_return_value = __qt_this->lineSpacing();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetrics::lineWidth() const
QTD_EXTERN QTD_EXPORT int qtd_QFontMetrics_lineWidth_const
(void* __this_nativeId)
{
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    int  __qt_return_value = __qt_this->lineWidth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetrics::maxWidth() const
QTD_EXTERN QTD_EXPORT int qtd_QFontMetrics_maxWidth_const
(void* __this_nativeId)
{
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    int  __qt_return_value = __qt_this->maxWidth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetrics::minLeftBearing() const
QTD_EXTERN QTD_EXPORT int qtd_QFontMetrics_minLeftBearing_const
(void* __this_nativeId)
{
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    int  __qt_return_value = __qt_this->minLeftBearing();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetrics::minRightBearing() const
QTD_EXTERN QTD_EXPORT int qtd_QFontMetrics_minRightBearing_const
(void* __this_nativeId)
{
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    int  __qt_return_value = __qt_this->minRightBearing();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetrics::operator==(const QFontMetrics & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QFontMetrics_operator_equal_QFontMetrics_const
(void* __this_nativeId,
 void* other0)
{
    const QFontMetrics&  __qt_other0 = (const QFontMetrics& ) *(QFontMetrics *)other0;
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QFontMetrics& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetrics::overlinePos() const
QTD_EXTERN QTD_EXPORT int qtd_QFontMetrics_overlinePos_const
(void* __this_nativeId)
{
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    int  __qt_return_value = __qt_this->overlinePos();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetrics::rightBearing(QChar arg__1) const
// QFontMetrics::size(int flags, const QString & str, int tabstops, int * tabarray) const
QTD_EXTERN QTD_EXPORT void qtd_QFontMetrics_size_int_string_int_nativepointerint_const
(void* __this_nativeId,
 QSize * __d_return_value,
 int flags0,
 DArray str1,
 int tabstops2,
 int* tabarray3)
{
    QString __qt_str1 = QString::fromUtf8((const char *)str1.ptr, str1.length);
    int*  __qt_tabarray3 = (int* ) tabarray3;
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->size((int )flags0, (const QString& )__qt_str1, (int )tabstops2, (int* )__qt_tabarray3);

    *__d_return_value = __qt_return_value;

}

// QFontMetrics::strikeOutPos() const
QTD_EXTERN QTD_EXPORT int qtd_QFontMetrics_strikeOutPos_const
(void* __this_nativeId)
{
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    int  __qt_return_value = __qt_this->strikeOutPos();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetrics::tightBoundingRect(const QString & text) const
QTD_EXTERN QTD_EXPORT void qtd_QFontMetrics_tightBoundingRect_string_const
(void* __this_nativeId,
 QRect * __d_return_value,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->tightBoundingRect((const QString& )__qt_text0);

    *__d_return_value = __qt_return_value;

}

// QFontMetrics::underlinePos() const
QTD_EXTERN QTD_EXPORT int qtd_QFontMetrics_underlinePos_const
(void* __this_nativeId)
{
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    int  __qt_return_value = __qt_this->underlinePos();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetrics::width(QChar arg__1) const
// QFontMetrics::width(const QString & arg__1, int len) const
QTD_EXTERN QTD_EXPORT int qtd_QFontMetrics_width_string_int_const
(void* __this_nativeId,
 DArray arg__1,
 int len1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    int  __qt_return_value = __qt_this->width((const QString& )__qt_arg__1, (int )len1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetrics::width(const QString & arg__1, int len, int flags) const
QTD_EXTERN QTD_EXPORT int qtd_QFontMetrics_width_string_int_int_const
(void* __this_nativeId,
 DArray arg__1,
 int len1,
 int flags2)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    int  __qt_return_value = __qt_this->width((const QString& )__qt_arg__1, (int )len1, (int )flags2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontMetrics::xHeight() const
QTD_EXTERN QTD_EXPORT int qtd_QFontMetrics_xHeight_const
(void* __this_nativeId)
{
    QFontMetrics *__qt_this = (QFontMetrics *) __this_nativeId;
    int  __qt_return_value = __qt_this->xHeight();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QFontMetrics_QTypeInfo_isComplex() { return (bool) QTypeInfo<QFontMetrics>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QFontMetrics_QTypeInfo_isStatic() { return (bool) QTypeInfo<QFontMetrics>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QFontMetrics_QTypeInfo_isLarge() { return (bool) QTypeInfo<QFontMetrics>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QFontMetrics_QTypeInfo_isPointer() { return (bool) QTypeInfo<QFontMetrics>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QFontMetrics_QTypeInfo_isDummy() { return (bool) QTypeInfo<QFontMetrics>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QFontMetrics_placed_copy(void* orig, void* place) {
    const QFontMetrics&  __qt_orig = (const QFontMetrics& ) *(QFontMetrics *)orig;
    QFontMetrics *result = new (place) QFontMetrics (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QFontMetrics_native_copy(void* orig) {
    const QFontMetrics&  __qt_orig = (const QFontMetrics& ) *(QFontMetrics *)orig;
    QFontMetrics *result = new QFontMetrics (__qt_orig);
    return result;
}

