#include <QVariant>
#include <qtablewidget.h>

#include <iostream>
#include <qtablewidget.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetSelectionRange_delete(void* nativeId)
{
    delete (QTableWidgetSelectionRange*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetSelectionRange_destroy(void* nativeId)
{
    call_destructor((QTableWidgetSelectionRange*)nativeId);
}

// ---externC---
// QTableWidgetSelectionRange::QTableWidgetSelectionRange()
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidgetSelectionRange_QTableWidgetSelectionRange
()
{
    QTableWidgetSelectionRange *__qt_this = new QTableWidgetSelectionRange();
    return (void *) __qt_this;

}

// QTableWidgetSelectionRange::QTableWidgetSelectionRange(const QTableWidgetSelectionRange & other)
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidgetSelectionRange_QTableWidgetSelectionRange_QTableWidgetSelectionRange
(void* other0)
{
    const QTableWidgetSelectionRange&  __qt_other0 = (const QTableWidgetSelectionRange& ) *(QTableWidgetSelectionRange *)other0;
    QTableWidgetSelectionRange *__qt_this = new QTableWidgetSelectionRange((const QTableWidgetSelectionRange& )__qt_other0);
    return (void *) __qt_this;

}

// QTableWidgetSelectionRange::QTableWidgetSelectionRange(int top, int left, int bottom, int right)
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidgetSelectionRange_QTableWidgetSelectionRange_int_int_int_int
(int top0,
 int left1,
 int bottom2,
 int right3)
{
    QTableWidgetSelectionRange *__qt_this = new QTableWidgetSelectionRange((int )top0, (int )left1, (int )bottom2, (int )right3);
    return (void *) __qt_this;

}

// QTableWidgetSelectionRange::bottomRow() const
QTD_EXTERN QTD_EXPORT int qtd_QTableWidgetSelectionRange_bottomRow_const
(void* __this_nativeId)
{
    QTableWidgetSelectionRange *__qt_this = (QTableWidgetSelectionRange *) __this_nativeId;
    int  __qt_return_value = __qt_this->bottomRow();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidgetSelectionRange::columnCount() const
QTD_EXTERN QTD_EXPORT int qtd_QTableWidgetSelectionRange_columnCount_const
(void* __this_nativeId)
{
    QTableWidgetSelectionRange *__qt_this = (QTableWidgetSelectionRange *) __this_nativeId;
    int  __qt_return_value = __qt_this->columnCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidgetSelectionRange::leftColumn() const
QTD_EXTERN QTD_EXPORT int qtd_QTableWidgetSelectionRange_leftColumn_const
(void* __this_nativeId)
{
    QTableWidgetSelectionRange *__qt_this = (QTableWidgetSelectionRange *) __this_nativeId;
    int  __qt_return_value = __qt_this->leftColumn();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidgetSelectionRange::rightColumn() const
QTD_EXTERN QTD_EXPORT int qtd_QTableWidgetSelectionRange_rightColumn_const
(void* __this_nativeId)
{
    QTableWidgetSelectionRange *__qt_this = (QTableWidgetSelectionRange *) __this_nativeId;
    int  __qt_return_value = __qt_this->rightColumn();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidgetSelectionRange::rowCount() const
QTD_EXTERN QTD_EXPORT int qtd_QTableWidgetSelectionRange_rowCount_const
(void* __this_nativeId)
{
    QTableWidgetSelectionRange *__qt_this = (QTableWidgetSelectionRange *) __this_nativeId;
    int  __qt_return_value = __qt_this->rowCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidgetSelectionRange::topRow() const
QTD_EXTERN QTD_EXPORT int qtd_QTableWidgetSelectionRange_topRow_const
(void* __this_nativeId)
{
    QTableWidgetSelectionRange *__qt_this = (QTableWidgetSelectionRange *) __this_nativeId;
    int  __qt_return_value = __qt_this->topRow();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTableWidgetSelectionRange_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTableWidgetSelectionRange>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTableWidgetSelectionRange_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTableWidgetSelectionRange>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTableWidgetSelectionRange_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTableWidgetSelectionRange>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTableWidgetSelectionRange_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTableWidgetSelectionRange>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTableWidgetSelectionRange_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTableWidgetSelectionRange>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetSelectionRange_placed_copy(void* orig, void* place) {
    const QTableWidgetSelectionRange&  __qt_orig = (const QTableWidgetSelectionRange& ) *(QTableWidgetSelectionRange *)orig;
    QTableWidgetSelectionRange *result = new (place) QTableWidgetSelectionRange (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTableWidgetSelectionRange_native_copy(void* orig) {
    const QTableWidgetSelectionRange&  __qt_orig = (const QTableWidgetSelectionRange& ) *(QTableWidgetSelectionRange *)orig;
    QTableWidgetSelectionRange *result = new QTableWidgetSelectionRange (__qt_orig);
    return result;
}

