#include <QVariant>
#include <qabstractitemmodel.h>
#include <qvariant.h>

#include <iostream>
#include <qabstractitemmodel.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QPersistentModelIndex_delete(void* nativeId)
{
    delete (QPersistentModelIndex*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QPersistentModelIndex_destroy(void* nativeId)
{
    call_destructor((QPersistentModelIndex*)nativeId);
}

// ---externC---
// QPersistentModelIndex::QPersistentModelIndex()
QTD_EXTERN QTD_EXPORT void* qtd_QPersistentModelIndex_QPersistentModelIndex
()
{
    QPersistentModelIndex *__qt_this = new QPersistentModelIndex();
    return (void *) __qt_this;

}

// QPersistentModelIndex::QPersistentModelIndex(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void* qtd_QPersistentModelIndex_QPersistentModelIndex_QModelIndex
(QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QPersistentModelIndex *__qt_this = new QPersistentModelIndex((const QModelIndex& )__qt_index0);
    return (void *) __qt_this;

}

// QPersistentModelIndex::QPersistentModelIndex(const QPersistentModelIndex & other)
QTD_EXTERN QTD_EXPORT void* qtd_QPersistentModelIndex_QPersistentModelIndex_QPersistentModelIndex
(void* other0)
{
    const QPersistentModelIndex&  __qt_other0 = (const QPersistentModelIndex& ) *(QPersistentModelIndex *)other0;
    QPersistentModelIndex *__qt_this = new QPersistentModelIndex((const QPersistentModelIndex& )__qt_other0);
    return (void *) __qt_this;

}

// QPersistentModelIndex::child(int row, int column) const
QTD_EXTERN QTD_EXPORT void qtd_QPersistentModelIndex_child_int_int_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1)
{
    QPersistentModelIndex *__qt_this = (QPersistentModelIndex *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->child((int )row0, (int )column1);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QPersistentModelIndex::column() const
QTD_EXTERN QTD_EXPORT int qtd_QPersistentModelIndex_column_const
(void* __this_nativeId)
{
    QPersistentModelIndex *__qt_this = (QPersistentModelIndex *) __this_nativeId;
    int  __qt_return_value = __qt_this->column();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPersistentModelIndex::data(int role) const
QTD_EXTERN QTD_EXPORT void* qtd_QPersistentModelIndex_data_int_const
(void* __this_nativeId,
 int role0)
{
    QPersistentModelIndex *__qt_this = (QPersistentModelIndex *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->data((int )role0);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QPersistentModelIndex::flags() const
QTD_EXTERN QTD_EXPORT int qtd_QPersistentModelIndex_flags_const
(void* __this_nativeId)
{
    QPersistentModelIndex *__qt_this = (QPersistentModelIndex *) __this_nativeId;
    int  __qt_return_value = __qt_this->flags();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPersistentModelIndex::internalId() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QPersistentModelIndex_internalId_const
(void* __this_nativeId)
{
    QPersistentModelIndex *__qt_this = (QPersistentModelIndex *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->internalId();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPersistentModelIndex::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QPersistentModelIndex_isValid_const
(void* __this_nativeId)
{
    QPersistentModelIndex *__qt_this = (QPersistentModelIndex *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPersistentModelIndex::model() const
QTD_EXTERN QTD_EXPORT void* qtd_QPersistentModelIndex_model_const
(void* __this_nativeId)
{
    QPersistentModelIndex *__qt_this = (QPersistentModelIndex *) __this_nativeId;
    const QAbstractItemModel*  __qt_return_value = __qt_this->model();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QPersistentModelIndex::operator<(const QPersistentModelIndex & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QPersistentModelIndex_operator_less_QPersistentModelIndex_const
(void* __this_nativeId,
 void* other0)
{
    const QPersistentModelIndex&  __qt_other0 = (const QPersistentModelIndex& ) *(QPersistentModelIndex *)other0;
    QPersistentModelIndex *__qt_this = (QPersistentModelIndex *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator<((const QPersistentModelIndex& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPersistentModelIndex::operator==(const QModelIndex & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QPersistentModelIndex_operator_equal_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor other0)
{
    QModelIndex __qt_other0 = qtd_to_QModelIndex(other0);
    QPersistentModelIndex *__qt_this = (QPersistentModelIndex *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QModelIndex& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPersistentModelIndex::operator==(const QPersistentModelIndex & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QPersistentModelIndex_operator_equal_QPersistentModelIndex_const
(void* __this_nativeId,
 void* other0)
{
    const QPersistentModelIndex&  __qt_other0 = (const QPersistentModelIndex& ) *(QPersistentModelIndex *)other0;
    QPersistentModelIndex *__qt_this = (QPersistentModelIndex *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QPersistentModelIndex& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPersistentModelIndex::parent() const
QTD_EXTERN QTD_EXPORT void qtd_QPersistentModelIndex_parent_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value)
{
    QPersistentModelIndex *__qt_this = (QPersistentModelIndex *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->parent();

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QPersistentModelIndex::row() const
QTD_EXTERN QTD_EXPORT int qtd_QPersistentModelIndex_row_const
(void* __this_nativeId)
{
    QPersistentModelIndex *__qt_this = (QPersistentModelIndex *) __this_nativeId;
    int  __qt_return_value = __qt_this->row();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPersistentModelIndex::sibling(int row, int column) const
QTD_EXTERN QTD_EXPORT void qtd_QPersistentModelIndex_sibling_int_int_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1)
{
    QPersistentModelIndex *__qt_this = (QPersistentModelIndex *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->sibling((int )row0, (int )column1);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QPersistentModelIndex_QTypeInfo_isComplex() { return (bool) QTypeInfo<QPersistentModelIndex>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QPersistentModelIndex_QTypeInfo_isStatic() { return (bool) QTypeInfo<QPersistentModelIndex>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QPersistentModelIndex_QTypeInfo_isLarge() { return (bool) QTypeInfo<QPersistentModelIndex>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QPersistentModelIndex_QTypeInfo_isPointer() { return (bool) QTypeInfo<QPersistentModelIndex>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QPersistentModelIndex_QTypeInfo_isDummy() { return (bool) QTypeInfo<QPersistentModelIndex>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QPersistentModelIndex_placed_copy(void* orig, void* place) {
    const QPersistentModelIndex&  __qt_orig = (const QPersistentModelIndex& ) *(QPersistentModelIndex *)orig;
    QPersistentModelIndex *result = new (place) QPersistentModelIndex (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QPersistentModelIndex_native_copy(void* orig) {
    const QPersistentModelIndex&  __qt_orig = (const QPersistentModelIndex& ) *(QPersistentModelIndex *)orig;
    QPersistentModelIndex *result = new QPersistentModelIndex (__qt_orig);
    return result;
}

