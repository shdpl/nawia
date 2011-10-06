module qt.core.QFile;

public import qt.core.QFile_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
public import qtd.MOC : Q_OBJECT;
import qtd.Signal;
import qt.core.QMetaObject;
import qtd.meta.Runtime;
import qt.core.QObject;
private import qt.core.ArrayOps2;
// automatic imports-------------
public import qt.core.QIODevice;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QAbstractFileEngine;
public import qt.core.QChildEvent;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QFile : QIODevice
{
    public enum FileError {
        NoError = 0,
        ReadError = 1,
        WriteError = 2,
        FatalError = 3,
        ResourceError = 4,
        OpenError = 5,
        AbortError = 6,
        TimeOutError = 7,
        UnspecifiedError = 8,
        RemoveError = 9,
        RenameError = 10,
        PositionError = 11,
        ResizeError = 12,
        PermissionsError = 13,
        CopyError = 14
    }

    alias FileError.NoError NoError;
    alias FileError.ReadError ReadError;
    alias FileError.WriteError WriteError;
    alias FileError.FatalError FatalError;
    alias FileError.ResourceError ResourceError;
    alias FileError.OpenError OpenError;
    alias FileError.AbortError AbortError;
    alias FileError.TimeOutError TimeOutError;
    alias FileError.UnspecifiedError UnspecifiedError;
    alias FileError.RemoveError RemoveError;
    alias FileError.RenameError RenameError;
    alias FileError.PositionError PositionError;
    alias FileError.ResizeError ResizeError;
    alias FileError.PermissionsError PermissionsError;
    alias FileError.CopyError CopyError;

    public enum MemoryMapFlags {
        NoOptions = 0
    }

    alias MemoryMapFlags.NoOptions NoOptions;

    public enum Permission {
        ReadOwner = 16384,
        WriteOwner = 8192,
        ExeOwner = 4096,
        ReadUser = 1024,
        WriteUser = 512,
        ExeUser = 256,
        ReadGroup = 64,
        WriteGroup = 32,
        ExeGroup = 16,
        ReadOther = 4,
        WriteOther = 2,
        ExeOther = 1
    }

    alias Permission.ReadOwner ReadOwner;
    alias Permission.WriteOwner WriteOwner;
    alias Permission.ExeOwner ExeOwner;
    alias Permission.ReadUser ReadUser;
    alias Permission.WriteUser WriteUser;
    alias Permission.ExeUser ExeUser;
    alias Permission.ReadGroup ReadGroup;
    alias Permission.WriteGroup WriteGroup;
    alias Permission.ExeGroup ExeGroup;
    alias Permission.ReadOther ReadOther;
    alias Permission.WriteOther WriteOther;
    alias Permission.ExeOther ExeOther;


    private static const string[] __signalSignatures = [    ];

    int signalSignature(int signalId, ref stringz signature) {
        signalId = super.signalSignature(signalId, signature);
        if (signature)
            return signalId;
        if (signalId < __signalSignatures.length)
            signature = __signalSignatures[signalId].ptr;
        else
            signalId -= __signalSignatures.length;
        return signalId;
    }
// Functions

    public this() {
        void* ret = qtd_QFile_QFile(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QObject parent_) {
        void* ret = qtd_QFile_QFile_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string name) {
        void* ret = qtd_QFile_QFile_string(cast(void*) this, name);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string name, QObject parent_) {
        void* ret = qtd_QFile_QFile_string_QObject(cast(void*) this, name, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool copy(string newName) {
        return qtd_QFile_copy_string(qtdNativeId, newName);
    }

    public final QFile.FileError error() const {
        return cast(QFile.FileError) qtd_QFile_error_const(qtdNativeId);
    }

    public final bool exists() const {
        return qtd_QFile_exists_const(qtdNativeId);
    }

    public final string fileName() const {
        string res;
        qtd_QFile_fileName_const(qtdNativeId, &res);
        return res;
    }

    public final bool flush() {
        return qtd_QFile_flush(qtdNativeId);
    }

    public final int handle() const {
        return qtd_QFile_handle_const(qtdNativeId);
    }

    public final bool link(string newName) {
        return qtd_QFile_link_string(qtdNativeId, newName);
    }

    public final ubyte* map(long offset, long size, QFile.MemoryMapFlags flags = QFile.MemoryMapFlags.NoOptions) {
        return qtd_QFile_map_long_long_MemoryMapFlags(qtdNativeId, offset, size, flags);
    }

    public final bool open(int fd, int flags) {
        return qtd_QFile_open_int_OpenMode(qtdNativeId, fd, flags);
    }

    public final int permissions() const {
        return qtd_QFile_permissions_const(qtdNativeId);
    }

    public final bool remove() {
        return qtd_QFile_remove(qtdNativeId);
    }

    public final bool rename(string newName) {
        return qtd_QFile_rename_string(qtdNativeId, newName);
    }

    public final bool resize(long sz) {
        return qtd_QFile_resize_long(qtdNativeId, sz);
    }

    public final void setFileName(string name) {
        qtd_QFile_setFileName_string(qtdNativeId, name);
    }

    public final bool setPermissions(int permissionSpec) {
        return qtd_QFile_setPermissions_Permissions(qtdNativeId, permissionSpec);
    }

    public final string symLinkTarget() const {
        string res;
        qtd_QFile_symLinkTarget_const(qtdNativeId, &res);
        return res;
    }

    public final void unsetError() {
        qtd_QFile_unsetError(qtdNativeId);
    }

    public bool atEnd() const {
        return qtd_QFile_atEnd_const(qtdNativeId);
    }

    public void close() {
        qtd_QFile_close(qtdNativeId);
    }

    public QAbstractFileEngine fileEngine() const {
        void* ret = qtd_QFile_fileEngine_const(qtdNativeId);
        QAbstractFileEngine __d_return_value = qtd_QAbstractFileEngine_from_ptr(ret);

        return __d_return_value;
    }

    public bool isSequential() const {
        return qtd_QFile_isSequential_const(qtdNativeId);
    }

    public bool open(int flags) {
        return qtd_QFile_open_OpenMode(qtdNativeId, flags);
    }

    public long pos() const {
        return qtd_QFile_pos_const(qtdNativeId);
    }

    protected long readData(char* data, long maxlen) {
        return qtd_QFile_readData_nativepointerchar_long(qtdNativeId, data, maxlen);
    }

    protected long readLineData(char* data, long maxlen) {
        return qtd_QFile_readLineData_nativepointerchar_long(qtdNativeId, data, maxlen);
    }

    public bool seek(long offset) {
        return qtd_QFile_seek_long(qtdNativeId, offset);
    }

    public long size() const {
        return qtd_QFile_size_const(qtdNativeId);
    }

    protected long writeData(const(char*) data, long len) {
        return qtd_QFile_writeData_nativepointerchar_long(qtdNativeId, data, len);
    }

    public static bool copy(string fileName, string newName) {
        return qtd_QFile_copy_string_string(fileName, newName);
    }

    public static string decodeName(const(QByteArray) localFileName) {
        string res;
        qtd_QFile_decodeName_QByteArray(&res, localFileName is null ? null : (cast(QByteArray)localFileName).qtdNativeId);
        return res;
    }

    private static string decodeName(const(char*) localFileName) {
        string res;
        qtd_QFile_decodeName_nativepointerchar(&res, localFileName);
        return res;
    }

    public static QByteArray encodeName(string fileName) {
        void* ret = qtd_QFile_encodeName_string(fileName);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public static bool exists(string fileName) {
        return qtd_QFile_exists_string(fileName);
    }

    public static bool link(string oldname, string newName) {
        return qtd_QFile_link_string_string(oldname, newName);
    }

    public static int permissions(string filename) {
        return qtd_QFile_permissions_string(filename);
    }

    public static bool remove(string fileName) {
        return qtd_QFile_remove_string(fileName);
    }

    public static bool rename(string oldName, string newName) {
        return qtd_QFile_rename_string_string(oldName, newName);
    }

    public static bool resize(string filename, long sz) {
        return qtd_QFile_resize_string_long(filename, sz);
    }

    public static bool setPermissions(string filename, int permissionSpec) {
        return qtd_QFile_setPermissions_string_Permissions(filename, permissionSpec);
    }

    public static string symLinkTarget(string fileName) {
        string res;
        qtd_QFile_symLinkTarget_string(&res, fileName);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QFile_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QFile);
    }

    static QFile __getObject(void* nativeId) {
        return static_cast!(QFile)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QFile_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QFile_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QFile(nativeId, initFlags);
        QFile.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QFile;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
    public static String decodeName(String localFileName) {
    return decodeName(qt.QNativePointer.createCharPointer(localFileName));
    }
     */

}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QFile_QFile(void *d_ptr);
private extern(C) void* qtd_QFile_QFile_QObject(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QFile_QFile_string(void *d_ptr,
 string name0);
private extern(C) void* qtd_QFile_QFile_string_QObject(void *d_ptr,
 string name0,
 void* parent1);
private extern(C) bool  qtd_QFile_copy_string(void* __this_nativeId,
 string newName0);
private extern(C) int  qtd_QFile_error_const(void* __this_nativeId);
private extern(C) bool  qtd_QFile_exists_const(void* __this_nativeId);
private extern(C) void  qtd_QFile_fileName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QFile_flush(void* __this_nativeId);
private extern(C) int  qtd_QFile_handle_const(void* __this_nativeId);
private extern(C) bool  qtd_QFile_link_string(void* __this_nativeId,
 string newName0);
private extern(C) ubyte*  qtd_QFile_map_long_long_MemoryMapFlags(void* __this_nativeId,
 long offset0,
 long size1,
 int flags2);
private extern(C) bool  qtd_QFile_open_int_OpenMode(void* __this_nativeId,
 int fd0,
 int flags1);
private extern(C) int  qtd_QFile_permissions_const(void* __this_nativeId);
private extern(C) bool  qtd_QFile_remove(void* __this_nativeId);
private extern(C) bool  qtd_QFile_rename_string(void* __this_nativeId,
 string newName0);
private extern(C) bool  qtd_QFile_resize_long(void* __this_nativeId,
 long sz0);
private extern(C) void  qtd_QFile_setFileName_string(void* __this_nativeId,
 string name0);
private extern(C) bool  qtd_QFile_setPermissions_Permissions(void* __this_nativeId,
 int permissionSpec0);
private extern(C) void  qtd_QFile_symLinkTarget_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFile_unsetError(void* __this_nativeId);
private extern(C) bool  qtd_QFile_atEnd_const(void* __this_nativeId);
private extern(C) void  qtd_QFile_close(void* __this_nativeId);
private extern(C) void*  qtd_QFile_fileEngine_const(void* __this_nativeId);
private extern(C) bool  qtd_QFile_isSequential_const(void* __this_nativeId);
private extern(C) bool  qtd_QFile_open_OpenMode(void* __this_nativeId,
 int flags0);
private extern(C) long  qtd_QFile_pos_const(void* __this_nativeId);
private extern(C) long  qtd_QFile_readData_nativepointerchar_long(void* __this_nativeId,
 char* data0,
 long maxlen1);
private extern(C) long  qtd_QFile_readLineData_nativepointerchar_long(void* __this_nativeId,
 char* data0,
 long maxlen1);
private extern(C) bool  qtd_QFile_seek_long(void* __this_nativeId,
 long offset0);
private extern(C) long  qtd_QFile_size_const(void* __this_nativeId);
private extern(C) long  qtd_QFile_writeData_nativepointerchar_long(void* __this_nativeId,
 const (char*) data0,
 long len1);
private extern(C) bool  qtd_QFile_copy_string_string(string fileName0,
 string newName1);
private extern(C) void  qtd_QFile_decodeName_QByteArray(void* __d_return_value,
 void* localFileName0);
private extern(C) void  qtd_QFile_decodeName_nativepointerchar(void* __d_return_value,
 const (char*) localFileName0);
private extern(C) void*  qtd_QFile_encodeName_string(string fileName0);
private extern(C) bool  qtd_QFile_exists_string(string fileName0);
private extern(C) bool  qtd_QFile_link_string_string(string oldname0,
 string newName1);
private extern(C) int  qtd_QFile_permissions_string(string filename0);
private extern(C) bool  qtd_QFile_remove_string(string fileName0);
private extern(C) bool  qtd_QFile_rename_string_string(string oldName0,
 string newName1);
private extern(C) bool  qtd_QFile_resize_string_long(string filename0,
 long sz1);
private extern(C) bool  qtd_QFile_setPermissions_string_Permissions(string filename0,
 int permissionSpec1);
private extern(C) void  qtd_QFile_symLinkTarget_string(void* __d_return_value,
 string fileName0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId) qtd_QFile_fileEngine_const_dispatch; }
extern(C) void* qtd_export_QFile_fileEngine_const_dispatch(void *dId){
    auto d_object = cast(QFile) dId;
    QAbstractFileEngine ret_value = d_object.fileEngine();
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QFile_initCallBacks(void* virtuals);

extern(C) void static_init_QFile() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QFile_fileEngine_const_dispatch;
    qtd_QFile_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QFile_aboutToClose_handle(void* dId, void** args) {
        auto d_object = cast(QFile) dId;
        //d_object.aboutToClose_emit();
}*/
/*private extern(C) void qtd_QFile_bytesWritten_handle(void* dId, void** args) {
        auto d_object = cast(QFile) dId;
        auto bytes0 = *(cast(long*)args[1]);
        //d_object.bytesWritten_emit(bytes0);
}*/
/*private extern(C) void qtd_QFile_readChannelFinished_handle(void* dId, void** args) {
        auto d_object = cast(QFile) dId;
        //d_object.readChannelFinished_emit();
}*/
/*private extern(C) void qtd_QFile_readyRead_handle(void* dId, void** args) {
        auto d_object = cast(QFile) dId;
        //d_object.readyRead_emit();
}*/

extern(C) QMetaObjectNative* qtd_QFile_staticMetaObject();

extern(C) void qtd_QFile_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QFile_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
