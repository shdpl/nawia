#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qvector.h>
#include <qxmlstream.h>

#include "QXmlStreamReader_shell.h"
#include <iostream>
#include <qxmlstream.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_delete(void* nativeId)
{
    delete (QXmlStreamReader_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_destroy(void* nativeId)
{
    call_destructor((QXmlStreamReader_QtDShell*)nativeId);
}

QXmlStreamReader_QtDShell::QXmlStreamReader_QtDShell()
    : QXmlStreamReader()
{
}

QXmlStreamReader_QtDShell::QXmlStreamReader_QtDShell(QIODevice*  device0)
    : QXmlStreamReader(device0)
{
}

QXmlStreamReader_QtDShell::QXmlStreamReader_QtDShell(const QByteArray&  data0)
    : QXmlStreamReader(data0)
{
}

QXmlStreamReader_QtDShell::QXmlStreamReader_QtDShell(const QString&  data0)
    : QXmlStreamReader(data0)
{
}

QXmlStreamReader_QtDShell::~QXmlStreamReader_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QXmlStreamReader::QXmlStreamReader()
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamReader_QXmlStreamReader
(void *d_ptr)
{
    QXmlStreamReader_QtDShell *__qt_this = new QXmlStreamReader_QtDShell();
    return (void *) __qt_this;

}

// QXmlStreamReader::QXmlStreamReader(QIODevice * device)
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamReader_QXmlStreamReader_QIODevice
(void *d_ptr,
 void* device0)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    QXmlStreamReader_QtDShell *__qt_this = new QXmlStreamReader_QtDShell((QIODevice* )__qt_device0);
    return (void *) __qt_this;

}

// QXmlStreamReader::QXmlStreamReader(const QByteArray & data)
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamReader_QXmlStreamReader_QByteArray
(void *d_ptr,
 void* data0)
{
    const QByteArray&  __qt_data0 = (const QByteArray& ) *(QByteArray *)data0;
    QXmlStreamReader_QtDShell *__qt_this = new QXmlStreamReader_QtDShell((const QByteArray& )__qt_data0);
    return (void *) __qt_this;

}

// QXmlStreamReader::QXmlStreamReader(const QString & data)
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamReader_QXmlStreamReader_string
(void *d_ptr,
 DArray data0)
{
    QString __qt_data0 = QString::fromUtf8((const char *)data0.ptr, data0.length);
    QXmlStreamReader_QtDShell *__qt_this = new QXmlStreamReader_QtDShell((const QString& )__qt_data0);
    return (void *) __qt_this;

}

// QXmlStreamReader::addData(const QByteArray & data)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_addData_QByteArray
(void* __this_nativeId,
 void* data0)
{
    const QByteArray&  __qt_data0 = (const QByteArray& ) *(QByteArray *)data0;
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    __qt_this->addData((const QByteArray& )__qt_data0);

}

// QXmlStreamReader::addData(const QString & data)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_addData_string
(void* __this_nativeId,
 DArray data0)
{
    QString __qt_data0 = QString::fromUtf8((const char *)data0.ptr, data0.length);
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    __qt_this->addData((const QString& )__qt_data0);

}

// QXmlStreamReader::addExtraNamespaceDeclaration(const QXmlStreamNamespaceDeclaration & extraNamespaceDeclaraction)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_addExtraNamespaceDeclaration_QXmlStreamNamespaceDeclaration
(void* __this_nativeId,
 void* extraNamespaceDeclaraction0)
{
    const QXmlStreamNamespaceDeclaration&  __qt_extraNamespaceDeclaraction0 = (const QXmlStreamNamespaceDeclaration& ) *(QXmlStreamNamespaceDeclaration *)extraNamespaceDeclaraction0;
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    __qt_this->addExtraNamespaceDeclaration((const QXmlStreamNamespaceDeclaration& )__qt_extraNamespaceDeclaraction0);

}

// QXmlStreamReader::addExtraNamespaceDeclarations(const QVector<QXmlStreamNamespaceDeclaration > & extraNamespaceDeclaractions)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_addExtraNamespaceDeclarations_QVector
(void* __this_nativeId,
 DArray* extraNamespaceDeclaractions0)
{
    QVector<QXmlStreamNamespaceDeclaration > __qt_extraNamespaceDeclaractions0;
    __qt_extraNamespaceDeclaractions0.reserve(extraNamespaceDeclaractions0->length);
    for (int i=0; i<extraNamespaceDeclaractions0->length; ++i) {
        QXmlStreamNamespaceDeclaration* __d_element;
        qtd_get_QXmlStreamNamespaceDeclaration_from_array(extraNamespaceDeclaractions0, i, &__d_element);
        QXmlStreamNamespaceDeclaration  __qt_element = (QXmlStreamNamespaceDeclaration ) *(QXmlStreamNamespaceDeclaration *)__d_element;
        __qt_extraNamespaceDeclaractions0 << __qt_element;
    }
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    __qt_this->addExtraNamespaceDeclarations((const QVector<QXmlStreamNamespaceDeclaration >& )__qt_extraNamespaceDeclaractions0);

}

// QXmlStreamReader::atEnd() const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamReader_atEnd_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->atEnd();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::attributes() const
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamReader_attributes_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    QXmlStreamAttributes  __qt_return_value = __qt_this->attributes();

    void* __d_return_value = (void*) new QXmlStreamAttributes(__qt_return_value);

    return __d_return_value;
}

// QXmlStreamReader::characterOffset() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QXmlStreamReader_characterOffset_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->characterOffset();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::clear()
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_clear
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    __qt_this->clear();

}

// QXmlStreamReader::columnNumber() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QXmlStreamReader_columnNumber_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->columnNumber();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::device() const
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamReader_device_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    QIODevice*  __qt_return_value = __qt_this->device();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::documentEncoding() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_documentEncoding_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->documentEncoding();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamReader::documentVersion() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_documentVersion_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->documentVersion();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamReader::dtdName() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_dtdName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->dtdName();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamReader::dtdPublicId() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_dtdPublicId_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->dtdPublicId();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamReader::dtdSystemId() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_dtdSystemId_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->dtdSystemId();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamReader::entityDeclarations() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_entityDeclarations_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    QVector<QXmlStreamEntityDeclaration >  __qt_return_value = __qt_this->entityDeclarations();


    qtd_allocate_QXmlStreamEntityDeclaration_array(__d_return_value, __qt_return_value.size());
    QVector<QXmlStreamEntityDeclaration > ::const_iterator __qt_return_value_end_it = __qt_return_value.constEnd();
    int i___qt_return_value = 0;
    for (QVector<QXmlStreamEntityDeclaration > ::const_iterator __qt_return_value_it = __qt_return_value.constBegin(); __qt_return_value_it != __qt_return_value_end_it; ++__qt_return_value_it) {
        QXmlStreamEntityDeclaration  __qt_tmp = *__qt_return_value_it;
        void* __java_tmp = (void*) new QXmlStreamEntityDeclaration(__qt_tmp);
        qtd_assign_QXmlStreamEntityDeclaration_array_element(__d_return_value, i___qt_return_value, __java_tmp);
        ++i___qt_return_value;
    }

}

// QXmlStreamReader::entityResolver() const
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamReader_entityResolver_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    QXmlStreamEntityResolver*  __qt_return_value = __qt_this->entityResolver();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::error() const
QTD_EXTERN QTD_EXPORT int qtd_QXmlStreamReader_error_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->error();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::errorString() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_errorString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->errorString();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlStreamReader::hasError() const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamReader_hasError_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasError();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::isCDATA() const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamReader_isCDATA_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isCDATA();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::isCharacters() const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamReader_isCharacters_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isCharacters();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::isComment() const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamReader_isComment_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isComment();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::isDTD() const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamReader_isDTD_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isDTD();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::isEndDocument() const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamReader_isEndDocument_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEndDocument();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::isEndElement() const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamReader_isEndElement_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEndElement();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::isEntityReference() const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamReader_isEntityReference_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEntityReference();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::isProcessingInstruction() const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamReader_isProcessingInstruction_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isProcessingInstruction();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::isStandaloneDocument() const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamReader_isStandaloneDocument_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isStandaloneDocument();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::isStartDocument() const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamReader_isStartDocument_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isStartDocument();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::isStartElement() const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamReader_isStartElement_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isStartElement();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::isWhitespace() const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamReader_isWhitespace_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isWhitespace();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::lineNumber() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QXmlStreamReader_lineNumber_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->lineNumber();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::name() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_name_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->name();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamReader::namespaceDeclarations() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_namespaceDeclarations_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    QVector<QXmlStreamNamespaceDeclaration >  __qt_return_value = __qt_this->namespaceDeclarations();


    qtd_allocate_QXmlStreamNamespaceDeclaration_array(__d_return_value, __qt_return_value.size());
    QVector<QXmlStreamNamespaceDeclaration > ::const_iterator __qt_return_value_end_it = __qt_return_value.constEnd();
    int i___qt_return_value = 0;
    for (QVector<QXmlStreamNamespaceDeclaration > ::const_iterator __qt_return_value_it = __qt_return_value.constBegin(); __qt_return_value_it != __qt_return_value_end_it; ++__qt_return_value_it) {
        QXmlStreamNamespaceDeclaration  __qt_tmp = *__qt_return_value_it;
        void* __java_tmp = (void*) new QXmlStreamNamespaceDeclaration(__qt_tmp);
        qtd_assign_QXmlStreamNamespaceDeclaration_array_element(__d_return_value, i___qt_return_value, __java_tmp);
        ++i___qt_return_value;
    }

}

// QXmlStreamReader::namespaceProcessing() const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamReader_namespaceProcessing_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->namespaceProcessing();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::namespaceUri() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_namespaceUri_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->namespaceUri();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamReader::notationDeclarations() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_notationDeclarations_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    QVector<QXmlStreamNotationDeclaration >  __qt_return_value = __qt_this->notationDeclarations();


    qtd_allocate_QXmlStreamNotationDeclaration_array(__d_return_value, __qt_return_value.size());
    QVector<QXmlStreamNotationDeclaration > ::const_iterator __qt_return_value_end_it = __qt_return_value.constEnd();
    int i___qt_return_value = 0;
    for (QVector<QXmlStreamNotationDeclaration > ::const_iterator __qt_return_value_it = __qt_return_value.constBegin(); __qt_return_value_it != __qt_return_value_end_it; ++__qt_return_value_it) {
        QXmlStreamNotationDeclaration  __qt_tmp = *__qt_return_value_it;
        void* __java_tmp = (void*) new QXmlStreamNotationDeclaration(__qt_tmp);
        qtd_assign_QXmlStreamNotationDeclaration_array_element(__d_return_value, i___qt_return_value, __java_tmp);
        ++i___qt_return_value;
    }

}

// QXmlStreamReader::prefix() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_prefix_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->prefix();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamReader::processingInstructionData() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_processingInstructionData_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->processingInstructionData();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamReader::processingInstructionTarget() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_processingInstructionTarget_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->processingInstructionTarget();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamReader::qualifiedName() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_qualifiedName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->qualifiedName();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamReader::raiseError(const QString & message)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_raiseError_string
(void* __this_nativeId,
 DArray message0)
{
    QString __qt_message0 = QString::fromUtf8((const char *)message0.ptr, message0.length);
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    __qt_this->raiseError((const QString& )__qt_message0);

}

// QXmlStreamReader::readElementText()
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_readElementText
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->readElementText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlStreamReader::readNext()
QTD_EXTERN QTD_EXPORT int qtd_QXmlStreamReader_readNext
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->readNext();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::readNextStartElement()
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamReader_readNextStartElement
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->readNextStartElement();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamReader::setDevice(QIODevice * device)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_setDevice_QIODevice
(void* __this_nativeId,
 void* device0)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    __qt_this->setDevice((QIODevice* )__qt_device0);

}

// QXmlStreamReader::setEntityResolver(QXmlStreamEntityResolver * resolver)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_setEntityResolver_QXmlStreamEntityResolver
(void* __this_nativeId,
 void* resolver0)
{
    QXmlStreamEntityResolver*  __qt_resolver0 = (QXmlStreamEntityResolver* ) resolver0;
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    __qt_this->setEntityResolver((QXmlStreamEntityResolver* )__qt_resolver0);

}

// QXmlStreamReader::setNamespaceProcessing(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_setNamespaceProcessing_bool
(void* __this_nativeId,
 bool arg__1)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    __qt_this->setNamespaceProcessing((bool )arg__1);

}

// QXmlStreamReader::skipCurrentElement()
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_skipCurrentElement
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    __qt_this->skipCurrentElement();

}

// QXmlStreamReader::text() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_text_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    QStringRef  __qt_return_value = __qt_this->text();

    const QString *str_ref = __qt_return_value.string();
    if(str_ref)
        qtd_toUtf8(str_ref->utf16(), str_ref->size(), __d_return_value);
    else {
        QString empty_str;
        qtd_toUtf8(empty_str.utf16(), empty_str.size(), __d_return_value);
    }

}

// QXmlStreamReader::tokenString() const
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamReader_tokenString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->tokenString();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QXmlStreamReader::tokenType() const
QTD_EXTERN QTD_EXPORT int qtd_QXmlStreamReader_tokenType_const
(void* __this_nativeId)
{
    QXmlStreamReader_QtDShell *__qt_this = (QXmlStreamReader_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->tokenType();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


