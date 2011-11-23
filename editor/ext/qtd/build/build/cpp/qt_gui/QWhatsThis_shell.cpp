#include <QVariant>
#include <qaction.h>
#include <qobject.h>
#include <qwidget.h>

#include <iostream>
#include <qwhatsthis.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

// ---externC---
// QWhatsThis::createAction(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QWhatsThis_createAction_QObject
(void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QAction*  __qt_return_value = QWhatsThis::createAction((QObject* )__qt_parent0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWhatsThis::enterWhatsThisMode()
QTD_EXTERN QTD_EXPORT void qtd_QWhatsThis_enterWhatsThisMode
()
{
    QWhatsThis::enterWhatsThisMode();

}

// QWhatsThis::hideText()
QTD_EXTERN QTD_EXPORT void qtd_QWhatsThis_hideText
()
{
    QWhatsThis::hideText();

}

// QWhatsThis::inWhatsThisMode()
QTD_EXTERN QTD_EXPORT bool qtd_QWhatsThis_inWhatsThisMode
()
{
    bool  __qt_return_value = QWhatsThis::inWhatsThisMode();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWhatsThis::leaveWhatsThisMode()
QTD_EXTERN QTD_EXPORT void qtd_QWhatsThis_leaveWhatsThisMode
()
{
    QWhatsThis::leaveWhatsThisMode();

}

// QWhatsThis::showText(const QPoint & pos, const QString & text, QWidget * w)
QTD_EXTERN QTD_EXPORT void qtd_QWhatsThis_showText_QPoint_string_QWidget
(QPoint pos0,
 DArray text1,
 void* w2)
{
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QWidget*  __qt_w2 = (QWidget* ) w2;
    QWhatsThis::showText((const QPoint& )pos0, (const QString& )__qt_text1, (QWidget* )__qt_w2);

}

// ---externC---end
// Field accessors


