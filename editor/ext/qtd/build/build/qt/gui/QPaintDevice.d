module qt.gui.QPaintDevice;

public import qt.gui.QPaintDevice_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QPaintEngine;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QPaintDevice : QtdObject, IQPaintDevice
{

// Functions

    public this() {
        void* ret = qtd_QPaintDevice_QPaintDevice(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int colorCount() const {
        return qtd_QPaintDevice_colorCount_const(qtdNativeId);
    }

    public final int depth() const {
        return qtd_QPaintDevice_depth_const(qtdNativeId);
    }

    public final int height() const {
        return qtd_QPaintDevice_height_const(qtdNativeId);
    }

    public final int heightMM() const {
        return qtd_QPaintDevice_heightMM_const(qtdNativeId);
    }

    public final int logicalDpiX() const {
        return qtd_QPaintDevice_logicalDpiX_const(qtdNativeId);
    }

    public final int logicalDpiY() const {
        return qtd_QPaintDevice_logicalDpiY_const(qtdNativeId);
    }

    public final int numColors() const {
        return qtd_QPaintDevice_numColors_const(qtdNativeId);
    }

    public final bool paintingActive() const {
        return qtd_QPaintDevice_paintingActive_const(qtdNativeId);
    }

    public final int physicalDpiX() const {
        return qtd_QPaintDevice_physicalDpiX_const(qtdNativeId);
    }

    public final int physicalDpiY() const {
        return qtd_QPaintDevice_physicalDpiY_const(qtdNativeId);
    }

    public final int width() const {
        return qtd_QPaintDevice_width_const(qtdNativeId);
    }

    public final int widthMM() const {
        return qtd_QPaintDevice_widthMM_const(qtdNativeId);
    }

    public int devType() const {
        return qtd_QPaintDevice_devType_const(qtdNativeId);
    }

    public int metric(PaintDeviceMetric metric) const {
        return qtd_QPaintDevice_metric_PaintDeviceMetric_const(qtdNativeId, metric);
    }

    public abstract QPaintEngine paintEngine() const;
// Field accessors
    static IQPaintDevice __getObject(void* nativeId) {
        return qtd_QPaintDevice_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QPaintDevice;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQPaintDevice = qtd_QPaintDevice_cast_to_QPaintDevice(nativeId);
    }

    private void* __m_ptr_IQPaintDevice;
    public void* __ptr_IQPaintDevice() { return __m_ptr_IQPaintDevice; }

    protected override void qtdDeleteNative() {
        qtd_QPaintDevice_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QPaintDevice_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QPaintDevice_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QPaintDevice_cast_to_QPaintDevice(void* nativeId);

    public class QPaintDevice_ConcreteWrapper : QPaintDevice {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public QPaintEngine paintEngine() const {
            void* ret = qtd_QPaintDevice_paintEngine_const(qtdNativeId);
            QPaintEngine __d_return_value = qtd_QPaintEngine_from_ptr(ret);

            return __d_return_value;
        }
    }


extern (C) void *__QPaintDevice_entity(void *q_ptr);

IQPaintDevice qtd_QPaintDevice_from_ptr(void* ret) {
    void* d_obj = __QPaintDevice_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(IQPaintDevice) d_obj_ref;
    } else {
        auto return_value = new QPaintDevice_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QPaintDevice_delete(void *ptr);
extern (C) void qtd_QPaintDevice_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPaintDevice_QPaintDevice(void *d_ptr);
private extern(C) int  qtd_QPaintDevice_colorCount_const(void* __this_nativeId);
private extern(C) int  qtd_QPaintDevice_depth_const(void* __this_nativeId);
private extern(C) int  qtd_QPaintDevice_height_const(void* __this_nativeId);
private extern(C) int  qtd_QPaintDevice_heightMM_const(void* __this_nativeId);
private extern(C) int  qtd_QPaintDevice_logicalDpiX_const(void* __this_nativeId);
private extern(C) int  qtd_QPaintDevice_logicalDpiY_const(void* __this_nativeId);
private extern(C) int  qtd_QPaintDevice_numColors_const(void* __this_nativeId);
private extern(C) bool  qtd_QPaintDevice_paintingActive_const(void* __this_nativeId);
private extern(C) int  qtd_QPaintDevice_physicalDpiX_const(void* __this_nativeId);
private extern(C) int  qtd_QPaintDevice_physicalDpiY_const(void* __this_nativeId);
private extern(C) int  qtd_QPaintDevice_width_const(void* __this_nativeId);
private extern(C) int  qtd_QPaintDevice_widthMM_const(void* __this_nativeId);
private extern(C) int  qtd_QPaintDevice_devType_const(void* __this_nativeId);
private extern(C) int  qtd_QPaintDevice_metric_PaintDeviceMetric_const(void* __this_nativeId,
 int metric0);
private extern(C) void*  qtd_QPaintDevice_paintEngine_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern int function(void *dId) qtd_QPaintDevice_devType_const_dispatch; }
extern(C) int qtd_export_QPaintDevice_devType_const_dispatch(void *dId){
    auto d_object = cast(IQPaintDevice)cast(Object) dId;
    auto return_value = d_object.devType();
    return return_value;
}

extern(C){ extern int function(void *dId, int metric0) qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch; }
extern(C) int qtd_export_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(void *dId, int metric0){
    auto d_object = cast(IQPaintDevice)cast(Object) dId;
    auto metric0_enum = cast(QPaintDevice.PaintDeviceMetric) metric0;
    auto return_value = d_object.metric(metric0_enum);
    return return_value;
}

extern(C){ extern void* function(void *dId) qtd_QPaintDevice_paintEngine_const_dispatch; }
extern(C) void* qtd_export_QPaintDevice_paintEngine_const_dispatch(void *dId){
    auto d_object = cast(IQPaintDevice)cast(Object) dId;
    QPaintEngine ret_value = d_object.paintEngine();
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QPaintDevice_initCallBacks(void* virtuals);

extern(C) void static_init_QPaintDevice() {
    void*[3] virt_arr;
    virt_arr[0] = &qtd_export_QPaintDevice_devType_const_dispatch;
    virt_arr[1] = &qtd_export_QPaintDevice_metric_PaintDeviceMetric_const_dispatch;
    virt_arr[2] = &qtd_export_QPaintDevice_paintEngine_const_dispatch;
    qtd_QPaintDevice_initCallBacks(virt_arr.ptr);
}

// signal handlers

public interface IQPaintDevice
{
        public enum PaintDeviceMetric {
            PdmWidth = 1,
            PdmHeight = 2,
            PdmWidthMM = 3,
            PdmHeightMM = 4,
            PdmNumColors = 5,
            PdmDepth = 6,
            PdmDpiX = 7,
            PdmDpiY = 8,
            PdmPhysicalDpiX = 9,
            PdmPhysicalDpiY = 10
        }

        alias PaintDeviceMetric.PdmWidth PdmWidth;
        alias PaintDeviceMetric.PdmHeight PdmHeight;
        alias PaintDeviceMetric.PdmWidthMM PdmWidthMM;
        alias PaintDeviceMetric.PdmHeightMM PdmHeightMM;
        alias PaintDeviceMetric.PdmNumColors PdmNumColors;
        alias PaintDeviceMetric.PdmDepth PdmDepth;
        alias PaintDeviceMetric.PdmDpiX PdmDpiX;
        alias PaintDeviceMetric.PdmDpiY PdmDpiY;
        alias PaintDeviceMetric.PdmPhysicalDpiX PdmPhysicalDpiX;
        alias PaintDeviceMetric.PdmPhysicalDpiY PdmPhysicalDpiY;

// Functions

        public int colorCount() const;

        public int depth() const;

        public int height() const;

        public int heightMM() const;

        public int logicalDpiX() const;

        public int logicalDpiY() const;

        public int numColors() const;

        public bool paintingActive() const;

        public int physicalDpiX() const;

        public int physicalDpiY() const;

        public int width() const;

        public int widthMM() const;

        public int devType() const;

        public int metric(PaintDeviceMetric metric) const;

        public QPaintEngine paintEngine() const;

        public void* __ptr_IQPaintDevice();

// Field accessors
        public alias void __isQtType_IQPaintDevice;

        void qtdSetOwnership(QtdObjectOwnership own) const;// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

