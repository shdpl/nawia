module qt.gui.QPixmap;

public import qt.gui.QPixmap_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QPaintDevice;
public import qt.gui.QMatrix;
public import qt.gui.QPaintEngine;
public import qt.gui.QImageReader;
public import qt.gui.QTransform;
public import qt.gui.QPaintDevice;
public import qt.core.QRect;
public import qt.gui.QRegion;
public import qt.core.QPoint;
public import qt.gui.QWidget;
public import qt.core.QIODevice;
public import qt.gui.QColor;
public import qt.core.QSize;
public import qt.gui.QImage;
public import qt.core.QVariant;
public import qt.core.QByteArray;
public import qt.gui.QBitmap;
public import qt.core.QDataStream;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QPixmap : QtdObject, IQPaintDevice
{

// Functions

    public this() {
        void* ret = qtd_QPixmap_QPixmap(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPixmap) arg__1) {
        void* ret = qtd_QPixmap_QPixmap_QPixmap(cast(void*) this, arg__1 is null ? null : (cast(QPixmap)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QSize) arg__1) {
        void* ret = qtd_QPixmap_QPixmap_QSize(cast(void*) this, arg__1);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    private this(string fileName, const(char*) format, int flags) {
        void* ret = qtd_QPixmap_QPixmap_string_nativepointerchar_ImageConversionFlags(cast(void*) this, fileName, format, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    private this(const(char**) xpm) {
        void* ret = qtd_QPixmap_QPixmap_nativepointerchar(cast(void*) this, xpm);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int w, int h) {
        void* ret = qtd_QPixmap_QPixmap_int_int(cast(void*) this, w, h);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QPixmap alphaChannel() const {
        void* ret = qtd_QPixmap_alphaChannel_const(qtdNativeId);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public final long cacheKey() const {
        return qtd_QPixmap_cacheKey_const(qtdNativeId);
    }

    public final int colorCount() const {
        return qtd_QPixmap_colorCount_const(qtdNativeId);
    }

    public final bool convertFromImage(const(QImage) img, int flags = 0) {
        return qtd_QPixmap_convertFromImage_QImage_ImageConversionFlags(qtdNativeId, img is null ? null : (cast(QImage)img).qtdNativeId, flags);
    }

    public final QPixmap copy(const(QRect) rect = QRect()) const {
        void* ret = qtd_QPixmap_copy_QRect_const(qtdNativeId, rect);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public final QPixmap copy(int x, int y, int width, int height) const {
        void* ret = qtd_QPixmap_copy_int_int_int_int_const(qtdNativeId, x, y, width, height);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public final QBitmap createHeuristicMask(bool clipTight = true) const {
        void* ret = qtd_QPixmap_createHeuristicMask_bool_const(qtdNativeId, clipTight);
        QBitmap __d_return_value = new QBitmap(ret);
        return __d_return_value;
    }

    public final QBitmap createMaskFromColor(const(QColor) maskColor) const {
        void* ret = qtd_QPixmap_createMaskFromColor_QColor_const(qtdNativeId, maskColor is null ? null : (cast(QColor)maskColor).qtdNativeId);
        QBitmap __d_return_value = new QBitmap(ret);
        return __d_return_value;
    }

    public final QBitmap createMaskFromColor(const(QColor) maskColor, Qt.MaskMode mode) const {
        void* ret = qtd_QPixmap_createMaskFromColor_QColor_MaskMode_const(qtdNativeId, maskColor is null ? null : (cast(QColor)maskColor).qtdNativeId, mode);
        QBitmap __d_return_value = new QBitmap(ret);
        return __d_return_value;
    }

    public final int depth() const {
        return qtd_QPixmap_depth_const(qtdNativeId);
    }

    public final void fill(const(QColor) fillColor = QColor.White) {
        qtd_QPixmap_fill_QColor(qtdNativeId, fillColor is null ? null : (cast(QColor)fillColor).qtdNativeId);
    }

    public final void fill(QWidget widget, const(QPoint) ofs) {
        qtd_QPixmap_fill_QWidget_QPoint(qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId, ofs);
    }

    public final void fill(QWidget widget, int xofs, int yofs) {
        qtd_QPixmap_fill_QWidget_int_int(qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId, xofs, yofs);
    }

    public final bool hasAlpha() const {
        return qtd_QPixmap_hasAlpha_const(qtdNativeId);
    }

    public final bool hasAlphaChannel() const {
        return qtd_QPixmap_hasAlphaChannel_const(qtdNativeId);
    }

    public final int height() const {
        return qtd_QPixmap_height_const(qtdNativeId);
    }

    public final int heightMM() const {
        return qtd_QPixmap_heightMM_const(qtdNativeId);
    }

    public final bool isNull() const {
        return qtd_QPixmap_isNull_const(qtdNativeId);
    }

    public final bool isQBitmap() const {
        return qtd_QPixmap_isQBitmap_const(qtdNativeId);
    }

    private final bool load(string fileName, const(char*) format, int flags) {
        return qtd_QPixmap_load_string_nativepointerchar_ImageConversionFlags(qtdNativeId, fileName, format, flags);
    }

    private final bool loadFromData(const(QByteArray) data, const(char*) format, int flags) {
        return qtd_QPixmap_loadFromData_QByteArray_nativepointerchar_ImageConversionFlags(qtdNativeId, data is null ? null : (cast(QByteArray)data).qtdNativeId, format, flags);
    }

    private final bool loadFromData(const(ubyte*) buf, uint len, const(char*) format, int flags) {
        return qtd_QPixmap_loadFromData_nativepointerubyte_uint_nativepointerchar_ImageConversionFlags(qtdNativeId, buf, len, format, flags);
    }

    public final int logicalDpiX() const {
        return qtd_QPixmap_logicalDpiX_const(qtdNativeId);
    }

    public final int logicalDpiY() const {
        return qtd_QPixmap_logicalDpiY_const(qtdNativeId);
    }

    public final QBitmap mask() const {
        void* ret = qtd_QPixmap_mask_const(qtdNativeId);
        QBitmap __d_return_value = new QBitmap(ret);
        return __d_return_value;
    }

    public final int numColors() const {
        return qtd_QPixmap_numColors_const(qtdNativeId);
    }

    private final QVariant operator_cast_QVariant() const {
        void* ret = qtd_QPixmap_operator_cast_QVariant_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QPixmap_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QPixmap_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final bool paintingActive() const {
        return qtd_QPixmap_paintingActive_const(qtdNativeId);
    }

    public final int physicalDpiX() const {
        return qtd_QPixmap_physicalDpiX_const(qtdNativeId);
    }

    public final int physicalDpiY() const {
        return qtd_QPixmap_physicalDpiY_const(qtdNativeId);
    }

    public final QRect rect() const {
        QRect res;
        qtd_QPixmap_rect_const(qtdNativeId, &res);
        return res;
    }

    private final bool private_save(QIODevice device, const(char*) format, int quality) const {
        return qtd_QPixmap_private_save_QIODevice_nativepointerchar_int_const(qtdNativeId, device is null ? null : device.qtdNativeId, format, quality);
    }

    private final bool private_save(string fileName, const(char*) format, int quality) const {
        return qtd_QPixmap_private_save_string_nativepointerchar_int_const(qtdNativeId, fileName, format, quality);
    }

    public final QPixmap scaled(const(QSize) s, Qt.AspectRatioMode aspectMode = Qt.AspectRatioMode.IgnoreAspectRatio, Qt.TransformationMode mode = Qt.TransformationMode.FastTransformation) const {
        void* ret = qtd_QPixmap_scaled_QSize_AspectRatioMode_TransformationMode_const(qtdNativeId, s, aspectMode, mode);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public final QPixmap scaled(int w, int h, Qt.AspectRatioMode aspectMode = Qt.AspectRatioMode.IgnoreAspectRatio, Qt.TransformationMode mode = Qt.TransformationMode.FastTransformation) const {
        void* ret = qtd_QPixmap_scaled_int_int_AspectRatioMode_TransformationMode_const(qtdNativeId, w, h, aspectMode, mode);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public final QPixmap scaledToHeight(int h, Qt.TransformationMode mode = Qt.TransformationMode.FastTransformation) const {
        void* ret = qtd_QPixmap_scaledToHeight_int_TransformationMode_const(qtdNativeId, h, mode);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public final QPixmap scaledToWidth(int w, Qt.TransformationMode mode = Qt.TransformationMode.FastTransformation) const {
        void* ret = qtd_QPixmap_scaledToWidth_int_TransformationMode_const(qtdNativeId, w, mode);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public final void scroll(int dx, int dy, const(QRect) rect, QRegion exposed = null) {
        qtd_QPixmap_scroll_int_int_QRect_nativepointerQRegion(qtdNativeId, dx, dy, rect, exposed is null ? null : exposed.qtdNativeId);
    }

    public final void scroll(int dx, int dy, int x, int y, int width, int height, QRegion exposed = null) {
        qtd_QPixmap_scroll_int_int_int_int_int_int_nativepointerQRegion(qtdNativeId, dx, dy, x, y, width, height, exposed is null ? null : exposed.qtdNativeId);
    }

    public final void setAlphaChannel(const(QPixmap) arg__1) {
        qtd_QPixmap_setAlphaChannel_QPixmap(qtdNativeId, arg__1 is null ? null : (cast(QPixmap)arg__1).qtdNativeId);
    }

    public final void setMask(const(QBitmap) arg__1) {
        qtd_QPixmap_setMask_QBitmap(qtdNativeId, arg__1 is null ? null : (cast(QBitmap)arg__1).qtdNativeId);
    }

    public final QSize size() const {
        QSize res;
        qtd_QPixmap_size_const(qtdNativeId, &res);
        return res;
    }

    public final QImage toImage() const {
        void* ret = qtd_QPixmap_toImage_const(qtdNativeId);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final QPixmap transformed(const(QMatrix) arg__1, Qt.TransformationMode mode = Qt.TransformationMode.FastTransformation) const {
        void* ret = qtd_QPixmap_transformed_QMatrix_TransformationMode_const(qtdNativeId, arg__1 is null ? null : (cast(QMatrix)arg__1).qtdNativeId, mode);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public final QPixmap transformed(const(QTransform) arg__1, Qt.TransformationMode mode = Qt.TransformationMode.FastTransformation) const {
        void* ret = qtd_QPixmap_transformed_QTransform_TransformationMode_const(qtdNativeId, arg__1 is null ? null : (cast(QTransform)arg__1).qtdNativeId, mode);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public final int width() const {
        return qtd_QPixmap_width_const(qtdNativeId);
    }

    public final int widthMM() const {
        return qtd_QPixmap_widthMM_const(qtdNativeId);
    }

    public int devType() const {
        return qtd_QPixmap_devType_const(qtdNativeId);
    }

    public int metric(QPaintDevice.PaintDeviceMetric arg__1) const {
        return qtd_QPixmap_metric_PaintDeviceMetric_const(qtdNativeId, arg__1);
    }

    public QPaintEngine paintEngine() const {
        void* ret = qtd_QPixmap_paintEngine_const(qtdNativeId);
        QPaintEngine __d_return_value = qtd_QPaintEngine_from_ptr(ret);

        return __d_return_value;
    }

    public static int defaultDepth() {
        return qtd_QPixmap_defaultDepth();
    }

    public static QPixmap fromImage(const(QImage) image, int flags = 0) {
        void* ret = qtd_QPixmap_fromImage_QImage_ImageConversionFlags(image is null ? null : (cast(QImage)image).qtdNativeId, flags);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public static QPixmap fromImageReader(QImageReader imageReader, int flags = 0) {
        void* ret = qtd_QPixmap_fromImageReader_QImageReader_ImageConversionFlags(imageReader is null ? null : imageReader.qtdNativeId, flags);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public static QPixmap grabWidget(QWidget widget, const(QRect) rect) {
        void* ret = qtd_QPixmap_grabWidget_QWidget_QRect(widget is null ? null : widget.qtdNativeId, rect);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public static QPixmap grabWidget(QWidget widget, int x = 0, int y = 0, int w = -1, int h = -1) {
        void* ret = qtd_QPixmap_grabWidget_QWidget_int_int_int_int(widget is null ? null : widget.qtdNativeId, x, y, w, h);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public static QPixmap grabWindow(long arg__1, int x = 0, int y = 0, int w = -1, int h = -1) {
        void* ret = qtd_QPixmap_grabWindow_long_int_int_int_int(arg__1, x, y, w, h);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public static QMatrix trueMatrix(const(QMatrix) m, int w, int h) {
        void* ret = qtd_QPixmap_trueMatrix_QMatrix_int_int(m is null ? null : (cast(QMatrix)m).qtdNativeId, w, h);
        QMatrix __d_return_value = new QMatrix(ret);
        return __d_return_value;
    }

    public static QTransform trueMatrix(const(QTransform) m, int w, int h) {
        void* ret = qtd_QPixmap_trueMatrix_QTransform_int_int(m is null ? null : (cast(QTransform)m).qtdNativeId, w, h);
        QTransform __d_return_value = new QTransform(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QPixmap;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QPixmap_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QPixmap_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQPaintDevice = qtd_QPixmap_cast_to_QPaintDevice(nativeId);
    }

    private void* __m_ptr_IQPaintDevice;
    public void* __ptr_IQPaintDevice() { return __m_ptr_IQPaintDevice; }

    protected override void qtdDeleteNative() {
        qtd_QPixmap_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QPixmap_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QPixmap_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QPixmap_QTypeInfo_isComplex();
        isStatic = qtd_QPixmap_QTypeInfo_isStatic();
        isLarge = qtd_QPixmap_QTypeInfo_isLarge();
        isPointer = qtd_QPixmap_QTypeInfo_isPointer();
        isDummy = qtd_QPixmap_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    private import qtd.String;

    public this(string[] xpm) {
        this(toStringzArray(xpm));
    }

    public this(string fileName, string format = null, int flags = Qt.ImageConversionFlag.AutoColor) {
        this(fileName, toStringz(format), flags);
    }

    /*
    public this(string fileName, string format = null, Qt.ImageConversionFlags flags = Qt.ImageConversionFlag.AutoColor) {
    this(fileName, toStringz(format), flags);
    }
     */

    public final bool load(string fileName, string format, int flags = Qt.ImageConversionFlag.AutoColor) {
        return load(fileName, toStringz(format), flags);
    }
    /*
    public final bool load(string fileName, string format = null, Qt.ImageConversionFlags flags = Qt.ImageConversionFlag.AutoColor) {
    return load(fileName, toStringz(format), flags);
    }
     */
    /*
    public final bool loadFromData(ubyte[] data, string format, int flags = Qt.ImageConversionFlag.AutoColor) {
    return loadFromData(data.ptr, data.length, toStringz(format), flags);
    }

    public final bool loadFromData(ubyte[] data, string format = null, Qt.ImageConversionFlags flags = Qt.ImageConversionFlag.AutoColor) {
    return loadFromData(qdata.ptr, data.length, toStringz(format), flags);
    }
     */

    public final bool loadFromData(QByteArray data, string format, int flags = Qt.ImageConversionFlag.AutoColor) {
        return loadFromData(data, toStringz(format), flags);
    }

    /*	public final bool loadFromData(QByteArray data, string format = null, Qt.ImageConversionFlags flags = Qt.ImageConversionFlag.AutoColor) {
    return loadFromData(data, toStringz(format), flags);
    }
     */

    public final bool save(string fileName, string format, int quality = -1) {
        return private_save(fileName, toStringz(format), quality);
    }

    public final bool save(QIODevice dev, string format, int quality = -1) {
        return private_save(dev, toStringz(format), quality);
    }


    // TEMPLATE - gui.class_from_variant_java - START
    public this(QVariant arg__1) {
        void* __qt_return_value = qtd_QPixmap_QPixmap_QVariant(cast(void*) this, arg__1 is null ? null : arg__1.qtdNativeId);
        super(__qt_return_value);
    }
    // TEMPLATE - gui.class_from_variant_java - END





}

    // TEMPLATE - gui.class_from_variant_java_free - START
    private extern (C) void* qtd_QPixmap_QPixmap_QVariant(void *d_ptr,
        void* arg__1);
    // TEMPLATE - gui.class_from_variant_java_free - END

    private static extern (C) void*qtd_QPixmap_cast_to_QPaintDevice(void* nativeId);
private extern(C) void qtd_QPixmap_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QPixmap_native_copy(const void* orig);
extern (C) void qtd_QPixmap_delete(void *ptr);
extern (C) void qtd_QPixmap_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPixmap_QPixmap(void *d_ptr);
private extern(C) void* qtd_QPixmap_QPixmap_QPixmap(void *d_ptr,
 void* arg__1);
private extern(C) void* qtd_QPixmap_QPixmap_QSize(void *d_ptr,
 QSize arg__1);
private extern(C) void* qtd_QPixmap_QPixmap_string_nativepointerchar_ImageConversionFlags(void *d_ptr,
 string fileName0,
 const (char*) format1,
 int flags2);
private extern(C) void* qtd_QPixmap_QPixmap_nativepointerchar(void *d_ptr,
 const (char**) xpm0);
private extern(C) void* qtd_QPixmap_QPixmap_int_int(void *d_ptr,
 int w0,
 int h1);
private extern(C) void*  qtd_QPixmap_alphaChannel_const(void* __this_nativeId);
private extern(C) long  qtd_QPixmap_cacheKey_const(void* __this_nativeId);
private extern(C) int  qtd_QPixmap_colorCount_const(void* __this_nativeId);
private extern(C) bool  qtd_QPixmap_convertFromImage_QImage_ImageConversionFlags(void* __this_nativeId,
 void* img0,
 int flags1);
private extern(C) void*  qtd_QPixmap_copy_QRect_const(void* __this_nativeId,
 QRect rect0);
private extern(C) void*  qtd_QPixmap_copy_int_int_int_int_const(void* __this_nativeId,
 int x0,
 int y1,
 int width2,
 int height3);
private extern(C) void*  qtd_QPixmap_createHeuristicMask_bool_const(void* __this_nativeId,
 bool clipTight0);
private extern(C) void*  qtd_QPixmap_createMaskFromColor_QColor_const(void* __this_nativeId,
 void* maskColor0);
private extern(C) void*  qtd_QPixmap_createMaskFromColor_QColor_MaskMode_const(void* __this_nativeId,
 void* maskColor0,
 int mode1);
private extern(C) int  qtd_QPixmap_depth_const(void* __this_nativeId);
private extern(C) void  qtd_QPixmap_fill_QColor(void* __this_nativeId,
 void* fillColor0);
private extern(C) void  qtd_QPixmap_fill_QWidget_QPoint(void* __this_nativeId,
 void* widget0,
 QPoint ofs1);
private extern(C) void  qtd_QPixmap_fill_QWidget_int_int(void* __this_nativeId,
 void* widget0,
 int xofs1,
 int yofs2);
private extern(C) bool  qtd_QPixmap_hasAlpha_const(void* __this_nativeId);
private extern(C) bool  qtd_QPixmap_hasAlphaChannel_const(void* __this_nativeId);
private extern(C) int  qtd_QPixmap_height_const(void* __this_nativeId);
private extern(C) int  qtd_QPixmap_heightMM_const(void* __this_nativeId);
private extern(C) bool  qtd_QPixmap_isNull_const(void* __this_nativeId);
private extern(C) bool  qtd_QPixmap_isQBitmap_const(void* __this_nativeId);
private extern(C) bool  qtd_QPixmap_load_string_nativepointerchar_ImageConversionFlags(void* __this_nativeId,
 string fileName0,
 const (char*) format1,
 int flags2);
private extern(C) bool  qtd_QPixmap_loadFromData_QByteArray_nativepointerchar_ImageConversionFlags(void* __this_nativeId,
 void* data0,
 const (char*) format1,
 int flags2);
private extern(C) bool  qtd_QPixmap_loadFromData_nativepointerubyte_uint_nativepointerchar_ImageConversionFlags(void* __this_nativeId,
 const (ubyte*) buf0,
 uint len1,
 const (char*) format2,
 int flags3);
private extern(C) int  qtd_QPixmap_logicalDpiX_const(void* __this_nativeId);
private extern(C) int  qtd_QPixmap_logicalDpiY_const(void* __this_nativeId);
private extern(C) void*  qtd_QPixmap_mask_const(void* __this_nativeId);
private extern(C) int  qtd_QPixmap_numColors_const(void* __this_nativeId);
private extern(C) void*  qtd_QPixmap_operator_cast_QVariant_const(void* __this_nativeId);
private extern(C) void  qtd_QPixmap_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QPixmap_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QPixmap_paintingActive_const(void* __this_nativeId);
private extern(C) int  qtd_QPixmap_physicalDpiX_const(void* __this_nativeId);
private extern(C) int  qtd_QPixmap_physicalDpiY_const(void* __this_nativeId);
private extern(C) void  qtd_QPixmap_rect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) bool  qtd_QPixmap_private_save_QIODevice_nativepointerchar_int_const(void* __this_nativeId,
 void* device0,
 const (char*) format1,
 int quality2);
private extern(C) bool  qtd_QPixmap_private_save_string_nativepointerchar_int_const(void* __this_nativeId,
 string fileName0,
 const (char*) format1,
 int quality2);
private extern(C) void*  qtd_QPixmap_scaled_QSize_AspectRatioMode_TransformationMode_const(void* __this_nativeId,
 QSize s0,
 int aspectMode1,
 int mode2);
private extern(C) void*  qtd_QPixmap_scaled_int_int_AspectRatioMode_TransformationMode_const(void* __this_nativeId,
 int w0,
 int h1,
 int aspectMode2,
 int mode3);
private extern(C) void*  qtd_QPixmap_scaledToHeight_int_TransformationMode_const(void* __this_nativeId,
 int h0,
 int mode1);
private extern(C) void*  qtd_QPixmap_scaledToWidth_int_TransformationMode_const(void* __this_nativeId,
 int w0,
 int mode1);
private extern(C) void  qtd_QPixmap_scroll_int_int_QRect_nativepointerQRegion(void* __this_nativeId,
 int dx0,
 int dy1,
 QRect rect2,
 void* exposed3);
private extern(C) void  qtd_QPixmap_scroll_int_int_int_int_int_int_nativepointerQRegion(void* __this_nativeId,
 int dx0,
 int dy1,
 int x2,
 int y3,
 int width4,
 int height5,
 void* exposed6);
private extern(C) void  qtd_QPixmap_setAlphaChannel_QPixmap(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QPixmap_setMask_QBitmap(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QPixmap_size_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void*  qtd_QPixmap_toImage_const(void* __this_nativeId);
private extern(C) void*  qtd_QPixmap_transformed_QMatrix_TransformationMode_const(void* __this_nativeId,
 void* arg__1,
 int mode1);
private extern(C) void*  qtd_QPixmap_transformed_QTransform_TransformationMode_const(void* __this_nativeId,
 void* arg__1,
 int mode1);
private extern(C) int  qtd_QPixmap_width_const(void* __this_nativeId);
private extern(C) int  qtd_QPixmap_widthMM_const(void* __this_nativeId);
private extern(C) int  qtd_QPixmap_devType_const(void* __this_nativeId);
private extern(C) int  qtd_QPixmap_metric_PaintDeviceMetric_const(void* __this_nativeId,
 int arg__1);
private extern(C) void*  qtd_QPixmap_paintEngine_const(void* __this_nativeId);
private extern(C) int  qtd_QPixmap_defaultDepth();
private extern(C) void*  qtd_QPixmap_fromImage_QImage_ImageConversionFlags(void* image0,
 int flags1);
private extern(C) void*  qtd_QPixmap_fromImageReader_QImageReader_ImageConversionFlags(void* imageReader0,
 int flags1);
private extern(C) void*  qtd_QPixmap_grabWidget_QWidget_QRect(void* widget0,
 QRect rect1);
private extern(C) void*  qtd_QPixmap_grabWidget_QWidget_int_int_int_int(void* widget0,
 int x1,
 int y2,
 int w3,
 int h4);
private extern(C) void*  qtd_QPixmap_grabWindow_long_int_int_int_int(long arg__1,
 int x1,
 int y2,
 int w3,
 int h4);
private extern(C) void*  qtd_QPixmap_trueMatrix_QMatrix_int_int(void* m0,
 int w1,
 int h2);
private extern(C) void*  qtd_QPixmap_trueMatrix_QTransform_int_int(void* m0,
 int w1,
 int h2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QPixmap_initCallBacks(void* virtuals);

extern(C) void static_init_QPixmap() {
    QPixmap.QTypeInfo.init();
    qtd_QPixmap_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QPixmap_QTypeInfo_isComplex();
private extern (C) bool qtd_QPixmap_QTypeInfo_isStatic();
private extern (C) bool qtd_QPixmap_QTypeInfo_isLarge();
private extern (C) bool qtd_QPixmap_QTypeInfo_isPointer();
private extern (C) bool qtd_QPixmap_QTypeInfo_isDummy();
