module qt.opengl.QGLFramebufferObject;

import qt.opengl.gl;
public import qt.opengl.QGLFramebufferObject_aux;
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
public import qt.core.QPointF;
public import qt.gui.QImage;
public import qt.core.QRect;
public import qt.gui.QPaintDevice;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGLFramebufferObject : QtdObject, IQPaintDevice
{
    public enum Attachment {
        NoAttachment = 0,
        CombinedDepthStencil = 1,
        Depth = 2
    }

    alias Attachment.NoAttachment NoAttachment;
    alias Attachment.CombinedDepthStencil CombinedDepthStencil;
    alias Attachment.Depth Depth;


// Functions

    public this(const(QSize) size, int target = 0x0DE1) {
        void* ret = qtd_QGLFramebufferObject_QGLFramebufferObject_QSize_int(cast(void*) this, size, target);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QSize) size, QGLFramebufferObject.Attachment attachment, int target = 0x0DE1, int internal_format = 0x8058) {
        void* ret = qtd_QGLFramebufferObject_QGLFramebufferObject_QSize_Attachment_int_int(cast(void*) this, size, attachment, target, internal_format);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int width, int height, int target = 0x0DE1) {
        void* ret = qtd_QGLFramebufferObject_QGLFramebufferObject_int_int_int(cast(void*) this, width, height, target);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int width, int height, QGLFramebufferObject.Attachment attachment, int target = 0x0DE1, int internal_format = 0x8058) {
        void* ret = qtd_QGLFramebufferObject_QGLFramebufferObject_int_int_Attachment_int_int(cast(void*) this, width, height, attachment, target, internal_format);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QGLFramebufferObject.Attachment attachment() const {
        return cast(QGLFramebufferObject.Attachment) qtd_QGLFramebufferObject_attachment_const(qtdNativeId);
    }

    public final bool bind() {
        return qtd_QGLFramebufferObject_bind(qtdNativeId);
    }

    public final int colorCount() const {
        return qtd_QGLFramebufferObject_colorCount_const(qtdNativeId);
    }

    public final int depth() const {
        return qtd_QGLFramebufferObject_depth_const(qtdNativeId);
    }

    public final void drawTexture(const(QPointF) point, int textureId, int textureTarget = 0x0DE1) {
        qtd_QGLFramebufferObject_drawTexture_QPointF_int_int(qtdNativeId, point, textureId, textureTarget);
    }

    public final void drawTexture(const(QRectF) target, int textureId, int textureTarget = 0x0DE1) {
        qtd_QGLFramebufferObject_drawTexture_QRectF_int_int(qtdNativeId, target, textureId, textureTarget);
    }

    public final int handle() const {
        return qtd_QGLFramebufferObject_handle_const(qtdNativeId);
    }

    public final int height() const {
        return qtd_QGLFramebufferObject_height_const(qtdNativeId);
    }

    public final int heightMM() const {
        return qtd_QGLFramebufferObject_heightMM_const(qtdNativeId);
    }

    public final bool isBound() const {
        return qtd_QGLFramebufferObject_isBound_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QGLFramebufferObject_isValid_const(qtdNativeId);
    }

    public final int logicalDpiX() const {
        return qtd_QGLFramebufferObject_logicalDpiX_const(qtdNativeId);
    }

    public final int logicalDpiY() const {
        return qtd_QGLFramebufferObject_logicalDpiY_const(qtdNativeId);
    }

    public final int numColors() const {
        return qtd_QGLFramebufferObject_numColors_const(qtdNativeId);
    }

    public final bool paintingActive() const {
        return qtd_QGLFramebufferObject_paintingActive_const(qtdNativeId);
    }

    public final int physicalDpiX() const {
        return qtd_QGLFramebufferObject_physicalDpiX_const(qtdNativeId);
    }

    public final int physicalDpiY() const {
        return qtd_QGLFramebufferObject_physicalDpiY_const(qtdNativeId);
    }

    public final bool release() {
        return qtd_QGLFramebufferObject_release(qtdNativeId);
    }

    public final QSize size() const {
        QSize res;
        qtd_QGLFramebufferObject_size_const(qtdNativeId, &res);
        return res;
    }

    public final int texture() const {
        return qtd_QGLFramebufferObject_texture_const(qtdNativeId);
    }

    public final QImage toImage() const {
        void* ret = qtd_QGLFramebufferObject_toImage_const(qtdNativeId);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final int width() const {
        return qtd_QGLFramebufferObject_width_const(qtdNativeId);
    }

    public final int widthMM() const {
        return qtd_QGLFramebufferObject_widthMM_const(qtdNativeId);
    }

    public int devType() const {
        return qtd_QGLFramebufferObject_devType_const(qtdNativeId);
    }

    public int metric(QPaintDevice.PaintDeviceMetric metric) const {
        return qtd_QGLFramebufferObject_metric_PaintDeviceMetric_const(qtdNativeId, metric);
    }

    public QPaintEngine paintEngine() const {
        void* ret = qtd_QGLFramebufferObject_paintEngine_const(qtdNativeId);
        QPaintEngine __d_return_value = qtd_QPaintEngine_from_ptr(ret);

        return __d_return_value;
    }

    public static bool bindDefault() {
        return qtd_QGLFramebufferObject_bindDefault();
    }

    public static void blitFramebuffer(QGLFramebufferObject target, const(QRect) targetRect, QGLFramebufferObject source, const(QRect) sourceRect, uint buffers = 0x00004000, int filter = 0x2600) {
        qtd_QGLFramebufferObject_blitFramebuffer_QGLFramebufferObject_QRect_QGLFramebufferObject_QRect_uint_int(target is null ? null : target.qtdNativeId, targetRect, source is null ? null : source.qtdNativeId, sourceRect, buffers, filter);
    }

    public static bool hasOpenGLFramebufferBlit() {
        return qtd_QGLFramebufferObject_hasOpenGLFramebufferBlit();
    }

    public static bool hasOpenGLFramebufferObjects() {
        return qtd_QGLFramebufferObject_hasOpenGLFramebufferObjects();
    }
// Field accessors
    static QGLFramebufferObject __getObject(void* nativeId) {
        return qtd_QGLFramebufferObject_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QGLFramebufferObject;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQPaintDevice = qtd_QGLFramebufferObject_cast_to_QPaintDevice(nativeId);
    }

    private void* __m_ptr_IQPaintDevice;
    public void* __ptr_IQPaintDevice() { return __m_ptr_IQPaintDevice; }

    protected override void qtdDeleteNative() {
        qtd_QGLFramebufferObject_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QGLFramebufferObject_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QGLFramebufferObject_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QGLFramebufferObject_cast_to_QPaintDevice(void* nativeId);

extern (C) void *__QGLFramebufferObject_entity(void *q_ptr);

QGLFramebufferObject qtd_QGLFramebufferObject_from_ptr(void* ret) {
    void* d_obj = __QGLFramebufferObject_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QGLFramebufferObject) d_obj_ref;
    } else {
        auto return_value = new QGLFramebufferObject(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QGLFramebufferObject_delete(void *ptr);
extern (C) void qtd_QGLFramebufferObject_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGLFramebufferObject_QGLFramebufferObject_QSize_int(void *d_ptr,
 QSize size0,
 int target1);
private extern(C) void* qtd_QGLFramebufferObject_QGLFramebufferObject_QSize_Attachment_int_int(void *d_ptr,
 QSize size0,
 int attachment1,
 int target2,
 int internal_format3);
private extern(C) void* qtd_QGLFramebufferObject_QGLFramebufferObject_int_int_int(void *d_ptr,
 int width0,
 int height1,
 int target2);
private extern(C) void* qtd_QGLFramebufferObject_QGLFramebufferObject_int_int_Attachment_int_int(void *d_ptr,
 int width0,
 int height1,
 int attachment2,
 int target3,
 int internal_format4);
private extern(C) int  qtd_QGLFramebufferObject_attachment_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLFramebufferObject_bind(void* __this_nativeId);
private extern(C) int  qtd_QGLFramebufferObject_colorCount_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFramebufferObject_depth_const(void* __this_nativeId);
private extern(C) void  qtd_QGLFramebufferObject_drawTexture_QPointF_int_int(void* __this_nativeId,
 QPointF point0,
 int textureId1,
 int textureTarget2);
private extern(C) void  qtd_QGLFramebufferObject_drawTexture_QRectF_int_int(void* __this_nativeId,
 QRectF target0,
 int textureId1,
 int textureTarget2);
private extern(C) int  qtd_QGLFramebufferObject_handle_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFramebufferObject_height_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFramebufferObject_heightMM_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLFramebufferObject_isBound_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLFramebufferObject_isValid_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFramebufferObject_logicalDpiX_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFramebufferObject_logicalDpiY_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFramebufferObject_numColors_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLFramebufferObject_paintingActive_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFramebufferObject_physicalDpiX_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFramebufferObject_physicalDpiY_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLFramebufferObject_release(void* __this_nativeId);
private extern(C) void  qtd_QGLFramebufferObject_size_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) int  qtd_QGLFramebufferObject_texture_const(void* __this_nativeId);
private extern(C) void*  qtd_QGLFramebufferObject_toImage_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFramebufferObject_width_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFramebufferObject_widthMM_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFramebufferObject_devType_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFramebufferObject_metric_PaintDeviceMetric_const(void* __this_nativeId,
 int metric0);
private extern(C) void*  qtd_QGLFramebufferObject_paintEngine_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLFramebufferObject_bindDefault();
private extern(C) void  qtd_QGLFramebufferObject_blitFramebuffer_QGLFramebufferObject_QRect_QGLFramebufferObject_QRect_uint_int(void* target0,
 QRect targetRect1,
 void* source2,
 QRect sourceRect3,
 uint buffers4,
 int filter5);
private extern(C) bool  qtd_QGLFramebufferObject_hasOpenGLFramebufferBlit();
private extern(C) bool  qtd_QGLFramebufferObject_hasOpenGLFramebufferObjects();
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGLFramebufferObject_initCallBacks(void* virtuals);

extern(C) void static_init_QGLFramebufferObject() {
    qtd_QGLFramebufferObject_initCallBacks(null);
}

// signal handlers

