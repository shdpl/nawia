module qt.gui.QInputContext;

public import qt.gui.QInputContext_aux;
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
public import qt.core.QList;
public import qt.core.QObject;
public import qt.gui.QInputMethodEvent;
public import qt.core.QEvent;
public import qt.gui.QFont;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QWidget;
public import qt.gui.QTextFormat;
public import qt.gui.QAction;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QInputContext : QObject
{
    public enum StandardFormat {
        PreeditFormat = 0,
        SelectionFormat = 1
    }

    alias StandardFormat.PreeditFormat PreeditFormat;
    alias StandardFormat.SelectionFormat SelectionFormat;


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

    public this(QObject parent_ = null) {
        void* ret = qtd_QInputContext_QInputContext_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QWidget focusWidget() const {
        void *ret = qtd_QInputContext_focusWidget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final void sendEvent(QInputMethodEvent event) {
        qtd_QInputContext_sendEvent_QInputMethodEvent(qtdNativeId, event is null ? null : (cast(QInputMethodEvent)event).qtdNativeId);
    }

    public final QTextFormat standardFormat(QInputContext.StandardFormat s) const {
        void* ret = qtd_QInputContext_standardFormat_StandardFormat_const(qtdNativeId, s);
        QTextFormat __d_return_value = new QTextFormat(ret);
        return __d_return_value;
    }

    public QList!(QAction) actions() {
        auto res = QList!(QAction).opCall();
        qtd_QInputContext_actions(qtdNativeId, &res);
        return res;
    }

    public bool filterEvent(QEvent event) {
        return qtd_QInputContext_filterEvent_QEvent(qtdNativeId, event is null ? null : (cast(QEvent)event).qtdNativeId);
    }

    public QFont font() const {
        void* ret = qtd_QInputContext_font_const(qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public abstract string identifierName();

    public abstract bool isComposing() const;

    public abstract string language();

    public void mouseHandler(int x, QMouseEvent event) {
        qtd_QInputContext_mouseHandler_int_QMouseEvent(qtdNativeId, x, event is null ? null : event.qtdNativeId);
    }

    public abstract void reset();

    public void update() {
        qtd_QInputContext_update(qtdNativeId);
    }

    public void widgetDestroyed(QWidget w) {
        qtd_QInputContext_widgetDestroyed_QWidget(qtdNativeId, w is null ? null : w.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QInputContext_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QInputContext);
    }

    static QInputContext __getObject(void* nativeId) {
        return static_cast!(QInputContext)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QInputContext_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QInputContext_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QInputContext_ConcreteWrapper(nativeId, initFlags);
        QInputContext.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QInputContext;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QInputContext_ConcreteWrapper : QInputContext {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public string identifierName() {
            string res;
            qtd_QInputContext_identifierName(qtdNativeId, &res);
            return res;
        }

        override         public bool isComposing() const {
            return qtd_QInputContext_isComposing_const(qtdNativeId);
        }

        override         public string language() {
            string res;
            qtd_QInputContext_language(qtdNativeId, &res);
            return res;
        }

        override         public void reset() {
            qtd_QInputContext_reset(qtdNativeId);
        }
    }


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QInputContext_QInputContext_QObject(void *d_ptr,
 void* parent0);
private extern(C) void*  qtd_QInputContext_focusWidget_const(void* __this_nativeId);
private extern(C) void  qtd_QInputContext_sendEvent_QInputMethodEvent(void* __this_nativeId,
 void* event0);
private extern(C) void*  qtd_QInputContext_standardFormat_StandardFormat_const(void* __this_nativeId,
 int s0);
private extern(C) void  qtd_QInputContext_actions(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QInputContext_filterEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void*  qtd_QInputContext_font_const(void* __this_nativeId);
private extern(C) void  qtd_QInputContext_identifierName(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QInputContext_isComposing_const(void* __this_nativeId);
private extern(C) void  qtd_QInputContext_language(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QInputContext_mouseHandler_int_QMouseEvent(void* __this_nativeId,
 int x0,
 void* event1);
private extern(C) void  qtd_QInputContext_reset(void* __this_nativeId);
private extern(C) void  qtd_QInputContext_update(void* __this_nativeId);
private extern(C) void  qtd_QInputContext_widgetDestroyed_QWidget(void* __this_nativeId,
 void* w0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, QList!(QAction)* __d_arr) qtd_QInputContext_actions_dispatch; }
extern(C) void qtd_export_QInputContext_actions_dispatch(void *dId, QList!(QAction)* __d_arr){
    auto d_object = cast(QInputContext) dId;
    auto return_value = d_object.actions();
    *__d_arr = return_value;
}

extern(C){ extern bool function(void *dId, void* event0) qtd_QInputContext_filterEvent_QEvent_dispatch; }
extern(C) bool qtd_export_QInputContext_filterEvent_QEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QInputContext) dId;
    scope event0_d_ref = new QEvent(event0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.filterEvent(event0_d_ref);
    return return_value;
}

extern(C){ extern void* function(void *dId) qtd_QInputContext_font_const_dispatch; }
extern(C) void* qtd_export_QInputContext_font_const_dispatch(void *dId){
    auto d_object = cast(QInputContext) dId;
    QFont ret_value = d_object.font();
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, string* ret_str) qtd_QInputContext_identifierName_dispatch; }
extern(C) void qtd_export_QInputContext_identifierName_dispatch(void *dId, string* ret_str){
    auto d_object = cast(QInputContext) dId;
    string _d_str = d_object.identifierName();
    *ret_str = _d_str;
}

extern(C){ extern bool function(void *dId) qtd_QInputContext_isComposing_const_dispatch; }
extern(C) bool qtd_export_QInputContext_isComposing_const_dispatch(void *dId){
    auto d_object = cast(QInputContext) dId;
    auto return_value = d_object.isComposing();
    return return_value;
}

extern(C){ extern void function(void *dId, string* ret_str) qtd_QInputContext_language_dispatch; }
extern(C) void qtd_export_QInputContext_language_dispatch(void *dId, string* ret_str){
    auto d_object = cast(QInputContext) dId;
    string _d_str = d_object.language();
    *ret_str = _d_str;
}

extern(C){ extern void function(void *dId, int x0, void* event1) qtd_QInputContext_mouseHandler_int_QMouseEvent_dispatch; }
extern(C) void qtd_export_QInputContext_mouseHandler_int_QMouseEvent_dispatch(void *dId, int x0, void* event1){
    auto d_object = cast(QInputContext) dId;
    scope event1_d_ref = new QMouseEvent(event1, QtdObjectInitFlags.onStack);
    d_object.mouseHandler(x0, event1_d_ref);
}

extern(C){ extern void function(void *dId) qtd_QInputContext_reset_dispatch; }
extern(C) void qtd_export_QInputContext_reset_dispatch(void *dId){
    auto d_object = cast(QInputContext) dId;
    d_object.reset();
}

extern(C){ extern void function(void *dId) qtd_QInputContext_update_dispatch; }
extern(C) void qtd_export_QInputContext_update_dispatch(void *dId){
    auto d_object = cast(QInputContext) dId;
    d_object.update();
}

extern(C){ extern void function(void *dId, void* w0) qtd_QInputContext_widgetDestroyed_QWidget_dispatch; }
extern(C) void qtd_export_QInputContext_widgetDestroyed_QWidget_dispatch(void *dId, void* w0){
    auto d_object = cast(QInputContext) dId;
    scope w0_d_ref = new QWidget(w0, QtdObjectInitFlags.onStack);

    d_object.widgetDestroyed(w0_d_ref);
}

private extern (C) void qtd_QInputContext_initCallBacks(void* virtuals);

extern(C) void static_init_QInputContext() {
    void*[10] virt_arr;
    virt_arr[0] = &qtd_export_QInputContext_actions_dispatch;
    virt_arr[1] = &qtd_export_QInputContext_filterEvent_QEvent_dispatch;
    virt_arr[2] = &qtd_export_QInputContext_font_const_dispatch;
    virt_arr[3] = &qtd_export_QInputContext_identifierName_dispatch;
    virt_arr[4] = &qtd_export_QInputContext_isComposing_const_dispatch;
    virt_arr[5] = &qtd_export_QInputContext_language_dispatch;
    virt_arr[6] = &qtd_export_QInputContext_mouseHandler_int_QMouseEvent_dispatch;
    virt_arr[7] = &qtd_export_QInputContext_reset_dispatch;
    virt_arr[8] = &qtd_export_QInputContext_update_dispatch;
    virt_arr[9] = &qtd_export_QInputContext_widgetDestroyed_QWidget_dispatch;
    qtd_QInputContext_initCallBacks(virt_arr.ptr);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QInputContext_staticMetaObject();

extern(C) void qtd_QInputContext_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QInputContext_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
