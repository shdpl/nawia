module qt.opengl.QGLWidget;

import qt.opengl.gl;
public import qt.opengl.QGLWidget_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
public import qtd.MOC : Q_OBJECT;
import qtd.Signal;
import qt.core.QMetaObject;
import qtd.meta.Runtime;
import qt.core.QObject;
private import qt.opengl.ArrayOps2;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QPaintDevice;
public import qt.gui.QDropEvent;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QColor;
public import qt.core.QRectF;
public import qt.gui.QKeyEvent;
public import qt.opengl.QGLColormap;
public import qt.core.QObject;
public import qt.core.QPointF;
public import qt.gui.QResizeEvent;
public import qt.gui.QPaintEngine;
public import qt.core.QEvent;
public import qt.gui.QActionEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QWheelEvent;
public import qt.gui.QCloseEvent;
public import qt.opengl.QGLFormat;
public import qt.gui.QMouseEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QPixmap;
public import qt.gui.QFont;
public import qt.gui.QInputMethodEvent;
public import qt.core.QSize;
public import qt.gui.QImage;
public import qt.gui.QContextMenuEvent;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.gui.QMoveEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QDragMoveEvent;
public import qt.opengl.QGLContext;
public import qt.gui.QWidget;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QDragLeaveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGLWidget : QWidget
{

    private static const string[] __signalSignatures = [    ];

    int signalSignature(int signalId, ref stringz signature) {
        signalId = super.signalSignature(signalId, signature);
        if (signature)
            return signalId;
        if (signalId < __signalSignatures.length)
            signature = __signalSignatures[signalId].ptr;
        else
            signalId -= __signalSignatures.length;
        return signalId;
    }
// Functions

    public this(QGLContext context, QWidget parent_ = null, QGLWidget shareWidget = null, int f = 0) {
        void* ret = qtd_QGLWidget_QGLWidget_QGLContext_QWidget_QGLWidget_WindowFlags(cast(void*) this, context is null ? null : context.qtdNativeId, parent_ is null ? null : parent_.qtdNativeId, shareWidget is null ? null : (cast(QGLWidget)shareWidget).qtdNativeId, f);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QWidget parent_ = null, QGLWidget shareWidget = null, int f = 0) {
        void* ret = qtd_QGLWidget_QGLWidget_QWidget_QGLWidget_WindowFlags(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId, shareWidget is null ? null : (cast(QGLWidget)shareWidget).qtdNativeId, f);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QGLFormat) format, QWidget parent_ = null, QGLWidget shareWidget = null, int f = 0) {
        void* ret = qtd_QGLWidget_QGLWidget_QGLFormat_QWidget_QGLWidget_WindowFlags(cast(void*) this, format is null ? null : (cast(QGLFormat)format).qtdNativeId, parent_ is null ? null : parent_.qtdNativeId, shareWidget is null ? null : (cast(QGLWidget)shareWidget).qtdNativeId, f);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected final bool autoBufferSwap() const {
        return qtd_QGLWidget_autoBufferSwap_const(qtdNativeId);
    }

    public final int bindTexture(const(QImage) image, int target = 0x0DE1, int format = 0x1908) {
        return qtd_QGLWidget_bindTexture_QImage_int_int(qtdNativeId, image is null ? null : (cast(QImage)image).qtdNativeId, target, format);
    }

    public final int bindTexture(const(QPixmap) pixmap, int target = 0x0DE1, int format = 0x1908) {
        return qtd_QGLWidget_bindTexture_QPixmap_int_int(qtdNativeId, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId, target, format);
    }

    public final int bindTexture(string fileName) {
        return qtd_QGLWidget_bindTexture_string(qtdNativeId, fileName);
    }

    public final const(QGLColormap) colormap() const {
        void* ret = qtd_QGLWidget_colormap_const(qtdNativeId);
        const(QGLColormap) __d_return_value = new QGLColormap(ret);
        return __d_return_value;
    }

    public final QGLContext context() const {
        void* ret = qtd_QGLWidget_context_const(qtdNativeId);
        QGLContext __d_return_value = qtd_QGLContext_from_ptr(ret);

        return __d_return_value;
    }

    public final void deleteTexture(int tx_id) {
        qtd_QGLWidget_deleteTexture_int(qtdNativeId, tx_id);
    }

    public final void doneCurrent() {
        qtd_QGLWidget_doneCurrent(qtdNativeId);
    }

    public final bool doubleBuffer() const {
        return qtd_QGLWidget_doubleBuffer_const(qtdNativeId);
    }

    public final void drawTexture(const(QPointF) point, int textureId, int textureTarget = 0x0DE1) {
        qtd_QGLWidget_drawTexture_QPointF_int_int(qtdNativeId, point, textureId, textureTarget);
    }

    public final void drawTexture(const(QRectF) target, int textureId, int textureTarget = 0x0DE1) {
        qtd_QGLWidget_drawTexture_QRectF_int_int(qtdNativeId, target, textureId, textureTarget);
    }

    public final QGLFormat format() const {
        void* ret = qtd_QGLWidget_format_const(qtdNativeId);
        QGLFormat __d_return_value = new QGLFormat(ret);
        return __d_return_value;
    }

    public final QImage grabFrameBuffer(bool withAlpha = false) {
        void* ret = qtd_QGLWidget_grabFrameBuffer_bool(qtdNativeId, withAlpha);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final bool isSharing() const {
        return qtd_QGLWidget_isSharing_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QGLWidget_isValid_const(qtdNativeId);
    }

    public final void makeCurrent() {
        qtd_QGLWidget_makeCurrent(qtdNativeId);
    }

    public final void makeOverlayCurrent() {
        qtd_QGLWidget_makeOverlayCurrent(qtdNativeId);
    }

    public final QGLContext overlayContext() const {
        void* ret = qtd_QGLWidget_overlayContext_const(qtdNativeId);
        QGLContext __d_return_value = qtd_QGLContext_from_ptr(ret);

        return __d_return_value;
    }

    public final void qglClearColor(const(QColor) c) const {
        qtd_QGLWidget_qglClearColor_QColor_const(qtdNativeId, c is null ? null : (cast(QColor)c).qtdNativeId);
    }

    public final void qglColor(const(QColor) c) const {
        qtd_QGLWidget_qglColor_QColor_const(qtdNativeId, c is null ? null : (cast(QColor)c).qtdNativeId);
    }

    public final QPixmap renderPixmap(int w = 0, int h = 0, bool useContext = false) {
        void* ret = qtd_QGLWidget_renderPixmap_int_int_bool(qtdNativeId, w, h, useContext);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public final void renderText(double x, double y, double z, string str, const(QFont) fnt = new QFont(), int listBase = 2000) {
        qtd_QGLWidget_renderText_double_double_double_string_QFont_int(qtdNativeId, x, y, z, str, fnt is null ? null : (cast(QFont)fnt).qtdNativeId, listBase);
    }

    public final void renderText(int x, int y, string str, const(QFont) fnt = new QFont(), int listBase = 2000) {
        qtd_QGLWidget_renderText_int_int_string_QFont_int(qtdNativeId, x, y, str, fnt is null ? null : (cast(QFont)fnt).qtdNativeId, listBase);
    }

    protected final void setAutoBufferSwap(bool on) {
        qtd_QGLWidget_setAutoBufferSwap_bool(qtdNativeId, on);
    }

    public final void setColormap(const(QGLColormap) map) {
        qtd_QGLWidget_setColormap_QGLColormap(qtdNativeId, map is null ? null : (cast(QGLColormap)map).qtdNativeId);
    }

    public final void swapBuffers() {
        qtd_QGLWidget_swapBuffers(qtdNativeId);
    }

    public bool event(QEvent arg__1) {
        return qtd_QGLWidget_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void glDraw() {
        qtd_QGLWidget_glDraw(qtdNativeId);
    }

    protected void glInit() {
        qtd_QGLWidget_glInit(qtdNativeId);
    }

    protected void initializeGL() {
        qtd_QGLWidget_initializeGL(qtdNativeId);
    }

    protected void initializeOverlayGL() {
        qtd_QGLWidget_initializeOverlayGL(qtdNativeId);
    }

    public QPaintEngine paintEngine() const {
        void* ret = qtd_QGLWidget_paintEngine_const(qtdNativeId);
        QPaintEngine __d_return_value = qtd_QPaintEngine_from_ptr(ret);

        return __d_return_value;
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QGLWidget_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void paintGL() {
        qtd_QGLWidget_paintGL(qtdNativeId);
    }

    protected void paintOverlayGL() {
        qtd_QGLWidget_paintOverlayGL(qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent arg__1) {
        qtd_QGLWidget_resizeEvent_QResizeEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void resizeGL(int w, int h) {
        qtd_QGLWidget_resizeGL_int_int(qtdNativeId, w, h);
    }

    protected void resizeOverlayGL(int w, int h) {
        qtd_QGLWidget_resizeOverlayGL_int_int(qtdNativeId, w, h);
    }

    public void updateGL() {
        qtd_QGLWidget_updateGL(qtdNativeId);
    }

    public void updateOverlayGL() {
        qtd_QGLWidget_updateOverlayGL(qtdNativeId);
    }

    public static QImage convertToGLFormat(const(QImage) img) {
        void* ret = qtd_QGLWidget_convertToGLFormat_QImage(img is null ? null : (cast(QImage)img).qtdNativeId);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "updateGL()", 
            "updateOverlayGL()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QGLWidget_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QGLWidget);
    }

    static QGLWidget __getObject(void* nativeId) {
        return static_cast!(QGLWidget)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QGLWidget_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QGLWidget_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QGLWidget(nativeId, initFlags);
        QGLWidget.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("updateGL"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("updateOverlayGL"), index));

    }

    public alias void __isQtType_QGLWidget;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGLWidget_QGLWidget_QGLContext_QWidget_QGLWidget_WindowFlags(void *d_ptr,
 void* context0,
 void* parent1,
 void* shareWidget2,
 int f3);
private extern(C) void* qtd_QGLWidget_QGLWidget_QWidget_QGLWidget_WindowFlags(void *d_ptr,
 void* parent0,
 void* shareWidget1,
 int f2);
private extern(C) void* qtd_QGLWidget_QGLWidget_QGLFormat_QWidget_QGLWidget_WindowFlags(void *d_ptr,
 void* format0,
 void* parent1,
 void* shareWidget2,
 int f3);
private extern(C) bool  qtd_QGLWidget_autoBufferSwap_const(void* __this_nativeId);
private extern(C) int  qtd_QGLWidget_bindTexture_QImage_int_int(void* __this_nativeId,
 void* image0,
 int target1,
 int format2);
private extern(C) int  qtd_QGLWidget_bindTexture_QPixmap_int_int(void* __this_nativeId,
 void* pixmap0,
 int target1,
 int format2);
private extern(C) int  qtd_QGLWidget_bindTexture_string(void* __this_nativeId,
 string fileName0);
private extern(C) void*  qtd_QGLWidget_colormap_const(void* __this_nativeId);
private extern(C) void*  qtd_QGLWidget_context_const(void* __this_nativeId);
private extern(C) void  qtd_QGLWidget_deleteTexture_int(void* __this_nativeId,
 int tx_id0);
private extern(C) void  qtd_QGLWidget_doneCurrent(void* __this_nativeId);
private extern(C) bool  qtd_QGLWidget_doubleBuffer_const(void* __this_nativeId);
private extern(C) void  qtd_QGLWidget_drawTexture_QPointF_int_int(void* __this_nativeId,
 QPointF point0,
 int textureId1,
 int textureTarget2);
private extern(C) void  qtd_QGLWidget_drawTexture_QRectF_int_int(void* __this_nativeId,
 QRectF target0,
 int textureId1,
 int textureTarget2);
private extern(C) void*  qtd_QGLWidget_format_const(void* __this_nativeId);
private extern(C) void*  qtd_QGLWidget_grabFrameBuffer_bool(void* __this_nativeId,
 bool withAlpha0);
private extern(C) bool  qtd_QGLWidget_isSharing_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLWidget_isValid_const(void* __this_nativeId);
private extern(C) void  qtd_QGLWidget_makeCurrent(void* __this_nativeId);
private extern(C) void  qtd_QGLWidget_makeOverlayCurrent(void* __this_nativeId);
private extern(C) void*  qtd_QGLWidget_overlayContext_const(void* __this_nativeId);
private extern(C) void  qtd_QGLWidget_qglClearColor_QColor_const(void* __this_nativeId,
 void* c0);
private extern(C) void  qtd_QGLWidget_qglColor_QColor_const(void* __this_nativeId,
 void* c0);
private extern(C) void*  qtd_QGLWidget_renderPixmap_int_int_bool(void* __this_nativeId,
 int w0,
 int h1,
 bool useContext2);
private extern(C) void  qtd_QGLWidget_renderText_double_double_double_string_QFont_int(void* __this_nativeId,
 double x0,
 double y1,
 double z2,
 string str3,
 void* fnt4,
 int listBase5);
private extern(C) void  qtd_QGLWidget_renderText_int_int_string_QFont_int(void* __this_nativeId,
 int x0,
 int y1,
 string str2,
 void* fnt3,
 int listBase4);
private extern(C) void  qtd_QGLWidget_setAutoBufferSwap_bool(void* __this_nativeId,
 bool on0);
private extern(C) void  qtd_QGLWidget_setColormap_QGLColormap(void* __this_nativeId,
 void* map0);
private extern(C) void  qtd_QGLWidget_swapBuffers(void* __this_nativeId);
private extern(C) bool  qtd_QGLWidget_event_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QGLWidget_glDraw(void* __this_nativeId);
private extern(C) void  qtd_QGLWidget_glInit(void* __this_nativeId);
private extern(C) void  qtd_QGLWidget_initializeGL(void* __this_nativeId);
private extern(C) void  qtd_QGLWidget_initializeOverlayGL(void* __this_nativeId);
private extern(C) void*  qtd_QGLWidget_paintEngine_const(void* __this_nativeId);
private extern(C) void  qtd_QGLWidget_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QGLWidget_paintGL(void* __this_nativeId);
private extern(C) void  qtd_QGLWidget_paintOverlayGL(void* __this_nativeId);
private extern(C) void  qtd_QGLWidget_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QGLWidget_resizeGL_int_int(void* __this_nativeId,
 int w0,
 int h1);
private extern(C) void  qtd_QGLWidget_resizeOverlayGL_int_int(void* __this_nativeId,
 int w0,
 int h1);
private extern(C) void  qtd_QGLWidget_updateGL(void* __this_nativeId);
private extern(C) void  qtd_QGLWidget_updateOverlayGL(void* __this_nativeId);
private extern(C) void*  qtd_QGLWidget_convertToGLFormat_QImage(void* img0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId) qtd_QGLWidget_glDraw_dispatch; }
extern(C) void qtd_export_QGLWidget_glDraw_dispatch(void *dId){
    auto d_object = cast(QGLWidget) dId;
    d_object.glDraw();
}

extern(C){ extern void function(void *dId) qtd_QGLWidget_glInit_dispatch; }
extern(C) void qtd_export_QGLWidget_glInit_dispatch(void *dId){
    auto d_object = cast(QGLWidget) dId;
    d_object.glInit();
}

extern(C){ extern void function(void *dId) qtd_QGLWidget_initializeGL_dispatch; }
extern(C) void qtd_export_QGLWidget_initializeGL_dispatch(void *dId){
    auto d_object = cast(QGLWidget) dId;
    d_object.initializeGL();
}

extern(C){ extern void function(void *dId) qtd_QGLWidget_initializeOverlayGL_dispatch; }
extern(C) void qtd_export_QGLWidget_initializeOverlayGL_dispatch(void *dId){
    auto d_object = cast(QGLWidget) dId;
    d_object.initializeOverlayGL();
}

extern(C){ extern void function(void *dId) qtd_QGLWidget_paintGL_dispatch; }
extern(C) void qtd_export_QGLWidget_paintGL_dispatch(void *dId){
    auto d_object = cast(QGLWidget) dId;
    d_object.paintGL();
}

extern(C){ extern void function(void *dId) qtd_QGLWidget_paintOverlayGL_dispatch; }
extern(C) void qtd_export_QGLWidget_paintOverlayGL_dispatch(void *dId){
    auto d_object = cast(QGLWidget) dId;
    d_object.paintOverlayGL();
}

extern(C){ extern void function(void *dId, int w0, int h1) qtd_QGLWidget_resizeGL_int_int_dispatch; }
extern(C) void qtd_export_QGLWidget_resizeGL_int_int_dispatch(void *dId, int w0, int h1){
    auto d_object = cast(QGLWidget) dId;
    d_object.resizeGL(w0, h1);
}

extern(C){ extern void function(void *dId, int w0, int h1) qtd_QGLWidget_resizeOverlayGL_int_int_dispatch; }
extern(C) void qtd_export_QGLWidget_resizeOverlayGL_int_int_dispatch(void *dId, int w0, int h1){
    auto d_object = cast(QGLWidget) dId;
    d_object.resizeOverlayGL(w0, h1);
}

extern(C){ extern void function(void *dId) qtd_QGLWidget_updateGL_dispatch; }
extern(C) void qtd_export_QGLWidget_updateGL_dispatch(void *dId){
    auto d_object = cast(QGLWidget) dId;
    d_object.updateGL();
}

extern(C){ extern void function(void *dId) qtd_QGLWidget_updateOverlayGL_dispatch; }
extern(C) void qtd_export_QGLWidget_updateOverlayGL_dispatch(void *dId){
    auto d_object = cast(QGLWidget) dId;
    d_object.updateOverlayGL();
}

private extern (C) void qtd_QGLWidget_initCallBacks(void* virtuals);

extern(C) void static_init_QGLWidget() {
    void*[10] virt_arr;
    virt_arr[0] = &qtd_export_QGLWidget_glDraw_dispatch;
    virt_arr[1] = &qtd_export_QGLWidget_glInit_dispatch;
    virt_arr[2] = &qtd_export_QGLWidget_initializeGL_dispatch;
    virt_arr[3] = &qtd_export_QGLWidget_initializeOverlayGL_dispatch;
    virt_arr[4] = &qtd_export_QGLWidget_paintGL_dispatch;
    virt_arr[5] = &qtd_export_QGLWidget_paintOverlayGL_dispatch;
    virt_arr[6] = &qtd_export_QGLWidget_resizeGL_int_int_dispatch;
    virt_arr[7] = &qtd_export_QGLWidget_resizeOverlayGL_int_int_dispatch;
    virt_arr[8] = &qtd_export_QGLWidget_updateGL_dispatch;
    virt_arr[9] = &qtd_export_QGLWidget_updateOverlayGL_dispatch;
    qtd_QGLWidget_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QGLWidget_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QGLWidget) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/

extern(C) QMetaObjectNative* qtd_QGLWidget_staticMetaObject();

extern(C) void qtd_QGLWidget_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QGLWidget_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
