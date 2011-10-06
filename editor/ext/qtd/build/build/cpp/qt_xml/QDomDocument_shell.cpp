#include <QVariant>
#include <qbytearray.h>
#include <qdom.h>
#include <qiodevice.h>
#include <qtextstream.h>
#include <qxml.h>

#include <iostream>
#include <qdom.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QDomDocument_delete(void* nativeId)
{
    delete (QDomDocument*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDomDocument_destroy(void* nativeId)
{
    call_destructor((QDomDocument*)nativeId);
}

// ---externC---
// QDomDocument::QDomDocument()
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_QDomDocument
()
{
    QDomDocument *__qt_this = new QDomDocument();
    return (void *) __qt_this;

}

// QDomDocument::QDomDocument(const QDomDocument & x)
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_QDomDocument_QDomDocument
(void* x0)
{
    const QDomDocument&  __qt_x0 = (const QDomDocument& ) *(QDomDocument *)x0;
    QDomDocument *__qt_this = new QDomDocument((const QDomDocument& )__qt_x0);
    return (void *) __qt_this;

}

// QDomDocument::QDomDocument(const QDomDocumentType & doctype)
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_QDomDocument_QDomDocumentType
(void* doctype0)
{
    const QDomDocumentType&  __qt_doctype0 = (const QDomDocumentType& ) *(QDomDocumentType *)doctype0;
    QDomDocument *__qt_this = new QDomDocument((const QDomDocumentType& )__qt_doctype0);
    return (void *) __qt_this;

}

// QDomDocument::QDomDocument(const QString & name)
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_QDomDocument_string
(DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QDomDocument *__qt_this = new QDomDocument((const QString& )__qt_name0);
    return (void *) __qt_this;

}

// QDomDocument::createAttribute(const QString & name)
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_createAttribute_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    QDomAttr  __qt_return_value = __qt_this->createAttribute((const QString& )__qt_name0);

    void* __d_return_value = (void*) new QDomAttr(__qt_return_value);

    return __d_return_value;
}

// QDomDocument::createAttributeNS(const QString & nsURI, const QString & qName)
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_createAttributeNS_string_string
(void* __this_nativeId,
 DArray nsURI0,
 DArray qName1)
{
    QString __qt_nsURI0 = QString::fromUtf8((const char *)nsURI0.ptr, nsURI0.length);
    QString __qt_qName1 = QString::fromUtf8((const char *)qName1.ptr, qName1.length);
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    QDomAttr  __qt_return_value = __qt_this->createAttributeNS((const QString& )__qt_nsURI0, (const QString& )__qt_qName1);

    void* __d_return_value = (void*) new QDomAttr(__qt_return_value);

    return __d_return_value;
}

// QDomDocument::createCDATASection(const QString & data)
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_createCDATASection_string
(void* __this_nativeId,
 DArray data0)
{
    QString __qt_data0 = QString::fromUtf8((const char *)data0.ptr, data0.length);
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    QDomCDATASection  __qt_return_value = __qt_this->createCDATASection((const QString& )__qt_data0);

    void* __d_return_value = (void*) new QDomCDATASection(__qt_return_value);

    return __d_return_value;
}

// QDomDocument::createComment(const QString & data)
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_createComment_string
(void* __this_nativeId,
 DArray data0)
{
    QString __qt_data0 = QString::fromUtf8((const char *)data0.ptr, data0.length);
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    QDomComment  __qt_return_value = __qt_this->createComment((const QString& )__qt_data0);

    void* __d_return_value = (void*) new QDomComment(__qt_return_value);

    return __d_return_value;
}

// QDomDocument::createDocumentFragment()
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_createDocumentFragment
(void* __this_nativeId)
{
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    QDomDocumentFragment  __qt_return_value = __qt_this->createDocumentFragment();

    void* __d_return_value = (void*) new QDomDocumentFragment(__qt_return_value);

    return __d_return_value;
}

// QDomDocument::createElement(const QString & tagName)
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_createElement_string
(void* __this_nativeId,
 DArray tagName0)
{
    QString __qt_tagName0 = QString::fromUtf8((const char *)tagName0.ptr, tagName0.length);
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    QDomElement  __qt_return_value = __qt_this->createElement((const QString& )__qt_tagName0);

    void* __d_return_value = (void*) new QDomElement(__qt_return_value);

    return __d_return_value;
}

// QDomDocument::createElementNS(const QString & nsURI, const QString & qName)
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_createElementNS_string_string
(void* __this_nativeId,
 DArray nsURI0,
 DArray qName1)
{
    QString __qt_nsURI0 = QString::fromUtf8((const char *)nsURI0.ptr, nsURI0.length);
    QString __qt_qName1 = QString::fromUtf8((const char *)qName1.ptr, qName1.length);
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    QDomElement  __qt_return_value = __qt_this->createElementNS((const QString& )__qt_nsURI0, (const QString& )__qt_qName1);

    void* __d_return_value = (void*) new QDomElement(__qt_return_value);

    return __d_return_value;
}

// QDomDocument::createEntityReference(const QString & name)
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_createEntityReference_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    QDomEntityReference  __qt_return_value = __qt_this->createEntityReference((const QString& )__qt_name0);

    void* __d_return_value = (void*) new QDomEntityReference(__qt_return_value);

    return __d_return_value;
}

// QDomDocument::createProcessingInstruction(const QString & target, const QString & data)
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_createProcessingInstruction_string_string
(void* __this_nativeId,
 DArray target0,
 DArray data1)
{
    QString __qt_target0 = QString::fromUtf8((const char *)target0.ptr, target0.length);
    QString __qt_data1 = QString::fromUtf8((const char *)data1.ptr, data1.length);
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    QDomProcessingInstruction  __qt_return_value = __qt_this->createProcessingInstruction((const QString& )__qt_target0, (const QString& )__qt_data1);

    void* __d_return_value = (void*) new QDomProcessingInstruction(__qt_return_value);

    return __d_return_value;
}

// QDomDocument::createTextNode(const QString & data)
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_createTextNode_string
(void* __this_nativeId,
 DArray data0)
{
    QString __qt_data0 = QString::fromUtf8((const char *)data0.ptr, data0.length);
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    QDomText  __qt_return_value = __qt_this->createTextNode((const QString& )__qt_data0);

    void* __d_return_value = (void*) new QDomText(__qt_return_value);

    return __d_return_value;
}

// QDomDocument::doctype() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_doctype_const
(void* __this_nativeId)
{
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    QDomDocumentType  __qt_return_value = __qt_this->doctype();

    void* __d_return_value = (void*) new QDomDocumentType(__qt_return_value);

    return __d_return_value;
}

// QDomDocument::documentElement() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_documentElement_const
(void* __this_nativeId)
{
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    QDomElement  __qt_return_value = __qt_this->documentElement();

    void* __d_return_value = (void*) new QDomElement(__qt_return_value);

    return __d_return_value;
}

// QDomDocument::elementById(const QString & elementId)
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_elementById_string
(void* __this_nativeId,
 DArray elementId0)
{
    QString __qt_elementId0 = QString::fromUtf8((const char *)elementId0.ptr, elementId0.length);
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    QDomElement  __qt_return_value = __qt_this->elementById((const QString& )__qt_elementId0);

    void* __d_return_value = (void*) new QDomElement(__qt_return_value);

    return __d_return_value;
}

// QDomDocument::elementsByTagName(const QString & tagname) const
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_elementsByTagName_string_const
(void* __this_nativeId,
 DArray tagname0)
{
    QString __qt_tagname0 = QString::fromUtf8((const char *)tagname0.ptr, tagname0.length);
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    QDomNodeList  __qt_return_value = __qt_this->elementsByTagName((const QString& )__qt_tagname0);

    void* __d_return_value = (void*) new QDomNodeList(__qt_return_value);

    return __d_return_value;
}

// QDomDocument::elementsByTagNameNS(const QString & nsURI, const QString & localName)
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_elementsByTagNameNS_string_string
(void* __this_nativeId,
 DArray nsURI0,
 DArray localName1)
{
    QString __qt_nsURI0 = QString::fromUtf8((const char *)nsURI0.ptr, nsURI0.length);
    QString __qt_localName1 = QString::fromUtf8((const char *)localName1.ptr, localName1.length);
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    QDomNodeList  __qt_return_value = __qt_this->elementsByTagNameNS((const QString& )__qt_nsURI0, (const QString& )__qt_localName1);

    void* __d_return_value = (void*) new QDomNodeList(__qt_return_value);

    return __d_return_value;
}

// QDomDocument::implementation() const
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_implementation_const
(void* __this_nativeId)
{
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    QDomImplementation  __qt_return_value = __qt_this->implementation();

    void* __d_return_value = (void*) new QDomImplementation(__qt_return_value);

    return __d_return_value;
}

// QDomDocument::importNode(const QDomNode & importedNode, bool deep)
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_importNode_QDomNode_bool
(void* __this_nativeId,
 void* importedNode0,
 bool deep1)
{
    const QDomNode&  __qt_importedNode0 = (const QDomNode& ) *(QDomNode *)importedNode0;
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    QDomNode  __qt_return_value = __qt_this->importNode((const QDomNode& )__qt_importedNode0, (bool )deep1);

    void* __d_return_value = (void*) new QDomNode(__qt_return_value);

    return __d_return_value;
}

// QDomDocument::setContent(QIODevice * dev, QString * errorMsg, int * errorLine, int * errorColumn)
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocument_setContent_QIODevice_nativepointerstring_nativepointerint_nativepointerint
(void* __this_nativeId,
 void* dev0,
 DArray errorMsg1,
 int* errorLine2,
 int* errorColumn3)
{
    QIODevice*  __qt_dev0 = (QIODevice* ) dev0;
    QString __qt_errorMsg1 = QString::fromUtf8((const char *)errorMsg1.ptr, errorMsg1.length);
    int*  __qt_errorLine2 = (int* ) errorLine2;
    int*  __qt_errorColumn3 = (int* ) errorColumn3;
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setContent((QIODevice* )__qt_dev0, (QString* )&__qt_errorMsg1, (int* )__qt_errorLine2, (int* )__qt_errorColumn3);

    qtd_toUtf8(__qt_errorMsg1.utf16(), __qt_errorMsg1.size(), &errorMsg1);
    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomDocument::setContent(QIODevice * dev, bool namespaceProcessing, QString * errorMsg, int * errorLine, int * errorColumn)
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocument_setContent_QIODevice_bool_nativepointerstring_nativepointerint_nativepointerint
(void* __this_nativeId,
 void* dev0,
 bool namespaceProcessing1,
 DArray errorMsg2,
 int* errorLine3,
 int* errorColumn4)
{
    QIODevice*  __qt_dev0 = (QIODevice* ) dev0;
    QString __qt_errorMsg2 = QString::fromUtf8((const char *)errorMsg2.ptr, errorMsg2.length);
    int*  __qt_errorLine3 = (int* ) errorLine3;
    int*  __qt_errorColumn4 = (int* ) errorColumn4;
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setContent((QIODevice* )__qt_dev0, (bool )namespaceProcessing1, (QString* )&__qt_errorMsg2, (int* )__qt_errorLine3, (int* )__qt_errorColumn4);

    qtd_toUtf8(__qt_errorMsg2.utf16(), __qt_errorMsg2.size(), &errorMsg2);
    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomDocument::setContent(QXmlInputSource * source, QXmlReader * reader, QString * errorMsg, int * errorLine, int * errorColumn)
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocument_setContent_QXmlInputSource_QXmlReader_nativepointerstring_nativepointerint_nativepointerint
(void* __this_nativeId,
 void* source0,
 void* reader1,
 DArray errorMsg2,
 int* errorLine3,
 int* errorColumn4)
{
    QXmlInputSource*  __qt_source0 = (QXmlInputSource* ) source0;
    QXmlReader*  __qt_reader1 = (QXmlReader* ) reader1;
    QString __qt_errorMsg2 = QString::fromUtf8((const char *)errorMsg2.ptr, errorMsg2.length);
    int*  __qt_errorLine3 = (int* ) errorLine3;
    int*  __qt_errorColumn4 = (int* ) errorColumn4;
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setContent((QXmlInputSource* )__qt_source0, (QXmlReader* )__qt_reader1, (QString* )&__qt_errorMsg2, (int* )__qt_errorLine3, (int* )__qt_errorColumn4);

    qtd_toUtf8(__qt_errorMsg2.utf16(), __qt_errorMsg2.size(), &errorMsg2);
    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomDocument::setContent(QXmlInputSource * source, bool namespaceProcessing, QString * errorMsg, int * errorLine, int * errorColumn)
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocument_setContent_QXmlInputSource_bool_nativepointerstring_nativepointerint_nativepointerint
(void* __this_nativeId,
 void* source0,
 bool namespaceProcessing1,
 DArray errorMsg2,
 int* errorLine3,
 int* errorColumn4)
{
    QXmlInputSource*  __qt_source0 = (QXmlInputSource* ) source0;
    QString __qt_errorMsg2 = QString::fromUtf8((const char *)errorMsg2.ptr, errorMsg2.length);
    int*  __qt_errorLine3 = (int* ) errorLine3;
    int*  __qt_errorColumn4 = (int* ) errorColumn4;
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setContent((QXmlInputSource* )__qt_source0, (bool )namespaceProcessing1, (QString* )&__qt_errorMsg2, (int* )__qt_errorLine3, (int* )__qt_errorColumn4);

    qtd_toUtf8(__qt_errorMsg2.utf16(), __qt_errorMsg2.size(), &errorMsg2);
    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomDocument::setContent(const QByteArray & text, QString * errorMsg, int * errorLine, int * errorColumn)
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocument_setContent_QByteArray_nativepointerstring_nativepointerint_nativepointerint
(void* __this_nativeId,
 void* text0,
 DArray errorMsg1,
 int* errorLine2,
 int* errorColumn3)
{
    const QByteArray&  __qt_text0 = (const QByteArray& ) *(QByteArray *)text0;
    QString __qt_errorMsg1 = QString::fromUtf8((const char *)errorMsg1.ptr, errorMsg1.length);
    int*  __qt_errorLine2 = (int* ) errorLine2;
    int*  __qt_errorColumn3 = (int* ) errorColumn3;
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setContent((const QByteArray& )__qt_text0, (QString* )&__qt_errorMsg1, (int* )__qt_errorLine2, (int* )__qt_errorColumn3);

    qtd_toUtf8(__qt_errorMsg1.utf16(), __qt_errorMsg1.size(), &errorMsg1);
    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomDocument::setContent(const QByteArray & text, bool namespaceProcessing, QString * errorMsg, int * errorLine, int * errorColumn)
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocument_setContent_QByteArray_bool_nativepointerstring_nativepointerint_nativepointerint
(void* __this_nativeId,
 void* text0,
 bool namespaceProcessing1,
 DArray errorMsg2,
 int* errorLine3,
 int* errorColumn4)
{
    const QByteArray&  __qt_text0 = (const QByteArray& ) *(QByteArray *)text0;
    QString __qt_errorMsg2 = QString::fromUtf8((const char *)errorMsg2.ptr, errorMsg2.length);
    int*  __qt_errorLine3 = (int* ) errorLine3;
    int*  __qt_errorColumn4 = (int* ) errorColumn4;
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setContent((const QByteArray& )__qt_text0, (bool )namespaceProcessing1, (QString* )&__qt_errorMsg2, (int* )__qt_errorLine3, (int* )__qt_errorColumn4);

    qtd_toUtf8(__qt_errorMsg2.utf16(), __qt_errorMsg2.size(), &errorMsg2);
    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomDocument::setContent(const QString & text, QString * errorMsg, int * errorLine, int * errorColumn)
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocument_setContent_string_nativepointerstring_nativepointerint_nativepointerint
(void* __this_nativeId,
 DArray text0,
 DArray errorMsg1,
 int* errorLine2,
 int* errorColumn3)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QString __qt_errorMsg1 = QString::fromUtf8((const char *)errorMsg1.ptr, errorMsg1.length);
    int*  __qt_errorLine2 = (int* ) errorLine2;
    int*  __qt_errorColumn3 = (int* ) errorColumn3;
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setContent((const QString& )__qt_text0, (QString* )&__qt_errorMsg1, (int* )__qt_errorLine2, (int* )__qt_errorColumn3);

    qtd_toUtf8(__qt_errorMsg1.utf16(), __qt_errorMsg1.size(), &errorMsg1);
    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomDocument::setContent(const QString & text, bool namespaceProcessing, QString * errorMsg, int * errorLine, int * errorColumn)
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocument_setContent_string_bool_nativepointerstring_nativepointerint_nativepointerint
(void* __this_nativeId,
 DArray text0,
 bool namespaceProcessing1,
 DArray errorMsg2,
 int* errorLine3,
 int* errorColumn4)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QString __qt_errorMsg2 = QString::fromUtf8((const char *)errorMsg2.ptr, errorMsg2.length);
    int*  __qt_errorLine3 = (int* ) errorLine3;
    int*  __qt_errorColumn4 = (int* ) errorColumn4;
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setContent((const QString& )__qt_text0, (bool )namespaceProcessing1, (QString* )&__qt_errorMsg2, (int* )__qt_errorLine3, (int* )__qt_errorColumn4);

    qtd_toUtf8(__qt_errorMsg2.utf16(), __qt_errorMsg2.size(), &errorMsg2);
    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDomDocument::toByteArray(int arg__1) const
QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_toByteArray_int_const
(void* __this_nativeId,
 int arg__1)
{
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->toByteArray((int )arg__1);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QDomDocument::toString(int arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QDomDocument_toString_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int arg__1)
{
    QDomDocument *__qt_this = (QDomDocument *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toString((int )arg__1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocument_QTypeInfo_isComplex() { return (bool) QTypeInfo<QDomDocument>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocument_QTypeInfo_isStatic() { return (bool) QTypeInfo<QDomDocument>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocument_QTypeInfo_isLarge() { return (bool) QTypeInfo<QDomDocument>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocument_QTypeInfo_isPointer() { return (bool) QTypeInfo<QDomDocument>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QDomDocument_QTypeInfo_isDummy() { return (bool) QTypeInfo<QDomDocument>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QDomDocument_placed_copy(void* orig, void* place) {
    const QDomDocument&  __qt_orig = (const QDomDocument& ) *(QDomDocument *)orig;
    QDomDocument *result = new (place) QDomDocument (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QDomDocument_native_copy(void* orig) {
    const QDomDocument&  __qt_orig = (const QDomDocument& ) *(QDomDocument *)orig;
    QDomDocument *result = new QDomDocument (__qt_orig);
    return result;
}

