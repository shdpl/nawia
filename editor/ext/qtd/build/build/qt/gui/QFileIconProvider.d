module qt.gui.QFileIconProvider;

public import qt.gui.QFileIconProvider_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QFileInfo;
public import qt.gui.QIcon;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QFileIconProvider : QtdObject
{
    public enum IconType {
        Computer = 0,
        Desktop = 1,
        Trashcan = 2,
        Network = 3,
        Drive = 4,
        Folder = 5,
        File = 6
    }

    alias IconType.Computer Computer;
    alias IconType.Desktop Desktop;
    alias IconType.Trashcan Trashcan;
    alias IconType.Network Network;
    alias IconType.Drive Drive;
    alias IconType.Folder Folder;
    alias IconType.File File;


// Functions

    public this() {
        void* ret = qtd_QFileIconProvider_QFileIconProvider(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public QIcon icon(QFileIconProvider.IconType type) const {
        void* ret = qtd_QFileIconProvider_icon_IconType_const(qtdNativeId, type);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public QIcon icon(const(QFileInfo) info) const {
        void* ret = qtd_QFileIconProvider_icon_QFileInfo_const(qtdNativeId, info is null ? null : (cast(QFileInfo)info).qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public string type(const(QFileInfo) info) const {
        string res;
        qtd_QFileIconProvider_type_QFileInfo_const(qtdNativeId, &res, info is null ? null : (cast(QFileInfo)info).qtdNativeId);
        return res;
    }
// Field accessors
    static QFileIconProvider __getObject(void* nativeId) {
        return qtd_QFileIconProvider_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QFileIconProvider;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QFileIconProvider_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QFileIconProvider_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QFileIconProvider_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QFileIconProvider_entity(void *q_ptr);

QFileIconProvider qtd_QFileIconProvider_from_ptr(void* ret) {
    void* d_obj = __QFileIconProvider_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QFileIconProvider) d_obj_ref;
    } else {
        auto return_value = new QFileIconProvider(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QFileIconProvider_delete(void *ptr);
extern (C) void qtd_QFileIconProvider_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QFileIconProvider_QFileIconProvider(void *d_ptr);
private extern(C) void*  qtd_QFileIconProvider_icon_IconType_const(void* __this_nativeId,
 int type0);
private extern(C) void*  qtd_QFileIconProvider_icon_QFileInfo_const(void* __this_nativeId,
 void* info0);
private extern(C) void  qtd_QFileIconProvider_type_QFileInfo_const(void* __this_nativeId,
 void* __d_return_value,
 void* info0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId, int type0) qtd_QFileIconProvider_icon_IconType_const_dispatch; }
extern(C) void* qtd_export_QFileIconProvider_icon_IconType_const_dispatch(void *dId, int type0){
    auto d_object = cast(QFileIconProvider) dId;
    auto type0_enum = cast(QFileIconProvider.IconType) type0;
    QIcon ret_value = d_object.icon(type0_enum);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void* function(void *dId, void* info0) qtd_QFileIconProvider_icon_QFileInfo_const_dispatch; }
extern(C) void* qtd_export_QFileIconProvider_icon_QFileInfo_const_dispatch(void *dId, void* info0){
    auto d_object = cast(QFileIconProvider) dId;
    scope info0_d_ref = new QFileInfo(info0, QtdObjectInitFlags.onStack);
    QIcon ret_value = d_object.icon(info0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, string* ret_str, void* info0) qtd_QFileIconProvider_type_QFileInfo_const_dispatch; }
extern(C) void qtd_export_QFileIconProvider_type_QFileInfo_const_dispatch(void *dId, string* ret_str, void* info0){
    auto d_object = cast(QFileIconProvider) dId;
    scope info0_d_ref = new QFileInfo(info0, QtdObjectInitFlags.onStack);
    string _d_str = d_object.type(info0_d_ref);
    *ret_str = _d_str;
}

private extern (C) void qtd_QFileIconProvider_initCallBacks(void* virtuals);

extern(C) void static_init_QFileIconProvider() {
    void*[3] virt_arr;
    virt_arr[0] = &qtd_export_QFileIconProvider_icon_IconType_const_dispatch;
    virt_arr[1] = &qtd_export_QFileIconProvider_icon_QFileInfo_const_dispatch;
    virt_arr[2] = &qtd_export_QFileIconProvider_type_QFileInfo_const_dispatch;
    qtd_QFileIconProvider_initCallBacks(virt_arr.ptr);
}

// signal handlers

