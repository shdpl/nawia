module qt.webkit.QWebHitTestResult;

public import qt.webkit.QWebHitTestResult_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.webkit.QWebFrame;
public import qt.gui.QPixmap;
public import qt.core.QRect;
public import qt.core.QUrl;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QWebHitTestResult : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QWebHitTestResult_QWebHitTestResult();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QWebHitTestResult) other) {
        void* ret = qtd_QWebHitTestResult_QWebHitTestResult_QWebHitTestResult(other is null ? null : (cast(QWebHitTestResult)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string alternateText() const {
        string res;
        qtd_QWebHitTestResult_alternateText_const(qtdNativeId, &res);
        return res;
    }

    public final QRect boundingRect() const {
        QRect res;
        qtd_QWebHitTestResult_boundingRect_const(qtdNativeId, &res);
        return res;
    }

    public final QWebFrame frame() const {
        void *ret = qtd_QWebHitTestResult_frame_const(qtdNativeId);
        QWebFrame __d_return_value = QWebFrame.__getObject(ret);
        return __d_return_value;
    }

    public final QUrl imageUrl() const {
        void* ret = qtd_QWebHitTestResult_imageUrl_const(qtdNativeId);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }

    public final bool isContentEditable() const {
        return qtd_QWebHitTestResult_isContentEditable_const(qtdNativeId);
    }

    public final bool isContentSelected() const {
        return qtd_QWebHitTestResult_isContentSelected_const(qtdNativeId);
    }

    public final bool isNull() const {
        return qtd_QWebHitTestResult_isNull_const(qtdNativeId);
    }

    public final QWebFrame linkTargetFrame() const {
        void *ret = qtd_QWebHitTestResult_linkTargetFrame_const(qtdNativeId);
        QWebFrame __d_return_value = QWebFrame.__getObject(ret);
        return __d_return_value;
    }

    public final string linkText() const {
        string res;
        qtd_QWebHitTestResult_linkText_const(qtdNativeId, &res);
        return res;
    }

    public final QUrl linkTitle() const {
        void* ret = qtd_QWebHitTestResult_linkTitle_const(qtdNativeId);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }

    public final QUrl linkUrl() const {
        void* ret = qtd_QWebHitTestResult_linkUrl_const(qtdNativeId);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }

    public final QPixmap pixmap() const {
        void* ret = qtd_QWebHitTestResult_pixmap_const(qtdNativeId);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public final QPoint pos() const {
        QPoint res;
        qtd_QWebHitTestResult_pos_const(qtdNativeId, &res);
        return res;
    }

    public final string title() const {
        string res;
        qtd_QWebHitTestResult_title_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QWebHitTestResult;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QWebHitTestResult_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QWebHitTestResult_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QWebHitTestResult_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QWebHitTestResult_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QWebHitTestResult_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QWebHitTestResult_QTypeInfo_isComplex();
        isStatic = qtd_QWebHitTestResult_QTypeInfo_isStatic();
        isLarge = qtd_QWebHitTestResult_QTypeInfo_isLarge();
        isPointer = qtd_QWebHitTestResult_QTypeInfo_isPointer();
        isDummy = qtd_QWebHitTestResult_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QWebHitTestResult_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QWebHitTestResult_native_copy(const void* orig);
extern (C) void qtd_QWebHitTestResult_delete(void *ptr);
extern (C) void qtd_QWebHitTestResult_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QWebHitTestResult_QWebHitTestResult();
private extern(C) void* qtd_QWebHitTestResult_QWebHitTestResult_QWebHitTestResult(void* other0);
private extern(C) void  qtd_QWebHitTestResult_alternateText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QWebHitTestResult_boundingRect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void*  qtd_QWebHitTestResult_frame_const(void* __this_nativeId);
private extern(C) void*  qtd_QWebHitTestResult_imageUrl_const(void* __this_nativeId);
private extern(C) bool  qtd_QWebHitTestResult_isContentEditable_const(void* __this_nativeId);
private extern(C) bool  qtd_QWebHitTestResult_isContentSelected_const(void* __this_nativeId);
private extern(C) bool  qtd_QWebHitTestResult_isNull_const(void* __this_nativeId);
private extern(C) void*  qtd_QWebHitTestResult_linkTargetFrame_const(void* __this_nativeId);
private extern(C) void  qtd_QWebHitTestResult_linkText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QWebHitTestResult_linkTitle_const(void* __this_nativeId);
private extern(C) void*  qtd_QWebHitTestResult_linkUrl_const(void* __this_nativeId);
private extern(C) void*  qtd_QWebHitTestResult_pixmap_const(void* __this_nativeId);
private extern(C) void  qtd_QWebHitTestResult_pos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QWebHitTestResult_title_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QWebHitTestResult() {
    QWebHitTestResult.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QWebHitTestResult_QTypeInfo_isComplex();
private extern (C) bool qtd_QWebHitTestResult_QTypeInfo_isStatic();
private extern (C) bool qtd_QWebHitTestResult_QTypeInfo_isLarge();
private extern (C) bool qtd_QWebHitTestResult_QTypeInfo_isPointer();
private extern (C) bool qtd_QWebHitTestResult_QTypeInfo_isDummy();
