module qt.gui.QPictureIO;

public import qt.gui.QPictureIO_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QIODevice;
public import qt.gui.QPicture;
public import qt.core.QList;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QPictureIO : QtdObject
{

Object __rcDevice = null;

// Functions

    public this() {
        void* ret = qtd_QPictureIO_QPictureIO(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    private this(QIODevice ioDevice, const(char*) format) {
        {
            __rcDevice = cast(Object) ioDevice;
        }
        void* ret = qtd_QPictureIO_QPictureIO_QIODevice_nativepointerchar(cast(void*) this, ioDevice is null ? null : ioDevice.qtdNativeId, format);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    private this(string fileName, const(char*) format) {
        void* ret = qtd_QPictureIO_QPictureIO_string_nativepointerchar(cast(void*) this, fileName, format);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string description() const {
        string res;
        qtd_QPictureIO_description_const(qtdNativeId, &res);
        return res;
    }

    public final string fileName() const {
        string res;
        qtd_QPictureIO_fileName_const(qtdNativeId, &res);
        return res;
    }

    private final const(char*) format_private() const {
        return qtd_QPictureIO_format_private_const(qtdNativeId);
    }

    public final float gamma() const {
        return qtd_QPictureIO_gamma_const(qtdNativeId);
    }

    public final QIODevice ioDevice() const {
        void *ret = qtd_QPictureIO_ioDevice_const(qtdNativeId);
        QIODevice __d_return_value = QIODevice.__getObject(ret);
        return __d_return_value;
    }

    private final const(char*) parameters_private() const {
        return qtd_QPictureIO_parameters_private_const(qtdNativeId);
    }

    public final const(QPicture) picture() const {
        void* ret = qtd_QPictureIO_picture_const(qtdNativeId);
        const(QPicture) __d_return_value = new QPicture(ret);
        return __d_return_value;
    }

    public final int quality() const {
        return qtd_QPictureIO_quality_const(qtdNativeId);
    }

    public final bool read() {
        return qtd_QPictureIO_read(qtdNativeId);
    }

    public final void setDescription(string arg__1) {
        qtd_QPictureIO_setDescription_string(qtdNativeId, arg__1);
    }

    public final void setFileName(string arg__1) {
        qtd_QPictureIO_setFileName_string(qtdNativeId, arg__1);
    }

    private final void setFormat(const(char*) arg__1) {
        qtd_QPictureIO_setFormat_nativepointerchar(qtdNativeId, arg__1);
    }

    public final void setGamma(float arg__1) {
        qtd_QPictureIO_setGamma_float(qtdNativeId, arg__1);
    }

    public final void setIODevice(QIODevice arg__1) {
        {
            __rcDevice = cast(Object) arg__1;
        }
        qtd_QPictureIO_setIODevice_QIODevice(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final void setParameters(const(char*) arg__1) {
        qtd_QPictureIO_setParameters_nativepointerchar(qtdNativeId, arg__1);
    }

    public final void setPicture(const(QPicture) arg__1) {
        qtd_QPictureIO_setPicture_QPicture(qtdNativeId, arg__1 is null ? null : (cast(QPicture)arg__1).qtdNativeId);
    }

    public final void setQuality(int arg__1) {
        qtd_QPictureIO_setQuality_int(qtdNativeId, arg__1);
    }

    public final void setStatus(int arg__1) {
        qtd_QPictureIO_setStatus_int(qtdNativeId, arg__1);
    }

    public final int status() const {
        return qtd_QPictureIO_status_const(qtdNativeId);
    }

    public final bool write() {
        return qtd_QPictureIO_write(qtdNativeId);
    }

    public static QList!(QByteArray) inputFormats() {
        auto res = QList!(QByteArray).opCall();
        qtd_QPictureIO_inputFormats(&res);
        return res;
    }

    public static QList!(QByteArray) outputFormats() {
        auto res = QList!(QByteArray).opCall();
        qtd_QPictureIO_outputFormats(&res);
        return res;
    }

    public static QByteArray pictureFormat(QIODevice arg__1) {
        void* ret = qtd_QPictureIO_pictureFormat_QIODevice(arg__1 is null ? null : arg__1.qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public static QByteArray pictureFormat(string fileName) {
        void* ret = qtd_QPictureIO_pictureFormat_string(fileName);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }
// Field accessors
    static QPictureIO __getObject(void* nativeId) {
        return qtd_QPictureIO_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QPictureIO;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QPictureIO_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QPictureIO_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QPictureIO_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    public this(QIODevice ioDevice, string format) {
        this(ioDevice, toStringz(format));
    }

    public this(string fileName, string format) {
        this(fileName, toStringz(format));
    }

    // TEMPLATE - core.return_string_instead_of_char* - START
    public final string format() {
        return fromStringz(format_private());
    }
    // TEMPLATE - core.return_string_instead_of_char* - END
    // TEMPLATE - core.return_string_instead_of_char* - START
    public final string parameters() {
        return fromStringz(parameters_private());
    }
    // TEMPLATE - core.return_string_instead_of_char* - END
    // TEMPLATE - core.call_with_string_instead_of_char* - START
    public final void setFormat(string format) {
        setFormat(format is null? null : toStringz(format));
    }
    // TEMPLATE - core.call_with_string_instead_of_char* - END
    // TEMPLATE - core.call_with_string_instead_of_char* - START
    public final void setParameters(string parameters) {
        setParameters(parameters is null? null : toStringz(parameters));
    }
    // TEMPLATE - core.call_with_string_instead_of_char* - END

}
QPictureIO qtd_QPictureIO_from_ptr(void* ret) {
    auto return_value = new QPictureIO(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QPictureIO_delete(void *ptr);
extern (C) void qtd_QPictureIO_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPictureIO_QPictureIO(void *d_ptr);
private extern(C) void* qtd_QPictureIO_QPictureIO_QIODevice_nativepointerchar(void *d_ptr,
 void* ioDevice0,
 const (char*) format1);
private extern(C) void* qtd_QPictureIO_QPictureIO_string_nativepointerchar(void *d_ptr,
 string fileName0,
 const (char*) format1);
private extern(C) void  qtd_QPictureIO_description_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QPictureIO_fileName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) const (char*)  qtd_QPictureIO_format_private_const(void* __this_nativeId);
private extern(C) float  qtd_QPictureIO_gamma_const(void* __this_nativeId);
private extern(C) void*  qtd_QPictureIO_ioDevice_const(void* __this_nativeId);
private extern(C) const (char*)  qtd_QPictureIO_parameters_private_const(void* __this_nativeId);
private extern(C) void*  qtd_QPictureIO_picture_const(void* __this_nativeId);
private extern(C) int  qtd_QPictureIO_quality_const(void* __this_nativeId);
private extern(C) bool  qtd_QPictureIO_read(void* __this_nativeId);
private extern(C) void  qtd_QPictureIO_setDescription_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QPictureIO_setFileName_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QPictureIO_setFormat_nativepointerchar(void* __this_nativeId,
 const (char*) arg__1);
private extern(C) void  qtd_QPictureIO_setGamma_float(void* __this_nativeId,
 float arg__1);
private extern(C) void  qtd_QPictureIO_setIODevice_QIODevice(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QPictureIO_setParameters_nativepointerchar(void* __this_nativeId,
 const (char*) arg__1);
private extern(C) void  qtd_QPictureIO_setPicture_QPicture(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QPictureIO_setQuality_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QPictureIO_setStatus_int(void* __this_nativeId,
 int arg__1);
private extern(C) int  qtd_QPictureIO_status_const(void* __this_nativeId);
private extern(C) bool  qtd_QPictureIO_write(void* __this_nativeId);
private extern(C) void  qtd_QPictureIO_inputFormats(void* __d_return_value);
private extern(C) void  qtd_QPictureIO_outputFormats(void* __d_return_value);
private extern(C) void*  qtd_QPictureIO_pictureFormat_QIODevice(void* arg__1);
private extern(C) void*  qtd_QPictureIO_pictureFormat_string(string fileName0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QPictureIO_initCallBacks(void* virtuals);

extern(C) void static_init_QPictureIO() {
    qtd_QPictureIO_initCallBacks(null);
}

// signal handlers

