module qt.gui.QAccessibleWidget;

public import qt.gui.QAccessibleWidget_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QAccessible;
public import qt.core.QList;
public import qt.core.QObject;
public import qt.gui.QAccessibleInterface;
public import qt.gui.QAccessibleObject;
public import qt.core.QVariant;
public import qt.core.QRect;
public import qt.gui.QWidget;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QAccessibleWidget : QAccessibleObject
{

// Functions

    public this(QWidget o, QAccessible.Role r = QAccessible.Role.Client, string name = "") {
        void* ret = qtd_QAccessibleWidget_QAccessibleWidget_QWidget_Role_string(cast(void*) this, o is null ? null : o.qtdNativeId, r, name);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected final void addControllingSignal(string signal) {
        qtd_QAccessibleWidget_addControllingSignal_string(qtdNativeId, signal);
    }

    protected final QObject parentObject() const {
        void *ret = qtd_QAccessibleWidget_parentObject_const(qtdNativeId);
        QObject __d_return_value = QObject.__getObject(ret);
        return __d_return_value;
    }

    protected final void setAccelerator(string accel) {
        qtd_QAccessibleWidget_setAccelerator_string(qtdNativeId, accel);
    }

    protected final void setDescription(string desc) {
        qtd_QAccessibleWidget_setDescription_string(qtdNativeId, desc);
    }

    protected final void setHelp(string help) {
        qtd_QAccessibleWidget_setHelp_string(qtdNativeId, help);
    }

    protected final void setValue(string value) {
        qtd_QAccessibleWidget_setValue_string(qtdNativeId, value);
    }

    protected final QWidget widget() const {
        void *ret = qtd_QAccessibleWidget_widget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public string actionText(int action, QAccessible.Text t, int child) const {
        string res;
        qtd_QAccessibleWidget_actionText_int_Text_int_const(qtdNativeId, &res, action, t, child);
        return res;
    }

    public int childAt(int x, int y) const {
        return qtd_QAccessibleWidget_childAt_int_int_const(qtdNativeId, x, y);
    }

    public int childCount() const {
        return qtd_QAccessibleWidget_childCount_const(qtdNativeId);
    }

    public bool doAction(int action, int child, QList!(QVariant) params) {
        return qtd_QAccessibleWidget_doAction_int_int_QList(qtdNativeId, action, child, &params);
    }

    public int indexOfChild(QAccessibleInterface child) const {
        return qtd_QAccessibleWidget_indexOfChild_QAccessibleInterface_const(qtdNativeId, child is null ? null : (cast(QAccessibleInterface)child).qtdNativeId);
    }

    public int navigate(QAccessible.RelationFlag rel, int entry, QAccessibleInterface_ConcreteWrapper** target) const {
        return qtd_QAccessibleWidget_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const(qtdNativeId, rel, entry, target);
    }

    public QRect rect(int child) const {
        QRect res;
        qtd_QAccessibleWidget_rect_int_const(qtdNativeId, &res, child);
        return res;
    }

    public int relationTo(int child, QAccessibleInterface other, int otherChild) const {
        return qtd_QAccessibleWidget_relationTo_int_QAccessibleInterface_int_const(qtdNativeId, child, other is null ? null : (cast(QAccessibleInterface)other).qtdNativeId, otherChild);
    }

    public QAccessible.Role role(int child) const {
        return cast(QAccessible.Role) qtd_QAccessibleWidget_role_int_const(qtdNativeId, child);
    }

    public int state(int child) const {
        return qtd_QAccessibleWidget_state_int_const(qtdNativeId, child);
    }

    public string text(QAccessible.Text t, int child) const {
        string res;
        qtd_QAccessibleWidget_text_Text_int_const(qtdNativeId, &res, t, child);
        return res;
    }

    public int userActionCount(int child) const {
        return qtd_QAccessibleWidget_userActionCount_int_const(qtdNativeId, child);
    }
// Field accessors
    static QAccessibleWidget __getObject(void* nativeId) {
        return qtd_QAccessibleWidget_from_ptr(nativeId);
    }

    public alias void __isQtType_QAccessibleWidget;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QAccessibleWidget_entity(void *q_ptr);

QAccessibleWidget qtd_QAccessibleWidget_from_ptr(void* ret) {
    void* d_obj = __QAccessibleWidget_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QAccessibleWidget) d_obj_ref;
    } else {
        auto return_value = new QAccessibleWidget(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAccessibleWidget_QAccessibleWidget_QWidget_Role_string(void *d_ptr,
 void* o0,
 int r1,
 string name2);
private extern(C) void  qtd_QAccessibleWidget_addControllingSignal_string(void* __this_nativeId,
 string signal0);
private extern(C) void*  qtd_QAccessibleWidget_parentObject_const(void* __this_nativeId);
private extern(C) void  qtd_QAccessibleWidget_setAccelerator_string(void* __this_nativeId,
 string accel0);
private extern(C) void  qtd_QAccessibleWidget_setDescription_string(void* __this_nativeId,
 string desc0);
private extern(C) void  qtd_QAccessibleWidget_setHelp_string(void* __this_nativeId,
 string help0);
private extern(C) void  qtd_QAccessibleWidget_setValue_string(void* __this_nativeId,
 string value0);
private extern(C) void*  qtd_QAccessibleWidget_widget_const(void* __this_nativeId);
private extern(C) void  qtd_QAccessibleWidget_actionText_int_Text_int_const(void* __this_nativeId,
 void* __d_return_value,
 int action0,
 int t1,
 int child2);
private extern(C) int  qtd_QAccessibleWidget_childAt_int_int_const(void* __this_nativeId,
 int x0,
 int y1);
private extern(C) int  qtd_QAccessibleWidget_childCount_const(void* __this_nativeId);
private extern(C) bool  qtd_QAccessibleWidget_doAction_int_int_QList(void* __this_nativeId,
 int action0,
 int child1,
 void* params2);
private extern(C) int  qtd_QAccessibleWidget_indexOfChild_QAccessibleInterface_const(void* __this_nativeId,
 void* child0);
private extern(C) int  qtd_QAccessibleWidget_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const(void* __this_nativeId,
 int rel0,
 int entry1,
 QAccessibleInterface_ConcreteWrapper** target2);
private extern(C) void  qtd_QAccessibleWidget_rect_int_const(void* __this_nativeId,
 QRect * __d_return_value,
 int child0);
private extern(C) int  qtd_QAccessibleWidget_relationTo_int_QAccessibleInterface_int_const(void* __this_nativeId,
 int child0,
 void* other1,
 int otherChild2);
private extern(C) int  qtd_QAccessibleWidget_role_int_const(void* __this_nativeId,
 int child0);
private extern(C) int  qtd_QAccessibleWidget_state_int_const(void* __this_nativeId,
 int child0);
private extern(C) void  qtd_QAccessibleWidget_text_Text_int_const(void* __this_nativeId,
 void* __d_return_value,
 int t0,
 int child1);
private extern(C) int  qtd_QAccessibleWidget_userActionCount_int_const(void* __this_nativeId,
 int child0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QAccessibleWidget_initCallBacks(void* virtuals);

extern(C) void static_init_QAccessibleWidget() {
    qtd_QAccessibleWidget_initCallBacks(null);
}

// signal handlers

