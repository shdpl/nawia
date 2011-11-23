module qt.opengl.QGLContext;

import qt.opengl.gl;
public import qt.opengl.QGLContext_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QColor;
public import qt.core.QRectF;
public import qt.opengl.QGLFormat;
public import qt.gui.QPixmap;
public import qt.core.QPointF;
public import qt.gui.QImage;
public import qt.gui.QPaintDevice;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGLContext : QtdObject
{

// Functions

    public this(const(QGLFormat) format) {
        void* ret = qtd_QGLContext_QGLContext_QGLFormat(cast(void*) this, format is null ? null : (cast(QGLFormat)format).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QGLFormat) format, IQPaintDevice device) {
        void* ret = qtd_QGLContext_QGLContext_QGLFormat_QPaintDevice(cast(void*) this, format is null ? null : (cast(QGLFormat)format).qtdNativeId, device is null ? null : device.__ptr_IQPaintDevice);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int bindTexture(const(QImage) image, int target = 0x0DE1, int format = 0x1908) {
        return qtd_QGLContext_bindTexture_QImage_int_int(qtdNativeId, image is null ? null : (cast(QImage)image).qtdNativeId, target, format);
    }

    public final int bindTexture(const(QPixmap) pixmap, int target = 0x0DE1, int format = 0x1908) {
        return qtd_QGLContext_bindTexture_QPixmap_int_int(qtdNativeId, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId, target, format);
    }

    public final int bindTexture(string fileName) {
        return qtd_QGLContext_bindTexture_string(qtdNativeId, fileName);
    }

    protected final uint colorIndex(const(QColor) c) const {
        return qtd_QGLContext_colorIndex_QColor_const(qtdNativeId, c is null ? null : (cast(QColor)c).qtdNativeId);
    }

    public final void deleteTexture(int tx_id) {
        qtd_QGLContext_deleteTexture_int(qtdNativeId, tx_id);
    }

    public final IQPaintDevice device() const {
        void* ret = qtd_QGLContext_device_const(qtdNativeId);
        IQPaintDevice __d_return_value = qtd_QPaintDevice_from_ptr(ret);

        return __d_return_value;
    }

    protected final bool deviceIsPixmap() const {
        return qtd_QGLContext_deviceIsPixmap_const(qtdNativeId);
    }

    public final void drawTexture(const(QPointF) point, int textureId, int textureTarget = 0x0DE1) {
        qtd_QGLContext_drawTexture_QPointF_int_int(qtdNativeId, point, textureId, textureTarget);
    }

    public final void drawTexture(const(QRectF) target, int textureId, int textureTarget = 0x0DE1) {
        qtd_QGLContext_drawTexture_QRectF_int_int(qtdNativeId, target, textureId, textureTarget);
    }

    public final QGLFormat format() const {
        void* ret = qtd_QGLContext_format_const(qtdNativeId);
        QGLFormat __d_return_value = new QGLFormat(ret);
        return __d_return_value;
    }

    protected final bool initialized() const {
        return qtd_QGLContext_initialized_const(qtdNativeId);
    }

    public final bool isSharing() const {
        return qtd_QGLContext_isSharing_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QGLContext_isValid_const(qtdNativeId);
    }

    public final QColor overlayTransparentColor() const {
        void* ret = qtd_QGLContext_overlayTransparentColor_const(qtdNativeId);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final QGLFormat requestedFormat() const {
        void* ret = qtd_QGLContext_requestedFormat_const(qtdNativeId);
        QGLFormat __d_return_value = new QGLFormat(ret);
        return __d_return_value;
    }

    public final void reset() {
        qtd_QGLContext_reset(qtdNativeId);
    }

    public final void setFormat(const(QGLFormat) format) {
        qtd_QGLContext_setFormat_QGLFormat(qtdNativeId, format is null ? null : (cast(QGLFormat)format).qtdNativeId);
    }

    protected final void setInitialized(bool on) {
        qtd_QGLContext_setInitialized_bool(qtdNativeId, on);
    }

    protected final void setValid(bool valid) {
        qtd_QGLContext_setValid_bool(qtdNativeId, valid);
    }

    protected final void setWindowCreated(bool on) {
        qtd_QGLContext_setWindowCreated_bool(qtdNativeId, on);
    }

    protected final bool windowCreated() const {
        return qtd_QGLContext_windowCreated_const(qtdNativeId);
    }

    protected bool chooseContext(QGLContext shareContext = null) {
        return qtd_QGLContext_chooseContext_QGLContext(qtdNativeId, shareContext is null ? null : (cast(QGLContext)shareContext).qtdNativeId);
    }

    public bool create(QGLContext shareContext = null) {
        return qtd_QGLContext_create_QGLContext(qtdNativeId, shareContext is null ? null : (cast(QGLContext)shareContext).qtdNativeId);
    }

    public void doneCurrent() {
        qtd_QGLContext_doneCurrent(qtdNativeId);
    }

    public void makeCurrent() {
        qtd_QGLContext_makeCurrent(qtdNativeId);
    }

    public void swapBuffers() const {
        qtd_QGLContext_swapBuffers_const(qtdNativeId);
    }

    public static bool areSharing(QGLContext context1, QGLContext context2) {
        return qtd_QGLContext_areSharing_QGLContext_QGLContext(context1 is null ? null : (cast(QGLContext)context1).qtdNativeId, context2 is null ? null : (cast(QGLContext)context2).qtdNativeId);
    }

    public static QGLContext currentContext() {
        void* ret = qtd_QGLContext_currentContext();
        QGLContext __d_return_value = qtd_QGLContext_from_ptr(ret);

        return __d_return_value;
    }

    public static void setTextureCacheLimit(int size) {
        qtd_QGLContext_setTextureCacheLimit_int(size);
    }

    public static int textureCacheLimit() {
        return qtd_QGLContext_textureCacheLimit();
    }
// Field accessors
    static QGLContext __getObject(void* nativeId) {
        return qtd_QGLContext_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QGLContext;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QGLContext_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QGLContext_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QGLContext_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QGLContext_entity(void *q_ptr);

QGLContext qtd_QGLContext_from_ptr(void* ret) {
    void* d_obj = __QGLContext_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QGLContext) d_obj_ref;
    } else {
        auto return_value = new QGLContext(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QGLContext_delete(void *ptr);
extern (C) void qtd_QGLContext_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGLContext_QGLContext_QGLFormat(void *d_ptr,
 void* format0);
private extern(C) void* qtd_QGLContext_QGLContext_QGLFormat_QPaintDevice(void *d_ptr,
 void* format0,
 void* device1);
private extern(C) int  qtd_QGLContext_bindTexture_QImage_int_int(void* __this_nativeId,
 void* image0,
 int target1,
 int format2);
private extern(C) int  qtd_QGLContext_bindTexture_QPixmap_int_int(void* __this_nativeId,
 void* pixmap0,
 int target1,
 int format2);
private extern(C) int  qtd_QGLContext_bindTexture_string(void* __this_nativeId,
 string fileName0);
private extern(C) uint  qtd_QGLContext_colorIndex_QColor_const(void* __this_nativeId,
 void* c0);
private extern(C) void  qtd_QGLContext_deleteTexture_int(void* __this_nativeId,
 int tx_id0);
private extern(C) void*  qtd_QGLContext_device_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLContext_deviceIsPixmap_const(void* __this_nativeId);
private extern(C) void  qtd_QGLContext_drawTexture_QPointF_int_int(void* __this_nativeId,
 QPointF point0,
 int textureId1,
 int textureTarget2);
private extern(C) void  qtd_QGLContext_drawTexture_QRectF_int_int(void* __this_nativeId,
 QRectF target0,
 int textureId1,
 int textureTarget2);
private extern(C) void*  qtd_QGLContext_format_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLContext_initialized_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLContext_isSharing_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLContext_isValid_const(void* __this_nativeId);
private extern(C) void*  qtd_QGLContext_overlayTransparentColor_const(void* __this_nativeId);
private extern(C) void*  qtd_QGLContext_requestedFormat_const(void* __this_nativeId);
private extern(C) void  qtd_QGLContext_reset(void* __this_nativeId);
private extern(C) void  qtd_QGLContext_setFormat_QGLFormat(void* __this_nativeId,
 void* format0);
private extern(C) void  qtd_QGLContext_setInitialized_bool(void* __this_nativeId,
 bool on0);
private extern(C) void  qtd_QGLContext_setValid_bool(void* __this_nativeId,
 bool valid0);
private extern(C) void  qtd_QGLContext_setWindowCreated_bool(void* __this_nativeId,
 bool on0);
private extern(C) bool  qtd_QGLContext_windowCreated_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLContext_chooseContext_QGLContext(void* __this_nativeId,
 void* shareContext0);
private extern(C) bool  qtd_QGLContext_create_QGLContext(void* __this_nativeId,
 void* shareContext0);
private extern(C) void  qtd_QGLContext_doneCurrent(void* __this_nativeId);
private extern(C) void  qtd_QGLContext_makeCurrent(void* __this_nativeId);
private extern(C) void  qtd_QGLContext_swapBuffers_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLContext_areSharing_QGLContext_QGLContext(void* context10,
 void* context21);
private extern(C) void*  qtd_QGLContext_currentContext();
private extern(C) void  qtd_QGLContext_setTextureCacheLimit_int(int size0);
private extern(C) int  qtd_QGLContext_textureCacheLimit();
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId, void* shareContext0) qtd_QGLContext_chooseContext_QGLContext_dispatch; }
extern(C) bool qtd_export_QGLContext_chooseContext_QGLContext_dispatch(void *dId, void* shareContext0){
    auto d_object = cast(QGLContext) dId;
    scope shareContext0_d_ref = new QGLContext(shareContext0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.chooseContext(shareContext0_d_ref);
    return return_value;
}

extern(C){ extern bool function(void *dId, void* shareContext0) qtd_QGLContext_create_QGLContext_dispatch; }
extern(C) bool qtd_export_QGLContext_create_QGLContext_dispatch(void *dId, void* shareContext0){
    auto d_object = cast(QGLContext) dId;
    scope shareContext0_d_ref = new QGLContext(shareContext0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.create(shareContext0_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId) qtd_QGLContext_doneCurrent_dispatch; }
extern(C) void qtd_export_QGLContext_doneCurrent_dispatch(void *dId){
    auto d_object = cast(QGLContext) dId;
    d_object.doneCurrent();
}

extern(C){ extern void function(void *dId) qtd_QGLContext_makeCurrent_dispatch; }
extern(C) void qtd_export_QGLContext_makeCurrent_dispatch(void *dId){
    auto d_object = cast(QGLContext) dId;
    d_object.makeCurrent();
}

extern(C){ extern void function(void *dId) qtd_QGLContext_swapBuffers_const_dispatch; }
extern(C) void qtd_export_QGLContext_swapBuffers_const_dispatch(void *dId){
    auto d_object = cast(QGLContext) dId;
    d_object.swapBuffers();
}

private extern (C) void qtd_QGLContext_initCallBacks(void* virtuals);

extern(C) void static_init_QGLContext() {
    void*[5] virt_arr;
    virt_arr[0] = &qtd_export_QGLContext_chooseContext_QGLContext_dispatch;
    virt_arr[1] = &qtd_export_QGLContext_create_QGLContext_dispatch;
    virt_arr[2] = &qtd_export_QGLContext_doneCurrent_dispatch;
    virt_arr[3] = &qtd_export_QGLContext_makeCurrent_dispatch;
    virt_arr[4] = &qtd_export_QGLContext_swapBuffers_const_dispatch;
    qtd_QGLContext_initCallBacks(virt_arr.ptr);
}

// signal handlers

