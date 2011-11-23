#include <QVariant>
#include <qfont.h>
#include <qfontinfo.h>

#include <iostream>
#include <qfontinfo.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QFontInfo_delete(void* nativeId)
{
    delete (QFontInfo*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QFontInfo_destroy(void* nativeId)
{
    call_destructor((QFontInfo*)nativeId);
}

// ---externC---
// QFontInfo::QFontInfo(const QFont & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QFontInfo_QFontInfo_QFont
(void* arg__1)
{
    const QFont&  __qt_arg__1 = (const QFont& ) *(QFont *)arg__1;
    QFontInfo *__qt_this = new QFontInfo((const QFont& )__qt_arg__1);
    return (void *) __qt_this;

}

// QFontInfo::QFontInfo(const QFontInfo & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QFontInfo_QFontInfo_QFontInfo
(void* arg__1)
{
    const QFontInfo&  __qt_arg__1 = (const QFontInfo& ) *(QFontInfo *)arg__1;
    QFontInfo *__qt_this = new QFontInfo((const QFontInfo& )__qt_arg__1);
    return (void *) __qt_this;

}

// QFontInfo::bold() const
QTD_EXTERN QTD_EXPORT bool qtd_QFontInfo_bold_const
(void* __this_nativeId)
{
    QFontInfo *__qt_this = (QFontInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->bold();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontInfo::exactMatch() const
QTD_EXTERN QTD_EXPORT bool qtd_QFontInfo_exactMatch_const
(void* __this_nativeId)
{
    QFontInfo *__qt_this = (QFontInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->exactMatch();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontInfo::family() const
QTD_EXTERN QTD_EXPORT void qtd_QFontInfo_family_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFontInfo *__qt_this = (QFontInfo *) __this_nativeId;
    QString  __qt_return_value = __qt_this->family();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFontInfo::fixedPitch() const
QTD_EXTERN QTD_EXPORT bool qtd_QFontInfo_fixedPitch_const
(void* __this_nativeId)
{
    QFontInfo *__qt_this = (QFontInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->fixedPitch();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontInfo::italic() const
QTD_EXTERN QTD_EXPORT bool qtd_QFontInfo_italic_const
(void* __this_nativeId)
{
    QFontInfo *__qt_this = (QFontInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->italic();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontInfo::overline() const
QTD_EXTERN QTD_EXPORT bool qtd_QFontInfo_overline_const
(void* __this_nativeId)
{
    QFontInfo *__qt_this = (QFontInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->overline();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontInfo::pixelSize() const
QTD_EXTERN QTD_EXPORT int qtd_QFontInfo_pixelSize_const
(void* __this_nativeId)
{
    QFontInfo *__qt_this = (QFontInfo *) __this_nativeId;
    int  __qt_return_value = __qt_this->pixelSize();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontInfo::pointSize() const
QTD_EXTERN QTD_EXPORT int qtd_QFontInfo_pointSize_const
(void* __this_nativeId)
{
    QFontInfo *__qt_this = (QFontInfo *) __this_nativeId;
    int  __qt_return_value = __qt_this->pointSize();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontInfo::pointSizeF() const
QTD_EXTERN QTD_EXPORT double qtd_QFontInfo_pointSizeF_const
(void* __this_nativeId)
{
    QFontInfo *__qt_this = (QFontInfo *) __this_nativeId;
    double  __qt_return_value = __qt_this->pointSizeF();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontInfo::rawMode() const
QTD_EXTERN QTD_EXPORT bool qtd_QFontInfo_rawMode_const
(void* __this_nativeId)
{
    QFontInfo *__qt_this = (QFontInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->rawMode();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontInfo::strikeOut() const
QTD_EXTERN QTD_EXPORT bool qtd_QFontInfo_strikeOut_const
(void* __this_nativeId)
{
    QFontInfo *__qt_this = (QFontInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->strikeOut();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontInfo::style() const
QTD_EXTERN QTD_EXPORT int qtd_QFontInfo_style_const
(void* __this_nativeId)
{
    QFontInfo *__qt_this = (QFontInfo *) __this_nativeId;
    int  __qt_return_value = __qt_this->style();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontInfo::styleHint() const
QTD_EXTERN QTD_EXPORT int qtd_QFontInfo_styleHint_const
(void* __this_nativeId)
{
    QFontInfo *__qt_this = (QFontInfo *) __this_nativeId;
    int  __qt_return_value = __qt_this->styleHint();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontInfo::underline() const
QTD_EXTERN QTD_EXPORT bool qtd_QFontInfo_underline_const
(void* __this_nativeId)
{
    QFontInfo *__qt_this = (QFontInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->underline();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontInfo::weight() const
QTD_EXTERN QTD_EXPORT int qtd_QFontInfo_weight_const
(void* __this_nativeId)
{
    QFontInfo *__qt_this = (QFontInfo *) __this_nativeId;
    int  __qt_return_value = __qt_this->weight();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QFontInfo_QTypeInfo_isComplex() { return (bool) QTypeInfo<QFontInfo>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QFontInfo_QTypeInfo_isStatic() { return (bool) QTypeInfo<QFontInfo>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QFontInfo_QTypeInfo_isLarge() { return (bool) QTypeInfo<QFontInfo>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QFontInfo_QTypeInfo_isPointer() { return (bool) QTypeInfo<QFontInfo>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QFontInfo_QTypeInfo_isDummy() { return (bool) QTypeInfo<QFontInfo>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QFontInfo_placed_copy(void* orig, void* place) {
    const QFontInfo&  __qt_orig = (const QFontInfo& ) *(QFontInfo *)orig;
    QFontInfo *result = new (place) QFontInfo (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QFontInfo_native_copy(void* orig) {
    const QFontInfo&  __qt_orig = (const QFontInfo& ) *(QFontInfo *)orig;
    QFontInfo *result = new QFontInfo (__qt_orig);
    return result;
}

