module qt.gui.QAccessibleInterfaceEx;

public import qt.gui.QAccessibleInterfaceEx_aux;
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
public import qt.core.QVariant;
public import qt.core.QRect;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAccessibleInterfaceEx : QAccessibleInterface
{

// Functions

    public this() {
        void* ret = qtd_QAccessibleInterfaceEx_QAccessibleInterfaceEx(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract QVariant invokeMethodEx(QAccessible.Method method, int child, QList!(QVariant) params);

    public QVariant virtual_hook(QVariant data) {
        void* ret = qtd_QAccessibleInterfaceEx_virtual_hook_QVariant(qtdNativeId, data is null ? null : data.qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }
// Field accessors
    static QAccessibleInterfaceEx __getObject(void* nativeId) {
        return qtd_QAccessibleInterfaceEx_from_ptr(nativeId);
    }

    public alias void __isQtType_QAccessibleInterfaceEx;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QAccessibleInterfaceEx_ConcreteWrapper : QAccessibleInterfaceEx {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public string actionText(int action, QAccessible.Text t, int child) const {
            string res;
            qtd_QAccessibleInterfaceEx_actionText_int_Text_int_const(qtdNativeId, &res, action, t, child);
            return res;
        }

        override         public int childAt(int x, int y) const {
            return qtd_QAccessibleInterfaceEx_childAt_int_int_const(qtdNativeId, x, y);
        }

        override         public int childCount() const {
            return qtd_QAccessibleInterfaceEx_childCount_const(qtdNativeId);
        }

        override         public bool doAction(int action, int child, QList!(QVariant) params) {
            return qtd_QAccessibleInterfaceEx_doAction_int_int_QList(qtdNativeId, action, child, &params);
        }

        override         public int indexOfChild(QAccessibleInterface arg__1) const {
            return qtd_QAccessibleInterfaceEx_indexOfChild_QAccessibleInterface_const(qtdNativeId, arg__1 is null ? null : (cast(QAccessibleInterface)arg__1).qtdNativeId);
        }

        override         public QVariant invokeMethodEx(QAccessible.Method method, int child, QList!(QVariant) params) {
            void* ret = qtd_QAccessibleInterfaceEx_invokeMethodEx_Method_int_QList(qtdNativeId, method, child, &params);
            QVariant __d_return_value = new QVariant(ret);
            return __d_return_value;
        }

        override         public bool isValid() const {
            return qtd_QAccessibleInterfaceEx_isValid_const(qtdNativeId);
        }

        override         public int navigate(QAccessible.RelationFlag relation, int index, QAccessibleInterface_ConcreteWrapper** iface) const {
            return qtd_QAccessibleInterfaceEx_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const(qtdNativeId, relation, index, iface);
        }

        override         public QObject object() const {
            void *ret = qtd_QAccessibleInterfaceEx_object_const(qtdNativeId);
            QObject __d_return_value = QObject.__getObject(ret);
            return __d_return_value;
        }

        override         public QRect rect(int child) const {
            QRect res;
            qtd_QAccessibleInterfaceEx_rect_int_const(qtdNativeId, &res, child);
            return res;
        }

        override         public int relationTo(int child, QAccessibleInterface other, int otherChild) const {
            return qtd_QAccessibleInterfaceEx_relationTo_int_QAccessibleInterface_int_const(qtdNativeId, child, other is null ? null : (cast(QAccessibleInterface)other).qtdNativeId, otherChild);
        }

        override         public QAccessible.Role role(int child) const {
            return cast(QAccessible.Role) qtd_QAccessibleInterfaceEx_role_int_const(qtdNativeId, child);
        }

        override         public void setText(QAccessible.Text t, int child, string text) {
            qtd_QAccessibleInterfaceEx_setText_Text_int_string(qtdNativeId, t, child, text);
        }

        override         public int state(int child) const {
            return qtd_QAccessibleInterfaceEx_state_int_const(qtdNativeId, child);
        }

        override         public string text(QAccessible.Text t, int child) const {
            string res;
            qtd_QAccessibleInterfaceEx_text_Text_int_const(qtdNativeId, &res, t, child);
            return res;
        }

        override         public int userActionCount(int child) const {
            return qtd_QAccessibleInterfaceEx_userActionCount_int_const(qtdNativeId, child);
        }
    }


extern (C) void *__QAccessibleInterfaceEx_entity(void *q_ptr);

QAccessibleInterfaceEx qtd_QAccessibleInterfaceEx_from_ptr(void* ret) {
    void* d_obj = __QAccessibleInterfaceEx_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QAccessibleInterfaceEx) d_obj_ref;
    } else {
        auto return_value = new QAccessibleInterfaceEx_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAccessibleInterfaceEx_QAccessibleInterfaceEx(void *d_ptr);
private extern(C) void*  qtd_QAccessibleInterfaceEx_invokeMethodEx_Method_int_QList(void* __this_nativeId,
 int method0,
 int child1,
 void* params2);
private extern(C) void*  qtd_QAccessibleInterfaceEx_virtual_hook_QVariant(void* __this_nativeId,
 void* data0);
// Just the private functions for abstract functions implemeneted in superclasses

private extern(C) void  qtd_QAccessibleInterfaceEx_actionText_int_Text_int_const(void* __this_nativeId,
 void* __d_return_value,
 int action0,
 int t1,
 int child2);

private extern(C) int  qtd_QAccessibleInterfaceEx_childAt_int_int_const(void* __this_nativeId,
 int x0,
 int y1);

private extern(C) int  qtd_QAccessibleInterfaceEx_childCount_const(void* __this_nativeId);

private extern(C) bool  qtd_QAccessibleInterfaceEx_doAction_int_int_QList(void* __this_nativeId,
 int action0,
 int child1,
 void* params2);

private extern(C) int  qtd_QAccessibleInterfaceEx_indexOfChild_QAccessibleInterface_const(void* __this_nativeId,
 void* arg__1);

private extern(C) bool  qtd_QAccessibleInterfaceEx_isValid_const(void* __this_nativeId);

private extern(C) int  qtd_QAccessibleInterfaceEx_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const(void* __this_nativeId,
 int relation0,
 int index1,
 QAccessibleInterface_ConcreteWrapper** iface2);

private extern(C) void*  qtd_QAccessibleInterfaceEx_object_const(void* __this_nativeId);

private extern(C) void  qtd_QAccessibleInterfaceEx_rect_int_const(void* __this_nativeId,
 QRect * __d_return_value,
 int child0);

private extern(C) int  qtd_QAccessibleInterfaceEx_relationTo_int_QAccessibleInterface_int_const(void* __this_nativeId,
 int child0,
 void* other1,
 int otherChild2);

private extern(C) int  qtd_QAccessibleInterfaceEx_role_int_const(void* __this_nativeId,
 int child0);

private extern(C) void  qtd_QAccessibleInterfaceEx_setText_Text_int_string(void* __this_nativeId,
 int t0,
 int child1,
 string text2);

private extern(C) int  qtd_QAccessibleInterfaceEx_state_int_const(void* __this_nativeId,
 int child0);

private extern(C) void  qtd_QAccessibleInterfaceEx_text_Text_int_const(void* __this_nativeId,
 void* __d_return_value,
 int t0,
 int child1);

private extern(C) int  qtd_QAccessibleInterfaceEx_userActionCount_int_const(void* __this_nativeId,
 int child0);



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId, int method0, int child1, void* params2) qtd_QAccessibleInterfaceEx_invokeMethodEx_Method_int_QList_dispatch; }
extern(C) void* qtd_export_QAccessibleInterfaceEx_invokeMethodEx_Method_int_QList_dispatch(void *dId, int method0, int child1, void* params2){
    auto d_object = cast(QAccessibleInterfaceEx) dId;
    auto method0_enum = cast(QAccessible.Method) method0;
    auto params2_d_ref = cast(QList!(QVariant)*)params2;

    QVariant ret_value = d_object.invokeMethodEx(method0_enum, child1, *params2_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void* function(void *dId, void* data0) qtd_QAccessibleInterfaceEx_virtual_hook_QVariant_dispatch; }
extern(C) void* qtd_export_QAccessibleInterfaceEx_virtual_hook_QVariant_dispatch(void *dId, void* data0){
    auto d_object = cast(QAccessibleInterfaceEx) dId;
    scope data0_d_ref = new QVariant(data0, QtdObjectInitFlags.onStack);
    QVariant ret_value = d_object.virtual_hook(data0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QAccessibleInterfaceEx_initCallBacks(void* virtuals);

extern(C) void static_init_QAccessibleInterfaceEx() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QAccessibleInterfaceEx_invokeMethodEx_Method_int_QList_dispatch;
    virt_arr[1] = &qtd_export_QAccessibleInterfaceEx_virtual_hook_QVariant_dispatch;
    qtd_QAccessibleInterfaceEx_initCallBacks(virt_arr.ptr);
}

// signal handlers

