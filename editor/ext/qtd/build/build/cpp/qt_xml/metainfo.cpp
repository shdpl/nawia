#include "metainfo.h"
#include <QMetaType>
#include <QString>
#include <QLatin1String>
#include <QHash>
#include <QReadWriteLock>
#include <QReadLocker>
#include <QWriteLocker>
#include <qtjambi_cache.h>
#include <qtjambi_core.h>

#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qxml.h>
#include <qxml.h>
#include <qxml.h>
#include <qxml.h>
#include <qxml.h>
#include <qxml.h>
#include <qxml.h>
#include <qxml.h>
#include <qxml.h>
#include <qxml.h>
#include <qxml.h>
#include <qxml.h>
#include <qxml.h>
#include <qxml.h>
#include <qxmlstream.h>
#include <qxmlstream.h>
#include <qxmlstream.h>
#include <qxmlstream.h>
#include <qxmlstream.h>
#include <qxmlstream.h>
#include <qxmlstream.h>

void destructor_qt_xml_QXmlContentHandler_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QXmlContentHandler *>(ptr);
}

void destructor_qt_xml_QXmlDTDHandler_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QXmlDTDHandler *>(ptr);
}

void destructor_qt_xml_QXmlDeclHandler_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QXmlDeclHandler *>(ptr);
}

void destructor_qt_xml_QXmlDefaultHandler(void *ptr)
{
    delete reinterpret_cast<QXmlDefaultHandler *>(ptr);
}

void destructor_qt_xml_QXmlEntityResolver_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QXmlEntityResolver *>(ptr);
}

void destructor_qt_xml_QXmlErrorHandler_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QXmlErrorHandler *>(ptr);
}

void destructor_qt_xml_QXmlInputSource(void *ptr)
{
    delete reinterpret_cast<QXmlInputSource *>(ptr);
}

void destructor_qt_xml_QXmlLexicalHandler_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QXmlLexicalHandler *>(ptr);
}

void destructor_qt_xml_QXmlLocator_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QXmlLocator *>(ptr);
}

void destructor_qt_xml_QXmlReader_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QXmlReader *>(ptr);
}

void destructor_qt_xml_QXmlSimpleReader(void *ptr)
{
    delete reinterpret_cast<QXmlSimpleReader *>(ptr);
}

void destructor_qt_xml_QXmlStreamReader(void *ptr)
{
    delete reinterpret_cast<QXmlStreamReader *>(ptr);
}

void destructor_qt_xml_QXmlStreamWriter(void *ptr)
{
    delete reinterpret_cast<QXmlStreamWriter *>(ptr);
}

static int sns_count = 0;
static const char **qtNames = 0;
static const char **javaFunctionNames = 0;
static const char **javaObjectNames = 0;
static const char **javaSignatures = 0;
static int enum_count = 5;
static const char *enumJavaNames[] = {
    "qt/xml/QXmlStreamReader$TokenType",
    "qt/xml/QXmlStreamReader$Error",
    "qt/xml/QDomNode$EncodingPolicy",
    "qt/xml/QDomNode$NodeType",
    "qt/xml/QDomImplementation$InvalidDataPolicy",
};

static const char *enumCppNames[] = {
    "QXmlStreamReader::TokenType",
    "QXmlStreamReader::Error",
    "QDomNode::EncodingPolicy",
    "QDomNode::NodeType",
    "QDomImplementation::InvalidDataPolicy"
};

void __metainfo_init_qt_xml()
{
    registerQtToJava("unsigned char", "ubyte");
    registerQtToJava("int", "int");
    registerJavaToQt("int", "int");
    registerQtToJava("QString", "java/lang/string");
    registerJavaToQt("java/lang/string", "QString");
    registerQtToJava("QStringRef", "java/lang/string");
    registerQtToJava("QLatin1String", "java/lang/string");
    registerQtToJava("GLint", "int");
    registerQtToJava("ulong", "ulong");
    registerQtToJava("QBool", "bool");
    registerQtToJava("QChar", "char");
    registerJavaToQt("char", "QChar");
    registerQtToJava("signed char", "byte");
    registerQtToJava("float", "float");
    registerJavaToQt("float", "float");
    registerQtToJava("double", "double");
    registerJavaToQt("double", "double");
    registerQtToJava("signed int", "int");
    registerQtToJava("unsigned int", "uint");
    registerQtToJava("Qt::HANDLE", "long");
    registerQtToJava("size_t", "size_t");
    registerJavaToQt("size_t", "size_t");
    qRegisterMetaType<size_t>("size_t");
    registerQtToJava("long", "int");
    registerQtToJava("quintptr", "quintptr");
    registerQtToJava("bool", "bool");
    registerJavaToQt("bool", "bool");
    registerQtToJava("qint64", "long");
    registerQtToJava("signed long", "int");
    registerQtToJava("unsigned short", "ushort");
    registerQtToJava("char", "char");
    registerJavaToQt("char", "char");
    registerQtToJava("unsigned __int64", "long");
    registerQtToJava("short", "short");
    registerJavaToQt("short", "short");
    registerQtToJava("QXmlStreamStringRef", "java/lang/string");
    registerQtToJava("uint", "uint");
    registerJavaToQt("uint", "uint");
    registerQtToJava("WId", "long");
    registerQtToJava("unsigned long long", "ulong");
    registerQtToJava("QLatin1Char", "char");
    registerQtToJava("jobject", "java.lang.Object");
    registerJavaToQt("java.lang.Object", "jobject");
    qRegisterMetaType<jobject>("jobject");
    registerQtToJava("__int64", "long");
    registerQtToJava("QVariant", "QVariant");
    registerJavaToQt("QVariant", "QVariant");
    registerQtToJava("GLenum", "int");
    registerQtToJava("QByteRef", "byte");
    registerQtToJava("unsigned long", "uint");
    registerQtToJava("signed short", "short");
    registerQtToJava("GLuint", "int");
    registerQtToJava("QBitRef", "bool");
    for (int i=0;i<sns_count; ++i) {
        registerQtToJava(qtNames[i], javaFunctionNames[i]);
        if (getQtName(javaObjectNames[i]).length() < QByteArray(qtNames[i]).size())
            registerJavaToQt(javaObjectNames[i], qtNames[i]);
        registerJavaSignature(qtNames[i], javaSignatures[i]);
    }
    for (int i=0;i<enum_count; ++i) {
        registerQtToJava(enumCppNames[i], enumJavaNames[i]);
        registerJavaToQt(enumJavaNames[i], enumCppNames[i]);
    }
    registerJavaToQt("qt/xml/IQXmlContentHandler", "QXmlContentHandler");
    registerJavaToQt("qt/xml/IQXmlDTDHandler", "QXmlDTDHandler");
    registerJavaToQt("qt/xml/IQXmlDeclHandler", "QXmlDeclHandler");
    registerJavaToQt("qt/xml/IQXmlEntityResolver", "QXmlEntityResolver");
    registerJavaToQt("qt/xml/IQXmlErrorHandler", "QXmlErrorHandler");
    registerJavaToQt("qt/xml/IQXmlLexicalHandler", "QXmlLexicalHandler");
    registerQtToJava("QDomAttr", "qt/xml/QDomAttr");
    registerJavaToQt("qt/xml/QDomAttr", "QDomAttr");
    qRegisterMetaType<QDomAttr>("QDomAttr");
    registerQtToJava("QDomCDATASection", "qt/xml/QDomCDATASection");
    registerJavaToQt("qt/xml/QDomCDATASection", "QDomCDATASection");
    qRegisterMetaType<QDomCDATASection>("QDomCDATASection");
    registerQtToJava("QDomCharacterData", "qt/xml/QDomCharacterData");
    registerJavaToQt("qt/xml/QDomCharacterData", "QDomCharacterData");
    qRegisterMetaType<QDomCharacterData>("QDomCharacterData");
    registerQtToJava("QDomComment", "qt/xml/QDomComment");
    registerJavaToQt("qt/xml/QDomComment", "QDomComment");
    qRegisterMetaType<QDomComment>("QDomComment");
    registerQtToJava("QDomDocument", "qt/xml/QDomDocument");
    registerJavaToQt("qt/xml/QDomDocument", "QDomDocument");
    qRegisterMetaType<QDomDocument>("QDomDocument");
    registerQtToJava("QDomDocumentFragment", "qt/xml/QDomDocumentFragment");
    registerJavaToQt("qt/xml/QDomDocumentFragment", "QDomDocumentFragment");
    qRegisterMetaType<QDomDocumentFragment>("QDomDocumentFragment");
    registerQtToJava("QDomDocumentType", "qt/xml/QDomDocumentType");
    registerJavaToQt("qt/xml/QDomDocumentType", "QDomDocumentType");
    qRegisterMetaType<QDomDocumentType>("QDomDocumentType");
    registerQtToJava("QDomElement", "qt/xml/QDomElement");
    registerJavaToQt("qt/xml/QDomElement", "QDomElement");
    qRegisterMetaType<QDomElement>("QDomElement");
    registerQtToJava("QDomEntity", "qt/xml/QDomEntity");
    registerJavaToQt("qt/xml/QDomEntity", "QDomEntity");
    qRegisterMetaType<QDomEntity>("QDomEntity");
    registerQtToJava("QDomEntityReference", "qt/xml/QDomEntityReference");
    registerJavaToQt("qt/xml/QDomEntityReference", "QDomEntityReference");
    qRegisterMetaType<QDomEntityReference>("QDomEntityReference");
    registerQtToJava("QDomImplementation", "qt/xml/QDomImplementation");
    registerJavaToQt("qt/xml/QDomImplementation", "QDomImplementation");
    qRegisterMetaType<QDomImplementation>("QDomImplementation");
    registerQtToJava("QDomNamedNodeMap", "qt/xml/QDomNamedNodeMap");
    registerJavaToQt("qt/xml/QDomNamedNodeMap", "QDomNamedNodeMap");
    qRegisterMetaType<QDomNamedNodeMap>("QDomNamedNodeMap");
    registerQtToJava("QDomNode", "qt/xml/QDomNode");
    registerJavaToQt("qt/xml/QDomNode", "QDomNode");
    qRegisterMetaType<QDomNode>("QDomNode");
    registerQtToJava("QDomNodeList", "qt/xml/QDomNodeList");
    registerJavaToQt("qt/xml/QDomNodeList", "QDomNodeList");
    qRegisterMetaType<QDomNodeList>("QDomNodeList");
    registerQtToJava("QDomNotation", "qt/xml/QDomNotation");
    registerJavaToQt("qt/xml/QDomNotation", "QDomNotation");
    qRegisterMetaType<QDomNotation>("QDomNotation");
    registerQtToJava("QDomProcessingInstruction", "qt/xml/QDomProcessingInstruction");
    registerJavaToQt("qt/xml/QDomProcessingInstruction", "QDomProcessingInstruction");
    qRegisterMetaType<QDomProcessingInstruction>("QDomProcessingInstruction");
    registerQtToJava("QDomText", "qt/xml/QDomText");
    registerJavaToQt("qt/xml/QDomText", "QDomText");
    qRegisterMetaType<QDomText>("QDomText");
    registerQtToJava("QXmlAttributes", "qt/xml/QXmlAttributes");
    registerJavaToQt("qt/xml/QXmlAttributes", "QXmlAttributes");
    qRegisterMetaType<QXmlAttributes>("QXmlAttributes");
    registerQtToJava("QXmlContentHandler", "qt/xml/QXmlContentHandler_ConcreteWrapper");
    registerJavaToQt("qt/xml/QXmlContentHandler_ConcreteWrapper", "QXmlContentHandler");
    registerDestructor("qt/xml/QXmlContentHandler_ConcreteWrapper", destructor_qt_xml_QXmlContentHandler_ConcreteWrapper);
    registerQtToJava("QXmlDTDHandler", "qt/xml/QXmlDTDHandler_ConcreteWrapper");
    registerJavaToQt("qt/xml/QXmlDTDHandler_ConcreteWrapper", "QXmlDTDHandler");
    registerDestructor("qt/xml/QXmlDTDHandler_ConcreteWrapper", destructor_qt_xml_QXmlDTDHandler_ConcreteWrapper);
    registerQtToJava("QXmlDeclHandler", "qt/xml/QXmlDeclHandler_ConcreteWrapper");
    registerJavaToQt("qt/xml/QXmlDeclHandler_ConcreteWrapper", "QXmlDeclHandler");
    registerDestructor("qt/xml/QXmlDeclHandler_ConcreteWrapper", destructor_qt_xml_QXmlDeclHandler_ConcreteWrapper);
    registerQtToJava("QXmlDefaultHandler", "qt/xml/QXmlDefaultHandler");
    registerJavaToQt("qt/xml/QXmlDefaultHandler", "QXmlDefaultHandler");
    registerDestructor("qt/xml/QXmlDefaultHandler", destructor_qt_xml_QXmlDefaultHandler);
    registerQtToJava("QXmlEntityResolver", "qt/xml/QXmlEntityResolver_ConcreteWrapper");
    registerJavaToQt("qt/xml/QXmlEntityResolver_ConcreteWrapper", "QXmlEntityResolver");
    registerDestructor("qt/xml/QXmlEntityResolver_ConcreteWrapper", destructor_qt_xml_QXmlEntityResolver_ConcreteWrapper);
    registerQtToJava("QXmlErrorHandler", "qt/xml/QXmlErrorHandler_ConcreteWrapper");
    registerJavaToQt("qt/xml/QXmlErrorHandler_ConcreteWrapper", "QXmlErrorHandler");
    registerDestructor("qt/xml/QXmlErrorHandler_ConcreteWrapper", destructor_qt_xml_QXmlErrorHandler_ConcreteWrapper);
    registerQtToJava("QXmlInputSource", "qt/xml/QXmlInputSource");
    registerJavaToQt("qt/xml/QXmlInputSource", "QXmlInputSource");
    registerDestructor("qt/xml/QXmlInputSource", destructor_qt_xml_QXmlInputSource);
    registerQtToJava("QXmlLexicalHandler", "qt/xml/QXmlLexicalHandler_ConcreteWrapper");
    registerJavaToQt("qt/xml/QXmlLexicalHandler_ConcreteWrapper", "QXmlLexicalHandler");
    registerDestructor("qt/xml/QXmlLexicalHandler_ConcreteWrapper", destructor_qt_xml_QXmlLexicalHandler_ConcreteWrapper);
    registerQtToJava("QXmlLocator", "qt/xml/QXmlLocator_ConcreteWrapper");
    registerJavaToQt("qt/xml/QXmlLocator_ConcreteWrapper", "QXmlLocator");
    registerDestructor("qt/xml/QXmlLocator_ConcreteWrapper", destructor_qt_xml_QXmlLocator_ConcreteWrapper);
    registerQtToJava("QXmlNamespaceSupport", "qt/xml/QXmlNamespaceSupport");
    registerJavaToQt("qt/xml/QXmlNamespaceSupport", "QXmlNamespaceSupport");
    qRegisterMetaType<QXmlNamespaceSupport>("QXmlNamespaceSupport");
    registerQtToJava("QXmlParseException", "qt/xml/QXmlParseException");
    registerJavaToQt("qt/xml/QXmlParseException", "QXmlParseException");
    qRegisterMetaType<QXmlParseException>("QXmlParseException");
    registerQtToJava("QXmlReader", "qt/xml/QXmlReader_ConcreteWrapper");
    registerJavaToQt("qt/xml/QXmlReader_ConcreteWrapper", "QXmlReader");
    registerDestructor("qt/xml/QXmlReader_ConcreteWrapper", destructor_qt_xml_QXmlReader_ConcreteWrapper);
    registerQtToJava("QXmlSimpleReader", "qt/xml/QXmlSimpleReader");
    registerJavaToQt("qt/xml/QXmlSimpleReader", "QXmlSimpleReader");
    registerDestructor("qt/xml/QXmlSimpleReader", destructor_qt_xml_QXmlSimpleReader);
    registerQtToJava("QXmlStreamAttribute", "qt/xml/QXmlStreamAttribute");
    registerJavaToQt("qt/xml/QXmlStreamAttribute", "QXmlStreamAttribute");
    qRegisterMetaType<QXmlStreamAttribute>("QXmlStreamAttribute");
    registerQtToJava("QXmlStreamAttributes", "qt/xml/QXmlStreamAttributes");
    registerJavaToQt("qt/xml/QXmlStreamAttributes", "QXmlStreamAttributes");
    qRegisterMetaType<QXmlStreamAttributes>("QXmlStreamAttributes");
    registerQtToJava("QXmlStreamEntityDeclaration", "qt/xml/QXmlStreamEntityDeclaration");
    registerJavaToQt("qt/xml/QXmlStreamEntityDeclaration", "QXmlStreamEntityDeclaration");
    qRegisterMetaType<QXmlStreamEntityDeclaration>("QXmlStreamEntityDeclaration");
    registerQtToJava("QXmlStreamNamespaceDeclaration", "qt/xml/QXmlStreamNamespaceDeclaration");
    registerJavaToQt("qt/xml/QXmlStreamNamespaceDeclaration", "QXmlStreamNamespaceDeclaration");
    qRegisterMetaType<QXmlStreamNamespaceDeclaration>("QXmlStreamNamespaceDeclaration");
    registerQtToJava("QXmlStreamNotationDeclaration", "qt/xml/QXmlStreamNotationDeclaration");
    registerJavaToQt("qt/xml/QXmlStreamNotationDeclaration", "QXmlStreamNotationDeclaration");
    qRegisterMetaType<QXmlStreamNotationDeclaration>("QXmlStreamNotationDeclaration");
    registerQtToJava("QXmlStreamReader", "qt/xml/QXmlStreamReader");
    registerJavaToQt("qt/xml/QXmlStreamReader", "QXmlStreamReader");
    registerDestructor("qt/xml/QXmlStreamReader", destructor_qt_xml_QXmlStreamReader);
    registerQtToJava("QXmlStreamWriter", "qt/xml/QXmlStreamWriter");
    registerJavaToQt("qt/xml/QXmlStreamWriter", "QXmlStreamWriter");
    registerDestructor("qt/xml/QXmlStreamWriter", destructor_qt_xml_QXmlStreamWriter);
}

