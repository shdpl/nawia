module qt.gui.QPageSetupDialog;

public import qt.gui.QPageSetupDialog_aux;
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
public import qt.gui.QAbstractPageSetupDialog;
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


public class QPageSetupDialog : QAbstractPageSetupDialog
{
    public enum PageSetupDialogOption {
        None = 0,
        DontUseSheet = 1,
        OwnsPrinter = -2147483648
    }

    alias PageSetupDialogOption.None None;
    alias PageSetupDialogOption.DontUseSheet DontUseSheet;
    alias PageSetupDialogOption.OwnsPrinter OwnsPrinter;


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
        void* ret = qtd_QPageSetupDialog_QPageSetupDialog_QPrinter_QWidget(cast(void*) this, printer is null ? null : printer.qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QWidget parent_ = null) {
        void* ret = qtd_QPageSetupDialog_QPageSetupDialog_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addEnabledOption(QPageSetupDialog.PageSetupDialogOption option) {
        qtd_QPageSetupDialog_addEnabledOption_PageSetupDialogOption(qtdNativeId, option);
    }

    public final int enabledOptions() const {
        return qtd_QPageSetupDialog_enabledOptions_const(qtdNativeId);
    }

    public final bool isOptionEnabled(QPageSetupDialog.PageSetupDialogOption option) const {
        return qtd_QPageSetupDialog_isOptionEnabled_PageSetupDialogOption_const(qtdNativeId, option);
    }

    public final void open() {
        qtd_QPageSetupDialog_open(qtdNativeId);
    }

    public final int options() const {
        return qtd_QPageSetupDialog_options_const(qtdNativeId);
    }

    public final void setEnabledOptions(int options) {
        qtd_QPageSetupDialog_setEnabledOptions_PageSetupDialogOptions(qtdNativeId, options);
    }

    public final void setOption(QPageSetupDialog.PageSetupDialogOption option, bool on = true) {
        qtd_QPageSetupDialog_setOption_PageSetupDialogOption_bool(qtdNativeId, option, on);
    }

    public final void setOptions(int options) {
        qtd_QPageSetupDialog_setOptions_PageSetupDialogOptions(qtdNativeId, options);
    }

    public final bool testOption(QPageSetupDialog.PageSetupDialogOption option) const {
        return qtd_QPageSetupDialog_testOption_PageSetupDialogOption_const(qtdNativeId, option);
    }

    public int exec() {
        return qtd_QPageSetupDialog_exec(qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QPageSetupDialog_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QPageSetupDialog);
    }

    static QPageSetupDialog __getObject(void* nativeId) {
        return static_cast!(QPageSetupDialog)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QPageSetupDialog_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QPageSetupDialog_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QPageSetupDialog(nativeId, initFlags);
        QPageSetupDialog.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QPageSetupDialog;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPageSetupDialog_QPageSetupDialog_QPrinter_QWidget(void *d_ptr,
 void* printer0,
 void* parent1);
private extern(C) void* qtd_QPageSetupDialog_QPageSetupDialog_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QPageSetupDialog_addEnabledOption_PageSetupDialogOption(void* __this_nativeId,
 int option0);
private extern(C) int  qtd_QPageSetupDialog_enabledOptions_const(void* __this_nativeId);
private extern(C) bool  qtd_QPageSetupDialog_isOptionEnabled_PageSetupDialogOption_const(void* __this_nativeId,
 int option0);
private extern(C) void  qtd_QPageSetupDialog_open(void* __this_nativeId);
private extern(C) int  qtd_QPageSetupDialog_options_const(void* __this_nativeId);
private extern(C) void  qtd_QPageSetupDialog_setEnabledOptions_PageSetupDialogOptions(void* __this_nativeId,
 int options0);
private extern(C) void  qtd_QPageSetupDialog_setOption_PageSetupDialogOption_bool(void* __this_nativeId,
 int option0,
 bool on1);
private extern(C) void  qtd_QPageSetupDialog_setOptions_PageSetupDialogOptions(void* __this_nativeId,
 int options0);
private extern(C) bool  qtd_QPageSetupDialog_testOption_PageSetupDialogOption_const(void* __this_nativeId,
 int option0);
private extern(C) int  qtd_QPageSetupDialog_exec(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern int function(void *dId) qtd_QPageSetupDialog_exec_dispatch; }
extern(C) int qtd_export_QPageSetupDialog_exec_dispatch(void *dId){
    auto d_object = cast(QPageSetupDialog) dId;
    auto return_value = d_object.exec();
    return return_value;
}

private extern (C) void qtd_QPageSetupDialog_initCallBacks(void* virtuals);

extern(C) void static_init_QPageSetupDialog() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QPageSetupDialog_exec_dispatch;
    qtd_QPageSetupDialog_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QPageSetupDialog_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QPageSetupDialog) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QPageSetupDialog_accepted_handle(void* dId, void** args) {
        auto d_object = cast(QPageSetupDialog) dId;
        //d_object.accepted_emit();
}*/
/*private extern(C) void qtd_QPageSetupDialog_finished_handle(void* dId, void** args) {
        auto d_object = cast(QPageSetupDialog) dId;
        auto result0 = *(cast(int*)args[1]);
        //d_object.finished_emit(result0);
}*/
/*private extern(C) void qtd_QPageSetupDialog_rejected_handle(void* dId, void** args) {
        auto d_object = cast(QPageSetupDialog) dId;
        //d_object.rejected_emit();
}*/

extern(C) QMetaObjectNative* qtd_QPageSetupDialog_staticMetaObject();

extern(C) void qtd_QPageSetupDialog_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QPageSetupDialog_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
