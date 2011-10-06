module qt.gui.QAccessibleInterface;

public import qt.gui.QAccessibleInterface_aux;
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
public import qt.core.QVariant;
public import qt.core.QRect;
public import qt.gui.QAccessible;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAccessibleInterface : QAccessible
{

// Functions

    public this() {
        void* ret = qtd_QAccessibleInterface_QAccessibleInterface(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QVariant invokeMethod(QAccessible.Method method, int child, QList!(QVariant) params) {
        void* ret = qtd_QAccessibleInterface_invokeMethod_Method_int_QList(qtdNativeId, method, child, &params);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public abstract string actionText(int action, QAccessible.Text t, int child) const;

    public abstract int childAt(int x, int y) const;

    public abstract int childCount() const;

    public abstract bool doAction(int action, int child, QList!(QVariant) params);

    public abstract int indexOfChild(QAccessibleInterface arg__1) const;

    public abstract bool isValid() const;

    public abstract int navigate(QAccessible.RelationFlag relation, int index, QAccessibleInterface_ConcreteWrapper** iface) const;

    public abstract QObject object() const;

    public abstract QRect rect(int child) const;

    public abstract int relationTo(int child, QAccessibleInterface other, int otherChild) const;

    public abstract QAccessible.Role role(int child) const;

    public abstract void setText(QAccessible.Text t, int child, string text);

    public abstract int state(int child) const;

    public abstract string text(QAccessible.Text t, int child) const;

    public abstract int userActionCount(int child) const;
// Field accessors
    static QAccessibleInterface __getObject(void* nativeId) {
        return qtd_QAccessibleInterface_from_ptr(nativeId);
    }

    public alias void __isQtType_QAccessibleInterface;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QAccessibleInterface_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QAccessibleInterface_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QAccessibleInterface_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QAccessibleInterface_ConcreteWrapper : QAccessibleInterface {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public string actionText(int action, QAccessible.Text t, int child) const {
            string res;
            qtd_QAccessibleInterface_actionText_int_Text_int_const(qtdNativeId, &res, action, t, child);
            return res;
        }

        override         public int childAt(int x, int y) const {
            return qtd_QAccessibleInterface_childAt_int_int_const(qtdNativeId, x, y);
        }

        override         public int childCount() const {
            return qtd_QAccessibleInterface_childCount_const(qtdNativeId);
        }

        override         public bool doAction(int action, int child, QList!(QVariant) params) {
            return qtd_QAccessibleInterface_doAction_int_int_QList(qtdNativeId, action, child, &params);
        }

        override         public int indexOfChild(QAccessibleInterface arg__1) const {
            return qtd_QAccessibleInterface_indexOfChild_QAccessibleInterface_const(qtdNativeId, arg__1 is null ? null : (cast(QAccessibleInterface)arg__1).qtdNativeId);
        }

        override         public bool isValid() const {
            return qtd_QAccessibleInterface_isValid_const(qtdNativeId);
        }

        override         public int navigate(QAccessible.RelationFlag relation, int index, QAccessibleInterface_ConcreteWrapper** iface) const {
            return qtd_QAccessibleInterface_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const(qtdNativeId, relation, index, iface);
        }

        override         public QObject object() const {
            void *ret = qtd_QAccessibleInterface_object_const(qtdNativeId);
            QObject __d_return_value = QObject.__getObject(ret);
            return __d_return_value;
        }

        override         public QRect rect(int child) const {
            QRect res;
            qtd_QAccessibleInterface_rect_int_const(qtdNativeId, &res, child);
            return res;
        }

        override         public int relationTo(int child, QAccessibleInterface other, int otherChild) const {
            return qtd_QAccessibleInterface_relationTo_int_QAccessibleInterface_int_const(qtdNativeId, child, other is null ? null : (cast(QAccessibleInterface)other).qtdNativeId, otherChild);
        }

        override         public QAccessible.Role role(int child) const {
            return cast(QAccessible.Role) qtd_QAccessibleInterface_role_int_const(qtdNativeId, child);
        }

        override         public void setText(QAccessible.Text t, int child, string text) {
            qtd_QAccessibleInterface_setText_Text_int_string(qtdNativeId, t, child, text);
        }

        override         public int state(int child) const {
            return qtd_QAccessibleInterface_state_int_const(qtdNativeId, child);
        }

        override         public string text(QAccessible.Text t, int child) const {
            string res;
            qtd_QAccessibleInterface_text_Text_int_const(qtdNativeId, &res, t, child);
            return res;
        }

        override         public int userActionCount(int child) const {
            return qtd_QAccessibleInterface_userActionCount_int_const(qtdNativeId, child);
        }
    }


extern (C) void *__QAccessibleInterface_entity(void *q_ptr);

QAccessibleInterface qtd_QAccessibleInterface_from_ptr(void* ret) {
    void* d_obj = __QAccessibleInterface_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QAccessibleInterface) d_obj_ref;
    } else {
        auto return_value = new QAccessibleInterface_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QAccessibleInterface_delete(void *ptr);
extern (C) void qtd_QAccessibleInterface_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAccessibleInterface_QAccessibleInterface(void *d_ptr);
private extern(C) void*  qtd_QAccessibleInterface_invokeMethod_Method_int_QList(void* __this_nativeId,
 int method0,
 int child1,
 void* params2);
private extern(C) void  qtd_QAccessibleInterface_actionText_int_Text_int_const(void* __this_nativeId,
 void* __d_return_value,
 int action0,
 int t1,
 int child2);
private extern(C) int  qtd_QAccessibleInterface_childAt_int_int_const(void* __this_nativeId,
 int x0,
 int y1);
private extern(C) int  qtd_QAccessibleInterface_childCount_const(void* __this_nativeId);
private extern(C) bool  qtd_QAccessibleInterface_doAction_int_int_QList(void* __this_nativeId,
 int action0,
 int child1,
 void* params2);
private extern(C) int  qtd_QAccessibleInterface_indexOfChild_QAccessibleInterface_const(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QAccessibleInterface_isValid_const(void* __this_nativeId);
private extern(C) int  qtd_QAccessibleInterface_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const(void* __this_nativeId,
 int relation0,
 int index1,
 QAccessibleInterface_ConcreteWrapper** iface2);
private extern(C) void*  qtd_QAccessibleInterface_object_const(void* __this_nativeId);
private extern(C) void  qtd_QAccessibleInterface_rect_int_const(void* __this_nativeId,
 QRect * __d_return_value,
 int child0);
private extern(C) int  qtd_QAccessibleInterface_relationTo_int_QAccessibleInterface_int_const(void* __this_nativeId,
 int child0,
 void* other1,
 int otherChild2);
private extern(C) int  qtd_QAccessibleInterface_role_int_const(void* __this_nativeId,
 int child0);
private extern(C) void  qtd_QAccessibleInterface_setText_Text_int_string(void* __this_nativeId,
 int t0,
 int child1,
 string text2);
private extern(C) int  qtd_QAccessibleInterface_state_int_const(void* __this_nativeId,
 int child0);
private extern(C) void  qtd_QAccessibleInterface_text_Text_int_const(void* __this_nativeId,
 void* __d_return_value,
 int t0,
 int child1);
private extern(C) int  qtd_QAccessibleInterface_userActionCount_int_const(void* __this_nativeId,
 int child0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, string* ret_str, int action0, int t1, int child2) qtd_QAccessibleInterface_actionText_int_Text_int_const_dispatch; }
extern(C) void qtd_export_QAccessibleInterface_actionText_int_Text_int_const_dispatch(void *dId, string* ret_str, int action0, int t1, int child2){
    auto d_object = cast(QAccessibleInterface) dId;
    auto t1_enum = cast(QAccessible.Text) t1;
    string _d_str = d_object.actionText(action0, t1_enum, child2);
    *ret_str = _d_str;
}

extern(C){ extern int function(void *dId, int x0, int y1) qtd_QAccessibleInterface_childAt_int_int_const_dispatch; }
extern(C) int qtd_export_QAccessibleInterface_childAt_int_int_const_dispatch(void *dId, int x0, int y1){
    auto d_object = cast(QAccessibleInterface) dId;
    auto return_value = d_object.childAt(x0, y1);
    return return_value;
}

extern(C){ extern int function(void *dId) qtd_QAccessibleInterface_childCount_const_dispatch; }
extern(C) int qtd_export_QAccessibleInterface_childCount_const_dispatch(void *dId){
    auto d_object = cast(QAccessibleInterface) dId;
    auto return_value = d_object.childCount();
    return return_value;
}

extern(C){ extern bool function(void *dId, int action0, int child1, void* params2) qtd_QAccessibleInterface_doAction_int_int_QList_dispatch; }
extern(C) bool qtd_export_QAccessibleInterface_doAction_int_int_QList_dispatch(void *dId, int action0, int child1, void* params2){
    auto d_object = cast(QAccessibleInterface) dId;
    auto params2_d_ref = cast(QList!(QVariant)*)params2;

    auto return_value = d_object.doAction(action0, child1, *params2_d_ref);
    return return_value;
}

extern(C){ extern int function(void *dId, void* arg__1) qtd_QAccessibleInterface_indexOfChild_QAccessibleInterface_const_dispatch; }
extern(C) int qtd_export_QAccessibleInterface_indexOfChild_QAccessibleInterface_const_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QAccessibleInterface) dId;
    scope arg__1_d_ref = new QAccessibleInterface_ConcreteWrapper(arg__1, QtdObjectInitFlags.onStack);
    auto return_value = d_object.indexOfChild(arg__1_d_ref);
    return return_value;
}

extern(C){ extern bool function(void *dId) qtd_QAccessibleInterface_isValid_const_dispatch; }
extern(C) bool qtd_export_QAccessibleInterface_isValid_const_dispatch(void *dId){
    auto d_object = cast(QAccessibleInterface) dId;
    auto return_value = d_object.isValid();
    return return_value;
}

extern(C){ extern int function(void *dId, int relation0, int index1, QAccessibleInterface_ConcreteWrapper** iface2) qtd_QAccessibleInterface_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const_dispatch; }
extern(C) int qtd_export_QAccessibleInterface_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const_dispatch(void *dId, int relation0, int index1, QAccessibleInterface_ConcreteWrapper** iface2){
    auto d_object = cast(QAccessibleInterface) dId;
    auto relation0_enum = cast(QAccessible.RelationFlag) relation0;
    auto return_value = d_object.navigate(relation0_enum, index1, iface2);
    return return_value;
}

extern(C){ extern void* function(void *dId) qtd_QAccessibleInterface_object_const_dispatch; }
extern(C) void* qtd_export_QAccessibleInterface_object_const_dispatch(void *dId){
    auto d_object = cast(QAccessibleInterface) dId;
    QObject ret_value = d_object.object();
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, QRect *__d_return_value, int child0) qtd_QAccessibleInterface_rect_int_const_dispatch; }
extern(C) void qtd_export_QAccessibleInterface_rect_int_const_dispatch(void *dId, QRect *__d_return_value, int child0){
    auto d_object = cast(QAccessibleInterface) dId;
    *__d_return_value = d_object.rect(child0);
}

extern(C){ extern int function(void *dId, int child0, void* other1, int otherChild2) qtd_QAccessibleInterface_relationTo_int_QAccessibleInterface_int_const_dispatch; }
extern(C) int qtd_export_QAccessibleInterface_relationTo_int_QAccessibleInterface_int_const_dispatch(void *dId, int child0, void* other1, int otherChild2){
    auto d_object = cast(QAccessibleInterface) dId;
    scope other1_d_ref = new QAccessibleInterface_ConcreteWrapper(other1, QtdObjectInitFlags.onStack);
    auto return_value = d_object.relationTo(child0, other1_d_ref, otherChild2);
    return return_value;
}

extern(C){ extern int function(void *dId, int child0) qtd_QAccessibleInterface_role_int_const_dispatch; }
extern(C) int qtd_export_QAccessibleInterface_role_int_const_dispatch(void *dId, int child0){
    auto d_object = cast(QAccessibleInterface) dId;
    auto return_value = d_object.role(child0);
    return return_value;
}

extern(C){ extern void function(void *dId, int t0, int child1, wchar* text2, int text2_size) qtd_QAccessibleInterface_setText_Text_int_string_dispatch; }
extern(C) void qtd_export_QAccessibleInterface_setText_Text_int_string_dispatch(void *dId, int t0, int child1, wchar* text2, int text2_size){
    auto d_object = cast(QAccessibleInterface) dId;
    auto t0_enum = cast(QAccessible.Text) t0;
    string text2_d_ref = toUTF8(text2[0..text2_size]);
    d_object.setText(t0_enum, child1, text2_d_ref);
}

extern(C){ extern int function(void *dId, int child0) qtd_QAccessibleInterface_state_int_const_dispatch; }
extern(C) int qtd_export_QAccessibleInterface_state_int_const_dispatch(void *dId, int child0){
    auto d_object = cast(QAccessibleInterface) dId;
    auto return_value = d_object.state(child0);
    return return_value;
}

extern(C){ extern void function(void *dId, string* ret_str, int t0, int child1) qtd_QAccessibleInterface_text_Text_int_const_dispatch; }
extern(C) void qtd_export_QAccessibleInterface_text_Text_int_const_dispatch(void *dId, string* ret_str, int t0, int child1){
    auto d_object = cast(QAccessibleInterface) dId;
    auto t0_enum = cast(QAccessible.Text) t0;
    string _d_str = d_object.text(t0_enum, child1);
    *ret_str = _d_str;
}

extern(C){ extern int function(void *dId, int child0) qtd_QAccessibleInterface_userActionCount_int_const_dispatch; }
extern(C) int qtd_export_QAccessibleInterface_userActionCount_int_const_dispatch(void *dId, int child0){
    auto d_object = cast(QAccessibleInterface) dId;
    auto return_value = d_object.userActionCount(child0);
    return return_value;
}

private extern (C) void qtd_QAccessibleInterface_initCallBacks(void* virtuals);

extern(C) void static_init_QAccessibleInterface() {
    void*[15] virt_arr;
    virt_arr[0] = &qtd_export_QAccessibleInterface_actionText_int_Text_int_const_dispatch;
    virt_arr[1] = &qtd_export_QAccessibleInterface_childAt_int_int_const_dispatch;
    virt_arr[2] = &qtd_export_QAccessibleInterface_childCount_const_dispatch;
    virt_arr[3] = &qtd_export_QAccessibleInterface_doAction_int_int_QList_dispatch;
    virt_arr[4] = &qtd_export_QAccessibleInterface_indexOfChild_QAccessibleInterface_const_dispatch;
    virt_arr[5] = &qtd_export_QAccessibleInterface_isValid_const_dispatch;
    virt_arr[6] = &qtd_export_QAccessibleInterface_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const_dispatch;
    virt_arr[7] = &qtd_export_QAccessibleInterface_object_const_dispatch;
    virt_arr[8] = &qtd_export_QAccessibleInterface_rect_int_const_dispatch;
    virt_arr[9] = &qtd_export_QAccessibleInterface_relationTo_int_QAccessibleInterface_int_const_dispatch;
    virt_arr[10] = &qtd_export_QAccessibleInterface_role_int_const_dispatch;
    virt_arr[11] = &qtd_export_QAccessibleInterface_setText_Text_int_string_dispatch;
    virt_arr[12] = &qtd_export_QAccessibleInterface_state_int_const_dispatch;
    virt_arr[13] = &qtd_export_QAccessibleInterface_text_Text_int_const_dispatch;
    virt_arr[14] = &qtd_export_QAccessibleInterface_userActionCount_int_const_dispatch;
    qtd_QAccessibleInterface_initCallBacks(virt_arr.ptr);
}

// signal handlers

