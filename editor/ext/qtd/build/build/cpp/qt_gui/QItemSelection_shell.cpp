#include <QVariant>
#include <qitemselectionmodel.h>
#include <qlist.h>
#include <qvector.h>

#include <iostream>
#include <qitemselectionmodel.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_delete(void* nativeId)
{
    delete (QItemSelection*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_destroy(void* nativeId)
{
    call_destructor((QItemSelection*)nativeId);
}

// ---externC---
// QItemSelection::QItemSelection()
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelection_QItemSelection
()
{
    QItemSelection *__qt_this = new QItemSelection();
    return (void *) __qt_this;

}

// QItemSelection::QItemSelection(const QModelIndex & topLeft, const QModelIndex & bottomRight)
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelection_QItemSelection_QModelIndex_QModelIndex
(QModelIndexAccessor topLeft0,
 QModelIndexAccessor bottomRight1)
{
    QModelIndex __qt_topLeft0 = qtd_to_QModelIndex(topLeft0);
    QModelIndex __qt_bottomRight1 = qtd_to_QModelIndex(bottomRight1);
    QItemSelection *__qt_this = new QItemSelection((const QModelIndex& )__qt_topLeft0, (const QModelIndex& )__qt_bottomRight1);
    return (void *) __qt_this;

}

// QItemSelection::append(const QItemSelectionRange & t)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_append_QItemSelectionRange
(void* __this_nativeId,
 void* t0)
{
    const QItemSelectionRange&  __qt_t0 = (const QItemSelectionRange& ) *(QItemSelectionRange *)t0;
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    __qt_this->append((const QItemSelectionRange& )__qt_t0);

}

// QItemSelection::append(const QList<QItemSelectionRange > & t)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_append_QList
(void* __this_nativeId,
 void* t0)
{
QList<QItemSelectionRange > __qt_t0 = (*(QList<QItemSelectionRange > *)t0);
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    __qt_this->append((const QList<QItemSelectionRange >& )__qt_t0);

}

// QItemSelection::at(int i) const
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelection_at_int_const
(void* __this_nativeId,
 int i0)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    const QItemSelectionRange&  __qt_return_value = __qt_this->at((int )i0);

    void* __d_return_value = (void*) new QItemSelectionRange(__qt_return_value);

    return __d_return_value;
}

// QItemSelection::back() const
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelection_back_const
(void* __this_nativeId)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    const QItemSelectionRange&  __qt_return_value = __qt_this->back();

    void* __d_return_value = (void*) new QItemSelectionRange(__qt_return_value);

    return __d_return_value;
}

// QItemSelection::clear()
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_clear
(void* __this_nativeId)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    __qt_this->clear();

}

// QItemSelection::contains(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelection_contains_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    bool  __qt_return_value = __qt_this->contains((const QModelIndex& )__qt_index0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelection::count() const
QTD_EXTERN QTD_EXPORT int qtd_QItemSelection_count_const
(void* __this_nativeId)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    int  __qt_return_value = __qt_this->count();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelection::count(const QItemSelectionRange & t) const
QTD_EXTERN QTD_EXPORT int qtd_QItemSelection_count_QItemSelectionRange_const
(void* __this_nativeId,
 void* t0)
{
    const QItemSelectionRange&  __qt_t0 = (const QItemSelectionRange& ) *(QItemSelectionRange *)t0;
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    int  __qt_return_value = __qt_this->count((const QItemSelectionRange& )__qt_t0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelection::detachShared()
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_detachShared
(void* __this_nativeId)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    __qt_this->detachShared();

}

// QItemSelection::empty() const
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelection_empty_const
(void* __this_nativeId)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    bool  __qt_return_value = __qt_this->empty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelection::endsWith(const QItemSelectionRange & t) const
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelection_endsWith_QItemSelectionRange_const
(void* __this_nativeId,
 void* t0)
{
    const QItemSelectionRange&  __qt_t0 = (const QItemSelectionRange& ) *(QItemSelectionRange *)t0;
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    bool  __qt_return_value = __qt_this->endsWith((const QItemSelectionRange& )__qt_t0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelection::first() const
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelection_first_const
(void* __this_nativeId)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    const QItemSelectionRange&  __qt_return_value = __qt_this->first();

    void* __d_return_value = (void*) new QItemSelectionRange(__qt_return_value);

    return __d_return_value;
}

// QItemSelection::front() const
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelection_front_const
(void* __this_nativeId)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    const QItemSelectionRange&  __qt_return_value = __qt_this->front();

    void* __d_return_value = (void*) new QItemSelectionRange(__qt_return_value);

    return __d_return_value;
}

// QItemSelection::indexOf(const QItemSelectionRange & t, int from) const
QTD_EXTERN QTD_EXPORT int qtd_QItemSelection_indexOf_QItemSelectionRange_int_const
(void* __this_nativeId,
 void* t0,
 int from1)
{
    const QItemSelectionRange&  __qt_t0 = (const QItemSelectionRange& ) *(QItemSelectionRange *)t0;
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    int  __qt_return_value = __qt_this->indexOf((const QItemSelectionRange& )__qt_t0, (int )from1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelection::indexes() const
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_indexes_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    QList<QModelIndex >  __qt_return_value = __qt_this->indexes();

QList<QModelIndex > &__d_return_value_tmp = (*(QList<QModelIndex > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QItemSelection::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelection_isEmpty_const
(void* __this_nativeId)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEmpty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelection::isSharedWith(const QList<QItemSelectionRange > & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelection_isSharedWith_QList_const
(void* __this_nativeId,
 void* other0)
{
QList<QItemSelectionRange > __qt_other0 = (*(QList<QItemSelectionRange > *)other0);
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSharedWith((const QList<QItemSelectionRange >& )__qt_other0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelection::last() const
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelection_last_const
(void* __this_nativeId)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    const QItemSelectionRange&  __qt_return_value = __qt_this->last();

    void* __d_return_value = (void*) new QItemSelectionRange(__qt_return_value);

    return __d_return_value;
}

// QItemSelection::lastIndexOf(const QItemSelectionRange & t, int from) const
QTD_EXTERN QTD_EXPORT int qtd_QItemSelection_lastIndexOf_QItemSelectionRange_int_const
(void* __this_nativeId,
 void* t0,
 int from1)
{
    const QItemSelectionRange&  __qt_t0 = (const QItemSelectionRange& ) *(QItemSelectionRange *)t0;
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    int  __qt_return_value = __qt_this->lastIndexOf((const QItemSelectionRange& )__qt_t0, (int )from1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelection::length() const
QTD_EXTERN QTD_EXPORT int qtd_QItemSelection_length_const
(void* __this_nativeId)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    int  __qt_return_value = __qt_this->length();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelection::merge(const QItemSelection & other, QFlags<QItemSelectionModel::SelectionFlag> command)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_merge_QItemSelection_SelectionFlags
(void* __this_nativeId,
 void* other0,
 int command1)
{
    const QItemSelection&  __qt_other0 = (const QItemSelection& ) *(QItemSelection *)other0;
    QFlags<QItemSelectionModel::SelectionFlag> __qt_command1 = (QFlags<QItemSelectionModel::SelectionFlag>) command1;
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    __qt_this->merge((const QItemSelection& )__qt_other0, (QItemSelectionModel::SelectionFlags )__qt_command1);

}

// QItemSelection::mid(int pos, int length) const
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_mid_int_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int pos0,
 int length1)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    QList<QItemSelectionRange >  __qt_return_value = __qt_this->mid((int )pos0, (int )length1);

QList<QItemSelectionRange > &__d_return_value_tmp = (*(QList<QItemSelectionRange > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QItemSelection::move(int from, int to)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_move_int_int
(void* __this_nativeId,
 int from0,
 int to1)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    __qt_this->move((int )from0, (int )to1);

}

// QItemSelection::operator==(const QList<QItemSelectionRange > & l) const
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelection_operator_equal_QList_const
(void* __this_nativeId,
 void* l0)
{
QList<QItemSelectionRange > __qt_l0 = (*(QList<QItemSelectionRange > *)l0);
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QList<QItemSelectionRange >& )__qt_l0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelection::pop_back()
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_pop_back
(void* __this_nativeId)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    __qt_this->pop_back();

}

// QItemSelection::pop_front()
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_pop_front
(void* __this_nativeId)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    __qt_this->pop_front();

}

// QItemSelection::prepend(const QItemSelectionRange & t)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_prepend_QItemSelectionRange
(void* __this_nativeId,
 void* t0)
{
    const QItemSelectionRange&  __qt_t0 = (const QItemSelectionRange& ) *(QItemSelectionRange *)t0;
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    __qt_this->prepend((const QItemSelectionRange& )__qt_t0);

}

// QItemSelection::push_back(const QItemSelectionRange & t)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_push_back_QItemSelectionRange
(void* __this_nativeId,
 void* t0)
{
    const QItemSelectionRange&  __qt_t0 = (const QItemSelectionRange& ) *(QItemSelectionRange *)t0;
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    __qt_this->push_back((const QItemSelectionRange& )__qt_t0);

}

// QItemSelection::push_front(const QItemSelectionRange & t)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_push_front_QItemSelectionRange
(void* __this_nativeId,
 void* t0)
{
    const QItemSelectionRange&  __qt_t0 = (const QItemSelectionRange& ) *(QItemSelectionRange *)t0;
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    __qt_this->push_front((const QItemSelectionRange& )__qt_t0);

}

// QItemSelection::removeAll(const QItemSelectionRange & t)
QTD_EXTERN QTD_EXPORT int qtd_QItemSelection_removeAll_QItemSelectionRange
(void* __this_nativeId,
 void* t0)
{
    const QItemSelectionRange&  __qt_t0 = (const QItemSelectionRange& ) *(QItemSelectionRange *)t0;
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    int  __qt_return_value = __qt_this->removeAll((const QItemSelectionRange& )__qt_t0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelection::removeAt(int i)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_removeAt_int
(void* __this_nativeId,
 int i0)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    __qt_this->removeAt((int )i0);

}

// QItemSelection::removeFirst()
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_removeFirst
(void* __this_nativeId)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    __qt_this->removeFirst();

}

// QItemSelection::removeLast()
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_removeLast
(void* __this_nativeId)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    __qt_this->removeLast();

}

// QItemSelection::removeOne(const QItemSelectionRange & t)
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelection_removeOne_QItemSelectionRange
(void* __this_nativeId,
 void* t0)
{
    const QItemSelectionRange&  __qt_t0 = (const QItemSelectionRange& ) *(QItemSelectionRange *)t0;
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    bool  __qt_return_value = __qt_this->removeOne((const QItemSelectionRange& )__qt_t0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelection::replace(int i, const QItemSelectionRange & t)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_replace_int_QItemSelectionRange
(void* __this_nativeId,
 int i0,
 void* t1)
{
    const QItemSelectionRange&  __qt_t1 = (const QItemSelectionRange& ) *(QItemSelectionRange *)t1;
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    __qt_this->replace((int )i0, (const QItemSelectionRange& )__qt_t1);

}

// QItemSelection::reserve(int size)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_reserve_int
(void* __this_nativeId,
 int size0)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    __qt_this->reserve((int )size0);

}

// QItemSelection::select(const QModelIndex & topLeft, const QModelIndex & bottomRight)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_select_QModelIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor topLeft0,
 QModelIndexAccessor bottomRight1)
{
    QModelIndex __qt_topLeft0 = qtd_to_QModelIndex(topLeft0);
    QModelIndex __qt_bottomRight1 = qtd_to_QModelIndex(bottomRight1);
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    __qt_this->select((const QModelIndex& )__qt_topLeft0, (const QModelIndex& )__qt_bottomRight1);

}

// QItemSelection::setSharable(bool sharable)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_setSharable_bool
(void* __this_nativeId,
 bool sharable0)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    __qt_this->setSharable((bool )sharable0);

}

// QItemSelection::size() const
QTD_EXTERN QTD_EXPORT int qtd_QItemSelection_size_const
(void* __this_nativeId)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    int  __qt_return_value = __qt_this->size();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelection::startsWith(const QItemSelectionRange & t) const
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelection_startsWith_QItemSelectionRange_const
(void* __this_nativeId,
 void* t0)
{
    const QItemSelectionRange&  __qt_t0 = (const QItemSelectionRange& ) *(QItemSelectionRange *)t0;
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    bool  __qt_return_value = __qt_this->startsWith((const QItemSelectionRange& )__qt_t0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelection::swap(int i, int j)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_swap_int_int
(void* __this_nativeId,
 int i0,
 int j1)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    __qt_this->swap((int )i0, (int )j1);

}

// QItemSelection::takeAt(int i)
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelection_takeAt_int
(void* __this_nativeId,
 int i0)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    QItemSelectionRange  __qt_return_value = __qt_this->takeAt((int )i0);

    void* __d_return_value = (void*) new QItemSelectionRange(__qt_return_value);

    return __d_return_value;
}

// QItemSelection::takeFirst()
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelection_takeFirst
(void* __this_nativeId)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    QItemSelectionRange  __qt_return_value = __qt_this->takeFirst();

    void* __d_return_value = (void*) new QItemSelectionRange(__qt_return_value);

    return __d_return_value;
}

// QItemSelection::takeLast()
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelection_takeLast
(void* __this_nativeId)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    QItemSelectionRange  __qt_return_value = __qt_this->takeLast();

    void* __d_return_value = (void*) new QItemSelectionRange(__qt_return_value);

    return __d_return_value;
}

// QItemSelection::toVector() const
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_toVector_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    QVector<QItemSelectionRange >  __qt_return_value = __qt_this->toVector();


    qtd_allocate_QItemSelectionRange_array(__d_return_value, __qt_return_value.size());
    QVector<QItemSelectionRange > ::const_iterator __qt_return_value_end_it = __qt_return_value.constEnd();
    int i___qt_return_value = 0;
    for (QVector<QItemSelectionRange > ::const_iterator __qt_return_value_it = __qt_return_value.constBegin(); __qt_return_value_it != __qt_return_value_end_it; ++__qt_return_value_it) {
        QItemSelectionRange  __qt_tmp = *__qt_return_value_it;
        void* __java_tmp = (void*) new QItemSelectionRange(__qt_tmp);
        qtd_assign_QItemSelectionRange_array_element(__d_return_value, i___qt_return_value, __java_tmp);
        ++i___qt_return_value;
    }

}

// QItemSelection::value(int i) const
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelection_value_int_const
(void* __this_nativeId,
 int i0)
{
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    QItemSelectionRange  __qt_return_value = __qt_this->value((int )i0);

    void* __d_return_value = (void*) new QItemSelectionRange(__qt_return_value);

    return __d_return_value;
}

// QItemSelection::value(int i, const QItemSelectionRange & defaultValue) const
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelection_value_int_QItemSelectionRange_const
(void* __this_nativeId,
 int i0,
 void* defaultValue1)
{
    const QItemSelectionRange&  __qt_defaultValue1 = (const QItemSelectionRange& ) *(QItemSelectionRange *)defaultValue1;
    QItemSelection *__qt_this = (QItemSelection *) __this_nativeId;
    QItemSelectionRange  __qt_return_value = __qt_this->value((int )i0, (const QItemSelectionRange& )__qt_defaultValue1);

    void* __d_return_value = (void*) new QItemSelectionRange(__qt_return_value);

    return __d_return_value;
}

// QItemSelection::fromVector(const QVector<QItemSelectionRange > & vector)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_fromVector_QVector
(void* __d_return_value,
 DArray* vector0)
{
    QVector<QItemSelectionRange > __qt_vector0;
    __qt_vector0.reserve(vector0->length);
    for (int i=0; i<vector0->length; ++i) {
        QItemSelectionRange* __d_element;
        qtd_get_QItemSelectionRange_from_array(vector0, i, &__d_element);
        QItemSelectionRange  __qt_element = (QItemSelectionRange ) *(QItemSelectionRange *)__d_element;
        __qt_vector0 << __qt_element;
    }
    QList<QItemSelectionRange >  __qt_return_value = QItemSelection::fromVector((const QVector<QItemSelectionRange >& )__qt_vector0);

QList<QItemSelectionRange > &__d_return_value_tmp = (*(QList<QItemSelectionRange > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QItemSelection::split(const QItemSelectionRange & range, const QItemSelectionRange & other, QItemSelection * result)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_split_QItemSelectionRange_QItemSelectionRange_nativepointerQItemSelection
(void* range0,
 void* other1,
 void* result2)
{
    const QItemSelectionRange&  __qt_range0 = (const QItemSelectionRange& ) *(QItemSelectionRange *)range0;
    const QItemSelectionRange&  __qt_other1 = (const QItemSelectionRange& ) *(QItemSelectionRange *)other1;
    QItemSelection*  __qt_result2 = (QItemSelection* ) result2;
    QItemSelection::split((const QItemSelectionRange& )__qt_range0, (const QItemSelectionRange& )__qt_other1, (QItemSelection* )__qt_result2);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelection_QTypeInfo_isComplex() { return (bool) QTypeInfo<QItemSelection>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelection_QTypeInfo_isStatic() { return (bool) QTypeInfo<QItemSelection>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelection_QTypeInfo_isLarge() { return (bool) QTypeInfo<QItemSelection>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelection_QTypeInfo_isPointer() { return (bool) QTypeInfo<QItemSelection>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelection_QTypeInfo_isDummy() { return (bool) QTypeInfo<QItemSelection>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QItemSelection_placed_copy(void* orig, void* place) {
    const QItemSelection&  __qt_orig = (const QItemSelection& ) *(QItemSelection *)orig;
    QItemSelection *result = new (place) QItemSelection (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QItemSelection_native_copy(void* orig) {
    const QItemSelection&  __qt_orig = (const QItemSelection& ) *(QItemSelection *)orig;
    QItemSelection *result = new QItemSelection (__qt_orig);
    return result;
}

