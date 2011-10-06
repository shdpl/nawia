#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qdatastream.h>
#include <qpalette.h>
#include <qvariant.h>

#include <iostream>
#include <qpalette.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QPalette_delete(void* nativeId)
{
    delete (QPalette*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QPalette_destroy(void* nativeId)
{
    call_destructor((QPalette*)nativeId);
}

// ---externC---
// QPalette::QPalette()
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_QPalette
()
{
    QPalette *__qt_this = new QPalette();
    return (void *) __qt_this;

}

// QPalette::QPalette(Qt::GlobalColor button)
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_QPalette_GlobalColor
(int button0)
{
    Qt::GlobalColor __qt_button0 = (Qt::GlobalColor) button0;
    QPalette *__qt_this = new QPalette((Qt::GlobalColor )__qt_button0);
    return (void *) __qt_this;

}

// QPalette::QPalette(const QBrush & windowText, const QBrush & button, const QBrush & light, const QBrush & dark, const QBrush & mid, const QBrush & text, const QBrush & bright_text, const QBrush & base, const QBrush & window)
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_QPalette_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush
(void* windowText0,
 void* button1,
 void* light2,
 void* dark3,
 void* mid4,
 void* text5,
 void* bright_text6,
 void* base7,
 void* window8)
{
    const QBrush&  __qt_windowText0 = (const QBrush& ) *(QBrush *)windowText0;
    const QBrush&  __qt_button1 = (const QBrush& ) *(QBrush *)button1;
    const QBrush&  __qt_light2 = (const QBrush& ) *(QBrush *)light2;
    const QBrush&  __qt_dark3 = (const QBrush& ) *(QBrush *)dark3;
    const QBrush&  __qt_mid4 = (const QBrush& ) *(QBrush *)mid4;
    const QBrush&  __qt_text5 = (const QBrush& ) *(QBrush *)text5;
    const QBrush&  __qt_bright_text6 = (const QBrush& ) *(QBrush *)bright_text6;
    const QBrush&  __qt_base7 = (const QBrush& ) *(QBrush *)base7;
    const QBrush&  __qt_window8 = (const QBrush& ) *(QBrush *)window8;
    QPalette *__qt_this = new QPalette((const QBrush& )__qt_windowText0, (const QBrush& )__qt_button1, (const QBrush& )__qt_light2, (const QBrush& )__qt_dark3, (const QBrush& )__qt_mid4, (const QBrush& )__qt_text5, (const QBrush& )__qt_bright_text6, (const QBrush& )__qt_base7, (const QBrush& )__qt_window8);
    return (void *) __qt_this;

}

// QPalette::QPalette(const QColor & button)
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_QPalette_QColor
(void* button0)
{
    const QColor&  __qt_button0 = (const QColor& ) *(QColor *)button0;
    QPalette *__qt_this = new QPalette((const QColor& )__qt_button0);
    return (void *) __qt_this;

}

// QPalette::QPalette(const QColor & button, const QColor & window)
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_QPalette_QColor_QColor
(void* button0,
 void* window1)
{
    const QColor&  __qt_button0 = (const QColor& ) *(QColor *)button0;
    const QColor&  __qt_window1 = (const QColor& ) *(QColor *)window1;
    QPalette *__qt_this = new QPalette((const QColor& )__qt_button0, (const QColor& )__qt_window1);
    return (void *) __qt_this;

}

// QPalette::QPalette(const QPalette & palette)
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_QPalette_QPalette
(void* palette0)
{
    const QPalette&  __qt_palette0 = (const QPalette& ) *(QPalette *)palette0;
    QPalette *__qt_this = new QPalette((const QPalette& )__qt_palette0);
    return (void *) __qt_this;

}

// QPalette::alternateBase() const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_alternateBase_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->alternateBase();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPalette::base() const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_base_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->base();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPalette::brightText() const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_brightText_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->brightText();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPalette::brush(QPalette::ColorGroup cg, QPalette::ColorRole cr) const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_brush_ColorGroup_ColorRole_const
(void* __this_nativeId,
 int cg0,
 int cr1)
{
    QPalette::ColorGroup __qt_cg0 = (QPalette::ColorGroup) cg0;
    QPalette::ColorRole __qt_cr1 = (QPalette::ColorRole) cr1;
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->brush((QPalette::ColorGroup )__qt_cg0, (QPalette::ColorRole )__qt_cr1);

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPalette::brush(QPalette::ColorRole cr) const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_brush_ColorRole_const
(void* __this_nativeId,
 int cr0)
{
    QPalette::ColorRole __qt_cr0 = (QPalette::ColorRole) cr0;
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->brush((QPalette::ColorRole )__qt_cr0);

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPalette::button() const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_button_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->button();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPalette::buttonText() const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_buttonText_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->buttonText();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPalette::cacheKey() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QPalette_cacheKey_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->cacheKey();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPalette::color(QPalette::ColorGroup cg, QPalette::ColorRole cr) const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_color_ColorGroup_ColorRole_const
(void* __this_nativeId,
 int cg0,
 int cr1)
{
    QPalette::ColorGroup __qt_cg0 = (QPalette::ColorGroup) cg0;
    QPalette::ColorRole __qt_cr1 = (QPalette::ColorRole) cr1;
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QColor&  __qt_return_value = __qt_this->color((QPalette::ColorGroup )__qt_cg0, (QPalette::ColorRole )__qt_cr1);

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QPalette::color(QPalette::ColorRole cr) const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_color_ColorRole_const
(void* __this_nativeId,
 int cr0)
{
    QPalette::ColorRole __qt_cr0 = (QPalette::ColorRole) cr0;
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QColor&  __qt_return_value = __qt_this->color((QPalette::ColorRole )__qt_cr0);

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QPalette::currentColorGroup() const
QTD_EXTERN QTD_EXPORT int qtd_QPalette_currentColorGroup_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentColorGroup();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPalette::dark() const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_dark_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->dark();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPalette::highlight() const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_highlight_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->highlight();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPalette::highlightedText() const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_highlightedText_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->highlightedText();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPalette::isBrushSet(QPalette::ColorGroup cg, QPalette::ColorRole cr) const
QTD_EXTERN QTD_EXPORT bool qtd_QPalette_isBrushSet_ColorGroup_ColorRole_const
(void* __this_nativeId,
 int cg0,
 int cr1)
{
    QPalette::ColorGroup __qt_cg0 = (QPalette::ColorGroup) cg0;
    QPalette::ColorRole __qt_cr1 = (QPalette::ColorRole) cr1;
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isBrushSet((QPalette::ColorGroup )__qt_cg0, (QPalette::ColorRole )__qt_cr1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPalette::isCopyOf(const QPalette & p) const
QTD_EXTERN QTD_EXPORT bool qtd_QPalette_isCopyOf_QPalette_const
(void* __this_nativeId,
 void* p0)
{
    const QPalette&  __qt_p0 = (const QPalette& ) *(QPalette *)p0;
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isCopyOf((const QPalette& )__qt_p0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPalette::isEqual(QPalette::ColorGroup cr1, QPalette::ColorGroup cr2) const
QTD_EXTERN QTD_EXPORT bool qtd_QPalette_isEqual_ColorGroup_ColorGroup_const
(void* __this_nativeId,
 int cr10,
 int cr21)
{
    QPalette::ColorGroup __qt_cr10 = (QPalette::ColorGroup) cr10;
    QPalette::ColorGroup __qt_cr21 = (QPalette::ColorGroup) cr21;
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEqual((QPalette::ColorGroup )__qt_cr10, (QPalette::ColorGroup )__qt_cr21);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPalette::light() const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_light_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->light();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPalette::link() const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_link_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->link();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPalette::linkVisited() const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_linkVisited_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->linkVisited();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPalette::mid() const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_mid_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->mid();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPalette::midlight() const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_midlight_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->midlight();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPalette::operator QVariant() const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_operator_cast_QVariant_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->operator QVariant();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QPalette::operator<<(QDataStream & ds)
QTD_EXTERN QTD_EXPORT void qtd_QPalette_writeTo_QDataStream
(void* __this_nativeId,
 void* ds0)
{
    QDataStream&  __qt_ds0 = (QDataStream& ) * (QDataStream *) ds0;
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_ds0, *__qt_this);

}

// QPalette::operator==(const QPalette & p) const
QTD_EXTERN QTD_EXPORT bool qtd_QPalette_operator_equal_QPalette_const
(void* __this_nativeId,
 void* p0)
{
    const QPalette&  __qt_p0 = (const QPalette& ) *(QPalette *)p0;
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QPalette& )__qt_p0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPalette::operator>>(QDataStream & ds)
QTD_EXTERN QTD_EXPORT void qtd_QPalette_readFrom_QDataStream
(void* __this_nativeId,
 void* ds0)
{
    QDataStream&  __qt_ds0 = (QDataStream& ) * (QDataStream *) ds0;
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_ds0, *__qt_this);

}

// QPalette::resolve() const
QTD_EXTERN QTD_EXPORT uint qtd_QPalette_resolve_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    uint  __qt_return_value = __qt_this->resolve();

    uint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPalette::resolve(const QPalette & arg__1) const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_resolve_QPalette_const
(void* __this_nativeId,
 void* arg__1)
{
    const QPalette&  __qt_arg__1 = (const QPalette& ) *(QPalette *)arg__1;
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    QPalette  __qt_return_value = __qt_this->resolve((const QPalette& )__qt_arg__1);

    void* __d_return_value = (void*) new QPalette(__qt_return_value);

    return __d_return_value;
}

// QPalette::resolve(uint mask)
QTD_EXTERN QTD_EXPORT void qtd_QPalette_resolve_uint
(void* __this_nativeId,
 uint mask0)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    __qt_this->resolve((uint )mask0);

}

// QPalette::setBrush(QPalette::ColorGroup cg, QPalette::ColorRole cr, const QBrush & brush)
QTD_EXTERN QTD_EXPORT void qtd_QPalette_setBrush_ColorGroup_ColorRole_QBrush
(void* __this_nativeId,
 int cg0,
 int cr1,
 void* brush2)
{
    QPalette::ColorGroup __qt_cg0 = (QPalette::ColorGroup) cg0;
    QPalette::ColorRole __qt_cr1 = (QPalette::ColorRole) cr1;
    const QBrush&  __qt_brush2 = (const QBrush& ) *(QBrush *)brush2;
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    __qt_this->setBrush((QPalette::ColorGroup )__qt_cg0, (QPalette::ColorRole )__qt_cr1, (const QBrush& )__qt_brush2);

}

// QPalette::setBrush(QPalette::ColorRole cr, const QBrush & brush)
QTD_EXTERN QTD_EXPORT void qtd_QPalette_setBrush_ColorRole_QBrush
(void* __this_nativeId,
 int cr0,
 void* brush1)
{
    QPalette::ColorRole __qt_cr0 = (QPalette::ColorRole) cr0;
    const QBrush&  __qt_brush1 = (const QBrush& ) *(QBrush *)brush1;
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    __qt_this->setBrush((QPalette::ColorRole )__qt_cr0, (const QBrush& )__qt_brush1);

}

// QPalette::setColor(QPalette::ColorGroup cg, QPalette::ColorRole cr, const QColor & color)
QTD_EXTERN QTD_EXPORT void qtd_QPalette_setColor_ColorGroup_ColorRole_QColor
(void* __this_nativeId,
 int cg0,
 int cr1,
 void* color2)
{
    QPalette::ColorGroup __qt_cg0 = (QPalette::ColorGroup) cg0;
    QPalette::ColorRole __qt_cr1 = (QPalette::ColorRole) cr1;
    const QColor&  __qt_color2 = (const QColor& ) *(QColor *)color2;
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    __qt_this->setColor((QPalette::ColorGroup )__qt_cg0, (QPalette::ColorRole )__qt_cr1, (const QColor& )__qt_color2);

}

// QPalette::setColor(QPalette::ColorRole cr, const QColor & color)
QTD_EXTERN QTD_EXPORT void qtd_QPalette_setColor_ColorRole_QColor
(void* __this_nativeId,
 int cr0,
 void* color1)
{
    QPalette::ColorRole __qt_cr0 = (QPalette::ColorRole) cr0;
    const QColor&  __qt_color1 = (const QColor& ) *(QColor *)color1;
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    __qt_this->setColor((QPalette::ColorRole )__qt_cr0, (const QColor& )__qt_color1);

}

// QPalette::setColorGroup(QPalette::ColorGroup cr, const QBrush & windowText, const QBrush & button, const QBrush & light, const QBrush & dark, const QBrush & mid, const QBrush & text, const QBrush & bright_text, const QBrush & base, const QBrush & window)
QTD_EXTERN QTD_EXPORT void qtd_QPalette_setColorGroup_ColorGroup_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush
(void* __this_nativeId,
 int cr0,
 void* windowText1,
 void* button2,
 void* light3,
 void* dark4,
 void* mid5,
 void* text6,
 void* bright_text7,
 void* base8,
 void* window9)
{
    QPalette::ColorGroup __qt_cr0 = (QPalette::ColorGroup) cr0;
    const QBrush&  __qt_windowText1 = (const QBrush& ) *(QBrush *)windowText1;
    const QBrush&  __qt_button2 = (const QBrush& ) *(QBrush *)button2;
    const QBrush&  __qt_light3 = (const QBrush& ) *(QBrush *)light3;
    const QBrush&  __qt_dark4 = (const QBrush& ) *(QBrush *)dark4;
    const QBrush&  __qt_mid5 = (const QBrush& ) *(QBrush *)mid5;
    const QBrush&  __qt_text6 = (const QBrush& ) *(QBrush *)text6;
    const QBrush&  __qt_bright_text7 = (const QBrush& ) *(QBrush *)bright_text7;
    const QBrush&  __qt_base8 = (const QBrush& ) *(QBrush *)base8;
    const QBrush&  __qt_window9 = (const QBrush& ) *(QBrush *)window9;
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    __qt_this->setColorGroup((QPalette::ColorGroup )__qt_cr0, (const QBrush& )__qt_windowText1, (const QBrush& )__qt_button2, (const QBrush& )__qt_light3, (const QBrush& )__qt_dark4, (const QBrush& )__qt_mid5, (const QBrush& )__qt_text6, (const QBrush& )__qt_bright_text7, (const QBrush& )__qt_base8, (const QBrush& )__qt_window9);

}

// QPalette::setCurrentColorGroup(QPalette::ColorGroup cg)
QTD_EXTERN QTD_EXPORT void qtd_QPalette_setCurrentColorGroup_ColorGroup
(void* __this_nativeId,
 int cg0)
{
    QPalette::ColorGroup __qt_cg0 = (QPalette::ColorGroup) cg0;
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    __qt_this->setCurrentColorGroup((QPalette::ColorGroup )__qt_cg0);

}

// QPalette::shadow() const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_shadow_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->shadow();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPalette::text() const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_text_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->text();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPalette::toolTipBase() const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_toolTipBase_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->toolTipBase();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPalette::toolTipText() const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_toolTipText_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->toolTipText();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPalette::window() const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_window_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->window();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QPalette::windowText() const
QTD_EXTERN QTD_EXPORT void* qtd_QPalette_windowText_const
(void* __this_nativeId)
{
    QPalette *__qt_this = (QPalette *) __this_nativeId;
    const QBrush&  __qt_return_value = __qt_this->windowText();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QPalette_QTypeInfo_isComplex() { return (bool) QTypeInfo<QPalette>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QPalette_QTypeInfo_isStatic() { return (bool) QTypeInfo<QPalette>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QPalette_QTypeInfo_isLarge() { return (bool) QTypeInfo<QPalette>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QPalette_QTypeInfo_isPointer() { return (bool) QTypeInfo<QPalette>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QPalette_QTypeInfo_isDummy() { return (bool) QTypeInfo<QPalette>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QPalette_placed_copy(void* orig, void* place) {
    const QPalette&  __qt_orig = (const QPalette& ) *(QPalette *)orig;
    QPalette *result = new (place) QPalette (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QPalette_native_copy(void* orig) {
    const QPalette&  __qt_orig = (const QPalette& ) *(QPalette *)orig;
    QPalette *result = new QPalette (__qt_orig);
    return result;
}

