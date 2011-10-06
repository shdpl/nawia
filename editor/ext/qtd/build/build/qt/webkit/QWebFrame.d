module qt.webkit.QWebFrame;

public import qt.webkit.QWebFrame_aux;
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
public import qt.core.Qt;
public import qt.network.QNetworkAccessManager;
public import qt.core.QList;
public import qt.core.QUrl;
public import qt.webkit.QWebHitTestResult;
public import qt.gui.QPainter;
public import qt.core.QRect;
public import qt.gui.QRegion;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.core.QEvent;
public import qt.gui.QPrinter;
public import qt.core.QSize;
public import qt.webkit.QWebPage;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.core.QTimerEvent;
public import qt.network.QNetworkRequest;
public import qt.core.QByteArray;
public import qt.gui.QIcon;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public final class QWebFrame : QObject
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

    public final void addToJavaScriptWindowObject(string name, QObject object) {
        qtd_QWebFrame_addToJavaScriptWindowObject_string_QObject(qtdNativeId, name, object is null ? null : object.qtdNativeId);
    }

    public final QUrl baseUrl() const {
        void* ret = qtd_QWebFrame_baseUrl_const(qtdNativeId);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }

    public final QList!(QWebFrame) childFrames() const {
        auto res = QList!(QWebFrame).opCall();
        qtd_QWebFrame_childFrames_const(qtdNativeId, &res);
        return res;
    }

    public final QSize contentsSize() const {
        QSize res;
        qtd_QWebFrame_contentsSize_const(qtdNativeId, &res);
        return res;
    }

    public final QVariant evaluateJavaScript(string scriptSource) {
        void* ret = qtd_QWebFrame_evaluateJavaScript_string(qtdNativeId, scriptSource);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final string frameName() const {
        string res;
        qtd_QWebFrame_frameName_const(qtdNativeId, &res);
        return res;
    }

    public final QRect geometry() const {
        QRect res;
        qtd_QWebFrame_geometry_const(qtdNativeId, &res);
        return res;
    }

    public final bool hasFocus() const {
        return qtd_QWebFrame_hasFocus_const(qtdNativeId);
    }

    public final QWebHitTestResult hitTestContent(const(QPoint) pos) const {
        void* ret = qtd_QWebFrame_hitTestContent_QPoint_const(qtdNativeId, pos);
        QWebHitTestResult __d_return_value = new QWebHitTestResult(ret);
        return __d_return_value;
    }

    public final QIcon icon() const {
        void* ret = qtd_QWebFrame_icon_const(qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final void load(const(QNetworkRequest) request, QNetworkAccessManager.Operation operation = QNetworkAccessManager.Operation.GetOperation, const(QByteArray) body_ = new QByteArray()) {
        qtd_QWebFrame_load_QNetworkRequest_Operation_QByteArray(qtdNativeId, request is null ? null : (cast(QNetworkRequest)request).qtdNativeId, operation, body_ is null ? null : (cast(QByteArray)body_).qtdNativeId);
    }

    public final void load(const(QUrl) url) {
        qtd_QWebFrame_load_QUrl(qtdNativeId, url is null ? null : (cast(QUrl)url).qtdNativeId);
    }

    public final QWebPage page() const {
        void *ret = qtd_QWebFrame_page_const(qtdNativeId);
        QWebPage __d_return_value = QWebPage.__getObject(ret);
        return __d_return_value;
    }

    public final QWebFrame parentFrame() const {
        void *ret = qtd_QWebFrame_parentFrame_const(qtdNativeId);
        QWebFrame __d_return_value = QWebFrame.__getObject(ret);
        return __d_return_value;
    }

    public final QPoint pos() const {
        QPoint res;
        qtd_QWebFrame_pos_const(qtdNativeId, &res);
        return res;
    }

    public final void print(QPrinter printer) const {
        qtd_QWebFrame_print_QPrinter_const(qtdNativeId, printer is null ? null : printer.qtdNativeId);
    }

    public final void render(QPainter arg__1) {
        qtd_QWebFrame_render_QPainter(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void render(QPainter arg__1, const(QRegion) clip) {
        qtd_QWebFrame_render_QPainter_QRegion(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId, clip is null ? null : (cast(QRegion)clip).qtdNativeId);
    }

    public final string renderTreeDump() const {
        string res;
        qtd_QWebFrame_renderTreeDump_const(qtdNativeId, &res);
        return res;
    }

    public final QUrl requestedUrl() const {
        void* ret = qtd_QWebFrame_requestedUrl_const(qtdNativeId);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }

    public final void scroll(int arg__1, int arg__2) {
        qtd_QWebFrame_scroll_int_int(qtdNativeId, arg__1, arg__2);
    }

    public final QRect scrollBarGeometry(Qt.Orientation orientation) const {
        QRect res;
        qtd_QWebFrame_scrollBarGeometry_Orientation_const(qtdNativeId, &res, orientation);
        return res;
    }

    public final int scrollBarMaximum(Qt.Orientation orientation) const {
        return qtd_QWebFrame_scrollBarMaximum_Orientation_const(qtdNativeId, orientation);
    }

    public final int scrollBarMinimum(Qt.Orientation orientation) const {
        return qtd_QWebFrame_scrollBarMinimum_Orientation_const(qtdNativeId, orientation);
    }

    public final Qt.ScrollBarPolicy scrollBarPolicy(Qt.Orientation orientation) const {
        return cast(Qt.ScrollBarPolicy) qtd_QWebFrame_scrollBarPolicy_Orientation_const(qtdNativeId, orientation);
    }

    public final int scrollBarValue(Qt.Orientation orientation) const {
        return qtd_QWebFrame_scrollBarValue_Orientation_const(qtdNativeId, orientation);
    }

    public final QPoint scrollPosition() const {
        QPoint res;
        qtd_QWebFrame_scrollPosition_const(qtdNativeId, &res);
        return res;
    }

    public final void scrollToAnchor(string anchor) {
        qtd_QWebFrame_scrollToAnchor_string(qtdNativeId, anchor);
    }

    public final void setContent(const(QByteArray) data, string mimeType = "", const(QUrl) baseUrl = new QUrl()) {
        qtd_QWebFrame_setContent_QByteArray_string_QUrl(qtdNativeId, data is null ? null : (cast(QByteArray)data).qtdNativeId, mimeType, baseUrl is null ? null : (cast(QUrl)baseUrl).qtdNativeId);
    }

    public final void setFocus() {
        qtd_QWebFrame_setFocus(qtdNativeId);
    }

    public final void setHtml(string html, const(QUrl) baseUrl = new QUrl()) {
        qtd_QWebFrame_setHtml_string_QUrl(qtdNativeId, html, baseUrl is null ? null : (cast(QUrl)baseUrl).qtdNativeId);
    }

    public final void setScrollBarPolicy(Qt.Orientation orientation, Qt.ScrollBarPolicy policy) {
        qtd_QWebFrame_setScrollBarPolicy_Orientation_ScrollBarPolicy(qtdNativeId, orientation, policy);
    }

    public final void setScrollBarValue(Qt.Orientation orientation, int value) {
        qtd_QWebFrame_setScrollBarValue_Orientation_int(qtdNativeId, orientation, value);
    }

    public final void setScrollPosition(const(QPoint) pos) {
        qtd_QWebFrame_setScrollPosition_QPoint(qtdNativeId, pos);
    }

    public final void setTextSizeMultiplier(double factor) {
        qtd_QWebFrame_setTextSizeMultiplier_double(qtdNativeId, factor);
    }

    public final void setUrl(const(QUrl) url) {
        qtd_QWebFrame_setUrl_QUrl(qtdNativeId, url is null ? null : (cast(QUrl)url).qtdNativeId);
    }

    public final void setZoomFactor(double factor) {
        qtd_QWebFrame_setZoomFactor_double(qtdNativeId, factor);
    }

    public final double textSizeMultiplier() const {
        return qtd_QWebFrame_textSizeMultiplier_const(qtdNativeId);
    }

    public final string title() const {
        string res;
        qtd_QWebFrame_title_const(qtdNativeId, &res);
        return res;
    }

    public final string toHtml() const {
        string res;
        qtd_QWebFrame_toHtml_const(qtdNativeId, &res);
        return res;
    }

    public final string toPlainText() const {
        string res;
        qtd_QWebFrame_toPlainText_const(qtdNativeId, &res);
        return res;
    }

    public final QUrl url() const {
        void* ret = qtd_QWebFrame_url_const(qtdNativeId);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }

    public final double zoomFactor() const {
        return qtd_QWebFrame_zoomFactor_const(qtdNativeId);
    }

    public bool event(QEvent arg__1) {
        return qtd_QWebFrame_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "evaluateJavaScript(QString)", 
            "print(QPrinter*)const"    ];

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QWebFrame);
    }

    static QWebFrame __getObject(void* nativeId) {
        return static_cast!(QWebFrame)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QWebFrame_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QWebFrame_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QWebFrame(nativeId, initFlags);
        QWebFrame.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(string)("evaluateJavaScript"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(QPrinter)("print"), index));

    }

    public alias void __isQtType_QWebFrame;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void  qtd_QWebFrame_addToJavaScriptWindowObject_string_QObject(void* __this_nativeId,
 string name0,
 void* object1);
private extern(C) void*  qtd_QWebFrame_baseUrl_const(void* __this_nativeId);
private extern(C) void  qtd_QWebFrame_childFrames_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QWebFrame_contentsSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void*  qtd_QWebFrame_evaluateJavaScript_string(void* __this_nativeId,
 string scriptSource0);
private extern(C) void  qtd_QWebFrame_frameName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QWebFrame_geometry_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) bool  qtd_QWebFrame_hasFocus_const(void* __this_nativeId);
private extern(C) void*  qtd_QWebFrame_hitTestContent_QPoint_const(void* __this_nativeId,
 QPoint pos0);
private extern(C) void*  qtd_QWebFrame_icon_const(void* __this_nativeId);
private extern(C) void  qtd_QWebFrame_load_QNetworkRequest_Operation_QByteArray(void* __this_nativeId,
 void* request0,
 int operation1,
 void* body2);
private extern(C) void  qtd_QWebFrame_load_QUrl(void* __this_nativeId,
 void* url0);
private extern(C) void*  qtd_QWebFrame_page_const(void* __this_nativeId);
private extern(C) void*  qtd_QWebFrame_parentFrame_const(void* __this_nativeId);
private extern(C) void  qtd_QWebFrame_pos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QWebFrame_print_QPrinter_const(void* __this_nativeId,
 void* printer0);
private extern(C) void  qtd_QWebFrame_render_QPainter(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWebFrame_render_QPainter_QRegion(void* __this_nativeId,
 void* arg__1,
 void* clip1);
private extern(C) void  qtd_QWebFrame_renderTreeDump_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QWebFrame_requestedUrl_const(void* __this_nativeId);
private extern(C) void  qtd_QWebFrame_scroll_int_int(void* __this_nativeId,
 int arg__1,
 int arg__2);
private extern(C) void  qtd_QWebFrame_scrollBarGeometry_Orientation_const(void* __this_nativeId,
 QRect * __d_return_value,
 int orientation0);
private extern(C) int  qtd_QWebFrame_scrollBarMaximum_Orientation_const(void* __this_nativeId,
 int orientation0);
private extern(C) int  qtd_QWebFrame_scrollBarMinimum_Orientation_const(void* __this_nativeId,
 int orientation0);
private extern(C) int  qtd_QWebFrame_scrollBarPolicy_Orientation_const(void* __this_nativeId,
 int orientation0);
private extern(C) int  qtd_QWebFrame_scrollBarValue_Orientation_const(void* __this_nativeId,
 int orientation0);
private extern(C) void  qtd_QWebFrame_scrollPosition_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QWebFrame_scrollToAnchor_string(void* __this_nativeId,
 string anchor0);
private extern(C) void  qtd_QWebFrame_setContent_QByteArray_string_QUrl(void* __this_nativeId,
 void* data0,
 string mimeType1,
 void* baseUrl2);
private extern(C) void  qtd_QWebFrame_setFocus(void* __this_nativeId);
private extern(C) void  qtd_QWebFrame_setHtml_string_QUrl(void* __this_nativeId,
 string html0,
 void* baseUrl1);
private extern(C) void  qtd_QWebFrame_setScrollBarPolicy_Orientation_ScrollBarPolicy(void* __this_nativeId,
 int orientation0,
 int policy1);
private extern(C) void  qtd_QWebFrame_setScrollBarValue_Orientation_int(void* __this_nativeId,
 int orientation0,
 int value1);
private extern(C) void  qtd_QWebFrame_setScrollPosition_QPoint(void* __this_nativeId,
 QPoint pos0);
private extern(C) void  qtd_QWebFrame_setTextSizeMultiplier_double(void* __this_nativeId,
 double factor0);
private extern(C) void  qtd_QWebFrame_setUrl_QUrl(void* __this_nativeId,
 void* url0);
private extern(C) void  qtd_QWebFrame_setZoomFactor_double(void* __this_nativeId,
 double factor0);
private extern(C) double  qtd_QWebFrame_textSizeMultiplier_const(void* __this_nativeId);
private extern(C) void  qtd_QWebFrame_title_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QWebFrame_toHtml_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QWebFrame_toPlainText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QWebFrame_url_const(void* __this_nativeId);
private extern(C) double  qtd_QWebFrame_zoomFactor_const(void* __this_nativeId);
private extern(C) bool  qtd_QWebFrame_event_QEvent(void* __this_nativeId,
 void* arg__1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QWebFrame() {
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QWebFrame_staticMetaObject();

extern(C) void qtd_QWebFrame_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QWebFrame_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
