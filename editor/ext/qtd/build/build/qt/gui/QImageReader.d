module qt.gui.QImageReader;

public import qt.gui.QImageReader_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QImageIOHandler;
public import qt.gui.QImage;
public import qt.gui.QColor;
public import qt.core.QIODevice;
public import qt.core.QList;
public import qt.core.QRect;
public import qt.gui.QImage;
public import qt.core.QByteArray;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QImageReader : QtdObject
{
    public enum ImageReaderError {
        UnknownError = 0,
        FileNotFoundError = 1,
        DeviceError = 2,
        UnsupportedFormatError = 3,
        InvalidDataError = 4
    }

    alias ImageReaderError.UnknownError UnknownError;
    alias ImageReaderError.FileNotFoundError FileNotFoundError;
    alias ImageReaderError.DeviceError DeviceError;
    alias ImageReaderError.UnsupportedFormatError UnsupportedFormatError;
    alias ImageReaderError.InvalidDataError InvalidDataError;


Object __rcDevice = null;

// Functions

    public this() {
        void* ret = qtd_QImageReader_QImageReader(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QIODevice device, const(QByteArray) format = new QByteArray()) {
        void* ret = qtd_QImageReader_QImageReader_QIODevice_QByteArray(cast(void*) this, device is null ? null : device.qtdNativeId, format is null ? null : (cast(QByteArray)format).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string fileName, const(QByteArray) format = new QByteArray()) {
        void* ret = qtd_QImageReader_QImageReader_string_QByteArray(cast(void*) this, fileName, format is null ? null : (cast(QByteArray)format).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool autoDetectImageFormat() const {
        return qtd_QImageReader_autoDetectImageFormat_const(qtdNativeId);
    }

    public final QColor backgroundColor() const {
        void* ret = qtd_QImageReader_backgroundColor_const(qtdNativeId);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final bool canRead() const {
        return qtd_QImageReader_canRead_const(qtdNativeId);
    }

    public final QRect clipRect() const {
        QRect res;
        qtd_QImageReader_clipRect_const(qtdNativeId, &res);
        return res;
    }

    public final int currentImageNumber() const {
        return qtd_QImageReader_currentImageNumber_const(qtdNativeId);
    }

    public final QRect currentImageRect() const {
        QRect res;
        qtd_QImageReader_currentImageRect_const(qtdNativeId, &res);
        return res;
    }

    public final bool decideFormatFromContent() const {
        return qtd_QImageReader_decideFormatFromContent_const(qtdNativeId);
    }

    public final QIODevice device() const {
        void *ret = qtd_QImageReader_device_const(qtdNativeId);
        QIODevice __d_return_value = QIODevice.__getObject(ret);
        return __d_return_value;
    }

    public final QImageReader.ImageReaderError error() const {
        return cast(QImageReader.ImageReaderError) qtd_QImageReader_error_const(qtdNativeId);
    }

    public final string errorString() const {
        string res;
        qtd_QImageReader_errorString_const(qtdNativeId, &res);
        return res;
    }

    public final string fileName() const {
        string res;
        qtd_QImageReader_fileName_const(qtdNativeId, &res);
        return res;
    }

    public final QByteArray format() const {
        void* ret = qtd_QImageReader_format_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final int imageCount() const {
        return qtd_QImageReader_imageCount_const(qtdNativeId);
    }

    public final QImage.Format imageFormat() const {
        return cast(QImage.Format) qtd_QImageReader_imageFormat_const(qtdNativeId);
    }

    public final bool jumpToImage(int imageNumber) {
        return qtd_QImageReader_jumpToImage_int(qtdNativeId, imageNumber);
    }

    public final bool jumpToNextImage() {
        return qtd_QImageReader_jumpToNextImage(qtdNativeId);
    }

    public final int loopCount() const {
        return qtd_QImageReader_loopCount_const(qtdNativeId);
    }

    public final int nextImageDelay() const {
        return qtd_QImageReader_nextImageDelay_const(qtdNativeId);
    }

    public final int quality() const {
        return qtd_QImageReader_quality_const(qtdNativeId);
    }

    public final QImage read() {
        void* ret = qtd_QImageReader_read(qtdNativeId);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final QRect scaledClipRect() const {
        QRect res;
        qtd_QImageReader_scaledClipRect_const(qtdNativeId, &res);
        return res;
    }

    public final QSize scaledSize() const {
        QSize res;
        qtd_QImageReader_scaledSize_const(qtdNativeId, &res);
        return res;
    }

    public final void setAutoDetectImageFormat(bool enabled) {
        qtd_QImageReader_setAutoDetectImageFormat_bool(qtdNativeId, enabled);
    }

    public final void setBackgroundColor(const(QColor) color) {
        qtd_QImageReader_setBackgroundColor_QColor(qtdNativeId, color is null ? null : (cast(QColor)color).qtdNativeId);
    }

    public final void setClipRect(const(QRect) rect) {
        qtd_QImageReader_setClipRect_QRect(qtdNativeId, rect);
    }

    public final void setDecideFormatFromContent(bool ignored) {
        qtd_QImageReader_setDecideFormatFromContent_bool(qtdNativeId, ignored);
    }

    public final void setDevice(QIODevice device) {
        {
            __rcDevice = cast(Object) device;
        }
        qtd_QImageReader_setDevice_QIODevice(qtdNativeId, device is null ? null : device.qtdNativeId);
    }

    public final void setFileName(string fileName) {
        qtd_QImageReader_setFileName_string(qtdNativeId, fileName);
    }

    public final void setFormat(const(QByteArray) format) {
        qtd_QImageReader_setFormat_QByteArray(qtdNativeId, format is null ? null : (cast(QByteArray)format).qtdNativeId);
    }

    public final void setQuality(int quality) {
        qtd_QImageReader_setQuality_int(qtdNativeId, quality);
    }

    public final void setScaledClipRect(const(QRect) rect) {
        qtd_QImageReader_setScaledClipRect_QRect(qtdNativeId, rect);
    }

    public final void setScaledSize(const(QSize) size) {
        qtd_QImageReader_setScaledSize_QSize(qtdNativeId, size);
    }

    public final QSize size() const {
        QSize res;
        qtd_QImageReader_size_const(qtdNativeId, &res);
        return res;
    }

    public final bool supportsAnimation() const {
        return qtd_QImageReader_supportsAnimation_const(qtdNativeId);
    }

    public final bool supportsOption(QImageIOHandler.ImageOption option) const {
        return qtd_QImageReader_supportsOption_ImageOption_const(qtdNativeId, option);
    }

    public final string text(string key) const {
        string res;
        qtd_QImageReader_text_string_const(qtdNativeId, &res, key);
        return res;
    }

    public final QList!(string) textKeys() const {
        auto res = QList!(string).opCall();
        qtd_QImageReader_textKeys_const(qtdNativeId, &res);
        return res;
    }

    public static QByteArray imageFormat(QIODevice device) {
        void* ret = qtd_QImageReader_imageFormat_QIODevice(device is null ? null : device.qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public static QByteArray imageFormat(string fileName) {
        void* ret = qtd_QImageReader_imageFormat_string(fileName);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public static QList!(QByteArray) supportedImageFormats() {
        auto res = QList!(QByteArray).opCall();
        qtd_QImageReader_supportedImageFormats(&res);
        return res;
    }
// Field accessors
    static QImageReader __getObject(void* nativeId) {
        return qtd_QImageReader_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QImageReader;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QImageReader_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QImageReader_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QImageReader_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QImageReader qtd_QImageReader_from_ptr(void* ret) {
    auto return_value = new QImageReader(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QImageReader_delete(void *ptr);
extern (C) void qtd_QImageReader_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QImageReader_QImageReader(void *d_ptr);
private extern(C) void* qtd_QImageReader_QImageReader_QIODevice_QByteArray(void *d_ptr,
 void* device0,
 void* format1);
private extern(C) void* qtd_QImageReader_QImageReader_string_QByteArray(void *d_ptr,
 string fileName0,
 void* format1);
private extern(C) bool  qtd_QImageReader_autoDetectImageFormat_const(void* __this_nativeId);
private extern(C) void*  qtd_QImageReader_backgroundColor_const(void* __this_nativeId);
private extern(C) bool  qtd_QImageReader_canRead_const(void* __this_nativeId);
private extern(C) void  qtd_QImageReader_clipRect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) int  qtd_QImageReader_currentImageNumber_const(void* __this_nativeId);
private extern(C) void  qtd_QImageReader_currentImageRect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) bool  qtd_QImageReader_decideFormatFromContent_const(void* __this_nativeId);
private extern(C) void*  qtd_QImageReader_device_const(void* __this_nativeId);
private extern(C) int  qtd_QImageReader_error_const(void* __this_nativeId);
private extern(C) void  qtd_QImageReader_errorString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QImageReader_fileName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QImageReader_format_const(void* __this_nativeId);
private extern(C) int  qtd_QImageReader_imageCount_const(void* __this_nativeId);
private extern(C) int  qtd_QImageReader_imageFormat_const(void* __this_nativeId);
private extern(C) bool  qtd_QImageReader_jumpToImage_int(void* __this_nativeId,
 int imageNumber0);
private extern(C) bool  qtd_QImageReader_jumpToNextImage(void* __this_nativeId);
private extern(C) int  qtd_QImageReader_loopCount_const(void* __this_nativeId);
private extern(C) int  qtd_QImageReader_nextImageDelay_const(void* __this_nativeId);
private extern(C) int  qtd_QImageReader_quality_const(void* __this_nativeId);
private extern(C) void*  qtd_QImageReader_read(void* __this_nativeId);
private extern(C) void  qtd_QImageReader_scaledClipRect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void  qtd_QImageReader_scaledSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QImageReader_setAutoDetectImageFormat_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QImageReader_setBackgroundColor_QColor(void* __this_nativeId,
 void* color0);
private extern(C) void  qtd_QImageReader_setClipRect_QRect(void* __this_nativeId,
 QRect rect0);
private extern(C) void  qtd_QImageReader_setDecideFormatFromContent_bool(void* __this_nativeId,
 bool ignored0);
private extern(C) void  qtd_QImageReader_setDevice_QIODevice(void* __this_nativeId,
 void* device0);
private extern(C) void  qtd_QImageReader_setFileName_string(void* __this_nativeId,
 string fileName0);
private extern(C) void  qtd_QImageReader_setFormat_QByteArray(void* __this_nativeId,
 void* format0);
private extern(C) void  qtd_QImageReader_setQuality_int(void* __this_nativeId,
 int quality0);
private extern(C) void  qtd_QImageReader_setScaledClipRect_QRect(void* __this_nativeId,
 QRect rect0);
private extern(C) void  qtd_QImageReader_setScaledSize_QSize(void* __this_nativeId,
 QSize size0);
private extern(C) void  qtd_QImageReader_size_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) bool  qtd_QImageReader_supportsAnimation_const(void* __this_nativeId);
private extern(C) bool  qtd_QImageReader_supportsOption_ImageOption_const(void* __this_nativeId,
 int option0);
private extern(C) void  qtd_QImageReader_text_string_const(void* __this_nativeId,
 void* __d_return_value,
 string key0);
private extern(C) void  qtd_QImageReader_textKeys_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QImageReader_imageFormat_QIODevice(void* device0);
private extern(C) void*  qtd_QImageReader_imageFormat_string(string fileName0);
private extern(C) void  qtd_QImageReader_supportedImageFormats(void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QImageReader_initCallBacks(void* virtuals);

extern(C) void static_init_QImageReader() {
    qtd_QImageReader_initCallBacks(null);
}

// signal handlers

