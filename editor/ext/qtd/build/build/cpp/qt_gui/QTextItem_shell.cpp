#include <QVariant>
#include <qfont.h>

#include "QTextItem_shell.h"
#include <iostream>
#include <qpaintengine.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextItem_delete(void* nativeId)
{
    delete (QTextItem_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextItem_destroy(void* nativeId)
{
    call_destructor((QTextItem_QtDShell*)nativeId);
}

QTextItem_QtDShell::QTextItem_QtDShell()
    : QTextItem()
{
}

QTextItem_QtDShell::~QTextItem_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QTextItem_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QTextItem::()
QTD_EXTERN QTD_EXPORT void* qtd_QTextItem_QTextItem
(void *d_ptr)
{
    QTextItem_QtDShell *__qt_this = new QTextItem_QtDShell();
    return (void *) __qt_this;

}

// QTextItem::ascent() const
QTD_EXTERN QTD_EXPORT double qtd_QTextItem_ascent_const
(void* __this_nativeId)
{
    QTextItem_QtDShell *__qt_this = (QTextItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->ascent();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextItem::descent() const
QTD_EXTERN QTD_EXPORT double qtd_QTextItem_descent_const
(void* __this_nativeId)
{
    QTextItem_QtDShell *__qt_this = (QTextItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->descent();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextItem::font() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextItem_font_const
(void* __this_nativeId)
{
    QTextItem_QtDShell *__qt_this = (QTextItem_QtDShell *) __this_nativeId;
    QFont  __qt_return_value = __qt_this->font();

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QTextItem::renderFlags() const
QTD_EXTERN QTD_EXPORT int qtd_QTextItem_renderFlags_const
(void* __this_nativeId)
{
    QTextItem_QtDShell *__qt_this = (QTextItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->renderFlags();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextItem::text() const
QTD_EXTERN QTD_EXPORT void qtd_QTextItem_text_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextItem_QtDShell *__qt_this = (QTextItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextItem::width() const
QTD_EXTERN QTD_EXPORT double qtd_QTextItem_width_const
(void* __this_nativeId)
{
    QTextItem_QtDShell *__qt_this = (QTextItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->width();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


