#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpen.h>
#include <qtextformat.h>
#include <qvariant.h>
#include <qvector.h>

#include "QTextListFormat_shell.h"
#include <iostream>
#include <qtextformat.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextListFormat_delete(void* nativeId)
{
    delete (QTextListFormat_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextListFormat_destroy(void* nativeId)
{
    call_destructor((QTextListFormat_QtDShell*)nativeId);
}

QTextListFormat_QtDShell::QTextListFormat_QtDShell()
    : QTextListFormat()
{
}

QTextListFormat_QtDShell::QTextListFormat_QtDShell(const QTextFormat&  fmt0)
    : QTextListFormat(fmt0)
{
}

QTextListFormat_QtDShell::~QTextListFormat_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QTextListFormat_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QTextListFormat::QTextListFormat()
QTD_EXTERN QTD_EXPORT void* qtd_QTextListFormat_QTextListFormat
()
{
    QTextListFormat_QtDShell *__qt_this = new QTextListFormat_QtDShell();
    return (void *) __qt_this;

}

// QTextListFormat::QTextListFormat(const QTextFormat & fmt)
QTD_EXTERN QTD_EXPORT void* qtd_QTextListFormat_QTextListFormat_QTextFormat
(void* fmt0)
{
    const QTextFormat&  __qt_fmt0 = (const QTextFormat& ) *(QTextFormat *)fmt0;
    QTextListFormat_QtDShell *__qt_this = new QTextListFormat_QtDShell((const QTextFormat& )__qt_fmt0);
    return (void *) __qt_this;

}

// QTextListFormat::indent() const
QTD_EXTERN QTD_EXPORT int qtd_QTextListFormat_indent_const
(void* __this_nativeId)
{
    QTextListFormat_QtDShell *__qt_this = (QTextListFormat_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->indent();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextListFormat::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextListFormat_isValid_const
(void* __this_nativeId)
{
    QTextListFormat_QtDShell *__qt_this = (QTextListFormat_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextListFormat::setIndent(int indent)
QTD_EXTERN QTD_EXPORT void qtd_QTextListFormat_setIndent_int
(void* __this_nativeId,
 int indent0)
{
    QTextListFormat_QtDShell *__qt_this = (QTextListFormat_QtDShell *) __this_nativeId;
    __qt_this->setIndent((int )indent0);

}

// QTextListFormat::setStyle(QTextListFormat::Style style)
QTD_EXTERN QTD_EXPORT void qtd_QTextListFormat_setStyle_Style
(void* __this_nativeId,
 int style0)
{
    QTextListFormat::Style __qt_style0 = (QTextListFormat::Style) style0;
    QTextListFormat_QtDShell *__qt_this = (QTextListFormat_QtDShell *) __this_nativeId;
    __qt_this->setStyle((QTextListFormat::Style )__qt_style0);

}

// QTextListFormat::style() const
QTD_EXTERN QTD_EXPORT int qtd_QTextListFormat_style_const
(void* __this_nativeId)
{
    QTextListFormat_QtDShell *__qt_this = (QTextListFormat_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->style();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTextListFormat_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextListFormat>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextListFormat_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextListFormat>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextListFormat_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextListFormat>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextListFormat_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextListFormat>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextListFormat_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextListFormat>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextListFormat_placed_copy(void* orig, void* place) {
    const QTextListFormat_QtDShell&  __qt_orig = (const QTextListFormat_QtDShell& ) *(QTextListFormat_QtDShell *)orig;
    QTextListFormat *result = new (place) QTextListFormat (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextListFormat_native_copy(void* orig) {
    const QTextListFormat_QtDShell&  __qt_orig = (const QTextListFormat_QtDShell& ) *(QTextListFormat_QtDShell *)orig;
    QTextListFormat *result = new QTextListFormat (__qt_orig);
    return result;
}

