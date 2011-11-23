#include <QVariant>
#include <qdom.h>

#include <iostream>
#include <qdom.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QDomNamedNodeMap_delete(void* nativeId)
{
    delete (QDomNamedNodeMap*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDomNamedNodeMap_destroy(void* nativeId)
{
    call_destructor((QDomNamedNodeMap*)nativeId);
}

// ---externC---
// QDomNamedNodeMap::QDomNamedNodeMap()
QTD_EXTERN QTD_EXPORT void* qtd_QDomNamedNodeMap_QDomNamedNodeMap
()
{
    QDomNamedNodeMap *__qt_this = new QDomNamedNodeMap();
    return (void *) __qt_this;

}

// QDomNamedNodeMap::QDomNamedNodeMap(const QDomNamedNodeMap & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QDomNamedNodeMap_QDomNamedNodeMap_QDomNamedNodeMap
(void* arg__1)
{
    const QDomNamedNodeMap&  __qt_arg__1 = (const QDomNamedNodeMap& ) *(QDomNamedNodeMap *)arg__1;
    QDomNamedNodeMap *__qt_this = new QDomNamedNodeMap((const QDomNamedNodeMap& )__qt_arg__1);
    return (void *) __qt_this;

}

// QDomNamedNodeMap::contains(const QString & name) const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNamedNodeMap_contains_string_const
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QDomNamedNodeMap *__qt_this = (QDomNamedNodeMap *) __this_nativeId;
    bool  __qt_return_value = __qt_this->contains((const QString& )__qt_name0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNamedNodeMap::count() const
QTD_EXTERN QTD_EXPORT int qtd_QDomNamedNodeMap_count_const
(void* __this_nativeId)
{
    QDomNamedNodeMap *__qt_this = (QDomNamedNodeMap *) __this_nativeId;
    int  __qt_return_value = __qt_this->count();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNamedNodeMap::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNamedNodeMap_isEmpty_const
(void* __this_nativeId)
{
    QDomNamedNodeMap *__qt_this = (QDomNamedNodeMap *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEmpty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNamedNodeMap::item(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNamedNodeMap_item_int_const
(void* __this_nativeId,
 int index0)
{
    QDomNamedNodeMap *__qt_this = (QDomNamedNodeMap *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->item((int )index0);

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomNamedNodeMap::length() const
QTD_EXTERN QTD_EXPORT uint qtd_QDomNamedNodeMap_length_const
(void* __this_nativeId)
{
    QDomNamedNodeMap *__qt_this = (QDomNamedNodeMap *) __this_nativeId;
    uint  __qt_return_value = __qt_this->length();

    uint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNamedNodeMap::namedItem(const QString & name) const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNamedNodeMap_namedItem_string_const
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QDomNamedNodeMap *__qt_this = (QDomNamedNodeMap *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->namedItem((const QString& )__qt_name0);

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomNamedNodeMap::namedItemNS(const QString & nsURI, const QString & localName) const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNamedNodeMap_namedItemNS_string_string_const
(void* __this_nativeId,
 DArray nsURI0,
 DArray localName1)
{
    QString __qt_nsURI0 = QString::fromUtf8((const char *)nsURI0.ptr, nsURI0.length);
    QString __qt_localName1 = QString::fromUtf8((const char *)localName1.ptr, localName1.length);
    QDomNamedNodeMap *__qt_this = (QDomNamedNodeMap *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->namedItemNS((const QString& )__qt_nsURI0, (const QString& )__qt_localName1);

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomNamedNodeMap::operator==(const QDomNamedNodeMap & arg__1) const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNamedNodeMap_operator_equal_QDomNamedNodeMap_const
(void* __this_nativeId,
 void* arg__1)
{
    const QDomNamedNodeMap&  __qt_arg__1 = (const QDomNamedNodeMap& ) *(QDomNamedNodeMap *)arg__1;
    QDomNamedNodeMap *__qt_this = (QDomNamedNodeMap *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QDomNamedNodeMap& )__qt_arg__1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNamedNodeMap::removeNamedItem(const QString & name)
QTD_EXTERN QTD_EXPORT void* qtd_QDomNamedNodeMap_removeNamedItem_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QDomNamedNodeMap *__qt_this = (QDomNamedNodeMap *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->removeNamedItem((const QString& )__qt_name0);

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomNamedNodeMap::removeNamedItemNS(const QString & nsURI, const QString & localName)
QTD_EXTERN QTD_EXPORT void* qtd_QDomNamedNodeMap_removeNamedItemNS_string_string
(void* __this_nativeId,
 DArray nsURI0,
 DArray localName1)
{
    QString __qt_nsURI0 = QString::fromUtf8((const char *)nsURI0.ptr, nsURI0.length);
    QString __qt_localName1 = QString::fromUtf8((const char *)localName1.ptr, localName1.length);
    QDomNamedNodeMap *__qt_this = (QDomNamedNodeMap *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->removeNamedItemNS((const QString& )__qt_nsURI0, (const QString& )__qt_localName1);

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomNamedNodeMap::setNamedItem(const QDomNode & newNode)
QTD_EXTERN QTD_EXPORT void* qtd_QDomNamedNodeMap_setNamedItem_QDomNode
(void* __this_nativeId,
 void* newNode0)
{
    const QDomNode&  __qt_newNode0 = (const QDomNode& ) *(QDomNode *)newNode0;
    QDomNamedNodeMap *__qt_this = (QDomNamedNodeMap *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->setNamedItem((const QDomNode& )__qt_newNode0);

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomNamedNodeMap::setNamedItemNS(const QDomNode & newNode)
QTD_EXTERN QTD_EXPORT void* qtd_QDomNamedNodeMap_setNamedItemNS_QDomNode
(void* __this_nativeId,
 void* newNode0)
{
    const QDomNode&  __qt_newNode0 = (const QDomNode& ) *(QDomNode *)newNode0;
    QDomNamedNodeMap *__qt_this = (QDomNamedNodeMap *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->setNamedItemNS((const QDomNode& )__qt_newNode0);

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomNamedNodeMap::size() const
QTD_EXTERN QTD_EXPORT int qtd_QDomNamedNodeMap_size_const
(void* __this_nativeId)
{
    QDomNamedNodeMap *__qt_this = (QDomNamedNodeMap *) __this_nativeId;
    int  __qt_return_value = __qt_this->size();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QDomNamedNodeMap_QTypeInfo_isComplex() { return (bool) QTypeInfo<QDomNamedNodeMap>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomNamedNodeMap_QTypeInfo_isStatic() { return (bool) QTypeInfo<QDomNamedNodeMap>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomNamedNodeMap_QTypeInfo_isLarge() { return (bool) QTypeInfo<QDomNamedNodeMap>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomNamedNodeMap_QTypeInfo_isPointer() { return (bool) QTypeInfo<QDomNamedNodeMap>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomNamedNodeMap_QTypeInfo_isDummy() { return (bool) QTypeInfo<QDomNamedNodeMap>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QDomNamedNodeMap_placed_copy(void* orig, void* place) {
    const QDomNamedNodeMap&  __qt_orig = (const QDomNamedNodeMap& ) *(QDomNamedNodeMap *)orig;
    QDomNamedNodeMap *result = new (place) QDomNamedNodeMap (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QDomNamedNodeMap_native_copy(void* orig) {
    const QDomNamedNodeMap&  __qt_orig = (const QDomNamedNodeMap& ) *(QDomNamedNodeMap *)orig;
    QDomNamedNodeMap *result = new QDomNamedNodeMap (__qt_orig);
    return result;
}

