module qt.gui.QAbstractPrintDialog;

public import qt.gui.QAbstractPrintDialog_aux;
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
public import qt.gui.QPaintDevice;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QPaintEngine;
public import qt.gui.QWheelEvent;
public import qt.core.QList;
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
public import qt.gui.QDialog;
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


public abstract class QAbstractPrintDialog : QDialog
{
    public enum PrintRange {
        AllPages = 0,
        Selection = 1,
        PageRange = 2,
        CurrentPage = 3
    }

    alias PrintRange.AllPages AllPages;
    alias PrintRange.Selection Selection;
    alias PrintRange.PageRange PageRange;
    alias PrintRange.CurrentPage CurrentPage;

    public enum PrintDialogOption {
        None = 0,
        PrintToFile = 1,
        PrintSelection = 2,
        PrintPageRange = 4,
        PrintShowPageSize = 8,
        PrintCollateCopies = 16,
        DontUseSheet = 32,
        PrintCurrentPage = 64
    }

    alias PrintDialogOption.None None;
    alias PrintDialogOption.PrintToFile PrintToFile;
    alias PrintDialogOption.PrintSelection PrintSelection;
    alias PrintDialogOption.PrintPageRange PrintPageRange;
    alias PrintDialogOption.PrintShowPageSize PrintShowPageSize;
    alias PrintDialogOption.PrintCollateCopies PrintCollateCopies;
    alias PrintDialogOption.DontUseSheet DontUseSheet;
    alias PrintDialogOption.PrintCurrentPage PrintCurrentPage;


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

    public this(QPrinter printer, QWidget parent_ = null) {
        void* ret = qtd_QAbstractPrintDialog_QAbstractPrintDialog_QPrinter_QWidget(cast(void*) this, printer is null ? null : printer.qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addEnabledOption(QAbstractPrintDialog.PrintDialogOption option) {
        qtd_QAbstractPrintDialog_addEnabledOption_PrintDialogOption(qtdNativeId, option);
    }

    public final int enabledOptions() const {
        return qtd_QAbstractPrintDialog_enabledOptions_const(qtdNativeId);
    }

    public final int fromPage() const {
        return qtd_QAbstractPrintDialog_fromPage_const(qtdNativeId);
    }

    public final bool isOptionEnabled(QAbstractPrintDialog.PrintDialogOption option) const {
        return qtd_QAbstractPrintDialog_isOptionEnabled_PrintDialogOption_const(qtdNativeId, option);
    }

    public final int maxPage() const {
        return qtd_QAbstractPrintDialog_maxPage_const(qtdNativeId);
    }

    public final int minPage() const {
        return qtd_QAbstractPrintDialog_minPage_const(qtdNativeId);
    }

    public final QAbstractPrintDialog.PrintRange printRange() const {
        return cast(QAbstractPrintDialog.PrintRange) qtd_QAbstractPrintDialog_printRange_const(qtdNativeId);
    }

    public final QPrinter printer() const {
        void* ret = qtd_QAbstractPrintDialog_printer_const(qtdNativeId);
        QPrinter __d_return_value = qtd_QPrinter_from_ptr(ret);

        return __d_return_value;
    }

    public final void setEnabledOptions(int options) {
        qtd_QAbstractPrintDialog_setEnabledOptions_PrintDialogOptions(qtdNativeId, options);
    }

    public final void setFromTo(int fromPage, int toPage) {
        qtd_QAbstractPrintDialog_setFromTo_int_int(qtdNativeId, fromPage, toPage);
    }

    public final void setMinMax(int min, int max) {
        qtd_QAbstractPrintDialog_setMinMax_int_int(qtdNativeId, min, max);
    }

    public final void setOptionTabs(QList!(QWidget) tabs) {
        qtd_QAbstractPrintDialog_setOptionTabs_QList(qtdNativeId, &tabs);
    }

    public final void setPrintRange(QAbstractPrintDialog.PrintRange range) {
        qtd_QAbstractPrintDialog_setPrintRange_PrintRange(qtdNativeId, range);
    }

    public final int toPage() const {
        return qtd_QAbstractPrintDialog_toPage_const(qtdNativeId);
    }

    public abstract int exec();
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QAbstractPrintDialog_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QAbstractPrintDialog);
    }

    static QAbstractPrintDialog __getObject(void* nativeId) {
        return static_cast!(QAbstractPrintDialog)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QAbstractPrintDialog_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QAbstractPrintDialog_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QAbstractPrintDialog_ConcreteWrapper(nativeId, initFlags);
        QAbstractPrintDialog.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QAbstractPrintDialog;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QAbstractPrintDialog_ConcreteWrapper : QAbstractPrintDialog {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public int exec() {
            return qtd_QAbstractPrintDialog_exec(qtdNativeId);
        }
    }


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAbstractPrintDialog_QAbstractPrintDialog_QPrinter_QWidget(void *d_ptr,
 void* printer0,
 void* parent1);
private extern(C) void  qtd_QAbstractPrintDialog_addEnabledOption_PrintDialogOption(void* __this_nativeId,
 int option0);
private extern(C) int  qtd_QAbstractPrintDialog_enabledOptions_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractPrintDialog_fromPage_const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractPrintDialog_isOptionEnabled_PrintDialogOption_const(void* __this_nativeId,
 int option0);
private extern(C) int  qtd_QAbstractPrintDialog_maxPage_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractPrintDialog_minPage_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractPrintDialog_printRange_const(void* __this_nativeId);
private extern(C) void*  qtd_QAbstractPrintDialog_printer_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractPrintDialog_setEnabledOptions_PrintDialogOptions(void* __this_nativeId,
 int options0);
private extern(C) void  qtd_QAbstractPrintDialog_setFromTo_int_int(void* __this_nativeId,
 int fromPage0,
 int toPage1);
private extern(C) void  qtd_QAbstractPrintDialog_setMinMax_int_int(void* __this_nativeId,
 int min0,
 int max1);
private extern(C) void  qtd_QAbstractPrintDialog_setOptionTabs_QList(void* __this_nativeId,
 void* tabs0);
private extern(C) void  qtd_QAbstractPrintDialog_setPrintRange_PrintRange(void* __this_nativeId,
 int range0);
private extern(C) int  qtd_QAbstractPrintDialog_toPage_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractPrintDialog_exec(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern int function(void *dId) qtd_QAbstractPrintDialog_exec_dispatch; }
extern(C) int qtd_export_QAbstractPrintDialog_exec_dispatch(void *dId){
    auto d_object = cast(QAbstractPrintDialog) dId;
    auto return_value = d_object.exec();
    return return_value;
}

private extern (C) void qtd_QAbstractPrintDialog_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractPrintDialog() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractPrintDialog_exec_dispatch;
    qtd_QAbstractPrintDialog_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QAbstractPrintDialog_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractPrintDialog) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QAbstractPrintDialog_accepted_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractPrintDialog) dId;
        //d_object.accepted_emit();
}*/
/*private extern(C) void qtd_QAbstractPrintDialog_finished_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractPrintDialog) dId;
        auto result0 = *(cast(int*)args[1]);
        //d_object.finished_emit(result0);
}*/
/*private extern(C) void qtd_QAbstractPrintDialog_rejected_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractPrintDialog) dId;
        //d_object.rejected_emit();
}*/

extern(C) QMetaObjectNative* qtd_QAbstractPrintDialog_staticMetaObject();

extern(C) void qtd_QAbstractPrintDialog_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QAbstractPrintDialog_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
