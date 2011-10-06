module qt.network.QUrlInfo;

public import qt.network.QUrlInfo_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QDateTime;
public import qt.core.QUrl;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QUrlInfo : QtdObject
{
    public enum PermissionSpec {
        ReadOwner = 256,
        WriteOwner = 128,
        ExeOwner = 64,
        ReadGroup = 32,
        WriteGroup = 16,
        ExeGroup = 8,
        ReadOther = 4,
        WriteOther = 2,
        ExeOther = 1
    }

    alias PermissionSpec.ReadOwner ReadOwner;
    alias PermissionSpec.WriteOwner WriteOwner;
    alias PermissionSpec.ExeOwner ExeOwner;
    alias PermissionSpec.ReadGroup ReadGroup;
    alias PermissionSpec.WriteGroup WriteGroup;
    alias PermissionSpec.ExeGroup ExeGroup;
    alias PermissionSpec.ReadOther ReadOther;
    alias PermissionSpec.WriteOther WriteOther;
    alias PermissionSpec.ExeOther ExeOther;


// Functions

    public this() {
        void* ret = qtd_QUrlInfo_QUrlInfo(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string name, int permissions, string owner, string group, long size, const(QDateTime) lastModified, const(QDateTime) lastRead, bool isDir, bool isFile, bool isSymLink, bool isWritable, bool isReadable, bool isExecutable) {
        void* ret = qtd_QUrlInfo_QUrlInfo_string_int_string_string_long_QDateTime_QDateTime_bool_bool_bool_bool_bool_bool(cast(void*) this, name, permissions, owner, group, size, lastModified is null ? null : (cast(QDateTime)lastModified).qtdNativeId, lastRead is null ? null : (cast(QDateTime)lastRead).qtdNativeId, isDir, isFile, isSymLink, isWritable, isReadable, isExecutable);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QUrl) url, int permissions, string owner, string group, long size, const(QDateTime) lastModified, const(QDateTime) lastRead, bool isDir, bool isFile, bool isSymLink, bool isWritable, bool isReadable, bool isExecutable) {
        void* ret = qtd_QUrlInfo_QUrlInfo_QUrl_int_string_string_long_QDateTime_QDateTime_bool_bool_bool_bool_bool_bool(cast(void*) this, url is null ? null : (cast(QUrl)url).qtdNativeId, permissions, owner, group, size, lastModified is null ? null : (cast(QDateTime)lastModified).qtdNativeId, lastRead is null ? null : (cast(QDateTime)lastRead).qtdNativeId, isDir, isFile, isSymLink, isWritable, isReadable, isExecutable);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QUrlInfo) ui) {
        void* ret = qtd_QUrlInfo_QUrlInfo_QUrlInfo(cast(void*) this, ui is null ? null : (cast(QUrlInfo)ui).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string group() const {
        string res;
        qtd_QUrlInfo_group_const(qtdNativeId, &res);
        return res;
    }

    public final bool isDir() const {
        return qtd_QUrlInfo_isDir_const(qtdNativeId);
    }

    public final bool isExecutable() const {
        return qtd_QUrlInfo_isExecutable_const(qtdNativeId);
    }

    public final bool isFile() const {
        return qtd_QUrlInfo_isFile_const(qtdNativeId);
    }

    public final bool isReadable() const {
        return qtd_QUrlInfo_isReadable_const(qtdNativeId);
    }

    public final bool isSymLink() const {
        return qtd_QUrlInfo_isSymLink_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QUrlInfo_isValid_const(qtdNativeId);
    }

    public final bool isWritable() const {
        return qtd_QUrlInfo_isWritable_const(qtdNativeId);
    }

    public final QDateTime lastModified() const {
        void* ret = qtd_QUrlInfo_lastModified_const(qtdNativeId);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final QDateTime lastRead() const {
        void* ret = qtd_QUrlInfo_lastRead_const(qtdNativeId);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final string name() const {
        string res;
        qtd_QUrlInfo_name_const(qtdNativeId, &res);
        return res;
    }

    private final bool operator_equal(const(QUrlInfo) i) const {
        return qtd_QUrlInfo_operator_equal_QUrlInfo_const(qtdNativeId, i is null ? null : (cast(QUrlInfo)i).qtdNativeId);
    }

    public final string owner() const {
        string res;
        qtd_QUrlInfo_owner_const(qtdNativeId, &res);
        return res;
    }

    public final int permissions() const {
        return qtd_QUrlInfo_permissions_const(qtdNativeId);
    }

    public final void setLastRead(const(QDateTime) dt) {
        qtd_QUrlInfo_setLastRead_QDateTime(qtdNativeId, dt is null ? null : (cast(QDateTime)dt).qtdNativeId);
    }

    public final long size() const {
        return qtd_QUrlInfo_size_const(qtdNativeId);
    }

    public void setDir(bool b) {
        qtd_QUrlInfo_setDir_bool(qtdNativeId, b);
    }

    public void setFile(bool b) {
        qtd_QUrlInfo_setFile_bool(qtdNativeId, b);
    }

    public void setGroup(string s) {
        qtd_QUrlInfo_setGroup_string(qtdNativeId, s);
    }

    public void setLastModified(const(QDateTime) dt) {
        qtd_QUrlInfo_setLastModified_QDateTime(qtdNativeId, dt is null ? null : (cast(QDateTime)dt).qtdNativeId);
    }

    public void setName(string name) {
        qtd_QUrlInfo_setName_string(qtdNativeId, name);
    }

    public void setOwner(string s) {
        qtd_QUrlInfo_setOwner_string(qtdNativeId, s);
    }

    public void setPermissions(int p) {
        qtd_QUrlInfo_setPermissions_int(qtdNativeId, p);
    }

    public void setReadable(bool b) {
        qtd_QUrlInfo_setReadable_bool(qtdNativeId, b);
    }

    public void setSize(long size) {
        qtd_QUrlInfo_setSize_long(qtdNativeId, size);
    }

    public void setSymLink(bool b) {
        qtd_QUrlInfo_setSymLink_bool(qtdNativeId, b);
    }

    public void setWritable(bool b) {
        qtd_QUrlInfo_setWritable_bool(qtdNativeId, b);
    }

    public static bool equal(const(QUrlInfo) i1, const(QUrlInfo) i2, int sortBy) {
        return qtd_QUrlInfo_equal_QUrlInfo_QUrlInfo_int(i1 is null ? null : (cast(QUrlInfo)i1).qtdNativeId, i2 is null ? null : (cast(QUrlInfo)i2).qtdNativeId, sortBy);
    }

    public static bool greaterThan(const(QUrlInfo) i1, const(QUrlInfo) i2, int sortBy) {
        return qtd_QUrlInfo_greaterThan_QUrlInfo_QUrlInfo_int(i1 is null ? null : (cast(QUrlInfo)i1).qtdNativeId, i2 is null ? null : (cast(QUrlInfo)i2).qtdNativeId, sortBy);
    }

    public static bool lessThan(const(QUrlInfo) i1, const(QUrlInfo) i2, int sortBy) {
        return qtd_QUrlInfo_lessThan_QUrlInfo_QUrlInfo_int(i1 is null ? null : (cast(QUrlInfo)i1).qtdNativeId, i2 is null ? null : (cast(QUrlInfo)i2).qtdNativeId, sortBy);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QUrlInfo;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QUrlInfo_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QUrlInfo_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QUrlInfo_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QUrlInfo_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QUrlInfo_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QUrlInfo_QTypeInfo_isComplex();
        isStatic = qtd_QUrlInfo_QTypeInfo_isStatic();
        isLarge = qtd_QUrlInfo_QTypeInfo_isLarge();
        isPointer = qtd_QUrlInfo_QTypeInfo_isPointer();
        isDummy = qtd_QUrlInfo_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QUrlInfo_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QUrlInfo_native_copy(const void* orig);
extern (C) void qtd_QUrlInfo_delete(void *ptr);
extern (C) void qtd_QUrlInfo_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QUrlInfo_QUrlInfo(void *d_ptr);
private extern(C) void* qtd_QUrlInfo_QUrlInfo_string_int_string_string_long_QDateTime_QDateTime_bool_bool_bool_bool_bool_bool(void *d_ptr,
 string name0,
 int permissions1,
 string owner2,
 string group3,
 long size4,
 void* lastModified5,
 void* lastRead6,
 bool isDir7,
 bool isFile8,
 bool isSymLink9,
 bool isWritable10,
 bool isReadable11,
 bool isExecutable12);
private extern(C) void* qtd_QUrlInfo_QUrlInfo_QUrl_int_string_string_long_QDateTime_QDateTime_bool_bool_bool_bool_bool_bool(void *d_ptr,
 void* url0,
 int permissions1,
 string owner2,
 string group3,
 long size4,
 void* lastModified5,
 void* lastRead6,
 bool isDir7,
 bool isFile8,
 bool isSymLink9,
 bool isWritable10,
 bool isReadable11,
 bool isExecutable12);
private extern(C) void* qtd_QUrlInfo_QUrlInfo_QUrlInfo(void *d_ptr,
 void* ui0);
private extern(C) void  qtd_QUrlInfo_group_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QUrlInfo_isDir_const(void* __this_nativeId);
private extern(C) bool  qtd_QUrlInfo_isExecutable_const(void* __this_nativeId);
private extern(C) bool  qtd_QUrlInfo_isFile_const(void* __this_nativeId);
private extern(C) bool  qtd_QUrlInfo_isReadable_const(void* __this_nativeId);
private extern(C) bool  qtd_QUrlInfo_isSymLink_const(void* __this_nativeId);
private extern(C) bool  qtd_QUrlInfo_isValid_const(void* __this_nativeId);
private extern(C) bool  qtd_QUrlInfo_isWritable_const(void* __this_nativeId);
private extern(C) void*  qtd_QUrlInfo_lastModified_const(void* __this_nativeId);
private extern(C) void*  qtd_QUrlInfo_lastRead_const(void* __this_nativeId);
private extern(C) void  qtd_QUrlInfo_name_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QUrlInfo_operator_equal_QUrlInfo_const(void* __this_nativeId,
 void* i0);
private extern(C) void  qtd_QUrlInfo_owner_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QUrlInfo_permissions_const(void* __this_nativeId);
private extern(C) void  qtd_QUrlInfo_setLastRead_QDateTime(void* __this_nativeId,
 void* dt0);
private extern(C) long  qtd_QUrlInfo_size_const(void* __this_nativeId);
private extern(C) void  qtd_QUrlInfo_setDir_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QUrlInfo_setFile_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QUrlInfo_setGroup_string(void* __this_nativeId,
 string s0);
private extern(C) void  qtd_QUrlInfo_setLastModified_QDateTime(void* __this_nativeId,
 void* dt0);
private extern(C) void  qtd_QUrlInfo_setName_string(void* __this_nativeId,
 string name0);
private extern(C) void  qtd_QUrlInfo_setOwner_string(void* __this_nativeId,
 string s0);
private extern(C) void  qtd_QUrlInfo_setPermissions_int(void* __this_nativeId,
 int p0);
private extern(C) void  qtd_QUrlInfo_setReadable_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QUrlInfo_setSize_long(void* __this_nativeId,
 long size0);
private extern(C) void  qtd_QUrlInfo_setSymLink_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QUrlInfo_setWritable_bool(void* __this_nativeId,
 bool b0);
private extern(C) bool  qtd_QUrlInfo_equal_QUrlInfo_QUrlInfo_int(void* i10,
 void* i21,
 int sortBy2);
private extern(C) bool  qtd_QUrlInfo_greaterThan_QUrlInfo_QUrlInfo_int(void* i10,
 void* i21,
 int sortBy2);
private extern(C) bool  qtd_QUrlInfo_lessThan_QUrlInfo_QUrlInfo_int(void* i10,
 void* i21,
 int sortBy2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, bool b0) qtd_QUrlInfo_setDir_bool_dispatch; }
extern(C) void qtd_export_QUrlInfo_setDir_bool_dispatch(void *dId, bool b0){
    auto d_object = cast(QUrlInfo) dId;
    d_object.setDir(b0);
}

extern(C){ extern void function(void *dId, bool b0) qtd_QUrlInfo_setFile_bool_dispatch; }
extern(C) void qtd_export_QUrlInfo_setFile_bool_dispatch(void *dId, bool b0){
    auto d_object = cast(QUrlInfo) dId;
    d_object.setFile(b0);
}

extern(C){ extern void function(void *dId, wchar* s0, int s0_size) qtd_QUrlInfo_setGroup_string_dispatch; }
extern(C) void qtd_export_QUrlInfo_setGroup_string_dispatch(void *dId, wchar* s0, int s0_size){
    auto d_object = cast(QUrlInfo) dId;
    string s0_d_ref = toUTF8(s0[0..s0_size]);
    d_object.setGroup(s0_d_ref);
}

extern(C){ extern void function(void *dId, void* dt0) qtd_QUrlInfo_setLastModified_QDateTime_dispatch; }
extern(C) void qtd_export_QUrlInfo_setLastModified_QDateTime_dispatch(void *dId, void* dt0){
    auto d_object = cast(QUrlInfo) dId;
    scope dt0_d_ref = new QDateTime(dt0, QtdObjectInitFlags.onStack);
    d_object.setLastModified(dt0_d_ref);
}

extern(C){ extern void function(void *dId, wchar* name0, int name0_size) qtd_QUrlInfo_setName_string_dispatch; }
extern(C) void qtd_export_QUrlInfo_setName_string_dispatch(void *dId, wchar* name0, int name0_size){
    auto d_object = cast(QUrlInfo) dId;
    string name0_d_ref = toUTF8(name0[0..name0_size]);
    d_object.setName(name0_d_ref);
}

extern(C){ extern void function(void *dId, wchar* s0, int s0_size) qtd_QUrlInfo_setOwner_string_dispatch; }
extern(C) void qtd_export_QUrlInfo_setOwner_string_dispatch(void *dId, wchar* s0, int s0_size){
    auto d_object = cast(QUrlInfo) dId;
    string s0_d_ref = toUTF8(s0[0..s0_size]);
    d_object.setOwner(s0_d_ref);
}

extern(C){ extern void function(void *dId, int p0) qtd_QUrlInfo_setPermissions_int_dispatch; }
extern(C) void qtd_export_QUrlInfo_setPermissions_int_dispatch(void *dId, int p0){
    auto d_object = cast(QUrlInfo) dId;
    d_object.setPermissions(p0);
}

extern(C){ extern void function(void *dId, bool b0) qtd_QUrlInfo_setReadable_bool_dispatch; }
extern(C) void qtd_export_QUrlInfo_setReadable_bool_dispatch(void *dId, bool b0){
    auto d_object = cast(QUrlInfo) dId;
    d_object.setReadable(b0);
}

extern(C){ extern void function(void *dId, long size0) qtd_QUrlInfo_setSize_long_dispatch; }
extern(C) void qtd_export_QUrlInfo_setSize_long_dispatch(void *dId, long size0){
    auto d_object = cast(QUrlInfo) dId;
    d_object.setSize(size0);
}

extern(C){ extern void function(void *dId, bool b0) qtd_QUrlInfo_setSymLink_bool_dispatch; }
extern(C) void qtd_export_QUrlInfo_setSymLink_bool_dispatch(void *dId, bool b0){
    auto d_object = cast(QUrlInfo) dId;
    d_object.setSymLink(b0);
}

extern(C){ extern void function(void *dId, bool b0) qtd_QUrlInfo_setWritable_bool_dispatch; }
extern(C) void qtd_export_QUrlInfo_setWritable_bool_dispatch(void *dId, bool b0){
    auto d_object = cast(QUrlInfo) dId;
    d_object.setWritable(b0);
}

private extern (C) void qtd_QUrlInfo_initCallBacks(void* virtuals);

extern(C) void static_init_QUrlInfo() {
    QUrlInfo.QTypeInfo.init();
    void*[11] virt_arr;
    virt_arr[0] = &qtd_export_QUrlInfo_setDir_bool_dispatch;
    virt_arr[1] = &qtd_export_QUrlInfo_setFile_bool_dispatch;
    virt_arr[2] = &qtd_export_QUrlInfo_setGroup_string_dispatch;
    virt_arr[3] = &qtd_export_QUrlInfo_setLastModified_QDateTime_dispatch;
    virt_arr[4] = &qtd_export_QUrlInfo_setName_string_dispatch;
    virt_arr[5] = &qtd_export_QUrlInfo_setOwner_string_dispatch;
    virt_arr[6] = &qtd_export_QUrlInfo_setPermissions_int_dispatch;
    virt_arr[7] = &qtd_export_QUrlInfo_setReadable_bool_dispatch;
    virt_arr[8] = &qtd_export_QUrlInfo_setSize_long_dispatch;
    virt_arr[9] = &qtd_export_QUrlInfo_setSymLink_bool_dispatch;
    virt_arr[10] = &qtd_export_QUrlInfo_setWritable_bool_dispatch;
    qtd_QUrlInfo_initCallBacks(virt_arr.ptr);
}

// signal handlers

private extern (C) bool qtd_QUrlInfo_QTypeInfo_isComplex();
private extern (C) bool qtd_QUrlInfo_QTypeInfo_isStatic();
private extern (C) bool qtd_QUrlInfo_QTypeInfo_isLarge();
private extern (C) bool qtd_QUrlInfo_QTypeInfo_isPointer();
private extern (C) bool qtd_QUrlInfo_QTypeInfo_isDummy();
