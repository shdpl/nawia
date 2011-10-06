#include <QVariant>
#include <qtreewidget.h>
#include <qtreewidgetitemiterator.h>

#include <iostream>
#include <qtreewidgetitemiterator.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItemIterator_delete(void* nativeId)
{
    delete (QTreeWidgetItemIterator*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItemIterator_destroy(void* nativeId)
{
    call_destructor((QTreeWidgetItemIterator*)nativeId);
}

// ---externC---
// QTreeWidgetItemIterator::QTreeWidgetItemIterator(QTreeWidget * widget, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItemIterator_QTreeWidgetItemIterator_QTreeWidget_IteratorFlags
(void* widget0,
 int flags1)
{
    QTreeWidget*  __qt_widget0 = (QTreeWidget* ) widget0;
    QFlags<QTreeWidgetItemIterator::IteratorFlag> __qt_flags1 = (QFlags<QTreeWidgetItemIterator::IteratorFlag>) flags1;
    QTreeWidgetItemIterator *__qt_this = new QTreeWidgetItemIterator((QTreeWidget* )__qt_widget0, (QTreeWidgetItemIterator::IteratorFlags )__qt_flags1);
    return (void *) __qt_this;

}

// QTreeWidgetItemIterator::QTreeWidgetItemIterator(QTreeWidgetItem * item, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItemIterator_QTreeWidgetItemIterator_QTreeWidgetItem_IteratorFlags
(void* item0,
 int flags1)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QFlags<QTreeWidgetItemIterator::IteratorFlag> __qt_flags1 = (QFlags<QTreeWidgetItemIterator::IteratorFlag>) flags1;
    QTreeWidgetItemIterator *__qt_this = new QTreeWidgetItemIterator((QTreeWidgetItem* )__qt_item0, (QTreeWidgetItemIterator::IteratorFlags )__qt_flags1);
    return (void *) __qt_this;

}

// QTreeWidgetItemIterator::QTreeWidgetItemIterator(const QTreeWidgetItemIterator & it)
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItemIterator_QTreeWidgetItemIterator_QTreeWidgetItemIterator
(void* it0)
{
    const QTreeWidgetItemIterator&  __qt_it0 = (const QTreeWidgetItemIterator& ) *(QTreeWidgetItemIterator *)it0;
    QTreeWidgetItemIterator *__qt_this = new QTreeWidgetItemIterator((const QTreeWidgetItemIterator& )__qt_it0);
    return (void *) __qt_this;

}

// QTreeWidgetItemIterator::operator*() const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItemIterator_operator_multiply_const
(void* __this_nativeId)
{
    QTreeWidgetItemIterator *__qt_this = (QTreeWidgetItemIterator *) __this_nativeId;
    QTreeWidgetItem*  __qt_return_value = __qt_this->operator*();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTreeWidgetItemIterator::operator++()
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItemIterator_operator_increment
(void* __this_nativeId)
{
    QTreeWidgetItemIterator *__qt_this = (QTreeWidgetItemIterator *) __this_nativeId;
    QTreeWidgetItemIterator&  __qt_return_value = __qt_this->operator++();

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QTreeWidgetItemIterator::operator+=(int n)
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItemIterator_operator_add_assign_int
(void* __this_nativeId,
 int n0)
{
    QTreeWidgetItemIterator *__qt_this = (QTreeWidgetItemIterator *) __this_nativeId;
    QTreeWidgetItemIterator&  __qt_return_value = __qt_this->operator+=((int )n0);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QTreeWidgetItemIterator::operator--()
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItemIterator_operator_decrement
(void* __this_nativeId)
{
    QTreeWidgetItemIterator *__qt_this = (QTreeWidgetItemIterator *) __this_nativeId;
    QTreeWidgetItemIterator&  __qt_return_value = __qt_this->operator--();

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QTreeWidgetItemIterator::operator-=(int n)
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItemIterator_operator_subtract_assign_int
(void* __this_nativeId,
 int n0)
{
    QTreeWidgetItemIterator *__qt_this = (QTreeWidgetItemIterator *) __this_nativeId;
    QTreeWidgetItemIterator&  __qt_return_value = __qt_this->operator-=((int )n0);

    void* __d_return_value = (void*) &__qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QTreeWidgetItemIterator_QTypeInfo_isComplex() { return (bool) QTypeInfo<QTreeWidgetItemIterator>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QTreeWidgetItemIterator_QTypeInfo_isStatic() { return (bool) QTypeInfo<QTreeWidgetItemIterator>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QTreeWidgetItemIterator_QTypeInfo_isLarge() { return (bool) QTypeInfo<QTreeWidgetItemIterator>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QTreeWidgetItemIterator_QTypeInfo_isPointer() { return (bool) QTypeInfo<QTreeWidgetItemIterator>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QTreeWidgetItemIterator_QTypeInfo_isDummy() { return (bool) QTypeInfo<QTreeWidgetItemIterator>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItemIterator_placed_copy(void* orig, void* place) {
    const QTreeWidgetItemIterator&  __qt_orig = (const QTreeWidgetItemIterator& ) *(QTreeWidgetItemIterator *)orig;
    QTreeWidgetItemIterator *result = new (place) QTreeWidgetItemIterator (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItemIterator_native_copy(void* orig) {
    const QTreeWidgetItemIterator&  __qt_orig = (const QTreeWidgetItemIterator& ) *(QTreeWidgetItemIterator *)orig;
    QTreeWidgetItemIterator *result = new QTreeWidgetItemIterator (__qt_orig);
    return result;
}

