module qt.gui.QLabel;

public import qt.gui.QLabel_aux;
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
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QFrame;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QKeyEvent;
public import qt.gui.QDragMoveEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.gui.QPicture;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.gui.QPaintEvent;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QPixmap;
public import qt.gui.QMovie;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QLabel : QFrame
{

Object __rcMovie = null;

Object __rcBuddy = null;

    private static const string[] __signalSignatures = [
            "linkActivated(QString)", 
            "linkHovered(QString)"    ];

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

    protected final void linkActivated(string link) {
        qtd_QLabel_linkActivated_string(qtdNativeId, link);
    }

    protected final void linkHovered(string link) {
        qtd_QLabel_linkHovered_string(qtdNativeId, link);
    }
// Functions

    public this(QWidget parent_ = null, int f = 0) {
        void* ret = qtd_QLabel_QLabel_QWidget_WindowFlags(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId, f);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string text, QWidget parent_ = null, int f = 0) {
        void* ret = qtd_QLabel_QLabel_string_QWidget_WindowFlags(cast(void*) this, text, parent_ is null ? null : parent_.qtdNativeId, f);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int alignment() const {
        return qtd_QLabel_alignment_const(qtdNativeId);
    }

    public final QWidget buddy() const {
        void *ret = qtd_QLabel_buddy_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final void clear() {
        qtd_QLabel_clear(qtdNativeId);
    }

    public final bool hasScaledContents() const {
        return qtd_QLabel_hasScaledContents_const(qtdNativeId);
    }

    public final bool hasSelectedText() const {
        return qtd_QLabel_hasSelectedText_const(qtdNativeId);
    }

    public final int indent() const {
        return qtd_QLabel_indent_const(qtdNativeId);
    }

    public final int margin() const {
        return qtd_QLabel_margin_const(qtdNativeId);
    }

    public final QMovie movie() const {
        void *ret = qtd_QLabel_movie_const(qtdNativeId);
        QMovie __d_return_value = QMovie.__getObject(ret);
        return __d_return_value;
    }

    public final bool openExternalLinks() const {
        return qtd_QLabel_openExternalLinks_const(qtdNativeId);
    }

    public final QPicture picture() const {
        void* ret = qtd_QLabel_picture_const(qtdNativeId);
        QPicture __d_return_value = new QPicture(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QPixmap pixmap() const {
        void* ret = qtd_QLabel_pixmap_const(qtdNativeId);
        QPixmap __d_return_value = new QPixmap(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final string selectedText() const {
        string res;
        qtd_QLabel_selectedText_const(qtdNativeId, &res);
        return res;
    }

    public final int selectionStart() const {
        return qtd_QLabel_selectionStart_const(qtdNativeId);
    }

    public final void setAlignment(int arg__1) {
        qtd_QLabel_setAlignment_Alignment(qtdNativeId, arg__1);
    }

    public final void setBuddy(QWidget arg__1) {
        {
            __rcBuddy = cast(Object) arg__1;
        }
        qtd_QLabel_setBuddy_QWidget(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void setIndent(int arg__1) {
        qtd_QLabel_setIndent_int(qtdNativeId, arg__1);
    }

    public final void setMargin(int arg__1) {
        qtd_QLabel_setMargin_int(qtdNativeId, arg__1);
    }

    public final void setMovie(QMovie movie) {
        {
            __rcMovie = cast(Object) movie;
        }
        qtd_QLabel_setMovie_QMovie(qtdNativeId, movie is null ? null : movie.qtdNativeId);
    }

    public final void setNum(double arg__1) {
        qtd_QLabel_setNum_double(qtdNativeId, arg__1);
    }

    public final void setNum(int arg__1) {
        qtd_QLabel_setNum_int(qtdNativeId, arg__1);
    }

    public final void setOpenExternalLinks(bool open) {
        qtd_QLabel_setOpenExternalLinks_bool(qtdNativeId, open);
    }

    public final void setPicture(const(QPicture) arg__1) {
        qtd_QLabel_setPicture_QPicture(qtdNativeId, arg__1 is null ? null : (cast(QPicture)arg__1).qtdNativeId);
    }

    public final void setPixmap(const(QPixmap) arg__1) {
        qtd_QLabel_setPixmap_QPixmap(qtdNativeId, arg__1 is null ? null : (cast(QPixmap)arg__1).qtdNativeId);
    }

    public final void setScaledContents(bool arg__1) {
        qtd_QLabel_setScaledContents_bool(qtdNativeId, arg__1);
    }

    public final void setSelection(int arg__1, int arg__2) {
        qtd_QLabel_setSelection_int_int(qtdNativeId, arg__1, arg__2);
    }

    public final void setText(string arg__1) {
        qtd_QLabel_setText_string(qtdNativeId, arg__1);
    }

    public final void setTextFormat(Qt.TextFormat arg__1) {
        qtd_QLabel_setTextFormat_TextFormat(qtdNativeId, arg__1);
    }

    public final void setTextInteractionFlags(int flags) {
        qtd_QLabel_setTextInteractionFlags_TextInteractionFlags(qtdNativeId, flags);
    }

    public final void setWordWrap(bool on) {
        qtd_QLabel_setWordWrap_bool(qtdNativeId, on);
    }

    public final string text() const {
        string res;
        qtd_QLabel_text_const(qtdNativeId, &res);
        return res;
    }

    public final Qt.TextFormat textFormat() const {
        return cast(Qt.TextFormat) qtd_QLabel_textFormat_const(qtdNativeId);
    }

    public final int textInteractionFlags() const {
        return qtd_QLabel_textInteractionFlags_const(qtdNativeId);
    }

    public final bool wordWrap() const {
        return qtd_QLabel_wordWrap_const(qtdNativeId);
    }

    protected void changeEvent(QEvent arg__1) {
        qtd_QLabel_changeEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void contextMenuEvent(QContextMenuEvent ev) {
        qtd_QLabel_contextMenuEvent_QContextMenuEvent(qtdNativeId, ev is null ? null : ev.qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QLabel_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void focusInEvent(QFocusEvent ev) {
        qtd_QLabel_focusInEvent_QFocusEvent(qtdNativeId, ev is null ? null : ev.qtdNativeId);
    }

    protected bool focusNextPrevChild(bool next) {
        return qtd_QLabel_focusNextPrevChild_bool(qtdNativeId, next);
    }

    protected void focusOutEvent(QFocusEvent ev) {
        qtd_QLabel_focusOutEvent_QFocusEvent(qtdNativeId, ev is null ? null : ev.qtdNativeId);
    }

    public int heightForWidth(int arg__1) const {
        return qtd_QLabel_heightForWidth_int_const(qtdNativeId, arg__1);
    }

    protected void keyPressEvent(QKeyEvent ev) {
        qtd_QLabel_keyPressEvent_QKeyEvent(qtdNativeId, ev is null ? null : ev.qtdNativeId);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QLabel_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void mouseMoveEvent(QMouseEvent ev) {
        qtd_QLabel_mouseMoveEvent_QMouseEvent(qtdNativeId, ev is null ? null : ev.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent ev) {
        qtd_QLabel_mousePressEvent_QMouseEvent(qtdNativeId, ev is null ? null : ev.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent ev) {
        qtd_QLabel_mouseReleaseEvent_QMouseEvent(qtdNativeId, ev is null ? null : ev.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QLabel_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QLabel_sizeHint_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "clear()", 
            "setMovie(QMovie*)", 
            "setNum(double)", 
            "setNum(int)", 
            "setPicture(QPicture)", 
            "setPixmap(QPixmap)", 
            "setText(QString)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QLabel_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QLabel);
    }

    static QLabel __getObject(void* nativeId) {
        return static_cast!(QLabel)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QLabel_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QLabel_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QLabel(nativeId, initFlags);
        QLabel.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(string)("linkActivated"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(string)("linkHovered"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("clear"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(QMovie)("setMovie"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(double)("setNum"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(int)("setNum"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(const(QPicture))("setPicture"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!(const(QPixmap))("setPixmap"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[6]);
        mo.addMethod(new QMetaSlot(signature!(string)("setText"), index));

    }

    public alias void __isQtType_QLabel;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QLabel_linkActivated_string(void* __this_nativeId,
 string link0);
private extern(C) void  qtd_QLabel_linkHovered_string(void* __this_nativeId,
 string link0);

// C wrappers
private extern(C) void* qtd_QLabel_QLabel_QWidget_WindowFlags(void *d_ptr,
 void* parent0,
 int f1);
private extern(C) void* qtd_QLabel_QLabel_string_QWidget_WindowFlags(void *d_ptr,
 string text0,
 void* parent1,
 int f2);
private extern(C) int  qtd_QLabel_alignment_const(void* __this_nativeId);
private extern(C) void*  qtd_QLabel_buddy_const(void* __this_nativeId);
private extern(C) void  qtd_QLabel_clear(void* __this_nativeId);
private extern(C) bool  qtd_QLabel_hasScaledContents_const(void* __this_nativeId);
private extern(C) bool  qtd_QLabel_hasSelectedText_const(void* __this_nativeId);
private extern(C) int  qtd_QLabel_indent_const(void* __this_nativeId);
private extern(C) int  qtd_QLabel_margin_const(void* __this_nativeId);
private extern(C) void*  qtd_QLabel_movie_const(void* __this_nativeId);
private extern(C) bool  qtd_QLabel_openExternalLinks_const(void* __this_nativeId);
private extern(C) void*  qtd_QLabel_picture_const(void* __this_nativeId);
private extern(C) void*  qtd_QLabel_pixmap_const(void* __this_nativeId);
private extern(C) void  qtd_QLabel_selectedText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QLabel_selectionStart_const(void* __this_nativeId);
private extern(C) void  qtd_QLabel_setAlignment_Alignment(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QLabel_setBuddy_QWidget(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLabel_setIndent_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QLabel_setMargin_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QLabel_setMovie_QMovie(void* __this_nativeId,
 void* movie0);
private extern(C) void  qtd_QLabel_setNum_double(void* __this_nativeId,
 double arg__1);
private extern(C) void  qtd_QLabel_setNum_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QLabel_setOpenExternalLinks_bool(void* __this_nativeId,
 bool open0);
private extern(C) void  qtd_QLabel_setPicture_QPicture(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLabel_setPixmap_QPixmap(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLabel_setScaledContents_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QLabel_setSelection_int_int(void* __this_nativeId,
 int arg__1,
 int arg__2);
private extern(C) void  qtd_QLabel_setText_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QLabel_setTextFormat_TextFormat(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QLabel_setTextInteractionFlags_TextInteractionFlags(void* __this_nativeId,
 int flags0);
private extern(C) void  qtd_QLabel_setWordWrap_bool(void* __this_nativeId,
 bool on0);
private extern(C) void  qtd_QLabel_text_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QLabel_textFormat_const(void* __this_nativeId);
private extern(C) int  qtd_QLabel_textInteractionFlags_const(void* __this_nativeId);
private extern(C) bool  qtd_QLabel_wordWrap_const(void* __this_nativeId);
private extern(C) void  qtd_QLabel_changeEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLabel_contextMenuEvent_QContextMenuEvent(void* __this_nativeId,
 void* ev0);
private extern(C) bool  qtd_QLabel_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QLabel_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* ev0);
private extern(C) bool  qtd_QLabel_focusNextPrevChild_bool(void* __this_nativeId,
 bool next0);
private extern(C) void  qtd_QLabel_focusOutEvent_QFocusEvent(void* __this_nativeId,
 void* ev0);
private extern(C) int  qtd_QLabel_heightForWidth_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QLabel_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* ev0);
private extern(C) void  qtd_QLabel_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QLabel_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* ev0);
private extern(C) void  qtd_QLabel_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* ev0);
private extern(C) void  qtd_QLabel_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* ev0);
private extern(C) void  qtd_QLabel_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLabel_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QLabel_initCallBacks(void* virtuals);

extern(C) void static_init_QLabel() {
    qtd_QLabel_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QLabel_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QLabel) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QLabel_linkActivated_handle(void* dId, void** args) {
        auto d_object = cast(QLabel) dId;
        auto link0_ptr = args[1];
        string link0 = QStringUtil.toNativeString(link0_ptr);
        //d_object.linkActivated_emit(link0);
}*/
/*private extern(C) void qtd_QLabel_linkHovered_handle(void* dId, void** args) {
        auto d_object = cast(QLabel) dId;
        auto link0_ptr = args[1];
        string link0 = QStringUtil.toNativeString(link0_ptr);
        //d_object.linkHovered_emit(link0);
}*/

extern(C) QMetaObjectNative* qtd_QLabel_staticMetaObject();

extern(C) void qtd_QLabel_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QLabel_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
