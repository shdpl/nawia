#include <QVariant>
#include <qabstractitemmodel.h>
#include <qitemselectionmodel.h>
#include <qlist.h>

#include <iostream>
#include <qitemselectionmodel.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionRange_delete(void* nativeId)
{
    delete (QItemSelectionRange*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionRange_destroy(void* nativeId)
{
    call_destructor((QItemSelectionRange*)nativeId);
}

// ---externC---
// QItemSelectionRange::QItemSelectionRange()
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelectionRange_QItemSelectionRange
()
{
    QItemSelectionRange *__qt_this = new QItemSelectionRange();
    return (void *) __qt_this;

}

// QItemSelectionRange::QItemSelectionRange(const QItemSelectionRange & other)
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelectionRange_QItemSelectionRange_QItemSelectionRange
(void* other0)
{
    const QItemSelectionRange&  __qt_other0 = (const QItemSelectionRange& ) *(QItemSelectionRange *)other0;
    QItemSelectionRange *__qt_this = new QItemSelectionRange((const QItemSelectionRange& )__qt_other0);
    return (void *) __qt_this;

}

// QItemSelectionRange::QItemSelectionRange(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelectionRange_QItemSelectionRange_QModelIndex
(QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QItemSelectionRange *__qt_this = new QItemSelectionRange((const QModelIndex& )__qt_index0);
    return (void *) __qt_this;

}

// QItemSelectionRange::QItemSelectionRange(const QModelIndex & topLeft, const QModelIndex & bottomRight)
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelectionRange_QItemSelectionRange_QModelIndex_QModelIndex
(QModelIndexAccessor topLeft0,
 QModelIndexAccessor bottomRight1)
{
    QModelIndex __qt_topLeft0 = qtd_to_QModelIndex(topLeft0);
    QModelIndex __qt_bottomRight1 = qtd_to_QModelIndex(bottomRight1);
    QItemSelectionRange *__qt_this = new QItemSelectionRange((const QModelIndex& )__qt_topLeft0, (const QModelIndex& )__qt_bottomRight1);
    return (void *) __qt_this;

}

// QItemSelectionRange::bottom() const
QTD_EXTERN QTD_EXPORT int qtd_QItemSelectionRange_bottom_const
(void* __this_nativeId)
{
    QItemSelectionRange *__qt_this = (QItemSelectionRange *) __this_nativeId;
    int  __qt_return_value = __qt_this->bottom();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelectionRange::bottomRight() const
QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionRange_bottomRight_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value)
{
    QItemSelectionRange *__qt_this = (QItemSelectionRange *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->bottomRight();

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QItemSelectionRange::contains(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelectionRange_contains_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QItemSelectionRange *__qt_this = (QItemSelectionRange *) __this_nativeId;
    bool  __qt_return_value = __qt_this->contains((const QModelIndex& )__qt_index0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelectionRange::contains(int row, int column, const QModelIndex & parentIndex) const
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelectionRange_contains_int_int_QModelIndex_const
(void* __this_nativeId,
 int row0,
 int column1,
 QModelIndexAccessor parentIndex2)
{
    QModelIndex __qt_parentIndex2 = qtd_to_QModelIndex(parentIndex2);
    QItemSelectionRange *__qt_this = (QItemSelectionRange *) __this_nativeId;
    bool  __qt_return_value = __qt_this->contains((int )row0, (int )column1, (const QModelIndex& )__qt_parentIndex2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelectionRange::height() const
QTD_EXTERN QTD_EXPORT int qtd_QItemSelectionRange_height_const
(void* __this_nativeId)
{
    QItemSelectionRange *__qt_this = (QItemSelectionRange *) __this_nativeId;
    int  __qt_return_value = __qt_this->height();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelectionRange::indexes() const
QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionRange_indexes_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QItemSelectionRange *__qt_this = (QItemSelectionRange *) __this_nativeId;
    QList<QModelIndex >  __qt_return_value = __qt_this->indexes();

QList<QModelIndex > &__d_return_value_tmp = (*(QList<QModelIndex > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QItemSelectionRange::intersected(const QItemSelectionRange & other) const
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelectionRange_intersected_QItemSelectionRange_const
(void* __this_nativeId,
 void* other0)
{
    const QItemSelectionRange&  __qt_other0 = (const QItemSelectionRange& ) *(QItemSelectionRange *)other0;
    QItemSelectionRange *__qt_this = (QItemSelectionRange *) __this_nativeId;
    QItemSelectionRange  __qt_return_value = __qt_this->intersected((const QItemSelectionRange& )__qt_other0);

    void* __d_return_value = (void*) new QItemSelectionRange(__qt_return_value);

    return __d_return_value;
}

// QItemSelectionRange::intersects(const QItemSelectionRange & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelectionRange_intersects_QItemSelectionRange_const
(void* __this_nativeId,
 void* other0)
{
    const QItemSelectionRange&  __qt_other0 = (const QItemSelectionRange& ) *(QItemSelectionRange *)other0;
    QItemSelectionRange *__qt_this = (QItemSelectionRange *) __this_nativeId;
    bool  __qt_return_value = __qt_this->intersects((const QItemSelectionRange& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelectionRange::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelectionRange_isEmpty_const
(void* __this_nativeId)
{
    QItemSelectionRange *__qt_this = (QItemSelectionRange *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEmpty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelectionRange::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelectionRange_isValid_const
(void* __this_nativeId)
{
    QItemSelectionRange *__qt_this = (QItemSelectionRange *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelectionRange::left() const
QTD_EXTERN QTD_EXPORT int qtd_QItemSelectionRange_left_const
(void* __this_nativeId)
{
    QItemSelectionRange *__qt_this = (QItemSelectionRange *) __this_nativeId;
    int  __qt_return_value = __qt_this->left();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelectionRange::model() const
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelectionRange_model_const
(void* __this_nativeId)
{
    QItemSelectionRange *__qt_this = (QItemSelectionRange *) __this_nativeId;
    const QAbstractItemModel*  __qt_return_value = __qt_this->model();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QItemSelectionRange::operator==(const QItemSelectionRange & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelectionRange_operator_equal_QItemSelectionRange_const
(void* __this_nativeId,
 void* other0)
{
    const QItemSelectionRange&  __qt_other0 = (const QItemSelectionRange& ) *(QItemSelectionRange *)other0;
    QItemSelectionRange *__qt_this = (QItemSelectionRange *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QItemSelectionRange& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelectionRange::parent() const
QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionRange_parent_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value)
{
    QItemSelectionRange *__qt_this = (QItemSelectionRange *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->parent();

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QItemSelectionRange::right() const
QTD_EXTERN QTD_EXPORT int qtd_QItemSelectionRange_right_const
(void* __this_nativeId)
{
    QItemSelectionRange *__qt_this = (QItemSelectionRange *) __this_nativeId;
    int  __qt_return_value = __qt_this->right();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelectionRange::top() const
QTD_EXTERN QTD_EXPORT int qtd_QItemSelectionRange_top_const
(void* __this_nativeId)
{
    QItemSelectionRange *__qt_this = (QItemSelectionRange *) __this_nativeId;
    int  __qt_return_value = __qt_this->top();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelectionRange::topLeft() const
QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionRange_topLeft_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value)
{
    QItemSelectionRange *__qt_this = (QItemSelectionRange *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->topLeft();

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QItemSelectionRange::width() const
QTD_EXTERN QTD_EXPORT int qtd_QItemSelectionRange_width_const
(void* __this_nativeId)
{
    QItemSelectionRange *__qt_this = (QItemSelectionRange *) __this_nativeId;
    int  __qt_return_value = __qt_this->width();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelectionRange_QTypeInfo_isComplex() { return (bool) QTypeInfo<QItemSelectionRange>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelectionRange_QTypeInfo_isStatic() { return (bool) QTypeInfo<QItemSelectionRange>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelectionRange_QTypeInfo_isLarge() { return (bool) QTypeInfo<QItemSelectionRange>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelectionRange_QTypeInfo_isPointer() { return (bool) QTypeInfo<QItemSelectionRange>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelectionRange_QTypeInfo_isDummy() { return (bool) QTypeInfo<QItemSelectionRange>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionRange_placed_copy(void* orig, void* place) {
    const QItemSelectionRange&  __qt_orig = (const QItemSelectionRange& ) *(QItemSelectionRange *)orig;
    QItemSelectionRange *result = new (place) QItemSelectionRange (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QItemSelectionRange_native_copy(void* orig) {
    const QItemSelectionRange&  __qt_orig = (const QItemSelectionRange& ) *(QItemSelectionRange *)orig;
    QItemSelectionRange *result = new QItemSelectionRange (__qt_orig);
    return result;
}

