module qt.xml.QDomDocument;

public import qt.xml.QDomDocument_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.xml.QDomProcessingInstruction;
public import qt.xml.QDomAttr;
public import qt.xml.QDomImplementation;
public import qt.xml.QDomNodeList;
public import qt.xml.QDomElement;
public import qt.xml.QDomDocumentType;
public import qt.xml.QXmlReader;
public import qt.core.QIODevice;
public import qt.xml.QDomComment;
public import qt.xml.QDomEntityReference;
public import qt.xml.QDomNode;
public import qt.xml.QDomText;
public import qt.xml.QDomDocumentFragment;
public import qt.xml.QXmlInputSource;
public import qt.core.QByteArray;
public import qt.xml.QDomCDATASection;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDomDocument : QDomNode
{

Object __rcContent = null;

// Functions

    public this() {
        void* ret = qtd_QDomDocument_QDomDocument();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDomDocument) x) {
        void* ret = qtd_QDomDocument_QDomDocument_QDomDocument(x is null ? null : (cast(QDomDocument)x).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDomDocumentType) doctype) {
        void* ret = qtd_QDomDocument_QDomDocument_QDomDocumentType(doctype is null ? null : (cast(QDomDocumentType)doctype).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string name) {
        void* ret = qtd_QDomDocument_QDomDocument_string(name);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QDomAttr createAttribute(string name) {
        void* ret = qtd_QDomDocument_createAttribute_string(qtdNativeId, name);
        QDomAttr __d_return_value = new QDomAttr(ret);
        return __d_return_value;
    }

    public final QDomAttr createAttributeNS(string nsURI, string qName) {
        void* ret = qtd_QDomDocument_createAttributeNS_string_string(qtdNativeId, nsURI, qName);
        QDomAttr __d_return_value = new QDomAttr(ret);
        return __d_return_value;
    }

    public final QDomCDATASection createCDATASection(string data) {
        void* ret = qtd_QDomDocument_createCDATASection_string(qtdNativeId, data);
        QDomCDATASection __d_return_value = new QDomCDATASection(ret);
        return __d_return_value;
    }

    public final QDomComment createComment(string data) {
        void* ret = qtd_QDomDocument_createComment_string(qtdNativeId, data);
        QDomComment __d_return_value = new QDomComment(ret);
        return __d_return_value;
    }

    public final QDomDocumentFragment createDocumentFragment() {
        void* ret = qtd_QDomDocument_createDocumentFragment(qtdNativeId);
        QDomDocumentFragment __d_return_value = new QDomDocumentFragment(ret);
        return __d_return_value;
    }

    public final QDomElement createElement(string tagName) {
        void* ret = qtd_QDomDocument_createElement_string(qtdNativeId, tagName);
        QDomElement __d_return_value = new QDomElement(ret);
        return __d_return_value;
    }

    public final QDomElement createElementNS(string nsURI, string qName) {
        void* ret = qtd_QDomDocument_createElementNS_string_string(qtdNativeId, nsURI, qName);
        QDomElement __d_return_value = new QDomElement(ret);
        return __d_return_value;
    }

    public final QDomEntityReference createEntityReference(string name) {
        void* ret = qtd_QDomDocument_createEntityReference_string(qtdNativeId, name);
        QDomEntityReference __d_return_value = new QDomEntityReference(ret);
        return __d_return_value;
    }

    public final QDomProcessingInstruction createProcessingInstruction(string target, string data) {
        void* ret = qtd_QDomDocument_createProcessingInstruction_string_string(qtdNativeId, target, data);
        QDomProcessingInstruction __d_return_value = new QDomProcessingInstruction(ret);
        return __d_return_value;
    }

    public final QDomText createTextNode(string data) {
        void* ret = qtd_QDomDocument_createTextNode_string(qtdNativeId, data);
        QDomText __d_return_value = new QDomText(ret);
        return __d_return_value;
    }

    public final QDomDocumentType doctype() const {
        void* ret = qtd_QDomDocument_doctype_const(qtdNativeId);
        QDomDocumentType __d_return_value = new QDomDocumentType(ret);
        return __d_return_value;
    }

    public final QDomElement documentElement() const {
        void* ret = qtd_QDomDocument_documentElement_const(qtdNativeId);
        QDomElement __d_return_value = new QDomElement(ret);
        return __d_return_value;
    }

    public final QDomElement elementById(string elementId) {
        void* ret = qtd_QDomDocument_elementById_string(qtdNativeId, elementId);
        QDomElement __d_return_value = new QDomElement(ret);
        return __d_return_value;
    }

    public final QDomNodeList elementsByTagName(string tagname) const {
        void* ret = qtd_QDomDocument_elementsByTagName_string_const(qtdNativeId, tagname);
        QDomNodeList __d_return_value = new QDomNodeList(ret);
        return __d_return_value;
    }

    public final QDomNodeList elementsByTagNameNS(string nsURI, string localName) {
        void* ret = qtd_QDomDocument_elementsByTagNameNS_string_string(qtdNativeId, nsURI, localName);
        QDomNodeList __d_return_value = new QDomNodeList(ret);
        return __d_return_value;
    }

    public final QDomImplementation implementation() const {
        void* ret = qtd_QDomDocument_implementation_const(qtdNativeId);
        QDomImplementation __d_return_value = new QDomImplementation(ret);
        return __d_return_value;
    }

    public final QDomNode importNode(const(QDomNode) importedNode, bool deep) {
        void* ret = qtd_QDomDocument_importNode_QDomNode_bool(qtdNativeId, importedNode is null ? null : (cast(QDomNode)importedNode).qtdNativeId, deep);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    public final bool setContent(QIODevice dev, ref string errorMsg = null, int* errorLine = null, int* errorColumn = null) {
        {
            __rcContent = cast(Object) dev;
        }
        return qtd_QDomDocument_setContent_QIODevice_nativepointerstring_nativepointerint_nativepointerint(qtdNativeId, dev is null ? null : dev.qtdNativeId, errorMsg, errorLine, errorColumn);
    }

    public final bool setContent(QIODevice dev, bool namespaceProcessing, ref string errorMsg = null, int* errorLine = null, int* errorColumn = null) {
        {
            __rcContent = cast(Object) dev;
        }
        return qtd_QDomDocument_setContent_QIODevice_bool_nativepointerstring_nativepointerint_nativepointerint(qtdNativeId, dev is null ? null : dev.qtdNativeId, namespaceProcessing, errorMsg, errorLine, errorColumn);
    }

    public final bool setContent(QXmlInputSource source, QXmlReader reader, ref string errorMsg = null, int* errorLine = null, int* errorColumn = null) {
        {
            __rcContent = cast(Object) source;
        }
        return qtd_QDomDocument_setContent_QXmlInputSource_QXmlReader_nativepointerstring_nativepointerint_nativepointerint(qtdNativeId, source is null ? null : source.qtdNativeId, reader is null ? null : reader.qtdNativeId, errorMsg, errorLine, errorColumn);
    }

    public final bool setContent(QXmlInputSource source, bool namespaceProcessing, ref string errorMsg = null, int* errorLine = null, int* errorColumn = null) {
        {
            __rcContent = cast(Object) source;
        }
        return qtd_QDomDocument_setContent_QXmlInputSource_bool_nativepointerstring_nativepointerint_nativepointerint(qtdNativeId, source is null ? null : source.qtdNativeId, namespaceProcessing, errorMsg, errorLine, errorColumn);
    }

    public final bool setContent(const(QByteArray) text, ref string errorMsg = null, int* errorLine = null, int* errorColumn = null) {
        return qtd_QDomDocument_setContent_QByteArray_nativepointerstring_nativepointerint_nativepointerint(qtdNativeId, text is null ? null : (cast(QByteArray)text).qtdNativeId, errorMsg, errorLine, errorColumn);
    }

    public final bool setContent(const(QByteArray) text, bool namespaceProcessing, ref string errorMsg = null, int* errorLine = null, int* errorColumn = null) {
        return qtd_QDomDocument_setContent_QByteArray_bool_nativepointerstring_nativepointerint_nativepointerint(qtdNativeId, text is null ? null : (cast(QByteArray)text).qtdNativeId, namespaceProcessing, errorMsg, errorLine, errorColumn);
    }

    public final bool setContent(string text, ref string errorMsg = null, int* errorLine = null, int* errorColumn = null) {
        return qtd_QDomDocument_setContent_string_nativepointerstring_nativepointerint_nativepointerint(qtdNativeId, text, errorMsg, errorLine, errorColumn);
    }

    public final bool setContent(string text, bool namespaceProcessing, ref string errorMsg = null, int* errorLine = null, int* errorColumn = null) {
        return qtd_QDomDocument_setContent_string_bool_nativepointerstring_nativepointerint_nativepointerint(qtdNativeId, text, namespaceProcessing, errorMsg, errorLine, errorColumn);
    }

    public final QByteArray toByteArray(int arg__1 = 1) const {
        void* ret = qtd_QDomDocument_toByteArray_int_const(qtdNativeId, arg__1);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final string toString(int arg__1 = 1) const {
        string res;
        qtd_QDomDocument_toString_int_const(qtdNativeId, &res, arg__1);
        return res;
    }
// Field accessors
    public alias void __isQtType_QDomDocument;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QDomDocument_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QDomDocument_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDomDocument_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDomDocument_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDomDocument_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QDomDocument_QTypeInfo_isComplex();
        isStatic = qtd_QDomDocument_QTypeInfo_isStatic();
        isLarge = qtd_QDomDocument_QTypeInfo_isLarge();
        isPointer = qtd_QDomDocument_QTypeInfo_isPointer();
        isDummy = qtd_QDomDocument_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QDomDocument_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QDomDocument_native_copy(const void* orig);
extern (C) void qtd_QDomDocument_delete(void *ptr);
extern (C) void qtd_QDomDocument_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDomDocument_QDomDocument();
private extern(C) void* qtd_QDomDocument_QDomDocument_QDomDocument(void* x0);
private extern(C) void* qtd_QDomDocument_QDomDocument_QDomDocumentType(void* doctype0);
private extern(C) void* qtd_QDomDocument_QDomDocument_string(string name0);
private extern(C) void*  qtd_QDomDocument_createAttribute_string(void* __this_nativeId,
 string name0);
private extern(C) void*  qtd_QDomDocument_createAttributeNS_string_string(void* __this_nativeId,
 string nsURI0,
 string qName1);
private extern(C) void*  qtd_QDomDocument_createCDATASection_string(void* __this_nativeId,
 string data0);
private extern(C) void*  qtd_QDomDocument_createComment_string(void* __this_nativeId,
 string data0);
private extern(C) void*  qtd_QDomDocument_createDocumentFragment(void* __this_nativeId);
private extern(C) void*  qtd_QDomDocument_createElement_string(void* __this_nativeId,
 string tagName0);
private extern(C) void*  qtd_QDomDocument_createElementNS_string_string(void* __this_nativeId,
 string nsURI0,
 string qName1);
private extern(C) void*  qtd_QDomDocument_createEntityReference_string(void* __this_nativeId,
 string name0);
private extern(C) void*  qtd_QDomDocument_createProcessingInstruction_string_string(void* __this_nativeId,
 string target0,
 string data1);
private extern(C) void*  qtd_QDomDocument_createTextNode_string(void* __this_nativeId,
 string data0);
private extern(C) void*  qtd_QDomDocument_doctype_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomDocument_documentElement_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomDocument_elementById_string(void* __this_nativeId,
 string elementId0);
private extern(C) void*  qtd_QDomDocument_elementsByTagName_string_const(void* __this_nativeId,
 string tagname0);
private extern(C) void*  qtd_QDomDocument_elementsByTagNameNS_string_string(void* __this_nativeId,
 string nsURI0,
 string localName1);
private extern(C) void*  qtd_QDomDocument_implementation_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomDocument_importNode_QDomNode_bool(void* __this_nativeId,
 void* importedNode0,
 bool deep1);
private extern(C) bool  qtd_QDomDocument_setContent_QIODevice_nativepointerstring_nativepointerint_nativepointerint(void* __this_nativeId,
 void* dev0,
 string errorMsg1,
 int* errorLine2,
 int* errorColumn3);
private extern(C) bool  qtd_QDomDocument_setContent_QIODevice_bool_nativepointerstring_nativepointerint_nativepointerint(void* __this_nativeId,
 void* dev0,
 bool namespaceProcessing1,
 string errorMsg2,
 int* errorLine3,
 int* errorColumn4);
private extern(C) bool  qtd_QDomDocument_setContent_QXmlInputSource_QXmlReader_nativepointerstring_nativepointerint_nativepointerint(void* __this_nativeId,
 void* source0,
 void* reader1,
 string errorMsg2,
 int* errorLine3,
 int* errorColumn4);
private extern(C) bool  qtd_QDomDocument_setContent_QXmlInputSource_bool_nativepointerstring_nativepointerint_nativepointerint(void* __this_nativeId,
 void* source0,
 bool namespaceProcessing1,
 string errorMsg2,
 int* errorLine3,
 int* errorColumn4);
private extern(C) bool  qtd_QDomDocument_setContent_QByteArray_nativepointerstring_nativepointerint_nativepointerint(void* __this_nativeId,
 void* text0,
 string errorMsg1,
 int* errorLine2,
 int* errorColumn3);
private extern(C) bool  qtd_QDomDocument_setContent_QByteArray_bool_nativepointerstring_nativepointerint_nativepointerint(void* __this_nativeId,
 void* text0,
 bool namespaceProcessing1,
 string errorMsg2,
 int* errorLine3,
 int* errorColumn4);
private extern(C) bool  qtd_QDomDocument_setContent_string_nativepointerstring_nativepointerint_nativepointerint(void* __this_nativeId,
 string text0,
 string errorMsg1,
 int* errorLine2,
 int* errorColumn3);
private extern(C) bool  qtd_QDomDocument_setContent_string_bool_nativepointerstring_nativepointerint_nativepointerint(void* __this_nativeId,
 string text0,
 bool namespaceProcessing1,
 string errorMsg2,
 int* errorLine3,
 int* errorColumn4);
private extern(C) void*  qtd_QDomDocument_toByteArray_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QDomDocument_toString_int_const(void* __this_nativeId,
 void* __d_return_value,
 int arg__1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QDomDocument() {
    QDomDocument.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QDomDocument_QTypeInfo_isComplex();
private extern (C) bool qtd_QDomDocument_QTypeInfo_isStatic();
private extern (C) bool qtd_QDomDocument_QTypeInfo_isLarge();
private extern (C) bool qtd_QDomDocument_QTypeInfo_isPointer();
private extern (C) bool qtd_QDomDocument_QTypeInfo_isDummy();
