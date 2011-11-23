module qt.opengl.QGLPixelBuffer;

import qt.opengl.gl;
public import qt.opengl.QGLPixelBuffer_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QPaintDevice;
public import qt.core.QRectF;
public import qt.gui.QPaintEngine;
public import qt.opengl.QGLWidget;
public import qt.opengl.QGLFormat;
public import qt.gui.QPixmap;
public import qt.core.QPointF;
public import qt.gui.QImage;
public import qt.gui.QPaintDevice;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGLPixelBuffer : QtdObject, IQPaintDevice
{

// Functions

    public this(const(QSize) size, const(QGLFormat) format = QGLFormat.defaultFormat(), QGLWidget shareWidget = null) {
        void* ret = qtd_QGLPixelBuffer_QGLPixelBuffer_QSize_QGLFormat_QGLWidget(cast(void*) this, size, format is null ? null : (cast(QGLFormat)format).qtdNativeId, shareWidget is null ? null : shareWidget.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int width, int height, const(QGLFormat) format = QGLFormat.defaultFormat(), QGLWidget shareWidget = null) {
        void* ret = qtd_QGLPixelBuffer_QGLPixelBuffer_int_int_QGLFormat_QGLWidget(cast(void*) this, width, height, format is null ? null : (cast(QGLFormat)format).qtdNativeId, shareWidget is null ? null : shareWidget.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int bindTexture(const(QImage) image, int target = 0x0DE1) {
        return qtd_QGLPixelBuffer_bindTexture_QImage_int(qtdNativeId, image is null ? null : (cast(QImage)image).qtdNativeId, target);
    }

    public final int bindTexture(const(QPixmap) pixmap, int target = 0x0DE1) {
        return qtd_QGLPixelBuffer_bindTexture_QPixmap_int(qtdNativeId, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId, target);
    }

    public final int bindTexture(string fileName) {
        return qtd_QGLPixelBuffer_bindTexture_string(qtdNativeId, fileName);
    }

    public final bool bindToDynamicTexture(int texture) {
        return qtd_QGLPixelBuffer_bindToDynamicTexture_int(qtdNativeId, texture);
    }

    public final int colorCount() const {
        return qtd_QGLPixelBuffer_colorCount_const(qtdNativeId);
    }

    public final void deleteTexture(int texture_id) {
        qtd_QGLPixelBuffer_deleteTexture_int(qtdNativeId, texture_id);
    }

    public final int depth() const {
        return qtd_QGLPixelBuffer_depth_const(qtdNativeId);
    }

    public final bool doneCurrent() {
        return qtd_QGLPixelBuffer_doneCurrent(qtdNativeId);
    }

    public final void drawTexture(const(QPointF) point, int textureId, int textureTarget = 0x0DE1) {
        qtd_QGLPixelBuffer_drawTexture_QPointF_int_int(qtdNativeId, point, textureId, textureTarget);
    }

    public final void drawTexture(const(QRectF) target, int textureId, int textureTarget = 0x0DE1) {
        qtd_QGLPixelBuffer_drawTexture_QRectF_int_int(qtdNativeId, target, textureId, textureTarget);
    }

    public final QGLFormat format() const {
        void* ret = qtd_QGLPixelBuffer_format_const(qtdNativeId);
        QGLFormat __d_return_value = new QGLFormat(ret);
        return __d_return_value;
    }

    public final int generateDynamicTexture() const {
        return qtd_QGLPixelBuffer_generateDynamicTexture_const(qtdNativeId);
    }

    public final long handle() const {
        return qtd_QGLPixelBuffer_handle_const(qtdNativeId);
    }

    public final int height() const {
        return qtd_QGLPixelBuffer_height_const(qtdNativeId);
    }

    public final int heightMM() const {
        return qtd_QGLPixelBuffer_heightMM_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QGLPixelBuffer_isValid_const(qtdNativeId);
    }

    public final int logicalDpiX() const {
        return qtd_QGLPixelBuffer_logicalDpiX_const(qtdNativeId);
    }

    public final int logicalDpiY() const {
        return qtd_QGLPixelBuffer_logicalDpiY_const(qtdNativeId);
    }

    public final bool makeCurrent() {
        return qtd_QGLPixelBuffer_makeCurrent(qtdNativeId);
    }

    public final int numColors() const {
        return qtd_QGLPixelBuffer_numColors_const(qtdNativeId);
    }

    public final bool paintingActive() const {
        return qtd_QGLPixelBuffer_paintingActive_const(qtdNativeId);
    }

    public final int physicalDpiX() const {
        return qtd_QGLPixelBuffer_physicalDpiX_const(qtdNativeId);
    }

    public final int physicalDpiY() const {
        return qtd_QGLPixelBuffer_physicalDpiY_const(qtdNativeId);
    }

    public final void releaseFromDynamicTexture() {
        qtd_QGLPixelBuffer_releaseFromDynamicTexture(qtdNativeId);
    }

    public final QSize size() const {
        QSize res;
        qtd_QGLPixelBuffer_size_const(qtdNativeId, &res);
        return res;
    }

    public final QImage toImage() const {
        void* ret = qtd_QGLPixelBuffer_toImage_const(qtdNativeId);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final void updateDynamicTexture(int texture_id) const {
        qtd_QGLPixelBuffer_updateDynamicTexture_int_const(qtdNativeId, texture_id);
    }

    public final int width() const {
        return qtd_QGLPixelBuffer_width_const(qtdNativeId);
    }

    public final int widthMM() const {
        return qtd_QGLPixelBuffer_widthMM_const(qtdNativeId);
    }

    public int devType() const {
        return qtd_QGLPixelBuffer_devType_const(qtdNativeId);
    }

    public int metric(QPaintDevice.PaintDeviceMetric metric) const {
        return qtd_QGLPixelBuffer_metric_PaintDeviceMetric_const(qtdNativeId, metric);
    }

    public QPaintEngine paintEngine() const {
        void* ret = qtd_QGLPixelBuffer_paintEngine_const(qtdNativeId);
        QPaintEngine __d_return_value = qtd_QPaintEngine_from_ptr(ret);

        return __d_return_value;
    }

    public static bool hasOpenGLPbuffers() {
        return qtd_QGLPixelBuffer_hasOpenGLPbuffers();
    }
// Field accessors
    static QGLPixelBuffer __getObject(void* nativeId) {
        return qtd_QGLPixelBuffer_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QGLPixelBuffer;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQPaintDevice = qtd_QGLPixelBuffer_cast_to_QPaintDevice(nativeId);
    }

    private void* __m_ptr_IQPaintDevice;
    public void* __ptr_IQPaintDevice() { return __m_ptr_IQPaintDevice; }

    protected override void qtdDeleteNative() {
        qtd_QGLPixelBuffer_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QGLPixelBuffer_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QGLPixelBuffer_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QGLPixelBuffer_cast_to_QPaintDevice(void* nativeId);

extern (C) void *__QGLPixelBuffer_entity(void *q_ptr);

QGLPixelBuffer qtd_QGLPixelBuffer_from_ptr(void* ret) {
    void* d_obj = __QGLPixelBuffer_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QGLPixelBuffer) d_obj_ref;
    } else {
        auto return_value = new QGLPixelBuffer(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QGLPixelBuffer_delete(void *ptr);
extern (C) void qtd_QGLPixelBuffer_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGLPixelBuffer_QGLPixelBuffer_QSize_QGLFormat_QGLWidget(void *d_ptr,
 QSize size0,
 void* format1,
 void* shareWidget2);
private extern(C) void* qtd_QGLPixelBuffer_QGLPixelBuffer_int_int_QGLFormat_QGLWidget(void *d_ptr,
 int width0,
 int height1,
 void* format2,
 void* shareWidget3);
private extern(C) int  qtd_QGLPixelBuffer_bindTexture_QImage_int(void* __this_nativeId,
 void* image0,
 int target1);
private extern(C) int  qtd_QGLPixelBuffer_bindTexture_QPixmap_int(void* __this_nativeId,
 void* pixmap0,
 int target1);
private extern(C) int  qtd_QGLPixelBuffer_bindTexture_string(void* __this_nativeId,
 string fileName0);
private extern(C) bool  qtd_QGLPixelBuffer_bindToDynamicTexture_int(void* __this_nativeId,
 int texture0);
private extern(C) int  qtd_QGLPixelBuffer_colorCount_const(void* __this_nativeId);
private extern(C) void  qtd_QGLPixelBuffer_deleteTexture_int(void* __this_nativeId,
 int texture_id0);
private extern(C) int  qtd_QGLPixelBuffer_depth_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLPixelBuffer_doneCurrent(void* __this_nativeId);
private extern(C) void  qtd_QGLPixelBuffer_drawTexture_QPointF_int_int(void* __this_nativeId,
 QPointF point0,
 int textureId1,
 int textureTarget2);
private extern(C) void  qtd_QGLPixelBuffer_drawTexture_QRectF_int_int(void* __this_nativeId,
 QRectF target0,
 int textureId1,
 int textureTarget2);
private extern(C) void*  qtd_QGLPixelBuffer_format_const(void* __this_nativeId);
private extern(C) int  qtd_QGLPixelBuffer_generateDynamicTexture_const(void* __this_nativeId);
private extern(C) long  qtd_QGLPixelBuffer_handle_const(void* __this_nativeId);
private extern(C) int  qtd_QGLPixelBuffer_height_const(void* __this_nativeId);
private extern(C) int  qtd_QGLPixelBuffer_heightMM_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLPixelBuffer_isValid_const(void* __this_nativeId);
private extern(C) int  qtd_QGLPixelBuffer_logicalDpiX_const(void* __this_nativeId);
private extern(C) int  qtd_QGLPixelBuffer_logicalDpiY_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLPixelBuffer_makeCurrent(void* __this_nativeId);
private extern(C) int  qtd_QGLPixelBuffer_numColors_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLPixelBuffer_paintingActive_const(void* __this_nativeId);
private extern(C) int  qtd_QGLPixelBuffer_physicalDpiX_const(void* __this_nativeId);
private extern(C) int  qtd_QGLPixelBuffer_physicalDpiY_const(void* __this_nativeId);
private extern(C) void  qtd_QGLPixelBuffer_releaseFromDynamicTexture(void* __this_nativeId);
private extern(C) void  qtd_QGLPixelBuffer_size_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void*  qtd_QGLPixelBuffer_toImage_const(void* __this_nativeId);
private extern(C) void  qtd_QGLPixelBuffer_updateDynamicTexture_int_const(void* __this_nativeId,
 int texture_id0);
private extern(C) int  qtd_QGLPixelBuffer_width_const(void* __this_nativeId);
private extern(C) int  qtd_QGLPixelBuffer_widthMM_const(void* __this_nativeId);
private extern(C) int  qtd_QGLPixelBuffer_devType_const(void* __this_nativeId);
private extern(C) int  qtd_QGLPixelBuffer_metric_PaintDeviceMetric_const(void* __this_nativeId,
 int metric0);
private extern(C) void*  qtd_QGLPixelBuffer_paintEngine_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLPixelBuffer_hasOpenGLPbuffers();
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGLPixelBuffer_initCallBacks(void* virtuals);

extern(C) void static_init_QGLPixelBuffer() {
    qtd_QGLPixelBuffer_initCallBacks(null);
}

// signal handlers

