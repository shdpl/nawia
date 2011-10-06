module qt.gui.QPicture;

import qt.core.QIODevice;
public import qt.gui.QPicture_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QPaintDevice;
public import qt.gui.QPainter;
public import qt.core.QIODevice;
public import qt.gui.QPaintEngine;
public import qt.core.QRect;
public import qt.core.QDataStream;
public import qt.gui.QPaintDevice;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QPicture : QtdObject, IQPaintDevice
{

// Functions

    public this(const(QPicture) arg__1) {
        void* ret = qtd_QPicture_QPicture_QPicture(cast(void*) this, arg__1 is null ? null : (cast(QPicture)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int formatVersion = -1) {
        void* ret = qtd_QPicture_QPicture_int(cast(void*) this, formatVersion);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QRect boundingRect() const {
        QRect res;
        qtd_QPicture_boundingRect_const(qtdNativeId, &res);
        return res;
    }

    public final int colorCount() const {
        return qtd_QPicture_colorCount_const(qtdNativeId);
    }

    private final const(char*) data_private() const {
        return qtd_QPicture_data_private_const(qtdNativeId);
    }

    public final int depth() const {
        return qtd_QPicture_depth_const(qtdNativeId);
    }

    public final int height() const {
        return qtd_QPicture_height_const(qtdNativeId);
    }

    public final int heightMM() const {
        return qtd_QPicture_heightMM_const(qtdNativeId);
    }

    public final bool isNull() const {
        return qtd_QPicture_isNull_const(qtdNativeId);
    }

    private final bool load(QIODevice dev, const(char*) format) {
        return qtd_QPicture_load_QIODevice_nativepointerchar(qtdNativeId, dev is null ? null : dev.qtdNativeId, format);
    }

    private final bool load(string fileName, const(char*) format) {
        return qtd_QPicture_load_string_nativepointerchar(qtdNativeId, fileName, format);
    }

    public final int logicalDpiX() const {
        return qtd_QPicture_logicalDpiX_const(qtdNativeId);
    }

    public final int logicalDpiY() const {
        return qtd_QPicture_logicalDpiY_const(qtdNativeId);
    }

    public final int numColors() const {
        return qtd_QPicture_numColors_const(qtdNativeId);
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QPicture_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QPicture_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final bool paintingActive() const {
        return qtd_QPicture_paintingActive_const(qtdNativeId);
    }

    public final int physicalDpiX() const {
        return qtd_QPicture_physicalDpiX_const(qtdNativeId);
    }

    public final int physicalDpiY() const {
        return qtd_QPicture_physicalDpiY_const(qtdNativeId);
    }

    public final bool play(QPainter p) {
        return qtd_QPicture_play_QPainter(qtdNativeId, p is null ? null : p.qtdNativeId);
    }

    private final bool save(QIODevice dev, const(char*) format) {
        return qtd_QPicture_save_QIODevice_nativepointerchar(qtdNativeId, dev is null ? null : dev.qtdNativeId, format);
    }

    private final bool save(string fileName, const(char*) format) {
        return qtd_QPicture_save_string_nativepointerchar(qtdNativeId, fileName, format);
    }

    public final void setBoundingRect(const(QRect) r) {
        qtd_QPicture_setBoundingRect_QRect(qtdNativeId, r);
    }

    public final uint size() const {
        return qtd_QPicture_size_const(qtdNativeId);
    }

    public final int width() const {
        return qtd_QPicture_width_const(qtdNativeId);
    }

    public final int widthMM() const {
        return qtd_QPicture_widthMM_const(qtdNativeId);
    }

    public int devType() const {
        return qtd_QPicture_devType_const(qtdNativeId);
    }

    public int metric(QPaintDevice.PaintDeviceMetric m) const {
        return qtd_QPicture_metric_PaintDeviceMetric_const(qtdNativeId, m);
    }

    public QPaintEngine paintEngine() const {
        void* ret = qtd_QPicture_paintEngine_const(qtdNativeId);
        QPaintEngine __d_return_value = qtd_QPaintEngine_from_ptr(ret);

        return __d_return_value;
    }

    public void setData(const(char*) data, uint size) {
        qtd_QPicture_setData_nativepointerchar_uint(qtdNativeId, data, size);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QPicture;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QPicture_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QPicture_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQPaintDevice = qtd_QPicture_cast_to_QPaintDevice(nativeId);
    }

    private void* __m_ptr_IQPaintDevice;
    public void* __ptr_IQPaintDevice() { return __m_ptr_IQPaintDevice; }

    protected override void qtdDeleteNative() {
        qtd_QPicture_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QPicture_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QPicture_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QPicture_QTypeInfo_isComplex();
        isStatic = qtd_QPicture_QTypeInfo_isStatic();
        isLarge = qtd_QPicture_QTypeInfo_isLarge();
        isPointer = qtd_QPicture_QTypeInfo_isPointer();
        isDummy = qtd_QPicture_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
    public final boolean load(QIODevice dev) {
    return load(dev, (QNativePointer) null);
    }

    public final boolean load(String fileName) {
    return load(fileName, (qt.QNativePointer) null);
    }

    public final boolean save(QIODevice dev) {
    return save(dev, (qt.QNativePointer) null);
    }

    public final boolean save(String fileName) {
    return save(fileName, (qt.QNativePointer) null);
    }

    public final byte[] data() {
    QNativePointer npData = data_private();
    if (npData == null)
    return null;
    byte returned[] = new byte[size()];
    for (int i = 0; i < returned.length; ++i)
    returned[i] = npData.byteAt(i);
    return returned;
    }
     */

}
    private static extern (C) void*qtd_QPicture_cast_to_QPaintDevice(void* nativeId);
private extern(C) void qtd_QPicture_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QPicture_native_copy(const void* orig);
extern (C) void qtd_QPicture_delete(void *ptr);
extern (C) void qtd_QPicture_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPicture_QPicture_QPicture(void *d_ptr,
 void* arg__1);
private extern(C) void* qtd_QPicture_QPicture_int(void *d_ptr,
 int formatVersion0);
private extern(C) void  qtd_QPicture_boundingRect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) int  qtd_QPicture_colorCount_const(void* __this_nativeId);
private extern(C) const (char*)  qtd_QPicture_data_private_const(void* __this_nativeId);
private extern(C) int  qtd_QPicture_depth_const(void* __this_nativeId);
private extern(C) int  qtd_QPicture_height_const(void* __this_nativeId);
private extern(C) int  qtd_QPicture_heightMM_const(void* __this_nativeId);
private extern(C) bool  qtd_QPicture_isNull_const(void* __this_nativeId);
private extern(C) bool  qtd_QPicture_load_QIODevice_nativepointerchar(void* __this_nativeId,
 void* dev0,
 const (char*) format1);
private extern(C) bool  qtd_QPicture_load_string_nativepointerchar(void* __this_nativeId,
 string fileName0,
 const (char*) format1);
private extern(C) int  qtd_QPicture_logicalDpiX_const(void* __this_nativeId);
private extern(C) int  qtd_QPicture_logicalDpiY_const(void* __this_nativeId);
private extern(C) int  qtd_QPicture_numColors_const(void* __this_nativeId);
private extern(C) void  qtd_QPicture_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QPicture_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QPicture_paintingActive_const(void* __this_nativeId);
private extern(C) int  qtd_QPicture_physicalDpiX_const(void* __this_nativeId);
private extern(C) int  qtd_QPicture_physicalDpiY_const(void* __this_nativeId);
private extern(C) bool  qtd_QPicture_play_QPainter(void* __this_nativeId,
 void* p0);
private extern(C) bool  qtd_QPicture_save_QIODevice_nativepointerchar(void* __this_nativeId,
 void* dev0,
 const (char*) format1);
private extern(C) bool  qtd_QPicture_save_string_nativepointerchar(void* __this_nativeId,
 string fileName0,
 const (char*) format1);
private extern(C) void  qtd_QPicture_setBoundingRect_QRect(void* __this_nativeId,
 QRect r0);
private extern(C) uint  qtd_QPicture_size_const(void* __this_nativeId);
private extern(C) int  qtd_QPicture_width_const(void* __this_nativeId);
private extern(C) int  qtd_QPicture_widthMM_const(void* __this_nativeId);
private extern(C) int  qtd_QPicture_devType_const(void* __this_nativeId);
private extern(C) int  qtd_QPicture_metric_PaintDeviceMetric_const(void* __this_nativeId,
 int m0);
private extern(C) void*  qtd_QPicture_paintEngine_const(void* __this_nativeId);
private extern(C) void  qtd_QPicture_setData_nativepointerchar_uint(void* __this_nativeId,
 const (char*) data0,
 uint size1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, const (char*) data0, uint size1) qtd_QPicture_setData_nativepointerchar_uint_dispatch; }
extern(C) void qtd_export_QPicture_setData_nativepointerchar_uint_dispatch(void *dId, const (char*) data0, uint size1){
    auto d_object = cast(QPicture) dId;
    d_object.setData(data0, size1);
}

private extern (C) void qtd_QPicture_initCallBacks(void* virtuals);

extern(C) void static_init_QPicture() {
    QPicture.QTypeInfo.init();
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QPicture_setData_nativepointerchar_uint_dispatch;
    qtd_QPicture_initCallBacks(virt_arr.ptr);
}

// signal handlers

private extern (C) bool qtd_QPicture_QTypeInfo_isComplex();
private extern (C) bool qtd_QPicture_QTypeInfo_isStatic();
private extern (C) bool qtd_QPicture_QTypeInfo_isLarge();
private extern (C) bool qtd_QPicture_QTypeInfo_isPointer();
private extern (C) bool qtd_QPicture_QTypeInfo_isDummy();
