#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

#include <iostream>
#include <qdom.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QDomNode_delete(void* nativeId)
{
    delete (QDomNode*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDomNode_destroy(void* nativeId)
{
    call_destructor((QDomNode*)nativeId);
}

// ---externC---
// QDomNode::QDomNode()
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_QDomNode
()
{
    QDomNode *__qt_this = new QDomNode();
    return (void *) __qt_this;

}

// QDomNode::QDomNode(const QDomNode & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_QDomNode_QDomNode
(void* arg__1)
{
    const QDomNode&  __qt_arg__1 = (const QDomNode& ) *(QDomNode *)arg__1;
    QDomNode *__qt_this = new QDomNode((const QDomNode& )__qt_arg__1);
    return (void *) __qt_this;

}

// QDomNode::appendChild(const QDomNode & newChild)
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_appendChild_QDomNode
(void* __this_nativeId,
 void* newChild0)
{
    const QDomNode&  __qt_newChild0 = (const QDomNode& ) *(QDomNode *)newChild0;
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->appendChild((const QDomNode& )__qt_newChild0);

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomNode::childNodes() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_childNodes_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomNodeList  __qt_return_value = __qt_this->childNodes();

    void* __d_return_value = (void*) new QDomNodeList(__qt_return_value);

    return __d_return_value;
}

// QDomNode::clear()
QTD_EXTERN QTD_EXPORT void qtd_QDomNode_clear
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    __qt_this->clear();

}

// QDomNode::cloneNode(bool deep) const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_cloneNode_bool_const
(void* __this_nativeId,
 bool deep0)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->cloneNode((bool )deep0);

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomNode::columnNumber() const
QTD_EXTERN QTD_EXPORT int qtd_QDomNode_columnNumber_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    int  __qt_return_value = __qt_this->columnNumber();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNode::firstChild() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_firstChild_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->firstChild();

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomNode::firstChildElement(const QString & tagName) const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_firstChildElement_string_const
(void* __this_nativeId,
 DArray tagName0)
{
    QString __qt_tagName0 = QString::fromUtf8((const char *)tagName0.ptr, tagName0.length);
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomElement  __qt_return_value = __qt_this->firstChildElement((const QString& )__qt_tagName0);

    void* __d_return_value = (void*) new QDomElement(__qt_return_value);

    return __d_return_value;
}

// QDomNode::hasAttributes() const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_hasAttributes_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasAttributes();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNode::hasChildNodes() const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_hasChildNodes_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasChildNodes();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNode::insertAfter(const QDomNode & newChild, const QDomNode & refChild)
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_insertAfter_QDomNode_QDomNode
(void* __this_nativeId,
 void* newChild0,
 void* refChild1)
{
    const QDomNode&  __qt_newChild0 = (const QDomNode& ) *(QDomNode *)newChild0;
    const QDomNode&  __qt_refChild1 = (const QDomNode& ) *(QDomNode *)refChild1;
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->insertAfter((const QDomNode& )__qt_newChild0, (const QDomNode& )__qt_refChild1);

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomNode::insertBefore(const QDomNode & newChild, const QDomNode & refChild)
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_insertBefore_QDomNode_QDomNode
(void* __this_nativeId,
 void* newChild0,
 void* refChild1)
{
    const QDomNode&  __qt_newChild0 = (const QDomNode& ) *(QDomNode *)newChild0;
    const QDomNode&  __qt_refChild1 = (const QDomNode& ) *(QDomNode *)refChild1;
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->insertBefore((const QDomNode& )__qt_newChild0, (const QDomNode& )__qt_refChild1);

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomNode::isAttr() const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_isAttr_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isAttr();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNode::isCDATASection() const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_isCDATASection_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isCDATASection();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNode::isCharacterData() const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_isCharacterData_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isCharacterData();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNode::isComment() const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_isComment_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isComment();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNode::isDocument() const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_isDocument_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isDocument();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNode::isDocumentFragment() const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_isDocumentFragment_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isDocumentFragment();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNode::isDocumentType() const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_isDocumentType_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isDocumentType();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNode::isElement() const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_isElement_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isElement();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNode::isEntity() const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_isEntity_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEntity();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNode::isEntityReference() const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_isEntityReference_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEntityReference();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNode::isNotation() const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_isNotation_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNotation();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNode::isNull() const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_isNull_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNull();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNode::isProcessingInstruction() const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_isProcessingInstruction_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isProcessingInstruction();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNode::isSupported(const QString & feature, const QString & version_) const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_isSupported_string_string_const
(void* __this_nativeId,
 DArray feature0,
 DArray version1)
{
    QString __qt_feature0 = QString::fromUtf8((const char *)feature0.ptr, feature0.length);
    QString __qt_version1 = QString::fromUtf8((const char *)version1.ptr, version1.length);
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSupported((const QString& )__qt_feature0, (const QString& )__qt_version1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNode::isText() const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_isText_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isText();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNode::lastChild() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_lastChild_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->lastChild();

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomNode::lastChildElement(const QString & tagName) const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_lastChildElement_string_const
(void* __this_nativeId,
 DArray tagName0)
{
    QString __qt_tagName0 = QString::fromUtf8((const char *)tagName0.ptr, tagName0.length);
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomElement  __qt_return_value = __qt_this->lastChildElement((const QString& )__qt_tagName0);

    void* __d_return_value = (void*) new QDomElement(__qt_return_value);

    return __d_return_value;
}

// QDomNode::lineNumber() const
QTD_EXTERN QTD_EXPORT int qtd_QDomNode_lineNumber_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    int  __qt_return_value = __qt_this->lineNumber();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNode::localName() const
QTD_EXTERN QTD_EXPORT void qtd_QDomNode_localName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QString  __qt_return_value = __qt_this->localName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDomNode::namedItem(const QString & name) const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_namedItem_string_const
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->namedItem((const QString& )__qt_name0);

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomNode::namespaceURI() const
QTD_EXTERN QTD_EXPORT void qtd_QDomNode_namespaceURI_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QString  __qt_return_value = __qt_this->namespaceURI();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDomNode::nextSibling() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_nextSibling_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->nextSibling();

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomNode::nextSiblingElement(const QString & taName) const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_nextSiblingElement_string_const
(void* __this_nativeId,
 DArray taName0)
{
    QString __qt_taName0 = QString::fromUtf8((const char *)taName0.ptr, taName0.length);
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomElement  __qt_return_value = __qt_this->nextSiblingElement((const QString& )__qt_taName0);

    void* __d_return_value = (void*) new QDomElement(__qt_return_value);

    return __d_return_value;
}

// QDomNode::nodeName() const
QTD_EXTERN QTD_EXPORT void qtd_QDomNode_nodeName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QString  __qt_return_value = __qt_this->nodeName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDomNode::nodeType() const
QTD_EXTERN QTD_EXPORT int qtd_QDomNode_nodeType_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    int  __qt_return_value = __qt_this->nodeType();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNode::nodeValue() const
QTD_EXTERN QTD_EXPORT void qtd_QDomNode_nodeValue_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QString  __qt_return_value = __qt_this->nodeValue();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDomNode::normalize()
QTD_EXTERN QTD_EXPORT void qtd_QDomNode_normalize
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    __qt_this->normalize();

}

// QDomNode::operator<<(QTextStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QDomNode_writeTo_QTextStream
(void* __this_nativeId,
 void* arg__1)
{
    QTextStream&  __qt_arg__1 = (QTextStream& ) * (QTextStream *) arg__1;
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QTextStream& )__qt_arg__1, *__qt_this);

}

// QDomNode::operator==(const QDomNode & arg__1) const
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_operator_equal_QDomNode_const
(void* __this_nativeId,
 void* arg__1)
{
    const QDomNode&  __qt_arg__1 = (const QDomNode& ) *(QDomNode *)arg__1;
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QDomNode& )__qt_arg__1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomNode::ownerDocument() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_ownerDocument_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomDocument  __qt_return_value = __qt_this->ownerDocument();

    void* __d_return_value = (void*) new QDomDocument(__qt_return_value);

    return __d_return_value;
}

// QDomNode::parentNode() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_parentNode_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->parentNode();

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomNode::prefix() const
QTD_EXTERN QTD_EXPORT void qtd_QDomNode_prefix_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QString  __qt_return_value = __qt_this->prefix();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDomNode::previousSibling() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_previousSibling_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->previousSibling();

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomNode::previousSiblingElement(const QString & tagName) const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_previousSiblingElement_string_const
(void* __this_nativeId,
 DArray tagName0)
{
    QString __qt_tagName0 = QString::fromUtf8((const char *)tagName0.ptr, tagName0.length);
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomElement  __qt_return_value = __qt_this->previousSiblingElement((const QString& )__qt_tagName0);

    void* __d_return_value = (void*) new QDomElement(__qt_return_value);

    return __d_return_value;
}

// QDomNode::removeChild(const QDomNode & oldChild)
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_removeChild_QDomNode
(void* __this_nativeId,
 void* oldChild0)
{
    const QDomNode&  __qt_oldChild0 = (const QDomNode& ) *(QDomNode *)oldChild0;
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->removeChild((const QDomNode& )__qt_oldChild0);

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomNode::replaceChild(const QDomNode & newChild, const QDomNode & oldChild)
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_replaceChild_QDomNode_QDomNode
(void* __this_nativeId,
 void* newChild0,
 void* oldChild1)
{
    const QDomNode&  __qt_newChild0 = (const QDomNode& ) *(QDomNode *)newChild0;
    const QDomNode&  __qt_oldChild1 = (const QDomNode& ) *(QDomNode *)oldChild1;
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->replaceChild((const QDomNode& )__qt_newChild0, (const QDomNode& )__qt_oldChild1);

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomNode::save(QTextStream & arg__1, int arg__2) const
QTD_EXTERN QTD_EXPORT void qtd_QDomNode_save_QTextStream_int_const
(void* __this_nativeId,
 void* arg__1,
 int arg__2)
{
    QTextStream&  __qt_arg__1 = (QTextStream& ) * (QTextStream *) arg__1;
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    __qt_this->save((QTextStream& )__qt_arg__1, (int )arg__2);

}

// QDomNode::save(QTextStream & arg__1, int arg__2, QDomNode::EncodingPolicy arg__3) const
QTD_EXTERN QTD_EXPORT void qtd_QDomNode_save_QTextStream_int_EncodingPolicy_const
(void* __this_nativeId,
 void* arg__1,
 int arg__2,
 int arg__3)
{
    QTextStream&  __qt_arg__1 = (QTextStream& ) * (QTextStream *) arg__1;
    QDomNode::EncodingPolicy __qt_arg__3 = (QDomNode::EncodingPolicy) arg__3;
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    __qt_this->save((QTextStream& )__qt_arg__1, (int )arg__2, (QDomNode::EncodingPolicy )__qt_arg__3);

}

// QDomNode::setNodeValue(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QDomNode_setNodeValue_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    __qt_this->setNodeValue((const QString& )__qt_arg__1);

}

// QDomNode::setPrefix(const QString & pre)
QTD_EXTERN QTD_EXPORT void qtd_QDomNode_setPrefix_string
(void* __this_nativeId,
 DArray pre0)
{
    QString __qt_pre0 = QString::fromUtf8((const char *)pre0.ptr, pre0.length);
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    __qt_this->setPrefix((const QString& )__qt_pre0);

}

// QDomNode::toAttr() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_toAttr_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomAttr  __qt_return_value = __qt_this->toAttr();

    void* __d_return_value = (void*) new QDomAttr(__qt_return_value);

    return __d_return_value;
}

// QDomNode::toCDATASection() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_toCDATASection_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomCDATASection  __qt_return_value = __qt_this->toCDATASection();

    void* __d_return_value = (void*) new QDomCDATASection(__qt_return_value);

    return __d_return_value;
}

// QDomNode::toCharacterData() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_toCharacterData_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomCharacterData  __qt_return_value = __qt_this->toCharacterData();

    void* __d_return_value = (void*) new QDomCharacterData(__qt_return_value);

    return __d_return_value;
}

// QDomNode::toComment() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_toComment_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomComment  __qt_return_value = __qt_this->toComment();

    void* __d_return_value = (void*) new QDomComment(__qt_return_value);

    return __d_return_value;
}

// QDomNode::toDocument() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_toDocument_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomDocument  __qt_return_value = __qt_this->toDocument();

    void* __d_return_value = (void*) new QDomDocument(__qt_return_value);

    return __d_return_value;
}

// QDomNode::toDocumentFragment() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_toDocumentFragment_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomDocumentFragment  __qt_return_value = __qt_this->toDocumentFragment();

    void* __d_return_value = (void*) new QDomDocumentFragment(__qt_return_value);

    return __d_return_value;
}

// QDomNode::toDocumentType() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_toDocumentType_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomDocumentType  __qt_return_value = __qt_this->toDocumentType();

    void* __d_return_value = (void*) new QDomDocumentType(__qt_return_value);

    return __d_return_value;
}

// QDomNode::toElement() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_toElement_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomElement  __qt_return_value = __qt_this->toElement();

    void* __d_return_value = (void*) new QDomElement(__qt_return_value);

    return __d_return_value;
}

// QDomNode::toEntity() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_toEntity_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomEntity  __qt_return_value = __qt_this->toEntity();

    void* __d_return_value = (void*) new QDomEntity(__qt_return_value);

    return __d_return_value;
}

// QDomNode::toEntityReference() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_toEntityReference_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomEntityReference  __qt_return_value = __qt_this->toEntityReference();

    void* __d_return_value = (void*) new QDomEntityReference(__qt_return_value);

    return __d_return_value;
}

// QDomNode::toNotation() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_toNotation_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomNotation  __qt_return_value = __qt_this->toNotation();

    void* __d_return_value = (void*) new QDomNotation(__qt_return_value);

    return __d_return_value;
}

// QDomNode::toProcessingInstruction() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_toProcessingInstruction_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomProcessingInstruction  __qt_return_value = __qt_this->toProcessingInstruction();

    void* __d_return_value = (void*) new QDomProcessingInstruction(__qt_return_value);

    return __d_return_value;
}

// QDomNode::toText() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_toText_const
(void* __this_nativeId)
{
    QDomNode *__qt_this = (QDomNode *) __this_nativeId;
    QDomText  __qt_return_value = __qt_this->toText();

    void* __d_return_value = (void*) new QDomText(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_QTypeInfo_isComplex() { return (bool) QTypeInfo<QDomNode>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_QTypeInfo_isStatic() { return (bool) QTypeInfo<QDomNode>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_QTypeInfo_isLarge() { return (bool) QTypeInfo<QDomNode>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_QTypeInfo_isPointer() { return (bool) QTypeInfo<QDomNode>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomNode_QTypeInfo_isDummy() { return (bool) QTypeInfo<QDomNode>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QDomNode_placed_copy(void* orig, void* place) {
    const QDomNode&  __qt_orig = (const QDomNode& ) *(QDomNode *)orig;
    QDomNode *result = new (place) QDomNode (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QDomNode_native_copy(void* orig) {
    const QDomNode&  __qt_orig = (const QDomNode& ) *(QDomNode *)orig;
    QDomNode *result = new QDomNode (__qt_orig);
    return result;
}

