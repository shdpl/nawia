module qt.gui.QPrintEngine;

public import qt.gui.QPrintEngine_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QPrinter;
public import qt.gui.QPaintDevice;
public import qt.core.QVariant;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QPrintEngine : QtdObject
{
    public enum PrintEnginePropertyKey {
        PPK_CollateCopies = 0,
        PPK_ColorMode = 1,
        PPK_Creator = 2,
        PPK_DocumentName = 3,
        PPK_FullPage = 4,
        PPK_NumberOfCopies = 5,
        PPK_Orientation = 6,
        PPK_OutputFileName = 7,
        PPK_PageOrder = 8,
        PPK_PageRect = 9,
        PPK_PageSize = 10,
        PPK_PaperRect = 11,
        PPK_PaperSource = 12,
        PPK_PrinterName = 13,
        PPK_PrinterProgram = 14,
        PPK_Resolution = 15,
        PPK_SelectionOption = 16,
        PPK_SupportedResolutions = 17,
        PPK_WindowsPageSize = 18,
        PPK_FontEmbedding = 19,
        PPK_SuppressSystemPrintStatus = 20,
        PPK_Duplex = 21,
        PPK_PaperSources = 22,
        PPK_CustomPaperSize = 23,
        PPK_PageMargins = 24,
        PPK_CopyCount = 25,
        PPK_SupportsMultipleCopies = 26,
        PPK_CustomBase = 65280
    }

    alias PrintEnginePropertyKey.PPK_CollateCopies PPK_CollateCopies;
    alias PrintEnginePropertyKey.PPK_ColorMode PPK_ColorMode;
    alias PrintEnginePropertyKey.PPK_Creator PPK_Creator;
    alias PrintEnginePropertyKey.PPK_DocumentName PPK_DocumentName;
    alias PrintEnginePropertyKey.PPK_FullPage PPK_FullPage;
    alias PrintEnginePropertyKey.PPK_NumberOfCopies PPK_NumberOfCopies;
    alias PrintEnginePropertyKey.PPK_Orientation PPK_Orientation;
    alias PrintEnginePropertyKey.PPK_OutputFileName PPK_OutputFileName;
    alias PrintEnginePropertyKey.PPK_PageOrder PPK_PageOrder;
    alias PrintEnginePropertyKey.PPK_PageRect PPK_PageRect;
    alias PrintEnginePropertyKey.PPK_PageSize PPK_PageSize;
    alias PrintEnginePropertyKey.PPK_PaperRect PPK_PaperRect;
    alias PrintEnginePropertyKey.PPK_PaperSource PPK_PaperSource;
    alias PrintEnginePropertyKey.PPK_PrinterName PPK_PrinterName;
    alias PrintEnginePropertyKey.PPK_PrinterProgram PPK_PrinterProgram;
    alias PrintEnginePropertyKey.PPK_Resolution PPK_Resolution;
    alias PrintEnginePropertyKey.PPK_SelectionOption PPK_SelectionOption;
    alias PrintEnginePropertyKey.PPK_SupportedResolutions PPK_SupportedResolutions;
    alias PrintEnginePropertyKey.PPK_WindowsPageSize PPK_WindowsPageSize;
    alias PrintEnginePropertyKey.PPK_FontEmbedding PPK_FontEmbedding;
    alias PrintEnginePropertyKey.PPK_SuppressSystemPrintStatus PPK_SuppressSystemPrintStatus;
    alias PrintEnginePropertyKey.PPK_Duplex PPK_Duplex;
    alias PrintEnginePropertyKey.PPK_PaperSources PPK_PaperSources;
    alias PrintEnginePropertyKey.PPK_CustomPaperSize PPK_CustomPaperSize;
    alias PrintEnginePropertyKey.PPK_PageMargins PPK_PageMargins;
    alias PrintEnginePropertyKey.PPK_CopyCount PPK_CopyCount;
    alias PrintEnginePropertyKey.PPK_SupportsMultipleCopies PPK_SupportsMultipleCopies;
    alias PrintEnginePropertyKey.PPK_CustomBase PPK_CustomBase;


// Functions

    public this() {
        void* ret = qtd_QPrintEngine_QPrintEngine(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract bool abort();

    public abstract int metric(QPaintDevice.PaintDeviceMetric arg__1) const;

    public abstract bool newPage();

    public abstract QPrinter.PrinterState printerState() const;

    public abstract QVariant property(QPrintEngine.PrintEnginePropertyKey key) const;

    public abstract void setProperty(QPrintEngine.PrintEnginePropertyKey key, QVariant value);
// Field accessors
    static QPrintEngine __getObject(void* nativeId) {
        return qtd_QPrintEngine_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QPrintEngine;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QPrintEngine_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QPrintEngine_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QPrintEngine_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QPrintEngine_ConcreteWrapper : QPrintEngine {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public bool abort() {
            return qtd_QPrintEngine_abort(qtdNativeId);
        }

        override         public int metric(QPaintDevice.PaintDeviceMetric arg__1) const {
            return qtd_QPrintEngine_metric_PaintDeviceMetric_const(qtdNativeId, arg__1);
        }

        override         public bool newPage() {
            return qtd_QPrintEngine_newPage(qtdNativeId);
        }

        override         public QPrinter.PrinterState printerState() const {
            return cast(QPrinter.PrinterState) qtd_QPrintEngine_printerState_const(qtdNativeId);
        }

        override         public QVariant property(QPrintEngine.PrintEnginePropertyKey key) const {
            void* ret = qtd_QPrintEngine_property_PrintEnginePropertyKey_const(qtdNativeId, key);
            QVariant __d_return_value = new QVariant(ret);
            return __d_return_value;
        }

        override         public void setProperty(QPrintEngine.PrintEnginePropertyKey key, QVariant value) {
            qtd_QPrintEngine_setProperty_PrintEnginePropertyKey_QVariant(qtdNativeId, key, value is null ? null : value.qtdNativeId);
        }
    }


extern (C) void *__QPrintEngine_entity(void *q_ptr);

QPrintEngine qtd_QPrintEngine_from_ptr(void* ret) {
    void* d_obj = __QPrintEngine_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QPrintEngine) d_obj_ref;
    } else {
        auto return_value = new QPrintEngine_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QPrintEngine_delete(void *ptr);
extern (C) void qtd_QPrintEngine_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPrintEngine_QPrintEngine(void *d_ptr);
private extern(C) bool  qtd_QPrintEngine_abort(void* __this_nativeId);
private extern(C) int  qtd_QPrintEngine_metric_PaintDeviceMetric_const(void* __this_nativeId,
 int arg__1);
private extern(C) bool  qtd_QPrintEngine_newPage(void* __this_nativeId);
private extern(C) int  qtd_QPrintEngine_printerState_const(void* __this_nativeId);
private extern(C) void*  qtd_QPrintEngine_property_PrintEnginePropertyKey_const(void* __this_nativeId,
 int key0);
private extern(C) void  qtd_QPrintEngine_setProperty_PrintEnginePropertyKey_QVariant(void* __this_nativeId,
 int key0,
 void* value1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId) qtd_QPrintEngine_abort_dispatch; }
extern(C) bool qtd_export_QPrintEngine_abort_dispatch(void *dId){
    auto d_object = cast(QPrintEngine) dId;
    auto return_value = d_object.abort();
    return return_value;
}

extern(C){ extern int function(void *dId, int arg__1) qtd_QPrintEngine_metric_PaintDeviceMetric_const_dispatch; }
extern(C) int qtd_export_QPrintEngine_metric_PaintDeviceMetric_const_dispatch(void *dId, int arg__1){
    auto d_object = cast(QPrintEngine) dId;
    auto arg__1_enum = cast(QPaintDevice.PaintDeviceMetric) arg__1;
    auto return_value = d_object.metric(arg__1_enum);
    return return_value;
}

extern(C){ extern bool function(void *dId) qtd_QPrintEngine_newPage_dispatch; }
extern(C) bool qtd_export_QPrintEngine_newPage_dispatch(void *dId){
    auto d_object = cast(QPrintEngine) dId;
    auto return_value = d_object.newPage();
    return return_value;
}

extern(C){ extern int function(void *dId) qtd_QPrintEngine_printerState_const_dispatch; }
extern(C) int qtd_export_QPrintEngine_printerState_const_dispatch(void *dId){
    auto d_object = cast(QPrintEngine) dId;
    auto return_value = d_object.printerState();
    return return_value;
}

extern(C){ extern void* function(void *dId, int key0) qtd_QPrintEngine_property_PrintEnginePropertyKey_const_dispatch; }
extern(C) void* qtd_export_QPrintEngine_property_PrintEnginePropertyKey_const_dispatch(void *dId, int key0){
    auto d_object = cast(QPrintEngine) dId;
    auto key0_enum = cast(QPrintEngine.PrintEnginePropertyKey) key0;
    QVariant ret_value = d_object.property(key0_enum);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, int key0, void* value1) qtd_QPrintEngine_setProperty_PrintEnginePropertyKey_QVariant_dispatch; }
extern(C) void qtd_export_QPrintEngine_setProperty_PrintEnginePropertyKey_QVariant_dispatch(void *dId, int key0, void* value1){
    auto d_object = cast(QPrintEngine) dId;
    auto key0_enum = cast(QPrintEngine.PrintEnginePropertyKey) key0;
    scope value1_d_ref = new QVariant(value1, QtdObjectInitFlags.onStack);
    d_object.setProperty(key0_enum, value1_d_ref);
}

private extern (C) void qtd_QPrintEngine_initCallBacks(void* virtuals);

extern(C) void static_init_QPrintEngine() {
    void*[6] virt_arr;
    virt_arr[0] = &qtd_export_QPrintEngine_abort_dispatch;
    virt_arr[1] = &qtd_export_QPrintEngine_metric_PaintDeviceMetric_const_dispatch;
    virt_arr[2] = &qtd_export_QPrintEngine_newPage_dispatch;
    virt_arr[3] = &qtd_export_QPrintEngine_printerState_const_dispatch;
    virt_arr[4] = &qtd_export_QPrintEngine_property_PrintEnginePropertyKey_const_dispatch;
    virt_arr[5] = &qtd_export_QPrintEngine_setProperty_PrintEnginePropertyKey_QVariant_dispatch;
    qtd_QPrintEngine_initCallBacks(virt_arr.ptr);
}

// signal handlers

