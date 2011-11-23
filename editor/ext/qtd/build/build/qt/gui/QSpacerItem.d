module qt.gui.QSpacerItem;

public import qt.gui.QSpacerItem_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QSizePolicy;
public import qt.gui.QLayoutItem;
public import qt.gui.QLayout;
public import qt.core.QRect;
public import qt.gui.QWidget;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSpacerItem : QtdObject, IQLayoutItem
{

// Functions

    public this(int w, int h, QSizePolicy.Policy hData = QSizePolicy.Policy.Minimum, QSizePolicy.Policy vData = QSizePolicy.Policy.Minimum) {
        void* ret = qtd_QSpacerItem_QSpacerItem_int_int_Policy_Policy(cast(void*) this, w, h, hData, vData);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int alignment() const {
        return qtd_QSpacerItem_alignment_const(qtdNativeId);
    }

    public final void changeSize(int w, int h, QSizePolicy.Policy hData = QSizePolicy.Policy.Minimum, QSizePolicy.Policy vData = QSizePolicy.Policy.Minimum) {
        qtd_QSpacerItem_changeSize_int_int_Policy_Policy(qtdNativeId, w, h, hData, vData);
    }

    public final int controlTypes() const {
        return qtd_QSpacerItem_controlTypes_const(qtdNativeId);
    }

    public final void setAlignment(int a) {
        qtd_QSpacerItem_setAlignment_Alignment(qtdNativeId, a);
    }

    public int expandingDirections() const {
        return qtd_QSpacerItem_expandingDirections_const(qtdNativeId);
    }

    public QRect geometry() const {
        QRect res;
        qtd_QSpacerItem_geometry_const(qtdNativeId, &res);
        return res;
    }

    public bool hasHeightForWidth() const {
        return qtd_QSpacerItem_hasHeightForWidth_const(qtdNativeId);
    }

    public int heightForWidth(int arg__1) const {
        return qtd_QSpacerItem_heightForWidth_int_const(qtdNativeId, arg__1);
    }

    public void invalidate() {
        qtd_QSpacerItem_invalidate(qtdNativeId);
    }

    public bool isEmpty() const {
        return qtd_QSpacerItem_isEmpty_const(qtdNativeId);
    }

    public QLayout layout() {
        void *ret = qtd_QSpacerItem_layout(qtdNativeId);
        QLayout __d_return_value = QLayout.__getObject(ret);
        return __d_return_value;
    }

    public QSize maximumSize() const {
        QSize res;
        qtd_QSpacerItem_maximumSize_const(qtdNativeId, &res);
        return res;
    }

    public int minimumHeightForWidth(int arg__1) const {
        return qtd_QSpacerItem_minimumHeightForWidth_int_const(qtdNativeId, arg__1);
    }

    public QSize minimumSize() const {
        QSize res;
        qtd_QSpacerItem_minimumSize_const(qtdNativeId, &res);
        return res;
    }

    public void setGeometry(const(QRect) arg__1) {
        qtd_QSpacerItem_setGeometry_QRect(qtdNativeId, arg__1);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QSpacerItem_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    public QSpacerItem spacerItem() {
        void* ret = qtd_QSpacerItem_spacerItem(qtdNativeId);
        QSpacerItem __d_return_value = qtd_QSpacerItem_from_ptr(ret);

        return __d_return_value;
    }

    public QWidget widget() {
        void *ret = qtd_QSpacerItem_widget(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }
// Field accessors
    static QSpacerItem __getObject(void* nativeId) {
        return qtd_QSpacerItem_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QSpacerItem;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQLayoutItem = qtd_QSpacerItem_cast_to_QLayoutItem(nativeId);
    }

    private void* __m_ptr_IQLayoutItem;
    public void* __ptr_IQLayoutItem() { return __m_ptr_IQLayoutItem; }

    protected override void qtdDeleteNative() {
        qtd_QSpacerItem_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QSpacerItem_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QSpacerItem_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QSpacerItem_cast_to_QLayoutItem(void* nativeId);

extern (C) void *__QSpacerItem_entity(void *q_ptr);

QSpacerItem qtd_QSpacerItem_from_ptr(void* ret) {
    void* d_obj = __QSpacerItem_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QSpacerItem) d_obj_ref;
    } else {
        auto return_value = new QSpacerItem(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QSpacerItem_delete(void *ptr);
extern (C) void qtd_QSpacerItem_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QSpacerItem_QSpacerItem_int_int_Policy_Policy(void *d_ptr,
 int w0,
 int h1,
 int hData2,
 int vData3);
private extern(C) int  qtd_QSpacerItem_alignment_const(void* __this_nativeId);
private extern(C) void  qtd_QSpacerItem_changeSize_int_int_Policy_Policy(void* __this_nativeId,
 int w0,
 int h1,
 int hData2,
 int vData3);
private extern(C) int  qtd_QSpacerItem_controlTypes_const(void* __this_nativeId);
private extern(C) void  qtd_QSpacerItem_setAlignment_Alignment(void* __this_nativeId,
 int a0);
private extern(C) int  qtd_QSpacerItem_expandingDirections_const(void* __this_nativeId);
private extern(C) void  qtd_QSpacerItem_geometry_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) bool  qtd_QSpacerItem_hasHeightForWidth_const(void* __this_nativeId);
private extern(C) int  qtd_QSpacerItem_heightForWidth_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QSpacerItem_invalidate(void* __this_nativeId);
private extern(C) bool  qtd_QSpacerItem_isEmpty_const(void* __this_nativeId);
private extern(C) void*  qtd_QSpacerItem_layout(void* __this_nativeId);
private extern(C) void  qtd_QSpacerItem_maximumSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) int  qtd_QSpacerItem_minimumHeightForWidth_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QSpacerItem_minimumSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QSpacerItem_setGeometry_QRect(void* __this_nativeId,
 QRect arg__1);
private extern(C) void  qtd_QSpacerItem_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void*  qtd_QSpacerItem_spacerItem(void* __this_nativeId);
private extern(C) void*  qtd_QSpacerItem_widget(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QSpacerItem_initCallBacks(void* virtuals);

extern(C) void static_init_QSpacerItem() {
    qtd_QSpacerItem_initCallBacks(null);
}

// signal handlers

