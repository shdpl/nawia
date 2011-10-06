module qt.opengl.QGLFormat;

public import qt.opengl.QGLFormat_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGLFormat : QtdObject
{
    public enum OpenGLVersionFlag {
        OpenGL_Version_None = 0,
        OpenGL_Version_1_1 = 1,
        OpenGL_Version_1_2 = 2,
        OpenGL_Version_1_3 = 4,
        OpenGL_Version_1_4 = 8,
        OpenGL_Version_1_5 = 16,
        OpenGL_Version_2_0 = 32,
        OpenGL_Version_2_1 = 64,
        OpenGL_ES_Common_Version_1_0 = 128,
        OpenGL_ES_CommonLite_Version_1_0 = 256,
        OpenGL_ES_Common_Version_1_1 = 512,
        OpenGL_ES_CommonLite_Version_1_1 = 1024,
        OpenGL_ES_Version_2_0 = 2048,
        OpenGL_Version_3_0 = 4096,
        OpenGL_Version_3_1 = 8192,
        OpenGL_Version_3_2 = 16384,
        OpenGL_Version_3_3 = 32768,
        OpenGL_Version_4_0 = 65536
    }

    alias OpenGLVersionFlag.OpenGL_Version_None OpenGL_Version_None;
    alias OpenGLVersionFlag.OpenGL_Version_1_1 OpenGL_Version_1_1;
    alias OpenGLVersionFlag.OpenGL_Version_1_2 OpenGL_Version_1_2;
    alias OpenGLVersionFlag.OpenGL_Version_1_3 OpenGL_Version_1_3;
    alias OpenGLVersionFlag.OpenGL_Version_1_4 OpenGL_Version_1_4;
    alias OpenGLVersionFlag.OpenGL_Version_1_5 OpenGL_Version_1_5;
    alias OpenGLVersionFlag.OpenGL_Version_2_0 OpenGL_Version_2_0;
    alias OpenGLVersionFlag.OpenGL_Version_2_1 OpenGL_Version_2_1;
    alias OpenGLVersionFlag.OpenGL_ES_Common_Version_1_0 OpenGL_ES_Common_Version_1_0;
    alias OpenGLVersionFlag.OpenGL_ES_CommonLite_Version_1_0 OpenGL_ES_CommonLite_Version_1_0;
    alias OpenGLVersionFlag.OpenGL_ES_Common_Version_1_1 OpenGL_ES_Common_Version_1_1;
    alias OpenGLVersionFlag.OpenGL_ES_CommonLite_Version_1_1 OpenGL_ES_CommonLite_Version_1_1;
    alias OpenGLVersionFlag.OpenGL_ES_Version_2_0 OpenGL_ES_Version_2_0;
    alias OpenGLVersionFlag.OpenGL_Version_3_0 OpenGL_Version_3_0;
    alias OpenGLVersionFlag.OpenGL_Version_3_1 OpenGL_Version_3_1;
    alias OpenGLVersionFlag.OpenGL_Version_3_2 OpenGL_Version_3_2;
    alias OpenGLVersionFlag.OpenGL_Version_3_3 OpenGL_Version_3_3;
    alias OpenGLVersionFlag.OpenGL_Version_4_0 OpenGL_Version_4_0;


// Functions

    public this() {
        void* ret = qtd_QGLFormat_QGLFormat();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int options, int plane = 0) {
        void* ret = qtd_QGLFormat_QGLFormat_FormatOptions_int(options, plane);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QGLFormat) other) {
        void* ret = qtd_QGLFormat_QGLFormat_QGLFormat(other is null ? null : (cast(QGLFormat)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool accum() const {
        return qtd_QGLFormat_accum_const(qtdNativeId);
    }

    public final int accumBufferSize() const {
        return qtd_QGLFormat_accumBufferSize_const(qtdNativeId);
    }

    public final bool alpha() const {
        return qtd_QGLFormat_alpha_const(qtdNativeId);
    }

    public final int alphaBufferSize() const {
        return qtd_QGLFormat_alphaBufferSize_const(qtdNativeId);
    }

    public final int blueBufferSize() const {
        return qtd_QGLFormat_blueBufferSize_const(qtdNativeId);
    }

    public final bool depth() const {
        return qtd_QGLFormat_depth_const(qtdNativeId);
    }

    public final int depthBufferSize() const {
        return qtd_QGLFormat_depthBufferSize_const(qtdNativeId);
    }

    public final bool directRendering() const {
        return qtd_QGLFormat_directRendering_const(qtdNativeId);
    }

    public final bool doubleBuffer() const {
        return qtd_QGLFormat_doubleBuffer_const(qtdNativeId);
    }

    public final int greenBufferSize() const {
        return qtd_QGLFormat_greenBufferSize_const(qtdNativeId);
    }

    public final bool hasOverlay() const {
        return qtd_QGLFormat_hasOverlay_const(qtdNativeId);
    }

    public final int majorVersion() const {
        return qtd_QGLFormat_majorVersion_const(qtdNativeId);
    }

    public final int minorVersion() const {
        return qtd_QGLFormat_minorVersion_const(qtdNativeId);
    }

    private final bool operator_equal(const(QGLFormat) arg__2) {
        return qtd_QGLFormat_operator_equal_QGLFormat(qtdNativeId, arg__2 is null ? null : (cast(QGLFormat)arg__2).qtdNativeId);
    }

    public final int plane() const {
        return qtd_QGLFormat_plane_const(qtdNativeId);
    }

    public final int redBufferSize() const {
        return qtd_QGLFormat_redBufferSize_const(qtdNativeId);
    }

    public final bool rgba() const {
        return qtd_QGLFormat_rgba_const(qtdNativeId);
    }

    public final bool sampleBuffers() const {
        return qtd_QGLFormat_sampleBuffers_const(qtdNativeId);
    }

    public final int samples() const {
        return qtd_QGLFormat_samples_const(qtdNativeId);
    }

    public final void setAccum(bool enable) {
        qtd_QGLFormat_setAccum_bool(qtdNativeId, enable);
    }

    public final void setAccumBufferSize(int size) {
        qtd_QGLFormat_setAccumBufferSize_int(qtdNativeId, size);
    }

    public final void setAlpha(bool enable) {
        qtd_QGLFormat_setAlpha_bool(qtdNativeId, enable);
    }

    public final void setAlphaBufferSize(int size) {
        qtd_QGLFormat_setAlphaBufferSize_int(qtdNativeId, size);
    }

    public final void setBlueBufferSize(int size) {
        qtd_QGLFormat_setBlueBufferSize_int(qtdNativeId, size);
    }

    public final void setDepth(bool enable) {
        qtd_QGLFormat_setDepth_bool(qtdNativeId, enable);
    }

    public final void setDepthBufferSize(int size) {
        qtd_QGLFormat_setDepthBufferSize_int(qtdNativeId, size);
    }

    public final void setDirectRendering(bool enable) {
        qtd_QGLFormat_setDirectRendering_bool(qtdNativeId, enable);
    }

    public final void setDoubleBuffer(bool enable) {
        qtd_QGLFormat_setDoubleBuffer_bool(qtdNativeId, enable);
    }

    public final void setGreenBufferSize(int size) {
        qtd_QGLFormat_setGreenBufferSize_int(qtdNativeId, size);
    }

    public final void setOption(int opt) {
        qtd_QGLFormat_setOption_FormatOptions(qtdNativeId, opt);
    }

    public final void setOverlay(bool enable) {
        qtd_QGLFormat_setOverlay_bool(qtdNativeId, enable);
    }

    public final void setPlane(int plane) {
        qtd_QGLFormat_setPlane_int(qtdNativeId, plane);
    }

    public final void setRedBufferSize(int size) {
        qtd_QGLFormat_setRedBufferSize_int(qtdNativeId, size);
    }

    public final void setRgba(bool enable) {
        qtd_QGLFormat_setRgba_bool(qtdNativeId, enable);
    }

    public final void setSampleBuffers(bool enable) {
        qtd_QGLFormat_setSampleBuffers_bool(qtdNativeId, enable);
    }

    public final void setSamples(int numSamples) {
        qtd_QGLFormat_setSamples_int(qtdNativeId, numSamples);
    }

    public final void setStencil(bool enable) {
        qtd_QGLFormat_setStencil_bool(qtdNativeId, enable);
    }

    public final void setStencilBufferSize(int size) {
        qtd_QGLFormat_setStencilBufferSize_int(qtdNativeId, size);
    }

    public final void setStereo(bool enable) {
        qtd_QGLFormat_setStereo_bool(qtdNativeId, enable);
    }

    public final void setSwapInterval(int interval) {
        qtd_QGLFormat_setSwapInterval_int(qtdNativeId, interval);
    }

    public final void setVersion(int major, int minor) {
        qtd_QGLFormat_setVersion_int_int(qtdNativeId, major, minor);
    }

    public final bool stencil() const {
        return qtd_QGLFormat_stencil_const(qtdNativeId);
    }

    public final int stencilBufferSize() const {
        return qtd_QGLFormat_stencilBufferSize_const(qtdNativeId);
    }

    public final bool stereo() const {
        return qtd_QGLFormat_stereo_const(qtdNativeId);
    }

    public final int swapInterval() const {
        return qtd_QGLFormat_swapInterval_const(qtdNativeId);
    }

    public final bool testOption(int opt) const {
        return qtd_QGLFormat_testOption_FormatOptions_const(qtdNativeId, opt);
    }

    public static QGLFormat defaultFormat() {
        void* ret = qtd_QGLFormat_defaultFormat();
        QGLFormat __d_return_value = new QGLFormat(ret);
        return __d_return_value;
    }

    public static QGLFormat defaultOverlayFormat() {
        void* ret = qtd_QGLFormat_defaultOverlayFormat();
        QGLFormat __d_return_value = new QGLFormat(ret);
        return __d_return_value;
    }

    public static bool hasOpenGL() {
        return qtd_QGLFormat_hasOpenGL();
    }

    public static bool hasOpenGLOverlays() {
        return qtd_QGLFormat_hasOpenGLOverlays();
    }

    public static int openGLVersionFlags() {
        return qtd_QGLFormat_openGLVersionFlags();
    }

    public static void setDefaultFormat(const(QGLFormat) f) {
        qtd_QGLFormat_setDefaultFormat_QGLFormat(f is null ? null : (cast(QGLFormat)f).qtdNativeId);
    }

    public static void setDefaultOverlayFormat(const(QGLFormat) f) {
        qtd_QGLFormat_setDefaultOverlayFormat_QGLFormat(f is null ? null : (cast(QGLFormat)f).qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QGLFormat;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QGLFormat_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QGLFormat_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QGLFormat_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QGLFormat_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QGLFormat_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QGLFormat_QTypeInfo_isComplex();
        isStatic = qtd_QGLFormat_QTypeInfo_isStatic();
        isLarge = qtd_QGLFormat_QTypeInfo_isLarge();
        isPointer = qtd_QGLFormat_QTypeInfo_isPointer();
        isDummy = qtd_QGLFormat_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QGLFormat_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QGLFormat_native_copy(const void* orig);
extern (C) void qtd_QGLFormat_delete(void *ptr);
extern (C) void qtd_QGLFormat_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGLFormat_QGLFormat();
private extern(C) void* qtd_QGLFormat_QGLFormat_FormatOptions_int(int options0,
 int plane1);
private extern(C) void* qtd_QGLFormat_QGLFormat_QGLFormat(void* other0);
private extern(C) bool  qtd_QGLFormat_accum_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFormat_accumBufferSize_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLFormat_alpha_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFormat_alphaBufferSize_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFormat_blueBufferSize_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLFormat_depth_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFormat_depthBufferSize_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLFormat_directRendering_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLFormat_doubleBuffer_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFormat_greenBufferSize_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLFormat_hasOverlay_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFormat_majorVersion_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFormat_minorVersion_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLFormat_operator_equal_QGLFormat(void* __this_nativeId,
 void* arg__2);
private extern(C) int  qtd_QGLFormat_plane_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFormat_redBufferSize_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLFormat_rgba_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLFormat_sampleBuffers_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFormat_samples_const(void* __this_nativeId);
private extern(C) void  qtd_QGLFormat_setAccum_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QGLFormat_setAccumBufferSize_int(void* __this_nativeId,
 int size0);
private extern(C) void  qtd_QGLFormat_setAlpha_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QGLFormat_setAlphaBufferSize_int(void* __this_nativeId,
 int size0);
private extern(C) void  qtd_QGLFormat_setBlueBufferSize_int(void* __this_nativeId,
 int size0);
private extern(C) void  qtd_QGLFormat_setDepth_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QGLFormat_setDepthBufferSize_int(void* __this_nativeId,
 int size0);
private extern(C) void  qtd_QGLFormat_setDirectRendering_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QGLFormat_setDoubleBuffer_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QGLFormat_setGreenBufferSize_int(void* __this_nativeId,
 int size0);
private extern(C) void  qtd_QGLFormat_setOption_FormatOptions(void* __this_nativeId,
 int opt0);
private extern(C) void  qtd_QGLFormat_setOverlay_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QGLFormat_setPlane_int(void* __this_nativeId,
 int plane0);
private extern(C) void  qtd_QGLFormat_setRedBufferSize_int(void* __this_nativeId,
 int size0);
private extern(C) void  qtd_QGLFormat_setRgba_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QGLFormat_setSampleBuffers_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QGLFormat_setSamples_int(void* __this_nativeId,
 int numSamples0);
private extern(C) void  qtd_QGLFormat_setStencil_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QGLFormat_setStencilBufferSize_int(void* __this_nativeId,
 int size0);
private extern(C) void  qtd_QGLFormat_setStereo_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QGLFormat_setSwapInterval_int(void* __this_nativeId,
 int interval0);
private extern(C) void  qtd_QGLFormat_setVersion_int_int(void* __this_nativeId,
 int major0,
 int minor1);
private extern(C) bool  qtd_QGLFormat_stencil_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFormat_stencilBufferSize_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLFormat_stereo_const(void* __this_nativeId);
private extern(C) int  qtd_QGLFormat_swapInterval_const(void* __this_nativeId);
private extern(C) bool  qtd_QGLFormat_testOption_FormatOptions_const(void* __this_nativeId,
 int opt0);
private extern(C) void*  qtd_QGLFormat_defaultFormat();
private extern(C) void*  qtd_QGLFormat_defaultOverlayFormat();
private extern(C) bool  qtd_QGLFormat_hasOpenGL();
private extern(C) bool  qtd_QGLFormat_hasOpenGLOverlays();
private extern(C) int  qtd_QGLFormat_openGLVersionFlags();
private extern(C) void  qtd_QGLFormat_setDefaultFormat_QGLFormat(void* f0);
private extern(C) void  qtd_QGLFormat_setDefaultOverlayFormat_QGLFormat(void* f0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QGLFormat() {
    QGLFormat.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QGLFormat_QTypeInfo_isComplex();
private extern (C) bool qtd_QGLFormat_QTypeInfo_isStatic();
private extern (C) bool qtd_QGLFormat_QTypeInfo_isLarge();
private extern (C) bool qtd_QGLFormat_QTypeInfo_isPointer();
private extern (C) bool qtd_QGLFormat_QTypeInfo_isDummy();
