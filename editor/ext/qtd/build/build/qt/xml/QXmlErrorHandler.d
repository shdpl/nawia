module qt.xml.QXmlErrorHandler;

public import qt.xml.QXmlErrorHandler_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.xml.QXmlParseException;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QXmlErrorHandler : QtdObject, IQXmlErrorHandler
{

// Functions

    public this() {
        void* ret = qtd_QXmlErrorHandler_QXmlErrorHandler(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract bool error(const(QXmlParseException) exception);

    public abstract string errorString() const;

    public abstract bool fatalError(const(QXmlParseException) exception);

    public abstract bool warning(const(QXmlParseException) exception);
// Field accessors
    static IQXmlErrorHandler __getObject(void* nativeId) {
        return qtd_QXmlErrorHandler_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QXmlErrorHandler;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQXmlErrorHandler = qtd_QXmlErrorHandler_cast_to_QXmlErrorHandler(nativeId);
    }

    private void* __m_ptr_IQXmlErrorHandler;
    public void* __ptr_IQXmlErrorHandler() { return __m_ptr_IQXmlErrorHandler; }

    protected override void qtdDeleteNative() {
        qtd_QXmlErrorHandler_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QXmlErrorHandler_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QXmlErrorHandler_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QXmlErrorHandler_cast_to_QXmlErrorHandler(void* nativeId);

    public class QXmlErrorHandler_ConcreteWrapper : QXmlErrorHandler {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public bool error(const(QXmlParseException) exception) {
            return qtd_QXmlErrorHandler_error_QXmlParseException(qtdNativeId, exception is null ? null : (cast(QXmlParseException)exception).qtdNativeId);
        }

        override         public string errorString() const {
            string res;
            qtd_QXmlErrorHandler_errorString_const(qtdNativeId, &res);
            return res;
        }

        override         public bool fatalError(const(QXmlParseException) exception) {
            return qtd_QXmlErrorHandler_fatalError_QXmlParseException(qtdNativeId, exception is null ? null : (cast(QXmlParseException)exception).qtdNativeId);
        }

        override         public bool warning(const(QXmlParseException) exception) {
            return qtd_QXmlErrorHandler_warning_QXmlParseException(qtdNativeId, exception is null ? null : (cast(QXmlParseException)exception).qtdNativeId);
        }
    }


extern (C) void *__QXmlErrorHandler_entity(void *q_ptr);

IQXmlErrorHandler qtd_QXmlErrorHandler_from_ptr(void* ret) {
    void* d_obj = __QXmlErrorHandler_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(IQXmlErrorHandler) d_obj_ref;
    } else {
        auto return_value = new QXmlErrorHandler_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QXmlErrorHandler_delete(void *ptr);
extern (C) void qtd_QXmlErrorHandler_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlErrorHandler_QXmlErrorHandler(void *d_ptr);
private extern(C) bool  qtd_QXmlErrorHandler_error_QXmlParseException(void* __this_nativeId,
 void* exception0);
private extern(C) void  qtd_QXmlErrorHandler_errorString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QXmlErrorHandler_fatalError_QXmlParseException(void* __this_nativeId,
 void* exception0);
private extern(C) bool  qtd_QXmlErrorHandler_warning_QXmlParseException(void* __this_nativeId,
 void* exception0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId, void* exception0) qtd_QXmlErrorHandler_error_QXmlParseException_dispatch; }
extern(C) bool qtd_export_QXmlErrorHandler_error_QXmlParseException_dispatch(void *dId, void* exception0){
    auto d_object = cast(IQXmlErrorHandler)cast(Object) dId;
    scope exception0_d_ref = new QXmlParseException(exception0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.error(exception0_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId, string* ret_str) qtd_QXmlErrorHandler_errorString_const_dispatch; }
extern(C) void qtd_export_QXmlErrorHandler_errorString_const_dispatch(void *dId, string* ret_str){
    auto d_object = cast(IQXmlErrorHandler)cast(Object) dId;
    string _d_str = d_object.errorString();
    *ret_str = _d_str;
}

extern(C){ extern bool function(void *dId, void* exception0) qtd_QXmlErrorHandler_fatalError_QXmlParseException_dispatch; }
extern(C) bool qtd_export_QXmlErrorHandler_fatalError_QXmlParseException_dispatch(void *dId, void* exception0){
    auto d_object = cast(IQXmlErrorHandler)cast(Object) dId;
    scope exception0_d_ref = new QXmlParseException(exception0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.fatalError(exception0_d_ref);
    return return_value;
}

extern(C){ extern bool function(void *dId, void* exception0) qtd_QXmlErrorHandler_warning_QXmlParseException_dispatch; }
extern(C) bool qtd_export_QXmlErrorHandler_warning_QXmlParseException_dispatch(void *dId, void* exception0){
    auto d_object = cast(IQXmlErrorHandler)cast(Object) dId;
    scope exception0_d_ref = new QXmlParseException(exception0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.warning(exception0_d_ref);
    return return_value;
}

private extern (C) void qtd_QXmlErrorHandler_initCallBacks(void* virtuals);

extern(C) void static_init_QXmlErrorHandler() {
    void*[4] virt_arr;
    virt_arr[0] = &qtd_export_QXmlErrorHandler_error_QXmlParseException_dispatch;
    virt_arr[1] = &qtd_export_QXmlErrorHandler_errorString_const_dispatch;
    virt_arr[2] = &qtd_export_QXmlErrorHandler_fatalError_QXmlParseException_dispatch;
    virt_arr[3] = &qtd_export_QXmlErrorHandler_warning_QXmlParseException_dispatch;
    qtd_QXmlErrorHandler_initCallBacks(virt_arr.ptr);
}

// signal handlers

public interface IQXmlErrorHandler
{
// Functions

        public bool error(const(QXmlParseException) exception);

        public string errorString() const;

        public bool fatalError(const(QXmlParseException) exception);

        public bool warning(const(QXmlParseException) exception);

        public void* __ptr_IQXmlErrorHandler();

// Field accessors
        public alias void __isQtType_IQXmlErrorHandler;

        void qtdSetOwnership(QtdObjectOwnership own) const;// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

