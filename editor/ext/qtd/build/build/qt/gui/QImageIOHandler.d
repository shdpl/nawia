module qt.gui.QImageIOHandler;

public import qt.gui.QImageIOHandler_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QIODevice;
public import qt.core.QRect;
public import qt.core.QVariant;
public import qt.gui.QImage;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QImageIOHandler : QtdObject
{
    public enum ImageOption {
        Size = 0,
        ClipRect = 1,
        Description = 2,
        ScaledClipRect = 3,
        ScaledSize = 4,
        CompressionRatio = 5,
        Gamma = 6,
        Quality = 7,
        Name = 8,
        SubType = 9,
        IncrementalReading = 10,
        Endianness = 11,
        Animation = 12,
        BackgroundColor = 13,
        ImageFormat = 14
    }

    alias ImageOption.Size Size;
    alias ImageOption.ClipRect ClipRect;
    alias ImageOption.Description Description;
    alias ImageOption.ScaledClipRect ScaledClipRect;
    alias ImageOption.ScaledSize ScaledSize;
    alias ImageOption.CompressionRatio CompressionRatio;
    alias ImageOption.Gamma Gamma;
    alias ImageOption.Quality Quality;
    alias ImageOption.Name Name;
    alias ImageOption.SubType SubType;
    alias ImageOption.IncrementalReading IncrementalReading;
    alias ImageOption.Endianness Endianness;
    alias ImageOption.Animation Animation;
    alias ImageOption.BackgroundColor BackgroundColor;
    alias ImageOption.ImageFormat ImageFormat;


Object __rcDevice = null;

// Functions

    public this() {
        void* ret = qtd_QImageIOHandler_QImageIOHandler(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QIODevice device() const {
        void *ret = qtd_QImageIOHandler_device_const(qtdNativeId);
        QIODevice __d_return_value = QIODevice.__getObject(ret);
        return __d_return_value;
    }

    public final QByteArray format() const {
        void* ret = qtd_QImageIOHandler_format_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final void setDevice(QIODevice device) {
        {
            __rcDevice = cast(Object) device;
        }
        qtd_QImageIOHandler_setDevice_QIODevice(qtdNativeId, device is null ? null : device.qtdNativeId);
    }

    public final void setFormat(const(QByteArray) format) {
        qtd_QImageIOHandler_setFormat_QByteArray(qtdNativeId, format is null ? null : (cast(QByteArray)format).qtdNativeId);
    }

    public abstract bool canRead() const;

    public int currentImageNumber() const {
        return qtd_QImageIOHandler_currentImageNumber_const(qtdNativeId);
    }

    public QRect currentImageRect() const {
        QRect res;
        qtd_QImageIOHandler_currentImageRect_const(qtdNativeId, &res);
        return res;
    }

    public int imageCount() const {
        return qtd_QImageIOHandler_imageCount_const(qtdNativeId);
    }

    public bool jumpToImage(int imageNumber) {
        return qtd_QImageIOHandler_jumpToImage_int(qtdNativeId, imageNumber);
    }

    public bool jumpToNextImage() {
        return qtd_QImageIOHandler_jumpToNextImage(qtdNativeId);
    }

    public int loopCount() const {
        return qtd_QImageIOHandler_loopCount_const(qtdNativeId);
    }

    public int nextImageDelay() const {
        return qtd_QImageIOHandler_nextImageDelay_const(qtdNativeId);
    }

    public QVariant option(QImageIOHandler.ImageOption option) const {
        void* ret = qtd_QImageIOHandler_option_ImageOption_const(qtdNativeId, option);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public abstract bool read(QImage image);

    public void setOption(QImageIOHandler.ImageOption option, QVariant value) {
        qtd_QImageIOHandler_setOption_ImageOption_QVariant(qtdNativeId, option, value is null ? null : value.qtdNativeId);
    }

    public bool supportsOption(QImageIOHandler.ImageOption option) const {
        return qtd_QImageIOHandler_supportsOption_ImageOption_const(qtdNativeId, option);
    }

    public bool write(const(QImage) image) {
        return qtd_QImageIOHandler_write_QImage(qtdNativeId, image is null ? null : (cast(QImage)image).qtdNativeId);
    }
// Field accessors
    static QImageIOHandler __getObject(void* nativeId) {
        return qtd_QImageIOHandler_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QImageIOHandler;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QImageIOHandler_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QImageIOHandler_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QImageIOHandler_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QImageIOHandler_ConcreteWrapper : QImageIOHandler {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public bool canRead() const {
            return qtd_QImageIOHandler_canRead_const(qtdNativeId);
        }

        override         public bool read(QImage image) {
            return qtd_QImageIOHandler_read_nativepointerQImage(qtdNativeId, image is null ? null : image.qtdNativeId);
        }
    }


extern (C) void *__QImageIOHandler_entity(void *q_ptr);

QImageIOHandler qtd_QImageIOHandler_from_ptr(void* ret) {
    void* d_obj = __QImageIOHandler_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QImageIOHandler) d_obj_ref;
    } else {
        auto return_value = new QImageIOHandler_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QImageIOHandler_delete(void *ptr);
extern (C) void qtd_QImageIOHandler_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QImageIOHandler_QImageIOHandler(void *d_ptr);
private extern(C) void*  qtd_QImageIOHandler_device_const(void* __this_nativeId);
private extern(C) void*  qtd_QImageIOHandler_format_const(void* __this_nativeId);
private extern(C) void  qtd_QImageIOHandler_setDevice_QIODevice(void* __this_nativeId,
 void* device0);
private extern(C) void  qtd_QImageIOHandler_setFormat_QByteArray(void* __this_nativeId,
 void* format0);
private extern(C) bool  qtd_QImageIOHandler_canRead_const(void* __this_nativeId);
private extern(C) int  qtd_QImageIOHandler_currentImageNumber_const(void* __this_nativeId);
private extern(C) void  qtd_QImageIOHandler_currentImageRect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) int  qtd_QImageIOHandler_imageCount_const(void* __this_nativeId);
private extern(C) bool  qtd_QImageIOHandler_jumpToImage_int(void* __this_nativeId,
 int imageNumber0);
private extern(C) bool  qtd_QImageIOHandler_jumpToNextImage(void* __this_nativeId);
private extern(C) int  qtd_QImageIOHandler_loopCount_const(void* __this_nativeId);
private extern(C) int  qtd_QImageIOHandler_nextImageDelay_const(void* __this_nativeId);
private extern(C) void*  qtd_QImageIOHandler_option_ImageOption_const(void* __this_nativeId,
 int option0);
private extern(C) bool  qtd_QImageIOHandler_read_nativepointerQImage(void* __this_nativeId,
 void* image0);
private extern(C) void  qtd_QImageIOHandler_setOption_ImageOption_QVariant(void* __this_nativeId,
 int option0,
 void* value1);
private extern(C) bool  qtd_QImageIOHandler_supportsOption_ImageOption_const(void* __this_nativeId,
 int option0);
private extern(C) bool  qtd_QImageIOHandler_write_QImage(void* __this_nativeId,
 void* image0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId) qtd_QImageIOHandler_canRead_const_dispatch; }
extern(C) bool qtd_export_QImageIOHandler_canRead_const_dispatch(void *dId){
    auto d_object = cast(QImageIOHandler) dId;
    auto return_value = d_object.canRead();
    return return_value;
}

extern(C){ extern int function(void *dId) qtd_QImageIOHandler_currentImageNumber_const_dispatch; }
extern(C) int qtd_export_QImageIOHandler_currentImageNumber_const_dispatch(void *dId){
    auto d_object = cast(QImageIOHandler) dId;
    auto return_value = d_object.currentImageNumber();
    return return_value;
}

extern(C){ extern void function(void *dId, QRect *__d_return_value) qtd_QImageIOHandler_currentImageRect_const_dispatch; }
extern(C) void qtd_export_QImageIOHandler_currentImageRect_const_dispatch(void *dId, QRect *__d_return_value){
    auto d_object = cast(QImageIOHandler) dId;
    *__d_return_value = d_object.currentImageRect();
}

extern(C){ extern int function(void *dId) qtd_QImageIOHandler_imageCount_const_dispatch; }
extern(C) int qtd_export_QImageIOHandler_imageCount_const_dispatch(void *dId){
    auto d_object = cast(QImageIOHandler) dId;
    auto return_value = d_object.imageCount();
    return return_value;
}

extern(C){ extern bool function(void *dId, int imageNumber0) qtd_QImageIOHandler_jumpToImage_int_dispatch; }
extern(C) bool qtd_export_QImageIOHandler_jumpToImage_int_dispatch(void *dId, int imageNumber0){
    auto d_object = cast(QImageIOHandler) dId;
    auto return_value = d_object.jumpToImage(imageNumber0);
    return return_value;
}

extern(C){ extern bool function(void *dId) qtd_QImageIOHandler_jumpToNextImage_dispatch; }
extern(C) bool qtd_export_QImageIOHandler_jumpToNextImage_dispatch(void *dId){
    auto d_object = cast(QImageIOHandler) dId;
    auto return_value = d_object.jumpToNextImage();
    return return_value;
}

extern(C){ extern int function(void *dId) qtd_QImageIOHandler_loopCount_const_dispatch; }
extern(C) int qtd_export_QImageIOHandler_loopCount_const_dispatch(void *dId){
    auto d_object = cast(QImageIOHandler) dId;
    auto return_value = d_object.loopCount();
    return return_value;
}

extern(C){ extern int function(void *dId) qtd_QImageIOHandler_nextImageDelay_const_dispatch; }
extern(C) int qtd_export_QImageIOHandler_nextImageDelay_const_dispatch(void *dId){
    auto d_object = cast(QImageIOHandler) dId;
    auto return_value = d_object.nextImageDelay();
    return return_value;
}

extern(C){ extern void* function(void *dId, int option0) qtd_QImageIOHandler_option_ImageOption_const_dispatch; }
extern(C) void* qtd_export_QImageIOHandler_option_ImageOption_const_dispatch(void *dId, int option0){
    auto d_object = cast(QImageIOHandler) dId;
    auto option0_enum = cast(QImageIOHandler.ImageOption) option0;
    QVariant ret_value = d_object.option(option0_enum);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern bool function(void *dId, void* image0) qtd_QImageIOHandler_read_nativepointerQImage_dispatch; }
extern(C) bool qtd_export_QImageIOHandler_read_nativepointerQImage_dispatch(void *dId, void* image0){
    auto d_object = cast(QImageIOHandler) dId;
    scope image0_d_ref = new QImage(image0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.read(image0_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId, int option0, void* value1) qtd_QImageIOHandler_setOption_ImageOption_QVariant_dispatch; }
extern(C) void qtd_export_QImageIOHandler_setOption_ImageOption_QVariant_dispatch(void *dId, int option0, void* value1){
    auto d_object = cast(QImageIOHandler) dId;
    auto option0_enum = cast(QImageIOHandler.ImageOption) option0;
    scope value1_d_ref = new QVariant(value1, QtdObjectInitFlags.onStack);
    d_object.setOption(option0_enum, value1_d_ref);
}

extern(C){ extern bool function(void *dId, int option0) qtd_QImageIOHandler_supportsOption_ImageOption_const_dispatch; }
extern(C) bool qtd_export_QImageIOHandler_supportsOption_ImageOption_const_dispatch(void *dId, int option0){
    auto d_object = cast(QImageIOHandler) dId;
    auto option0_enum = cast(QImageIOHandler.ImageOption) option0;
    auto return_value = d_object.supportsOption(option0_enum);
    return return_value;
}

extern(C){ extern bool function(void *dId, void* image0) qtd_QImageIOHandler_write_QImage_dispatch; }
extern(C) bool qtd_export_QImageIOHandler_write_QImage_dispatch(void *dId, void* image0){
    auto d_object = cast(QImageIOHandler) dId;
    scope image0_d_ref = new QImage(image0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.write(image0_d_ref);
    return return_value;
}

private extern (C) void qtd_QImageIOHandler_initCallBacks(void* virtuals);

extern(C) void static_init_QImageIOHandler() {
    void*[13] virt_arr;
    virt_arr[0] = &qtd_export_QImageIOHandler_canRead_const_dispatch;
    virt_arr[1] = &qtd_export_QImageIOHandler_currentImageNumber_const_dispatch;
    virt_arr[2] = &qtd_export_QImageIOHandler_currentImageRect_const_dispatch;
    virt_arr[3] = &qtd_export_QImageIOHandler_imageCount_const_dispatch;
    virt_arr[4] = &qtd_export_QImageIOHandler_jumpToImage_int_dispatch;
    virt_arr[5] = &qtd_export_QImageIOHandler_jumpToNextImage_dispatch;
    virt_arr[6] = &qtd_export_QImageIOHandler_loopCount_const_dispatch;
    virt_arr[7] = &qtd_export_QImageIOHandler_nextImageDelay_const_dispatch;
    virt_arr[8] = &qtd_export_QImageIOHandler_option_ImageOption_const_dispatch;
    virt_arr[9] = &qtd_export_QImageIOHandler_read_nativepointerQImage_dispatch;
    virt_arr[10] = &qtd_export_QImageIOHandler_setOption_ImageOption_QVariant_dispatch;
    virt_arr[11] = &qtd_export_QImageIOHandler_supportsOption_ImageOption_const_dispatch;
    virt_arr[12] = &qtd_export_QImageIOHandler_write_QImage_dispatch;
    qtd_QImageIOHandler_initCallBacks(virt_arr.ptr);
}

// signal handlers

