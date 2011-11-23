module qt.gui.QStackedLayout;

public import qt.gui.QStackedLayout_aux;
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
public import qt.gui.QLayoutItem;
public import qt.core.QObject;
public import qt.gui.QLayout;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QRect;
public import qt.gui.QSpacerItem;
public import qt.gui.QWidget;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStackedLayout : QLayout
{
    public enum StackingMode {
        StackOne = 0,
        StackAll = 1
    }

    alias StackingMode.StackOne StackOne;
    alias StackingMode.StackAll StackAll;


    private static const string[] __signalSignatures = [
            "currentChanged(int)", 
            "widgetRemoved(int)"    ];

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

    protected final void currentChanged(int index) {
        qtd_QStackedLayout_currentChanged_int(qtdNativeId, index);
    }

    protected final void widgetRemoved(int index) {
        qtd_QStackedLayout_widgetRemoved_int(qtdNativeId, index);
    }
// Functions

    public this() {
        void* ret = qtd_QStackedLayout_QStackedLayout(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QLayout parentLayout) {
        void* ret = qtd_QStackedLayout_QStackedLayout_QLayout(cast(void*) this, parentLayout is null ? null : parentLayout.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QWidget parent_) {
        void* ret = qtd_QStackedLayout_QStackedLayout_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int addStackedWidget(QWidget w) {
        /*if (w is null)
            throw new NullPointerException("Argument 'w': null not expected."); */
        auto __rcTmp = __rcWidgets;
        if (w !is null) {
            __rcTmp ~= cast(Object) w;
        }
        return qtd_QStackedLayout_addStackedWidget_QWidget(qtdNativeId, w is null ? null : w.qtdNativeId);
    }

    public final int currentIndex() const {
        return qtd_QStackedLayout_currentIndex_const(qtdNativeId);
    }

    public final QWidget currentWidget() const {
        void *ret = qtd_QStackedLayout_currentWidget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final int insertWidget(int index, QWidget w) {
        /*if (w is null)
            throw new NullPointerException("Argument 'w': null not expected."); */
        auto __rcTmp = __rcWidgets;
        if (w !is null) {
            __rcTmp ~= cast(Object) w;
        }
        return qtd_QStackedLayout_insertWidget_int_QWidget(qtdNativeId, index, w is null ? null : w.qtdNativeId);
    }

    public final void setCurrentIndex(int index) {
        qtd_QStackedLayout_setCurrentIndex_int(qtdNativeId, index);
    }

    public final void setCurrentWidget(QWidget w) {
        qtd_QStackedLayout_setCurrentWidget_QWidget(qtdNativeId, w is null ? null : w.qtdNativeId);
    }

    public final void setStackingMode(QStackedLayout.StackingMode stackingMode) {
        qtd_QStackedLayout_setStackingMode_StackingMode(qtdNativeId, stackingMode);
    }

    public final QStackedLayout.StackingMode stackingMode() const {
        return cast(QStackedLayout.StackingMode) qtd_QStackedLayout_stackingMode_const(qtdNativeId);
    }

    public final QWidget widget(int arg__1) const {
        void *ret = qtd_QStackedLayout_widget_int_const(qtdNativeId, arg__1);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public void addItem(IQLayoutItem item) {
        if (item !is null) {
            item.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QStackedLayout_addItem_QLayoutItem(qtdNativeId, item is null ? null : item.__ptr_IQLayoutItem);
    }

    public int count() const {
        return qtd_QStackedLayout_count_const(qtdNativeId);
    }

    public IQLayoutItem itemAt(int arg__1) const {
        void* ret = qtd_QStackedLayout_itemAt_int_const(qtdNativeId, arg__1);
        IQLayoutItem __d_return_value = qtd_QLayoutItem_from_ptr(ret);

        return __d_return_value;
    }

    public QSize minimumSize() const {
        QSize res;
        qtd_QStackedLayout_minimumSize_const(qtdNativeId, &res);
        return res;
    }

    public void setGeometry(const(QRect) rect) {
        qtd_QStackedLayout_setGeometry_QRect(qtdNativeId, rect);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QStackedLayout_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    public IQLayoutItem takeAt(int arg__1) {
        void* ret = qtd_QStackedLayout_takeAt_int(qtdNativeId, arg__1);
        IQLayoutItem __d_return_value = qtd_QLayoutItem_from_ptr(ret);

        return __d_return_value;
    }

    public QWidget widget() {
        void *ret = qtd_QStackedLayout_widget(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "setCurrentIndex(int)", 
            "setCurrentWidget(QWidget*)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QStackedLayout_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QStackedLayout);
    }

    static QStackedLayout __getObject(void* nativeId) {
        return static_cast!(QStackedLayout)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QStackedLayout_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QStackedLayout_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QStackedLayout(nativeId, initFlags);
        QStackedLayout.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(int)("currentChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int)("widgetRemoved"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(int)("setCurrentIndex"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(QWidget)("setCurrentWidget"), index));

    }

    public alias void __isQtType_QStackedLayout;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QStackedLayout_currentChanged_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QStackedLayout_widgetRemoved_int(void* __this_nativeId,
 int index0);

// C wrappers
private extern(C) void* qtd_QStackedLayout_QStackedLayout(void *d_ptr);
private extern(C) void* qtd_QStackedLayout_QStackedLayout_QLayout(void *d_ptr,
 void* parentLayout0);
private extern(C) void* qtd_QStackedLayout_QStackedLayout_QWidget(void *d_ptr,
 void* parent0);
private extern(C) int  qtd_QStackedLayout_addStackedWidget_QWidget(void* __this_nativeId,
 void* w0);
private extern(C) int  qtd_QStackedLayout_currentIndex_const(void* __this_nativeId);
private extern(C) void*  qtd_QStackedLayout_currentWidget_const(void* __this_nativeId);
private extern(C) int  qtd_QStackedLayout_insertWidget_int_QWidget(void* __this_nativeId,
 int index0,
 void* w1);
private extern(C) void  qtd_QStackedLayout_setCurrentIndex_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QStackedLayout_setCurrentWidget_QWidget(void* __this_nativeId,
 void* w0);
private extern(C) void  qtd_QStackedLayout_setStackingMode_StackingMode(void* __this_nativeId,
 int stackingMode0);
private extern(C) int  qtd_QStackedLayout_stackingMode_const(void* __this_nativeId);
private extern(C) void*  qtd_QStackedLayout_widget_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QStackedLayout_addItem_QLayoutItem(void* __this_nativeId,
 void* item0);
private extern(C) int  qtd_QStackedLayout_count_const(void* __this_nativeId);
private extern(C) void*  qtd_QStackedLayout_itemAt_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QStackedLayout_minimumSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QStackedLayout_setGeometry_QRect(void* __this_nativeId,
 QRect rect0);
private extern(C) void  qtd_QStackedLayout_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void*  qtd_QStackedLayout_takeAt_int(void* __this_nativeId,
 int arg__1);
private extern(C) void*  qtd_QStackedLayout_widget(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QStackedLayout_initCallBacks(void* virtuals);

extern(C) void static_init_QStackedLayout() {
    qtd_QStackedLayout_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QStackedLayout_currentChanged_handle(void* dId, void** args) {
        auto d_object = cast(QStackedLayout) dId;
        auto index0 = *(cast(int*)args[1]);
        //d_object.currentChanged_emit(index0);
}*/
/*private extern(C) void qtd_QStackedLayout_widgetRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QStackedLayout) dId;
        auto index0 = *(cast(int*)args[1]);
        //d_object.widgetRemoved_emit(index0);
}*/

extern(C) QMetaObjectNative* qtd_QStackedLayout_staticMetaObject();

extern(C) void qtd_QStackedLayout_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QStackedLayout_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
