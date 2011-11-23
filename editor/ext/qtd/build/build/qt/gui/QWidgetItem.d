module qt.gui.QWidgetItem;

public import qt.gui.QWidgetItem_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QLayoutItem;
public import qt.gui.QLayout;
public import qt.core.QRect;
public import qt.gui.QSpacerItem;
public import qt.gui.QWidget;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QWidgetItem : QtdObject, IQLayoutItem
{

// Functions

    public this(QWidget w) {
        void* ret = qtd_QWidgetItem_QWidgetItem_QWidget(cast(void*) this, w is null ? null : w.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int alignment() const {
        return qtd_QWidgetItem_alignment_const(qtdNativeId);
    }

    public final int controlTypes() const {
        return qtd_QWidgetItem_controlTypes_const(qtdNativeId);
    }

    public final void setAlignment(int a) {
        qtd_QWidgetItem_setAlignment_Alignment(qtdNativeId, a);
    }

    public int expandingDirections() const {
        return qtd_QWidgetItem_expandingDirections_const(qtdNativeId);
    }

    public QRect geometry() const {
        QRect res;
        qtd_QWidgetItem_geometry_const(qtdNativeId, &res);
        return res;
    }

    public bool hasHeightForWidth() const {
        return qtd_QWidgetItem_hasHeightForWidth_const(qtdNativeId);
    }

    public int heightForWidth(int arg__1) const {
        return qtd_QWidgetItem_heightForWidth_int_const(qtdNativeId, arg__1);
    }

    public void invalidate() {
        qtd_QWidgetItem_invalidate(qtdNativeId);
    }

    public bool isEmpty() const {
        return qtd_QWidgetItem_isEmpty_const(qtdNativeId);
    }

    public QLayout layout() {
        void *ret = qtd_QWidgetItem_layout(qtdNativeId);
        QLayout __d_return_value = QLayout.__getObject(ret);
        return __d_return_value;
    }

    public QSize maximumSize() const {
        QSize res;
        qtd_QWidgetItem_maximumSize_const(qtdNativeId, &res);
        return res;
    }

    public int minimumHeightForWidth(int arg__1) const {
        return qtd_QWidgetItem_minimumHeightForWidth_int_const(qtdNativeId, arg__1);
    }

    public QSize minimumSize() const {
        QSize res;
        qtd_QWidgetItem_minimumSize_const(qtdNativeId, &res);
        return res;
    }

    public void setGeometry(const(QRect) arg__1) {
        qtd_QWidgetItem_setGeometry_QRect(qtdNativeId, arg__1);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QWidgetItem_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    public QSpacerItem spacerItem() {
        void* ret = qtd_QWidgetItem_spacerItem(qtdNativeId);
        QSpacerItem __d_return_value = qtd_QSpacerItem_from_ptr(ret);

        return __d_return_value;
    }

    public QWidget widget() {
        void *ret = qtd_QWidgetItem_widget(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }
// Field accessors
    static QWidgetItem __getObject(void* nativeId) {
        return qtd_QWidgetItem_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QWidgetItem;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQLayoutItem = qtd_QWidgetItem_cast_to_QLayoutItem(nativeId);
    }

    private void* __m_ptr_IQLayoutItem;
    public void* __ptr_IQLayoutItem() { return __m_ptr_IQLayoutItem; }

    protected override void qtdDeleteNative() {
        qtd_QWidgetItem_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QWidgetItem_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QWidgetItem_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QWidgetItem_cast_to_QLayoutItem(void* nativeId);

extern (C) void *__QWidgetItem_entity(void *q_ptr);

QWidgetItem qtd_QWidgetItem_from_ptr(void* ret) {
    void* d_obj = __QWidgetItem_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QWidgetItem) d_obj_ref;
    } else {
        auto return_value = new QWidgetItem(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QWidgetItem_delete(void *ptr);
extern (C) void qtd_QWidgetItem_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QWidgetItem_QWidgetItem_QWidget(void *d_ptr,
 void* w0);
private extern(C) int  qtd_QWidgetItem_alignment_const(void* __this_nativeId);
private extern(C) int  qtd_QWidgetItem_controlTypes_const(void* __this_nativeId);
private extern(C) void  qtd_QWidgetItem_setAlignment_Alignment(void* __this_nativeId,
 int a0);
private extern(C) int  qtd_QWidgetItem_expandingDirections_const(void* __this_nativeId);
private extern(C) void  qtd_QWidgetItem_geometry_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) bool  qtd_QWidgetItem_hasHeightForWidth_const(void* __this_nativeId);
private extern(C) int  qtd_QWidgetItem_heightForWidth_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QWidgetItem_invalidate(void* __this_nativeId);
private extern(C) bool  qtd_QWidgetItem_isEmpty_const(void* __this_nativeId);
private extern(C) void*  qtd_QWidgetItem_layout(void* __this_nativeId);
private extern(C) void  qtd_QWidgetItem_maximumSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) int  qtd_QWidgetItem_minimumHeightForWidth_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QWidgetItem_minimumSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QWidgetItem_setGeometry_QRect(void* __this_nativeId,
 QRect arg__1);
private extern(C) void  qtd_QWidgetItem_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void*  qtd_QWidgetItem_spacerItem(void* __this_nativeId);
private extern(C) void*  qtd_QWidgetItem_widget(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QWidgetItem_initCallBacks(void* virtuals);

extern(C) void static_init_QWidgetItem() {
    qtd_QWidgetItem_initCallBacks(null);
}

// signal handlers

