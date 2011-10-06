module qt.core.QAbstractFileEngine;

public import qt.core.QAbstractFileEngine_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QFile;
public import qt.core.QDateTime;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QAbstractFileEngine : QtdObject
{
    public enum FileName {
        DefaultName = 0,
        BaseName = 1,
        PathName = 2,
        AbsoluteName = 3,
        AbsolutePathName = 4,
        LinkName = 5,
        CanonicalName = 6,
        CanonicalPathName = 7,
        BundleName = 8,
        NFileNames = 9
    }

    alias FileName.DefaultName DefaultName;
    alias FileName.BaseName BaseName;
    alias FileName.PathName PathName;
    alias FileName.AbsoluteName AbsoluteName;
    alias FileName.AbsolutePathName AbsolutePathName;
    alias FileName.LinkName LinkName;
    alias FileName.CanonicalName CanonicalName;
    alias FileName.CanonicalPathName CanonicalPathName;
    alias FileName.BundleName BundleName;
    alias FileName.NFileNames NFileNames;

    public enum FileTime {
        CreationTime = 0,
        ModificationTime = 1,
        AccessTime = 2
    }

    alias FileTime.CreationTime CreationTime;
    alias FileTime.ModificationTime ModificationTime;
    alias FileTime.AccessTime AccessTime;

    public enum FileOwner {
        OwnerUser = 0,
        OwnerGroup = 1
    }

    alias FileOwner.OwnerUser OwnerUser;
    alias FileOwner.OwnerGroup OwnerGroup;

    public enum Extension {
        AtEndExtension = 0,
        FastReadLineExtension = 1,
        MapExtension = 2,
        UnMapExtension = 3
    }

    alias Extension.AtEndExtension AtEndExtension;
    alias Extension.FastReadLineExtension FastReadLineExtension;
    alias Extension.MapExtension MapExtension;
    alias Extension.UnMapExtension UnMapExtension;

    public enum FileFlag {
        ReadOwnerPerm = 16384,
        WriteOwnerPerm = 8192,
        ExeOwnerPerm = 4096,
        ReadUserPerm = 1024,
        WriteUserPerm = 512,
        ExeUserPerm = 256,
        ReadGroupPerm = 64,
        WriteGroupPerm = 32,
        ExeGroupPerm = 16,
        ReadOtherPerm = 4,
        WriteOtherPerm = 2,
        ExeOtherPerm = 1,
        LinkType = 65536,
        FileType = 131072,
        DirectoryType = 262144,
        BundleType = 524288,
        HiddenFlag = 1048576,
        LocalDiskFlag = 2097152,
        ExistsFlag = 4194304,
        RootFlag = 8388608,
        Refresh = 16777216,
        PermsMask = 65535,
        TypesMask = 983040,
        FlagsMask = 267386880,
        FileInfoAll = 268435455
    }

    alias FileFlag.ReadOwnerPerm ReadOwnerPerm;
    alias FileFlag.WriteOwnerPerm WriteOwnerPerm;
    alias FileFlag.ExeOwnerPerm ExeOwnerPerm;
    alias FileFlag.ReadUserPerm ReadUserPerm;
    alias FileFlag.WriteUserPerm WriteUserPerm;
    alias FileFlag.ExeUserPerm ExeUserPerm;
    alias FileFlag.ReadGroupPerm ReadGroupPerm;
    alias FileFlag.WriteGroupPerm WriteGroupPerm;
    alias FileFlag.ExeGroupPerm ExeGroupPerm;
    alias FileFlag.ReadOtherPerm ReadOtherPerm;
    alias FileFlag.WriteOtherPerm WriteOtherPerm;
    alias FileFlag.ExeOtherPerm ExeOtherPerm;
    alias FileFlag.LinkType LinkType;
    alias FileFlag.FileType FileType;
    alias FileFlag.DirectoryType DirectoryType;
    alias FileFlag.BundleType BundleType;
    alias FileFlag.HiddenFlag HiddenFlag;
    alias FileFlag.LocalDiskFlag LocalDiskFlag;
    alias FileFlag.ExistsFlag ExistsFlag;
    alias FileFlag.RootFlag RootFlag;
    alias FileFlag.Refresh Refresh;
    alias FileFlag.PermsMask PermsMask;
    alias FileFlag.TypesMask TypesMask;
    alias FileFlag.FlagsMask FlagsMask;
    alias FileFlag.FileInfoAll FileInfoAll;


// Functions

    protected this() {
        void* ret = qtd_QAbstractFileEngine_QAbstractFileEngine(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool atEnd() const {
        return qtd_QAbstractFileEngine_atEnd_const(qtdNativeId);
    }

    public final QFile.FileError error() const {
        return cast(QFile.FileError) qtd_QAbstractFileEngine_error_const(qtdNativeId);
    }

    public final string errorString() const {
        string res;
        qtd_QAbstractFileEngine_errorString_const(qtdNativeId, &res);
        return res;
    }

    public final ubyte* map(long offset, long size, QFile.MemoryMapFlags flags) {
        return qtd_QAbstractFileEngine_map_long_long_MemoryMapFlags(qtdNativeId, offset, size, flags);
    }

    protected final void setError(QFile.FileError error, string str) {
        qtd_QAbstractFileEngine_setError_FileError_string(qtdNativeId, error, str);
    }

    public bool caseSensitive() const {
        return qtd_QAbstractFileEngine_caseSensitive_const(qtdNativeId);
    }

    public bool close() {
        return qtd_QAbstractFileEngine_close(qtdNativeId);
    }

    public bool copy(string newName) {
        return qtd_QAbstractFileEngine_copy_string(qtdNativeId, newName);
    }

    public QList!(string) entryList(int filters, QList!(string) filterNames) const {
        auto res = QList!(string).opCall();
        qtd_QAbstractFileEngine_entryList_Filters_QList_const(qtdNativeId, &res, filters, &filterNames);
        return res;
    }

    public int fileFlags(int type = 268435455) const {
        return qtd_QAbstractFileEngine_fileFlags_FileFlags_const(qtdNativeId, type);
    }

    public string fileName(QAbstractFileEngine.FileName file = QAbstractFileEngine.FileName.DefaultName) const {
        string res;
        qtd_QAbstractFileEngine_fileName_FileName_const(qtdNativeId, &res, file);
        return res;
    }

    public QDateTime fileTime(QAbstractFileEngine.FileTime time) const {
        void* ret = qtd_QAbstractFileEngine_fileTime_FileTime_const(qtdNativeId, time);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public bool flush() {
        return qtd_QAbstractFileEngine_flush(qtdNativeId);
    }

    public int handle() const {
        return qtd_QAbstractFileEngine_handle_const(qtdNativeId);
    }

    public bool isRelativePath() const {
        return qtd_QAbstractFileEngine_isRelativePath_const(qtdNativeId);
    }

    public bool isSequential() const {
        return qtd_QAbstractFileEngine_isSequential_const(qtdNativeId);
    }

    public bool link(string newName) {
        return qtd_QAbstractFileEngine_link_string(qtdNativeId, newName);
    }

    public bool mkdir(string dirName, bool createParentDirectories) const {
        return qtd_QAbstractFileEngine_mkdir_string_bool_const(qtdNativeId, dirName, createParentDirectories);
    }

    public bool open(int openMode) {
        return qtd_QAbstractFileEngine_open_OpenMode(qtdNativeId, openMode);
    }

    public string owner(QAbstractFileEngine.FileOwner arg__1) const {
        string res;
        qtd_QAbstractFileEngine_owner_FileOwner_const(qtdNativeId, &res, arg__1);
        return res;
    }

    public uint ownerId(QAbstractFileEngine.FileOwner arg__1) const {
        return qtd_QAbstractFileEngine_ownerId_FileOwner_const(qtdNativeId, arg__1);
    }

    public long pos() const {
        return qtd_QAbstractFileEngine_pos_const(qtdNativeId);
    }

    public long read(char* data, long maxlen) {
        return qtd_QAbstractFileEngine_read_nativepointerchar_long(qtdNativeId, data, maxlen);
    }

    public long readLine(char* data, long maxlen) {
        return qtd_QAbstractFileEngine_readLine_nativepointerchar_long(qtdNativeId, data, maxlen);
    }

    public bool remove() {
        return qtd_QAbstractFileEngine_remove(qtdNativeId);
    }

    public bool rename(string newName) {
        return qtd_QAbstractFileEngine_rename_string(qtdNativeId, newName);
    }

    public bool rmdir(string dirName, bool recurseParentDirectories) const {
        return qtd_QAbstractFileEngine_rmdir_string_bool_const(qtdNativeId, dirName, recurseParentDirectories);
    }

    public bool seek(long pos) {
        return qtd_QAbstractFileEngine_seek_long(qtdNativeId, pos);
    }

    public void setFileName(string file) {
        qtd_QAbstractFileEngine_setFileName_string(qtdNativeId, file);
    }

    public bool setPermissions(uint perms) {
        return qtd_QAbstractFileEngine_setPermissions_uint(qtdNativeId, perms);
    }

    public bool setSize(long size) {
        return qtd_QAbstractFileEngine_setSize_long(qtdNativeId, size);
    }

    public long size() const {
        return qtd_QAbstractFileEngine_size_const(qtdNativeId);
    }

    public bool supportsExtension(QAbstractFileEngine.Extension extension) const {
        return qtd_QAbstractFileEngine_supportsExtension_Extension_const(qtdNativeId, extension);
    }

    public long write(const(char*) data, long len) {
        return qtd_QAbstractFileEngine_write_nativepointerchar_long(qtdNativeId, data, len);
    }

    public static QAbstractFileEngine create(string fileName) {
        void* ret = qtd_QAbstractFileEngine_create_string(fileName);
        QAbstractFileEngine __d_return_value = qtd_QAbstractFileEngine_from_ptr(ret);

        return __d_return_value;
    }
// Field accessors
    static QAbstractFileEngine __getObject(void* nativeId) {
        return qtd_QAbstractFileEngine_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QAbstractFileEngine;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QAbstractFileEngine_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QAbstractFileEngine_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QAbstractFileEngine_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /**
     * Adds <tt>path</tt> to the set of paths in which Qt Jambi should search for resources. Resources
     * can be accessed using the "classpath:" scheme.
     */
    /*    public static void addSearchPathForResourceEngine(String path)
    {
    qt.internal.QClassPathEngine.addSearchPath(path);
    }
     */
    /**
     * Removes <tt>path</tt> from the set of paths in which Qt Jambi searches
     * for resources.
     */
    /*    public static void removeSearchPathForResourceEngine(String path)
    {
    qt.internal.QClassPathEngine.removeSearchPath(path);
    }
     */

}

extern (C) void *__QAbstractFileEngine_entity(void *q_ptr);

QAbstractFileEngine qtd_QAbstractFileEngine_from_ptr(void* ret) {
    void* d_obj = __QAbstractFileEngine_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QAbstractFileEngine) d_obj_ref;
    } else {
        auto return_value = new QAbstractFileEngine(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QAbstractFileEngine_delete(void *ptr);
extern (C) void qtd_QAbstractFileEngine_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAbstractFileEngine_QAbstractFileEngine(void *d_ptr);
private extern(C) bool  qtd_QAbstractFileEngine_atEnd_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractFileEngine_error_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractFileEngine_errorString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) ubyte*  qtd_QAbstractFileEngine_map_long_long_MemoryMapFlags(void* __this_nativeId,
 long offset0,
 long size1,
 int flags2);
private extern(C) void  qtd_QAbstractFileEngine_setError_FileError_string(void* __this_nativeId,
 int error0,
 string str1);
private extern(C) bool  qtd_QAbstractFileEngine_caseSensitive_const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractFileEngine_close(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractFileEngine_copy_string(void* __this_nativeId,
 string newName0);
private extern(C) void  qtd_QAbstractFileEngine_entryList_Filters_QList_const(void* __this_nativeId,
 void* __d_return_value,
 int filters0,
 void* filterNames1);
private extern(C) int  qtd_QAbstractFileEngine_fileFlags_FileFlags_const(void* __this_nativeId,
 int type0);
private extern(C) void  qtd_QAbstractFileEngine_fileName_FileName_const(void* __this_nativeId,
 void* __d_return_value,
 int file0);
private extern(C) void*  qtd_QAbstractFileEngine_fileTime_FileTime_const(void* __this_nativeId,
 int time0);
private extern(C) bool  qtd_QAbstractFileEngine_flush(void* __this_nativeId);
private extern(C) int  qtd_QAbstractFileEngine_handle_const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractFileEngine_isRelativePath_const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractFileEngine_isSequential_const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractFileEngine_link_string(void* __this_nativeId,
 string newName0);
private extern(C) bool  qtd_QAbstractFileEngine_mkdir_string_bool_const(void* __this_nativeId,
 string dirName0,
 bool createParentDirectories1);
private extern(C) bool  qtd_QAbstractFileEngine_open_OpenMode(void* __this_nativeId,
 int openMode0);
private extern(C) void  qtd_QAbstractFileEngine_owner_FileOwner_const(void* __this_nativeId,
 void* __d_return_value,
 int arg__1);
private extern(C) uint  qtd_QAbstractFileEngine_ownerId_FileOwner_const(void* __this_nativeId,
 int arg__1);
private extern(C) long  qtd_QAbstractFileEngine_pos_const(void* __this_nativeId);
private extern(C) long  qtd_QAbstractFileEngine_read_nativepointerchar_long(void* __this_nativeId,
 char* data0,
 long maxlen1);
private extern(C) long  qtd_QAbstractFileEngine_readLine_nativepointerchar_long(void* __this_nativeId,
 char* data0,
 long maxlen1);
private extern(C) bool  qtd_QAbstractFileEngine_remove(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractFileEngine_rename_string(void* __this_nativeId,
 string newName0);
private extern(C) bool  qtd_QAbstractFileEngine_rmdir_string_bool_const(void* __this_nativeId,
 string dirName0,
 bool recurseParentDirectories1);
private extern(C) bool  qtd_QAbstractFileEngine_seek_long(void* __this_nativeId,
 long pos0);
private extern(C) void  qtd_QAbstractFileEngine_setFileName_string(void* __this_nativeId,
 string file0);
private extern(C) bool  qtd_QAbstractFileEngine_setPermissions_uint(void* __this_nativeId,
 uint perms0);
private extern(C) bool  qtd_QAbstractFileEngine_setSize_long(void* __this_nativeId,
 long size0);
private extern(C) long  qtd_QAbstractFileEngine_size_const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractFileEngine_supportsExtension_Extension_const(void* __this_nativeId,
 int extension0);
private extern(C) long  qtd_QAbstractFileEngine_write_nativepointerchar_long(void* __this_nativeId,
 const (char*) data0,
 long len1);
private extern(C) void*  qtd_QAbstractFileEngine_create_string(string fileName0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId) qtd_QAbstractFileEngine_caseSensitive_const_dispatch; }
extern(C) bool qtd_export_QAbstractFileEngine_caseSensitive_const_dispatch(void *dId){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto return_value = d_object.caseSensitive();
    return return_value;
}

extern(C){ extern bool function(void *dId) qtd_QAbstractFileEngine_close_dispatch; }
extern(C) bool qtd_export_QAbstractFileEngine_close_dispatch(void *dId){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto return_value = d_object.close();
    return return_value;
}

extern(C){ extern bool function(void *dId, wchar* newName0, int newName0_size) qtd_QAbstractFileEngine_copy_string_dispatch; }
extern(C) bool qtd_export_QAbstractFileEngine_copy_string_dispatch(void *dId, wchar* newName0, int newName0_size){
    auto d_object = cast(QAbstractFileEngine) dId;
    string newName0_d_ref = toUTF8(newName0[0..newName0_size]);
    auto return_value = d_object.copy(newName0_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId, QList!(string)* __d_arr, int filters0, void* filterNames1) qtd_QAbstractFileEngine_entryList_Filters_QList_const_dispatch; }
extern(C) void qtd_export_QAbstractFileEngine_entryList_Filters_QList_const_dispatch(void *dId, QList!(string)* __d_arr, int filters0, void* filterNames1){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto filterNames1_d_ref = cast(QList!(string)*)filterNames1;

    auto return_value = d_object.entryList(filters0, *filterNames1_d_ref);
    *__d_arr = return_value;
}

extern(C){ extern int function(void *dId, int type0) qtd_QAbstractFileEngine_fileFlags_FileFlags_const_dispatch; }
extern(C) int qtd_export_QAbstractFileEngine_fileFlags_FileFlags_const_dispatch(void *dId, int type0){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto return_value = d_object.fileFlags(type0);
    return return_value;
}

extern(C){ extern void function(void *dId, string* ret_str, int file0) qtd_QAbstractFileEngine_fileName_FileName_const_dispatch; }
extern(C) void qtd_export_QAbstractFileEngine_fileName_FileName_const_dispatch(void *dId, string* ret_str, int file0){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto file0_enum = cast(QAbstractFileEngine.FileName) file0;
    string _d_str = d_object.fileName(file0_enum);
    *ret_str = _d_str;
}

extern(C){ extern void* function(void *dId, int time0) qtd_QAbstractFileEngine_fileTime_FileTime_const_dispatch; }
extern(C) void* qtd_export_QAbstractFileEngine_fileTime_FileTime_const_dispatch(void *dId, int time0){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto time0_enum = cast(QAbstractFileEngine.FileTime) time0;
    QDateTime ret_value = d_object.fileTime(time0_enum);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern bool function(void *dId) qtd_QAbstractFileEngine_flush_dispatch; }
extern(C) bool qtd_export_QAbstractFileEngine_flush_dispatch(void *dId){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto return_value = d_object.flush();
    return return_value;
}

extern(C){ extern int function(void *dId) qtd_QAbstractFileEngine_handle_const_dispatch; }
extern(C) int qtd_export_QAbstractFileEngine_handle_const_dispatch(void *dId){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto return_value = d_object.handle();
    return return_value;
}

extern(C){ extern bool function(void *dId) qtd_QAbstractFileEngine_isRelativePath_const_dispatch; }
extern(C) bool qtd_export_QAbstractFileEngine_isRelativePath_const_dispatch(void *dId){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto return_value = d_object.isRelativePath();
    return return_value;
}

extern(C){ extern bool function(void *dId) qtd_QAbstractFileEngine_isSequential_const_dispatch; }
extern(C) bool qtd_export_QAbstractFileEngine_isSequential_const_dispatch(void *dId){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto return_value = d_object.isSequential();
    return return_value;
}

extern(C){ extern bool function(void *dId, wchar* newName0, int newName0_size) qtd_QAbstractFileEngine_link_string_dispatch; }
extern(C) bool qtd_export_QAbstractFileEngine_link_string_dispatch(void *dId, wchar* newName0, int newName0_size){
    auto d_object = cast(QAbstractFileEngine) dId;
    string newName0_d_ref = toUTF8(newName0[0..newName0_size]);
    auto return_value = d_object.link(newName0_d_ref);
    return return_value;
}

extern(C){ extern bool function(void *dId, wchar* dirName0, int dirName0_size, bool createParentDirectories1) qtd_QAbstractFileEngine_mkdir_string_bool_const_dispatch; }
extern(C) bool qtd_export_QAbstractFileEngine_mkdir_string_bool_const_dispatch(void *dId, wchar* dirName0, int dirName0_size, bool createParentDirectories1){
    auto d_object = cast(QAbstractFileEngine) dId;
    string dirName0_d_ref = toUTF8(dirName0[0..dirName0_size]);
    auto return_value = d_object.mkdir(dirName0_d_ref, createParentDirectories1);
    return return_value;
}

extern(C){ extern bool function(void *dId, int openMode0) qtd_QAbstractFileEngine_open_OpenMode_dispatch; }
extern(C) bool qtd_export_QAbstractFileEngine_open_OpenMode_dispatch(void *dId, int openMode0){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto return_value = d_object.open(openMode0);
    return return_value;
}

extern(C){ extern void function(void *dId, string* ret_str, int arg__1) qtd_QAbstractFileEngine_owner_FileOwner_const_dispatch; }
extern(C) void qtd_export_QAbstractFileEngine_owner_FileOwner_const_dispatch(void *dId, string* ret_str, int arg__1){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto arg__1_enum = cast(QAbstractFileEngine.FileOwner) arg__1;
    string _d_str = d_object.owner(arg__1_enum);
    *ret_str = _d_str;
}

extern(C){ extern uint function(void *dId, int arg__1) qtd_QAbstractFileEngine_ownerId_FileOwner_const_dispatch; }
extern(C) uint qtd_export_QAbstractFileEngine_ownerId_FileOwner_const_dispatch(void *dId, int arg__1){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto arg__1_enum = cast(QAbstractFileEngine.FileOwner) arg__1;
    auto return_value = d_object.ownerId(arg__1_enum);
    return return_value;
}

extern(C){ extern qint64 function(void *dId) qtd_QAbstractFileEngine_pos_const_dispatch; }
extern(C) qint64 qtd_export_QAbstractFileEngine_pos_const_dispatch(void *dId){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto return_value = d_object.pos();
    return return_value;
}

extern(C){ extern qint64 function(void *dId, char* data0, long maxlen1) qtd_QAbstractFileEngine_read_nativepointerchar_long_dispatch; }
extern(C) qint64 qtd_export_QAbstractFileEngine_read_nativepointerchar_long_dispatch(void *dId, char* data0, long maxlen1){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto return_value = d_object.read(data0, maxlen1);
    return return_value;
}

extern(C){ extern qint64 function(void *dId, char* data0, long maxlen1) qtd_QAbstractFileEngine_readLine_nativepointerchar_long_dispatch; }
extern(C) qint64 qtd_export_QAbstractFileEngine_readLine_nativepointerchar_long_dispatch(void *dId, char* data0, long maxlen1){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto return_value = d_object.readLine(data0, maxlen1);
    return return_value;
}

extern(C){ extern bool function(void *dId) qtd_QAbstractFileEngine_remove_dispatch; }
extern(C) bool qtd_export_QAbstractFileEngine_remove_dispatch(void *dId){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto return_value = d_object.remove();
    return return_value;
}

extern(C){ extern bool function(void *dId, wchar* newName0, int newName0_size) qtd_QAbstractFileEngine_rename_string_dispatch; }
extern(C) bool qtd_export_QAbstractFileEngine_rename_string_dispatch(void *dId, wchar* newName0, int newName0_size){
    auto d_object = cast(QAbstractFileEngine) dId;
    string newName0_d_ref = toUTF8(newName0[0..newName0_size]);
    auto return_value = d_object.rename(newName0_d_ref);
    return return_value;
}

extern(C){ extern bool function(void *dId, wchar* dirName0, int dirName0_size, bool recurseParentDirectories1) qtd_QAbstractFileEngine_rmdir_string_bool_const_dispatch; }
extern(C) bool qtd_export_QAbstractFileEngine_rmdir_string_bool_const_dispatch(void *dId, wchar* dirName0, int dirName0_size, bool recurseParentDirectories1){
    auto d_object = cast(QAbstractFileEngine) dId;
    string dirName0_d_ref = toUTF8(dirName0[0..dirName0_size]);
    auto return_value = d_object.rmdir(dirName0_d_ref, recurseParentDirectories1);
    return return_value;
}

extern(C){ extern bool function(void *dId, long pos0) qtd_QAbstractFileEngine_seek_long_dispatch; }
extern(C) bool qtd_export_QAbstractFileEngine_seek_long_dispatch(void *dId, long pos0){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto return_value = d_object.seek(pos0);
    return return_value;
}

extern(C){ extern void function(void *dId, wchar* file0, int file0_size) qtd_QAbstractFileEngine_setFileName_string_dispatch; }
extern(C) void qtd_export_QAbstractFileEngine_setFileName_string_dispatch(void *dId, wchar* file0, int file0_size){
    auto d_object = cast(QAbstractFileEngine) dId;
    string file0_d_ref = toUTF8(file0[0..file0_size]);
    d_object.setFileName(file0_d_ref);
}

extern(C){ extern bool function(void *dId, uint perms0) qtd_QAbstractFileEngine_setPermissions_uint_dispatch; }
extern(C) bool qtd_export_QAbstractFileEngine_setPermissions_uint_dispatch(void *dId, uint perms0){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto return_value = d_object.setPermissions(perms0);
    return return_value;
}

extern(C){ extern bool function(void *dId, long size0) qtd_QAbstractFileEngine_setSize_long_dispatch; }
extern(C) bool qtd_export_QAbstractFileEngine_setSize_long_dispatch(void *dId, long size0){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto return_value = d_object.setSize(size0);
    return return_value;
}

extern(C){ extern qint64 function(void *dId) qtd_QAbstractFileEngine_size_const_dispatch; }
extern(C) qint64 qtd_export_QAbstractFileEngine_size_const_dispatch(void *dId){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto return_value = d_object.size();
    return return_value;
}

extern(C){ extern bool function(void *dId, int extension0) qtd_QAbstractFileEngine_supportsExtension_Extension_const_dispatch; }
extern(C) bool qtd_export_QAbstractFileEngine_supportsExtension_Extension_const_dispatch(void *dId, int extension0){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto extension0_enum = cast(QAbstractFileEngine.Extension) extension0;
    auto return_value = d_object.supportsExtension(extension0_enum);
    return return_value;
}

extern(C){ extern qint64 function(void *dId, const (char*) data0, long len1) qtd_QAbstractFileEngine_write_nativepointerchar_long_dispatch; }
extern(C) qint64 qtd_export_QAbstractFileEngine_write_nativepointerchar_long_dispatch(void *dId, const (char*) data0, long len1){
    auto d_object = cast(QAbstractFileEngine) dId;
    auto return_value = d_object.write(data0, len1);
    return return_value;
}

private extern (C) void qtd_QAbstractFileEngine_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractFileEngine() {
    void*[29] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractFileEngine_caseSensitive_const_dispatch;
    virt_arr[1] = &qtd_export_QAbstractFileEngine_close_dispatch;
    virt_arr[2] = &qtd_export_QAbstractFileEngine_copy_string_dispatch;
    virt_arr[3] = &qtd_export_QAbstractFileEngine_entryList_Filters_QList_const_dispatch;
    virt_arr[4] = &qtd_export_QAbstractFileEngine_fileFlags_FileFlags_const_dispatch;
    virt_arr[5] = &qtd_export_QAbstractFileEngine_fileName_FileName_const_dispatch;
    virt_arr[6] = &qtd_export_QAbstractFileEngine_fileTime_FileTime_const_dispatch;
    virt_arr[7] = &qtd_export_QAbstractFileEngine_flush_dispatch;
    virt_arr[8] = &qtd_export_QAbstractFileEngine_handle_const_dispatch;
    virt_arr[9] = &qtd_export_QAbstractFileEngine_isRelativePath_const_dispatch;
    virt_arr[10] = &qtd_export_QAbstractFileEngine_isSequential_const_dispatch;
    virt_arr[11] = &qtd_export_QAbstractFileEngine_link_string_dispatch;
    virt_arr[12] = &qtd_export_QAbstractFileEngine_mkdir_string_bool_const_dispatch;
    virt_arr[13] = &qtd_export_QAbstractFileEngine_open_OpenMode_dispatch;
    virt_arr[14] = &qtd_export_QAbstractFileEngine_owner_FileOwner_const_dispatch;
    virt_arr[15] = &qtd_export_QAbstractFileEngine_ownerId_FileOwner_const_dispatch;
    virt_arr[16] = &qtd_export_QAbstractFileEngine_pos_const_dispatch;
    virt_arr[17] = &qtd_export_QAbstractFileEngine_read_nativepointerchar_long_dispatch;
    virt_arr[18] = &qtd_export_QAbstractFileEngine_readLine_nativepointerchar_long_dispatch;
    virt_arr[19] = &qtd_export_QAbstractFileEngine_remove_dispatch;
    virt_arr[20] = &qtd_export_QAbstractFileEngine_rename_string_dispatch;
    virt_arr[21] = &qtd_export_QAbstractFileEngine_rmdir_string_bool_const_dispatch;
    virt_arr[22] = &qtd_export_QAbstractFileEngine_seek_long_dispatch;
    virt_arr[23] = &qtd_export_QAbstractFileEngine_setFileName_string_dispatch;
    virt_arr[24] = &qtd_export_QAbstractFileEngine_setPermissions_uint_dispatch;
    virt_arr[25] = &qtd_export_QAbstractFileEngine_setSize_long_dispatch;
    virt_arr[26] = &qtd_export_QAbstractFileEngine_size_const_dispatch;
    virt_arr[27] = &qtd_export_QAbstractFileEngine_supportsExtension_Extension_const_dispatch;
    virt_arr[28] = &qtd_export_QAbstractFileEngine_write_nativepointerchar_long_dispatch;
    qtd_QAbstractFileEngine_initCallBacks(virt_arr.ptr);
}

// signal handlers

