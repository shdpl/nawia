module qt.gui.QImage;

public import qt.gui.QImage_aux;
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
public import qt.gui.QTransform;
public import qt.gui.QPaintDevice;
public import qt.core.QRect;
public import qt.core.QPoint;
public import qt.core.QIODevice;
public import qt.core.QSize;
public import qt.core.QVariant;
public import qt.core.QByteArray;
public import qt.core.QDataStream;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QImage : QtdObject, IQPaintDevice
{
    public enum InvertMode {
        InvertRgb = 0,
        InvertRgba = 1
    }

    alias InvertMode.InvertRgb InvertRgb;
    alias InvertMode.InvertRgba InvertRgba;

    public enum Format {
        Format_Invalid = 0,
        Format_Mono = 1,
        Format_MonoLSB = 2,
        Format_Indexed8 = 3,
        Format_RGB32 = 4,
        Format_ARGB32 = 5,
        Format_ARGB32_Premultiplied = 6,
        Format_RGB16 = 7,
        Format_ARGB8565_Premultiplied = 8,
        Format_RGB666 = 9,
        Format_ARGB6666_Premultiplied = 10,
        Format_RGB555 = 11,
        Format_ARGB8555_Premultiplied = 12,
        Format_RGB888 = 13,
        Format_RGB444 = 14,
        Format_ARGB4444_Premultiplied = 15,
        NImageFormats = 16
    }

    alias Format.Format_Invalid Format_Invalid;
    alias Format.Format_Mono Format_Mono;
    alias Format.Format_MonoLSB Format_MonoLSB;
    alias Format.Format_Indexed8 Format_Indexed8;
    alias Format.Format_RGB32 Format_RGB32;
    alias Format.Format_ARGB32 Format_ARGB32;
    alias Format.Format_ARGB32_Premultiplied Format_ARGB32_Premultiplied;
    alias Format.Format_RGB16 Format_RGB16;
    alias Format.Format_ARGB8565_Premultiplied Format_ARGB8565_Premultiplied;
    alias Format.Format_RGB666 Format_RGB666;
    alias Format.Format_ARGB6666_Premultiplied Format_ARGB6666_Premultiplied;
    alias Format.Format_RGB555 Format_RGB555;
    alias Format.Format_ARGB8555_Premultiplied Format_ARGB8555_Premultiplied;
    alias Format.Format_RGB888 Format_RGB888;
    alias Format.Format_RGB444 Format_RGB444;
    alias Format.Format_ARGB4444_Premultiplied Format_ARGB4444_Premultiplied;
    alias Format.NImageFormats NImageFormats;


// Functions

    public this() {
        void* ret = qtd_QImage_QImage(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QImage) arg__1) {
        void* ret = qtd_QImage_QImage_QImage(cast(void*) this, arg__1 is null ? null : (cast(QImage)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QSize) size, QImage.Format format) {
        void* ret = qtd_QImage_QImage_QSize_Format(cast(void*) this, size, format);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    private this(string fileName, const(char*) format) {
        void* ret = qtd_QImage_QImage_string_nativepointerchar(cast(void*) this, fileName, format);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    private this(const(char**) xpm) {
        void* ret = qtd_QImage_QImage_nativepointerchar(cast(void*) this, xpm);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int width, int height, QImage.Format format) {
        void* ret = qtd_QImage_QImage_int_int_Format(cast(void*) this, width, height, format);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    private this(ubyte* data, int width, int height, QImage.Format format) {
        void* ret = qtd_QImage_QImage_nativepointerubyte_int_int_Format(cast(void*) this, data, width, height, format);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(ubyte* data, int width, int height, int bytesPerLine, QImage.Format format) {
        void* ret = qtd_QImage_QImage_nativepointerubyte_int_int_int_Format(cast(void*) this, data, width, height, bytesPerLine, format);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool allGray() const {
        return qtd_QImage_allGray_const(qtdNativeId);
    }

    public final QImage alphaChannel() const {
        void* ret = qtd_QImage_alphaChannel_const(qtdNativeId);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final int bitPlaneCount() const {
        return qtd_QImage_bitPlaneCount_const(qtdNativeId);
    }

    public final ubyte* bits() {
        return qtd_QImage_bits(qtdNativeId);
    }

    public final int byteCount() const {
        return qtd_QImage_byteCount_const(qtdNativeId);
    }

    public final int bytesPerLine() const {
        return qtd_QImage_bytesPerLine_const(qtdNativeId);
    }

    public final long cacheKey() const {
        return qtd_QImage_cacheKey_const(qtdNativeId);
    }

    public final uint color(int i) const {
        return qtd_QImage_color_int_const(qtdNativeId, i);
    }

    public final int colorCount() const {
        return qtd_QImage_colorCount_const(qtdNativeId);
    }

    public final uint[] colorTable() const {
        uint[] res;
        qtd_QImage_colorTable_const(qtdNativeId, &res);
        return res;
    }

    public final const(ubyte*) constBits() const {
        return qtd_QImage_constBits_const(qtdNativeId);
    }

    public final const(ubyte*) constScanLine(int arg__1) const {
        return qtd_QImage_constScanLine_int_const(qtdNativeId, arg__1);
    }

    public final QImage convertToFormat(QImage.Format f, int flags = 0) const {
        void* ret = qtd_QImage_convertToFormat_Format_ImageConversionFlags_const(qtdNativeId, f, flags);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final QImage convertToFormat(QImage.Format f, uint[] colorTable, int flags = 0) const {
        void* ret = qtd_QImage_convertToFormat_Format_QVector_ImageConversionFlags_const(qtdNativeId, f, &colorTable, flags);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final QImage copy(const(QRect) rect = QRect()) const {
        void* ret = qtd_QImage_copy_QRect_const(qtdNativeId, rect);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final QImage copy(int x, int y, int w, int h) const {
        void* ret = qtd_QImage_copy_int_int_int_int_const(qtdNativeId, x, y, w, h);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final QImage createAlphaMask(int flags = 0) const {
        void* ret = qtd_QImage_createAlphaMask_ImageConversionFlags_const(qtdNativeId, flags);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final QImage createHeuristicMask(bool clipTight = true) const {
        void* ret = qtd_QImage_createHeuristicMask_bool_const(qtdNativeId, clipTight);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final QImage createMaskFromColor(uint color, Qt.MaskMode mode = Qt.MaskMode.MaskInColor) const {
        void* ret = qtd_QImage_createMaskFromColor_uint_MaskMode_const(qtdNativeId, color, mode);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final int depth() const {
        return qtd_QImage_depth_const(qtdNativeId);
    }

    public final int dotsPerMeterX() const {
        return qtd_QImage_dotsPerMeterX_const(qtdNativeId);
    }

    public final int dotsPerMeterY() const {
        return qtd_QImage_dotsPerMeterY_const(qtdNativeId);
    }

    public final void fill(uint pixel) {
        qtd_QImage_fill_uint(qtdNativeId, pixel);
    }

    public final QImage.Format format() const {
        return cast(QImage.Format) qtd_QImage_format_const(qtdNativeId);
    }

    public final bool hasAlphaChannel() const {
        return qtd_QImage_hasAlphaChannel_const(qtdNativeId);
    }

    public final int height() const {
        return qtd_QImage_height_const(qtdNativeId);
    }

    public final int heightMM() const {
        return qtd_QImage_heightMM_const(qtdNativeId);
    }

    public final void invertPixels(QImage.InvertMode arg__1 = QImage.InvertMode.InvertRgb) {
        qtd_QImage_invertPixels_InvertMode(qtdNativeId, arg__1);
    }

    public final bool isGrayscale() const {
        return qtd_QImage_isGrayscale_const(qtdNativeId);
    }

    public final bool isNull() const {
        return qtd_QImage_isNull_const(qtdNativeId);
    }

    private final bool load(QIODevice device, const(char*) format) {
        return qtd_QImage_load_QIODevice_nativepointerchar(qtdNativeId, device is null ? null : device.qtdNativeId, format);
    }

    private final bool load(string fileName, const(char*) format) {
        return qtd_QImage_load_string_nativepointerchar(qtdNativeId, fileName, format);
    }

    private final bool loadFromData(const(QByteArray) data, const(char*) aformat) {
        return qtd_QImage_loadFromData_QByteArray_nativepointerchar(qtdNativeId, data is null ? null : (cast(QByteArray)data).qtdNativeId, aformat);
    }

    private final bool loadFromData(const(ubyte*) buf, int len, const(char*) format) {
        return qtd_QImage_loadFromData_nativepointerubyte_int_nativepointerchar(qtdNativeId, buf, len, format);
    }

    public final int logicalDpiX() const {
        return qtd_QImage_logicalDpiX_const(qtdNativeId);
    }

    public final int logicalDpiY() const {
        return qtd_QImage_logicalDpiY_const(qtdNativeId);
    }

    public final QImage mirrored(bool horizontally = false, bool vertically = true) const {
        void* ret = qtd_QImage_mirrored_bool_bool_const(qtdNativeId, horizontally, vertically);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final int numBytes() const {
        return qtd_QImage_numBytes_const(qtdNativeId);
    }

    public final int numColors() const {
        return qtd_QImage_numColors_const(qtdNativeId);
    }

    public final QPoint offset() const {
        QPoint res;
        qtd_QImage_offset_const(qtdNativeId, &res);
        return res;
    }

    public final QVariant operator_cast_QVariant() const {
        void* ret = qtd_QImage_operator_cast_QVariant_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QImage_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool operator_equal(const(QImage) arg__1) const {
        return qtd_QImage_operator_equal_QImage_const(qtdNativeId, arg__1 is null ? null : (cast(QImage)arg__1).qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QImage_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final bool paintingActive() const {
        return qtd_QImage_paintingActive_const(qtdNativeId);
    }

    public final int physicalDpiX() const {
        return qtd_QImage_physicalDpiX_const(qtdNativeId);
    }

    public final int physicalDpiY() const {
        return qtd_QImage_physicalDpiY_const(qtdNativeId);
    }

    public final uint pixel(const(QPoint) pt) const {
        return qtd_QImage_pixel_QPoint_const(qtdNativeId, pt);
    }

    public final uint pixel(int x, int y) const {
        return qtd_QImage_pixel_int_int_const(qtdNativeId, x, y);
    }

    public final int pixelIndex(const(QPoint) pt) const {
        return qtd_QImage_pixelIndex_QPoint_const(qtdNativeId, pt);
    }

    public final int pixelIndex(int x, int y) const {
        return qtd_QImage_pixelIndex_int_int_const(qtdNativeId, x, y);
    }

    public final QRect rect() const {
        QRect res;
        qtd_QImage_rect_const(qtdNativeId, &res);
        return res;
    }

    public final QImage rgbSwapped() const {
        void* ret = qtd_QImage_rgbSwapped_const(qtdNativeId);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    private final bool private_save(QIODevice device, const(char*) format, int quality) const {
        return qtd_QImage_private_save_QIODevice_nativepointerchar_int_const(qtdNativeId, device is null ? null : device.qtdNativeId, format, quality);
    }

    private final bool private_save(string fileName, const(char*) format, int quality) const {
        return qtd_QImage_private_save_string_nativepointerchar_int_const(qtdNativeId, fileName, format, quality);
    }

    public final QImage scaled(const(QSize) s, Qt.AspectRatioMode aspectMode = Qt.AspectRatioMode.IgnoreAspectRatio, Qt.TransformationMode mode = Qt.TransformationMode.FastTransformation) const {
        void* ret = qtd_QImage_scaled_QSize_AspectRatioMode_TransformationMode_const(qtdNativeId, s, aspectMode, mode);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final QImage scaled(int w, int h, Qt.AspectRatioMode aspectMode = Qt.AspectRatioMode.IgnoreAspectRatio, Qt.TransformationMode mode = Qt.TransformationMode.FastTransformation) const {
        void* ret = qtd_QImage_scaled_int_int_AspectRatioMode_TransformationMode_const(qtdNativeId, w, h, aspectMode, mode);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final QImage scaledToHeight(int h, Qt.TransformationMode mode = Qt.TransformationMode.FastTransformation) const {
        void* ret = qtd_QImage_scaledToHeight_int_TransformationMode_const(qtdNativeId, h, mode);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final QImage scaledToWidth(int w, Qt.TransformationMode mode = Qt.TransformationMode.FastTransformation) const {
        void* ret = qtd_QImage_scaledToWidth_int_TransformationMode_const(qtdNativeId, w, mode);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final ubyte* scanLine(int arg__1) {
        return qtd_QImage_scanLine_int(qtdNativeId, arg__1);
    }

    public final void setAlphaChannel(const(QImage) alphaChannel) {
        qtd_QImage_setAlphaChannel_QImage(qtdNativeId, alphaChannel is null ? null : (cast(QImage)alphaChannel).qtdNativeId);
    }

    public final void setColor(int i, uint c) {
        qtd_QImage_setColor_int_uint(qtdNativeId, i, c);
    }

    public final void setColorCount(int arg__1) {
        qtd_QImage_setColorCount_int(qtdNativeId, arg__1);
    }

    public final void setColorTable(uint[] colors) {
        qtd_QImage_setColorTable_QVector(qtdNativeId, &colors);
    }

    public final void setDotsPerMeterX(int arg__1) {
        qtd_QImage_setDotsPerMeterX_int(qtdNativeId, arg__1);
    }

    public final void setDotsPerMeterY(int arg__1) {
        qtd_QImage_setDotsPerMeterY_int(qtdNativeId, arg__1);
    }

    public final void setNumColors(int arg__1) {
        qtd_QImage_setNumColors_int(qtdNativeId, arg__1);
    }

    public final void setOffset(const(QPoint) arg__1) {
        qtd_QImage_setOffset_QPoint(qtdNativeId, arg__1);
    }

    public final void setPixel(const(QPoint) pt, uint index_or_rgb) {
        qtd_QImage_setPixel_QPoint_uint(qtdNativeId, pt, index_or_rgb);
    }

    public final void setPixel(int x, int y, uint index_or_rgb) {
        qtd_QImage_setPixel_int_int_uint(qtdNativeId, x, y, index_or_rgb);
    }

    public final void setText(string key, string value) {
        qtd_QImage_setText_string_string(qtdNativeId, key, value);
    }

    public final QSize size() const {
        QSize res;
        qtd_QImage_size_const(qtdNativeId, &res);
        return res;
    }

    public final string text(string key = "") const {
        string res;
        qtd_QImage_text_string_const(qtdNativeId, &res, key);
        return res;
    }

    public final QList!(string) textKeys() const {
        auto res = QList!(string).opCall();
        qtd_QImage_textKeys_const(qtdNativeId, &res);
        return res;
    }

    public final QImage transformed(const(QMatrix) matrix, Qt.TransformationMode mode = Qt.TransformationMode.FastTransformation) const {
        void* ret = qtd_QImage_transformed_QMatrix_TransformationMode_const(qtdNativeId, matrix is null ? null : (cast(QMatrix)matrix).qtdNativeId, mode);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final QImage transformed(const(QTransform) matrix, Qt.TransformationMode mode = Qt.TransformationMode.FastTransformation) const {
        void* ret = qtd_QImage_transformed_QTransform_TransformationMode_const(qtdNativeId, matrix is null ? null : (cast(QTransform)matrix).qtdNativeId, mode);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final bool valid(const(QPoint) pt) const {
        return qtd_QImage_valid_QPoint_const(qtdNativeId, pt);
    }

    public final bool valid(int x, int y) const {
        return qtd_QImage_valid_int_int_const(qtdNativeId, x, y);
    }

    public final int width() const {
        return qtd_QImage_width_const(qtdNativeId);
    }

    public final int widthMM() const {
        return qtd_QImage_widthMM_const(qtdNativeId);
    }

    public int devType() const {
        return qtd_QImage_devType_const(qtdNativeId);
    }

    public int metric(QPaintDevice.PaintDeviceMetric metric) const {
        return qtd_QImage_metric_PaintDeviceMetric_const(qtdNativeId, metric);
    }

    public QPaintEngine paintEngine() const {
        void* ret = qtd_QImage_paintEngine_const(qtdNativeId);
        QPaintEngine __d_return_value = qtd_QPaintEngine_from_ptr(ret);

        return __d_return_value;
    }

    private static QImage fromData(const(QByteArray) data, const(char*) format) {
        void* ret = qtd_QImage_fromData_QByteArray_nativepointerchar(data is null ? null : (cast(QByteArray)data).qtdNativeId, format);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public static QMatrix trueMatrix(const(QMatrix) arg__1, int w, int h) {
        void* ret = qtd_QImage_trueMatrix_QMatrix_int_int(arg__1 is null ? null : (cast(QMatrix)arg__1).qtdNativeId, w, h);
        QMatrix __d_return_value = new QMatrix(ret);
        return __d_return_value;
    }

    public static QTransform trueMatrix(const(QTransform) arg__1, int w, int h) {
        void* ret = qtd_QImage_trueMatrix_QTransform_int_int(arg__1 is null ? null : (cast(QTransform)arg__1).qtdNativeId, w, h);
        QTransform __d_return_value = new QTransform(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QImage;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QImage_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QImage_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQPaintDevice = qtd_QImage_cast_to_QPaintDevice(nativeId);
    }

    private void* __m_ptr_IQPaintDevice;
    public void* __ptr_IQPaintDevice() { return __m_ptr_IQPaintDevice; }

    protected override void qtdDeleteNative() {
        qtd_QImage_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QImage_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QImage_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QImage_QTypeInfo_isComplex();
        isStatic = qtd_QImage_QTypeInfo_isStatic();
        isLarge = qtd_QImage_QTypeInfo_isLarge();
        isPointer = qtd_QImage_QTypeInfo_isPointer();
        isDummy = qtd_QImage_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    private import qtd.String;

    public this(string[] xpm) {
        this(toStringzArray(xpm));
    }
    /*
    public final byte[] copyOfBytes() {
    QNativePointer bits = bits();
    byte bytes[] = new byte[numBytes()];
    for (int i = 0; i < bytes.length; ++i)
    bytes[i] = bits.byteAt(i);
    return bytes;
    }
     */
    public this(ubyte[] data, int width, int height, Format format) {
        this(data.ptr, width, height, format);
    }

    public this(string fileName, string format = null) {
        this(fileName, format == null ? null : toStringz(format));
    }

    public final bool save(string fileName, string format, int quality = -1) {
        return private_save(fileName, toStringz(format), quality);
    }

    public final bool save(QIODevice dev, string format, int quality = -1) {
        return private_save(dev, toStringz(format), quality);
    }

}
    private static extern (C) void*qtd_QImage_cast_to_QPaintDevice(void* nativeId);
private extern(C) void qtd_QImage_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QImage_native_copy(const void* orig);
extern (C) void qtd_QImage_delete(void *ptr);
extern (C) void qtd_QImage_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QImage_QImage(void *d_ptr);
private extern(C) void* qtd_QImage_QImage_QImage(void *d_ptr,
 void* arg__1);
private extern(C) void* qtd_QImage_QImage_QSize_Format(void *d_ptr,
 QSize size0,
 int format1);
private extern(C) void* qtd_QImage_QImage_string_nativepointerchar(void *d_ptr,
 string fileName0,
 const (char*) format1);
private extern(C) void* qtd_QImage_QImage_nativepointerchar(void *d_ptr,
 const (char**) xpm0);
private extern(C) void* qtd_QImage_QImage_int_int_Format(void *d_ptr,
 int width0,
 int height1,
 int format2);
private extern(C) void* qtd_QImage_QImage_nativepointerubyte_int_int_Format(void *d_ptr,
 ubyte* data0,
 int width1,
 int height2,
 int format3);
private extern(C) void* qtd_QImage_QImage_nativepointerubyte_int_int_int_Format(void *d_ptr,
 ubyte* data0,
 int width1,
 int height2,
 int bytesPerLine3,
 int format4);
private extern(C) bool  qtd_QImage_allGray_const(void* __this_nativeId);
private extern(C) void*  qtd_QImage_alphaChannel_const(void* __this_nativeId);
private extern(C) int  qtd_QImage_bitPlaneCount_const(void* __this_nativeId);
private extern(C) ubyte*  qtd_QImage_bits(void* __this_nativeId);
private extern(C) int  qtd_QImage_byteCount_const(void* __this_nativeId);
private extern(C) int  qtd_QImage_bytesPerLine_const(void* __this_nativeId);
private extern(C) long  qtd_QImage_cacheKey_const(void* __this_nativeId);
private extern(C) uint  qtd_QImage_color_int_const(void* __this_nativeId,
 int i0);
private extern(C) int  qtd_QImage_colorCount_const(void* __this_nativeId);
private extern(C) void  qtd_QImage_colorTable_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) const (ubyte*)  qtd_QImage_constBits_const(void* __this_nativeId);
private extern(C) const (ubyte*)  qtd_QImage_constScanLine_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) void*  qtd_QImage_convertToFormat_Format_ImageConversionFlags_const(void* __this_nativeId,
 int f0,
 int flags1);
private extern(C) void*  qtd_QImage_convertToFormat_Format_QVector_ImageConversionFlags_const(void* __this_nativeId,
 int f0,
 DArray* colorTable1,
 int flags2);
private extern(C) void*  qtd_QImage_copy_QRect_const(void* __this_nativeId,
 QRect rect0);
private extern(C) void*  qtd_QImage_copy_int_int_int_int_const(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3);
private extern(C) void*  qtd_QImage_createAlphaMask_ImageConversionFlags_const(void* __this_nativeId,
 int flags0);
private extern(C) void*  qtd_QImage_createHeuristicMask_bool_const(void* __this_nativeId,
 bool clipTight0);
private extern(C) void*  qtd_QImage_createMaskFromColor_uint_MaskMode_const(void* __this_nativeId,
 uint color0,
 int mode1);
private extern(C) int  qtd_QImage_depth_const(void* __this_nativeId);
private extern(C) int  qtd_QImage_dotsPerMeterX_const(void* __this_nativeId);
private extern(C) int  qtd_QImage_dotsPerMeterY_const(void* __this_nativeId);
private extern(C) void  qtd_QImage_fill_uint(void* __this_nativeId,
 uint pixel0);
private extern(C) int  qtd_QImage_format_const(void* __this_nativeId);
private extern(C) bool  qtd_QImage_hasAlphaChannel_const(void* __this_nativeId);
private extern(C) int  qtd_QImage_height_const(void* __this_nativeId);
private extern(C) int  qtd_QImage_heightMM_const(void* __this_nativeId);
private extern(C) void  qtd_QImage_invertPixels_InvertMode(void* __this_nativeId,
 int arg__1);
private extern(C) bool  qtd_QImage_isGrayscale_const(void* __this_nativeId);
private extern(C) bool  qtd_QImage_isNull_const(void* __this_nativeId);
private extern(C) bool  qtd_QImage_load_QIODevice_nativepointerchar(void* __this_nativeId,
 void* device0,
 const (char*) format1);
private extern(C) bool  qtd_QImage_load_string_nativepointerchar(void* __this_nativeId,
 string fileName0,
 const (char*) format1);
private extern(C) bool  qtd_QImage_loadFromData_QByteArray_nativepointerchar(void* __this_nativeId,
 void* data0,
 const (char*) aformat1);
private extern(C) bool  qtd_QImage_loadFromData_nativepointerubyte_int_nativepointerchar(void* __this_nativeId,
 const (ubyte*) buf0,
 int len1,
 const (char*) format2);
private extern(C) int  qtd_QImage_logicalDpiX_const(void* __this_nativeId);
private extern(C) int  qtd_QImage_logicalDpiY_const(void* __this_nativeId);
private extern(C) void*  qtd_QImage_mirrored_bool_bool_const(void* __this_nativeId,
 bool horizontally0,
 bool vertically1);
private extern(C) int  qtd_QImage_numBytes_const(void* __this_nativeId);
private extern(C) int  qtd_QImage_numColors_const(void* __this_nativeId);
private extern(C) void  qtd_QImage_offset_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void*  qtd_QImage_operator_cast_QVariant_const(void* __this_nativeId);
private extern(C) void  qtd_QImage_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QImage_operator_equal_QImage_const(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QImage_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QImage_paintingActive_const(void* __this_nativeId);
private extern(C) int  qtd_QImage_physicalDpiX_const(void* __this_nativeId);
private extern(C) int  qtd_QImage_physicalDpiY_const(void* __this_nativeId);
private extern(C) uint  qtd_QImage_pixel_QPoint_const(void* __this_nativeId,
 QPoint pt0);
private extern(C) uint  qtd_QImage_pixel_int_int_const(void* __this_nativeId,
 int x0,
 int y1);
private extern(C) int  qtd_QImage_pixelIndex_QPoint_const(void* __this_nativeId,
 QPoint pt0);
private extern(C) int  qtd_QImage_pixelIndex_int_int_const(void* __this_nativeId,
 int x0,
 int y1);
private extern(C) void  qtd_QImage_rect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void*  qtd_QImage_rgbSwapped_const(void* __this_nativeId);
private extern(C) bool  qtd_QImage_private_save_QIODevice_nativepointerchar_int_const(void* __this_nativeId,
 void* device0,
 const (char*) format1,
 int quality2);
private extern(C) bool  qtd_QImage_private_save_string_nativepointerchar_int_const(void* __this_nativeId,
 string fileName0,
 const (char*) format1,
 int quality2);
private extern(C) void*  qtd_QImage_scaled_QSize_AspectRatioMode_TransformationMode_const(void* __this_nativeId,
 QSize s0,
 int aspectMode1,
 int mode2);
private extern(C) void*  qtd_QImage_scaled_int_int_AspectRatioMode_TransformationMode_const(void* __this_nativeId,
 int w0,
 int h1,
 int aspectMode2,
 int mode3);
private extern(C) void*  qtd_QImage_scaledToHeight_int_TransformationMode_const(void* __this_nativeId,
 int h0,
 int mode1);
private extern(C) void*  qtd_QImage_scaledToWidth_int_TransformationMode_const(void* __this_nativeId,
 int w0,
 int mode1);
private extern(C) ubyte*  qtd_QImage_scanLine_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QImage_setAlphaChannel_QImage(void* __this_nativeId,
 void* alphaChannel0);
private extern(C) void  qtd_QImage_setColor_int_uint(void* __this_nativeId,
 int i0,
 uint c1);
private extern(C) void  qtd_QImage_setColorCount_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QImage_setColorTable_QVector(void* __this_nativeId,
 DArray* colors0);
private extern(C) void  qtd_QImage_setDotsPerMeterX_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QImage_setDotsPerMeterY_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QImage_setNumColors_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QImage_setOffset_QPoint(void* __this_nativeId,
 QPoint arg__1);
private extern(C) void  qtd_QImage_setPixel_QPoint_uint(void* __this_nativeId,
 QPoint pt0,
 uint index_or_rgb1);
private extern(C) void  qtd_QImage_setPixel_int_int_uint(void* __this_nativeId,
 int x0,
 int y1,
 uint index_or_rgb2);
private extern(C) void  qtd_QImage_setText_string_string(void* __this_nativeId,
 string key0,
 string value1);
private extern(C) void  qtd_QImage_size_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QImage_text_string_const(void* __this_nativeId,
 void* __d_return_value,
 string key0);
private extern(C) void  qtd_QImage_textKeys_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QImage_transformed_QMatrix_TransformationMode_const(void* __this_nativeId,
 void* matrix0,
 int mode1);
private extern(C) void*  qtd_QImage_transformed_QTransform_TransformationMode_const(void* __this_nativeId,
 void* matrix0,
 int mode1);
private extern(C) bool  qtd_QImage_valid_QPoint_const(void* __this_nativeId,
 QPoint pt0);
private extern(C) bool  qtd_QImage_valid_int_int_const(void* __this_nativeId,
 int x0,
 int y1);
private extern(C) int  qtd_QImage_width_const(void* __this_nativeId);
private extern(C) int  qtd_QImage_widthMM_const(void* __this_nativeId);
private extern(C) int  qtd_QImage_devType_const(void* __this_nativeId);
private extern(C) int  qtd_QImage_metric_PaintDeviceMetric_const(void* __this_nativeId,
 int metric0);
private extern(C) void*  qtd_QImage_paintEngine_const(void* __this_nativeId);
private extern(C) void*  qtd_QImage_fromData_QByteArray_nativepointerchar(void* data0,
 const (char*) format1);
private extern(C) void*  qtd_QImage_trueMatrix_QMatrix_int_int(void* arg__1,
 int w1,
 int h2);
private extern(C) void*  qtd_QImage_trueMatrix_QTransform_int_int(void* arg__1,
 int w1,
 int h2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QImage_initCallBacks(void* virtuals);

extern(C) void static_init_QImage() {
    QImage.QTypeInfo.init();
    qtd_QImage_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QImage_QTypeInfo_isComplex();
private extern (C) bool qtd_QImage_QTypeInfo_isStatic();
private extern (C) bool qtd_QImage_QTypeInfo_isLarge();
private extern (C) bool qtd_QImage_QTypeInfo_isPointer();
private extern (C) bool qtd_QImage_QTypeInfo_isDummy();
