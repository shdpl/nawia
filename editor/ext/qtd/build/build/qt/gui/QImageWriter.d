module qt.gui.QImageWriter;

public import qt.gui.QImageWriter_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QImageIOHandler;
public import qt.core.QIODevice;
public import qt.core.QList;
public import qt.gui.QImage;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QImageWriter : QtdObject
{
    public enum ImageWriterError {
        UnknownError = 0,
        DeviceError = 1,
        UnsupportedFormatError = 2
    }

    alias ImageWriterError.UnknownError UnknownError;
    alias ImageWriterError.DeviceError DeviceError;
    alias ImageWriterError.UnsupportedFormatError UnsupportedFormatError;


Object __rcDevice = null;

// Functions

    public this() {
        void* ret = qtd_QImageWriter_QImageWriter(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QIODevice device, const(QByteArray) format) {
        void* ret = qtd_QImageWriter_QImageWriter_QIODevice_QByteArray(cast(void*) this, device is null ? null : device.qtdNativeId, format is null ? null : (cast(QByteArray)format).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string fileName, const(QByteArray) format = new QByteArray()) {
        void* ret = qtd_QImageWriter_QImageWriter_string_QByteArray(cast(void*) this, fileName, format is null ? null : (cast(QByteArray)format).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool canWrite() const {
        return qtd_QImageWriter_canWrite_const(qtdNativeId);
    }

    public final int compression() const {
        return qtd_QImageWriter_compression_const(qtdNativeId);
    }

    public final QIODevice device() const {
        void *ret = qtd_QImageWriter_device_const(qtdNativeId);
        QIODevice __d_return_value = QIODevice.__getObject(ret);
        return __d_return_value;
    }

    public final QImageWriter.ImageWriterError error() const {
        return cast(QImageWriter.ImageWriterError) qtd_QImageWriter_error_const(qtdNativeId);
    }

    public final string errorString() const {
        string res;
        qtd_QImageWriter_errorString_const(qtdNativeId, &res);
        return res;
    }

    public final string fileName() const {
        string res;
        qtd_QImageWriter_fileName_const(qtdNativeId, &res);
        return res;
    }

    public final QByteArray format() const {
        void* ret = qtd_QImageWriter_format_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final float gamma() const {
        return qtd_QImageWriter_gamma_const(qtdNativeId);
    }

    public final int quality() const {
        return qtd_QImageWriter_quality_const(qtdNativeId);
    }

    public final void setCompression(int compression) {
        qtd_QImageWriter_setCompression_int(qtdNativeId, compression);
    }

    public final void setDevice(QIODevice device) {
        {
            __rcDevice = cast(Object) device;
        }
        qtd_QImageWriter_setDevice_QIODevice(qtdNativeId, device is null ? null : device.qtdNativeId);
    }

    public final void setFileName(string fileName) {
        qtd_QImageWriter_setFileName_string(qtdNativeId, fileName);
    }

    public final void setFormat(const(QByteArray) format) {
        qtd_QImageWriter_setFormat_QByteArray(qtdNativeId, format is null ? null : (cast(QByteArray)format).qtdNativeId);
    }

    public final void setGamma(float gamma) {
        qtd_QImageWriter_setGamma_float(qtdNativeId, gamma);
    }

    public final void setQuality(int quality) {
        qtd_QImageWriter_setQuality_int(qtdNativeId, quality);
    }

    public final void setText(string key, string text) {
        qtd_QImageWriter_setText_string_string(qtdNativeId, key, text);
    }

    public final bool supportsOption(QImageIOHandler.ImageOption option) const {
        return qtd_QImageWriter_supportsOption_ImageOption_const(qtdNativeId, option);
    }

    public final bool write(const(QImage) image) {
        return qtd_QImageWriter_write_QImage(qtdNativeId, image is null ? null : (cast(QImage)image).qtdNativeId);
    }

    public static QList!(QByteArray) supportedImageFormats() {
        auto res = QList!(QByteArray).opCall();
        qtd_QImageWriter_supportedImageFormats(&res);
        return res;
    }
// Field accessors
    static QImageWriter __getObject(void* nativeId) {
        return qtd_QImageWriter_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QImageWriter;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QImageWriter_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QImageWriter_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QImageWriter_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QImageWriter qtd_QImageWriter_from_ptr(void* ret) {
    auto return_value = new QImageWriter(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QImageWriter_delete(void *ptr);
extern (C) void qtd_QImageWriter_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QImageWriter_QImageWriter(void *d_ptr);
private extern(C) void* qtd_QImageWriter_QImageWriter_QIODevice_QByteArray(void *d_ptr,
 void* device0,
 void* format1);
private extern(C) void* qtd_QImageWriter_QImageWriter_string_QByteArray(void *d_ptr,
 string fileName0,
 void* format1);
private extern(C) bool  qtd_QImageWriter_canWrite_const(void* __this_nativeId);
private extern(C) int  qtd_QImageWriter_compression_const(void* __this_nativeId);
private extern(C) void*  qtd_QImageWriter_device_const(void* __this_nativeId);
private extern(C) int  qtd_QImageWriter_error_const(void* __this_nativeId);
private extern(C) void  qtd_QImageWriter_errorString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QImageWriter_fileName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QImageWriter_format_const(void* __this_nativeId);
private extern(C) float  qtd_QImageWriter_gamma_const(void* __this_nativeId);
private extern(C) int  qtd_QImageWriter_quality_const(void* __this_nativeId);
private extern(C) void  qtd_QImageWriter_setCompression_int(void* __this_nativeId,
 int compression0);
private extern(C) void  qtd_QImageWriter_setDevice_QIODevice(void* __this_nativeId,
 void* device0);
private extern(C) void  qtd_QImageWriter_setFileName_string(void* __this_nativeId,
 string fileName0);
private extern(C) void  qtd_QImageWriter_setFormat_QByteArray(void* __this_nativeId,
 void* format0);
private extern(C) void  qtd_QImageWriter_setGamma_float(void* __this_nativeId,
 float gamma0);
private extern(C) void  qtd_QImageWriter_setQuality_int(void* __this_nativeId,
 int quality0);
private extern(C) void  qtd_QImageWriter_setText_string_string(void* __this_nativeId,
 string key0,
 string text1);
private extern(C) bool  qtd_QImageWriter_supportsOption_ImageOption_const(void* __this_nativeId,
 int option0);
private extern(C) bool  qtd_QImageWriter_write_QImage(void* __this_nativeId,
 void* image0);
private extern(C) void  qtd_QImageWriter_supportedImageFormats(void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QImageWriter_initCallBacks(void* virtuals);

extern(C) void static_init_QImageWriter() {
    qtd_QImageWriter_initCallBacks(null);
}

// signal handlers

