#include <QStringList>
#include <QVariant>
#include <qdatastream.h>
#include <qfont.h>
#include <qpaintdevice.h>
#include <qstringlist.h>
#include <qvariant.h>

#include <iostream>
#include <qfont.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QFont_delete(void* nativeId)
{
    delete (QFont*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QFont_destroy(void* nativeId)
{
    call_destructor((QFont*)nativeId);
}

// ---externC---
// QFont::QFont()
QTD_EXTERN QTD_EXPORT void* qtd_QFont_QFont
()
{
    QFont *__qt_this = new QFont();
    return (void *) __qt_this;

}

// QFont::QFont(const QFont & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QFont_QFont_QFont
(void* arg__1)
{
    const QFont&  __qt_arg__1 = (const QFont& ) *(QFont *)arg__1;
    QFont *__qt_this = new QFont((const QFont& )__qt_arg__1);
    return (void *) __qt_this;

}

// QFont::QFont(const QFont & arg__1, QPaintDevice * pd)
QTD_EXTERN QTD_EXPORT void* qtd_QFont_QFont_QFont_QPaintDevice
(void* arg__1,
 void* pd1)
{
    const QFont&  __qt_arg__1 = (const QFont& ) *(QFont *)arg__1;
    QPaintDevice*  __qt_pd1 = (QPaintDevice* ) pd1;
    QFont *__qt_this = new QFont((const QFont& )__qt_arg__1, (QPaintDevice* )__qt_pd1);
    return (void *) __qt_this;

}

// QFont::QFont(const QString & family, int pointSize, int weight, bool italic)
QTD_EXTERN QTD_EXPORT void* qtd_QFont_QFont_string_int_int_bool
(DArray family0,
 int pointSize1,
 int weight2,
 bool italic3)
{
    QString __qt_family0 = QString::fromUtf8((const char *)family0.ptr, family0.length);
    QFont *__qt_this = new QFont((const QString& )__qt_family0, (int )pointSize1, (int )weight2, (bool )italic3);
    return (void *) __qt_this;

}

// QFont::bold() const
QTD_EXTERN QTD_EXPORT bool qtd_QFont_bold_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    bool  __qt_return_value = __qt_this->bold();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::capitalization() const
QTD_EXTERN QTD_EXPORT int qtd_QFont_capitalization_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    int  __qt_return_value = __qt_this->capitalization();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::defaultFamily() const
QTD_EXTERN QTD_EXPORT void qtd_QFont_defaultFamily_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    QString  __qt_return_value = __qt_this->defaultFamily();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFont::exactMatch() const
QTD_EXTERN QTD_EXPORT bool qtd_QFont_exactMatch_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    bool  __qt_return_value = __qt_this->exactMatch();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::family() const
QTD_EXTERN QTD_EXPORT void qtd_QFont_family_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    QString  __qt_return_value = __qt_this->family();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFont::fixedPitch() const
QTD_EXTERN QTD_EXPORT bool qtd_QFont_fixedPitch_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    bool  __qt_return_value = __qt_this->fixedPitch();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::fromString(const QString & arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QFont_fromString_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QFont *__qt_this = (QFont *) __this_nativeId;
    bool  __qt_return_value = __qt_this->fromString((const QString& )__qt_arg__1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::handle() const
QTD_EXTERN QTD_EXPORT Qt::HANDLE qtd_QFont_handle_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    Qt::HANDLE  __qt_return_value = __qt_this->handle();

    Qt::HANDLE __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::isCopyOf(const QFont & arg__1) const
QTD_EXTERN QTD_EXPORT bool qtd_QFont_isCopyOf_QFont_const
(void* __this_nativeId,
 void* arg__1)
{
    const QFont&  __qt_arg__1 = (const QFont& ) *(QFont *)arg__1;
    QFont *__qt_this = (QFont *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isCopyOf((const QFont& )__qt_arg__1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::italic() const
QTD_EXTERN QTD_EXPORT bool qtd_QFont_italic_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    bool  __qt_return_value = __qt_this->italic();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::kerning() const
QTD_EXTERN QTD_EXPORT bool qtd_QFont_kerning_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    bool  __qt_return_value = __qt_this->kerning();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::key() const
QTD_EXTERN QTD_EXPORT void qtd_QFont_key_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    QString  __qt_return_value = __qt_this->key();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFont::lastResortFamily() const
QTD_EXTERN QTD_EXPORT void qtd_QFont_lastResortFamily_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    QString  __qt_return_value = __qt_this->lastResortFamily();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFont::lastResortFont() const
QTD_EXTERN QTD_EXPORT void qtd_QFont_lastResortFont_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    QString  __qt_return_value = __qt_this->lastResortFont();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFont::letterSpacing() const
QTD_EXTERN QTD_EXPORT double qtd_QFont_letterSpacing_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    double  __qt_return_value = __qt_this->letterSpacing();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::letterSpacingType() const
QTD_EXTERN QTD_EXPORT int qtd_QFont_letterSpacingType_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    int  __qt_return_value = __qt_this->letterSpacingType();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::operator QVariant() const
QTD_EXTERN QTD_EXPORT void* qtd_QFont_operator_cast_QVariant_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->operator QVariant();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QFont::operator<(const QFont & arg__1) const
QTD_EXTERN QTD_EXPORT bool qtd_QFont_operator_less_QFont_const
(void* __this_nativeId,
 void* arg__1)
{
    const QFont&  __qt_arg__1 = (const QFont& ) *(QFont *)arg__1;
    QFont *__qt_this = (QFont *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator<((const QFont& )__qt_arg__1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFont_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QFont *__qt_this = (QFont *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QFont::operator==(const QFont & arg__1) const
QTD_EXTERN QTD_EXPORT bool qtd_QFont_operator_equal_QFont_const
(void* __this_nativeId,
 void* arg__1)
{
    const QFont&  __qt_arg__1 = (const QFont& ) *(QFont *)arg__1;
    QFont *__qt_this = (QFont *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QFont& )__qt_arg__1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFont_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QFont *__qt_this = (QFont *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QFont::overline() const
QTD_EXTERN QTD_EXPORT bool qtd_QFont_overline_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    bool  __qt_return_value = __qt_this->overline();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::pixelSize() const
QTD_EXTERN QTD_EXPORT int qtd_QFont_pixelSize_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    int  __qt_return_value = __qt_this->pixelSize();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::pointSize() const
QTD_EXTERN QTD_EXPORT int qtd_QFont_pointSize_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    int  __qt_return_value = __qt_this->pointSize();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::pointSizeF() const
QTD_EXTERN QTD_EXPORT double qtd_QFont_pointSizeF_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    double  __qt_return_value = __qt_this->pointSizeF();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::rawMode() const
QTD_EXTERN QTD_EXPORT bool qtd_QFont_rawMode_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    bool  __qt_return_value = __qt_this->rawMode();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::rawName() const
QTD_EXTERN QTD_EXPORT void qtd_QFont_rawName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    QString  __qt_return_value = __qt_this->rawName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFont::resolve() const
QTD_EXTERN QTD_EXPORT uint qtd_QFont_resolve_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    uint  __qt_return_value = __qt_this->resolve();

    uint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::resolve(const QFont & arg__1) const
QTD_EXTERN QTD_EXPORT void* qtd_QFont_resolve_QFont_const
(void* __this_nativeId,
 void* arg__1)
{
    const QFont&  __qt_arg__1 = (const QFont& ) *(QFont *)arg__1;
    QFont *__qt_this = (QFont *) __this_nativeId;
    QFont  __qt_return_value = __qt_this->resolve((const QFont& )__qt_arg__1);

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QFont::resolve(uint mask)
QTD_EXTERN QTD_EXPORT void qtd_QFont_resolve_uint
(void* __this_nativeId,
 uint mask0)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->resolve((uint )mask0);

}

// QFont::setBold(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFont_setBold_bool
(void* __this_nativeId,
 bool arg__1)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->setBold((bool )arg__1);

}

// QFont::setCapitalization(QFont::Capitalization arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFont_setCapitalization_Capitalization
(void* __this_nativeId,
 int arg__1)
{
    QFont::Capitalization __qt_arg__1 = (QFont::Capitalization) arg__1;
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->setCapitalization((QFont::Capitalization )__qt_arg__1);

}

// QFont::setFamily(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFont_setFamily_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->setFamily((const QString& )__qt_arg__1);

}

// QFont::setFixedPitch(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFont_setFixedPitch_bool
(void* __this_nativeId,
 bool arg__1)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->setFixedPitch((bool )arg__1);

}

// QFont::setItalic(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QFont_setItalic_bool
(void* __this_nativeId,
 bool b0)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->setItalic((bool )b0);

}

// QFont::setKerning(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFont_setKerning_bool
(void* __this_nativeId,
 bool arg__1)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->setKerning((bool )arg__1);

}

// QFont::setLetterSpacing(QFont::SpacingType type, double spacing)
QTD_EXTERN QTD_EXPORT void qtd_QFont_setLetterSpacing_SpacingType_double
(void* __this_nativeId,
 int type0,
 double spacing1)
{
    QFont::SpacingType __qt_type0 = (QFont::SpacingType) type0;
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->setLetterSpacing((QFont::SpacingType )__qt_type0, (double )spacing1);

}

// QFont::setOverline(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFont_setOverline_bool
(void* __this_nativeId,
 bool arg__1)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->setOverline((bool )arg__1);

}

// QFont::setPixelSize(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFont_setPixelSize_int
(void* __this_nativeId,
 int arg__1)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->setPixelSize((int )arg__1);

}

// QFont::setPointSize(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFont_setPointSize_int
(void* __this_nativeId,
 int arg__1)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->setPointSize((int )arg__1);

}

// QFont::setPointSizeF(double arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFont_setPointSizeF_double
(void* __this_nativeId,
 double arg__1)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->setPointSizeF((double )arg__1);

}

// QFont::setRawMode(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFont_setRawMode_bool
(void* __this_nativeId,
 bool arg__1)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->setRawMode((bool )arg__1);

}

// QFont::setRawName(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFont_setRawName_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->setRawName((const QString& )__qt_arg__1);

}

// QFont::setStretch(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFont_setStretch_int
(void* __this_nativeId,
 int arg__1)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->setStretch((int )arg__1);

}

// QFont::setStrikeOut(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFont_setStrikeOut_bool
(void* __this_nativeId,
 bool arg__1)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->setStrikeOut((bool )arg__1);

}

// QFont::setStyle(QFont::Style style)
QTD_EXTERN QTD_EXPORT void qtd_QFont_setStyle_Style
(void* __this_nativeId,
 int style0)
{
    QFont::Style __qt_style0 = (QFont::Style) style0;
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->setStyle((QFont::Style )__qt_style0);

}

// QFont::setStyleHint(QFont::StyleHint arg__1, QFont::StyleStrategy arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QFont_setStyleHint_StyleHint_StyleStrategy
(void* __this_nativeId,
 int arg__1,
 int arg__2)
{
    QFont::StyleHint __qt_arg__1 = (QFont::StyleHint) arg__1;
    QFont::StyleStrategy __qt_arg__2 = (QFont::StyleStrategy) arg__2;
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->setStyleHint((QFont::StyleHint )__qt_arg__1, (QFont::StyleStrategy )__qt_arg__2);

}

// QFont::setStyleStrategy(QFont::StyleStrategy s)
QTD_EXTERN QTD_EXPORT void qtd_QFont_setStyleStrategy_StyleStrategy
(void* __this_nativeId,
 int s0)
{
    QFont::StyleStrategy __qt_s0 = (QFont::StyleStrategy) s0;
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->setStyleStrategy((QFont::StyleStrategy )__qt_s0);

}

// QFont::setUnderline(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFont_setUnderline_bool
(void* __this_nativeId,
 bool arg__1)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->setUnderline((bool )arg__1);

}

// QFont::setWeight(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFont_setWeight_int
(void* __this_nativeId,
 int arg__1)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->setWeight((int )arg__1);

}

// QFont::setWordSpacing(double spacing)
QTD_EXTERN QTD_EXPORT void qtd_QFont_setWordSpacing_double
(void* __this_nativeId,
 double spacing0)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    __qt_this->setWordSpacing((double )spacing0);

}

// QFont::stretch() const
QTD_EXTERN QTD_EXPORT int qtd_QFont_stretch_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    int  __qt_return_value = __qt_this->stretch();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::strikeOut() const
QTD_EXTERN QTD_EXPORT bool qtd_QFont_strikeOut_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    bool  __qt_return_value = __qt_this->strikeOut();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::style() const
QTD_EXTERN QTD_EXPORT int qtd_QFont_style_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    int  __qt_return_value = __qt_this->style();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::styleHint() const
QTD_EXTERN QTD_EXPORT int qtd_QFont_styleHint_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    int  __qt_return_value = __qt_this->styleHint();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::styleStrategy() const
QTD_EXTERN QTD_EXPORT int qtd_QFont_styleStrategy_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    int  __qt_return_value = __qt_this->styleStrategy();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::toString() const
QTD_EXTERN QTD_EXPORT void qtd_QFont_toString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFont::underline() const
QTD_EXTERN QTD_EXPORT bool qtd_QFont_underline_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    bool  __qt_return_value = __qt_this->underline();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::weight() const
QTD_EXTERN QTD_EXPORT int qtd_QFont_weight_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    int  __qt_return_value = __qt_this->weight();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::wordSpacing() const
QTD_EXTERN QTD_EXPORT double qtd_QFont_wordSpacing_const
(void* __this_nativeId)
{
    QFont *__qt_this = (QFont *) __this_nativeId;
    double  __qt_return_value = __qt_this->wordSpacing();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFont::cacheStatistics()
QTD_EXTERN QTD_EXPORT void qtd_QFont_cacheStatistics
()
{
    QFont::cacheStatistics();

}

// QFont::cleanup()
QTD_EXTERN QTD_EXPORT void qtd_QFont_cleanup
()
{
    QFont::cleanup();

}

// QFont::initialize()
QTD_EXTERN QTD_EXPORT void qtd_QFont_initialize
()
{
    QFont::initialize();

}

// QFont::insertSubstitution(const QString & arg__1, const QString & arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QFont_insertSubstitution_string_string
(DArray arg__1,
 DArray arg__2)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QString __qt_arg__2 = QString::fromUtf8((const char *)arg__2.ptr, arg__2.length);
    QFont::insertSubstitution((const QString& )__qt_arg__1, (const QString& )__qt_arg__2);

}

// QFont::insertSubstitutions(const QString & arg__1, const QStringList & arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QFont_insertSubstitutions_string_QList
(DArray arg__1,
 void* arg__2)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
QStringList __qt_arg__2 = (*(QStringList *)arg__2);
    QFont::insertSubstitutions((const QString& )__qt_arg__1, (const QStringList& )__qt_arg__2);

}

// QFont::removeSubstitution(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFont_removeSubstitution_string
(DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QFont::removeSubstitution((const QString& )__qt_arg__1);

}

// QFont::substitute(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFont_substitute_string
(void* __d_return_value,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QString  __qt_return_value = QFont::substitute((const QString& )__qt_arg__1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFont::substitutes(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFont_substitutes_string
(void* __d_return_value,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QStringList  __qt_return_value = QFont::substitutes((const QString& )__qt_arg__1);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QFont::substitutions()
QTD_EXTERN QTD_EXPORT void qtd_QFont_substitutions
(void* __d_return_value)
{
    QStringList  __qt_return_value = QFont::substitutions();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QFont_QTypeInfo_isComplex() { return (bool) QTypeInfo<QFont>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QFont_QTypeInfo_isStatic() { return (bool) QTypeInfo<QFont>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QFont_QTypeInfo_isLarge() { return (bool) QTypeInfo<QFont>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QFont_QTypeInfo_isPointer() { return (bool) QTypeInfo<QFont>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QFont_QTypeInfo_isDummy() { return (bool) QTypeInfo<QFont>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QFont_placed_copy(void* orig, void* place) {
    const QFont&  __qt_orig = (const QFont& ) *(QFont *)orig;
    QFont *result = new (place) QFont (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QFont_native_copy(void* orig) {
    const QFont&  __qt_orig = (const QFont& ) *(QFont *)orig;
    QFont *result = new QFont (__qt_orig);
    return result;
}

