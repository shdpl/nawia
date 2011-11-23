#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qfont.h>
#include <qpen.h>
#include <qstringlist.h>
#include <qtextformat.h>
#include <qvariant.h>
#include <qvector.h>

#include "QTextCharFormat_shell.h"
#include <iostream>
#include <qtextformat.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_delete(void* nativeId)
{
    delete (QTextCharFormat_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_destroy(void* nativeId)
{
    call_destructor((QTextCharFormat_QtDShell*)nativeId);
}

QTextCharFormat_QtDShell::QTextCharFormat_QtDShell()
    : QTextCharFormat()
{
}

QTextCharFormat_QtDShell::QTextCharFormat_QtDShell(const QTextFormat&  fmt0)
    : QTextCharFormat(fmt0)
{
}

QTextCharFormat_QtDShell::~QTextCharFormat_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QTextCharFormat::QTextCharFormat()
QTD_EXTERN QTD_EXPORT void* qtd_QTextCharFormat_QTextCharFormat
()
{
    QTextCharFormat_QtDShell *__qt_this = new QTextCharFormat_QtDShell();
    return (void *) __qt_this;

}

// QTextCharFormat::QTextCharFormat(const QTextFormat & fmt)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCharFormat_QTextCharFormat_QTextFormat
(void* fmt0)
{
    const QTextFormat&  __qt_fmt0 = (const QTextFormat& ) *(QTextFormat *)fmt0;
    QTextCharFormat_QtDShell *__qt_this = new QTextCharFormat_QtDShell((const QTextFormat& )__qt_fmt0);
    return (void *) __qt_this;

}

// QTextCharFormat::anchorHref() const
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_anchorHref_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->anchorHref();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextCharFormat::anchorNames() const
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_anchorNames_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->anchorNames();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTextCharFormat::font() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextCharFormat_font_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    QFont  __qt_return_value = __qt_this->font();

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QTextCharFormat::fontCapitalization() const
QTD_EXTERN QTD_EXPORT int qtd_QTextCharFormat_fontCapitalization_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->fontCapitalization();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCharFormat::fontFamily() const
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_fontFamily_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->fontFamily();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextCharFormat::fontFixedPitch() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextCharFormat_fontFixedPitch_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->fontFixedPitch();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCharFormat::fontItalic() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextCharFormat_fontItalic_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->fontItalic();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCharFormat::fontKerning() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextCharFormat_fontKerning_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->fontKerning();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCharFormat::fontLetterSpacing() const
QTD_EXTERN QTD_EXPORT double qtd_QTextCharFormat_fontLetterSpacing_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->fontLetterSpacing();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCharFormat::fontOverline() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextCharFormat_fontOverline_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->fontOverline();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCharFormat::fontPointSize() const
QTD_EXTERN QTD_EXPORT double qtd_QTextCharFormat_fontPointSize_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->fontPointSize();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCharFormat::fontStrikeOut() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextCharFormat_fontStrikeOut_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->fontStrikeOut();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCharFormat::fontStyleHint() const
QTD_EXTERN QTD_EXPORT int qtd_QTextCharFormat_fontStyleHint_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->fontStyleHint();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCharFormat::fontStyleStrategy() const
QTD_EXTERN QTD_EXPORT int qtd_QTextCharFormat_fontStyleStrategy_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->fontStyleStrategy();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCharFormat::fontUnderline() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextCharFormat_fontUnderline_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->fontUnderline();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCharFormat::fontWeight() const
QTD_EXTERN QTD_EXPORT int qtd_QTextCharFormat_fontWeight_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->fontWeight();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCharFormat::fontWordSpacing() const
QTD_EXTERN QTD_EXPORT double qtd_QTextCharFormat_fontWordSpacing_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->fontWordSpacing();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCharFormat::isAnchor() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextCharFormat_isAnchor_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isAnchor();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCharFormat::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextCharFormat_isValid_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCharFormat::setAnchor(bool anchor)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setAnchor_bool
(void* __this_nativeId,
 bool anchor0)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setAnchor((bool )anchor0);

}

// QTextCharFormat::setAnchorHref(const QString & value)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setAnchorHref_string
(void* __this_nativeId,
 DArray value0)
{
    QString __qt_value0 = QString::fromUtf8((const char *)value0.ptr, value0.length);
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setAnchorHref((const QString& )__qt_value0);

}

// QTextCharFormat::setAnchorNames(const QStringList & names)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setAnchorNames_QList
(void* __this_nativeId,
 void* names0)
{
QStringList __qt_names0 = (*(QStringList *)names0);
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setAnchorNames((const QStringList& )__qt_names0);

}

// QTextCharFormat::setFont(const QFont & font)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setFont_QFont
(void* __this_nativeId,
 void* font0)
{
    const QFont&  __qt_font0 = (const QFont& ) *(QFont *)font0;
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setFont((const QFont& )__qt_font0);

}

// QTextCharFormat::setFontCapitalization(QFont::Capitalization capitalization)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setFontCapitalization_Capitalization
(void* __this_nativeId,
 int capitalization0)
{
    QFont::Capitalization __qt_capitalization0 = (QFont::Capitalization) capitalization0;
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setFontCapitalization((QFont::Capitalization )__qt_capitalization0);

}

// QTextCharFormat::setFontFamily(const QString & family)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setFontFamily_string
(void* __this_nativeId,
 DArray family0)
{
    QString __qt_family0 = QString::fromUtf8((const char *)family0.ptr, family0.length);
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setFontFamily((const QString& )__qt_family0);

}

// QTextCharFormat::setFontFixedPitch(bool fixedPitch)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setFontFixedPitch_bool
(void* __this_nativeId,
 bool fixedPitch0)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setFontFixedPitch((bool )fixedPitch0);

}

// QTextCharFormat::setFontItalic(bool italic)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setFontItalic_bool
(void* __this_nativeId,
 bool italic0)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setFontItalic((bool )italic0);

}

// QTextCharFormat::setFontKerning(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setFontKerning_bool
(void* __this_nativeId,
 bool enable0)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setFontKerning((bool )enable0);

}

// QTextCharFormat::setFontLetterSpacing(double spacing)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setFontLetterSpacing_double
(void* __this_nativeId,
 double spacing0)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setFontLetterSpacing((double )spacing0);

}

// QTextCharFormat::setFontOverline(bool overline)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setFontOverline_bool
(void* __this_nativeId,
 bool overline0)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setFontOverline((bool )overline0);

}

// QTextCharFormat::setFontPointSize(double size)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setFontPointSize_double
(void* __this_nativeId,
 double size0)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setFontPointSize((double )size0);

}

// QTextCharFormat::setFontStrikeOut(bool strikeOut)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setFontStrikeOut_bool
(void* __this_nativeId,
 bool strikeOut0)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setFontStrikeOut((bool )strikeOut0);

}

// QTextCharFormat::setFontStyleHint(QFont::StyleHint hint, QFont::StyleStrategy strategy)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setFontStyleHint_StyleHint_StyleStrategy
(void* __this_nativeId,
 int hint0,
 int strategy1)
{
    QFont::StyleHint __qt_hint0 = (QFont::StyleHint) hint0;
    QFont::StyleStrategy __qt_strategy1 = (QFont::StyleStrategy) strategy1;
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setFontStyleHint((QFont::StyleHint )__qt_hint0, (QFont::StyleStrategy )__qt_strategy1);

}

// QTextCharFormat::setFontStyleStrategy(QFont::StyleStrategy strategy)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setFontStyleStrategy_StyleStrategy
(void* __this_nativeId,
 int strategy0)
{
    QFont::StyleStrategy __qt_strategy0 = (QFont::StyleStrategy) strategy0;
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setFontStyleStrategy((QFont::StyleStrategy )__qt_strategy0);

}

// QTextCharFormat::setFontUnderline(bool underline)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setFontUnderline_bool
(void* __this_nativeId,
 bool underline0)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setFontUnderline((bool )underline0);

}

// QTextCharFormat::setFontWeight(int weight)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setFontWeight_int
(void* __this_nativeId,
 int weight0)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setFontWeight((int )weight0);

}

// QTextCharFormat::setFontWordSpacing(double spacing)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setFontWordSpacing_double
(void* __this_nativeId,
 double spacing0)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setFontWordSpacing((double )spacing0);

}

// QTextCharFormat::setTableCellColumnSpan(int tableCellColumnSpan)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setTableCellColumnSpan_int
(void* __this_nativeId,
 int tableCellColumnSpan0)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setTableCellColumnSpan((int )tableCellColumnSpan0);

}

// QTextCharFormat::setTableCellRowSpan(int tableCellRowSpan)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setTableCellRowSpan_int
(void* __this_nativeId,
 int tableCellRowSpan0)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setTableCellRowSpan((int )tableCellRowSpan0);

}

// QTextCharFormat::setTextOutline(const QPen & pen)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setTextOutline_QPen
(void* __this_nativeId,
 void* pen0)
{
    const QPen&  __qt_pen0 = (const QPen& ) *(QPen *)pen0;
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setTextOutline((const QPen& )__qt_pen0);

}

// QTextCharFormat::setToolTip(const QString & tip)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setToolTip_string
(void* __this_nativeId,
 DArray tip0)
{
    QString __qt_tip0 = QString::fromUtf8((const char *)tip0.ptr, tip0.length);
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setToolTip((const QString& )__qt_tip0);

}

// QTextCharFormat::setUnderlineColor(const QColor & color)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setUnderlineColor_QColor
(void* __this_nativeId,
 void* color0)
{
    const QColor&  __qt_color0 = (const QColor& ) *(QColor *)color0;
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setUnderlineColor((const QColor& )__qt_color0);

}

// QTextCharFormat::setUnderlineStyle(QTextCharFormat::UnderlineStyle style)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setUnderlineStyle_UnderlineStyle
(void* __this_nativeId,
 int style0)
{
    QTextCharFormat::UnderlineStyle __qt_style0 = (QTextCharFormat::UnderlineStyle) style0;
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setUnderlineStyle((QTextCharFormat::UnderlineStyle )__qt_style0);

}

// QTextCharFormat::setVerticalAlignment(QTextCharFormat::VerticalAlignment alignment)
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_setVerticalAlignment_VerticalAlignment
(void* __this_nativeId,
 int alignment0)
{
    QTextCharFormat::VerticalAlignment __qt_alignment0 = (QTextCharFormat::VerticalAlignment) alignment0;
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    __qt_this->setVerticalAlignment((QTextCharFormat::VerticalAlignment )__qt_alignment0);

}

// QTextCharFormat::tableCellColumnSpan() const
QTD_EXTERN QTD_EXPORT int qtd_QTextCharFormat_tableCellColumnSpan_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->tableCellColumnSpan();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCharFormat::tableCellRowSpan() const
QTD_EXTERN QTD_EXPORT int qtd_QTextCharFormat_tableCellRowSpan_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->tableCellRowSpan();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCharFormat::textOutline() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextCharFormat_textOutline_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    QPen  __qt_return_value = __qt_this->textOutline();

    void* __d_return_value = (void*) new QPen(__qt_return_value);

    return __d_return_value;
}

// QTextCharFormat::toolTip() const
QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_toolTip_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toolTip();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextCharFormat::underlineColor() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextCharFormat_underlineColor_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    QColor  __qt_return_value = __qt_this->underlineColor();

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QTextCharFormat::underlineStyle() const
QTD_EXTERN QTD_EXPORT int qtd_QTextCharFormat_underlineStyle_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->underlineStyle();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextCharFormat::verticalAlignment() const
QTD_EXTERN QTD_EXPORT int qtd_QTextCharFormat_verticalAlignment_const
(void* __this_nativeId)
{
    QTextCharFormat_QtDShell *__qt_this = (QTextCharFormat_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->verticalAlignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTextCharFormat_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextCharFormat>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextCharFormat_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextCharFormat>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextCharFormat_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextCharFormat>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextCharFormat_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextCharFormat>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextCharFormat_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextCharFormat>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextCharFormat_placed_copy(void* orig, void* place) {
    const QTextCharFormat_QtDShell&  __qt_orig = (const QTextCharFormat_QtDShell& ) *(QTextCharFormat_QtDShell *)orig;
    QTextCharFormat *result = new (place) QTextCharFormat (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextCharFormat_native_copy(void* orig) {
    const QTextCharFormat_QtDShell&  __qt_orig = (const QTextCharFormat_QtDShell& ) *(QTextCharFormat_QtDShell *)orig;
    QTextCharFormat *result = new QTextCharFormat (__qt_orig);
    return result;
}

