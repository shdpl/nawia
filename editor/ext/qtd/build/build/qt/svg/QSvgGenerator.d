module qt.svg.QSvgGenerator;

public import qt.svg.QSvgGenerator_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QPaintDevice;
public import qt.core.QIODevice;
public import qt.core.QRectF;
public import qt.gui.QPaintEngine;
public import qt.core.QRect;
public import qt.gui.QPaintDevice;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSvgGenerator : QtdObject, IQPaintDevice
{

Object __rcOutputDevice = null;

// Functions

    public this() {
        void* ret = qtd_QSvgGenerator_QSvgGenerator(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int colorCount() const {
        return qtd_QSvgGenerator_colorCount_const(qtdNativeId);
    }

    public final int depth() const {
        return qtd_QSvgGenerator_depth_const(qtdNativeId);
    }

    public final string description() const {
        string res;
        qtd_QSvgGenerator_description_const(qtdNativeId, &res);
        return res;
    }

    public final string fileName() const {
        string res;
        qtd_QSvgGenerator_fileName_const(qtdNativeId, &res);
        return res;
    }

    public final int height() const {
        return qtd_QSvgGenerator_height_const(qtdNativeId);
    }

    public final int heightMM() const {
        return qtd_QSvgGenerator_heightMM_const(qtdNativeId);
    }

    public final int logicalDpiX() const {
        return qtd_QSvgGenerator_logicalDpiX_const(qtdNativeId);
    }

    public final int logicalDpiY() const {
        return qtd_QSvgGenerator_logicalDpiY_const(qtdNativeId);
    }

    public final int numColors() const {
        return qtd_QSvgGenerator_numColors_const(qtdNativeId);
    }

    public final QIODevice outputDevice() const {
        void *ret = qtd_QSvgGenerator_outputDevice_const(qtdNativeId);
        QIODevice __d_return_value = QIODevice.__getObject(ret);
        return __d_return_value;
    }

    public final bool paintingActive() const {
        return qtd_QSvgGenerator_paintingActive_const(qtdNativeId);
    }

    public final int physicalDpiX() const {
        return qtd_QSvgGenerator_physicalDpiX_const(qtdNativeId);
    }

    public final int physicalDpiY() const {
        return qtd_QSvgGenerator_physicalDpiY_const(qtdNativeId);
    }

    public final int resolution() const {
        return qtd_QSvgGenerator_resolution_const(qtdNativeId);
    }

    public final void setDescription(string description) {
        qtd_QSvgGenerator_setDescription_string(qtdNativeId, description);
    }

    public final void setFileName(string fileName) {
        qtd_QSvgGenerator_setFileName_string(qtdNativeId, fileName);
    }

    public final void setOutputDevice(QIODevice outputDevice) {
        {
            __rcOutputDevice = cast(Object) outputDevice;
        }
        qtd_QSvgGenerator_setOutputDevice_QIODevice(qtdNativeId, outputDevice is null ? null : outputDevice.qtdNativeId);
    }

    public final void setResolution(int dpi) {
        qtd_QSvgGenerator_setResolution_int(qtdNativeId, dpi);
    }

    public final void setSize(const(QSize) size) {
        qtd_QSvgGenerator_setSize_QSize(qtdNativeId, size);
    }

    public final void setTitle(string title) {
        qtd_QSvgGenerator_setTitle_string(qtdNativeId, title);
    }

    public final void setViewBox(const(QRect) viewBox) {
        qtd_QSvgGenerator_setViewBox_QRect(qtdNativeId, viewBox);
    }

    public final void setViewBox(const(QRectF) viewBox) {
        qtd_QSvgGenerator_setViewBox_QRectF(qtdNativeId, viewBox);
    }

    public final QSize size() const {
        QSize res;
        qtd_QSvgGenerator_size_const(qtdNativeId, &res);
        return res;
    }

    public final string title() const {
        string res;
        qtd_QSvgGenerator_title_const(qtdNativeId, &res);
        return res;
    }

    public final QRect viewBox() const {
        QRect res;
        qtd_QSvgGenerator_viewBox_const(qtdNativeId, &res);
        return res;
    }

    public final QRectF viewBoxF() const {
        QRectF res;
        qtd_QSvgGenerator_viewBoxF_const(qtdNativeId, &res);
        return res;
    }

    public final int width() const {
        return qtd_QSvgGenerator_width_const(qtdNativeId);
    }

    public final int widthMM() const {
        return qtd_QSvgGenerator_widthMM_const(qtdNativeId);
    }

    public int devType() const {
        return qtd_QSvgGenerator_devType_const(qtdNativeId);
    }

    public int metric(QPaintDevice.PaintDeviceMetric metric) const {
        return qtd_QSvgGenerator_metric_PaintDeviceMetric_const(qtdNativeId, metric);
    }

    public QPaintEngine paintEngine() const {
        void* ret = qtd_QSvgGenerator_paintEngine_const(qtdNativeId);
        QPaintEngine __d_return_value = qtd_QPaintEngine_from_ptr(ret);

        return __d_return_value;
    }
// Field accessors
    static QSvgGenerator __getObject(void* nativeId) {
        return qtd_QSvgGenerator_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QSvgGenerator;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQPaintDevice = qtd_QSvgGenerator_cast_to_QPaintDevice(nativeId);
    }

    private void* __m_ptr_IQPaintDevice;
    public void* __ptr_IQPaintDevice() { return __m_ptr_IQPaintDevice; }

    protected override void qtdDeleteNative() {
        qtd_QSvgGenerator_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QSvgGenerator_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QSvgGenerator_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QSvgGenerator_cast_to_QPaintDevice(void* nativeId);

extern (C) void *__QSvgGenerator_entity(void *q_ptr);

QSvgGenerator qtd_QSvgGenerator_from_ptr(void* ret) {
    void* d_obj = __QSvgGenerator_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QSvgGenerator) d_obj_ref;
    } else {
        auto return_value = new QSvgGenerator(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QSvgGenerator_delete(void *ptr);
extern (C) void qtd_QSvgGenerator_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QSvgGenerator_QSvgGenerator(void *d_ptr);
private extern(C) int  qtd_QSvgGenerator_colorCount_const(void* __this_nativeId);
private extern(C) int  qtd_QSvgGenerator_depth_const(void* __this_nativeId);
private extern(C) void  qtd_QSvgGenerator_description_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QSvgGenerator_fileName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QSvgGenerator_height_const(void* __this_nativeId);
private extern(C) int  qtd_QSvgGenerator_heightMM_const(void* __this_nativeId);
private extern(C) int  qtd_QSvgGenerator_logicalDpiX_const(void* __this_nativeId);
private extern(C) int  qtd_QSvgGenerator_logicalDpiY_const(void* __this_nativeId);
private extern(C) int  qtd_QSvgGenerator_numColors_const(void* __this_nativeId);
private extern(C) void*  qtd_QSvgGenerator_outputDevice_const(void* __this_nativeId);
private extern(C) bool  qtd_QSvgGenerator_paintingActive_const(void* __this_nativeId);
private extern(C) int  qtd_QSvgGenerator_physicalDpiX_const(void* __this_nativeId);
private extern(C) int  qtd_QSvgGenerator_physicalDpiY_const(void* __this_nativeId);
private extern(C) int  qtd_QSvgGenerator_resolution_const(void* __this_nativeId);
private extern(C) void  qtd_QSvgGenerator_setDescription_string(void* __this_nativeId,
 string description0);
private extern(C) void  qtd_QSvgGenerator_setFileName_string(void* __this_nativeId,
 string fileName0);
private extern(C) void  qtd_QSvgGenerator_setOutputDevice_QIODevice(void* __this_nativeId,
 void* outputDevice0);
private extern(C) void  qtd_QSvgGenerator_setResolution_int(void* __this_nativeId,
 int dpi0);
private extern(C) void  qtd_QSvgGenerator_setSize_QSize(void* __this_nativeId,
 QSize size0);
private extern(C) void  qtd_QSvgGenerator_setTitle_string(void* __this_nativeId,
 string title0);
private extern(C) void  qtd_QSvgGenerator_setViewBox_QRect(void* __this_nativeId,
 QRect viewBox0);
private extern(C) void  qtd_QSvgGenerator_setViewBox_QRectF(void* __this_nativeId,
 QRectF viewBox0);
private extern(C) void  qtd_QSvgGenerator_size_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QSvgGenerator_title_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QSvgGenerator_viewBox_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void  qtd_QSvgGenerator_viewBoxF_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) int  qtd_QSvgGenerator_width_const(void* __this_nativeId);
private extern(C) int  qtd_QSvgGenerator_widthMM_const(void* __this_nativeId);
private extern(C) int  qtd_QSvgGenerator_devType_const(void* __this_nativeId);
private extern(C) int  qtd_QSvgGenerator_metric_PaintDeviceMetric_const(void* __this_nativeId,
 int metric0);
private extern(C) void*  qtd_QSvgGenerator_paintEngine_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QSvgGenerator_initCallBacks(void* virtuals);

extern(C) void static_init_QSvgGenerator() {
    qtd_QSvgGenerator_initCallBacks(null);
}

// signal handlers

