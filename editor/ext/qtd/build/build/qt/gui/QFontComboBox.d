module qt.gui.QFontComboBox;

public import qt.gui.QFontComboBox_aux;
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
public import qt.gui.QFontDatabase;
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
public import qt.gui.QComboBox;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QFont;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QFontComboBox : QComboBox
{
    public enum FontFilter {
        AllFonts = 0,
        ScalableFonts = 1,
        NonScalableFonts = 2,
        MonospacedFonts = 4,
        ProportionalFonts = 8
    }

    alias FontFilter.AllFonts AllFonts;
    alias FontFilter.ScalableFonts ScalableFonts;
    alias FontFilter.NonScalableFonts NonScalableFonts;
    alias FontFilter.MonospacedFonts MonospacedFonts;
    alias FontFilter.ProportionalFonts ProportionalFonts;


    private static const string[] __signalSignatures = [
            "currentFontChanged(QFont)"    ];

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

    protected final void currentFontChanged(const(QFont) f) {
        qtd_QFontComboBox_currentFontChanged_QFont(qtdNativeId, f is null ? null : (cast(QFont)f).qtdNativeId);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QFontComboBox_QFontComboBox_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QFont currentFont() const {
        void* ret = qtd_QFontComboBox_currentFont_const(qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public final int fontFilters() const {
        return qtd_QFontComboBox_fontFilters_const(qtdNativeId);
    }

    public final void setCurrentFont(const(QFont) f) {
        qtd_QFontComboBox_setCurrentFont_QFont(qtdNativeId, f is null ? null : (cast(QFont)f).qtdNativeId);
    }

    public final void setFontFilters(int filters) {
        qtd_QFontComboBox_setFontFilters_FontFilters(qtdNativeId, filters);
    }

    public final void setWritingSystem(QFontDatabase.WritingSystem arg__1) {
        qtd_QFontComboBox_setWritingSystem_WritingSystem(qtdNativeId, arg__1);
    }

    public final QFontDatabase.WritingSystem writingSystem() const {
        return cast(QFontDatabase.WritingSystem) qtd_QFontComboBox_writingSystem_const(qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QFontComboBox_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QFontComboBox_sizeHint_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "setCurrentFont(QFont)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QFontComboBox_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QFontComboBox);
    }

    static QFontComboBox __getObject(void* nativeId) {
        return static_cast!(QFontComboBox)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QFontComboBox_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QFontComboBox_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QFontComboBox(nativeId, initFlags);
        QFontComboBox.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(const(QFont))("currentFontChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(const(QFont))("setCurrentFont"), index));

    }

    public alias void __isQtType_QFontComboBox;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QFontComboBox_currentFontChanged_QFont(void* __this_nativeId,
 void* f0);

// C wrappers
private extern(C) void* qtd_QFontComboBox_QFontComboBox_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void*  qtd_QFontComboBox_currentFont_const(void* __this_nativeId);
private extern(C) int  qtd_QFontComboBox_fontFilters_const(void* __this_nativeId);
private extern(C) void  qtd_QFontComboBox_setCurrentFont_QFont(void* __this_nativeId,
 void* f0);
private extern(C) void  qtd_QFontComboBox_setFontFilters_FontFilters(void* __this_nativeId,
 int filters0);
private extern(C) void  qtd_QFontComboBox_setWritingSystem_WritingSystem(void* __this_nativeId,
 int arg__1);
private extern(C) int  qtd_QFontComboBox_writingSystem_const(void* __this_nativeId);
private extern(C) bool  qtd_QFontComboBox_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QFontComboBox_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QFontComboBox_initCallBacks(void* virtuals);

extern(C) void static_init_QFontComboBox() {
    qtd_QFontComboBox_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QFontComboBox_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QFontComboBox) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QFontComboBox_activated_handle(void* dId, void** args) {
        auto d_object = cast(QFontComboBox) dId;
        auto arg__1_ptr = args[1];
        string arg__1 = QStringUtil.toNativeString(arg__1_ptr);
        //d_object.activated_emit(arg__1);
}*/
/*private extern(C) void qtd_QFontComboBox_activated_handle(void* dId, void** args) {
        auto d_object = cast(QFontComboBox) dId;
        auto index0 = *(cast(int*)args[1]);
        //d_object.activated_emit(index0);
}*/
/*private extern(C) void qtd_QFontComboBox_currentIndexChanged_handle(void* dId, void** args) {
        auto d_object = cast(QFontComboBox) dId;
        auto arg__1_ptr = args[1];
        string arg__1 = QStringUtil.toNativeString(arg__1_ptr);
        //d_object.currentIndexChanged_emit(arg__1);
}*/
/*private extern(C) void qtd_QFontComboBox_currentIndexChanged_handle(void* dId, void** args) {
        auto d_object = cast(QFontComboBox) dId;
        auto index0 = *(cast(int*)args[1]);
        //d_object.currentIndexChanged_emit(index0);
}*/
/*private extern(C) void qtd_QFontComboBox_editTextChanged_handle(void* dId, void** args) {
        auto d_object = cast(QFontComboBox) dId;
        auto arg__1_ptr = args[1];
        string arg__1 = QStringUtil.toNativeString(arg__1_ptr);
        //d_object.editTextChanged_emit(arg__1);
}*/
/*private extern(C) void qtd_QFontComboBox_highlighted_handle(void* dId, void** args) {
        auto d_object = cast(QFontComboBox) dId;
        auto arg__1_ptr = args[1];
        string arg__1 = QStringUtil.toNativeString(arg__1_ptr);
        //d_object.highlighted_emit(arg__1);
}*/
/*private extern(C) void qtd_QFontComboBox_highlighted_handle(void* dId, void** args) {
        auto d_object = cast(QFontComboBox) dId;
        auto index0 = *(cast(int*)args[1]);
        //d_object.highlighted_emit(index0);
}*/
/*private extern(C) void qtd_QFontComboBox_currentFontChanged_handle(void* dId, void** args) {
        auto d_object = cast(QFontComboBox) dId;
        scope f0 = new QFont(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.currentFontChanged_emit(f0);
}*/

extern(C) QMetaObjectNative* qtd_QFontComboBox_staticMetaObject();

extern(C) void qtd_QFontComboBox_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QFontComboBox_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
