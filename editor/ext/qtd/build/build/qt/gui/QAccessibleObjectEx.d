module qt.gui.QAccessibleObjectEx;

public import qt.gui.QAccessibleObjectEx_aux;
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
public import qt.gui.QAccessibleInterfaceEx;
public import qt.core.QVariant;
public import qt.core.QRect;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAccessibleObjectEx : QAccessibleInterfaceEx
{

// Functions

    public this(QObject object) {
        void* ret = qtd_QAccessibleObjectEx_QAccessibleObjectEx_QObject(cast(void*) this, object is null ? null : object.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public string actionText(int action, QAccessible.Text t, int child) const {
        string res;
        qtd_QAccessibleObjectEx_actionText_int_Text_int_const(qtdNativeId, &res, action, t, child);
        return res;
    }

    public bool doAction(int action, int child, QList!(QVariant) params) {
        return qtd_QAccessibleObjectEx_doAction_int_int_QList(qtdNativeId, action, child, &params);
    }

    public bool isValid() const {
        return qtd_QAccessibleObjectEx_isValid_const(qtdNativeId);
    }

    public QObject object() const {
        void *ret = qtd_QAccessibleObjectEx_object_const(qtdNativeId);
        QObject __d_return_value = QObject.__getObject(ret);
        return __d_return_value;
    }

    public QRect rect(int child) const {
        QRect res;
        qtd_QAccessibleObjectEx_rect_int_const(qtdNativeId, &res, child);
        return res;
    }

    public void setText(QAccessible.Text t, int child, string text) {
        qtd_QAccessibleObjectEx_setText_Text_int_string(qtdNativeId, t, child, text);
    }

    public int userActionCount(int child) const {
        return qtd_QAccessibleObjectEx_userActionCount_int_const(qtdNativeId, child);
    }
// Field accessors
    static QAccessibleObjectEx __getObject(void* nativeId) {
        return qtd_QAccessibleObjectEx_from_ptr(nativeId);
    }

    public alias void __isQtType_QAccessibleObjectEx;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QAccessibleObjectEx_ConcreteWrapper : QAccessibleObjectEx {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public int childAt(int x, int y) const {
            return qtd_QAccessibleObjectEx_childAt_int_int_const(qtdNativeId, x, y);
        }

        override         public int childCount() const {
            return qtd_QAccessibleObjectEx_childCount_const(qtdNativeId);
        }

        override         public int indexOfChild(QAccessibleInterface arg__1) const {
            return qtd_QAccessibleObjectEx_indexOfChild_QAccessibleInterface_const(qtdNativeId, arg__1 is null ? null : (cast(QAccessibleInterface)arg__1).qtdNativeId);
        }

        override         public QVariant invokeMethodEx(QAccessible.Method method, int child, QList!(QVariant) params) {
            void* ret = qtd_QAccessibleObjectEx_invokeMethodEx_Method_int_QList(qtdNativeId, method, child, &params);
            QVariant __d_return_value = new QVariant(ret);
            return __d_return_value;
        }

        override         public int navigate(QAccessible.RelationFlag relation, int index, QAccessibleInterface_ConcreteWrapper** iface) const {
            return qtd_QAccessibleObjectEx_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const(qtdNativeId, relation, index, iface);
        }

        override         public int relationTo(int child, QAccessibleInterface other, int otherChild) const {
            return qtd_QAccessibleObjectEx_relationTo_int_QAccessibleInterface_int_const(qtdNativeId, child, other is null ? null : (cast(QAccessibleInterface)other).qtdNativeId, otherChild);
        }

        override         public QAccessible.Role role(int child) const {
            return cast(QAccessible.Role) qtd_QAccessibleObjectEx_role_int_const(qtdNativeId, child);
        }

        override         public int state(int child) const {
            return qtd_QAccessibleObjectEx_state_int_const(qtdNativeId, child);
        }

        override         public string text(QAccessible.Text t, int child) const {
            string res;
            qtd_QAccessibleObjectEx_text_Text_int_const(qtdNativeId, &res, t, child);
            return res;
        }
    }


extern (C) void *__QAccessibleObjectEx_entity(void *q_ptr);

QAccessibleObjectEx qtd_QAccessibleObjectEx_from_ptr(void* ret) {
    void* d_obj = __QAccessibleObjectEx_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QAccessibleObjectEx) d_obj_ref;
    } else {
        auto return_value = new QAccessibleObjectEx_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAccessibleObjectEx_QAccessibleObjectEx_QObject(void *d_ptr,
 void* object0);
private extern(C) void  qtd_QAccessibleObjectEx_actionText_int_Text_int_const(void* __this_nativeId,
 void* __d_return_value,
 int action0,
 int t1,
 int child2);
private extern(C) bool  qtd_QAccessibleObjectEx_doAction_int_int_QList(void* __this_nativeId,
 int action0,
 int child1,
 void* params2);
private extern(C) bool  qtd_QAccessibleObjectEx_isValid_const(void* __this_nativeId);
private extern(C) void*  qtd_QAccessibleObjectEx_object_const(void* __this_nativeId);
private extern(C) void  qtd_QAccessibleObjectEx_rect_int_const(void* __this_nativeId,
 QRect * __d_return_value,
 int child0);
private extern(C) void  qtd_QAccessibleObjectEx_setText_Text_int_string(void* __this_nativeId,
 int t0,
 int child1,
 string text2);
private extern(C) int  qtd_QAccessibleObjectEx_userActionCount_int_const(void* __this_nativeId,
 int child0);
// Just the private functions for abstract functions implemeneted in superclasses

private extern(C) int  qtd_QAccessibleObjectEx_childAt_int_int_const(void* __this_nativeId,
 int x0,
 int y1);

private extern(C) int  qtd_QAccessibleObjectEx_childCount_const(void* __this_nativeId);

private extern(C) int  qtd_QAccessibleObjectEx_indexOfChild_QAccessibleInterface_const(void* __this_nativeId,
 void* arg__1);

private extern(C) void*  qtd_QAccessibleObjectEx_invokeMethodEx_Method_int_QList(void* __this_nativeId,
 int method0,
 int child1,
 void* params2);

private extern(C) int  qtd_QAccessibleObjectEx_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const(void* __this_nativeId,
 int relation0,
 int index1,
 QAccessibleInterface_ConcreteWrapper** iface2);

private extern(C) int  qtd_QAccessibleObjectEx_relationTo_int_QAccessibleInterface_int_const(void* __this_nativeId,
 int child0,
 void* other1,
 int otherChild2);

private extern(C) int  qtd_QAccessibleObjectEx_role_int_const(void* __this_nativeId,
 int child0);

private extern(C) int  qtd_QAccessibleObjectEx_state_int_const(void* __this_nativeId,
 int child0);

private extern(C) void  qtd_QAccessibleObjectEx_text_Text_int_const(void* __this_nativeId,
 void* __d_return_value,
 int t0,
 int child1);



// Virtual Dispatch functions
private extern (C) void qtd_QAccessibleObjectEx_initCallBacks(void* virtuals);

extern(C) void static_init_QAccessibleObjectEx() {
    qtd_QAccessibleObjectEx_initCallBacks(null);
}

// signal handlers

