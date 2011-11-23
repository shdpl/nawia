#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qfont.h>
#include <qpen.h>
#include <qstringlist.h>
#include <qtextformat.h>
#include <qvariant.h>
#include <qvector.h>

#include "QTextImageFormat_shell.h"
#include <iostream>
#include <qtextformat.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextImageFormat_delete(void* nativeId)
{
    delete (QTextImageFormat_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextImageFormat_destroy(void* nativeId)
{
    call_destructor((QTextImageFormat_QtDShell*)nativeId);
}

QTextImageFormat_QtDShell::QTextImageFormat_QtDShell()
    : QTextImageFormat()
{
}

QTextImageFormat_QtDShell::QTextImageFormat_QtDShell(const QTextFormat&  format0)
    : QTextImageFormat(format0)
{
}

QTextImageFormat_QtDShell::~QTextImageFormat_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QTextImageFormat_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QTextImageFormat::QTextImageFormat()
QTD_EXTERN QTD_EXPORT void* qtd_QTextImageFormat_QTextImageFormat
()
{
    QTextImageFormat_QtDShell *__qt_this = new QTextImageFormat_QtDShell();
    return (void *) __qt_this;

}

// QTextImageFormat::QTextImageFormat(const QTextFormat & format)
QTD_EXTERN QTD_EXPORT void* qtd_QTextImageFormat_QTextImageFormat_QTextFormat
(void* format0)
{
    const QTextFormat&  __qt_format0 = (const QTextFormat& ) *(QTextFormat *)format0;
    QTextImageFormat_QtDShell *__qt_this = new QTextImageFormat_QtDShell((const QTextFormat& )__qt_format0);
    return (void *) __qt_this;

}

// QTextImageFormat::height() const
QTD_EXTERN QTD_EXPORT double qtd_QTextImageFormat_height_const
(void* __this_nativeId)
{
    QTextImageFormat_QtDShell *__qt_this = (QTextImageFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->height();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextImageFormat::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextImageFormat_isValid_const
(void* __this_nativeId)
{
    QTextImageFormat_QtDShell *__qt_this = (QTextImageFormat_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextImageFormat::name() const
QTD_EXTERN QTD_EXPORT void qtd_QTextImageFormat_name_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextImageFormat_QtDShell *__qt_this = (QTextImageFormat_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->name();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextImageFormat::setHeight(double height)
QTD_EXTERN QTD_EXPORT void qtd_QTextImageFormat_setHeight_double
(void* __this_nativeId,
 double height0)
{
    QTextImageFormat_QtDShell *__qt_this = (QTextImageFormat_QtDShell *) __this_nativeId;
    __qt_this->setHeight((double )height0);

}

// QTextImageFormat::setName(const QString & name)
QTD_EXTERN QTD_EXPORT void qtd_QTextImageFormat_setName_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QTextImageFormat_QtDShell *__qt_this = (QTextImageFormat_QtDShell *) __this_nativeId;
    __qt_this->setName((const QString& )__qt_name0);

}

// QTextImageFormat::setWidth(double width)
QTD_EXTERN QTD_EXPORT void qtd_QTextImageFormat_setWidth_double
(void* __this_nativeId,
 double width0)
{
    QTextImageFormat_QtDShell *__qt_this = (QTextImageFormat_QtDShell *) __this_nativeId;
    __qt_this->setWidth((double )width0);

}

// QTextImageFormat::width() const
QTD_EXTERN QTD_EXPORT double qtd_QTextImageFormat_width_const
(void* __this_nativeId)
{
    QTextImageFormat_QtDShell *__qt_this = (QTextImageFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->width();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTextImageFormat_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextImageFormat>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextImageFormat_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextImageFormat>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextImageFormat_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextImageFormat>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextImageFormat_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextImageFormat>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextImageFormat_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextImageFormat>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextImageFormat_placed_copy(void* orig, void* place) {
    const QTextImageFormat_QtDShell&  __qt_orig = (const QTextImageFormat_QtDShell& ) *(QTextImageFormat_QtDShell *)orig;
    QTextImageFormat *result = new (place) QTextImageFormat (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextImageFormat_native_copy(void* orig) {
    const QTextImageFormat_QtDShell&  __qt_orig = (const QTextImageFormat_QtDShell& ) *(QTextImageFormat_QtDShell *)orig;
    QTextImageFormat *result = new QTextImageFormat (__qt_orig);
    return result;
}

