module qt.xml.QXmlStreamWriter;

public import qt.xml.QXmlStreamWriter_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QTextCodec;
public import qt.xml.QXmlStreamReader;
public import qt.core.QIODevice;
public import qt.xml.QXmlStreamAttribute;
public import qt.xml.QXmlStreamAttributes;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QXmlStreamWriter : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QXmlStreamWriter_QXmlStreamWriter(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QByteArray array) {
        void* ret = qtd_QXmlStreamWriter_QXmlStreamWriter_nativepointerQByteArray(cast(void*) this, array is null ? null : array.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QIODevice device) {
        void* ret = qtd_QXmlStreamWriter_QXmlStreamWriter_QIODevice(cast(void*) this, device is null ? null : device.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool autoFormatting() const {
        return qtd_QXmlStreamWriter_autoFormatting_const(qtdNativeId);
    }

    public final int autoFormattingIndent() const {
        return qtd_QXmlStreamWriter_autoFormattingIndent_const(qtdNativeId);
    }

    public final QTextCodec codec() const {
        void* ret = qtd_QXmlStreamWriter_codec_const(qtdNativeId);
        QTextCodec __d_return_value = qtd_QTextCodec_from_ptr(ret);

        return __d_return_value;
    }

    public final QIODevice device() const {
        void *ret = qtd_QXmlStreamWriter_device_const(qtdNativeId);
        QIODevice __d_return_value = QIODevice.__getObject(ret);
        return __d_return_value;
    }

    public final void setAutoFormatting(bool arg__1) {
        qtd_QXmlStreamWriter_setAutoFormatting_bool(qtdNativeId, arg__1);
    }

    public final void setAutoFormattingIndent(int spacesOrTabs) {
        qtd_QXmlStreamWriter_setAutoFormattingIndent_int(qtdNativeId, spacesOrTabs);
    }

    public final void setCodec(QTextCodec codec) {
        qtd_QXmlStreamWriter_setCodec_QTextCodec(qtdNativeId, codec is null ? null : codec.qtdNativeId);
    }

    public final void setCodec(const(char*) codecName) {
        qtd_QXmlStreamWriter_setCodec_nativepointerchar(qtdNativeId, codecName);
    }

    public final void setDevice(QIODevice device) {
        qtd_QXmlStreamWriter_setDevice_QIODevice(qtdNativeId, device is null ? null : device.qtdNativeId);
    }

    public final void writeAttribute(string namespaceUri, string name, string value) {
        qtd_QXmlStreamWriter_writeAttribute_string_string_string(qtdNativeId, namespaceUri, name, value);
    }

    public final void writeAttribute(string qualifiedName, string value) {
        qtd_QXmlStreamWriter_writeAttribute_string_string(qtdNativeId, qualifiedName, value);
    }

    public final void writeAttribute(const(QXmlStreamAttribute) attribute) {
        qtd_QXmlStreamWriter_writeAttribute_QXmlStreamAttribute(qtdNativeId, attribute is null ? null : (cast(QXmlStreamAttribute)attribute).qtdNativeId);
    }

    public final void writeAttributes(const(QXmlStreamAttributes) attributes) {
        qtd_QXmlStreamWriter_writeAttributes_QXmlStreamAttributes(qtdNativeId, attributes is null ? null : (cast(QXmlStreamAttributes)attributes).qtdNativeId);
    }

    public final void writeCDATA(string text) {
        qtd_QXmlStreamWriter_writeCDATA_string(qtdNativeId, text);
    }

    public final void writeCharacters(string text) {
        qtd_QXmlStreamWriter_writeCharacters_string(qtdNativeId, text);
    }

    public final void writeComment(string text) {
        qtd_QXmlStreamWriter_writeComment_string(qtdNativeId, text);
    }

    public final void writeCurrentToken(QXmlStreamReader reader) {
        qtd_QXmlStreamWriter_writeCurrentToken_QXmlStreamReader(qtdNativeId, reader is null ? null : (cast(QXmlStreamReader)reader).qtdNativeId);
    }

    public final void writeDTD(string dtd) {
        qtd_QXmlStreamWriter_writeDTD_string(qtdNativeId, dtd);
    }

    public final void writeDefaultNamespace(string namespaceUri) {
        qtd_QXmlStreamWriter_writeDefaultNamespace_string(qtdNativeId, namespaceUri);
    }

    public final void writeEmptyElement(string namespaceUri, string name) {
        qtd_QXmlStreamWriter_writeEmptyElement_string_string(qtdNativeId, namespaceUri, name);
    }

    public final void writeEmptyElement(string qualifiedName) {
        qtd_QXmlStreamWriter_writeEmptyElement_string(qtdNativeId, qualifiedName);
    }

    public final void writeEndDocument() {
        qtd_QXmlStreamWriter_writeEndDocument(qtdNativeId);
    }

    public final void writeEndElement() {
        qtd_QXmlStreamWriter_writeEndElement(qtdNativeId);
    }

    public final void writeEntityReference(string name) {
        qtd_QXmlStreamWriter_writeEntityReference_string(qtdNativeId, name);
    }

    public final void writeNamespace(string namespaceUri, string prefix = "") {
        qtd_QXmlStreamWriter_writeNamespace_string_string(qtdNativeId, namespaceUri, prefix);
    }

    public final void writeProcessingInstruction(string target, string data = "") {
        qtd_QXmlStreamWriter_writeProcessingInstruction_string_string(qtdNativeId, target, data);
    }

    public final void writeStartDocument() {
        qtd_QXmlStreamWriter_writeStartDocument(qtdNativeId);
    }

    public final void writeStartDocument(string version_) {
        qtd_QXmlStreamWriter_writeStartDocument_string(qtdNativeId, version_);
    }

    public final void writeStartDocument(string version_, bool standalone) {
        qtd_QXmlStreamWriter_writeStartDocument_string_bool(qtdNativeId, version_, standalone);
    }

    public final void writeStartElement(string namespaceUri, string name) {
        qtd_QXmlStreamWriter_writeStartElement_string_string(qtdNativeId, namespaceUri, name);
    }

    public final void writeStartElement(string qualifiedName) {
        qtd_QXmlStreamWriter_writeStartElement_string(qtdNativeId, qualifiedName);
    }

    public final void writeTextElement(string namespaceUri, string name, string text) {
        qtd_QXmlStreamWriter_writeTextElement_string_string_string(qtdNativeId, namespaceUri, name, text);
    }

    public final void writeTextElement(string qualifiedName, string text) {
        qtd_QXmlStreamWriter_writeTextElement_string_string(qtdNativeId, qualifiedName, text);
    }
// Field accessors
    static QXmlStreamWriter __getObject(void* nativeId) {
        return qtd_QXmlStreamWriter_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QXmlStreamWriter;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QXmlStreamWriter_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QXmlStreamWriter_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QXmlStreamWriter_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QXmlStreamWriter qtd_QXmlStreamWriter_from_ptr(void* ret) {
    auto return_value = new QXmlStreamWriter(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QXmlStreamWriter_delete(void *ptr);
extern (C) void qtd_QXmlStreamWriter_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlStreamWriter_QXmlStreamWriter(void *d_ptr);
private extern(C) void* qtd_QXmlStreamWriter_QXmlStreamWriter_nativepointerQByteArray(void *d_ptr,
 void* array0);
private extern(C) void* qtd_QXmlStreamWriter_QXmlStreamWriter_QIODevice(void *d_ptr,
 void* device0);
private extern(C) bool  qtd_QXmlStreamWriter_autoFormatting_const(void* __this_nativeId);
private extern(C) int  qtd_QXmlStreamWriter_autoFormattingIndent_const(void* __this_nativeId);
private extern(C) void*  qtd_QXmlStreamWriter_codec_const(void* __this_nativeId);
private extern(C) void*  qtd_QXmlStreamWriter_device_const(void* __this_nativeId);
private extern(C) void  qtd_QXmlStreamWriter_setAutoFormatting_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QXmlStreamWriter_setAutoFormattingIndent_int(void* __this_nativeId,
 int spacesOrTabs0);
private extern(C) void  qtd_QXmlStreamWriter_setCodec_QTextCodec(void* __this_nativeId,
 void* codec0);
private extern(C) void  qtd_QXmlStreamWriter_setCodec_nativepointerchar(void* __this_nativeId,
 const (char*) codecName0);
private extern(C) void  qtd_QXmlStreamWriter_setDevice_QIODevice(void* __this_nativeId,
 void* device0);
private extern(C) void  qtd_QXmlStreamWriter_writeAttribute_string_string_string(void* __this_nativeId,
 string namespaceUri0,
 string name1,
 string value2);
private extern(C) void  qtd_QXmlStreamWriter_writeAttribute_string_string(void* __this_nativeId,
 string qualifiedName0,
 string value1);
private extern(C) void  qtd_QXmlStreamWriter_writeAttribute_QXmlStreamAttribute(void* __this_nativeId,
 void* attribute0);
private extern(C) void  qtd_QXmlStreamWriter_writeAttributes_QXmlStreamAttributes(void* __this_nativeId,
 void* attributes0);
private extern(C) void  qtd_QXmlStreamWriter_writeCDATA_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QXmlStreamWriter_writeCharacters_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QXmlStreamWriter_writeComment_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QXmlStreamWriter_writeCurrentToken_QXmlStreamReader(void* __this_nativeId,
 void* reader0);
private extern(C) void  qtd_QXmlStreamWriter_writeDTD_string(void* __this_nativeId,
 string dtd0);
private extern(C) void  qtd_QXmlStreamWriter_writeDefaultNamespace_string(void* __this_nativeId,
 string namespaceUri0);
private extern(C) void  qtd_QXmlStreamWriter_writeEmptyElement_string_string(void* __this_nativeId,
 string namespaceUri0,
 string name1);
private extern(C) void  qtd_QXmlStreamWriter_writeEmptyElement_string(void* __this_nativeId,
 string qualifiedName0);
private extern(C) void  qtd_QXmlStreamWriter_writeEndDocument(void* __this_nativeId);
private extern(C) void  qtd_QXmlStreamWriter_writeEndElement(void* __this_nativeId);
private extern(C) void  qtd_QXmlStreamWriter_writeEntityReference_string(void* __this_nativeId,
 string name0);
private extern(C) void  qtd_QXmlStreamWriter_writeNamespace_string_string(void* __this_nativeId,
 string namespaceUri0,
 string prefix1);
private extern(C) void  qtd_QXmlStreamWriter_writeProcessingInstruction_string_string(void* __this_nativeId,
 string target0,
 string data1);
private extern(C) void  qtd_QXmlStreamWriter_writeStartDocument(void* __this_nativeId);
private extern(C) void  qtd_QXmlStreamWriter_writeStartDocument_string(void* __this_nativeId,
 string version0);
private extern(C) void  qtd_QXmlStreamWriter_writeStartDocument_string_bool(void* __this_nativeId,
 string version0,
 bool standalone1);
private extern(C) void  qtd_QXmlStreamWriter_writeStartElement_string_string(void* __this_nativeId,
 string namespaceUri0,
 string name1);
private extern(C) void  qtd_QXmlStreamWriter_writeStartElement_string(void* __this_nativeId,
 string qualifiedName0);
private extern(C) void  qtd_QXmlStreamWriter_writeTextElement_string_string_string(void* __this_nativeId,
 string namespaceUri0,
 string name1,
 string text2);
private extern(C) void  qtd_QXmlStreamWriter_writeTextElement_string_string(void* __this_nativeId,
 string qualifiedName0,
 string text1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QXmlStreamWriter_initCallBacks(void* virtuals);

extern(C) void static_init_QXmlStreamWriter() {
    qtd_QXmlStreamWriter_initCallBacks(null);
}

// signal handlers

