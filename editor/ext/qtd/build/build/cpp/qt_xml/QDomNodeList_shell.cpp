#include <QVariant>
#include <qdom.h>

#include <iostream>
#include <qdom.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QDomNodeList_delete(void* nativeId)
{
    delete (QDomNodeList*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDomNodeList_destroy(void* nativeId)
{
    call_destructor((QDomNodeList*)nativeId);
}

// ---externC---
// QDomNodeList::QDomNodeList()
QTD_EXTERN QTD_EXPORT void* qtd_QDomNodeList_QDomNodeList
()
{
    QDomNodeList *__qt_this = new QDomNodeList();
    return (void *) __qt_this;

}

// QDomNodeList::QDomNodeList(const QDomNodeList & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QDomNodeList_QDomNodeList_QDomNodeList
(void* arg__1)
{
    const QDomNodeList&  __qt_arg__1 = (const QDomNodeList& ) *(QDomNodeList *)arg__1;
    QDomNodeList *__qt_this = new QDomNodeList((const QDomNodeList& )__qt_arg__1);
    return (void *) __qt_this;

}

// QDomNodeList::at(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNodeList_at_int_const
(void* __this_nativeId,
 int index0)
{
    QDomNodeList *__qt_this = (QDomNodeList *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->at((int )index0);

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomNodeList::count() const
QTD_EXTERN QTD_EXPORT int qtd_QDomNodeList_count_const
(void* __this_nativeId)
{
    QDomNodeList *__qt_this = (QDomNodeList *) __this_nativeId;
    int  __qt_return_value = __qt_this->count();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNodeList::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNodeList_isEmpty_const
(void* __this_nativeId)
{
    QDomNodeList *__qt_this = (QDomNodeList *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEmpty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNodeList::item(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNodeList_item_int_const
(void* __this_nativeId,
 int index0)
{
    QDomNodeList *__qt_this = (QDomNodeList *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->item((int )index0);

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomNodeList::length() const
QTD_EXTERN QTD_EXPORT uint qtd_QDomNodeList_length_const
(void* __this_nativeId)
{
    QDomNodeList *__qt_this = (QDomNodeList *) __this_nativeId;
    uint  __qt_return_value = __qt_this->length();

    uint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNodeList::operator==(const QDomNodeList & arg__1) const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNodeList_operator_equal_QDomNodeList_const
(void* __this_nativeId,
 void* arg__1)
{
    const QDomNodeList&  __qt_arg__1 = (const QDomNodeList& ) *(QDomNodeList *)arg__1;
    QDomNodeList *__qt_this = (QDomNodeList *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QDomNodeList& )__qt_arg__1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNodeList::size() const
QTD_EXTERN QTD_EXPORT int qtd_QDomNodeList_size_const
(void* __this_nativeId)
{
    QDomNodeList *__qt_this = (QDomNodeList *) __this_nativeId;
    int  __qt_return_value = __qt_this->size();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QDomNodeList_QTypeInfo_isComplex() { return (bool) QTypeInfo<QDomNodeList>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomNodeList_QTypeInfo_isStatic() { return (bool) QTypeInfo<QDomNodeList>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomNodeList_QTypeInfo_isLarge() { return (bool) QTypeInfo<QDomNodeList>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomNodeList_QTypeInfo_isPointer() { return (bool) QTypeInfo<QDomNodeList>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomNodeList_QTypeInfo_isDummy() { return (bool) QTypeInfo<QDomNodeList>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QDomNodeList_placed_copy(void* orig, void* place) {
    const QDomNodeList&  __qt_orig = (const QDomNodeList& ) *(QDomNodeList *)orig;
    QDomNodeList *result = new (place) QDomNodeList (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QDomNodeList_native_copy(void* orig) {
    const QDomNodeList&  __qt_orig = (const QDomNodeList& ) *(QDomNodeList *)orig;
    QDomNodeList *result = new QDomNodeList (__qt_orig);
    return result;
}

