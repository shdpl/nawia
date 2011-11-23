module qt.xml.QDomElement;

public import qt.xml.QDomElement_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.xml.QDomNode;
public import qt.xml.QDomNodeList;
public import qt.xml.QDomAttr;
public import qt.xml.QDomNamedNodeMap;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDomElement : QDomNode
{

// Functions

    public this() {
        void* ret = qtd_QDomElement_QDomElement();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDomElement) x) {
        void* ret = qtd_QDomElement_QDomElement_QDomElement(x is null ? null : (cast(QDomElement)x).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string attribute(string name, string defValue = "") const {
        string res;
        qtd_QDomElement_attribute_string_string_const(qtdNativeId, &res, name, defValue);
        return res;
    }

    public final string attributeNS(string nsURI, string localName, string defValue = "") const {
        string res;
        qtd_QDomElement_attributeNS_string_string_string_const(qtdNativeId, &res, nsURI, localName, defValue);
        return res;
    }

    public final QDomAttr attributeNode(string name) {
        void* ret = qtd_QDomElement_attributeNode_string(qtdNativeId, name);
        QDomAttr __d_return_value = new QDomAttr(ret);
        return __d_return_value;
    }

    public final QDomAttr attributeNodeNS(string nsURI, string localName) {
        void* ret = qtd_QDomElement_attributeNodeNS_string_string(qtdNativeId, nsURI, localName);
        QDomAttr __d_return_value = new QDomAttr(ret);
        return __d_return_value;
    }

    public final QDomNamedNodeMap attributes() const {
        void* ret = qtd_QDomElement_attributes_const(qtdNativeId);
        QDomNamedNodeMap __d_return_value = new QDomNamedNodeMap(ret);
        return __d_return_value;
    }

    public final QDomNodeList elementsByTagName(string tagname) const {
        void* ret = qtd_QDomElement_elementsByTagName_string_const(qtdNativeId, tagname);
        QDomNodeList __d_return_value = new QDomNodeList(ret);
        return __d_return_value;
    }

    public final QDomNodeList elementsByTagNameNS(string nsURI, string localName) const {
        void* ret = qtd_QDomElement_elementsByTagNameNS_string_string_const(qtdNativeId, nsURI, localName);
        QDomNodeList __d_return_value = new QDomNodeList(ret);
        return __d_return_value;
    }

    public final bool hasAttribute(string name) const {
        return qtd_QDomElement_hasAttribute_string_const(qtdNativeId, name);
    }

    public final bool hasAttributeNS(string nsURI, string localName) const {
        return qtd_QDomElement_hasAttributeNS_string_string_const(qtdNativeId, nsURI, localName);
    }

    public final void removeAttribute(string name) {
        qtd_QDomElement_removeAttribute_string(qtdNativeId, name);
    }

    public final void removeAttributeNS(string nsURI, string localName) {
        qtd_QDomElement_removeAttributeNS_string_string(qtdNativeId, nsURI, localName);
    }

    public final QDomAttr removeAttributeNode(const(QDomAttr) oldAttr) {
        void* ret = qtd_QDomElement_removeAttributeNode_QDomAttr(qtdNativeId, oldAttr is null ? null : (cast(QDomAttr)oldAttr).qtdNativeId);
        QDomAttr __d_return_value = new QDomAttr(ret);
        return __d_return_value;
    }

    public final void setAttribute(string name, string value) {
        qtd_QDomElement_setAttribute_string_string(qtdNativeId, name, value);
    }

    public final void setAttribute(string name, double value) {
        qtd_QDomElement_setAttribute_string_double(qtdNativeId, name, value);
    }

    public final void setAttribute(string name, float value) {
        qtd_QDomElement_setAttribute_string_float(qtdNativeId, name, value);
    }

    public final void setAttribute(string name, int value) {
        qtd_QDomElement_setAttribute_string_int(qtdNativeId, name, value);
    }

    public final void setAttributeNS(string nsURI, string qName, string value) {
        qtd_QDomElement_setAttributeNS_string_string_string(qtdNativeId, nsURI, qName, value);
    }

    public final void setAttributeNS(string nsURI, string qName, double value) {
        qtd_QDomElement_setAttributeNS_string_string_double(qtdNativeId, nsURI, qName, value);
    }

    public final void setAttributeNS(string nsURI, string qName, int value) {
        qtd_QDomElement_setAttributeNS_string_string_int(qtdNativeId, nsURI, qName, value);
    }

    public final QDomAttr setAttributeNode(const(QDomAttr) newAttr) {
        void* ret = qtd_QDomElement_setAttributeNode_QDomAttr(qtdNativeId, newAttr is null ? null : (cast(QDomAttr)newAttr).qtdNativeId);
        QDomAttr __d_return_value = new QDomAttr(ret);
        return __d_return_value;
    }

    public final QDomAttr setAttributeNodeNS(const(QDomAttr) newAttr) {
        void* ret = qtd_QDomElement_setAttributeNodeNS_QDomAttr(qtdNativeId, newAttr is null ? null : (cast(QDomAttr)newAttr).qtdNativeId);
        QDomAttr __d_return_value = new QDomAttr(ret);
        return __d_return_value;
    }

    public final void setTagName(string name) {
        qtd_QDomElement_setTagName_string(qtdNativeId, name);
    }

    public final string tagName() const {
        string res;
        qtd_QDomElement_tagName_const(qtdNativeId, &res);
        return res;
    }

    public final string text() const {
        string res;
        qtd_QDomElement_text_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    public alias void __isQtType_QDomElement;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QDomElement_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QDomElement_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDomElement_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDomElement_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDomElement_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QDomElement_QTypeInfo_isComplex();
        isStatic = qtd_QDomElement_QTypeInfo_isStatic();
        isLarge = qtd_QDomElement_QTypeInfo_isLarge();
        isPointer = qtd_QDomElement_QTypeInfo_isPointer();
        isDummy = qtd_QDomElement_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QDomElement_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QDomElement_native_copy(const void* orig);
extern (C) void qtd_QDomElement_delete(void *ptr);
extern (C) void qtd_QDomElement_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDomElement_QDomElement();
private extern(C) void* qtd_QDomElement_QDomElement_QDomElement(void* x0);
private extern(C) void  qtd_QDomElement_attribute_string_string_const(void* __this_nativeId,
 void* __d_return_value,
 string name0,
 string defValue1);
private extern(C) void  qtd_QDomElement_attributeNS_string_string_string_const(void* __this_nativeId,
 void* __d_return_value,
 string nsURI0,
 string localName1,
 string defValue2);
private extern(C) void*  qtd_QDomElement_attributeNode_string(void* __this_nativeId,
 string name0);
private extern(C) void*  qtd_QDomElement_attributeNodeNS_string_string(void* __this_nativeId,
 string nsURI0,
 string localName1);
private extern(C) void*  qtd_QDomElement_attributes_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomElement_elementsByTagName_string_const(void* __this_nativeId,
 string tagname0);
private extern(C) void*  qtd_QDomElement_elementsByTagNameNS_string_string_const(void* __this_nativeId,
 string nsURI0,
 string localName1);
private extern(C) bool  qtd_QDomElement_hasAttribute_string_const(void* __this_nativeId,
 string name0);
private extern(C) bool  qtd_QDomElement_hasAttributeNS_string_string_const(void* __this_nativeId,
 string nsURI0,
 string localName1);
private extern(C) void  qtd_QDomElement_removeAttribute_string(void* __this_nativeId,
 string name0);
private extern(C) void  qtd_QDomElement_removeAttributeNS_string_string(void* __this_nativeId,
 string nsURI0,
 string localName1);
private extern(C) void*  qtd_QDomElement_removeAttributeNode_QDomAttr(void* __this_nativeId,
 void* oldAttr0);
private extern(C) void  qtd_QDomElement_setAttribute_string_string(void* __this_nativeId,
 string name0,
 string value1);
private extern(C) void  qtd_QDomElement_setAttribute_string_double(void* __this_nativeId,
 string name0,
 double value1);
private extern(C) void  qtd_QDomElement_setAttribute_string_float(void* __this_nativeId,
 string name0,
 float value1);
private extern(C) void  qtd_QDomElement_setAttribute_string_int(void* __this_nativeId,
 string name0,
 int value1);
private extern(C) void  qtd_QDomElement_setAttributeNS_string_string_string(void* __this_nativeId,
 string nsURI0,
 string qName1,
 string value2);
private extern(C) void  qtd_QDomElement_setAttributeNS_string_string_double(void* __this_nativeId,
 string nsURI0,
 string qName1,
 double value2);
private extern(C) void  qtd_QDomElement_setAttributeNS_string_string_int(void* __this_nativeId,
 string nsURI0,
 string qName1,
 int value2);
private extern(C) void*  qtd_QDomElement_setAttributeNode_QDomAttr(void* __this_nativeId,
 void* newAttr0);
private extern(C) void*  qtd_QDomElement_setAttributeNodeNS_QDomAttr(void* __this_nativeId,
 void* newAttr0);
private extern(C) void  qtd_QDomElement_setTagName_string(void* __this_nativeId,
 string name0);
private extern(C) void  qtd_QDomElement_tagName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QDomElement_text_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QDomElement() {
    QDomElement.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QDomElement_QTypeInfo_isComplex();
private extern (C) bool qtd_QDomElement_QTypeInfo_isStatic();
private extern (C) bool qtd_QDomElement_QTypeInfo_isLarge();
private extern (C) bool qtd_QDomElement_QTypeInfo_isPointer();
private extern (C) bool qtd_QDomElement_QTypeInfo_isDummy();
