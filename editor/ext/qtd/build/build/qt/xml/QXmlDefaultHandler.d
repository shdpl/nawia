module qt.xml.QXmlDefaultHandler;

public import qt.xml.QXmlDefaultHandler_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.xml.QXmlLexicalHandler;
public import qt.xml.QXmlLocator;
public import qt.xml.QXmlInputSource;
public import qt.xml.QXmlErrorHandler;
public import qt.xml.QXmlAttributes;
public import qt.xml.QXmlContentHandler;
public import qt.xml.QXmlDTDHandler;
public import qt.xml.QXmlParseException;
public import qt.xml.QXmlEntityResolver;
public import qt.xml.QXmlDeclHandler;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QXmlDefaultHandler : QtdObject, IQXmlContentHandler, IQXmlErrorHandler, IQXmlDTDHandler, IQXmlEntityResolver, IQXmlLexicalHandler, IQXmlDeclHandler
{

// Functions

    public this() {
        void* ret = qtd_QXmlDefaultHandler_QXmlDefaultHandler(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public bool attributeDecl(string eName, string aName, string type, string valueDefault, string value) {
        return qtd_QXmlDefaultHandler_attributeDecl_string_string_string_string_string(qtdNativeId, eName, aName, type, valueDefault, value);
    }

    public bool characters(string ch) {
        return qtd_QXmlDefaultHandler_characters_string(qtdNativeId, ch);
    }

    public bool comment(string ch) {
        return qtd_QXmlDefaultHandler_comment_string(qtdNativeId, ch);
    }

    public bool endCDATA() {
        return qtd_QXmlDefaultHandler_endCDATA(qtdNativeId);
    }

    public bool endDTD() {
        return qtd_QXmlDefaultHandler_endDTD(qtdNativeId);
    }

    public bool endDocument() {
        return qtd_QXmlDefaultHandler_endDocument(qtdNativeId);
    }

    public bool endElement(string namespaceURI, string localName, string qName) {
        return qtd_QXmlDefaultHandler_endElement_string_string_string(qtdNativeId, namespaceURI, localName, qName);
    }

    public bool endEntity(string name) {
        return qtd_QXmlDefaultHandler_endEntity_string(qtdNativeId, name);
    }

    public bool endPrefixMapping(string prefix) {
        return qtd_QXmlDefaultHandler_endPrefixMapping_string(qtdNativeId, prefix);
    }

    public bool error(const(QXmlParseException) exception) {
        return qtd_QXmlDefaultHandler_error_QXmlParseException(qtdNativeId, exception is null ? null : (cast(QXmlParseException)exception).qtdNativeId);
    }

    public string errorString() const {
        string res;
        qtd_QXmlDefaultHandler_errorString_const(qtdNativeId, &res);
        return res;
    }

    public bool externalEntityDecl(string name, string publicId, string systemId) {
        return qtd_QXmlDefaultHandler_externalEntityDecl_string_string_string(qtdNativeId, name, publicId, systemId);
    }

    public bool fatalError(const(QXmlParseException) exception) {
        return qtd_QXmlDefaultHandler_fatalError_QXmlParseException(qtdNativeId, exception is null ? null : (cast(QXmlParseException)exception).qtdNativeId);
    }

    public bool ignorableWhitespace(string ch) {
        return qtd_QXmlDefaultHandler_ignorableWhitespace_string(qtdNativeId, ch);
    }

    public bool internalEntityDecl(string name, string value) {
        return qtd_QXmlDefaultHandler_internalEntityDecl_string_string(qtdNativeId, name, value);
    }

    public bool notationDecl(string name, string publicId, string systemId) {
        return qtd_QXmlDefaultHandler_notationDecl_string_string_string(qtdNativeId, name, publicId, systemId);
    }

    public bool processingInstruction(string target, string data) {
        return qtd_QXmlDefaultHandler_processingInstruction_string_string(qtdNativeId, target, data);
    }

    public bool resolveEntity(string publicId, string systemId, QXmlInputSource ret) {
        return qtd_QXmlDefaultHandler_resolveEntity_string_string_QXmlInputSource(qtdNativeId, publicId, systemId, ret is null ? null : ret.qtdNativeId);
    }

    public void setDocumentLocator(QXmlLocator locator) {
        qtd_QXmlDefaultHandler_setDocumentLocator_QXmlLocator(qtdNativeId, locator is null ? null : locator.qtdNativeId);
    }

    public bool skippedEntity(string name) {
        return qtd_QXmlDefaultHandler_skippedEntity_string(qtdNativeId, name);
    }

    public bool startCDATA() {
        return qtd_QXmlDefaultHandler_startCDATA(qtdNativeId);
    }

    public bool startDTD(string name, string publicId, string systemId) {
        return qtd_QXmlDefaultHandler_startDTD_string_string_string(qtdNativeId, name, publicId, systemId);
    }

    public bool startDocument() {
        return qtd_QXmlDefaultHandler_startDocument(qtdNativeId);
    }

    public bool startElement(string namespaceURI, string localName, string qName, const(QXmlAttributes) atts) {
        return qtd_QXmlDefaultHandler_startElement_string_string_string_QXmlAttributes(qtdNativeId, namespaceURI, localName, qName, atts is null ? null : (cast(QXmlAttributes)atts).qtdNativeId);
    }

    public bool startEntity(string name) {
        return qtd_QXmlDefaultHandler_startEntity_string(qtdNativeId, name);
    }

    public bool startPrefixMapping(string prefix, string uri) {
        return qtd_QXmlDefaultHandler_startPrefixMapping_string_string(qtdNativeId, prefix, uri);
    }

    public bool unparsedEntityDecl(string name, string publicId, string systemId, string notationName) {
        return qtd_QXmlDefaultHandler_unparsedEntityDecl_string_string_string_string(qtdNativeId, name, publicId, systemId, notationName);
    }

    public bool warning(const(QXmlParseException) exception) {
        return qtd_QXmlDefaultHandler_warning_QXmlParseException(qtdNativeId, exception is null ? null : (cast(QXmlParseException)exception).qtdNativeId);
    }
// Field accessors
    static QXmlDefaultHandler __getObject(void* nativeId) {
        return qtd_QXmlDefaultHandler_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QXmlDefaultHandler;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQXmlContentHandler = qtd_QXmlDefaultHandler_cast_to_QXmlContentHandler(nativeId);
            __m_ptr_IQXmlErrorHandler = qtd_QXmlDefaultHandler_cast_to_QXmlErrorHandler(nativeId);
            __m_ptr_IQXmlDTDHandler = qtd_QXmlDefaultHandler_cast_to_QXmlDTDHandler(nativeId);
            __m_ptr_IQXmlEntityResolver = qtd_QXmlDefaultHandler_cast_to_QXmlEntityResolver(nativeId);
            __m_ptr_IQXmlLexicalHandler = qtd_QXmlDefaultHandler_cast_to_QXmlLexicalHandler(nativeId);
            __m_ptr_IQXmlDeclHandler = qtd_QXmlDefaultHandler_cast_to_QXmlDeclHandler(nativeId);
    }

    private void* __m_ptr_IQXmlContentHandler;
    public void* __ptr_IQXmlContentHandler() { return __m_ptr_IQXmlContentHandler; }

    private void* __m_ptr_IQXmlErrorHandler;
    public void* __ptr_IQXmlErrorHandler() { return __m_ptr_IQXmlErrorHandler; }

    private void* __m_ptr_IQXmlDTDHandler;
    public void* __ptr_IQXmlDTDHandler() { return __m_ptr_IQXmlDTDHandler; }

    private void* __m_ptr_IQXmlEntityResolver;
    public void* __ptr_IQXmlEntityResolver() { return __m_ptr_IQXmlEntityResolver; }

    private void* __m_ptr_IQXmlLexicalHandler;
    public void* __ptr_IQXmlLexicalHandler() { return __m_ptr_IQXmlLexicalHandler; }

    private void* __m_ptr_IQXmlDeclHandler;
    public void* __ptr_IQXmlDeclHandler() { return __m_ptr_IQXmlDeclHandler; }

    protected override void qtdDeleteNative() {
        qtd_QXmlDefaultHandler_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QXmlDefaultHandler_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QXmlDefaultHandler_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QXmlDefaultHandler_cast_to_QXmlContentHandler(void* nativeId);
    private static extern (C) void*qtd_QXmlDefaultHandler_cast_to_QXmlErrorHandler(void* nativeId);
    private static extern (C) void*qtd_QXmlDefaultHandler_cast_to_QXmlDTDHandler(void* nativeId);
    private static extern (C) void*qtd_QXmlDefaultHandler_cast_to_QXmlEntityResolver(void* nativeId);
    private static extern (C) void*qtd_QXmlDefaultHandler_cast_to_QXmlLexicalHandler(void* nativeId);
    private static extern (C) void*qtd_QXmlDefaultHandler_cast_to_QXmlDeclHandler(void* nativeId);

extern (C) void *__QXmlDefaultHandler_entity(void *q_ptr);

QXmlDefaultHandler qtd_QXmlDefaultHandler_from_ptr(void* ret) {
    void* d_obj = __QXmlDefaultHandler_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QXmlDefaultHandler) d_obj_ref;
    } else {
        auto return_value = new QXmlDefaultHandler(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QXmlDefaultHandler_delete(void *ptr);
extern (C) void qtd_QXmlDefaultHandler_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlDefaultHandler_QXmlDefaultHandler(void *d_ptr);
private extern(C) bool  qtd_QXmlDefaultHandler_attributeDecl_string_string_string_string_string(void* __this_nativeId,
 string eName0,
 string aName1,
 string type2,
 string valueDefault3,
 string value4);
private extern(C) bool  qtd_QXmlDefaultHandler_characters_string(void* __this_nativeId,
 string ch0);
private extern(C) bool  qtd_QXmlDefaultHandler_comment_string(void* __this_nativeId,
 string ch0);
private extern(C) bool  qtd_QXmlDefaultHandler_endCDATA(void* __this_nativeId);
private extern(C) bool  qtd_QXmlDefaultHandler_endDTD(void* __this_nativeId);
private extern(C) bool  qtd_QXmlDefaultHandler_endDocument(void* __this_nativeId);
private extern(C) bool  qtd_QXmlDefaultHandler_endElement_string_string_string(void* __this_nativeId,
 string namespaceURI0,
 string localName1,
 string qName2);
private extern(C) bool  qtd_QXmlDefaultHandler_endEntity_string(void* __this_nativeId,
 string name0);
private extern(C) bool  qtd_QXmlDefaultHandler_endPrefixMapping_string(void* __this_nativeId,
 string prefix0);
private extern(C) bool  qtd_QXmlDefaultHandler_error_QXmlParseException(void* __this_nativeId,
 void* exception0);
private extern(C) void  qtd_QXmlDefaultHandler_errorString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QXmlDefaultHandler_externalEntityDecl_string_string_string(void* __this_nativeId,
 string name0,
 string publicId1,
 string systemId2);
private extern(C) bool  qtd_QXmlDefaultHandler_fatalError_QXmlParseException(void* __this_nativeId,
 void* exception0);
private extern(C) bool  qtd_QXmlDefaultHandler_ignorableWhitespace_string(void* __this_nativeId,
 string ch0);
private extern(C) bool  qtd_QXmlDefaultHandler_internalEntityDecl_string_string(void* __this_nativeId,
 string name0,
 string value1);
private extern(C) bool  qtd_QXmlDefaultHandler_notationDecl_string_string_string(void* __this_nativeId,
 string name0,
 string publicId1,
 string systemId2);
private extern(C) bool  qtd_QXmlDefaultHandler_processingInstruction_string_string(void* __this_nativeId,
 string target0,
 string data1);
private extern(C) bool  qtd_QXmlDefaultHandler_resolveEntity_string_string_QXmlInputSource(void* __this_nativeId,
 string publicId0,
 string systemId1,
 void* ret2);
private extern(C) void  qtd_QXmlDefaultHandler_setDocumentLocator_QXmlLocator(void* __this_nativeId,
 void* locator0);
private extern(C) bool  qtd_QXmlDefaultHandler_skippedEntity_string(void* __this_nativeId,
 string name0);
private extern(C) bool  qtd_QXmlDefaultHandler_startCDATA(void* __this_nativeId);
private extern(C) bool  qtd_QXmlDefaultHandler_startDTD_string_string_string(void* __this_nativeId,
 string name0,
 string publicId1,
 string systemId2);
private extern(C) bool  qtd_QXmlDefaultHandler_startDocument(void* __this_nativeId);
private extern(C) bool  qtd_QXmlDefaultHandler_startElement_string_string_string_QXmlAttributes(void* __this_nativeId,
 string namespaceURI0,
 string localName1,
 string qName2,
 void* atts3);
private extern(C) bool  qtd_QXmlDefaultHandler_startEntity_string(void* __this_nativeId,
 string name0);
private extern(C) bool  qtd_QXmlDefaultHandler_startPrefixMapping_string_string(void* __this_nativeId,
 string prefix0,
 string uri1);
private extern(C) bool  qtd_QXmlDefaultHandler_unparsedEntityDecl_string_string_string_string(void* __this_nativeId,
 string name0,
 string publicId1,
 string systemId2,
 string notationName3);
private extern(C) bool  qtd_QXmlDefaultHandler_warning_QXmlParseException(void* __this_nativeId,
 void* exception0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QXmlDefaultHandler_initCallBacks(void* virtuals);

extern(C) void static_init_QXmlDefaultHandler() {
    qtd_QXmlDefaultHandler_initCallBacks(null);
}

// signal handlers

