#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

#include <iostream>
#include <qdom.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QDomElement_delete(void* nativeId)
{
    delete (QDomElement*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDomElement_destroy(void* nativeId)
{
    call_destructor((QDomElement*)nativeId);
}

// ---externC---
// QDomElement::QDomElement()
QTD_EXTERN QTD_EXPORT void* qtd_QDomElement_QDomElement
()
{
    QDomElement *__qt_this = new QDomElement();
    return (void *) __qt_this;

}

// QDomElement::QDomElement(const QDomElement & x)
QTD_EXTERN QTD_EXPORT void* qtd_QDomElement_QDomElement_QDomElement
(void* x0)
{
    const QDomElement&  __qt_x0 = (const QDomElement& ) *(QDomElement *)x0;
    QDomElement *__qt_this = new QDomElement((const QDomElement& )__qt_x0);
    return (void *) __qt_this;

}

// QDomElement::attribute(const QString & name, const QString & defValue) const
QTD_EXTERN QTD_EXPORT void qtd_QDomElement_attribute_string_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray name0,
 DArray defValue1)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QString __qt_defValue1 = QString::fromUtf8((const char *)defValue1.ptr, defValue1.length);
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    QString  __qt_return_value = __qt_this->attribute((const QString& )__qt_name0, (const QString& )__qt_defValue1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDomElement::attributeNS(const QString nsURI, const QString & localName, const QString & defValue) const
QTD_EXTERN QTD_EXPORT void qtd_QDomElement_attributeNS_string_string_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray nsURI0,
 DArray localName1,
 DArray defValue2)
{
    QString __qt_nsURI0 = QString::fromUtf8((const char *)nsURI0.ptr, nsURI0.length);
    QString __qt_localName1 = QString::fromUtf8((const char *)localName1.ptr, localName1.length);
    QString __qt_defValue2 = QString::fromUtf8((const char *)defValue2.ptr, defValue2.length);
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    QString  __qt_return_value = __qt_this->attributeNS((const QString )__qt_nsURI0, (const QString& )__qt_localName1, (const QString& )__qt_defValue2);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDomElement::attributeNode(const QString & name)
QTD_EXTERN QTD_EXPORT void* qtd_QDomElement_attributeNode_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    QDomAttr  __qt_return_value = __qt_this->attributeNode((const QString& )__qt_name0);

    void* __d_return_value = (void*) new QDomAttr(__qt_return_value);

    return __d_return_value;
}

// QDomElement::attributeNodeNS(const QString & nsURI, const QString & localName)
QTD_EXTERN QTD_EXPORT void* qtd_QDomElement_attributeNodeNS_string_string
(void* __this_nativeId,
 DArray nsURI0,
 DArray localName1)
{
    QString __qt_nsURI0 = QString::fromUtf8((const char *)nsURI0.ptr, nsURI0.length);
    QString __qt_localName1 = QString::fromUtf8((const char *)localName1.ptr, localName1.length);
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    QDomAttr  __qt_return_value = __qt_this->attributeNodeNS((const QString& )__qt_nsURI0, (const QString& )__qt_localName1);

    void* __d_return_value = (void*) new QDomAttr(__qt_return_value);

    return __d_return_value;
}

// QDomElement::attributes() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomElement_attributes_const
(void* __this_nativeId)
{
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    QDomNamedNodeMap  __qt_return_value = __qt_this->attributes();

    void* __d_return_value = (void*) new QDomNamedNodeMap(__qt_return_value);

    return __d_return_value;
}

// QDomElement::elementsByTagName(const QString & tagname) const
QTD_EXTERN QTD_EXPORT void* qtd_QDomElement_elementsByTagName_string_const
(void* __this_nativeId,
 DArray tagname0)
{
    QString __qt_tagname0 = QString::fromUtf8((const char *)tagname0.ptr, tagname0.length);
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    QDomNodeList  __qt_return_value = __qt_this->elementsByTagName((const QString& )__qt_tagname0);

    void* __d_return_value = (void*) new QDomNodeList(__qt_return_value);

    return __d_return_value;
}

// QDomElement::elementsByTagNameNS(const QString & nsURI, const QString & localName) const
QTD_EXTERN QTD_EXPORT void* qtd_QDomElement_elementsByTagNameNS_string_string_const
(void* __this_nativeId,
 DArray nsURI0,
 DArray localName1)
{
    QString __qt_nsURI0 = QString::fromUtf8((const char *)nsURI0.ptr, nsURI0.length);
    QString __qt_localName1 = QString::fromUtf8((const char *)localName1.ptr, localName1.length);
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    QDomNodeList  __qt_return_value = __qt_this->elementsByTagNameNS((const QString& )__qt_nsURI0, (const QString& )__qt_localName1);

    void* __d_return_value = (void*) new QDomNodeList(__qt_return_value);

    return __d_return_value;
}

// QDomElement::hasAttribute(const QString & name) const
QTD_EXTERN QTD_EXPORT bool qtd_QDomElement_hasAttribute_string_const
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasAttribute((const QString& )__qt_name0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomElement::hasAttributeNS(const QString & nsURI, const QString & localName) const
QTD_EXTERN QTD_EXPORT bool qtd_QDomElement_hasAttributeNS_string_string_const
(void* __this_nativeId,
 DArray nsURI0,
 DArray localName1)
{
    QString __qt_nsURI0 = QString::fromUtf8((const char *)nsURI0.ptr, nsURI0.length);
    QString __qt_localName1 = QString::fromUtf8((const char *)localName1.ptr, localName1.length);
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasAttributeNS((const QString& )__qt_nsURI0, (const QString& )__qt_localName1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomElement::removeAttribute(const QString & name)
QTD_EXTERN QTD_EXPORT void qtd_QDomElement_removeAttribute_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    __qt_this->removeAttribute((const QString& )__qt_name0);

}

// QDomElement::removeAttributeNS(const QString & nsURI, const QString & localName)
QTD_EXTERN QTD_EXPORT void qtd_QDomElement_removeAttributeNS_string_string
(void* __this_nativeId,
 DArray nsURI0,
 DArray localName1)
{
    QString __qt_nsURI0 = QString::fromUtf8((const char *)nsURI0.ptr, nsURI0.length);
    QString __qt_localName1 = QString::fromUtf8((const char *)localName1.ptr, localName1.length);
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    __qt_this->removeAttributeNS((const QString& )__qt_nsURI0, (const QString& )__qt_localName1);

}

// QDomElement::removeAttributeNode(const QDomAttr & oldAttr)
QTD_EXTERN QTD_EXPORT void* qtd_QDomElement_removeAttributeNode_QDomAttr
(void* __this_nativeId,
 void* oldAttr0)
{
    const QDomAttr&  __qt_oldAttr0 = (const QDomAttr& ) *(QDomAttr *)oldAttr0;
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    QDomAttr  __qt_return_value = __qt_this->removeAttributeNode((const QDomAttr& )__qt_oldAttr0);

    void* __d_return_value = (void*) new QDomAttr(__qt_return_value);

    return __d_return_value;
}

// QDomElement::setAttribute(const QString & name, const QString & value)
QTD_EXTERN QTD_EXPORT void qtd_QDomElement_setAttribute_string_string
(void* __this_nativeId,
 DArray name0,
 DArray value1)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QString __qt_value1 = QString::fromUtf8((const char *)value1.ptr, value1.length);
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    __qt_this->setAttribute((const QString& )__qt_name0, (const QString& )__qt_value1);

}

// QDomElement::setAttribute(const QString & name, double value)
QTD_EXTERN QTD_EXPORT void qtd_QDomElement_setAttribute_string_double
(void* __this_nativeId,
 DArray name0,
 double value1)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    __qt_this->setAttribute((const QString& )__qt_name0, (double )value1);

}

// QDomElement::setAttribute(const QString & name, float value)
QTD_EXTERN QTD_EXPORT void qtd_QDomElement_setAttribute_string_float
(void* __this_nativeId,
 DArray name0,
 float value1)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    __qt_this->setAttribute((const QString& )__qt_name0, (float )value1);

}

// QDomElement::setAttribute(const QString & name, int value)
QTD_EXTERN QTD_EXPORT void qtd_QDomElement_setAttribute_string_int
(void* __this_nativeId,
 DArray name0,
 int value1)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    __qt_this->setAttribute((const QString& )__qt_name0, (int )value1);

}

// QDomElement::setAttributeNS(const QString nsURI, const QString & qName, const QString & value)
QTD_EXTERN QTD_EXPORT void qtd_QDomElement_setAttributeNS_string_string_string
(void* __this_nativeId,
 DArray nsURI0,
 DArray qName1,
 DArray value2)
{
    QString __qt_nsURI0 = QString::fromUtf8((const char *)nsURI0.ptr, nsURI0.length);
    QString __qt_qName1 = QString::fromUtf8((const char *)qName1.ptr, qName1.length);
    QString __qt_value2 = QString::fromUtf8((const char *)value2.ptr, value2.length);
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    __qt_this->setAttributeNS((const QString )__qt_nsURI0, (const QString& )__qt_qName1, (const QString& )__qt_value2);

}

// QDomElement::setAttributeNS(const QString nsURI, const QString & qName, double value)
QTD_EXTERN QTD_EXPORT void qtd_QDomElement_setAttributeNS_string_string_double
(void* __this_nativeId,
 DArray nsURI0,
 DArray qName1,
 double value2)
{
    QString __qt_nsURI0 = QString::fromUtf8((const char *)nsURI0.ptr, nsURI0.length);
    QString __qt_qName1 = QString::fromUtf8((const char *)qName1.ptr, qName1.length);
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    __qt_this->setAttributeNS((const QString )__qt_nsURI0, (const QString& )__qt_qName1, (double )value2);

}

// QDomElement::setAttributeNS(const QString nsURI, const QString & qName, int value)
QTD_EXTERN QTD_EXPORT void qtd_QDomElement_setAttributeNS_string_string_int
(void* __this_nativeId,
 DArray nsURI0,
 DArray qName1,
 int value2)
{
    QString __qt_nsURI0 = QString::fromUtf8((const char *)nsURI0.ptr, nsURI0.length);
    QString __qt_qName1 = QString::fromUtf8((const char *)qName1.ptr, qName1.length);
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    __qt_this->setAttributeNS((const QString )__qt_nsURI0, (const QString& )__qt_qName1, (int )value2);

}

// QDomElement::setAttributeNode(const QDomAttr & newAttr)
QTD_EXTERN QTD_EXPORT void* qtd_QDomElement_setAttributeNode_QDomAttr
(void* __this_nativeId,
 void* newAttr0)
{
    const QDomAttr&  __qt_newAttr0 = (const QDomAttr& ) *(QDomAttr *)newAttr0;
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    QDomAttr  __qt_return_value = __qt_this->setAttributeNode((const QDomAttr& )__qt_newAttr0);

    void* __d_return_value = (void*) new QDomAttr(__qt_return_value);

    return __d_return_value;
}

// QDomElement::setAttributeNodeNS(const QDomAttr & newAttr)
QTD_EXTERN QTD_EXPORT void* qtd_QDomElement_setAttributeNodeNS_QDomAttr
(void* __this_nativeId,
 void* newAttr0)
{
    const QDomAttr&  __qt_newAttr0 = (const QDomAttr& ) *(QDomAttr *)newAttr0;
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    QDomAttr  __qt_return_value = __qt_this->setAttributeNodeNS((const QDomAttr& )__qt_newAttr0);

    void* __d_return_value = (void*) new QDomAttr(__qt_return_value);

    return __d_return_value;
}

// QDomElement::setTagName(const QString & name)
QTD_EXTERN QTD_EXPORT void qtd_QDomElement_setTagName_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    __qt_this->setTagName((const QString& )__qt_name0);

}

// QDomElement::tagName() const
QTD_EXTERN QTD_EXPORT void qtd_QDomElement_tagName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    QString  __qt_return_value = __qt_this->tagName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDomElement::text() const
QTD_EXTERN QTD_EXPORT void qtd_QDomElement_text_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDomElement *__qt_this = (QDomElement *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QDomElement_QTypeInfo_isComplex() { return (bool) QTypeInfo<QDomElement>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomElement_QTypeInfo_isStatic() { return (bool) QTypeInfo<QDomElement>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomElement_QTypeInfo_isLarge() { return (bool) QTypeInfo<QDomElement>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomElement_QTypeInfo_isPointer() { return (bool) QTypeInfo<QDomElement>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomElement_QTypeInfo_isDummy() { return (bool) QTypeInfo<QDomElement>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QDomElement_placed_copy(void* orig, void* place) {
    const QDomElement&  __qt_orig = (const QDomElement& ) *(QDomElement *)orig;
    QDomElement *result = new (place) QDomElement (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QDomElement_native_copy(void* orig) {
    const QDomElement&  __qt_orig = (const QDomElement& ) *(QDomElement *)orig;
    QDomElement *result = new QDomElement (__qt_orig);
    return result;
}

