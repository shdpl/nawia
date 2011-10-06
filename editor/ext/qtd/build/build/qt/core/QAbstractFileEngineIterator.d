module qt.core.QAbstractFileEngineIterator;

public import qt.core.QAbstractFileEngineIterator_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QFileInfo;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAbstractFileEngineIterator : QtdObject
{

// Functions

    public this(int filters, QList!(string) nameFilters) {
        void* ret = qtd_QAbstractFileEngineIterator_QAbstractFileEngineIterator_Filters_QList(cast(void*) this, filters, &nameFilters);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string currentFilePath() const {
        string res;
        qtd_QAbstractFileEngineIterator_currentFilePath_const(qtdNativeId, &res);
        return res;
    }

    public final int filters() const {
        return qtd_QAbstractFileEngineIterator_filters_const(qtdNativeId);
    }

    public final QList!(string) nameFilters() const {
        auto res = QList!(string).opCall();
        qtd_QAbstractFileEngineIterator_nameFilters_const(qtdNativeId, &res);
        return res;
    }

    public final string path() const {
        string res;
        qtd_QAbstractFileEngineIterator_path_const(qtdNativeId, &res);
        return res;
    }

    public QFileInfo currentFileInfo() const {
        void* ret = qtd_QAbstractFileEngineIterator_currentFileInfo_const(qtdNativeId);
        QFileInfo __d_return_value = new QFileInfo(ret);
        return __d_return_value;
    }

    public abstract string currentFileName() const;

    public abstract bool hasNext() const;

    public abstract string next();
// Field accessors
    static QAbstractFileEngineIterator __getObject(void* nativeId) {
        return qtd_QAbstractFileEngineIterator_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QAbstractFileEngineIterator;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QAbstractFileEngineIterator_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QAbstractFileEngineIterator_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QAbstractFileEngineIterator_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QAbstractFileEngineIterator_ConcreteWrapper : QAbstractFileEngineIterator {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public string currentFileName() const {
            string res;
            qtd_QAbstractFileEngineIterator_currentFileName_const(qtdNativeId, &res);
            return res;
        }

        override         public bool hasNext() const {
            return qtd_QAbstractFileEngineIterator_hasNext_const(qtdNativeId);
        }

        override         public string next() {
            string res;
            qtd_QAbstractFileEngineIterator_next(qtdNativeId, &res);
            return res;
        }
    }


extern (C) void *__QAbstractFileEngineIterator_entity(void *q_ptr);

QAbstractFileEngineIterator qtd_QAbstractFileEngineIterator_from_ptr(void* ret) {
    void* d_obj = __QAbstractFileEngineIterator_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QAbstractFileEngineIterator) d_obj_ref;
    } else {
        auto return_value = new QAbstractFileEngineIterator_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QAbstractFileEngineIterator_delete(void *ptr);
extern (C) void qtd_QAbstractFileEngineIterator_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAbstractFileEngineIterator_QAbstractFileEngineIterator_Filters_QList(void *d_ptr,
 int filters0,
 void* nameFilters1);
private extern(C) void  qtd_QAbstractFileEngineIterator_currentFilePath_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QAbstractFileEngineIterator_filters_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractFileEngineIterator_nameFilters_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QAbstractFileEngineIterator_path_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QAbstractFileEngineIterator_currentFileInfo_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractFileEngineIterator_currentFileName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QAbstractFileEngineIterator_hasNext_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractFileEngineIterator_next(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId) qtd_QAbstractFileEngineIterator_currentFileInfo_const_dispatch; }
extern(C) void* qtd_export_QAbstractFileEngineIterator_currentFileInfo_const_dispatch(void *dId){
    auto d_object = cast(QAbstractFileEngineIterator) dId;
    QFileInfo ret_value = d_object.currentFileInfo();
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, string* ret_str) qtd_QAbstractFileEngineIterator_currentFileName_const_dispatch; }
extern(C) void qtd_export_QAbstractFileEngineIterator_currentFileName_const_dispatch(void *dId, string* ret_str){
    auto d_object = cast(QAbstractFileEngineIterator) dId;
    string _d_str = d_object.currentFileName();
    *ret_str = _d_str;
}

extern(C){ extern bool function(void *dId) qtd_QAbstractFileEngineIterator_hasNext_const_dispatch; }
extern(C) bool qtd_export_QAbstractFileEngineIterator_hasNext_const_dispatch(void *dId){
    auto d_object = cast(QAbstractFileEngineIterator) dId;
    auto return_value = d_object.hasNext();
    return return_value;
}

extern(C){ extern void function(void *dId, string* ret_str) qtd_QAbstractFileEngineIterator_next_dispatch; }
extern(C) void qtd_export_QAbstractFileEngineIterator_next_dispatch(void *dId, string* ret_str){
    auto d_object = cast(QAbstractFileEngineIterator) dId;
    string _d_str = d_object.next();
    *ret_str = _d_str;
}

private extern (C) void qtd_QAbstractFileEngineIterator_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractFileEngineIterator() {
    void*[4] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractFileEngineIterator_currentFileInfo_const_dispatch;
    virt_arr[1] = &qtd_export_QAbstractFileEngineIterator_currentFileName_const_dispatch;
    virt_arr[2] = &qtd_export_QAbstractFileEngineIterator_hasNext_const_dispatch;
    virt_arr[3] = &qtd_export_QAbstractFileEngineIterator_next_dispatch;
    qtd_QAbstractFileEngineIterator_initCallBacks(virt_arr.ptr);
}

// signal handlers

