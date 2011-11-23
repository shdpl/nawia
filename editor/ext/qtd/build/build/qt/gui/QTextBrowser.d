module qt.gui.QTextBrowser;

public import qt.gui.QTextBrowser_aux;
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
public import qt.gui.QActionEvent;
public import qt.gui.QDropEvent;
public import qt.gui.QTabletEvent;
public import qt.core.QMimeData;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
public import qt.core.QUrl;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QKeyEvent;
public import qt.gui.QDragMoveEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.gui.QTextCharFormat;
public import qt.gui.QTextEdit;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.core.QObject;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextBrowser : QTextEdit
{

    private static const string[] __signalSignatures = [
            "anchorClicked(QUrl)", 
            "backwardAvailable(bool)", 
            "forwardAvailable(bool)", 
            "highlighted(QString)", 
            "highlighted(QUrl)", 
            "historyChanged()", 
            "sourceChanged(QUrl)"    ];

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

    protected final void anchorClicked(const(QUrl) arg__1) {
        qtd_QTextBrowser_anchorClicked_QUrl(qtdNativeId, arg__1 is null ? null : (cast(QUrl)arg__1).qtdNativeId);
    }

    protected final void backwardAvailable(bool arg__1) {
        qtd_QTextBrowser_backwardAvailable_bool(qtdNativeId, arg__1);
    }

    protected final void forwardAvailable(bool arg__1) {
        qtd_QTextBrowser_forwardAvailable_bool(qtdNativeId, arg__1);
    }

    protected final void highlighted(string arg__1) {
        qtd_QTextBrowser_highlighted_string(qtdNativeId, arg__1);
    }

    protected final void highlighted(const(QUrl) arg__1) {
        qtd_QTextBrowser_highlighted_QUrl(qtdNativeId, arg__1 is null ? null : (cast(QUrl)arg__1).qtdNativeId);
    }

    protected final void historyChanged() {
        qtd_QTextBrowser_historyChanged(qtdNativeId);
    }

    protected final void sourceChanged(const(QUrl) arg__1) {
        qtd_QTextBrowser_sourceChanged_QUrl(qtdNativeId, arg__1 is null ? null : (cast(QUrl)arg__1).qtdNativeId);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QTextBrowser_QTextBrowser_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int backwardHistoryCount() const {
        return qtd_QTextBrowser_backwardHistoryCount_const(qtdNativeId);
    }

    public final void clearHistory() {
        qtd_QTextBrowser_clearHistory(qtdNativeId);
    }

    public final int forwardHistoryCount() const {
        return qtd_QTextBrowser_forwardHistoryCount_const(qtdNativeId);
    }

    public final string historyTitle(int arg__1) const {
        string res;
        qtd_QTextBrowser_historyTitle_int_const(qtdNativeId, &res, arg__1);
        return res;
    }

    public final QUrl historyUrl(int arg__1) const {
        void* ret = qtd_QTextBrowser_historyUrl_int_const(qtdNativeId, arg__1);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }

    public final bool isBackwardAvailable() const {
        return qtd_QTextBrowser_isBackwardAvailable_const(qtdNativeId);
    }

    public final bool isForwardAvailable() const {
        return qtd_QTextBrowser_isForwardAvailable_const(qtdNativeId);
    }

    public final bool openExternalLinks() const {
        return qtd_QTextBrowser_openExternalLinks_const(qtdNativeId);
    }

    public final bool openLinks() const {
        return qtd_QTextBrowser_openLinks_const(qtdNativeId);
    }

    public final QList!(string) searchPaths() const {
        auto res = QList!(string).opCall();
        qtd_QTextBrowser_searchPaths_const(qtdNativeId, &res);
        return res;
    }

    public final void setOpenExternalLinks(bool open) {
        qtd_QTextBrowser_setOpenExternalLinks_bool(qtdNativeId, open);
    }

    public final void setOpenLinks(bool open) {
        qtd_QTextBrowser_setOpenLinks_bool(qtdNativeId, open);
    }

    public final void setSearchPaths(QList!(string) paths) {
        qtd_QTextBrowser_setSearchPaths_QList(qtdNativeId, &paths);
    }

    public final QUrl source() const {
        void* ret = qtd_QTextBrowser_source_const(qtdNativeId);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }

    public void backward() {
        qtd_QTextBrowser_backward(qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QTextBrowser_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected bool focusNextPrevChild(bool next) {
        return qtd_QTextBrowser_focusNextPrevChild_bool(qtdNativeId, next);
    }

    protected void focusOutEvent(QFocusEvent ev) {
        qtd_QTextBrowser_focusOutEvent_QFocusEvent(qtdNativeId, ev is null ? null : ev.qtdNativeId);
    }

    public void forward() {
        qtd_QTextBrowser_forward(qtdNativeId);
    }

    public void home() {
        qtd_QTextBrowser_home(qtdNativeId);
    }

    protected void keyPressEvent(QKeyEvent ev) {
        qtd_QTextBrowser_keyPressEvent_QKeyEvent(qtdNativeId, ev is null ? null : ev.qtdNativeId);
    }

    public QVariant loadResource(int type, const(QUrl) name) {
        void* ret = qtd_QTextBrowser_loadResource_int_QUrl(qtdNativeId, type, name is null ? null : (cast(QUrl)name).qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    protected void mouseMoveEvent(QMouseEvent ev) {
        qtd_QTextBrowser_mouseMoveEvent_QMouseEvent(qtdNativeId, ev is null ? null : ev.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent ev) {
        qtd_QTextBrowser_mousePressEvent_QMouseEvent(qtdNativeId, ev is null ? null : ev.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent ev) {
        qtd_QTextBrowser_mouseReleaseEvent_QMouseEvent(qtdNativeId, ev is null ? null : ev.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent e) {
        qtd_QTextBrowser_paintEvent_QPaintEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public void reload() {
        qtd_QTextBrowser_reload(qtdNativeId);
    }

    public void setSource(const(QUrl) name) {
        qtd_QTextBrowser_setSource_QUrl(qtdNativeId, name is null ? null : (cast(QUrl)name).qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "backward()", 
            "forward()", 
            "home()", 
            "reload()", 
            "setSource(QUrl)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTextBrowser_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTextBrowser);
    }

    static QTextBrowser __getObject(void* nativeId) {
        return static_cast!(QTextBrowser)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTextBrowser_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTextBrowser_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTextBrowser(nativeId, initFlags);
        QTextBrowser.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(const(QUrl))("anchorClicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(bool)("backwardAvailable"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(bool)("forwardAvailable"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(string)("highlighted"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(const(QUrl))("highlighted"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!()("historyChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[6]);
        mo.addMethod(new QMetaSignal(signature!(const(QUrl))("sourceChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("backward"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("forward"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("home"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!()("reload"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(const(QUrl))("setSource"), index));

    }

    public alias void __isQtType_QTextBrowser;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QTextBrowser_anchorClicked_QUrl(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTextBrowser_backwardAvailable_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QTextBrowser_forwardAvailable_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QTextBrowser_highlighted_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QTextBrowser_highlighted_QUrl(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTextBrowser_historyChanged(void* __this_nativeId);
private extern(C) void  qtd_QTextBrowser_sourceChanged_QUrl(void* __this_nativeId,
 void* arg__1);

// C wrappers
private extern(C) void* qtd_QTextBrowser_QTextBrowser_QWidget(void *d_ptr,
 void* parent0);
private extern(C) int  qtd_QTextBrowser_backwardHistoryCount_const(void* __this_nativeId);
private extern(C) void  qtd_QTextBrowser_clearHistory(void* __this_nativeId);
private extern(C) int  qtd_QTextBrowser_forwardHistoryCount_const(void* __this_nativeId);
private extern(C) void  qtd_QTextBrowser_historyTitle_int_const(void* __this_nativeId,
 void* __d_return_value,
 int arg__1);
private extern(C) void*  qtd_QTextBrowser_historyUrl_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) bool  qtd_QTextBrowser_isBackwardAvailable_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextBrowser_isForwardAvailable_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextBrowser_openExternalLinks_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextBrowser_openLinks_const(void* __this_nativeId);
private extern(C) void  qtd_QTextBrowser_searchPaths_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QTextBrowser_setOpenExternalLinks_bool(void* __this_nativeId,
 bool open0);
private extern(C) void  qtd_QTextBrowser_setOpenLinks_bool(void* __this_nativeId,
 bool open0);
private extern(C) void  qtd_QTextBrowser_setSearchPaths_QList(void* __this_nativeId,
 void* paths0);
private extern(C) void*  qtd_QTextBrowser_source_const(void* __this_nativeId);
private extern(C) void  qtd_QTextBrowser_backward(void* __this_nativeId);
private extern(C) bool  qtd_QTextBrowser_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) bool  qtd_QTextBrowser_focusNextPrevChild_bool(void* __this_nativeId,
 bool next0);
private extern(C) void  qtd_QTextBrowser_focusOutEvent_QFocusEvent(void* __this_nativeId,
 void* ev0);
private extern(C) void  qtd_QTextBrowser_forward(void* __this_nativeId);
private extern(C) void  qtd_QTextBrowser_home(void* __this_nativeId);
private extern(C) void  qtd_QTextBrowser_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* ev0);
private extern(C) void*  qtd_QTextBrowser_loadResource_int_QUrl(void* __this_nativeId,
 int type0,
 void* name1);
private extern(C) void  qtd_QTextBrowser_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* ev0);
private extern(C) void  qtd_QTextBrowser_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* ev0);
private extern(C) void  qtd_QTextBrowser_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* ev0);
private extern(C) void  qtd_QTextBrowser_paintEvent_QPaintEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QTextBrowser_reload(void* __this_nativeId);
private extern(C) void  qtd_QTextBrowser_setSource_QUrl(void* __this_nativeId,
 void* name0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId) qtd_QTextBrowser_backward_dispatch; }
extern(C) void qtd_export_QTextBrowser_backward_dispatch(void *dId){
    auto d_object = cast(QTextBrowser) dId;
    d_object.backward();
}

extern(C){ extern void function(void *dId) qtd_QTextBrowser_forward_dispatch; }
extern(C) void qtd_export_QTextBrowser_forward_dispatch(void *dId){
    auto d_object = cast(QTextBrowser) dId;
    d_object.forward();
}

extern(C){ extern void function(void *dId) qtd_QTextBrowser_home_dispatch; }
extern(C) void qtd_export_QTextBrowser_home_dispatch(void *dId){
    auto d_object = cast(QTextBrowser) dId;
    d_object.home();
}

extern(C){ extern void function(void *dId) qtd_QTextBrowser_reload_dispatch; }
extern(C) void qtd_export_QTextBrowser_reload_dispatch(void *dId){
    auto d_object = cast(QTextBrowser) dId;
    d_object.reload();
}

extern(C){ extern void function(void *dId, void* name0) qtd_QTextBrowser_setSource_QUrl_dispatch; }
extern(C) void qtd_export_QTextBrowser_setSource_QUrl_dispatch(void *dId, void* name0){
    auto d_object = cast(QTextBrowser) dId;
    scope name0_d_ref = new QUrl(name0, QtdObjectInitFlags.onStack);
    d_object.setSource(name0_d_ref);
}

private extern (C) void qtd_QTextBrowser_initCallBacks(void* virtuals);

extern(C) void static_init_QTextBrowser() {
    void*[5] virt_arr;
    virt_arr[0] = &qtd_export_QTextBrowser_backward_dispatch;
    virt_arr[1] = &qtd_export_QTextBrowser_forward_dispatch;
    virt_arr[2] = &qtd_export_QTextBrowser_home_dispatch;
    virt_arr[3] = &qtd_export_QTextBrowser_reload_dispatch;
    virt_arr[4] = &qtd_export_QTextBrowser_setSource_QUrl_dispatch;
    qtd_QTextBrowser_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QTextBrowser_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QTextBrowser) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QTextBrowser_copyAvailable_handle(void* dId, void** args) {
        auto d_object = cast(QTextBrowser) dId;
        auto b0 = *(cast(bool*)args[1]);
        //d_object.copyAvailable_emit(b0);
}*/
/*private extern(C) void qtd_QTextBrowser_currentCharFormatChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTextBrowser) dId;
        scope format0 = new QTextCharFormat(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.currentCharFormatChanged_emit(format0);
}*/
/*private extern(C) void qtd_QTextBrowser_cursorPositionChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTextBrowser) dId;
        //d_object.cursorPositionChanged_emit();
}*/
/*private extern(C) void qtd_QTextBrowser_redoAvailable_handle(void* dId, void** args) {
        auto d_object = cast(QTextBrowser) dId;
        auto b0 = *(cast(bool*)args[1]);
        //d_object.redoAvailable_emit(b0);
}*/
/*private extern(C) void qtd_QTextBrowser_selectionChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTextBrowser) dId;
        //d_object.selectionChanged_emit();
}*/
/*private extern(C) void qtd_QTextBrowser_textChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTextBrowser) dId;
        //d_object.textChanged_emit();
}*/
/*private extern(C) void qtd_QTextBrowser_undoAvailable_handle(void* dId, void** args) {
        auto d_object = cast(QTextBrowser) dId;
        auto b0 = *(cast(bool*)args[1]);
        //d_object.undoAvailable_emit(b0);
}*/
/*private extern(C) void qtd_QTextBrowser_anchorClicked_handle(void* dId, void** args) {
        auto d_object = cast(QTextBrowser) dId;
        scope arg__1 = new QUrl(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.anchorClicked_emit(arg__1);
}*/
/*private extern(C) void qtd_QTextBrowser_backwardAvailable_handle(void* dId, void** args) {
        auto d_object = cast(QTextBrowser) dId;
        auto arg__1 = *(cast(bool*)args[1]);
        //d_object.backwardAvailable_emit(arg__1);
}*/
/*private extern(C) void qtd_QTextBrowser_forwardAvailable_handle(void* dId, void** args) {
        auto d_object = cast(QTextBrowser) dId;
        auto arg__1 = *(cast(bool*)args[1]);
        //d_object.forwardAvailable_emit(arg__1);
}*/
/*private extern(C) void qtd_QTextBrowser_highlighted_handle(void* dId, void** args) {
        auto d_object = cast(QTextBrowser) dId;
        auto arg__1_ptr = args[1];
        string arg__1 = QStringUtil.toNativeString(arg__1_ptr);
        //d_object.highlighted_emit(arg__1);
}*/
/*private extern(C) void qtd_QTextBrowser_highlighted_handle(void* dId, void** args) {
        auto d_object = cast(QTextBrowser) dId;
        scope arg__1 = new QUrl(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.highlighted_emit(arg__1);
}*/
/*private extern(C) void qtd_QTextBrowser_historyChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTextBrowser) dId;
        //d_object.historyChanged_emit();
}*/
/*private extern(C) void qtd_QTextBrowser_sourceChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTextBrowser) dId;
        scope arg__1 = new QUrl(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.sourceChanged_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QTextBrowser_staticMetaObject();

extern(C) void qtd_QTextBrowser_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTextBrowser_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
