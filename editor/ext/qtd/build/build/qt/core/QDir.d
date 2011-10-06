module qt.core.QDir;

public import qt.core.QDir_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QList;
public import qt.core.QFileInfo;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDir : QtdObject
{
    public enum Filter {
        Dirs = 1,
        Files = 2,
        Drives = 4,
        NoSymLinks = 8,
        AllEntries = 7,
        TypeMask = 15,
        Readable = 16,
        Writable = 32,
        Executable = 64,
        PermissionMask = 112,
        Modified = 128,
        Hidden = 256,
        System = 512,
        AccessMask = 1008,
        AllDirs = 1024,
        CaseSensitive = 2048,
        NoDotAndDotDot = 4096,
        NoDot = 8192,
        NoDotDot = 16384,
        NoFilter = -1
    }

    alias Filter.Dirs Dirs;
    alias Filter.Files Files;
    alias Filter.Drives Drives;
    alias Filter.NoSymLinks NoSymLinks;
    alias Filter.AllEntries AllEntries;
    alias Filter.TypeMask TypeMask;
    alias Filter.Readable Readable;
    alias Filter.Writable Writable;
    alias Filter.Executable Executable;
    alias Filter.PermissionMask PermissionMask;
    alias Filter.Modified Modified;
    alias Filter.Hidden Hidden;
    alias Filter.System System;
    alias Filter.AccessMask AccessMask;
    alias Filter.AllDirs AllDirs;
    alias Filter.CaseSensitive CaseSensitive;
    alias Filter.NoDotAndDotDot NoDotAndDotDot;
    alias Filter.NoDot NoDot;
    alias Filter.NoDotDot NoDotDot;
    alias Filter.NoFilter NoFilter;

    public enum SortFlag {
        Name = 0,
        Time = 1,
        Size = 2,
        SortByMask = 3,
        DirsFirst = 4,
        Reversed = 8,
        IgnoreCase = 16,
        DirsLast = 32,
        LocaleAware = 64,
        Type = 128,
        NoSort = -1
    }

    alias SortFlag.Name Name;
    alias SortFlag.Time Time;
    alias SortFlag.Size Size;
    alias SortFlag.SortByMask SortByMask;
    alias SortFlag.DirsFirst DirsFirst;
    alias SortFlag.Reversed Reversed;
    alias SortFlag.IgnoreCase IgnoreCase;
    alias SortFlag.DirsLast DirsLast;
    alias SortFlag.LocaleAware LocaleAware;
    alias SortFlag.Type Type;
    alias SortFlag.NoSort NoSort;


// Functions

    public this(const(QDir) arg__1) {
        void* ret = qtd_QDir_QDir_QDir(arg__1 is null ? null : (cast(QDir)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string path = "") {
        void* ret = qtd_QDir_QDir_string(path);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string path, string nameFilter, int sort = SortFlag.Name | SortFlag.IgnoreCase, int filter = 7) {
        void* ret = qtd_QDir_QDir_string_string_SortFlags_Filters(path, nameFilter, sort, filter);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string absoluteFilePath(string fileName) const {
        string res;
        qtd_QDir_absoluteFilePath_string_const(qtdNativeId, &res, fileName);
        return res;
    }

    public final string absolutePath() const {
        string res;
        qtd_QDir_absolutePath_const(qtdNativeId, &res);
        return res;
    }

    public final string canonicalPath() const {
        string res;
        qtd_QDir_canonicalPath_const(qtdNativeId, &res);
        return res;
    }

    public final bool cd(string dirName) {
        return qtd_QDir_cd_string(qtdNativeId, dirName);
    }

    public final bool cdUp() {
        return qtd_QDir_cdUp(qtdNativeId);
    }

    public final uint count() const {
        return qtd_QDir_count_const(qtdNativeId);
    }

    public final string dirName() const {
        string res;
        qtd_QDir_dirName_const(qtdNativeId, &res);
        return res;
    }

    public final QList!(QFileInfo) entryInfoList(int filters = -1, int sort = -1) const {
        auto res = QList!(QFileInfo).opCall();
        qtd_QDir_entryInfoList_Filters_SortFlags_const(qtdNativeId, &res, filters, sort);
        return res;
    }

    public final QList!(QFileInfo) entryInfoList(QList!(string) nameFilters, int filters = -1, int sort = -1) const {
        auto res = QList!(QFileInfo).opCall();
        qtd_QDir_entryInfoList_QList_Filters_SortFlags_const(qtdNativeId, &res, &nameFilters, filters, sort);
        return res;
    }

    public final QList!(string) entryList(int filters = -1, int sort = -1) const {
        auto res = QList!(string).opCall();
        qtd_QDir_entryList_Filters_SortFlags_const(qtdNativeId, &res, filters, sort);
        return res;
    }

    public final QList!(string) entryList(QList!(string) nameFilters, int filters = -1, int sort = -1) const {
        auto res = QList!(string).opCall();
        qtd_QDir_entryList_QList_Filters_SortFlags_const(qtdNativeId, &res, &nameFilters, filters, sort);
        return res;
    }

    public final bool exists() const {
        return qtd_QDir_exists_const(qtdNativeId);
    }

    public final bool exists(string name) const {
        return qtd_QDir_exists_string_const(qtdNativeId, name);
    }

    public final string filePath(string fileName) const {
        string res;
        qtd_QDir_filePath_string_const(qtdNativeId, &res, fileName);
        return res;
    }

    public final int filter() const {
        return qtd_QDir_filter_const(qtdNativeId);
    }

    public final bool isAbsolute() const {
        return qtd_QDir_isAbsolute_const(qtdNativeId);
    }

    public final bool isReadable() const {
        return qtd_QDir_isReadable_const(qtdNativeId);
    }

    public final bool isRelative() const {
        return qtd_QDir_isRelative_const(qtdNativeId);
    }

    public final bool isRoot() const {
        return qtd_QDir_isRoot_const(qtdNativeId);
    }

    public final bool makeAbsolute() {
        return qtd_QDir_makeAbsolute(qtdNativeId);
    }

    public final bool mkdir(string dirName) const {
        return qtd_QDir_mkdir_string_const(qtdNativeId, dirName);
    }

    public final bool mkpath(string dirPath) const {
        return qtd_QDir_mkpath_string_const(qtdNativeId, dirPath);
    }

    public final QList!(string) nameFilters() const {
        auto res = QList!(string).opCall();
        qtd_QDir_nameFilters_const(qtdNativeId, &res);
        return res;
    }

    private final bool operator_equal(const(QDir) dir) const {
        return qtd_QDir_operator_equal_QDir_const(qtdNativeId, dir is null ? null : (cast(QDir)dir).qtdNativeId);
    }

    private final string operator_subscript(int arg__1) const {
        string res;
        qtd_QDir_operator_subscript_int_const(qtdNativeId, &res, arg__1);
        return res;
    }

    public final string path() const {
        string res;
        qtd_QDir_path_const(qtdNativeId, &res);
        return res;
    }

    public final void refresh() const {
        qtd_QDir_refresh_const(qtdNativeId);
    }

    public final string relativeFilePath(string fileName) const {
        string res;
        qtd_QDir_relativeFilePath_string_const(qtdNativeId, &res, fileName);
        return res;
    }

    public final bool remove(string fileName) {
        return qtd_QDir_remove_string(qtdNativeId, fileName);
    }

    public final bool rename(string oldName, string newName) {
        return qtd_QDir_rename_string_string(qtdNativeId, oldName, newName);
    }

    public final bool rmdir(string dirName) const {
        return qtd_QDir_rmdir_string_const(qtdNativeId, dirName);
    }

    public final bool rmpath(string dirPath) const {
        return qtd_QDir_rmpath_string_const(qtdNativeId, dirPath);
    }

    public final void setFilter(int filter) {
        qtd_QDir_setFilter_Filters(qtdNativeId, filter);
    }

    public final void setNameFilters(QList!(string) nameFilters) {
        qtd_QDir_setNameFilters_QList(qtdNativeId, &nameFilters);
    }

    public final void setPath(string path) {
        qtd_QDir_setPath_string(qtdNativeId, path);
    }

    public final void setSorting(int sort) {
        qtd_QDir_setSorting_SortFlags(qtdNativeId, sort);
    }

    public final int sorting() const {
        return qtd_QDir_sorting_const(qtdNativeId);
    }

    public static void addSearchPath(string prefix, string path) {
        qtd_QDir_addSearchPath_string_string(prefix, path);
    }

    public static string cleanPath(string path) {
        string res;
        qtd_QDir_cleanPath_string(&res, path);
        return res;
    }

    public static string convertSeparators(string pathName) {
        string res;
        qtd_QDir_convertSeparators_string(&res, pathName);
        return res;
    }

    public static QDir current() {
        void* ret = qtd_QDir_current();
        QDir __d_return_value = new QDir(ret);
        return __d_return_value;
    }

    public static string currentPath() {
        string res;
        qtd_QDir_currentPath(&res);
        return res;
    }

    public static QList!(QFileInfo) drives() {
        auto res = QList!(QFileInfo).opCall();
        qtd_QDir_drives(&res);
        return res;
    }

    public static string fromNativeSeparators(string pathName) {
        string res;
        qtd_QDir_fromNativeSeparators_string(&res, pathName);
        return res;
    }

    public static QDir home() {
        void* ret = qtd_QDir_home();
        QDir __d_return_value = new QDir(ret);
        return __d_return_value;
    }

    public static string homePath() {
        string res;
        qtd_QDir_homePath(&res);
        return res;
    }

    public static bool isAbsolutePath(string path) {
        return qtd_QDir_isAbsolutePath_string(path);
    }

    public static bool isRelativePath(string path) {
        return qtd_QDir_isRelativePath_string(path);
    }

    public static bool match(string filter, string fileName) {
        return qtd_QDir_match_string_string(filter, fileName);
    }

    public static bool match(QList!(string) filters, string fileName) {
        return qtd_QDir_match_QList_string(&filters, fileName);
    }

    public static QList!(string) nameFiltersFromString(string nameFilter) {
        auto res = QList!(string).opCall();
        qtd_QDir_nameFiltersFromString_string(&res, nameFilter);
        return res;
    }

    public static QDir root() {
        void* ret = qtd_QDir_root();
        QDir __d_return_value = new QDir(ret);
        return __d_return_value;
    }

    public static string rootPath() {
        string res;
        qtd_QDir_rootPath(&res);
        return res;
    }

    public static QList!(string) searchPaths(string prefix) {
        auto res = QList!(string).opCall();
        qtd_QDir_searchPaths_string(&res, prefix);
        return res;
    }

    public static bool setCurrent(string path) {
        return qtd_QDir_setCurrent_string(path);
    }

    public static void setSearchPaths(string prefix, QList!(string) searchPaths) {
        qtd_QDir_setSearchPaths_string_QList(prefix, &searchPaths);
    }

    public static QDir temp() {
        void* ret = qtd_QDir_temp();
        QDir __d_return_value = new QDir(ret);
        return __d_return_value;
    }

    public static string tempPath() {
        string res;
        qtd_QDir_tempPath(&res);
        return res;
    }

    public static string toNativeSeparators(string pathName) {
        string res;
        qtd_QDir_toNativeSeparators_string(&res, pathName);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QDir;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QDir_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QDir_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDir_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDir_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDir_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QDir_QTypeInfo_isComplex();
        isStatic = qtd_QDir_QTypeInfo_isStatic();
        isLarge = qtd_QDir_QTypeInfo_isLarge();
        isPointer = qtd_QDir_QTypeInfo_isPointer();
        isDummy = qtd_QDir_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
    @qt.QtBlockedSlot
    public String at(int i) {
    return operator_subscript(i);
    }
     */

}
private extern(C) void qtd_QDir_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QDir_native_copy(const void* orig);
extern (C) void qtd_QDir_delete(void *ptr);
extern (C) void qtd_QDir_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDir_QDir_QDir(void* arg__1);
private extern(C) void* qtd_QDir_QDir_string(string path0);
private extern(C) void* qtd_QDir_QDir_string_string_SortFlags_Filters(string path0,
 string nameFilter1,
 int sort2,
 int filter3);
private extern(C) void  qtd_QDir_absoluteFilePath_string_const(void* __this_nativeId,
 void* __d_return_value,
 string fileName0);
private extern(C) void  qtd_QDir_absolutePath_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QDir_canonicalPath_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QDir_cd_string(void* __this_nativeId,
 string dirName0);
private extern(C) bool  qtd_QDir_cdUp(void* __this_nativeId);
private extern(C) uint  qtd_QDir_count_const(void* __this_nativeId);
private extern(C) void  qtd_QDir_dirName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QDir_entryInfoList_Filters_SortFlags_const(void* __this_nativeId,
 void* __d_return_value,
 int filters0,
 int sort1);
private extern(C) void  qtd_QDir_entryInfoList_QList_Filters_SortFlags_const(void* __this_nativeId,
 void* __d_return_value,
 void* nameFilters0,
 int filters1,
 int sort2);
private extern(C) void  qtd_QDir_entryList_Filters_SortFlags_const(void* __this_nativeId,
 void* __d_return_value,
 int filters0,
 int sort1);
private extern(C) void  qtd_QDir_entryList_QList_Filters_SortFlags_const(void* __this_nativeId,
 void* __d_return_value,
 void* nameFilters0,
 int filters1,
 int sort2);
private extern(C) bool  qtd_QDir_exists_const(void* __this_nativeId);
private extern(C) bool  qtd_QDir_exists_string_const(void* __this_nativeId,
 string name0);
private extern(C) void  qtd_QDir_filePath_string_const(void* __this_nativeId,
 void* __d_return_value,
 string fileName0);
private extern(C) int  qtd_QDir_filter_const(void* __this_nativeId);
private extern(C) bool  qtd_QDir_isAbsolute_const(void* __this_nativeId);
private extern(C) bool  qtd_QDir_isReadable_const(void* __this_nativeId);
private extern(C) bool  qtd_QDir_isRelative_const(void* __this_nativeId);
private extern(C) bool  qtd_QDir_isRoot_const(void* __this_nativeId);
private extern(C) bool  qtd_QDir_makeAbsolute(void* __this_nativeId);
private extern(C) bool  qtd_QDir_mkdir_string_const(void* __this_nativeId,
 string dirName0);
private extern(C) bool  qtd_QDir_mkpath_string_const(void* __this_nativeId,
 string dirPath0);
private extern(C) void  qtd_QDir_nameFilters_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QDir_operator_equal_QDir_const(void* __this_nativeId,
 void* dir0);
private extern(C) void  qtd_QDir_operator_subscript_int_const(void* __this_nativeId,
 void* __d_return_value,
 int arg__1);
private extern(C) void  qtd_QDir_path_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QDir_refresh_const(void* __this_nativeId);
private extern(C) void  qtd_QDir_relativeFilePath_string_const(void* __this_nativeId,
 void* __d_return_value,
 string fileName0);
private extern(C) bool  qtd_QDir_remove_string(void* __this_nativeId,
 string fileName0);
private extern(C) bool  qtd_QDir_rename_string_string(void* __this_nativeId,
 string oldName0,
 string newName1);
private extern(C) bool  qtd_QDir_rmdir_string_const(void* __this_nativeId,
 string dirName0);
private extern(C) bool  qtd_QDir_rmpath_string_const(void* __this_nativeId,
 string dirPath0);
private extern(C) void  qtd_QDir_setFilter_Filters(void* __this_nativeId,
 int filter0);
private extern(C) void  qtd_QDir_setNameFilters_QList(void* __this_nativeId,
 void* nameFilters0);
private extern(C) void  qtd_QDir_setPath_string(void* __this_nativeId,
 string path0);
private extern(C) void  qtd_QDir_setSorting_SortFlags(void* __this_nativeId,
 int sort0);
private extern(C) int  qtd_QDir_sorting_const(void* __this_nativeId);
private extern(C) void  qtd_QDir_addSearchPath_string_string(string prefix0,
 string path1);
private extern(C) void  qtd_QDir_cleanPath_string(void* __d_return_value,
 string path0);
private extern(C) void  qtd_QDir_convertSeparators_string(void* __d_return_value,
 string pathName0);
private extern(C) void*  qtd_QDir_current();
private extern(C) void  qtd_QDir_currentPath(void* __d_return_value);
private extern(C) void  qtd_QDir_drives(void* __d_return_value);
private extern(C) void  qtd_QDir_fromNativeSeparators_string(void* __d_return_value,
 string pathName0);
private extern(C) void*  qtd_QDir_home();
private extern(C) void  qtd_QDir_homePath(void* __d_return_value);
private extern(C) bool  qtd_QDir_isAbsolutePath_string(string path0);
private extern(C) bool  qtd_QDir_isRelativePath_string(string path0);
private extern(C) bool  qtd_QDir_match_string_string(string filter0,
 string fileName1);
private extern(C) bool  qtd_QDir_match_QList_string(void* filters0,
 string fileName1);
private extern(C) void  qtd_QDir_nameFiltersFromString_string(void* __d_return_value,
 string nameFilter0);
private extern(C) void*  qtd_QDir_root();
private extern(C) void  qtd_QDir_rootPath(void* __d_return_value);
private extern(C) void  qtd_QDir_searchPaths_string(void* __d_return_value,
 string prefix0);
private extern(C) bool  qtd_QDir_setCurrent_string(string path0);
private extern(C) void  qtd_QDir_setSearchPaths_string_QList(string prefix0,
 void* searchPaths1);
private extern(C) void*  qtd_QDir_temp();
private extern(C) void  qtd_QDir_tempPath(void* __d_return_value);
private extern(C) void  qtd_QDir_toNativeSeparators_string(void* __d_return_value,
 string pathName0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QDir() {
    QDir.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QDir_QTypeInfo_isComplex();
private extern (C) bool qtd_QDir_QTypeInfo_isStatic();
private extern (C) bool qtd_QDir_QTypeInfo_isLarge();
private extern (C) bool qtd_QDir_QTypeInfo_isPointer();
private extern (C) bool qtd_QDir_QTypeInfo_isDummy();
