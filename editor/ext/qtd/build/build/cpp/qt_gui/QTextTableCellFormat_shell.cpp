#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qfont.h>
#include <qpen.h>
#include <qstringlist.h>
#include <qtextformat.h>
#include <qvariant.h>
#include <qvector.h>

#include "QTextTableCellFormat_shell.h"
#include <iostream>
#include <qtextformat.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextTableCellFormat_delete(void* nativeId)
{
    delete (QTextTableCellFormat_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextTableCellFormat_destroy(void* nativeId)
{
    call_destructor((QTextTableCellFormat_QtDShell*)nativeId);
}

QTextTableCellFormat_QtDShell::QTextTableCellFormat_QtDShell()
    : QTextTableCellFormat()
{
}

QTextTableCellFormat_QtDShell::QTextTableCellFormat_QtDShell(const QTextFormat&  fmt0)
    : QTextTableCellFormat(fmt0)
{
}

QTextTableCellFormat_QtDShell::~QTextTableCellFormat_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QTextTableCellFormat_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QTextTableCellFormat::QTextTableCellFormat()
QTD_EXTERN QTD_EXPORT void* qtd_QTextTableCellFormat_QTextTableCellFormat
()
{
    QTextTableCellFormat_QtDShell *__qt_this = new QTextTableCellFormat_QtDShell();
    return (void *) __qt_this;

}

// QTextTableCellFormat::QTextTableCellFormat(const QTextFormat & fmt)
QTD_EXTERN QTD_EXPORT void* qtd_QTextTableCellFormat_QTextTableCellFormat_QTextFormat
(void* fmt0)
{
    const QTextFormat&  __qt_fmt0 = (const QTextFormat& ) *(QTextFormat *)fmt0;
    QTextTableCellFormat_QtDShell *__qt_this = new QTextTableCellFormat_QtDShell((const QTextFormat& )__qt_fmt0);
    return (void *) __qt_this;

}

// QTextTableCellFormat::bottomPadding() const
QTD_EXTERN QTD_EXPORT double qtd_QTextTableCellFormat_bottomPadding_const
(void* __this_nativeId)
{
    QTextTableCellFormat_QtDShell *__qt_this = (QTextTableCellFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->bottomPadding();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextTableCellFormat::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextTableCellFormat_isValid_const
(void* __this_nativeId)
{
    QTextTableCellFormat_QtDShell *__qt_this = (QTextTableCellFormat_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextTableCellFormat::leftPadding() const
QTD_EXTERN QTD_EXPORT double qtd_QTextTableCellFormat_leftPadding_const
(void* __this_nativeId)
{
    QTextTableCellFormat_QtDShell *__qt_this = (QTextTableCellFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->leftPadding();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextTableCellFormat::rightPadding() const
QTD_EXTERN QTD_EXPORT double qtd_QTextTableCellFormat_rightPadding_const
(void* __this_nativeId)
{
    QTextTableCellFormat_QtDShell *__qt_this = (QTextTableCellFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->rightPadding();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextTableCellFormat::setBottomPadding(double padding)
QTD_EXTERN QTD_EXPORT void qtd_QTextTableCellFormat_setBottomPadding_double
(void* __this_nativeId,
 double padding0)
{
    QTextTableCellFormat_QtDShell *__qt_this = (QTextTableCellFormat_QtDShell *) __this_nativeId;
    __qt_this->setBottomPadding((double )padding0);

}

// QTextTableCellFormat::setLeftPadding(double padding)
QTD_EXTERN QTD_EXPORT void qtd_QTextTableCellFormat_setLeftPadding_double
(void* __this_nativeId,
 double padding0)
{
    QTextTableCellFormat_QtDShell *__qt_this = (QTextTableCellFormat_QtDShell *) __this_nativeId;
    __qt_this->setLeftPadding((double )padding0);

}

// QTextTableCellFormat::setPadding(double padding)
QTD_EXTERN QTD_EXPORT void qtd_QTextTableCellFormat_setPadding_double
(void* __this_nativeId,
 double padding0)
{
    QTextTableCellFormat_QtDShell *__qt_this = (QTextTableCellFormat_QtDShell *) __this_nativeId;
    __qt_this->setPadding((double )padding0);

}

// QTextTableCellFormat::setRightPadding(double padding)
QTD_EXTERN QTD_EXPORT void qtd_QTextTableCellFormat_setRightPadding_double
(void* __this_nativeId,
 double padding0)
{
    QTextTableCellFormat_QtDShell *__qt_this = (QTextTableCellFormat_QtDShell *) __this_nativeId;
    __qt_this->setRightPadding((double )padding0);

}

// QTextTableCellFormat::setTopPadding(double padding)
QTD_EXTERN QTD_EXPORT void qtd_QTextTableCellFormat_setTopPadding_double
(void* __this_nativeId,
 double padding0)
{
    QTextTableCellFormat_QtDShell *__qt_this = (QTextTableCellFormat_QtDShell *) __this_nativeId;
    __qt_this->setTopPadding((double )padding0);

}

// QTextTableCellFormat::topPadding() const
QTD_EXTERN QTD_EXPORT double qtd_QTextTableCellFormat_topPadding_const
(void* __this_nativeId)
{
    QTextTableCellFormat_QtDShell *__qt_this = (QTextTableCellFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->topPadding();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTextTableCellFormat_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextTableCellFormat>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextTableCellFormat_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextTableCellFormat>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextTableCellFormat_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextTableCellFormat>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextTableCellFormat_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextTableCellFormat>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextTableCellFormat_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextTableCellFormat>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextTableCellFormat_placed_copy(void* orig, void* place) {
    const QTextTableCellFormat_QtDShell&  __qt_orig = (const QTextTableCellFormat_QtDShell& ) *(QTextTableCellFormat_QtDShell *)orig;
    QTextTableCellFormat *result = new (place) QTextTableCellFormat (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextTableCellFormat_native_copy(void* orig) {
    const QTextTableCellFormat_QtDShell&  __qt_orig = (const QTextTableCellFormat_QtDShell& ) *(QTextTableCellFormat_QtDShell *)orig;
    QTextTableCellFormat *result = new QTextTableCellFormat (__qt_orig);
    return result;
}

