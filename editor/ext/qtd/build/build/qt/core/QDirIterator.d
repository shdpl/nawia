module qt.core.QDirIterator;

public import qt.core.QDirIterator_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QFileInfo;
public import qt.core.QDir;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDirIterator : QtdObject
{
    public enum IteratorFlag {
        NoIteratorFlags = 0,
        FollowSymlinks = 1,
        Subdirectories = 2
    }

    alias IteratorFlag.NoIteratorFlags NoIteratorFlags;
    alias IteratorFlag.FollowSymlinks FollowSymlinks;
    alias IteratorFlag.Subdirectories Subdirectories;


// Functions

    public this(const(QDir) dir, int flags = 0) {
        void* ret = qtd_QDirIterator_QDirIterator_QDir_IteratorFlags(cast(void*) this, dir is null ? null : (cast(QDir)dir).qtdNativeId, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string path, int filter, int flags = 0) {
        void* ret = qtd_QDirIterator_QDirIterator_string_Filters_IteratorFlags(cast(void*) this, path, filter, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string path, int flags = 0) {
        void* ret = qtd_QDirIterator_QDirIterator_string_IteratorFlags(cast(void*) this, path, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string path, QList!(string) nameFilters, int filters = -1, int flags = 0) {
        void* ret = qtd_QDirIterator_QDirIterator_string_QList_Filters_IteratorFlags(cast(void*) this, path, &nameFilters, filters, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QFileInfo fileInfo() const {
        void* ret = qtd_QDirIterator_fileInfo_const(qtdNativeId);
        QFileInfo __d_return_value = new QFileInfo(ret);
        return __d_return_value;
    }

    public final string fileName() const {
        string res;
        qtd_QDirIterator_fileName_const(qtdNativeId, &res);
        return res;
    }

    public final string filePath() const {
        string res;
        qtd_QDirIterator_filePath_const(qtdNativeId, &res);
        return res;
    }

    public final bool hasNext() const {
        return qtd_QDirIterator_hasNext_const(qtdNativeId);
    }

    public final string next() {
        string res;
        qtd_QDirIterator_next(qtdNativeId, &res);
        return res;
    }

    public final string path() const {
        string res;
        qtd_QDirIterator_path_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    static QDirIterator __getObject(void* nativeId) {
        return qtd_QDirIterator_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QDirIterator;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDirIterator_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDirIterator_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDirIterator_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QDirIterator_entity(void *q_ptr);

QDirIterator qtd_QDirIterator_from_ptr(void* ret) {
    auto return_value = new QDirIterator(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QDirIterator_delete(void *ptr);
extern (C) void qtd_QDirIterator_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDirIterator_QDirIterator_QDir_IteratorFlags(void *d_ptr,
 void* dir0,
 int flags1);
private extern(C) void* qtd_QDirIterator_QDirIterator_string_Filters_IteratorFlags(void *d_ptr,
 string path0,
 int filter1,
 int flags2);
private extern(C) void* qtd_QDirIterator_QDirIterator_string_IteratorFlags(void *d_ptr,
 string path0,
 int flags1);
private extern(C) void* qtd_QDirIterator_QDirIterator_string_QList_Filters_IteratorFlags(void *d_ptr,
 string path0,
 void* nameFilters1,
 int filters2,
 int flags3);
private extern(C) void*  qtd_QDirIterator_fileInfo_const(void* __this_nativeId);
private extern(C) void  qtd_QDirIterator_fileName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QDirIterator_filePath_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QDirIterator_hasNext_const(void* __this_nativeId);
private extern(C) void  qtd_QDirIterator_next(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QDirIterator_path_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QDirIterator_initCallBacks(void* virtuals);

extern(C) void static_init_QDirIterator() {
    qtd_QDirIterator_initCallBacks(null);
}

// signal handlers

