module qt.xml.QXmlSimpleReader;

public import qt.xml.QXmlSimpleReader_aux;
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
public import qt.xml.QXmlReader;
public import qt.xml.QXmlDTDHandler;
public import qt.xml.QXmlEntityResolver;
public import qt.xml.QXmlDeclHandler;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QXmlSimpleReader : QXmlReader
{

Object __rcDTDHandler = null;

Object __rcDeclHandler = null;

Object __rcLexicalHandler = null;

Object __rcErrorHandler = null;

Object __rcContentHandler = null;

Object __rcEntityResolver = null;

// Functions

    public this() {
        void* ret = qtd_QXmlSimpleReader_QXmlSimpleReader(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public IQXmlDTDHandler DTDHandler() const {
        void* ret = qtd_QXmlSimpleReader_DTDHandler_const(qtdNativeId);
        IQXmlDTDHandler __d_return_value = qtd_QXmlDTDHandler_from_ptr(ret);

        return __d_return_value;
    }

    public IQXmlContentHandler contentHandler() const {
        void* ret = qtd_QXmlSimpleReader_contentHandler_const(qtdNativeId);
        IQXmlContentHandler __d_return_value = qtd_QXmlContentHandler_from_ptr(ret);

        return __d_return_value;
    }

    public IQXmlDeclHandler declHandler() const {
        void* ret = qtd_QXmlSimpleReader_declHandler_const(qtdNativeId);
        IQXmlDeclHandler __d_return_value = qtd_QXmlDeclHandler_from_ptr(ret);

        return __d_return_value;
    }

    public IQXmlEntityResolver entityResolver() const {
        void* ret = qtd_QXmlSimpleReader_entityResolver_const(qtdNativeId);
        IQXmlEntityResolver __d_return_value = qtd_QXmlEntityResolver_from_ptr(ret);

        return __d_return_value;
    }

    public IQXmlErrorHandler errorHandler() const {
        void* ret = qtd_QXmlSimpleReader_errorHandler_const(qtdNativeId);
        IQXmlErrorHandler __d_return_value = qtd_QXmlErrorHandler_from_ptr(ret);

        return __d_return_value;
    }

    public bool feature(string name) const {
        return qtd_QXmlSimpleReader_feature_string_nativepointerbool_const(qtdNativeId, name);
    }

    public bool hasFeature(string name) const {
        return qtd_QXmlSimpleReader_hasFeature_string_const(qtdNativeId, name);
    }

    public bool hasProperty(string name) const {
        return qtd_QXmlSimpleReader_hasProperty_string_const(qtdNativeId, name);
    }

    public IQXmlLexicalHandler lexicalHandler() const {
        void* ret = qtd_QXmlSimpleReader_lexicalHandler_const(qtdNativeId);
        IQXmlLexicalHandler __d_return_value = qtd_QXmlLexicalHandler_from_ptr(ret);

        return __d_return_value;
    }

    public bool parse(QXmlInputSource input) {
        return qtd_QXmlSimpleReader_parse_QXmlInputSource(qtdNativeId, input is null ? null : (cast(QXmlInputSource)input).qtdNativeId);
    }

    public bool parse(QXmlInputSource input, bool incremental) {
        return qtd_QXmlSimpleReader_parse_QXmlInputSource_bool(qtdNativeId, input is null ? null : (cast(QXmlInputSource)input).qtdNativeId, incremental);
    }

    public bool parseContinue() {
        return qtd_QXmlSimpleReader_parseContinue(qtdNativeId);
    }

    public void setContentHandler(IQXmlContentHandler handler) {
        {
            __rcContentHandler = cast(Object) handler;
        }
        qtd_QXmlSimpleReader_setContentHandler_QXmlContentHandler(qtdNativeId, handler is null ? null : handler.__ptr_IQXmlContentHandler);
    }

    public void setDTDHandler(IQXmlDTDHandler handler) {
        {
            __rcDTDHandler = cast(Object) handler;
        }
        qtd_QXmlSimpleReader_setDTDHandler_QXmlDTDHandler(qtdNativeId, handler is null ? null : handler.__ptr_IQXmlDTDHandler);
    }

    public void setDeclHandler(IQXmlDeclHandler handler) {
        {
            __rcDeclHandler = cast(Object) handler;
        }
        qtd_QXmlSimpleReader_setDeclHandler_QXmlDeclHandler(qtdNativeId, handler is null ? null : handler.__ptr_IQXmlDeclHandler);
    }

    public void setEntityResolver(IQXmlEntityResolver handler) {
        {
            __rcEntityResolver = cast(Object) handler;
        }
        qtd_QXmlSimpleReader_setEntityResolver_QXmlEntityResolver(qtdNativeId, handler is null ? null : handler.__ptr_IQXmlEntityResolver);
    }

    public void setErrorHandler(IQXmlErrorHandler handler) {
        {
            __rcErrorHandler = cast(Object) handler;
        }
        qtd_QXmlSimpleReader_setErrorHandler_QXmlErrorHandler(qtdNativeId, handler is null ? null : handler.__ptr_IQXmlErrorHandler);
    }

    public void setFeature(string name, bool value) {
        qtd_QXmlSimpleReader_setFeature_string_bool(qtdNativeId, name, value);
    }

    public void setLexicalHandler(IQXmlLexicalHandler handler) {
        {
            __rcLexicalHandler = cast(Object) handler;
        }
        qtd_QXmlSimpleReader_setLexicalHandler_QXmlLexicalHandler(qtdNativeId, handler is null ? null : handler.__ptr_IQXmlLexicalHandler);
    }
// Field accessors
    static QXmlSimpleReader __getObject(void* nativeId) {
        return qtd_QXmlSimpleReader_from_ptr(nativeId);
    }

    public alias void __isQtType_QXmlSimpleReader;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QXmlSimpleReader_entity(void *q_ptr);

QXmlSimpleReader qtd_QXmlSimpleReader_from_ptr(void* ret) {
    void* d_obj = __QXmlSimpleReader_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QXmlSimpleReader) d_obj_ref;
    } else {
        auto return_value = new QXmlSimpleReader(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlSimpleReader_QXmlSimpleReader(void *d_ptr);
private extern(C) void*  qtd_QXmlSimpleReader_DTDHandler_const(void* __this_nativeId);
private extern(C) void*  qtd_QXmlSimpleReader_contentHandler_const(void* __this_nativeId);
private extern(C) void*  qtd_QXmlSimpleReader_declHandler_const(void* __this_nativeId);
private extern(C) void*  qtd_QXmlSimpleReader_entityResolver_const(void* __this_nativeId);
private extern(C) void*  qtd_QXmlSimpleReader_errorHandler_const(void* __this_nativeId);
private extern(C) bool  qtd_QXmlSimpleReader_feature_string_nativepointerbool_const(void* __this_nativeId,
 string name0);
private extern(C) bool  qtd_QXmlSimpleReader_hasFeature_string_const(void* __this_nativeId,
 string name0);
private extern(C) bool  qtd_QXmlSimpleReader_hasProperty_string_const(void* __this_nativeId,
 string name0);
private extern(C) void*  qtd_QXmlSimpleReader_lexicalHandler_const(void* __this_nativeId);
private extern(C) bool  qtd_QXmlSimpleReader_parse_QXmlInputSource(void* __this_nativeId,
 void* input0);
private extern(C) bool  qtd_QXmlSimpleReader_parse_QXmlInputSource_bool(void* __this_nativeId,
 void* input0,
 bool incremental1);
private extern(C) bool  qtd_QXmlSimpleReader_parseContinue(void* __this_nativeId);
private extern(C) void  qtd_QXmlSimpleReader_setContentHandler_QXmlContentHandler(void* __this_nativeId,
 void* handler0);
private extern(C) void  qtd_QXmlSimpleReader_setDTDHandler_QXmlDTDHandler(void* __this_nativeId,
 void* handler0);
private extern(C) void  qtd_QXmlSimpleReader_setDeclHandler_QXmlDeclHandler(void* __this_nativeId,
 void* handler0);
private extern(C) void  qtd_QXmlSimpleReader_setEntityResolver_QXmlEntityResolver(void* __this_nativeId,
 void* handler0);
private extern(C) void  qtd_QXmlSimpleReader_setErrorHandler_QXmlErrorHandler(void* __this_nativeId,
 void* handler0);
private extern(C) void  qtd_QXmlSimpleReader_setFeature_string_bool(void* __this_nativeId,
 string name0,
 bool value1);
private extern(C) void  qtd_QXmlSimpleReader_setLexicalHandler_QXmlLexicalHandler(void* __this_nativeId,
 void* handler0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId, void* input0, bool incremental1) qtd_QXmlSimpleReader_parse_QXmlInputSource_bool_dispatch; }
extern(C) bool qtd_export_QXmlSimpleReader_parse_QXmlInputSource_bool_dispatch(void *dId, void* input0, bool incremental1){
    auto d_object = cast(QXmlSimpleReader) dId;
    scope input0_d_ref = new QXmlInputSource(input0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.parse(input0_d_ref, incremental1);
    return return_value;
}

extern(C){ extern bool function(void *dId) qtd_QXmlSimpleReader_parseContinue_dispatch; }
extern(C) bool qtd_export_QXmlSimpleReader_parseContinue_dispatch(void *dId){
    auto d_object = cast(QXmlSimpleReader) dId;
    auto return_value = d_object.parseContinue();
    return return_value;
}

private extern (C) void qtd_QXmlSimpleReader_initCallBacks(void* virtuals);

extern(C) void static_init_QXmlSimpleReader() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QXmlSimpleReader_parse_QXmlInputSource_bool_dispatch;
    virt_arr[1] = &qtd_export_QXmlSimpleReader_parseContinue_dispatch;
    qtd_QXmlSimpleReader_initCallBacks(virt_arr.ptr);
}

// signal handlers

