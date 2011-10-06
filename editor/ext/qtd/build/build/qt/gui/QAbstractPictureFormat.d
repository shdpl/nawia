module qt.gui.QAbstractPictureFormat;

public import qt.gui.QAbstractPictureFormat_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QPicture;
public import qt.core.QAbstractFactory;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAbstractPictureFormat : QtdObject, IQAbstractPictureFormat, IQAbstractFactory
{

// Functions

    public this() {
        void* ret = qtd_QAbstractPictureFormat_QAbstractPictureFormat(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract bool installIOHandler(string arg__1);

    public abstract QList!(string) keys() const;

    public abstract bool loadPicture(string format, string filename, QPicture arg__3);

    public abstract bool savePicture(string format, string filename, const(QPicture) arg__3);
// Field accessors
    static IQAbstractPictureFormat __getObject(void* nativeId) {
        return qtd_QPictureFormatInterface_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QAbstractPictureFormat;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQAbstractPictureFormat = qtd_QAbstractPictureFormat_cast_to_QAbstractPictureFormat(nativeId);
            __m_ptr_IQAbstractFactory = qtd_QAbstractPictureFormat_cast_to_QAbstractFactory(nativeId);
    }

    private void* __m_ptr_IQAbstractPictureFormat;
    public void* __ptr_IQAbstractPictureFormat() { return __m_ptr_IQAbstractPictureFormat; }

    private void* __m_ptr_IQAbstractFactory;
    public void* __ptr_IQAbstractFactory() { return __m_ptr_IQAbstractFactory; }

    protected override void qtdDeleteNative() {
        qtd_QAbstractPictureFormat_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QAbstractPictureFormat_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QAbstractPictureFormat_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QAbstractPictureFormat_cast_to_QAbstractPictureFormat(void* nativeId);
    private static extern (C) void*qtd_QAbstractPictureFormat_cast_to_QAbstractFactory(void* nativeId);

    public class QAbstractPictureFormat_ConcreteWrapper : QAbstractPictureFormat {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public bool installIOHandler(string arg__1) {
            return qtd_QAbstractPictureFormat_installIOHandler_string(qtdNativeId, arg__1);
        }

        override         public QList!(string) keys() const {
            auto res = QList!(string).opCall();
            qtd_QAbstractPictureFormat_keys_const(qtdNativeId, &res);
            return res;
        }

        override         public bool loadPicture(string format, string filename, QPicture arg__3) {
            return qtd_QAbstractPictureFormat_loadPicture_string_string_nativepointerQPicture(qtdNativeId, format, filename, arg__3 is null ? null : arg__3.qtdNativeId);
        }

        override         public bool savePicture(string format, string filename, const(QPicture) arg__3) {
            return qtd_QAbstractPictureFormat_savePicture_string_string_QPicture(qtdNativeId, format, filename, arg__3 is null ? null : (cast(QPicture)arg__3).qtdNativeId);
        }
    }


extern (C) void *__QAbstractPictureFormat_entity(void *q_ptr);

IQAbstractPictureFormat qtd_QPictureFormatInterface_from_ptr(void* ret) {
    void* d_obj = __QAbstractPictureFormat_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(IQAbstractPictureFormat) d_obj_ref;
    } else {
        auto return_value = new QAbstractPictureFormat_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QAbstractPictureFormat_delete(void *ptr);
extern (C) void qtd_QAbstractPictureFormat_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAbstractPictureFormat_QAbstractPictureFormat(void *d_ptr);
private extern(C) bool  qtd_QAbstractPictureFormat_installIOHandler_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QAbstractPictureFormat_keys_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QAbstractPictureFormat_loadPicture_string_string_nativepointerQPicture(void* __this_nativeId,
 string format0,
 string filename1,
 void* arg__3);
private extern(C) bool  qtd_QAbstractPictureFormat_savePicture_string_string_QPicture(void* __this_nativeId,
 string format0,
 string filename1,
 void* arg__3);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId, wchar* arg__1, int arg__1_size) qtd_QAbstractPictureFormat_installIOHandler_string_dispatch; }
extern(C) bool qtd_export_QAbstractPictureFormat_installIOHandler_string_dispatch(void *dId, wchar* arg__1, int arg__1_size){
    auto d_object = cast(IQAbstractPictureFormat)cast(Object) dId;
    string arg__1_d_ref = toUTF8(arg__1[0..arg__1_size]);
    auto return_value = d_object.installIOHandler(arg__1_d_ref);
    return return_value;
}

extern(C){ extern bool function(void *dId, wchar* format0, int format0_size, wchar* filename1, int filename1_size, void* arg__3) qtd_QAbstractPictureFormat_loadPicture_string_string_nativepointerQPicture_dispatch; }
extern(C) bool qtd_export_QAbstractPictureFormat_loadPicture_string_string_nativepointerQPicture_dispatch(void *dId, wchar* format0, int format0_size, wchar* filename1, int filename1_size, void* arg__3){
    auto d_object = cast(IQAbstractPictureFormat)cast(Object) dId;
    string format0_d_ref = toUTF8(format0[0..format0_size]);
    string filename1_d_ref = toUTF8(filename1[0..filename1_size]);
    scope arg__3_d_ref = new QPicture(arg__3, QtdObjectInitFlags.onStack);
    auto return_value = d_object.loadPicture(format0_d_ref, filename1_d_ref, arg__3_d_ref);
    return return_value;
}

extern(C){ extern bool function(void *dId, wchar* format0, int format0_size, wchar* filename1, int filename1_size, void* arg__3) qtd_QAbstractPictureFormat_savePicture_string_string_QPicture_dispatch; }
extern(C) bool qtd_export_QAbstractPictureFormat_savePicture_string_string_QPicture_dispatch(void *dId, wchar* format0, int format0_size, wchar* filename1, int filename1_size, void* arg__3){
    auto d_object = cast(IQAbstractPictureFormat)cast(Object) dId;
    string format0_d_ref = toUTF8(format0[0..format0_size]);
    string filename1_d_ref = toUTF8(filename1[0..filename1_size]);
    scope arg__3_d_ref = new QPicture(arg__3, QtdObjectInitFlags.onStack);
    auto return_value = d_object.savePicture(format0_d_ref, filename1_d_ref, arg__3_d_ref);
    return return_value;
}

private extern (C) void qtd_QAbstractPictureFormat_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractPictureFormat() {
    void*[3] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractPictureFormat_installIOHandler_string_dispatch;
    virt_arr[1] = &qtd_export_QAbstractPictureFormat_loadPicture_string_string_nativepointerQPicture_dispatch;
    virt_arr[2] = &qtd_export_QAbstractPictureFormat_savePicture_string_string_QPicture_dispatch;
    qtd_QAbstractPictureFormat_initCallBacks(virt_arr.ptr);
}

// signal handlers

public interface IQAbstractPictureFormat : IQAbstractFactory
{
// Functions

        public bool installIOHandler(string arg__1);

        public QList!(string) keys() const;

        public bool loadPicture(string format, string filename, QPicture arg__3);

        public bool savePicture(string format, string filename, const(QPicture) arg__3);

        public void* __ptr_IQAbstractPictureFormat();

// Field accessors
        public alias void __isQtType_IQAbstractPictureFormat;

        void qtdSetOwnership(QtdObjectOwnership own) const;// Injected code in class
}
        private static extern (C) void*qtd_IQAbstractPictureFormat_cast_to_QAbstractFactory(void* nativeId);

// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

