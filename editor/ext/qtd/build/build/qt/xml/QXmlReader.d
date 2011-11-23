module qt.xml.QXmlReader;

public import qt.xml.QXmlReader_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.xml.QXmlLexicalHandler;
public import qt.xml.QXmlInputSource;
public import qt.xml.QXmlErrorHandler;
public import qt.xml.QXmlContentHandler;
public import qt.xml.QXmlDTDHandler;
public import qt.xml.QXmlEntityResolver;
public import qt.xml.QXmlDeclHandler;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QXmlReader : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QXmlReader_QXmlReader(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract IQXmlDTDHandler DTDHandler() const;

    public abstract IQXmlContentHandler contentHandler() const;

    public abstract IQXmlDeclHandler declHandler() const;

    public abstract IQXmlEntityResolver entityResolver() const;

    public abstract IQXmlErrorHandler errorHandler() const;

    public abstract bool feature(string name) const;

    public abstract bool hasFeature(string name) const;

    public abstract bool hasProperty(string name) const;

    public abstract IQXmlLexicalHandler lexicalHandler() const;

    public abstract bool parse(QXmlInputSource input);

    public abstract void setContentHandler(IQXmlContentHandler handler);

    public abstract void setDTDHandler(IQXmlDTDHandler handler);

    public abstract void setDeclHandler(IQXmlDeclHandler handler);

    public abstract void setEntityResolver(IQXmlEntityResolver handler);

    public abstract void setErrorHandler(IQXmlErrorHandler handler);

    public abstract void setFeature(string name, bool value);

    public abstract void setLexicalHandler(IQXmlLexicalHandler handler);
// Field accessors
    static QXmlReader __getObject(void* nativeId) {
        return qtd_QXmlReader_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QXmlReader;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QXmlReader_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QXmlReader_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QXmlReader_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QXmlReader_ConcreteWrapper : QXmlReader {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public IQXmlDTDHandler DTDHandler() const {
            void* ret = qtd_QXmlReader_DTDHandler_const(qtdNativeId);
            IQXmlDTDHandler __d_return_value = qtd_QXmlDTDHandler_from_ptr(ret);

            return __d_return_value;
        }

        override         public IQXmlContentHandler contentHandler() const {
            void* ret = qtd_QXmlReader_contentHandler_const(qtdNativeId);
            IQXmlContentHandler __d_return_value = qtd_QXmlContentHandler_from_ptr(ret);

            return __d_return_value;
        }

        override         public IQXmlDeclHandler declHandler() const {
            void* ret = qtd_QXmlReader_declHandler_const(qtdNativeId);
            IQXmlDeclHandler __d_return_value = qtd_QXmlDeclHandler_from_ptr(ret);

            return __d_return_value;
        }

        override         public IQXmlEntityResolver entityResolver() const {
            void* ret = qtd_QXmlReader_entityResolver_const(qtdNativeId);
            IQXmlEntityResolver __d_return_value = qtd_QXmlEntityResolver_from_ptr(ret);

            return __d_return_value;
        }

        override         public IQXmlErrorHandler errorHandler() const {
            void* ret = qtd_QXmlReader_errorHandler_const(qtdNativeId);
            IQXmlErrorHandler __d_return_value = qtd_QXmlErrorHandler_from_ptr(ret);

            return __d_return_value;
        }

        override         public bool feature(string name) const {
            return qtd_QXmlReader_feature_string_nativepointerbool_const(qtdNativeId, name);
        }

        override         public bool hasFeature(string name) const {
            return qtd_QXmlReader_hasFeature_string_const(qtdNativeId, name);
        }

        override         public bool hasProperty(string name) const {
            return qtd_QXmlReader_hasProperty_string_const(qtdNativeId, name);
        }

        override         public IQXmlLexicalHandler lexicalHandler() const {
            void* ret = qtd_QXmlReader_lexicalHandler_const(qtdNativeId);
            IQXmlLexicalHandler __d_return_value = qtd_QXmlLexicalHandler_from_ptr(ret);

            return __d_return_value;
        }

        override         public bool parse(QXmlInputSource input) {
            return qtd_QXmlReader_parse_QXmlInputSource(qtdNativeId, input is null ? null : (cast(QXmlInputSource)input).qtdNativeId);
        }

        override         public void setContentHandler(IQXmlContentHandler handler) {
            qtd_QXmlReader_setContentHandler_QXmlContentHandler(qtdNativeId, handler is null ? null : handler.__ptr_IQXmlContentHandler);
        }

        override         public void setDTDHandler(IQXmlDTDHandler handler) {
            qtd_QXmlReader_setDTDHandler_QXmlDTDHandler(qtdNativeId, handler is null ? null : handler.__ptr_IQXmlDTDHandler);
        }

        override         public void setDeclHandler(IQXmlDeclHandler handler) {
            qtd_QXmlReader_setDeclHandler_QXmlDeclHandler(qtdNativeId, handler is null ? null : handler.__ptr_IQXmlDeclHandler);
        }

        override         public void setEntityResolver(IQXmlEntityResolver handler) {
            qtd_QXmlReader_setEntityResolver_QXmlEntityResolver(qtdNativeId, handler is null ? null : handler.__ptr_IQXmlEntityResolver);
        }

        override         public void setErrorHandler(IQXmlErrorHandler handler) {
            qtd_QXmlReader_setErrorHandler_QXmlErrorHandler(qtdNativeId, handler is null ? null : handler.__ptr_IQXmlErrorHandler);
        }

        override         public void setFeature(string name, bool value) {
            qtd_QXmlReader_setFeature_string_bool(qtdNativeId, name, value);
        }

        override         public void setLexicalHandler(IQXmlLexicalHandler handler) {
            qtd_QXmlReader_setLexicalHandler_QXmlLexicalHandler(qtdNativeId, handler is null ? null : handler.__ptr_IQXmlLexicalHandler);
        }
    }


extern (C) void *__QXmlReader_entity(void *q_ptr);

QXmlReader qtd_QXmlReader_from_ptr(void* ret) {
    void* d_obj = __QXmlReader_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QXmlReader) d_obj_ref;
    } else {
        auto return_value = new QXmlReader_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QXmlReader_delete(void *ptr);
extern (C) void qtd_QXmlReader_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlReader_QXmlReader(void *d_ptr);
private extern(C) void*  qtd_QXmlReader_DTDHandler_const(void* __this_nativeId);
private extern(C) void*  qtd_QXmlReader_contentHandler_const(void* __this_nativeId);
private extern(C) void*  qtd_QXmlReader_declHandler_const(void* __this_nativeId);
private extern(C) void*  qtd_QXmlReader_entityResolver_const(void* __this_nativeId);
private extern(C) void*  qtd_QXmlReader_errorHandler_const(void* __this_nativeId);
private extern(C) bool  qtd_QXmlReader_feature_string_nativepointerbool_const(void* __this_nativeId,
 string name0);
private extern(C) bool  qtd_QXmlReader_hasFeature_string_const(void* __this_nativeId,
 string name0);
private extern(C) bool  qtd_QXmlReader_hasProperty_string_const(void* __this_nativeId,
 string name0);
private extern(C) void*  qtd_QXmlReader_lexicalHandler_const(void* __this_nativeId);
private extern(C) bool  qtd_QXmlReader_parse_QXmlInputSource(void* __this_nativeId,
 void* input0);
private extern(C) void  qtd_QXmlReader_setContentHandler_QXmlContentHandler(void* __this_nativeId,
 void* handler0);
private extern(C) void  qtd_QXmlReader_setDTDHandler_QXmlDTDHandler(void* __this_nativeId,
 void* handler0);
private extern(C) void  qtd_QXmlReader_setDeclHandler_QXmlDeclHandler(void* __this_nativeId,
 void* handler0);
private extern(C) void  qtd_QXmlReader_setEntityResolver_QXmlEntityResolver(void* __this_nativeId,
 void* handler0);
private extern(C) void  qtd_QXmlReader_setErrorHandler_QXmlErrorHandler(void* __this_nativeId,
 void* handler0);
private extern(C) void  qtd_QXmlReader_setFeature_string_bool(void* __this_nativeId,
 string name0,
 bool value1);
private extern(C) void  qtd_QXmlReader_setLexicalHandler_QXmlLexicalHandler(void* __this_nativeId,
 void* handler0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId) qtd_QXmlReader_DTDHandler_const_dispatch; }
extern(C) void* qtd_export_QXmlReader_DTDHandler_const_dispatch(void *dId){
    auto d_object = cast(QXmlReader) dId;
    IQXmlDTDHandler ret_value = d_object.DTDHandler();
    return ret_value is null? null : ret_value.__ptr_IQXmlDTDHandler;
}

extern(C){ extern void* function(void *dId) qtd_QXmlReader_contentHandler_const_dispatch; }
extern(C) void* qtd_export_QXmlReader_contentHandler_const_dispatch(void *dId){
    auto d_object = cast(QXmlReader) dId;
    IQXmlContentHandler ret_value = d_object.contentHandler();
    return ret_value is null? null : ret_value.__ptr_IQXmlContentHandler;
}

extern(C){ extern void* function(void *dId) qtd_QXmlReader_declHandler_const_dispatch; }
extern(C) void* qtd_export_QXmlReader_declHandler_const_dispatch(void *dId){
    auto d_object = cast(QXmlReader) dId;
    IQXmlDeclHandler ret_value = d_object.declHandler();
    return ret_value is null? null : ret_value.__ptr_IQXmlDeclHandler;
}

extern(C){ extern void* function(void *dId) qtd_QXmlReader_entityResolver_const_dispatch; }
extern(C) void* qtd_export_QXmlReader_entityResolver_const_dispatch(void *dId){
    auto d_object = cast(QXmlReader) dId;
    IQXmlEntityResolver ret_value = d_object.entityResolver();
    return ret_value is null? null : ret_value.__ptr_IQXmlEntityResolver;
}

extern(C){ extern void* function(void *dId) qtd_QXmlReader_errorHandler_const_dispatch; }
extern(C) void* qtd_export_QXmlReader_errorHandler_const_dispatch(void *dId){
    auto d_object = cast(QXmlReader) dId;
    IQXmlErrorHandler ret_value = d_object.errorHandler();
    return ret_value is null? null : ret_value.__ptr_IQXmlErrorHandler;
}

extern(C){ extern bool function(void *dId, wchar* name0, int name0_size) qtd_QXmlReader_feature_string_nativepointerbool_const_dispatch; }
extern(C) bool qtd_export_QXmlReader_feature_string_nativepointerbool_const_dispatch(void *dId, wchar* name0, int name0_size){
    auto d_object = cast(QXmlReader) dId;
    string name0_d_ref = toUTF8(name0[0..name0_size]);
    auto return_value = d_object.feature(name0_d_ref);
    return return_value;
}

extern(C){ extern bool function(void *dId, wchar* name0, int name0_size) qtd_QXmlReader_hasFeature_string_const_dispatch; }
extern(C) bool qtd_export_QXmlReader_hasFeature_string_const_dispatch(void *dId, wchar* name0, int name0_size){
    auto d_object = cast(QXmlReader) dId;
    string name0_d_ref = toUTF8(name0[0..name0_size]);
    auto return_value = d_object.hasFeature(name0_d_ref);
    return return_value;
}

extern(C){ extern bool function(void *dId, wchar* name0, int name0_size) qtd_QXmlReader_hasProperty_string_const_dispatch; }
extern(C) bool qtd_export_QXmlReader_hasProperty_string_const_dispatch(void *dId, wchar* name0, int name0_size){
    auto d_object = cast(QXmlReader) dId;
    string name0_d_ref = toUTF8(name0[0..name0_size]);
    auto return_value = d_object.hasProperty(name0_d_ref);
    return return_value;
}

extern(C){ extern void* function(void *dId) qtd_QXmlReader_lexicalHandler_const_dispatch; }
extern(C) void* qtd_export_QXmlReader_lexicalHandler_const_dispatch(void *dId){
    auto d_object = cast(QXmlReader) dId;
    IQXmlLexicalHandler ret_value = d_object.lexicalHandler();
    return ret_value is null? null : ret_value.__ptr_IQXmlLexicalHandler;
}

extern(C){ extern bool function(void *dId, void* input0) qtd_QXmlReader_parse_QXmlInputSource_dispatch; }
extern(C) bool qtd_export_QXmlReader_parse_QXmlInputSource_dispatch(void *dId, void* input0){
    auto d_object = cast(QXmlReader) dId;
    scope input0_d_ref = new QXmlInputSource(input0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.parse(input0_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId, void* handler0) qtd_QXmlReader_setContentHandler_QXmlContentHandler_dispatch; }
extern(C) void qtd_export_QXmlReader_setContentHandler_QXmlContentHandler_dispatch(void *dId, void* handler0){
    auto d_object = cast(QXmlReader) dId;
    scope handler0_d_ref = new QXmlContentHandler_ConcreteWrapper(handler0, QtdObjectInitFlags.onStack);
    d_object.setContentHandler(handler0_d_ref);
}

extern(C){ extern void function(void *dId, void* handler0) qtd_QXmlReader_setDTDHandler_QXmlDTDHandler_dispatch; }
extern(C) void qtd_export_QXmlReader_setDTDHandler_QXmlDTDHandler_dispatch(void *dId, void* handler0){
    auto d_object = cast(QXmlReader) dId;
    scope handler0_d_ref = new QXmlDTDHandler_ConcreteWrapper(handler0, QtdObjectInitFlags.onStack);
    d_object.setDTDHandler(handler0_d_ref);
}

extern(C){ extern void function(void *dId, void* handler0) qtd_QXmlReader_setDeclHandler_QXmlDeclHandler_dispatch; }
extern(C) void qtd_export_QXmlReader_setDeclHandler_QXmlDeclHandler_dispatch(void *dId, void* handler0){
    auto d_object = cast(QXmlReader) dId;
    scope handler0_d_ref = new QXmlDeclHandler_ConcreteWrapper(handler0, QtdObjectInitFlags.onStack);
    d_object.setDeclHandler(handler0_d_ref);
}

extern(C){ extern void function(void *dId, void* handler0) qtd_QXmlReader_setEntityResolver_QXmlEntityResolver_dispatch; }
extern(C) void qtd_export_QXmlReader_setEntityResolver_QXmlEntityResolver_dispatch(void *dId, void* handler0){
    auto d_object = cast(QXmlReader) dId;
    scope handler0_d_ref = new QXmlEntityResolver_ConcreteWrapper(handler0, QtdObjectInitFlags.onStack);
    d_object.setEntityResolver(handler0_d_ref);
}

extern(C){ extern void function(void *dId, void* handler0) qtd_QXmlReader_setErrorHandler_QXmlErrorHandler_dispatch; }
extern(C) void qtd_export_QXmlReader_setErrorHandler_QXmlErrorHandler_dispatch(void *dId, void* handler0){
    auto d_object = cast(QXmlReader) dId;
    scope handler0_d_ref = new QXmlErrorHandler_ConcreteWrapper(handler0, QtdObjectInitFlags.onStack);
    d_object.setErrorHandler(handler0_d_ref);
}

extern(C){ extern void function(void *dId, wchar* name0, int name0_size, bool value1) qtd_QXmlReader_setFeature_string_bool_dispatch; }
extern(C) void qtd_export_QXmlReader_setFeature_string_bool_dispatch(void *dId, wchar* name0, int name0_size, bool value1){
    auto d_object = cast(QXmlReader) dId;
    string name0_d_ref = toUTF8(name0[0..name0_size]);
    d_object.setFeature(name0_d_ref, value1);
}

extern(C){ extern void function(void *dId, void* handler0) qtd_QXmlReader_setLexicalHandler_QXmlLexicalHandler_dispatch; }
extern(C) void qtd_export_QXmlReader_setLexicalHandler_QXmlLexicalHandler_dispatch(void *dId, void* handler0){
    auto d_object = cast(QXmlReader) dId;
    scope handler0_d_ref = new QXmlLexicalHandler_ConcreteWrapper(handler0, QtdObjectInitFlags.onStack);
    d_object.setLexicalHandler(handler0_d_ref);
}

private extern (C) void qtd_QXmlReader_initCallBacks(void* virtuals);

extern(C) void static_init_QXmlReader() {
    void*[17] virt_arr;
    virt_arr[0] = &qtd_export_QXmlReader_DTDHandler_const_dispatch;
    virt_arr[1] = &qtd_export_QXmlReader_contentHandler_const_dispatch;
    virt_arr[2] = &qtd_export_QXmlReader_declHandler_const_dispatch;
    virt_arr[3] = &qtd_export_QXmlReader_entityResolver_const_dispatch;
    virt_arr[4] = &qtd_export_QXmlReader_errorHandler_const_dispatch;
    virt_arr[5] = &qtd_export_QXmlReader_feature_string_nativepointerbool_const_dispatch;
    virt_arr[6] = &qtd_export_QXmlReader_hasFeature_string_const_dispatch;
    virt_arr[7] = &qtd_export_QXmlReader_hasProperty_string_const_dispatch;
    virt_arr[8] = &qtd_export_QXmlReader_lexicalHandler_const_dispatch;
    virt_arr[9] = &qtd_export_QXmlReader_parse_QXmlInputSource_dispatch;
    virt_arr[10] = &qtd_export_QXmlReader_setContentHandler_QXmlContentHandler_dispatch;
    virt_arr[11] = &qtd_export_QXmlReader_setDTDHandler_QXmlDTDHandler_dispatch;
    virt_arr[12] = &qtd_export_QXmlReader_setDeclHandler_QXmlDeclHandler_dispatch;
    virt_arr[13] = &qtd_export_QXmlReader_setEntityResolver_QXmlEntityResolver_dispatch;
    virt_arr[14] = &qtd_export_QXmlReader_setErrorHandler_QXmlErrorHandler_dispatch;
    virt_arr[15] = &qtd_export_QXmlReader_setFeature_string_bool_dispatch;
    virt_arr[16] = &qtd_export_QXmlReader_setLexicalHandler_QXmlLexicalHandler_dispatch;
    qtd_QXmlReader_initCallBacks(virt_arr.ptr);
}

// signal handlers

