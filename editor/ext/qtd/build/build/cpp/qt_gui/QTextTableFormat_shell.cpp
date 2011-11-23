#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpen.h>
#include <qtextformat.h>
#include <qvariant.h>
#include <qvector.h>

#include "QTextTableFormat_shell.h"
#include <iostream>
#include <qtextformat.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextTableFormat_delete(void* nativeId)
{
    delete (QTextTableFormat_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextTableFormat_destroy(void* nativeId)
{
    call_destructor((QTextTableFormat_QtDShell*)nativeId);
}

QTextTableFormat_QtDShell::QTextTableFormat_QtDShell()
    : QTextTableFormat()
{
}

QTextTableFormat_QtDShell::QTextTableFormat_QtDShell(const QTextFormat&  fmt0)
    : QTextTableFormat(fmt0)
{
}

QTextTableFormat_QtDShell::~QTextTableFormat_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QTextTableFormat_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QTextTableFormat::QTextTableFormat()
QTD_EXTERN QTD_EXPORT void* qtd_QTextTableFormat_QTextTableFormat
()
{
    QTextTableFormat_QtDShell *__qt_this = new QTextTableFormat_QtDShell();
    return (void *) __qt_this;

}

// QTextTableFormat::QTextTableFormat(const QTextFormat & fmt)
QTD_EXTERN QTD_EXPORT void* qtd_QTextTableFormat_QTextTableFormat_QTextFormat
(void* fmt0)
{
    const QTextFormat&  __qt_fmt0 = (const QTextFormat& ) *(QTextFormat *)fmt0;
    QTextTableFormat_QtDShell *__qt_this = new QTextTableFormat_QtDShell((const QTextFormat& )__qt_fmt0);
    return (void *) __qt_this;

}

// QTextTableFormat::alignment() const
QTD_EXTERN QTD_EXPORT int qtd_QTextTableFormat_alignment_const
(void* __this_nativeId)
{
    QTextTableFormat_QtDShell *__qt_this = (QTextTableFormat_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->alignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextTableFormat::cellPadding() const
QTD_EXTERN QTD_EXPORT double qtd_QTextTableFormat_cellPadding_const
(void* __this_nativeId)
{
    QTextTableFormat_QtDShell *__qt_this = (QTextTableFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->cellPadding();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextTableFormat::cellSpacing() const
QTD_EXTERN QTD_EXPORT double qtd_QTextTableFormat_cellSpacing_const
(void* __this_nativeId)
{
    QTextTableFormat_QtDShell *__qt_this = (QTextTableFormat_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->cellSpacing();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextTableFormat::clearColumnWidthConstraints()
QTD_EXTERN QTD_EXPORT void qtd_QTextTableFormat_clearColumnWidthConstraints
(void* __this_nativeId)
{
    QTextTableFormat_QtDShell *__qt_this = (QTextTableFormat_QtDShell *) __this_nativeId;
    __qt_this->clearColumnWidthConstraints();

}

// QTextTableFormat::columnWidthConstraints() const
QTD_EXTERN QTD_EXPORT void qtd_QTextTableFormat_columnWidthConstraints_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextTableFormat_QtDShell *__qt_this = (QTextTableFormat_QtDShell *) __this_nativeId;
    QVector<QTextLength >  __qt_return_value = __qt_this->columnWidthConstraints();


    qtd_allocate_QTextLength_array(__d_return_value, __qt_return_value.size());
    QVector<QTextLength > ::const_iterator __qt_return_value_end_it = __qt_return_value.constEnd();
    int i___qt_return_value = 0;
    for (QVector<QTextLength > ::const_iterator __qt_return_value_it = __qt_return_value.constBegin(); __qt_return_value_it != __qt_return_value_end_it; ++__qt_return_value_it) {
        QTextLength  __qt_tmp = *__qt_return_value_it;
        void* __java_tmp = (void*) new QTextLength(__qt_tmp);
        qtd_assign_QTextLength_array_element(__d_return_value, i___qt_return_value, __java_tmp);
        ++i___qt_return_value;
    }

}

// QTextTableFormat::columns() const
QTD_EXTERN QTD_EXPORT int qtd_QTextTableFormat_columns_const
(void* __this_nativeId)
{
    QTextTableFormat_QtDShell *__qt_this = (QTextTableFormat_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->columns();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextTableFormat::headerRowCount() const
QTD_EXTERN QTD_EXPORT int qtd_QTextTableFormat_headerRowCount_const
(void* __this_nativeId)
{
    QTextTableFormat_QtDShell *__qt_this = (QTextTableFormat_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->headerRowCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextTableFormat::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextTableFormat_isValid_const
(void* __this_nativeId)
{
    QTextTableFormat_QtDShell *__qt_this = (QTextTableFormat_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextTableFormat::setAlignment(QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT void qtd_QTextTableFormat_setAlignment_Alignment
(void* __this_nativeId,
 int alignment0)
{
    QFlags<Qt::AlignmentFlag> __qt_alignment0 = (QFlags<Qt::AlignmentFlag>) alignment0;
    QTextTableFormat_QtDShell *__qt_this = (QTextTableFormat_QtDShell *) __this_nativeId;
    __qt_this->setAlignment((Qt::Alignment )__qt_alignment0);

}

// QTextTableFormat::setCellPadding(double padding)
QTD_EXTERN QTD_EXPORT void qtd_QTextTableFormat_setCellPadding_double
(void* __this_nativeId,
 double padding0)
{
    QTextTableFormat_QtDShell *__qt_this = (QTextTableFormat_QtDShell *) __this_nativeId;
    __qt_this->setCellPadding((double )padding0);

}

// QTextTableFormat::setCellSpacing(double spacing)
QTD_EXTERN QTD_EXPORT void qtd_QTextTableFormat_setCellSpacing_double
(void* __this_nativeId,
 double spacing0)
{
    QTextTableFormat_QtDShell *__qt_this = (QTextTableFormat_QtDShell *) __this_nativeId;
    __qt_this->setCellSpacing((double )spacing0);

}

// QTextTableFormat::setColumnWidthConstraints(const QVector<QTextLength > & constraints)
QTD_EXTERN QTD_EXPORT void qtd_QTextTableFormat_setColumnWidthConstraints_QVector
(void* __this_nativeId,
 DArray* constraints0)
{
    QVector<QTextLength > __qt_constraints0;
    __qt_constraints0.reserve(constraints0->length);
    for (int i=0; i<constraints0->length; ++i) {
        QTextLength* __d_element;
        qtd_get_QTextLength_from_array(constraints0, i, &__d_element);
        QTextLength  __qt_element = (QTextLength ) *(QTextLength *)__d_element;
        __qt_constraints0 << __qt_element;
    }
    QTextTableFormat_QtDShell *__qt_this = (QTextTableFormat_QtDShell *) __this_nativeId;
    __qt_this->setColumnWidthConstraints((const QVector<QTextLength >& )__qt_constraints0);

}

// QTextTableFormat::setColumns(int columns)
QTD_EXTERN QTD_EXPORT void qtd_QTextTableFormat_setColumns_int
(void* __this_nativeId,
 int columns0)
{
    QTextTableFormat_QtDShell *__qt_this = (QTextTableFormat_QtDShell *) __this_nativeId;
    __qt_this->setColumns((int )columns0);

}

// QTextTableFormat::setHeaderRowCount(int count)
QTD_EXTERN QTD_EXPORT void qtd_QTextTableFormat_setHeaderRowCount_int
(void* __this_nativeId,
 int count0)
{
    QTextTableFormat_QtDShell *__qt_this = (QTextTableFormat_QtDShell *) __this_nativeId;
    __qt_this->setHeaderRowCount((int )count0);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTextTableFormat_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTextTableFormat>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextTableFormat_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTextTableFormat>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextTableFormat_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTextTableFormat>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextTableFormat_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTextTableFormat>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTextTableFormat_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTextTableFormat>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTextTableFormat_placed_copy(void* orig, void* place) {
    const QTextTableFormat_QtDShell&  __qt_orig = (const QTextTableFormat_QtDShell& ) *(QTextTableFormat_QtDShell *)orig;
    QTextTableFormat *result = new (place) QTextTableFormat (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTextTableFormat_native_copy(void* orig) {
    const QTextTableFormat_QtDShell&  __qt_orig = (const QTextTableFormat_QtDShell& ) *(QTextTableFormat_QtDShell *)orig;
    QTextTableFormat *result = new QTextTableFormat (__qt_orig);
    return result;
}

