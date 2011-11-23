module qt.gui.QPrintPreviewWidget;

public import qt.gui.QPrintPreviewWidget_aux;
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
private import qt.gui.ArrayOps2;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QPrinter;
public import qt.gui.QPaintDevice;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QPaintEngine;
public import qt.gui.QWheelEvent;
public import qt.gui.QDropEvent;
public import qt.gui.QActionEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.gui.QPrinter;
public import qt.core.QSize;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QPrintPreviewWidget : QWidget
{
    public enum ZoomMode {
        CustomZoom = 0,
        FitToWidth = 1,
        FitInView = 2
    }

    alias ZoomMode.CustomZoom CustomZoom;
    alias ZoomMode.FitToWidth FitToWidth;
    alias ZoomMode.FitInView FitInView;

    public enum ViewMode {
        SinglePageView = 0,
        FacingPagesView = 1,
        AllPagesView = 2
    }

    alias ViewMode.SinglePageView SinglePageView;
    alias ViewMode.FacingPagesView FacingPagesView;
    alias ViewMode.AllPagesView AllPagesView;


    private static const string[] __signalSignatures = [
            "paintRequested(QPrinter*)", 
            "previewChanged()"    ];

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

    protected final void paintRequested(QPrinter printer) {
        qtd_QPrintPreviewWidget_paintRequested_QPrinter(qtdNativeId, printer is null ? null : printer.qtdNativeId);
    }

    protected final void previewChanged() {
        qtd_QPrintPreviewWidget_previewChanged(qtdNativeId);
    }
// Functions

    public this(QPrinter printer, QWidget parent_ = null, int flags = 0) {
        void* ret = qtd_QPrintPreviewWidget_QPrintPreviewWidget_QPrinter_QWidget_WindowFlags(cast(void*) this, printer is null ? null : printer.qtdNativeId, parent_ is null ? null : parent_.qtdNativeId, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QWidget parent_ = null, int flags = 0) {
        void* ret = qtd_QPrintPreviewWidget_QPrintPreviewWidget_QWidget_WindowFlags(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int currentPage() const {
        return qtd_QPrintPreviewWidget_currentPage_const(qtdNativeId);
    }

    public final void fitInView() {
        qtd_QPrintPreviewWidget_fitInView(qtdNativeId);
    }

    public final void fitToWidth() {
        qtd_QPrintPreviewWidget_fitToWidth(qtdNativeId);
    }

    public final int numPages() const {
        return qtd_QPrintPreviewWidget_numPages_const(qtdNativeId);
    }

    public final QPrinter.Orientation orientation() const {
        return cast(QPrinter.Orientation) qtd_QPrintPreviewWidget_orientation_const(qtdNativeId);
    }

    public final int pageCount() const {
        return qtd_QPrintPreviewWidget_pageCount_const(qtdNativeId);
    }

    public final void print() {
        qtd_QPrintPreviewWidget_print(qtdNativeId);
    }

    public final void setAllPagesViewMode() {
        qtd_QPrintPreviewWidget_setAllPagesViewMode(qtdNativeId);
    }

    public final void setCurrentPage(int pageNumber) {
        qtd_QPrintPreviewWidget_setCurrentPage_int(qtdNativeId, pageNumber);
    }

    public final void setFacingPagesViewMode() {
        qtd_QPrintPreviewWidget_setFacingPagesViewMode(qtdNativeId);
    }

    public final void setLandscapeOrientation() {
        qtd_QPrintPreviewWidget_setLandscapeOrientation(qtdNativeId);
    }

    public final void setOrientation(QPrinter.Orientation orientation) {
        qtd_QPrintPreviewWidget_setOrientation_Orientation(qtdNativeId, orientation);
    }

    public final void setPortraitOrientation() {
        qtd_QPrintPreviewWidget_setPortraitOrientation(qtdNativeId);
    }

    public final void setSinglePageViewMode() {
        qtd_QPrintPreviewWidget_setSinglePageViewMode(qtdNativeId);
    }

    public final void setViewMode(QPrintPreviewWidget.ViewMode viewMode) {
        qtd_QPrintPreviewWidget_setViewMode_ViewMode(qtdNativeId, viewMode);
    }

    public final void setZoomFactor(double zoomFactor) {
        qtd_QPrintPreviewWidget_setZoomFactor_double(qtdNativeId, zoomFactor);
    }

    public final void setZoomMode(QPrintPreviewWidget.ZoomMode zoomMode) {
        qtd_QPrintPreviewWidget_setZoomMode_ZoomMode(qtdNativeId, zoomMode);
    }

    public final void updatePreview() {
        qtd_QPrintPreviewWidget_updatePreview(qtdNativeId);
    }

    public final QPrintPreviewWidget.ViewMode viewMode() const {
        return cast(QPrintPreviewWidget.ViewMode) qtd_QPrintPreviewWidget_viewMode_const(qtdNativeId);
    }

    public final double zoomFactor() const {
        return qtd_QPrintPreviewWidget_zoomFactor_const(qtdNativeId);
    }

    public final void zoomIn(double zoom = 1.1) {
        qtd_QPrintPreviewWidget_zoomIn_double(qtdNativeId, zoom);
    }

    public final QPrintPreviewWidget.ZoomMode zoomMode() const {
        return cast(QPrintPreviewWidget.ZoomMode) qtd_QPrintPreviewWidget_zoomMode_const(qtdNativeId);
    }

    public final void zoomOut(double zoom = 1.1) {
        qtd_QPrintPreviewWidget_zoomOut_double(qtdNativeId, zoom);
    }

    public void setVisible(bool visible) {
        qtd_QPrintPreviewWidget_setVisible_bool(qtdNativeId, visible);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "fitInView()", 
            "fitToWidth()", 
            "print()", 
            "setAllPagesViewMode()", 
            "setCurrentPage(int)", 
            "setFacingPagesViewMode()", 
            "setLandscapeOrientation()", 
            "setOrientation(QPrinter::Orientation)", 
            "setPortraitOrientation()", 
            "setSinglePageViewMode()", 
            "setViewMode(QPrintPreviewWidget::ViewMode)", 
            "setZoomFactor(double)", 
            "setZoomMode(QPrintPreviewWidget::ZoomMode)", 
            "updatePreview()", 
            "zoomIn(double)", 
            "zoomIn()", 
            "zoomOut(double)", 
            "zoomOut()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QPrintPreviewWidget_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QPrintPreviewWidget);
    }

    static QPrintPreviewWidget __getObject(void* nativeId) {
        return static_cast!(QPrintPreviewWidget)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QPrintPreviewWidget_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QPrintPreviewWidget_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QPrintPreviewWidget(nativeId, initFlags);
        QPrintPreviewWidget.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QPrinter)("paintRequested"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!()("previewChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("fitInView"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("fitToWidth"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("print"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!()("setAllPagesViewMode"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(int)("setCurrentPage"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!()("setFacingPagesViewMode"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[6]);
        mo.addMethod(new QMetaSlot(signature!()("setLandscapeOrientation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[7]);
        mo.addMethod(new QMetaSlot(signature!(QPrinter.Orientation)("setOrientation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[8]);
        mo.addMethod(new QMetaSlot(signature!()("setPortraitOrientation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[9]);
        mo.addMethod(new QMetaSlot(signature!()("setSinglePageViewMode"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[10]);
        mo.addMethod(new QMetaSlot(signature!(QPrintPreviewWidget.ViewMode)("setViewMode"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[11]);
        mo.addMethod(new QMetaSlot(signature!(double)("setZoomFactor"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[12]);
        mo.addMethod(new QMetaSlot(signature!(QPrintPreviewWidget.ZoomMode)("setZoomMode"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[13]);
        mo.addMethod(new QMetaSlot(signature!()("updatePreview"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[14]);
        mo.addMethod(new QMetaSlot(signature!(double)("zoomIn"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[15]);
        mo.addMethod(new QMetaSlot(signature!()("zoomIn"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[16]);
        mo.addMethod(new QMetaSlot(signature!(double)("zoomOut"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[17]);
        mo.addMethod(new QMetaSlot(signature!()("zoomOut"), index));

    }

    public alias void __isQtType_QPrintPreviewWidget;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QPrintPreviewWidget_paintRequested_QPrinter(void* __this_nativeId,
 void* printer0);
private extern(C) void  qtd_QPrintPreviewWidget_previewChanged(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QPrintPreviewWidget_QPrintPreviewWidget_QPrinter_QWidget_WindowFlags(void *d_ptr,
 void* printer0,
 void* parent1,
 int flags2);
private extern(C) void* qtd_QPrintPreviewWidget_QPrintPreviewWidget_QWidget_WindowFlags(void *d_ptr,
 void* parent0,
 int flags1);
private extern(C) int  qtd_QPrintPreviewWidget_currentPage_const(void* __this_nativeId);
private extern(C) void  qtd_QPrintPreviewWidget_fitInView(void* __this_nativeId);
private extern(C) void  qtd_QPrintPreviewWidget_fitToWidth(void* __this_nativeId);
private extern(C) int  qtd_QPrintPreviewWidget_numPages_const(void* __this_nativeId);
private extern(C) int  qtd_QPrintPreviewWidget_orientation_const(void* __this_nativeId);
private extern(C) int  qtd_QPrintPreviewWidget_pageCount_const(void* __this_nativeId);
private extern(C) void  qtd_QPrintPreviewWidget_print(void* __this_nativeId);
private extern(C) void  qtd_QPrintPreviewWidget_setAllPagesViewMode(void* __this_nativeId);
private extern(C) void  qtd_QPrintPreviewWidget_setCurrentPage_int(void* __this_nativeId,
 int pageNumber0);
private extern(C) void  qtd_QPrintPreviewWidget_setFacingPagesViewMode(void* __this_nativeId);
private extern(C) void  qtd_QPrintPreviewWidget_setLandscapeOrientation(void* __this_nativeId);
private extern(C) void  qtd_QPrintPreviewWidget_setOrientation_Orientation(void* __this_nativeId,
 int orientation0);
private extern(C) void  qtd_QPrintPreviewWidget_setPortraitOrientation(void* __this_nativeId);
private extern(C) void  qtd_QPrintPreviewWidget_setSinglePageViewMode(void* __this_nativeId);
private extern(C) void  qtd_QPrintPreviewWidget_setViewMode_ViewMode(void* __this_nativeId,
 int viewMode0);
private extern(C) void  qtd_QPrintPreviewWidget_setZoomFactor_double(void* __this_nativeId,
 double zoomFactor0);
private extern(C) void  qtd_QPrintPreviewWidget_setZoomMode_ZoomMode(void* __this_nativeId,
 int zoomMode0);
private extern(C) void  qtd_QPrintPreviewWidget_updatePreview(void* __this_nativeId);
private extern(C) int  qtd_QPrintPreviewWidget_viewMode_const(void* __this_nativeId);
private extern(C) double  qtd_QPrintPreviewWidget_zoomFactor_const(void* __this_nativeId);
private extern(C) void  qtd_QPrintPreviewWidget_zoomIn_double(void* __this_nativeId,
 double zoom0);
private extern(C) int  qtd_QPrintPreviewWidget_zoomMode_const(void* __this_nativeId);
private extern(C) void  qtd_QPrintPreviewWidget_zoomOut_double(void* __this_nativeId,
 double zoom0);
private extern(C) void  qtd_QPrintPreviewWidget_setVisible_bool(void* __this_nativeId,
 bool visible0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QPrintPreviewWidget_initCallBacks(void* virtuals);

extern(C) void static_init_QPrintPreviewWidget() {
    qtd_QPrintPreviewWidget_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QPrintPreviewWidget_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QPrintPreviewWidget) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QPrintPreviewWidget_paintRequested_handle(void* dId, void** args) {
        auto d_object = cast(QPrintPreviewWidget) dId;
        scope printer0 = new QPrinter(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.paintRequested_emit(printer0);
}*/
/*private extern(C) void qtd_QPrintPreviewWidget_previewChanged_handle(void* dId, void** args) {
        auto d_object = cast(QPrintPreviewWidget) dId;
        //d_object.previewChanged_emit();
}*/

extern(C) QMetaObjectNative* qtd_QPrintPreviewWidget_staticMetaObject();

extern(C) void qtd_QPrintPreviewWidget_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QPrintPreviewWidget_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
