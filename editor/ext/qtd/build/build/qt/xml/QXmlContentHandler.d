module qt.xml.QXmlContentHandler;

public import qt.xml.QXmlContentHandler_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.xml.QXmlLocator;
public import qt.xml.QXmlAttributes;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QXmlContentHandler : QtdObject, IQXmlContentHandler
{

// Functions

    public this() {
        void* ret = qtd_QXmlContentHandler_QXmlContentHandler(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract bool characters(string ch);

    public abstract bool endDocument();

    public abstract bool endElement(string namespaceURI, string localName, string qName);

    public abstract bool endPrefixMapping(string prefix);

    public abstract string errorString() const;

    public abstract bool ignorableWhitespace(string ch);

    public abstract bool processingInstruction(string target, string data);

    public abstract void setDocumentLocator(QXmlLocator locator);

    public abstract bool skippedEntity(string name);

    public abstract bool startDocument();

    public abstract bool startElement(string namespaceURI, string localName, string qName, const(QXmlAttributes) atts);

    public abstract bool startPrefixMapping(string prefix, string uri);
// Field accessors
    static IQXmlContentHandler __getObject(void* nativeId) {
        return qtd_QXmlContentHandler_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QXmlContentHandler;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQXmlContentHandler = qtd_QXmlContentHandler_cast_to_QXmlContentHandler(nativeId);
    }

    private void* __m_ptr_IQXmlContentHandler;
    public void* __ptr_IQXmlContentHandler() { return __m_ptr_IQXmlContentHandler; }

    protected override void qtdDeleteNative() {
        qtd_QXmlContentHandler_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QXmlContentHandler_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QXmlContentHandler_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QXmlContentHandler_cast_to_QXmlContentHandler(void* nativeId);

    public class QXmlContentHandler_ConcreteWrapper : QXmlContentHandler {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public bool characters(string ch) {
            return qtd_QXmlContentHandler_characters_string(qtdNativeId, ch);
        }

        override         public bool endDocument() {
            return qtd_QXmlContentHandler_endDocument(qtdNativeId);
        }

        override         public bool endElement(string namespaceURI, string localName, string qName) {
            return qtd_QXmlContentHandler_endElement_string_string_string(qtdNativeId, namespaceURI, localName, qName);
        }

        override         public bool endPrefixMapping(string prefix) {
            return qtd_QXmlContentHandler_endPrefixMapping_string(qtdNativeId, prefix);
        }

        override         public string errorString() const {
            string res;
            qtd_QXmlContentHandler_errorString_const(qtdNativeId, &res);
            return res;
        }

        override         public bool ignorableWhitespace(string ch) {
            return qtd_QXmlContentHandler_ignorableWhitespace_string(qtdNativeId, ch);
        }

        override         public bool processingInstruction(string target, string data) {
            return qtd_QXmlContentHandler_processingInstruction_string_string(qtdNativeId, target, data);
        }

        override         public void setDocumentLocator(QXmlLocator locator) {
            qtd_QXmlContentHandler_setDocumentLocator_QXmlLocator(qtdNativeId, locator is null ? null : locator.qtdNativeId);
        }

        override         public bool skippedEntity(string name) {
            return qtd_QXmlContentHandler_skippedEntity_string(qtdNativeId, name);
        }

        override         public bool startDocument() {
            return qtd_QXmlContentHandler_startDocument(qtdNativeId);
        }

        override         public bool startElement(string namespaceURI, string localName, string qName, const(QXmlAttributes) atts) {
            return qtd_QXmlContentHandler_startElement_string_string_string_QXmlAttributes(qtdNativeId, namespaceURI, localName, qName, atts is null ? null : (cast(QXmlAttributes)atts).qtdNativeId);
        }

        override         public bool startPrefixMapping(string prefix, string uri) {
            return qtd_QXmlContentHandler_startPrefixMapping_string_string(qtdNativeId, prefix, uri);
        }
    }


extern (C) void *__QXmlContentHandler_entity(void *q_ptr);

IQXmlContentHandler qtd_QXmlContentHandler_from_ptr(void* ret) {
    void* d_obj = __QXmlContentHandler_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(IQXmlContentHandler) d_obj_ref;
    } else {
        auto return_value = new QXmlContentHandler_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QXmlContentHandler_delete(void *ptr);
extern (C) void qtd_QXmlContentHandler_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlContentHandler_QXmlContentHandler(void *d_ptr);
private extern(C) bool  qtd_QXmlContentHandler_characters_string(void* __this_nativeId,
 string ch0);
private extern(C) bool  qtd_QXmlContentHandler_endDocument(void* __this_nativeId);
private extern(C) bool  qtd_QXmlContentHandler_endElement_string_string_string(void* __this_nativeId,
 string namespaceURI0,
 string localName1,
 string qName2);
private extern(C) bool  qtd_QXmlContentHandler_endPrefixMapping_string(void* __this_nativeId,
 string prefix0);
private extern(C) void  qtd_QXmlContentHandler_errorString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QXmlContentHandler_ignorableWhitespace_string(void* __this_nativeId,
 string ch0);
private extern(C) bool  qtd_QXmlContentHandler_processingInstruction_string_string(void* __this_nativeId,
 string target0,
 string data1);
private extern(C) void  qtd_QXmlContentHandler_setDocumentLocator_QXmlLocator(void* __this_nativeId,
 void* locator0);
private extern(C) bool  qtd_QXmlContentHandler_skippedEntity_string(void* __this_nativeId,
 string name0);
private extern(C) bool  qtd_QXmlContentHandler_startDocument(void* __this_nativeId);
private extern(C) bool  qtd_QXmlContentHandler_startElement_string_string_string_QXmlAttributes(void* __this_nativeId,
 string namespaceURI0,
 string localName1,
 string qName2,
 void* atts3);
private extern(C) bool  qtd_QXmlContentHandler_startPrefixMapping_string_string(void* __this_nativeId,
 string prefix0,
 string uri1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId, wchar* ch0, int ch0_size) qtd_QXmlContentHandler_characters_string_dispatch; }
extern(C) bool qtd_export_QXmlContentHandler_characters_string_dispatch(void *dId, wchar* ch0, int ch0_size){
    auto d_object = cast(IQXmlContentHandler)cast(Object) dId;
    string ch0_d_ref = toUTF8(ch0[0..ch0_size]);
    auto return_value = d_object.characters(ch0_d_ref);
    return return_value;
}

extern(C){ extern bool function(void *dId) qtd_QXmlContentHandler_endDocument_dispatch; }
extern(C) bool qtd_export_QXmlContentHandler_endDocument_dispatch(void *dId){
    auto d_object = cast(IQXmlContentHandler)cast(Object) dId;
    auto return_value = d_object.endDocument();
    return return_value;
}

extern(C){ extern bool function(void *dId, wchar* namespaceURI0, int namespaceURI0_size, wchar* localName1, int localName1_size, wchar* qName2, int qName2_size) qtd_QXmlContentHandler_endElement_string_string_string_dispatch; }
extern(C) bool qtd_export_QXmlContentHandler_endElement_string_string_string_dispatch(void *dId, wchar* namespaceURI0, int namespaceURI0_size, wchar* localName1, int localName1_size, wchar* qName2, int qName2_size){
    auto d_object = cast(IQXmlContentHandler)cast(Object) dId;
    string namespaceURI0_d_ref = toUTF8(namespaceURI0[0..namespaceURI0_size]);
    string localName1_d_ref = toUTF8(localName1[0..localName1_size]);
    string qName2_d_ref = toUTF8(qName2[0..qName2_size]);
    auto return_value = d_object.endElement(namespaceURI0_d_ref, localName1_d_ref, qName2_d_ref);
    return return_value;
}

extern(C){ extern bool function(void *dId, wchar* prefix0, int prefix0_size) qtd_QXmlContentHandler_endPrefixMapping_string_dispatch; }
extern(C) bool qtd_export_QXmlContentHandler_endPrefixMapping_string_dispatch(void *dId, wchar* prefix0, int prefix0_size){
    auto d_object = cast(IQXmlContentHandler)cast(Object) dId;
    string prefix0_d_ref = toUTF8(prefix0[0..prefix0_size]);
    auto return_value = d_object.endPrefixMapping(prefix0_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId, string* ret_str) qtd_QXmlContentHandler_errorString_const_dispatch; }
extern(C) void qtd_export_QXmlContentHandler_errorString_const_dispatch(void *dId, string* ret_str){
    auto d_object = cast(IQXmlContentHandler)cast(Object) dId;
    string _d_str = d_object.errorString();
    *ret_str = _d_str;
}

extern(C){ extern bool function(void *dId, wchar* ch0, int ch0_size) qtd_QXmlContentHandler_ignorableWhitespace_string_dispatch; }
extern(C) bool qtd_export_QXmlContentHandler_ignorableWhitespace_string_dispatch(void *dId, wchar* ch0, int ch0_size){
    auto d_object = cast(IQXmlContentHandler)cast(Object) dId;
    string ch0_d_ref = toUTF8(ch0[0..ch0_size]);
    auto return_value = d_object.ignorableWhitespace(ch0_d_ref);
    return return_value;
}

extern(C){ extern bool function(void *dId, wchar* target0, int target0_size, wchar* data1, int data1_size) qtd_QXmlContentHandler_processingInstruction_string_string_dispatch; }
extern(C) bool qtd_export_QXmlContentHandler_processingInstruction_string_string_dispatch(void *dId, wchar* target0, int target0_size, wchar* data1, int data1_size){
    auto d_object = cast(IQXmlContentHandler)cast(Object) dId;
    string target0_d_ref = toUTF8(target0[0..target0_size]);
    string data1_d_ref = toUTF8(data1[0..data1_size]);
    auto return_value = d_object.processingInstruction(target0_d_ref, data1_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId, void* locator0) qtd_QXmlContentHandler_setDocumentLocator_QXmlLocator_dispatch; }
extern(C) void qtd_export_QXmlContentHandler_setDocumentLocator_QXmlLocator_dispatch(void *dId, void* locator0){
    auto d_object = cast(IQXmlContentHandler)cast(Object) dId;
    scope locator0_d_ref = new QXmlLocator_ConcreteWrapper(locator0, QtdObjectInitFlags.onStack);
    d_object.setDocumentLocator(locator0_d_ref);
}

extern(C){ extern bool function(void *dId, wchar* name0, int name0_size) qtd_QXmlContentHandler_skippedEntity_string_dispatch; }
extern(C) bool qtd_export_QXmlContentHandler_skippedEntity_string_dispatch(void *dId, wchar* name0, int name0_size){
    auto d_object = cast(IQXmlContentHandler)cast(Object) dId;
    string name0_d_ref = toUTF8(name0[0..name0_size]);
    auto return_value = d_object.skippedEntity(name0_d_ref);
    return return_value;
}

extern(C){ extern bool function(void *dId) qtd_QXmlContentHandler_startDocument_dispatch; }
extern(C) bool qtd_export_QXmlContentHandler_startDocument_dispatch(void *dId){
    auto d_object = cast(IQXmlContentHandler)cast(Object) dId;
    auto return_value = d_object.startDocument();
    return return_value;
}

extern(C){ extern bool function(void *dId, wchar* namespaceURI0, int namespaceURI0_size, wchar* localName1, int localName1_size, wchar* qName2, int qName2_size, void* atts3) qtd_QXmlContentHandler_startElement_string_string_string_QXmlAttributes_dispatch; }
extern(C) bool qtd_export_QXmlContentHandler_startElement_string_string_string_QXmlAttributes_dispatch(void *dId, wchar* namespaceURI0, int namespaceURI0_size, wchar* localName1, int localName1_size, wchar* qName2, int qName2_size, void* atts3){
    auto d_object = cast(IQXmlContentHandler)cast(Object) dId;
    string namespaceURI0_d_ref = toUTF8(namespaceURI0[0..namespaceURI0_size]);
    string localName1_d_ref = toUTF8(localName1[0..localName1_size]);
    string qName2_d_ref = toUTF8(qName2[0..qName2_size]);
    scope atts3_d_ref = new QXmlAttributes(atts3, QtdObjectInitFlags.onStack);
    auto return_value = d_object.startElement(namespaceURI0_d_ref, localName1_d_ref, qName2_d_ref, atts3_d_ref);
    return return_value;
}

extern(C){ extern bool function(void *dId, wchar* prefix0, int prefix0_size, wchar* uri1, int uri1_size) qtd_QXmlContentHandler_startPrefixMapping_string_string_dispatch; }
extern(C) bool qtd_export_QXmlContentHandler_startPrefixMapping_string_string_dispatch(void *dId, wchar* prefix0, int prefix0_size, wchar* uri1, int uri1_size){
    auto d_object = cast(IQXmlContentHandler)cast(Object) dId;
    string prefix0_d_ref = toUTF8(prefix0[0..prefix0_size]);
    string uri1_d_ref = toUTF8(uri1[0..uri1_size]);
    auto return_value = d_object.startPrefixMapping(prefix0_d_ref, uri1_d_ref);
    return return_value;
}

private extern (C) void qtd_QXmlContentHandler_initCallBacks(void* virtuals);

extern(C) void static_init_QXmlContentHandler() {
    void*[12] virt_arr;
    virt_arr[0] = &qtd_export_QXmlContentHandler_characters_string_dispatch;
    virt_arr[1] = &qtd_export_QXmlContentHandler_endDocument_dispatch;
    virt_arr[2] = &qtd_export_QXmlContentHandler_endElement_string_string_string_dispatch;
    virt_arr[3] = &qtd_export_QXmlContentHandler_endPrefixMapping_string_dispatch;
    virt_arr[4] = &qtd_export_QXmlContentHandler_errorString_const_dispatch;
    virt_arr[5] = &qtd_export_QXmlContentHandler_ignorableWhitespace_string_dispatch;
    virt_arr[6] = &qtd_export_QXmlContentHandler_processingInstruction_string_string_dispatch;
    virt_arr[7] = &qtd_export_QXmlContentHandler_setDocumentLocator_QXmlLocator_dispatch;
    virt_arr[8] = &qtd_export_QXmlContentHandler_skippedEntity_string_dispatch;
    virt_arr[9] = &qtd_export_QXmlContentHandler_startDocument_dispatch;
    virt_arr[10] = &qtd_export_QXmlContentHandler_startElement_string_string_string_QXmlAttributes_dispatch;
    virt_arr[11] = &qtd_export_QXmlContentHandler_startPrefixMapping_string_string_dispatch;
    qtd_QXmlContentHandler_initCallBacks(virt_arr.ptr);
}

// signal handlers

public interface IQXmlContentHandler
{
// Functions

        public bool characters(string ch);

        public bool endDocument();

        public bool endElement(string namespaceURI, string localName, string qName);

        public bool endPrefixMapping(string prefix);

        public string errorString() const;

        public bool ignorableWhitespace(string ch);

        public bool processingInstruction(string target, string data);

        public void setDocumentLocator(QXmlLocator locator);

        public bool skippedEntity(string name);

        public bool startDocument();

        public bool startElement(string namespaceURI, string localName, string qName, const(QXmlAttributes) atts);

        public bool startPrefixMapping(string prefix, string uri);

        public void* __ptr_IQXmlContentHandler();

// Field accessors
        public alias void __isQtType_IQXmlContentHandler;

        void qtdSetOwnership(QtdObjectOwnership own) const;// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

