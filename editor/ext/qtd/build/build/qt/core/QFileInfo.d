module qt.core.QFileInfo;

public import qt.core.QFileInfo_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QFile;
public import qt.core.QDateTime;
public import qt.core.QDir;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QFileInfo : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QFileInfo_QFileInfo();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDir) dir, string file) {
        void* ret = qtd_QFileInfo_QFileInfo_QDir_string(dir is null ? null : (cast(QDir)dir).qtdNativeId, file);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QFile file) {
        void* ret = qtd_QFileInfo_QFileInfo_QFile(file is null ? null : (cast(QFile)file).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QFileInfo) fileinfo) {
        void* ret = qtd_QFileInfo_QFileInfo_QFileInfo(fileinfo is null ? null : (cast(QFileInfo)fileinfo).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string file) {
        void* ret = qtd_QFileInfo_QFileInfo_string(file);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QDir absoluteDir() const {
        void* ret = qtd_QFileInfo_absoluteDir_const(qtdNativeId);
        QDir __d_return_value = new QDir(ret);
        return __d_return_value;
    }

    public final string absoluteFilePath() const {
        string res;
        qtd_QFileInfo_absoluteFilePath_const(qtdNativeId, &res);
        return res;
    }

    public final string absolutePath() const {
        string res;
        qtd_QFileInfo_absolutePath_const(qtdNativeId, &res);
        return res;
    }

    public final string baseName() const {
        string res;
        qtd_QFileInfo_baseName_const(qtdNativeId, &res);
        return res;
    }

    public final string bundleName() const {
        string res;
        qtd_QFileInfo_bundleName_const(qtdNativeId, &res);
        return res;
    }

    public final bool caching() const {
        return qtd_QFileInfo_caching_const(qtdNativeId);
    }

    public final string canonicalFilePath() const {
        string res;
        qtd_QFileInfo_canonicalFilePath_const(qtdNativeId, &res);
        return res;
    }

    public final string canonicalPath() const {
        string res;
        qtd_QFileInfo_canonicalPath_const(qtdNativeId, &res);
        return res;
    }

    public final string completeBaseName() const {
        string res;
        qtd_QFileInfo_completeBaseName_const(qtdNativeId, &res);
        return res;
    }

    public final string completeSuffix() const {
        string res;
        qtd_QFileInfo_completeSuffix_const(qtdNativeId, &res);
        return res;
    }

    public final QDateTime created() const {
        void* ret = qtd_QFileInfo_created_const(qtdNativeId);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final QDir dir() const {
        void* ret = qtd_QFileInfo_dir_const(qtdNativeId);
        QDir __d_return_value = new QDir(ret);
        return __d_return_value;
    }

    public final bool exists() const {
        return qtd_QFileInfo_exists_const(qtdNativeId);
    }

    public final string fileName() const {
        string res;
        qtd_QFileInfo_fileName_const(qtdNativeId, &res);
        return res;
    }

    public final string filePath() const {
        string res;
        qtd_QFileInfo_filePath_const(qtdNativeId, &res);
        return res;
    }

    public final string group() const {
        string res;
        qtd_QFileInfo_group_const(qtdNativeId, &res);
        return res;
    }

    public final uint groupId() const {
        return qtd_QFileInfo_groupId_const(qtdNativeId);
    }

    public final bool isAbsolute() const {
        return qtd_QFileInfo_isAbsolute_const(qtdNativeId);
    }

    public final bool isBundle() const {
        return qtd_QFileInfo_isBundle_const(qtdNativeId);
    }

    public final bool isDir() const {
        return qtd_QFileInfo_isDir_const(qtdNativeId);
    }

    public final bool isExecutable() const {
        return qtd_QFileInfo_isExecutable_const(qtdNativeId);
    }

    public final bool isFile() const {
        return qtd_QFileInfo_isFile_const(qtdNativeId);
    }

    public final bool isHidden() const {
        return qtd_QFileInfo_isHidden_const(qtdNativeId);
    }

    public final bool isReadable() const {
        return qtd_QFileInfo_isReadable_const(qtdNativeId);
    }

    public final bool isRelative() const {
        return qtd_QFileInfo_isRelative_const(qtdNativeId);
    }

    public final bool isRoot() const {
        return qtd_QFileInfo_isRoot_const(qtdNativeId);
    }

    public final bool isSymLink() const {
        return qtd_QFileInfo_isSymLink_const(qtdNativeId);
    }

    public final bool isWritable() const {
        return qtd_QFileInfo_isWritable_const(qtdNativeId);
    }

    public final QDateTime lastModified() const {
        void* ret = qtd_QFileInfo_lastModified_const(qtdNativeId);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final QDateTime lastRead() const {
        void* ret = qtd_QFileInfo_lastRead_const(qtdNativeId);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final bool makeAbsolute() {
        return qtd_QFileInfo_makeAbsolute(qtdNativeId);
    }

    private final bool operator_equal(const(QFileInfo) fileinfo) {
        return qtd_QFileInfo_operator_equal_QFileInfo(qtdNativeId, fileinfo is null ? null : (cast(QFileInfo)fileinfo).qtdNativeId);
    }

    public final string owner() const {
        string res;
        qtd_QFileInfo_owner_const(qtdNativeId, &res);
        return res;
    }

    public final uint ownerId() const {
        return qtd_QFileInfo_ownerId_const(qtdNativeId);
    }

    public final string path() const {
        string res;
        qtd_QFileInfo_path_const(qtdNativeId, &res);
        return res;
    }

    public final bool permission(int permissions) const {
        return qtd_QFileInfo_permission_Permissions_const(qtdNativeId, permissions);
    }

    public final int permissions() const {
        return qtd_QFileInfo_permissions_const(qtdNativeId);
    }

    public final void refresh() {
        qtd_QFileInfo_refresh(qtdNativeId);
    }

    public final void setCaching(bool on) {
        qtd_QFileInfo_setCaching_bool(qtdNativeId, on);
    }

    public final void setFile(const(QDir) dir, string file) {
        qtd_QFileInfo_setFile_QDir_string(qtdNativeId, dir is null ? null : (cast(QDir)dir).qtdNativeId, file);
    }

    public final void setFile(QFile file) {
        qtd_QFileInfo_setFile_QFile(qtdNativeId, file is null ? null : (cast(QFile)file).qtdNativeId);
    }

    public final void setFile(string file) {
        qtd_QFileInfo_setFile_string(qtdNativeId, file);
    }

    public final long size() const {
        return qtd_QFileInfo_size_const(qtdNativeId);
    }

    public final string suffix() const {
        string res;
        qtd_QFileInfo_suffix_const(qtdNativeId, &res);
        return res;
    }

    public final string symLinkTarget() const {
        string res;
        qtd_QFileInfo_symLinkTarget_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QFileInfo;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QFileInfo_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QFileInfo_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QFileInfo_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QFileInfo_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QFileInfo_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QFileInfo_QTypeInfo_isComplex();
        isStatic = qtd_QFileInfo_QTypeInfo_isStatic();
        isLarge = qtd_QFileInfo_QTypeInfo_isLarge();
        isPointer = qtd_QFileInfo_QTypeInfo_isPointer();
        isDummy = qtd_QFileInfo_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QFileInfo_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QFileInfo_native_copy(const void* orig);
extern (C) void qtd_QFileInfo_delete(void *ptr);
extern (C) void qtd_QFileInfo_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QFileInfo_QFileInfo();
private extern(C) void* qtd_QFileInfo_QFileInfo_QDir_string(void* dir0,
 string file1);
private extern(C) void* qtd_QFileInfo_QFileInfo_QFile(void* file0);
private extern(C) void* qtd_QFileInfo_QFileInfo_QFileInfo(void* fileinfo0);
private extern(C) void* qtd_QFileInfo_QFileInfo_string(string file0);
private extern(C) void*  qtd_QFileInfo_absoluteDir_const(void* __this_nativeId);
private extern(C) void  qtd_QFileInfo_absoluteFilePath_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFileInfo_absolutePath_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFileInfo_baseName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFileInfo_bundleName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QFileInfo_caching_const(void* __this_nativeId);
private extern(C) void  qtd_QFileInfo_canonicalFilePath_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFileInfo_canonicalPath_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFileInfo_completeBaseName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFileInfo_completeSuffix_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QFileInfo_created_const(void* __this_nativeId);
private extern(C) void*  qtd_QFileInfo_dir_const(void* __this_nativeId);
private extern(C) bool  qtd_QFileInfo_exists_const(void* __this_nativeId);
private extern(C) void  qtd_QFileInfo_fileName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFileInfo_filePath_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFileInfo_group_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) uint  qtd_QFileInfo_groupId_const(void* __this_nativeId);
private extern(C) bool  qtd_QFileInfo_isAbsolute_const(void* __this_nativeId);
private extern(C) bool  qtd_QFileInfo_isBundle_const(void* __this_nativeId);
private extern(C) bool  qtd_QFileInfo_isDir_const(void* __this_nativeId);
private extern(C) bool  qtd_QFileInfo_isExecutable_const(void* __this_nativeId);
private extern(C) bool  qtd_QFileInfo_isFile_const(void* __this_nativeId);
private extern(C) bool  qtd_QFileInfo_isHidden_const(void* __this_nativeId);
private extern(C) bool  qtd_QFileInfo_isReadable_const(void* __this_nativeId);
private extern(C) bool  qtd_QFileInfo_isRelative_const(void* __this_nativeId);
private extern(C) bool  qtd_QFileInfo_isRoot_const(void* __this_nativeId);
private extern(C) bool  qtd_QFileInfo_isSymLink_const(void* __this_nativeId);
private extern(C) bool  qtd_QFileInfo_isWritable_const(void* __this_nativeId);
private extern(C) void*  qtd_QFileInfo_lastModified_const(void* __this_nativeId);
private extern(C) void*  qtd_QFileInfo_lastRead_const(void* __this_nativeId);
private extern(C) bool  qtd_QFileInfo_makeAbsolute(void* __this_nativeId);
private extern(C) bool  qtd_QFileInfo_operator_equal_QFileInfo(void* __this_nativeId,
 void* fileinfo0);
private extern(C) void  qtd_QFileInfo_owner_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) uint  qtd_QFileInfo_ownerId_const(void* __this_nativeId);
private extern(C) void  qtd_QFileInfo_path_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QFileInfo_permission_Permissions_const(void* __this_nativeId,
 int permissions0);
private extern(C) int  qtd_QFileInfo_permissions_const(void* __this_nativeId);
private extern(C) void  qtd_QFileInfo_refresh(void* __this_nativeId);
private extern(C) void  qtd_QFileInfo_setCaching_bool(void* __this_nativeId,
 bool on0);
private extern(C) void  qtd_QFileInfo_setFile_QDir_string(void* __this_nativeId,
 void* dir0,
 string file1);
private extern(C) void  qtd_QFileInfo_setFile_QFile(void* __this_nativeId,
 void* file0);
private extern(C) void  qtd_QFileInfo_setFile_string(void* __this_nativeId,
 string file0);
private extern(C) long  qtd_QFileInfo_size_const(void* __this_nativeId);
private extern(C) void  qtd_QFileInfo_suffix_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFileInfo_symLinkTarget_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QFileInfo() {
    QFileInfo.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QFileInfo_QTypeInfo_isComplex();
private extern (C) bool qtd_QFileInfo_QTypeInfo_isStatic();
private extern (C) bool qtd_QFileInfo_QTypeInfo_isLarge();
private extern (C) bool qtd_QFileInfo_QTypeInfo_isPointer();
private extern (C) bool qtd_QFileInfo_QTypeInfo_isDummy();
