module qt.xml.QDomNode;

public import qt.xml.QDomNode_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.xml.QDomProcessingInstruction;
public import qt.xml.QDomNotation;
public import qt.xml.QDomAttr;
public import qt.xml.QDomNodeList;
public import qt.xml.QDomElement;
public import qt.xml.QDomDocumentType;
public import qt.xml.QDomComment;
public import qt.xml.QDomEntityReference;
public import qt.core.QTextStream;
public import qt.xml.QDomCharacterData;
public import qt.xml.QDomText;
public import qt.xml.QDomDocument;
public import qt.xml.QDomDocumentFragment;
public import qt.xml.QDomEntity;
public import qt.xml.QDomCDATASection;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDomNode : QtdObject
{
    public enum NodeType {
        ElementNode = 1,
        AttributeNode = 2,
        TextNode = 3,
        CDATASectionNode = 4,
        EntityReferenceNode = 5,
        EntityNode = 6,
        ProcessingInstructionNode = 7,
        CommentNode = 8,
        DocumentNode = 9,
        DocumentTypeNode = 10,
        DocumentFragmentNode = 11,
        NotationNode = 12,
        BaseNode = 21,
        CharacterDataNode = 22
    }

    alias NodeType.ElementNode ElementNode;
    alias NodeType.AttributeNode AttributeNode;
    alias NodeType.TextNode TextNode;
    alias NodeType.CDATASectionNode CDATASectionNode;
    alias NodeType.EntityReferenceNode EntityReferenceNode;
    alias NodeType.EntityNode EntityNode;
    alias NodeType.ProcessingInstructionNode ProcessingInstructionNode;
    alias NodeType.CommentNode CommentNode;
    alias NodeType.DocumentNode DocumentNode;
    alias NodeType.DocumentTypeNode DocumentTypeNode;
    alias NodeType.DocumentFragmentNode DocumentFragmentNode;
    alias NodeType.NotationNode NotationNode;
    alias NodeType.BaseNode BaseNode;
    alias NodeType.CharacterDataNode CharacterDataNode;

    public enum EncodingPolicy {
        EncodingFromDocument = 1,
        EncodingFromTextStream = 2
    }

    alias EncodingPolicy.EncodingFromDocument EncodingFromDocument;
    alias EncodingPolicy.EncodingFromTextStream EncodingFromTextStream;


// Functions

    public this() {
        void* ret = qtd_QDomNode_QDomNode();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDomNode) arg__1) {
        void* ret = qtd_QDomNode_QDomNode_QDomNode(arg__1 is null ? null : (cast(QDomNode)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QDomNode appendChild(const(QDomNode) newChild) {
        void* ret = qtd_QDomNode_appendChild_QDomNode(qtdNativeId, newChild is null ? null : (cast(QDomNode)newChild).qtdNativeId);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    public final QDomNodeList childNodes() const {
        void* ret = qtd_QDomNode_childNodes_const(qtdNativeId);
        QDomNodeList __d_return_value = new QDomNodeList(ret);
        return __d_return_value;
    }

    public final void clear() {
        qtd_QDomNode_clear(qtdNativeId);
    }

    public final QDomNode cloneNode(bool deep = true) const {
        void* ret = qtd_QDomNode_cloneNode_bool_const(qtdNativeId, deep);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    public final int columnNumber() const {
        return qtd_QDomNode_columnNumber_const(qtdNativeId);
    }

    public final QDomNode firstChild() const {
        void* ret = qtd_QDomNode_firstChild_const(qtdNativeId);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    public final QDomElement firstChildElement(string tagName = "") const {
        void* ret = qtd_QDomNode_firstChildElement_string_const(qtdNativeId, tagName);
        QDomElement __d_return_value = new QDomElement(ret);
        return __d_return_value;
    }

    public final bool hasAttributes() const {
        return qtd_QDomNode_hasAttributes_const(qtdNativeId);
    }

    public final bool hasChildNodes() const {
        return qtd_QDomNode_hasChildNodes_const(qtdNativeId);
    }

    public final QDomNode insertAfter(const(QDomNode) newChild, const(QDomNode) refChild) {
        void* ret = qtd_QDomNode_insertAfter_QDomNode_QDomNode(qtdNativeId, newChild is null ? null : (cast(QDomNode)newChild).qtdNativeId, refChild is null ? null : (cast(QDomNode)refChild).qtdNativeId);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    public final QDomNode insertBefore(const(QDomNode) newChild, const(QDomNode) refChild) {
        void* ret = qtd_QDomNode_insertBefore_QDomNode_QDomNode(qtdNativeId, newChild is null ? null : (cast(QDomNode)newChild).qtdNativeId, refChild is null ? null : (cast(QDomNode)refChild).qtdNativeId);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    public final bool isAttr() const {
        return qtd_QDomNode_isAttr_const(qtdNativeId);
    }

    public final bool isCDATASection() const {
        return qtd_QDomNode_isCDATASection_const(qtdNativeId);
    }

    public final bool isCharacterData() const {
        return qtd_QDomNode_isCharacterData_const(qtdNativeId);
    }

    public final bool isComment() const {
        return qtd_QDomNode_isComment_const(qtdNativeId);
    }

    public final bool isDocument() const {
        return qtd_QDomNode_isDocument_const(qtdNativeId);
    }

    public final bool isDocumentFragment() const {
        return qtd_QDomNode_isDocumentFragment_const(qtdNativeId);
    }

    public final bool isDocumentType() const {
        return qtd_QDomNode_isDocumentType_const(qtdNativeId);
    }

    public final bool isElement() const {
        return qtd_QDomNode_isElement_const(qtdNativeId);
    }

    public final bool isEntity() const {
        return qtd_QDomNode_isEntity_const(qtdNativeId);
    }

    public final bool isEntityReference() const {
        return qtd_QDomNode_isEntityReference_const(qtdNativeId);
    }

    public final bool isNotation() const {
        return qtd_QDomNode_isNotation_const(qtdNativeId);
    }

    public final bool isNull() const {
        return qtd_QDomNode_isNull_const(qtdNativeId);
    }

    public final bool isProcessingInstruction() const {
        return qtd_QDomNode_isProcessingInstruction_const(qtdNativeId);
    }

    public final bool isSupported(string feature, string version_) const {
        return qtd_QDomNode_isSupported_string_string_const(qtdNativeId, feature, version_);
    }

    public final bool isText() const {
        return qtd_QDomNode_isText_const(qtdNativeId);
    }

    public final QDomNode lastChild() const {
        void* ret = qtd_QDomNode_lastChild_const(qtdNativeId);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    public final QDomElement lastChildElement(string tagName = "") const {
        void* ret = qtd_QDomNode_lastChildElement_string_const(qtdNativeId, tagName);
        QDomElement __d_return_value = new QDomElement(ret);
        return __d_return_value;
    }

    public final int lineNumber() const {
        return qtd_QDomNode_lineNumber_const(qtdNativeId);
    }

    public final string localName() const {
        string res;
        qtd_QDomNode_localName_const(qtdNativeId, &res);
        return res;
    }

    public final QDomNode namedItem(string name) const {
        void* ret = qtd_QDomNode_namedItem_string_const(qtdNativeId, name);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    public final string namespaceURI() const {
        string res;
        qtd_QDomNode_namespaceURI_const(qtdNativeId, &res);
        return res;
    }

    public final QDomNode nextSibling() const {
        void* ret = qtd_QDomNode_nextSibling_const(qtdNativeId);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    public final QDomElement nextSiblingElement(string taName = "") const {
        void* ret = qtd_QDomNode_nextSiblingElement_string_const(qtdNativeId, taName);
        QDomElement __d_return_value = new QDomElement(ret);
        return __d_return_value;
    }

    public final string nodeName() const {
        string res;
        qtd_QDomNode_nodeName_const(qtdNativeId, &res);
        return res;
    }

    public final QDomNode.NodeType nodeType() const {
        return cast(QDomNode.NodeType) qtd_QDomNode_nodeType_const(qtdNativeId);
    }

    public final string nodeValue() const {
        string res;
        qtd_QDomNode_nodeValue_const(qtdNativeId, &res);
        return res;
    }

    public final void normalize() {
        qtd_QDomNode_normalize(qtdNativeId);
    }

    public final void writeTo(QTextStream arg__1) {
        qtd_QDomNode_writeTo_QTextStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool operator_equal(const(QDomNode) arg__1) const {
        return qtd_QDomNode_operator_equal_QDomNode_const(qtdNativeId, arg__1 is null ? null : (cast(QDomNode)arg__1).qtdNativeId);
    }

    public final QDomDocument ownerDocument() const {
        void* ret = qtd_QDomNode_ownerDocument_const(qtdNativeId);
        QDomDocument __d_return_value = new QDomDocument(ret);
        return __d_return_value;
    }

    public final QDomNode parentNode() const {
        void* ret = qtd_QDomNode_parentNode_const(qtdNativeId);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    public final string prefix() const {
        string res;
        qtd_QDomNode_prefix_const(qtdNativeId, &res);
        return res;
    }

    public final QDomNode previousSibling() const {
        void* ret = qtd_QDomNode_previousSibling_const(qtdNativeId);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    public final QDomElement previousSiblingElement(string tagName = "") const {
        void* ret = qtd_QDomNode_previousSiblingElement_string_const(qtdNativeId, tagName);
        QDomElement __d_return_value = new QDomElement(ret);
        return __d_return_value;
    }

    public final QDomNode removeChild(const(QDomNode) oldChild) {
        void* ret = qtd_QDomNode_removeChild_QDomNode(qtdNativeId, oldChild is null ? null : (cast(QDomNode)oldChild).qtdNativeId);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    public final QDomNode replaceChild(const(QDomNode) newChild, const(QDomNode) oldChild) {
        void* ret = qtd_QDomNode_replaceChild_QDomNode_QDomNode(qtdNativeId, newChild is null ? null : (cast(QDomNode)newChild).qtdNativeId, oldChild is null ? null : (cast(QDomNode)oldChild).qtdNativeId);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    public final void save(QTextStream arg__1, int arg__2) const {
        qtd_QDomNode_save_QTextStream_int_const(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId, arg__2);
    }

    public final void save(QTextStream arg__1, int arg__2, QDomNode.EncodingPolicy arg__3) const {
        qtd_QDomNode_save_QTextStream_int_EncodingPolicy_const(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId, arg__2, arg__3);
    }

    public final void setNodeValue(string arg__1) {
        qtd_QDomNode_setNodeValue_string(qtdNativeId, arg__1);
    }

    public final void setPrefix(string pre) {
        qtd_QDomNode_setPrefix_string(qtdNativeId, pre);
    }

    public final QDomAttr toAttr() const {
        void* ret = qtd_QDomNode_toAttr_const(qtdNativeId);
        QDomAttr __d_return_value = new QDomAttr(ret);
        return __d_return_value;
    }

    public final QDomCDATASection toCDATASection() const {
        void* ret = qtd_QDomNode_toCDATASection_const(qtdNativeId);
        QDomCDATASection __d_return_value = new QDomCDATASection(ret);
        return __d_return_value;
    }

    public final QDomCharacterData toCharacterData() const {
        void* ret = qtd_QDomNode_toCharacterData_const(qtdNativeId);
        QDomCharacterData __d_return_value = new QDomCharacterData(ret);
        return __d_return_value;
    }

    public final QDomComment toComment() const {
        void* ret = qtd_QDomNode_toComment_const(qtdNativeId);
        QDomComment __d_return_value = new QDomComment(ret);
        return __d_return_value;
    }

    public final QDomDocument toDocument() const {
        void* ret = qtd_QDomNode_toDocument_const(qtdNativeId);
        QDomDocument __d_return_value = new QDomDocument(ret);
        return __d_return_value;
    }

    public final QDomDocumentFragment toDocumentFragment() const {
        void* ret = qtd_QDomNode_toDocumentFragment_const(qtdNativeId);
        QDomDocumentFragment __d_return_value = new QDomDocumentFragment(ret);
        return __d_return_value;
    }

    public final QDomDocumentType toDocumentType() const {
        void* ret = qtd_QDomNode_toDocumentType_const(qtdNativeId);
        QDomDocumentType __d_return_value = new QDomDocumentType(ret);
        return __d_return_value;
    }

    public final QDomElement toElement() const {
        void* ret = qtd_QDomNode_toElement_const(qtdNativeId);
        QDomElement __d_return_value = new QDomElement(ret);
        return __d_return_value;
    }

    public final QDomEntity toEntity() const {
        void* ret = qtd_QDomNode_toEntity_const(qtdNativeId);
        QDomEntity __d_return_value = new QDomEntity(ret);
        return __d_return_value;
    }

    public final QDomEntityReference toEntityReference() const {
        void* ret = qtd_QDomNode_toEntityReference_const(qtdNativeId);
        QDomEntityReference __d_return_value = new QDomEntityReference(ret);
        return __d_return_value;
    }

    public final QDomNotation toNotation() const {
        void* ret = qtd_QDomNode_toNotation_const(qtdNativeId);
        QDomNotation __d_return_value = new QDomNotation(ret);
        return __d_return_value;
    }

    public final QDomProcessingInstruction toProcessingInstruction() const {
        void* ret = qtd_QDomNode_toProcessingInstruction_const(qtdNativeId);
        QDomProcessingInstruction __d_return_value = new QDomProcessingInstruction(ret);
        return __d_return_value;
    }

    public final QDomText toText() const {
        void* ret = qtd_QDomNode_toText_const(qtdNativeId);
        QDomText __d_return_value = new QDomText(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QDomNode;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QDomNode_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QDomNode_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDomNode_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDomNode_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDomNode_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QDomNode_QTypeInfo_isComplex();
        isStatic = qtd_QDomNode_QTypeInfo_isStatic();
        isLarge = qtd_QDomNode_QTypeInfo_isLarge();
        isPointer = qtd_QDomNode_QTypeInfo_isPointer();
        isDummy = qtd_QDomNode_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QDomNode_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QDomNode_native_copy(const void* orig);
extern (C) void qtd_QDomNode_delete(void *ptr);
extern (C) void qtd_QDomNode_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDomNode_QDomNode();
private extern(C) void* qtd_QDomNode_QDomNode_QDomNode(void* arg__1);
private extern(C) void*  qtd_QDomNode_appendChild_QDomNode(void* __this_nativeId,
 void* newChild0);
private extern(C) void*  qtd_QDomNode_childNodes_const(void* __this_nativeId);
private extern(C) void  qtd_QDomNode_clear(void* __this_nativeId);
private extern(C) void*  qtd_QDomNode_cloneNode_bool_const(void* __this_nativeId,
 bool deep0);
private extern(C) int  qtd_QDomNode_columnNumber_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNode_firstChild_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNode_firstChildElement_string_const(void* __this_nativeId,
 string tagName0);
private extern(C) bool  qtd_QDomNode_hasAttributes_const(void* __this_nativeId);
private extern(C) bool  qtd_QDomNode_hasChildNodes_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNode_insertAfter_QDomNode_QDomNode(void* __this_nativeId,
 void* newChild0,
 void* refChild1);
private extern(C) void*  qtd_QDomNode_insertBefore_QDomNode_QDomNode(void* __this_nativeId,
 void* newChild0,
 void* refChild1);
private extern(C) bool  qtd_QDomNode_isAttr_const(void* __this_nativeId);
private extern(C) bool  qtd_QDomNode_isCDATASection_const(void* __this_nativeId);
private extern(C) bool  qtd_QDomNode_isCharacterData_const(void* __this_nativeId);
private extern(C) bool  qtd_QDomNode_isComment_const(void* __this_nativeId);
private extern(C) bool  qtd_QDomNode_isDocument_const(void* __this_nativeId);
private extern(C) bool  qtd_QDomNode_isDocumentFragment_const(void* __this_nativeId);
private extern(C) bool  qtd_QDomNode_isDocumentType_const(void* __this_nativeId);
private extern(C) bool  qtd_QDomNode_isElement_const(void* __this_nativeId);
private extern(C) bool  qtd_QDomNode_isEntity_const(void* __this_nativeId);
private extern(C) bool  qtd_QDomNode_isEntityReference_const(void* __this_nativeId);
private extern(C) bool  qtd_QDomNode_isNotation_const(void* __this_nativeId);
private extern(C) bool  qtd_QDomNode_isNull_const(void* __this_nativeId);
private extern(C) bool  qtd_QDomNode_isProcessingInstruction_const(void* __this_nativeId);
private extern(C) bool  qtd_QDomNode_isSupported_string_string_const(void* __this_nativeId,
 string feature0,
 string version1);
private extern(C) bool  qtd_QDomNode_isText_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNode_lastChild_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNode_lastChildElement_string_const(void* __this_nativeId,
 string tagName0);
private extern(C) int  qtd_QDomNode_lineNumber_const(void* __this_nativeId);
private extern(C) void  qtd_QDomNode_localName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QDomNode_namedItem_string_const(void* __this_nativeId,
 string name0);
private extern(C) void  qtd_QDomNode_namespaceURI_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QDomNode_nextSibling_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNode_nextSiblingElement_string_const(void* __this_nativeId,
 string taName0);
private extern(C) void  qtd_QDomNode_nodeName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QDomNode_nodeType_const(void* __this_nativeId);
private extern(C) void  qtd_QDomNode_nodeValue_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QDomNode_normalize(void* __this_nativeId);
private extern(C) void  qtd_QDomNode_writeTo_QTextStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QDomNode_operator_equal_QDomNode_const(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QDomNode_ownerDocument_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNode_parentNode_const(void* __this_nativeId);
private extern(C) void  qtd_QDomNode_prefix_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QDomNode_previousSibling_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNode_previousSiblingElement_string_const(void* __this_nativeId,
 string tagName0);
private extern(C) void*  qtd_QDomNode_removeChild_QDomNode(void* __this_nativeId,
 void* oldChild0);
private extern(C) void*  qtd_QDomNode_replaceChild_QDomNode_QDomNode(void* __this_nativeId,
 void* newChild0,
 void* oldChild1);
private extern(C) void  qtd_QDomNode_save_QTextStream_int_const(void* __this_nativeId,
 void* arg__1,
 int arg__2);
private extern(C) void  qtd_QDomNode_save_QTextStream_int_EncodingPolicy_const(void* __this_nativeId,
 void* arg__1,
 int arg__2,
 int arg__3);
private extern(C) void  qtd_QDomNode_setNodeValue_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QDomNode_setPrefix_string(void* __this_nativeId,
 string pre0);
private extern(C) void*  qtd_QDomNode_toAttr_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNode_toCDATASection_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNode_toCharacterData_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNode_toComment_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNode_toDocument_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNode_toDocumentFragment_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNode_toDocumentType_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNode_toElement_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNode_toEntity_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNode_toEntityReference_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNode_toNotation_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNode_toProcessingInstruction_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNode_toText_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QDomNode() {
    QDomNode.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QDomNode_QTypeInfo_isComplex();
private extern (C) bool qtd_QDomNode_QTypeInfo_isStatic();
private extern (C) bool qtd_QDomNode_QTypeInfo_isLarge();
private extern (C) bool qtd_QDomNode_QTypeInfo_isPointer();
private extern (C) bool qtd_QDomNode_QTypeInfo_isDummy();
