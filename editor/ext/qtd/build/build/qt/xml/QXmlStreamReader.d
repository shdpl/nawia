module qt.xml.QXmlStreamReader;

public import qt.xml.QXmlStreamReader_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QXmlStreamEntityResolver;
public import qt.core.QIODevice;
public import qt.xml.QXmlStreamNamespaceDeclaration;
public import qt.xml.QXmlStreamNotationDeclaration;
public import qt.xml.QXmlStreamAttributes;
public import qt.core.QByteArray;
public import qt.xml.QXmlStreamEntityDeclaration;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QXmlStreamReader : QtdObject
{
    public enum Error {
        NoError = 0,
        UnexpectedElementError = 1,
        CustomError = 2,
        NotWellFormedError = 3,
        PrematureEndOfDocumentError = 4
    }

    alias Error.NoError NoError;
    alias Error.UnexpectedElementError UnexpectedElementError;
    alias Error.CustomError CustomError;
    alias Error.NotWellFormedError NotWellFormedError;
    alias Error.PrematureEndOfDocumentError PrematureEndOfDocumentError;

    public enum TokenType {
        NoToken = 0,
        Invalid = 1,
        StartDocument = 2,
        EndDocument = 3,
        StartElement = 4,
        EndElement = 5,
        Characters = 6,
        Comment = 7,
        DTD = 8,
        EntityReference = 9,
        ProcessingInstruction = 10
    }

    alias TokenType.NoToken NoToken;
    alias TokenType.Invalid Invalid;
    alias TokenType.StartDocument StartDocument;
    alias TokenType.EndDocument EndDocument;
    alias TokenType.StartElement StartElement;
    alias TokenType.EndElement EndElement;
    alias TokenType.Characters Characters;
    alias TokenType.Comment Comment;
    alias TokenType.DTD DTD;
    alias TokenType.EntityReference EntityReference;
    alias TokenType.ProcessingInstruction ProcessingInstruction;


Object __rcDevice = null;

Object __rcEntityResolver = null;

// Functions

    public this() {
        void* ret = qtd_QXmlStreamReader_QXmlStreamReader(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QIODevice device) {
        void* ret = qtd_QXmlStreamReader_QXmlStreamReader_QIODevice(cast(void*) this, device is null ? null : device.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QByteArray) data) {
        void* ret = qtd_QXmlStreamReader_QXmlStreamReader_QByteArray(cast(void*) this, data is null ? null : (cast(QByteArray)data).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string data) {
        void* ret = qtd_QXmlStreamReader_QXmlStreamReader_string(cast(void*) this, data);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addData(const(QByteArray) data) {
        qtd_QXmlStreamReader_addData_QByteArray(qtdNativeId, data is null ? null : (cast(QByteArray)data).qtdNativeId);
    }

    public final void addData(string data) {
        qtd_QXmlStreamReader_addData_string(qtdNativeId, data);
    }

    public final void addExtraNamespaceDeclaration(const(QXmlStreamNamespaceDeclaration) extraNamespaceDeclaraction) {
        qtd_QXmlStreamReader_addExtraNamespaceDeclaration_QXmlStreamNamespaceDeclaration(qtdNativeId, extraNamespaceDeclaraction is null ? null : (cast(QXmlStreamNamespaceDeclaration)extraNamespaceDeclaraction).qtdNativeId);
    }

    public final void addExtraNamespaceDeclarations(QXmlStreamNamespaceDeclaration[] extraNamespaceDeclaractions) {
        qtd_QXmlStreamReader_addExtraNamespaceDeclarations_QVector(qtdNativeId, &extraNamespaceDeclaractions);
    }

    public final bool atEnd() const {
        return qtd_QXmlStreamReader_atEnd_const(qtdNativeId);
    }

    public final QXmlStreamAttributes attributes() const {
        void* ret = qtd_QXmlStreamReader_attributes_const(qtdNativeId);
        QXmlStreamAttributes __d_return_value = new QXmlStreamAttributes(ret);
        return __d_return_value;
    }

    public final long characterOffset() const {
        return qtd_QXmlStreamReader_characterOffset_const(qtdNativeId);
    }

    public final void clear() {
        qtd_QXmlStreamReader_clear(qtdNativeId);
        __rcDevice = null; // clear() call removes device from stream


    }

    public final long columnNumber() const {
        return qtd_QXmlStreamReader_columnNumber_const(qtdNativeId);
    }

    public final QIODevice device() const {
        void *ret = qtd_QXmlStreamReader_device_const(qtdNativeId);
        QIODevice __d_return_value = QIODevice.__getObject(ret);
        return __d_return_value;
    }

    public final string documentEncoding() const {
        string res;
        qtd_QXmlStreamReader_documentEncoding_const(qtdNativeId, &res);
        return res;
    }

    public final string documentVersion() const {
        string res;
        qtd_QXmlStreamReader_documentVersion_const(qtdNativeId, &res);
        return res;
    }

    public final string dtdName() const {
        string res;
        qtd_QXmlStreamReader_dtdName_const(qtdNativeId, &res);
        return res;
    }

    public final string dtdPublicId() const {
        string res;
        qtd_QXmlStreamReader_dtdPublicId_const(qtdNativeId, &res);
        return res;
    }

    public final string dtdSystemId() const {
        string res;
        qtd_QXmlStreamReader_dtdSystemId_const(qtdNativeId, &res);
        return res;
    }

    public final QXmlStreamEntityDeclaration[] entityDeclarations() const {
        QXmlStreamEntityDeclaration[] res;
        qtd_QXmlStreamReader_entityDeclarations_const(qtdNativeId, &res);
        return res;
    }

    public final QXmlStreamEntityResolver entityResolver() const {
        void* ret = qtd_QXmlStreamReader_entityResolver_const(qtdNativeId);
        QXmlStreamEntityResolver __d_return_value = qtd_QXmlStreamEntityResolver_from_ptr(ret);

        return __d_return_value;
    }

    public final QXmlStreamReader.Error error() const {
        return cast(QXmlStreamReader.Error) qtd_QXmlStreamReader_error_const(qtdNativeId);
    }

    public final string errorString() const {
        string res;
        qtd_QXmlStreamReader_errorString_const(qtdNativeId, &res);
        return res;
    }

    public final bool hasError() const {
        return qtd_QXmlStreamReader_hasError_const(qtdNativeId);
    }

    public final bool isCDATA() const {
        return qtd_QXmlStreamReader_isCDATA_const(qtdNativeId);
    }

    public final bool isCharacters() const {
        return qtd_QXmlStreamReader_isCharacters_const(qtdNativeId);
    }

    public final bool isComment() const {
        return qtd_QXmlStreamReader_isComment_const(qtdNativeId);
    }

    public final bool isDTD() const {
        return qtd_QXmlStreamReader_isDTD_const(qtdNativeId);
    }

    public final bool isEndDocument() const {
        return qtd_QXmlStreamReader_isEndDocument_const(qtdNativeId);
    }

    public final bool isEndElement() const {
        return qtd_QXmlStreamReader_isEndElement_const(qtdNativeId);
    }

    public final bool isEntityReference() const {
        return qtd_QXmlStreamReader_isEntityReference_const(qtdNativeId);
    }

    public final bool isProcessingInstruction() const {
        return qtd_QXmlStreamReader_isProcessingInstruction_const(qtdNativeId);
    }

    public final bool isStandaloneDocument() const {
        return qtd_QXmlStreamReader_isStandaloneDocument_const(qtdNativeId);
    }

    public final bool isStartDocument() const {
        return qtd_QXmlStreamReader_isStartDocument_const(qtdNativeId);
    }

    public final bool isStartElement() const {
        return qtd_QXmlStreamReader_isStartElement_const(qtdNativeId);
    }

    public final bool isWhitespace() const {
        return qtd_QXmlStreamReader_isWhitespace_const(qtdNativeId);
    }

    public final long lineNumber() const {
        return qtd_QXmlStreamReader_lineNumber_const(qtdNativeId);
    }

    public final string name() const {
        string res;
        qtd_QXmlStreamReader_name_const(qtdNativeId, &res);
        return res;
    }

    public final QXmlStreamNamespaceDeclaration[] namespaceDeclarations() const {
        QXmlStreamNamespaceDeclaration[] res;
        qtd_QXmlStreamReader_namespaceDeclarations_const(qtdNativeId, &res);
        return res;
    }

    public final bool namespaceProcessing() const {
        return qtd_QXmlStreamReader_namespaceProcessing_const(qtdNativeId);
    }

    public final string namespaceUri() const {
        string res;
        qtd_QXmlStreamReader_namespaceUri_const(qtdNativeId, &res);
        return res;
    }

    public final QXmlStreamNotationDeclaration[] notationDeclarations() const {
        QXmlStreamNotationDeclaration[] res;
        qtd_QXmlStreamReader_notationDeclarations_const(qtdNativeId, &res);
        return res;
    }

    public final string prefix() const {
        string res;
        qtd_QXmlStreamReader_prefix_const(qtdNativeId, &res);
        return res;
    }

    public final string processingInstructionData() const {
        string res;
        qtd_QXmlStreamReader_processingInstructionData_const(qtdNativeId, &res);
        return res;
    }

    public final string processingInstructionTarget() const {
        string res;
        qtd_QXmlStreamReader_processingInstructionTarget_const(qtdNativeId, &res);
        return res;
    }

    public final string qualifiedName() const {
        string res;
        qtd_QXmlStreamReader_qualifiedName_const(qtdNativeId, &res);
        return res;
    }

    public final void raiseError(string message = "") {
        qtd_QXmlStreamReader_raiseError_string(qtdNativeId, message);
    }

    public final string readElementText() {
        string res;
        qtd_QXmlStreamReader_readElementText(qtdNativeId, &res);
        return res;
    }

    public final QXmlStreamReader.TokenType readNext() {
        return cast(QXmlStreamReader.TokenType) qtd_QXmlStreamReader_readNext(qtdNativeId);
    }

    public final bool readNextStartElement() {
        return qtd_QXmlStreamReader_readNextStartElement(qtdNativeId);
    }

    public final void setDevice(QIODevice device) {
        {
            __rcDevice = cast(Object) device;
        }
        qtd_QXmlStreamReader_setDevice_QIODevice(qtdNativeId, device is null ? null : device.qtdNativeId);
    }

    public final void setEntityResolver(QXmlStreamEntityResolver resolver) {
        {
            __rcEntityResolver = cast(Object) resolver;
        }
        qtd_QXmlStreamReader_setEntityResolver_QXmlStreamEntityResolver(qtdNativeId, resolver is null ? null : resolver.qtdNativeId);
    }

    public final void setNamespaceProcessing(bool arg__1) {
        qtd_QXmlStreamReader_setNamespaceProcessing_bool(qtdNativeId, arg__1);
    }

    public final void skipCurrentElement() {
        qtd_QXmlStreamReader_skipCurrentElement(qtdNativeId);
    }

    public final string text() const {
        string res;
        qtd_QXmlStreamReader_text_const(qtdNativeId, &res);
        return res;
    }

    public final string tokenString() const {
        string res;
        qtd_QXmlStreamReader_tokenString_const(qtdNativeId, &res);
        return res;
    }

    public final QXmlStreamReader.TokenType tokenType() const {
        return cast(QXmlStreamReader.TokenType) qtd_QXmlStreamReader_tokenType_const(qtdNativeId);
    }
// Field accessors
    static QXmlStreamReader __getObject(void* nativeId) {
        return qtd_QXmlStreamReader_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QXmlStreamReader;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QXmlStreamReader_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QXmlStreamReader_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QXmlStreamReader_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QXmlStreamReader qtd_QXmlStreamReader_from_ptr(void* ret) {
    auto return_value = new QXmlStreamReader(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QXmlStreamReader_delete(void *ptr);
extern (C) void qtd_QXmlStreamReader_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlStreamReader_QXmlStreamReader(void *d_ptr);
private extern(C) void* qtd_QXmlStreamReader_QXmlStreamReader_QIODevice(void *d_ptr,
 void* device0);
private extern(C) void* qtd_QXmlStreamReader_QXmlStreamReader_QByteArray(void *d_ptr,
 void* data0);
private extern(C) void* qtd_QXmlStreamReader_QXmlStreamReader_string(void *d_ptr,
 string data0);
private extern(C) void  qtd_QXmlStreamReader_addData_QByteArray(void* __this_nativeId,
 void* data0);
private extern(C) void  qtd_QXmlStreamReader_addData_string(void* __this_nativeId,
 string data0);
private extern(C) void  qtd_QXmlStreamReader_addExtraNamespaceDeclaration_QXmlStreamNamespaceDeclaration(void* __this_nativeId,
 void* extraNamespaceDeclaraction0);
private extern(C) void  qtd_QXmlStreamReader_addExtraNamespaceDeclarations_QVector(void* __this_nativeId,
 DArray* extraNamespaceDeclaractions0);
private extern(C) bool  qtd_QXmlStreamReader_atEnd_const(void* __this_nativeId);
private extern(C) void*  qtd_QXmlStreamReader_attributes_const(void* __this_nativeId);
private extern(C) long  qtd_QXmlStreamReader_characterOffset_const(void* __this_nativeId);
private extern(C) void  qtd_QXmlStreamReader_clear(void* __this_nativeId);
private extern(C) long  qtd_QXmlStreamReader_columnNumber_const(void* __this_nativeId);
private extern(C) void*  qtd_QXmlStreamReader_device_const(void* __this_nativeId);
private extern(C) void  qtd_QXmlStreamReader_documentEncoding_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlStreamReader_documentVersion_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlStreamReader_dtdName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlStreamReader_dtdPublicId_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlStreamReader_dtdSystemId_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlStreamReader_entityDeclarations_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QXmlStreamReader_entityResolver_const(void* __this_nativeId);
private extern(C) int  qtd_QXmlStreamReader_error_const(void* __this_nativeId);
private extern(C) void  qtd_QXmlStreamReader_errorString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QXmlStreamReader_hasError_const(void* __this_nativeId);
private extern(C) bool  qtd_QXmlStreamReader_isCDATA_const(void* __this_nativeId);
private extern(C) bool  qtd_QXmlStreamReader_isCharacters_const(void* __this_nativeId);
private extern(C) bool  qtd_QXmlStreamReader_isComment_const(void* __this_nativeId);
private extern(C) bool  qtd_QXmlStreamReader_isDTD_const(void* __this_nativeId);
private extern(C) bool  qtd_QXmlStreamReader_isEndDocument_const(void* __this_nativeId);
private extern(C) bool  qtd_QXmlStreamReader_isEndElement_const(void* __this_nativeId);
private extern(C) bool  qtd_QXmlStreamReader_isEntityReference_const(void* __this_nativeId);
private extern(C) bool  qtd_QXmlStreamReader_isProcessingInstruction_const(void* __this_nativeId);
private extern(C) bool  qtd_QXmlStreamReader_isStandaloneDocument_const(void* __this_nativeId);
private extern(C) bool  qtd_QXmlStreamReader_isStartDocument_const(void* __this_nativeId);
private extern(C) bool  qtd_QXmlStreamReader_isStartElement_const(void* __this_nativeId);
private extern(C) bool  qtd_QXmlStreamReader_isWhitespace_const(void* __this_nativeId);
private extern(C) long  qtd_QXmlStreamReader_lineNumber_const(void* __this_nativeId);
private extern(C) void  qtd_QXmlStreamReader_name_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlStreamReader_namespaceDeclarations_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QXmlStreamReader_namespaceProcessing_const(void* __this_nativeId);
private extern(C) void  qtd_QXmlStreamReader_namespaceUri_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlStreamReader_notationDeclarations_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlStreamReader_prefix_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlStreamReader_processingInstructionData_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlStreamReader_processingInstructionTarget_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlStreamReader_qualifiedName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlStreamReader_raiseError_string(void* __this_nativeId,
 string message0);
private extern(C) void  qtd_QXmlStreamReader_readElementText(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QXmlStreamReader_readNext(void* __this_nativeId);
private extern(C) bool  qtd_QXmlStreamReader_readNextStartElement(void* __this_nativeId);
private extern(C) void  qtd_QXmlStreamReader_setDevice_QIODevice(void* __this_nativeId,
 void* device0);
private extern(C) void  qtd_QXmlStreamReader_setEntityResolver_QXmlStreamEntityResolver(void* __this_nativeId,
 void* resolver0);
private extern(C) void  qtd_QXmlStreamReader_setNamespaceProcessing_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QXmlStreamReader_skipCurrentElement(void* __this_nativeId);
private extern(C) void  qtd_QXmlStreamReader_text_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlStreamReader_tokenString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QXmlStreamReader_tokenType_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QXmlStreamReader_initCallBacks(void* virtuals);

extern(C) void static_init_QXmlStreamReader() {
    qtd_QXmlStreamReader_initCallBacks(null);
}

// signal handlers

