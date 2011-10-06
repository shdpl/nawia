#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qimage.h>
#include <qmatrix.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpolygon.h>
#include <qregion.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qstylepainter.h>
#include <qtextoption.h>
#include <qtransform.h>
#include <qwidget.h>

#include "QStylePainter_shell.h"
#include <iostream>
#include <qstylepainter.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStylePainter_delete(void* nativeId)
{
    delete (QStylePainter_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStylePainter_destroy(void* nativeId)
{
    call_destructor((QStylePainter_QtDShell*)nativeId);
}

QStylePainter_QtDShell::QStylePainter_QtDShell()
    : QStylePainter()
{
}

QStylePainter_QtDShell::QStylePainter_QtDShell(QPaintDevice*  pd0, QWidget*  w1)
    : QStylePainter(pd0, w1)
{
}

QStylePainter_QtDShell::QStylePainter_QtDShell(QWidget*  w0)
    : QStylePainter(w0)
{
}

QStylePainter_QtDShell::~QStylePainter_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStylePainter_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStylePainter::QStylePainter()
QTD_EXTERN QTD_EXPORT void* qtd_QStylePainter_QStylePainter
(void *d_ptr)
{
    QStylePainter_QtDShell *__qt_this = new QStylePainter_QtDShell();
    return (void *) __qt_this;

}

// QStylePainter::QStylePainter(QPaintDevice * pd, QWidget * w)
QTD_EXTERN QTD_EXPORT void* qtd_QStylePainter_QStylePainter_QPaintDevice_QWidget
(void *d_ptr,
 void* pd0,
 void* w1)
{
    QPaintDevice*  __qt_pd0 = (QPaintDevice* ) pd0;
    QWidget*  __qt_w1 = (QWidget* ) w1;
    QStylePainter_QtDShell *__qt_this = new QStylePainter_QtDShell((QPaintDevice* )__qt_pd0, (QWidget* )__qt_w1);
    return (void *) __qt_this;

}

// QStylePainter::QStylePainter(QWidget * w)
QTD_EXTERN QTD_EXPORT void* qtd_QStylePainter_QStylePainter_QWidget
(void *d_ptr,
 void* w0)
{
    QWidget*  __qt_w0 = (QWidget* ) w0;
    QStylePainter_QtDShell *__qt_this = new QStylePainter_QtDShell((QWidget* )__qt_w0);
    return (void *) __qt_this;

}

// QStylePainter::begin(QPaintDevice * pd, QWidget * w)
QTD_EXTERN QTD_EXPORT bool qtd_QStylePainter_begin_QPaintDevice_QWidget
(void* __this_nativeId,
 void* pd0,
 void* w1)
{
    QPaintDevice*  __qt_pd0 = (QPaintDevice* ) pd0;
    QWidget*  __qt_w1 = (QWidget* ) w1;
    QStylePainter_QtDShell *__qt_this = (QStylePainter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->begin((QPaintDevice* )__qt_pd0, (QWidget* )__qt_w1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStylePainter::begin(QWidget * w)
QTD_EXTERN QTD_EXPORT bool qtd_QStylePainter_begin_QWidget
(void* __this_nativeId,
 void* w0)
{
    QWidget*  __qt_w0 = (QWidget* ) w0;
    QStylePainter_QtDShell *__qt_this = (QStylePainter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->begin((QWidget* )__qt_w0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStylePainter::drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex & opt)
QTD_EXTERN QTD_EXPORT void qtd_QStylePainter_drawComplexControl_ComplexControl_QStyleOptionComplex
(void* __this_nativeId,
 int cc0,
 void* opt1)
{
    QStyle::ComplexControl __qt_cc0 = (QStyle::ComplexControl) cc0;
    const QStyleOptionComplex&  __qt_opt1 = (const QStyleOptionComplex& ) *(QStyleOptionComplex *)opt1;
    QStylePainter_QtDShell *__qt_this = (QStylePainter_QtDShell *) __this_nativeId;
    __qt_this->drawComplexControl((QStyle::ComplexControl )__qt_cc0, (const QStyleOptionComplex& )__qt_opt1);

}

// QStylePainter::drawControl(QStyle::ControlElement ce, const QStyleOption & opt)
QTD_EXTERN QTD_EXPORT void qtd_QStylePainter_drawControl_ControlElement_QStyleOption
(void* __this_nativeId,
 int ce0,
 void* opt1)
{
    QStyle::ControlElement __qt_ce0 = (QStyle::ControlElement) ce0;
    const QStyleOption&  __qt_opt1 = (const QStyleOption& ) *(QStyleOption *)opt1;
    QStylePainter_QtDShell *__qt_this = (QStylePainter_QtDShell *) __this_nativeId;
    __qt_this->drawControl((QStyle::ControlElement )__qt_ce0, (const QStyleOption& )__qt_opt1);

}

// QStylePainter::drawItemPixmap(const QRect & r, int flags, const QPixmap & pixmap)
QTD_EXTERN QTD_EXPORT void qtd_QStylePainter_drawItemPixmap_QRect_int_QPixmap
(void* __this_nativeId,
 QRect r0,
 int flags1,
 void* pixmap2)
{
    const QPixmap&  __qt_pixmap2 = (const QPixmap& ) *(QPixmap *)pixmap2;
    QStylePainter_QtDShell *__qt_this = (QStylePainter_QtDShell *) __this_nativeId;
    __qt_this->drawItemPixmap((const QRect& )r0, (int )flags1, (const QPixmap& )__qt_pixmap2);

}

// QStylePainter::drawItemText(const QRect & r, int flags, const QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole textRole)
QTD_EXTERN QTD_EXPORT void qtd_QStylePainter_drawItemText_QRect_int_QPalette_bool_string_ColorRole
(void* __this_nativeId,
 QRect r0,
 int flags1,
 void* pal2,
 bool enabled3,
 DArray text4,
 int textRole5)
{
    const QPalette&  __qt_pal2 = (const QPalette& ) *(QPalette *)pal2;
    QString __qt_text4 = QString::fromUtf8((const char *)text4.ptr, text4.length);
    QPalette::ColorRole __qt_textRole5 = (QPalette::ColorRole) textRole5;
    QStylePainter_QtDShell *__qt_this = (QStylePainter_QtDShell *) __this_nativeId;
    __qt_this->drawItemText((const QRect& )r0, (int )flags1, (const QPalette& )__qt_pal2, (bool )enabled3, (const QString& )__qt_text4, (QPalette::ColorRole )__qt_textRole5);

}

// QStylePainter::drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption & opt)
QTD_EXTERN QTD_EXPORT void qtd_QStylePainter_drawPrimitive_PrimitiveElement_QStyleOption
(void* __this_nativeId,
 int pe0,
 void* opt1)
{
    QStyle::PrimitiveElement __qt_pe0 = (QStyle::PrimitiveElement) pe0;
    const QStyleOption&  __qt_opt1 = (const QStyleOption& ) *(QStyleOption *)opt1;
    QStylePainter_QtDShell *__qt_this = (QStylePainter_QtDShell *) __this_nativeId;
    __qt_this->drawPrimitive((QStyle::PrimitiveElement )__qt_pe0, (const QStyleOption& )__qt_opt1);

}

// QStylePainter::style() const
QTD_EXTERN QTD_EXPORT void* qtd_QStylePainter_style_const
(void* __this_nativeId)
{
    QStylePainter_QtDShell *__qt_this = (QStylePainter_QtDShell *) __this_nativeId;
    QStyle*  __qt_return_value = __qt_this->style();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


