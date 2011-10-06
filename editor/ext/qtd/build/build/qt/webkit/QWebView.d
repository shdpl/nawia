module qt.webkit.QWebView;

public import qt.webkit.QWebView_aux;
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
private import qt.webkit.ArrayOps2;
// automatic imports-------------
public import qt.gui.QPainter;
public import qt.core.Qt;
public import qt.network.QNetworkAccessManager;
public import qt.webkit.QWebPage;
public import qt.gui.QPaintDevice;
public import qt.core.QUrl;
public import qt.gui.QDropEvent;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QIcon;
public import qt.gui.QKeyEvent;
public import qt.core.QObject;
public import qt.gui.QResizeEvent;
public import qt.core.QByteArray;
public import qt.gui.QPaintEngine;
public import qt.core.QEvent;
public import qt.gui.QPrinter;
public import qt.gui.QActionEvent;
public import qt.gui.QWheelEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QAction;
public import qt.gui.QCloseEvent;
public import qt.network.QNetworkRequest;
public import qt.gui.QMouseEvent;
public import qt.gui.QTabletEvent;
public import qt.webkit.QWebHistory;
public import qt.gui.QInputMethodEvent;
public import qt.webkit.QWebSettings;
public import qt.core.QSize;
public import qt.webkit.QWebPage;
public import qt.gui.QContextMenuEvent;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.gui.QMoveEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QWidget;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QDragLeaveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QWebView : QWidget
{

    private static const string[] __signalSignatures = [
            "iconChanged()", 
            "linkClicked(QUrl)", 
            "loadFinished(bool)", 
            "loadProgress(int)", 
            "loadStarted()", 
            "selectionChanged()", 
            "statusBarMessage(QString)", 
            "titleChanged(QString)", 
            "urlChanged(QUrl)"    ];

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

    protected final void iconChanged() {
        qtd_QWebView_iconChanged(qtdNativeId);
    }

    protected final void linkClicked(const(QUrl) arg__1) {
        qtd_QWebView_linkClicked_QUrl(qtdNativeId, arg__1 is null ? null : (cast(QUrl)arg__1).qtdNativeId);
    }

    protected final void loadFinished(bool arg__1) {
        qtd_QWebView_loadFinished_bool(qtdNativeId, arg__1);
    }

    protected final void loadProgress(int progress) {
        qtd_QWebView_loadProgress_int(qtdNativeId, progress);
    }

    protected final void loadStarted() {
        qtd_QWebView_loadStarted(qtdNativeId);
    }

    protected final void selectionChanged() {
        qtd_QWebView_selectionChanged(qtdNativeId);
    }

    protected final void statusBarMessage(string text) {
        qtd_QWebView_statusBarMessage_string(qtdNativeId, text);
    }

    protected final void titleChanged(string title) {
        qtd_QWebView_titleChanged_string(qtdNativeId, title);
    }

    protected final void urlChanged(const(QUrl) arg__1) {
        qtd_QWebView_urlChanged_QUrl(qtdNativeId, arg__1 is null ? null : (cast(QUrl)arg__1).qtdNativeId);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QWebView_QWebView_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void back() {
        qtd_QWebView_back(qtdNativeId);
    }

    public final bool findText(string subString, int options = 0) {
        return qtd_QWebView_findText_string_FindFlags(qtdNativeId, subString, options);
    }

    public final void forward() {
        qtd_QWebView_forward(qtdNativeId);
    }

    public final QWebHistory history() const {
        void* ret = qtd_QWebView_history_const(qtdNativeId);
        QWebHistory __d_return_value = qtd_QWebHistory_from_ptr(ret);

        return __d_return_value;
    }

    public final QIcon icon() const {
        void* ret = qtd_QWebView_icon_const(qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final bool isModified() const {
        return qtd_QWebView_isModified_const(qtdNativeId);
    }

    public final void load(const(QNetworkRequest) request, QNetworkAccessManager.Operation operation = QNetworkAccessManager.Operation.GetOperation, const(QByteArray) body_ = new QByteArray()) {
        qtd_QWebView_load_QNetworkRequest_Operation_QByteArray(qtdNativeId, request is null ? null : (cast(QNetworkRequest)request).qtdNativeId, operation, body_ is null ? null : (cast(QByteArray)body_).qtdNativeId);
    }

    public final void load(const(QUrl) url) {
        qtd_QWebView_load_QUrl(qtdNativeId, url is null ? null : (cast(QUrl)url).qtdNativeId);
    }

    public final QWebPage page() const {
        void *ret = qtd_QWebView_page_const(qtdNativeId);
        QWebPage __d_return_value = QWebPage.__getObject(ret);
        return __d_return_value;
    }

    public final QAction pageAction(QWebPage.WebAction action) const {
        void *ret = qtd_QWebView_pageAction_WebAction_const(qtdNativeId, action);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final void print(QPrinter arg__1) const {
        qtd_QWebView_print_QPrinter_const(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void reload() {
        qtd_QWebView_reload(qtdNativeId);
    }

    public final int renderHints() const {
        return qtd_QWebView_renderHints_const(qtdNativeId);
    }

    public final string selectedText() const {
        string res;
        qtd_QWebView_selectedText_const(qtdNativeId, &res);
        return res;
    }

    public final void setContent(const(QByteArray) data, string mimeType = "", const(QUrl) baseUrl = new QUrl()) {
        qtd_QWebView_setContent_QByteArray_string_QUrl(qtdNativeId, data is null ? null : (cast(QByteArray)data).qtdNativeId, mimeType, baseUrl is null ? null : (cast(QUrl)baseUrl).qtdNativeId);
    }

    public final void setHtml(string html, const(QUrl) baseUrl = new QUrl()) {
        qtd_QWebView_setHtml_string_QUrl(qtdNativeId, html, baseUrl is null ? null : (cast(QUrl)baseUrl).qtdNativeId);
    }

    public final void setPage(QWebPage page) {
        if (page !is null) {
            page.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QWebView_setPage_QWebPage(qtdNativeId, page is null ? null : page.qtdNativeId);
    }

    public final void setRenderHint(QPainter.RenderHint hint, bool enabled = true) {
        qtd_QWebView_setRenderHint_RenderHint_bool(qtdNativeId, hint, enabled);
    }

    public final void setRenderHints(int hints) {
        qtd_QWebView_setRenderHints_RenderHints(qtdNativeId, hints);
    }

    public final void setTextSizeMultiplier(double factor) {
        qtd_QWebView_setTextSizeMultiplier_double(qtdNativeId, factor);
    }

    public final void setUrl(const(QUrl) url) {
        qtd_QWebView_setUrl_QUrl(qtdNativeId, url is null ? null : (cast(QUrl)url).qtdNativeId);
    }

    public final void setZoomFactor(double factor) {
        qtd_QWebView_setZoomFactor_double(qtdNativeId, factor);
    }

    public final QWebSettings settings() const {
        void* ret = qtd_QWebView_settings_const(qtdNativeId);
        QWebSettings __d_return_value = qtd_QWebSettings_from_ptr(ret);

        return __d_return_value;
    }

    public final void stop() {
        qtd_QWebView_stop(qtdNativeId);
    }

    public final double textSizeMultiplier() const {
        return qtd_QWebView_textSizeMultiplier_const(qtdNativeId);
    }

    public final string title() const {
        string res;
        qtd_QWebView_title_const(qtdNativeId, &res);
        return res;
    }

    public final void triggerPageAction(QWebPage.WebAction action, bool checked = false) {
        qtd_QWebView_triggerPageAction_WebAction_bool(qtdNativeId, action, checked);
    }

    public final QUrl url() const {
        void* ret = qtd_QWebView_url_const(qtdNativeId);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }

    public final double zoomFactor() const {
        return qtd_QWebView_zoomFactor_const(qtdNativeId);
    }

    protected void changeEvent(QEvent arg__1) {
        qtd_QWebView_changeEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void contextMenuEvent(QContextMenuEvent arg__1) {
        qtd_QWebView_contextMenuEvent_QContextMenuEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected QWebView createWindow(QWebPage.WebWindowType type) {
        void *ret = qtd_QWebView_createWindow_WebWindowType(qtdNativeId, type);
        QWebView __d_return_value = QWebView.__getObject(ret);
        return __d_return_value;
    }

    protected void dragEnterEvent(QDragEnterEvent arg__1) {
        qtd_QWebView_dragEnterEvent_QDragEnterEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void dragLeaveEvent(QDragLeaveEvent arg__1) {
        qtd_QWebView_dragLeaveEvent_QDragLeaveEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void dragMoveEvent(QDragMoveEvent arg__1) {
        qtd_QWebView_dragMoveEvent_QDragMoveEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void dropEvent(QDropEvent arg__1) {
        qtd_QWebView_dropEvent_QDropEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool event(QEvent arg__1) {
        return qtd_QWebView_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void focusInEvent(QFocusEvent arg__1) {
        qtd_QWebView_focusInEvent_QFocusEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected bool focusNextPrevChild(bool next) {
        return qtd_QWebView_focusNextPrevChild_bool(qtdNativeId, next);
    }

    protected void focusOutEvent(QFocusEvent arg__1) {
        qtd_QWebView_focusOutEvent_QFocusEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void inputMethodEvent(QInputMethodEvent arg__1) {
        qtd_QWebView_inputMethodEvent_QInputMethodEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QVariant inputMethodQuery(Qt.InputMethodQuery property) const {
        void* ret = qtd_QWebView_inputMethodQuery_InputMethodQuery_const(qtdNativeId, property);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    protected void keyPressEvent(QKeyEvent arg__1) {
        qtd_QWebView_keyPressEvent_QKeyEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void keyReleaseEvent(QKeyEvent arg__1) {
        qtd_QWebView_keyReleaseEvent_QKeyEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mouseDoubleClickEvent(QMouseEvent arg__1) {
        qtd_QWebView_mouseDoubleClickEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mouseMoveEvent(QMouseEvent arg__1) {
        qtd_QWebView_mouseMoveEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent arg__1) {
        qtd_QWebView_mousePressEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent arg__1) {
        qtd_QWebView_mouseReleaseEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QWebView_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent arg__1) {
        qtd_QWebView_resizeEvent_QResizeEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QWebView_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void wheelEvent(QWheelEvent arg__1) {
        qtd_QWebView_wheelEvent_QWheelEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "back()", 
            "forward()", 
            "print(QPrinter*)const", 
            "reload()", 
            "stop()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QWebView_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QWebView);
    }

    static QWebView __getObject(void* nativeId) {
        return static_cast!(QWebView)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QWebView_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QWebView_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QWebView(nativeId, initFlags);
        QWebView.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("iconChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(const(QUrl))("linkClicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(bool)("loadFinished"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(int)("loadProgress"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!()("loadStarted"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!()("selectionChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[6]);
        mo.addMethod(new QMetaSignal(signature!(string)("statusBarMessage"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[7]);
        mo.addMethod(new QMetaSignal(signature!(string)("titleChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[8]);
        mo.addMethod(new QMetaSignal(signature!(const(QUrl))("urlChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("back"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("forward"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(QPrinter)("print"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!()("reload"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!()("stop"), index));

    }

    public alias void __isQtType_QWebView;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QWebView_iconChanged(void* __this_nativeId);
private extern(C) void  qtd_QWebView_linkClicked_QUrl(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWebView_loadFinished_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QWebView_loadProgress_int(void* __this_nativeId,
 int progress0);
private extern(C) void  qtd_QWebView_loadStarted(void* __this_nativeId);
private extern(C) void  qtd_QWebView_selectionChanged(void* __this_nativeId);
private extern(C) void  qtd_QWebView_statusBarMessage_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QWebView_titleChanged_string(void* __this_nativeId,
 string title0);
private extern(C) void  qtd_QWebView_urlChanged_QUrl(void* __this_nativeId,
 void* arg__1);

// C wrappers
private extern(C) void* qtd_QWebView_QWebView_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QWebView_back(void* __this_nativeId);
private extern(C) bool  qtd_QWebView_findText_string_FindFlags(void* __this_nativeId,
 string subString0,
 int options1);
private extern(C) void  qtd_QWebView_forward(void* __this_nativeId);
private extern(C) void*  qtd_QWebView_history_const(void* __this_nativeId);
private extern(C) void*  qtd_QWebView_icon_const(void* __this_nativeId);
private extern(C) bool  qtd_QWebView_isModified_const(void* __this_nativeId);
private extern(C) void  qtd_QWebView_load_QNetworkRequest_Operation_QByteArray(void* __this_nativeId,
 void* request0,
 int operation1,
 void* body2);
private extern(C) void  qtd_QWebView_load_QUrl(void* __this_nativeId,
 void* url0);
private extern(C) void*  qtd_QWebView_page_const(void* __this_nativeId);
private extern(C) void*  qtd_QWebView_pageAction_WebAction_const(void* __this_nativeId,
 int action0);
private extern(C) void  qtd_QWebView_print_QPrinter_const(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWebView_reload(void* __this_nativeId);
private extern(C) int  qtd_QWebView_renderHints_const(void* __this_nativeId);
private extern(C) void  qtd_QWebView_selectedText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QWebView_setContent_QByteArray_string_QUrl(void* __this_nativeId,
 void* data0,
 string mimeType1,
 void* baseUrl2);
private extern(C) void  qtd_QWebView_setHtml_string_QUrl(void* __this_nativeId,
 string html0,
 void* baseUrl1);
private extern(C) void  qtd_QWebView_setPage_QWebPage(void* __this_nativeId,
 void* page0);
private extern(C) void  qtd_QWebView_setRenderHint_RenderHint_bool(void* __this_nativeId,
 int hint0,
 bool enabled1);
private extern(C) void  qtd_QWebView_setRenderHints_RenderHints(void* __this_nativeId,
 int hints0);
private extern(C) void  qtd_QWebView_setTextSizeMultiplier_double(void* __this_nativeId,
 double factor0);
private extern(C) void  qtd_QWebView_setUrl_QUrl(void* __this_nativeId,
 void* url0);
private extern(C) void  qtd_QWebView_setZoomFactor_double(void* __this_nativeId,
 double factor0);
private extern(C) void*  qtd_QWebView_settings_const(void* __this_nativeId);
private extern(C) void  qtd_QWebView_stop(void* __this_nativeId);
private extern(C) double  qtd_QWebView_textSizeMultiplier_const(void* __this_nativeId);
private extern(C) void  qtd_QWebView_title_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QWebView_triggerPageAction_WebAction_bool(void* __this_nativeId,
 int action0,
 bool checked1);
private extern(C) void*  qtd_QWebView_url_const(void* __this_nativeId);
private extern(C) double  qtd_QWebView_zoomFactor_const(void* __this_nativeId);
private extern(C) void  qtd_QWebView_changeEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWebView_contextMenuEvent_QContextMenuEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QWebView_createWindow_WebWindowType(void* __this_nativeId,
 int type0);
private extern(C) void  qtd_QWebView_dragEnterEvent_QDragEnterEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWebView_dragLeaveEvent_QDragLeaveEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWebView_dragMoveEvent_QDragMoveEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWebView_dropEvent_QDropEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QWebView_event_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWebView_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QWebView_focusNextPrevChild_bool(void* __this_nativeId,
 bool next0);
private extern(C) void  qtd_QWebView_focusOutEvent_QFocusEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWebView_inputMethodEvent_QInputMethodEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QWebView_inputMethodQuery_InputMethodQuery_const(void* __this_nativeId,
 int property0);
private extern(C) void  qtd_QWebView_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWebView_keyReleaseEvent_QKeyEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWebView_mouseDoubleClickEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWebView_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWebView_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWebView_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWebView_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWebView_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWebView_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QWebView_wheelEvent_QWheelEvent(void* __this_nativeId,
 void* arg__1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId, int type0) qtd_QWebView_createWindow_WebWindowType_dispatch; }
extern(C) void* qtd_export_QWebView_createWindow_WebWindowType_dispatch(void *dId, int type0){
    auto d_object = cast(QWebView) dId;
    auto type0_enum = cast(QWebPage.WebWindowType) type0;
    QWebView ret_value = d_object.createWindow(type0_enum);
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QWebView_initCallBacks(void* virtuals);

extern(C) void static_init_QWebView() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QWebView_createWindow_WebWindowType_dispatch;
    qtd_QWebView_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QWebView_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QWebView) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QWebView_iconChanged_handle(void* dId, void** args) {
        auto d_object = cast(QWebView) dId;
        //d_object.iconChanged_emit();
}*/
/*private extern(C) void qtd_QWebView_linkClicked_handle(void* dId, void** args) {
        auto d_object = cast(QWebView) dId;
        scope arg__1 = new QUrl(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.linkClicked_emit(arg__1);
}*/
/*private extern(C) void qtd_QWebView_loadFinished_handle(void* dId, void** args) {
        auto d_object = cast(QWebView) dId;
        auto arg__1 = *(cast(bool*)args[1]);
        //d_object.loadFinished_emit(arg__1);
}*/
/*private extern(C) void qtd_QWebView_loadProgress_handle(void* dId, void** args) {
        auto d_object = cast(QWebView) dId;
        auto progress0 = *(cast(int*)args[1]);
        //d_object.loadProgress_emit(progress0);
}*/
/*private extern(C) void qtd_QWebView_loadStarted_handle(void* dId, void** args) {
        auto d_object = cast(QWebView) dId;
        //d_object.loadStarted_emit();
}*/
/*private extern(C) void qtd_QWebView_selectionChanged_handle(void* dId, void** args) {
        auto d_object = cast(QWebView) dId;
        //d_object.selectionChanged_emit();
}*/
/*private extern(C) void qtd_QWebView_statusBarMessage_handle(void* dId, void** args) {
        auto d_object = cast(QWebView) dId;
        auto text0_ptr = args[1];
        string text0 = QStringUtil.toNativeString(text0_ptr);
        //d_object.statusBarMessage_emit(text0);
}*/
/*private extern(C) void qtd_QWebView_titleChanged_handle(void* dId, void** args) {
        auto d_object = cast(QWebView) dId;
        auto title0_ptr = args[1];
        string title0 = QStringUtil.toNativeString(title0_ptr);
        //d_object.titleChanged_emit(title0);
}*/
/*private extern(C) void qtd_QWebView_urlChanged_handle(void* dId, void** args) {
        auto d_object = cast(QWebView) dId;
        scope arg__1 = new QUrl(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.urlChanged_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QWebView_staticMetaObject();

extern(C) void qtd_QWebView_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QWebView_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
