#include <QVariant>
#include <qfont.h>
#include <qpalette.h>
#include <qwidget.h>

#include <iostream>
#include <qtooltip.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

// ---externC---
// QToolTip::font()
QTD_EXTERN QTD_EXPORT void* qtd_QToolTip_font
()
{
    QFont  __qt_return_value = QToolTip::font();

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QToolTip::hideText()
QTD_EXTERN QTD_EXPORT void qtd_QToolTip_hideText
()
{
    QToolTip::hideText();

}

// QToolTip::isVisible()
QTD_EXTERN QTD_EXPORT bool qtd_QToolTip_isVisible
()
{
    bool  __qt_return_value = QToolTip::isVisible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolTip::palette()
QTD_EXTERN QTD_EXPORT void* qtd_QToolTip_palette
()
{
    QPalette  __qt_return_value = QToolTip::palette();

    void* __d_return_value = (void*) new QPalette(__qt_return_value);

    return __d_return_value;
}

// QToolTip::setFont(const QFont & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QToolTip_setFont_QFont
(void* arg__1)
{
    const QFont&  __qt_arg__1 = (const QFont& ) *(QFont *)arg__1;
    QToolTip::setFont((const QFont& )__qt_arg__1);

}

// QToolTip::setPalette(const QPalette & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QToolTip_setPalette_QPalette
(void* arg__1)
{
    const QPalette&  __qt_arg__1 = (const QPalette& ) *(QPalette *)arg__1;
    QToolTip::setPalette((const QPalette& )__qt_arg__1);

}

// QToolTip::showText(const QPoint & pos, const QString & text, QWidget * w)
QTD_EXTERN QTD_EXPORT void qtd_QToolTip_showText_QPoint_string_QWidget
(QPoint pos0,
 DArray text1,
 void* w2)
{
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QWidget*  __qt_w2 = (QWidget* ) w2;
    QToolTip::showText((const QPoint& )pos0, (const QString& )__qt_text1, (QWidget* )__qt_w2);

}

// QToolTip::showText(const QPoint & pos, const QString & text, QWidget * w, const QRect & rect)
QTD_EXTERN QTD_EXPORT void qtd_QToolTip_showText_QPoint_string_QWidget_QRect
(QPoint pos0,
 DArray text1,
 void* w2,
 QRect rect3)
{
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QWidget*  __qt_w2 = (QWidget* ) w2;
    QToolTip::showText((const QPoint& )pos0, (const QString& )__qt_text1, (QWidget* )__qt_w2, (const QRect& )rect3);

}

// QToolTip::text()
QTD_EXTERN QTD_EXPORT void qtd_QToolTip_text
(void* __d_return_value)
{
    QString  __qt_return_value = QToolTip::text();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


