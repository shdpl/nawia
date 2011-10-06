module qt.core.QFSFileEngine;

public import qt.core.QFSFileEngine_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QAbstractFileEngine;
public import qt.core.QList;
public import qt.core.QFileInfo;
public import qt.core.QDateTime;
public import qt.core.QAbstractFileEngine;
public import qt.core.QAbstractFileEngineIterator;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QFSFileEngine : QAbstractFileEngine
{

// Functions

    public this() {
        void* ret = qtd_QFSFileEngine_QFSFileEngine(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string file) {
        void* ret = qtd_QFSFileEngine_QFSFileEngine_string(cast(void*) this, file);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QAbstractFileEngineIterator beginEntryList(int filters, QList!(string) filterNames) {
        void* ret = qtd_QFSFileEngine_beginEntryList_Filters_QList(qtdNativeId, filters, &filterNames);
        QAbstractFileEngineIterator __d_return_value = qtd_QAbstractFileEngineIterator_from_ptr(ret);

        return __d_return_value;
    }

    public final QAbstractFileEngineIterator endEntryList() {
        void* ret = qtd_QFSFileEngine_endEntryList(qtdNativeId);
        QAbstractFileEngineIterator __d_return_value = qtd_QAbstractFileEngineIterator_from_ptr(ret);

        return __d_return_value;
    }

    public final bool open(int flags, int fd) {
        return qtd_QFSFileEngine_open_OpenMode_int(qtdNativeId, flags, fd);
    }

    public bool caseSensitive() const {
        return qtd_QFSFileEngine_caseSensitive_const(qtdNativeId);
    }

    public bool close() {
        return qtd_QFSFileEngine_close(qtdNativeId);
    }

    public bool copy(string newName) {
        return qtd_QFSFileEngine_copy_string(qtdNativeId, newName);
    }

    public QList!(string) entryList(int filters, QList!(string) filterNames) const {
        auto res = QList!(string).opCall();
        qtd_QFSFileEngine_entryList_Filters_QList_const(qtdNativeId, &res, filters, &filterNames);
        return res;
    }

    public int fileFlags(int type) const {
        return qtd_QFSFileEngine_fileFlags_FileFlags_const(qtdNativeId, type);
    }

    public string fileName(QAbstractFileEngine.FileName file) const {
        string res;
        qtd_QFSFileEngine_fileName_FileName_const(qtdNativeId, &res, file);
        return res;
    }

    public QDateTime fileTime(QAbstractFileEngine.FileTime time) const {
        void* ret = qtd_QFSFileEngine_fileTime_FileTime_const(qtdNativeId, time);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public bool flush() {
        return qtd_QFSFileEngine_flush(qtdNativeId);
    }

    public int handle() const {
        return qtd_QFSFileEngine_handle_const(qtdNativeId);
    }

    public bool isRelativePath() const {
        return qtd_QFSFileEngine_isRelativePath_const(qtdNativeId);
    }

    public bool isSequential() const {
        return qtd_QFSFileEngine_isSequential_const(qtdNativeId);
    }

    public bool link(string newName) {
        return qtd_QFSFileEngine_link_string(qtdNativeId, newName);
    }

    public bool mkdir(string dirName, bool createParentDirectories) const {
        return qtd_QFSFileEngine_mkdir_string_bool_const(qtdNativeId, dirName, createParentDirectories);
    }

    public bool open(int openMode) {
        return qtd_QFSFileEngine_open_OpenMode(qtdNativeId, openMode);
    }

    public string owner(QAbstractFileEngine.FileOwner arg__1) const {
        string res;
        qtd_QFSFileEngine_owner_FileOwner_const(qtdNativeId, &res, arg__1);
        return res;
    }

    public uint ownerId(QAbstractFileEngine.FileOwner arg__1) const {
        return qtd_QFSFileEngine_ownerId_FileOwner_const(qtdNativeId, arg__1);
    }

    public long pos() const {
        return qtd_QFSFileEngine_pos_const(qtdNativeId);
    }

    public long read(char* data, long maxlen) {
        return qtd_QFSFileEngine_read_nativepointerchar_long(qtdNativeId, data, maxlen);
    }

    public long readLine(char* data, long maxlen) {
        return qtd_QFSFileEngine_readLine_nativepointerchar_long(qtdNativeId, data, maxlen);
    }

    public bool remove() {
        return qtd_QFSFileEngine_remove(qtdNativeId);
    }

    public bool rename(string newName) {
        return qtd_QFSFileEngine_rename_string(qtdNativeId, newName);
    }

    public bool rmdir(string dirName, bool recurseParentDirectories) const {
        return qtd_QFSFileEngine_rmdir_string_bool_const(qtdNativeId, dirName, recurseParentDirectories);
    }

    public bool seek(long arg__1) {
        return qtd_QFSFileEngine_seek_long(qtdNativeId, arg__1);
    }

    public void setFileName(string file) {
        qtd_QFSFileEngine_setFileName_string(qtdNativeId, file);
    }

    public bool setPermissions(uint perms) {
        return qtd_QFSFileEngine_setPermissions_uint(qtdNativeId, perms);
    }

    public bool setSize(long size) {
        return qtd_QFSFileEngine_setSize_long(qtdNativeId, size);
    }

    public long size() const {
        return qtd_QFSFileEngine_size_const(qtdNativeId);
    }

    public bool supportsExtension(QAbstractFileEngine.Extension extension) const {
        return qtd_QFSFileEngine_supportsExtension_Extension_const(qtdNativeId, extension);
    }

    public long write(const(char*) data, long len) {
        return qtd_QFSFileEngine_write_nativepointerchar_long(qtdNativeId, data, len);
    }

    public static string currentPath(string path = "") {
        string res;
        qtd_QFSFileEngine_currentPath_string(&res, path);
        return res;
    }

    public static QList!(QFileInfo) drives() {
        auto res = QList!(QFileInfo).opCall();
        qtd_QFSFileEngine_drives(&res);
        return res;
    }

    public static string homePath() {
        string res;
        qtd_QFSFileEngine_homePath(&res);
        return res;
    }

    public static string rootPath() {
        string res;
        qtd_QFSFileEngine_rootPath(&res);
        return res;
    }

    public static bool setCurrentPath(string path) {
        return qtd_QFSFileEngine_setCurrentPath_string(path);
    }

    public static string tempPath() {
        string res;
        qtd_QFSFileEngine_tempPath(&res);
        return res;
    }
// Field accessors
    static QFSFileEngine __getObject(void* nativeId) {
        return qtd_QFSFileEngine_from_ptr(nativeId);
    }

    public alias void __isQtType_QFSFileEngine;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QFSFileEngine_entity(void *q_ptr);

QFSFileEngine qtd_QFSFileEngine_from_ptr(void* ret) {
    void* d_obj = __QFSFileEngine_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QFSFileEngine) d_obj_ref;
    } else {
        auto return_value = new QFSFileEngine(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QFSFileEngine_QFSFileEngine(void *d_ptr);
private extern(C) void* qtd_QFSFileEngine_QFSFileEngine_string(void *d_ptr,
 string file0);
private extern(C) void*  qtd_QFSFileEngine_beginEntryList_Filters_QList(void* __this_nativeId,
 int filters0,
 void* filterNames1);
private extern(C) void*  qtd_QFSFileEngine_endEntryList(void* __this_nativeId);
private extern(C) bool  qtd_QFSFileEngine_open_OpenMode_int(void* __this_nativeId,
 int flags0,
 int fd1);
private extern(C) bool  qtd_QFSFileEngine_caseSensitive_const(void* __this_nativeId);
private extern(C) bool  qtd_QFSFileEngine_close(void* __this_nativeId);
private extern(C) bool  qtd_QFSFileEngine_copy_string(void* __this_nativeId,
 string newName0);
private extern(C) void  qtd_QFSFileEngine_entryList_Filters_QList_const(void* __this_nativeId,
 void* __d_return_value,
 int filters0,
 void* filterNames1);
private extern(C) int  qtd_QFSFileEngine_fileFlags_FileFlags_const(void* __this_nativeId,
 int type0);
private extern(C) void  qtd_QFSFileEngine_fileName_FileName_const(void* __this_nativeId,
 void* __d_return_value,
 int file0);
private extern(C) void*  qtd_QFSFileEngine_fileTime_FileTime_const(void* __this_nativeId,
 int time0);
private extern(C) bool  qtd_QFSFileEngine_flush(void* __this_nativeId);
private extern(C) int  qtd_QFSFileEngine_handle_const(void* __this_nativeId);
private extern(C) bool  qtd_QFSFileEngine_isRelativePath_const(void* __this_nativeId);
private extern(C) bool  qtd_QFSFileEngine_isSequential_const(void* __this_nativeId);
private extern(C) bool  qtd_QFSFileEngine_link_string(void* __this_nativeId,
 string newName0);
private extern(C) bool  qtd_QFSFileEngine_mkdir_string_bool_const(void* __this_nativeId,
 string dirName0,
 bool createParentDirectories1);
private extern(C) bool  qtd_QFSFileEngine_open_OpenMode(void* __this_nativeId,
 int openMode0);
private extern(C) void  qtd_QFSFileEngine_owner_FileOwner_const(void* __this_nativeId,
 void* __d_return_value,
 int arg__1);
private extern(C) uint  qtd_QFSFileEngine_ownerId_FileOwner_const(void* __this_nativeId,
 int arg__1);
private extern(C) long  qtd_QFSFileEngine_pos_const(void* __this_nativeId);
private extern(C) long  qtd_QFSFileEngine_read_nativepointerchar_long(void* __this_nativeId,
 char* data0,
 long maxlen1);
private extern(C) long  qtd_QFSFileEngine_readLine_nativepointerchar_long(void* __this_nativeId,
 char* data0,
 long maxlen1);
private extern(C) bool  qtd_QFSFileEngine_remove(void* __this_nativeId);
private extern(C) bool  qtd_QFSFileEngine_rename_string(void* __this_nativeId,
 string newName0);
private extern(C) bool  qtd_QFSFileEngine_rmdir_string_bool_const(void* __this_nativeId,
 string dirName0,
 bool recurseParentDirectories1);
private extern(C) bool  qtd_QFSFileEngine_seek_long(void* __this_nativeId,
 long arg__1);
private extern(C) void  qtd_QFSFileEngine_setFileName_string(void* __this_nativeId,
 string file0);
private extern(C) bool  qtd_QFSFileEngine_setPermissions_uint(void* __this_nativeId,
 uint perms0);
private extern(C) bool  qtd_QFSFileEngine_setSize_long(void* __this_nativeId,
 long size0);
private extern(C) long  qtd_QFSFileEngine_size_const(void* __this_nativeId);
private extern(C) bool  qtd_QFSFileEngine_supportsExtension_Extension_const(void* __this_nativeId,
 int extension0);
private extern(C) long  qtd_QFSFileEngine_write_nativepointerchar_long(void* __this_nativeId,
 const (char*) data0,
 long len1);
private extern(C) void  qtd_QFSFileEngine_currentPath_string(void* __d_return_value,
 string path0);
private extern(C) void  qtd_QFSFileEngine_drives(void* __d_return_value);
private extern(C) void  qtd_QFSFileEngine_homePath(void* __d_return_value);
private extern(C) void  qtd_QFSFileEngine_rootPath(void* __d_return_value);
private extern(C) bool  qtd_QFSFileEngine_setCurrentPath_string(string path0);
private extern(C) void  qtd_QFSFileEngine_tempPath(void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QFSFileEngine_initCallBacks(void* virtuals);

extern(C) void static_init_QFSFileEngine() {
    qtd_QFSFileEngine_initCallBacks(null);
}

// signal handlers

