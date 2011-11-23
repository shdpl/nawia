#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qtextcodec.h>
#include <qxmlstream.h>

#include "QXmlStreamWriter_shell.h"
#include <iostream>
#include <qxmlstream.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_delete(void* nativeId)
{
    delete (QXmlStreamWriter_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_destroy(void* nativeId)
{
    call_destructor((QXmlStreamWriter_QtDShell*)nativeId);
}

QXmlStreamWriter_QtDShell::QXmlStreamWriter_QtDShell()
    : QXmlStreamWriter()
{
}

QXmlStreamWriter_QtDShell::QXmlStreamWriter_QtDShell(QByteArray*  array0)
    : QXmlStreamWriter(array0)
{
}

QXmlStreamWriter_QtDShell::QXmlStreamWriter_QtDShell(QIODevice*  device0)
    : QXmlStreamWriter(device0)
{
}

QXmlStreamWriter_QtDShell::~QXmlStreamWriter_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QXmlStreamWriter::QXmlStreamWriter()
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamWriter_QXmlStreamWriter
(void *d_ptr)
{
    QXmlStreamWriter_QtDShell *__qt_this = new QXmlStreamWriter_QtDShell();
    return (void *) __qt_this;

}

// QXmlStreamWriter::QXmlStreamWriter(QByteArray * array)
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamWriter_QXmlStreamWriter_nativepointerQByteArray
(void *d_ptr,
 void* array0)
{
    QByteArray*  __qt_array0 = (QByteArray* ) array0;
    QXmlStreamWriter_QtDShell *__qt_this = new QXmlStreamWriter_QtDShell((QByteArray* )__qt_array0);
    return (void *) __qt_this;

}

// QXmlStreamWriter::QXmlStreamWriter(QIODevice * device)
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamWriter_QXmlStreamWriter_QIODevice
(void *d_ptr,
 void* device0)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    QXmlStreamWriter_QtDShell *__qt_this = new QXmlStreamWriter_QtDShell((QIODevice* )__qt_device0);
    return (void *) __qt_this;

}

// QXmlStreamWriter::autoFormatting() const
QTD_EXTERN QTD_EXPORT bool qtd_QXmlStreamWriter_autoFormatting_const
(void* __this_nativeId)
{
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->autoFormatting();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamWriter::autoFormattingIndent() const
QTD_EXTERN QTD_EXPORT int qtd_QXmlStreamWriter_autoFormattingIndent_const
(void* __this_nativeId)
{
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->autoFormattingIndent();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlStreamWriter::codec() const
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamWriter_codec_const
(void* __this_nativeId)
{
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    QTextCodec*  __qt_return_value = __qt_this->codec();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QXmlStreamWriter::device() const
QTD_EXTERN QTD_EXPORT void* qtd_QXmlStreamWriter_device_const
(void* __this_nativeId)
{
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    QIODevice*  __qt_return_value = __qt_this->device();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QXmlStreamWriter::setAutoFormatting(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_setAutoFormatting_bool
(void* __this_nativeId,
 bool arg__1)
{
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->setAutoFormatting((bool )arg__1);

}

// QXmlStreamWriter::setAutoFormattingIndent(int spacesOrTabs)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_setAutoFormattingIndent_int
(void* __this_nativeId,
 int spacesOrTabs0)
{
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->setAutoFormattingIndent((int )spacesOrTabs0);

}

// QXmlStreamWriter::setCodec(QTextCodec * codec)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_setCodec_QTextCodec
(void* __this_nativeId,
 void* codec0)
{
    QTextCodec*  __qt_codec0 = (QTextCodec* ) codec0;
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->setCodec((QTextCodec* )__qt_codec0);

}

// QXmlStreamWriter::setCodec(const char * codecName)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_setCodec_nativepointerchar
(void* __this_nativeId,
 char* codecName0)
{
    const char*  __qt_codecName0 = (const char* ) codecName0;
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->setCodec((const char* )__qt_codecName0);

}

// QXmlStreamWriter::setDevice(QIODevice * device)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_setDevice_QIODevice
(void* __this_nativeId,
 void* device0)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->setDevice((QIODevice* )__qt_device0);

}

// QXmlStreamWriter::writeAttribute(const QString & namespaceUri, const QString & name, const QString & value)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeAttribute_string_string_string
(void* __this_nativeId,
 DArray namespaceUri0,
 DArray name1,
 DArray value2)
{
    QString __qt_namespaceUri0 = QString::fromUtf8((const char *)namespaceUri0.ptr, namespaceUri0.length);
    QString __qt_name1 = QString::fromUtf8((const char *)name1.ptr, name1.length);
    QString __qt_value2 = QString::fromUtf8((const char *)value2.ptr, value2.length);
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeAttribute((const QString& )__qt_namespaceUri0, (const QString& )__qt_name1, (const QString& )__qt_value2);

}

// QXmlStreamWriter::writeAttribute(const QString & qualifiedName, const QString & value)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeAttribute_string_string
(void* __this_nativeId,
 DArray qualifiedName0,
 DArray value1)
{
    QString __qt_qualifiedName0 = QString::fromUtf8((const char *)qualifiedName0.ptr, qualifiedName0.length);
    QString __qt_value1 = QString::fromUtf8((const char *)value1.ptr, value1.length);
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeAttribute((const QString& )__qt_qualifiedName0, (const QString& )__qt_value1);

}

// QXmlStreamWriter::writeAttribute(const QXmlStreamAttribute & attribute)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeAttribute_QXmlStreamAttribute
(void* __this_nativeId,
 void* attribute0)
{
    const QXmlStreamAttribute&  __qt_attribute0 = (const QXmlStreamAttribute& ) *(QXmlStreamAttribute *)attribute0;
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeAttribute((const QXmlStreamAttribute& )__qt_attribute0);

}

// QXmlStreamWriter::writeAttributes(const QXmlStreamAttributes & attributes)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeAttributes_QXmlStreamAttributes
(void* __this_nativeId,
 void* attributes0)
{
    const QXmlStreamAttributes&  __qt_attributes0 = (const QXmlStreamAttributes& ) *(QXmlStreamAttributes *)attributes0;
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeAttributes((const QXmlStreamAttributes& )__qt_attributes0);

}

// QXmlStreamWriter::writeCDATA(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeCDATA_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeCDATA((const QString& )__qt_text0);

}

// QXmlStreamWriter::writeCharacters(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeCharacters_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeCharacters((const QString& )__qt_text0);

}

// QXmlStreamWriter::writeComment(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeComment_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeComment((const QString& )__qt_text0);

}

// QXmlStreamWriter::writeCurrentToken(const QXmlStreamReader & reader)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeCurrentToken_QXmlStreamReader
(void* __this_nativeId,
 void* reader0)
{
    const QXmlStreamReader&  __qt_reader0 = (const QXmlStreamReader& ) * (QXmlStreamReader *) reader0;
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeCurrentToken((const QXmlStreamReader& )__qt_reader0);

}

// QXmlStreamWriter::writeDTD(const QString & dtd)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeDTD_string
(void* __this_nativeId,
 DArray dtd0)
{
    QString __qt_dtd0 = QString::fromUtf8((const char *)dtd0.ptr, dtd0.length);
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeDTD((const QString& )__qt_dtd0);

}

// QXmlStreamWriter::writeDefaultNamespace(const QString & namespaceUri)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeDefaultNamespace_string
(void* __this_nativeId,
 DArray namespaceUri0)
{
    QString __qt_namespaceUri0 = QString::fromUtf8((const char *)namespaceUri0.ptr, namespaceUri0.length);
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeDefaultNamespace((const QString& )__qt_namespaceUri0);

}

// QXmlStreamWriter::writeEmptyElement(const QString & namespaceUri, const QString & name)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeEmptyElement_string_string
(void* __this_nativeId,
 DArray namespaceUri0,
 DArray name1)
{
    QString __qt_namespaceUri0 = QString::fromUtf8((const char *)namespaceUri0.ptr, namespaceUri0.length);
    QString __qt_name1 = QString::fromUtf8((const char *)name1.ptr, name1.length);
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeEmptyElement((const QString& )__qt_namespaceUri0, (const QString& )__qt_name1);

}

// QXmlStreamWriter::writeEmptyElement(const QString & qualifiedName)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeEmptyElement_string
(void* __this_nativeId,
 DArray qualifiedName0)
{
    QString __qt_qualifiedName0 = QString::fromUtf8((const char *)qualifiedName0.ptr, qualifiedName0.length);
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeEmptyElement((const QString& )__qt_qualifiedName0);

}

// QXmlStreamWriter::writeEndDocument()
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeEndDocument
(void* __this_nativeId)
{
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeEndDocument();

}

// QXmlStreamWriter::writeEndElement()
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeEndElement
(void* __this_nativeId)
{
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeEndElement();

}

// QXmlStreamWriter::writeEntityReference(const QString & name)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeEntityReference_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeEntityReference((const QString& )__qt_name0);

}

// QXmlStreamWriter::writeNamespace(const QString & namespaceUri, const QString & prefix)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeNamespace_string_string
(void* __this_nativeId,
 DArray namespaceUri0,
 DArray prefix1)
{
    QString __qt_namespaceUri0 = QString::fromUtf8((const char *)namespaceUri0.ptr, namespaceUri0.length);
    QString __qt_prefix1 = QString::fromUtf8((const char *)prefix1.ptr, prefix1.length);
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeNamespace((const QString& )__qt_namespaceUri0, (const QString& )__qt_prefix1);

}

// QXmlStreamWriter::writeProcessingInstruction(const QString & target, const QString & data)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeProcessingInstruction_string_string
(void* __this_nativeId,
 DArray target0,
 DArray data1)
{
    QString __qt_target0 = QString::fromUtf8((const char *)target0.ptr, target0.length);
    QString __qt_data1 = QString::fromUtf8((const char *)data1.ptr, data1.length);
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeProcessingInstruction((const QString& )__qt_target0, (const QString& )__qt_data1);

}

// QXmlStreamWriter::writeStartDocument()
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeStartDocument
(void* __this_nativeId)
{
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeStartDocument();

}

// QXmlStreamWriter::writeStartDocument(const QString & version_)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeStartDocument_string
(void* __this_nativeId,
 DArray version0)
{
    QString __qt_version0 = QString::fromUtf8((const char *)version0.ptr, version0.length);
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeStartDocument((const QString& )__qt_version0);

}

// QXmlStreamWriter::writeStartDocument(const QString & version_, bool standalone)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeStartDocument_string_bool
(void* __this_nativeId,
 DArray version0,
 bool standalone1)
{
    QString __qt_version0 = QString::fromUtf8((const char *)version0.ptr, version0.length);
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeStartDocument((const QString& )__qt_version0, (bool )standalone1);

}

// QXmlStreamWriter::writeStartElement(const QString & namespaceUri, const QString & name)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeStartElement_string_string
(void* __this_nativeId,
 DArray namespaceUri0,
 DArray name1)
{
    QString __qt_namespaceUri0 = QString::fromUtf8((const char *)namespaceUri0.ptr, namespaceUri0.length);
    QString __qt_name1 = QString::fromUtf8((const char *)name1.ptr, name1.length);
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeStartElement((const QString& )__qt_namespaceUri0, (const QString& )__qt_name1);

}

// QXmlStreamWriter::writeStartElement(const QString & qualifiedName)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeStartElement_string
(void* __this_nativeId,
 DArray qualifiedName0)
{
    QString __qt_qualifiedName0 = QString::fromUtf8((const char *)qualifiedName0.ptr, qualifiedName0.length);
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeStartElement((const QString& )__qt_qualifiedName0);

}

// QXmlStreamWriter::writeTextElement(const QString & namespaceUri, const QString & name, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeTextElement_string_string_string
(void* __this_nativeId,
 DArray namespaceUri0,
 DArray name1,
 DArray text2)
{
    QString __qt_namespaceUri0 = QString::fromUtf8((const char *)namespaceUri0.ptr, namespaceUri0.length);
    QString __qt_name1 = QString::fromUtf8((const char *)name1.ptr, name1.length);
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeTextElement((const QString& )__qt_namespaceUri0, (const QString& )__qt_name1, (const QString& )__qt_text2);

}

// QXmlStreamWriter::writeTextElement(const QString & qualifiedName, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QXmlStreamWriter_writeTextElement_string_string
(void* __this_nativeId,
 DArray qualifiedName0,
 DArray text1)
{
    QString __qt_qualifiedName0 = QString::fromUtf8((const char *)qualifiedName0.ptr, qualifiedName0.length);
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QXmlStreamWriter_QtDShell *__qt_this = (QXmlStreamWriter_QtDShell *) __this_nativeId;
    __qt_this->writeTextElement((const QString& )__qt_qualifiedName0, (const QString& )__qt_text1);

}

// ---externC---end
// Field accessors


