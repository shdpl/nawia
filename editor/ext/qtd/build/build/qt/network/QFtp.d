module qt.network.QFtp;

public import qt.network.QFtp_aux;
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
private import qt.network.ArrayOps2;
// automatic imports-------------
public import qt.core.QIODevice;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QByteArray;
public import qt.network.QUrlInfo;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QFtp : QObject
{
    public enum TransferType {
        Binary = 0,
        Ascii = 1
    }

    alias TransferType.Binary Binary;
    alias TransferType.Ascii Ascii;

    public enum Error {
        NoError = 0,
        UnknownError = 1,
        HostNotFound = 2,
        ConnectionRefused = 3,
        NotConnected = 4
    }

    alias Error.NoError NoError;
    alias Error.UnknownError UnknownError;
    alias Error.HostNotFound HostNotFound;
    alias Error.ConnectionRefused ConnectionRefused;
    alias Error.NotConnected NotConnected;

    public enum Command {
        None = 0,
        SetTransferMode = 1,
        SetProxy = 2,
        ConnectToHost = 3,
        Login = 4,
        Close = 5,
        List = 6,
        Cd = 7,
        Get = 8,
        Put = 9,
        Remove = 10,
        Mkdir = 11,
        Rmdir = 12,
        Rename = 13,
        RawCommand = 14
    }

    alias Command.None None;
    alias Command.SetTransferMode SetTransferMode;
    alias Command.SetProxy SetProxy;
    alias Command.ConnectToHost ConnectToHost;
    alias Command.Login Login;
    alias Command.Close Close;
    alias Command.List List;
    alias Command.Cd Cd;
    alias Command.Get Get;
    alias Command.Put Put;
    alias Command.Remove Remove;
    alias Command.Mkdir Mkdir;
    alias Command.Rmdir Rmdir;
    alias Command.Rename Rename;
    alias Command.RawCommand RawCommand;

    public enum TransferMode {
        Active = 0,
        Passive = 1
    }

    alias TransferMode.Active Active;
    alias TransferMode.Passive Passive;

    public enum State {
        Unconnected = 0,
        HostLookup = 1,
        Connecting = 2,
        Connected = 3,
        LoggedIn = 4,
        Closing = 5
    }

    alias State.Unconnected Unconnected;
    alias State.HostLookup HostLookup;
    alias State.Connecting Connecting;
    alias State.Connected Connected;
    alias State.LoggedIn LoggedIn;
    alias State.Closing Closing;


    private static const string[] __signalSignatures = [
            "commandFinished(int,bool)", 
            "commandStarted(int)", 
            "dataTransferProgress(qint64,qint64)", 
            "done(bool)", 
            "listInfo(QUrlInfo)", 
            "rawCommandReply(int,QString)", 
            "readyRead()", 
            "stateChanged(int)"    ];

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

    protected final void commandFinished(int arg__1, bool arg__2) {
        qtd_QFtp_commandFinished_int_bool(qtdNativeId, arg__1, arg__2);
    }

    protected final void commandStarted(int arg__1) {
        qtd_QFtp_commandStarted_int(qtdNativeId, arg__1);
    }

    protected final void dataTransferProgress(long arg__1, long arg__2) {
        qtd_QFtp_dataTransferProgress_long_long(qtdNativeId, arg__1, arg__2);
    }

    protected final void done(bool arg__1) {
        qtd_QFtp_done_bool(qtdNativeId, arg__1);
    }

    protected final void listInfo(const(QUrlInfo) arg__1) {
        qtd_QFtp_listInfo_QUrlInfo(qtdNativeId, arg__1 is null ? null : (cast(QUrlInfo)arg__1).qtdNativeId);
    }

    protected final void rawCommandReply(int arg__1, string arg__2) {
        qtd_QFtp_rawCommandReply_int_string(qtdNativeId, arg__1, arg__2);
    }

    protected final void readyRead() {
        qtd_QFtp_readyRead(qtdNativeId);
    }

    protected final void stateChanged(int arg__1) {
        qtd_QFtp_stateChanged_int(qtdNativeId, arg__1);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QFtp_QFtp_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void abort() {
        qtd_QFtp_abort(qtdNativeId);
    }

    public final long bytesAvailable() const {
        return qtd_QFtp_bytesAvailable_const(qtdNativeId);
    }

    public final int cd(string dir) {
        return qtd_QFtp_cd_string(qtdNativeId, dir);
    }

    public final void clearPendingCommands() {
        qtd_QFtp_clearPendingCommands(qtdNativeId);
    }

    public final int close() {
        return qtd_QFtp_close(qtdNativeId);
    }

    public final int connectToHost(string host, ushort port = 21) {
        return qtd_QFtp_connectToHost_string_ushort(qtdNativeId, host, port);
    }

    public final QFtp.Command currentCommand() const {
        return cast(QFtp.Command) qtd_QFtp_currentCommand_const(qtdNativeId);
    }

    public final QIODevice currentDevice() const {
        void *ret = qtd_QFtp_currentDevice_const(qtdNativeId);
        QIODevice __d_return_value = QIODevice.__getObject(ret);
        return __d_return_value;
    }

    public final int currentId() const {
        return qtd_QFtp_currentId_const(qtdNativeId);
    }

    public final QFtp.Error error() const {
        return cast(QFtp.Error) qtd_QFtp_error_const(qtdNativeId);
    }

    public final string errorString() const {
        string res;
        qtd_QFtp_errorString_const(qtdNativeId, &res);
        return res;
    }

    public final int get(string file, QIODevice dev = null, QFtp.TransferType type = QFtp.TransferType.Binary) {
        return qtd_QFtp_get_string_QIODevice_TransferType(qtdNativeId, file, dev is null ? null : dev.qtdNativeId, type);
    }

    public final bool hasPendingCommands() const {
        return qtd_QFtp_hasPendingCommands_const(qtdNativeId);
    }

    public final int list(string dir = "") {
        return qtd_QFtp_list_string(qtdNativeId, dir);
    }

    public final int login(string user = "", string password = "") {
        return qtd_QFtp_login_string_string(qtdNativeId, user, password);
    }

    public final int mkdir(string dir) {
        return qtd_QFtp_mkdir_string(qtdNativeId, dir);
    }

    public final int put(QIODevice dev, string file, QFtp.TransferType type = QFtp.TransferType.Binary) {
        return qtd_QFtp_put_QIODevice_string_TransferType(qtdNativeId, dev is null ? null : dev.qtdNativeId, file, type);
    }

    public final int put(const(QByteArray) data, string file, QFtp.TransferType type = QFtp.TransferType.Binary) {
        return qtd_QFtp_put_QByteArray_string_TransferType(qtdNativeId, data is null ? null : (cast(QByteArray)data).qtdNativeId, file, type);
    }

    public final int rawCommand(string command) {
        return qtd_QFtp_rawCommand_string(qtdNativeId, command);
    }

    public final long read(char* data, long maxlen) {
        return qtd_QFtp_read_nativepointerchar_long(qtdNativeId, data, maxlen);
    }

    public final QByteArray readAll() {
        void* ret = qtd_QFtp_readAll(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final int remove(string file) {
        return qtd_QFtp_remove_string(qtdNativeId, file);
    }

    public final int rename(string oldname, string newname) {
        return qtd_QFtp_rename_string_string(qtdNativeId, oldname, newname);
    }

    public final int rmdir(string dir) {
        return qtd_QFtp_rmdir_string(qtdNativeId, dir);
    }

    public final int setProxy(string host, ushort port) {
        return qtd_QFtp_setProxy_string_ushort(qtdNativeId, host, port);
    }

    public final int setTransferMode(QFtp.TransferMode mode) {
        return qtd_QFtp_setTransferMode_TransferMode(qtdNativeId, mode);
    }

    public final QFtp.State state() const {
        return cast(QFtp.State) qtd_QFtp_state_const(qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "abort()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QFtp_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QFtp);
    }

    static QFtp __getObject(void* nativeId) {
        return static_cast!(QFtp)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QFtp_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QFtp_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QFtp(nativeId, initFlags);
        QFtp.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(int,bool)("commandFinished"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int)("commandStarted"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(long,long)("dataTransferProgress"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(bool)("done"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(const(QUrlInfo))("listInfo"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!(int,string)("rawCommandReply"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[6]);
        mo.addMethod(new QMetaSignal(signature!()("readyRead"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[7]);
        mo.addMethod(new QMetaSignal(signature!(int)("stateChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("abort"), index));

    }

    public alias void __isQtType_QFtp;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QFtp_commandFinished_int_bool(void* __this_nativeId,
 int arg__1,
 bool arg__2);
private extern(C) void  qtd_QFtp_commandStarted_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QFtp_dataTransferProgress_long_long(void* __this_nativeId,
 long arg__1,
 long arg__2);
private extern(C) void  qtd_QFtp_done_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QFtp_listInfo_QUrlInfo(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QFtp_rawCommandReply_int_string(void* __this_nativeId,
 int arg__1,
 string arg__2);
private extern(C) void  qtd_QFtp_readyRead(void* __this_nativeId);
private extern(C) void  qtd_QFtp_stateChanged_int(void* __this_nativeId,
 int arg__1);

// C wrappers
private extern(C) void* qtd_QFtp_QFtp_QObject(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QFtp_abort(void* __this_nativeId);
private extern(C) long  qtd_QFtp_bytesAvailable_const(void* __this_nativeId);
private extern(C) int  qtd_QFtp_cd_string(void* __this_nativeId,
 string dir0);
private extern(C) void  qtd_QFtp_clearPendingCommands(void* __this_nativeId);
private extern(C) int  qtd_QFtp_close(void* __this_nativeId);
private extern(C) int  qtd_QFtp_connectToHost_string_ushort(void* __this_nativeId,
 string host0,
 ushort port1);
private extern(C) int  qtd_QFtp_currentCommand_const(void* __this_nativeId);
private extern(C) void*  qtd_QFtp_currentDevice_const(void* __this_nativeId);
private extern(C) int  qtd_QFtp_currentId_const(void* __this_nativeId);
private extern(C) int  qtd_QFtp_error_const(void* __this_nativeId);
private extern(C) void  qtd_QFtp_errorString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QFtp_get_string_QIODevice_TransferType(void* __this_nativeId,
 string file0,
 void* dev1,
 int type2);
private extern(C) bool  qtd_QFtp_hasPendingCommands_const(void* __this_nativeId);
private extern(C) int  qtd_QFtp_list_string(void* __this_nativeId,
 string dir0);
private extern(C) int  qtd_QFtp_login_string_string(void* __this_nativeId,
 string user0,
 string password1);
private extern(C) int  qtd_QFtp_mkdir_string(void* __this_nativeId,
 string dir0);
private extern(C) int  qtd_QFtp_put_QIODevice_string_TransferType(void* __this_nativeId,
 void* dev0,
 string file1,
 int type2);
private extern(C) int  qtd_QFtp_put_QByteArray_string_TransferType(void* __this_nativeId,
 void* data0,
 string file1,
 int type2);
private extern(C) int  qtd_QFtp_rawCommand_string(void* __this_nativeId,
 string command0);
private extern(C) long  qtd_QFtp_read_nativepointerchar_long(void* __this_nativeId,
 char* data0,
 long maxlen1);
private extern(C) void*  qtd_QFtp_readAll(void* __this_nativeId);
private extern(C) int  qtd_QFtp_remove_string(void* __this_nativeId,
 string file0);
private extern(C) int  qtd_QFtp_rename_string_string(void* __this_nativeId,
 string oldname0,
 string newname1);
private extern(C) int  qtd_QFtp_rmdir_string(void* __this_nativeId,
 string dir0);
private extern(C) int  qtd_QFtp_setProxy_string_ushort(void* __this_nativeId,
 string host0,
 ushort port1);
private extern(C) int  qtd_QFtp_setTransferMode_TransferMode(void* __this_nativeId,
 int mode0);
private extern(C) int  qtd_QFtp_state_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QFtp_initCallBacks(void* virtuals);

extern(C) void static_init_QFtp() {
    qtd_QFtp_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QFtp_commandFinished_handle(void* dId, void** args) {
        auto d_object = cast(QFtp) dId;
        auto arg__1 = *(cast(int*)args[1]);
        auto arg__2 = *(cast(bool*)args[2]);
        //d_object.commandFinished_emit(arg__1, arg__2);
}*/
/*private extern(C) void qtd_QFtp_commandStarted_handle(void* dId, void** args) {
        auto d_object = cast(QFtp) dId;
        auto arg__1 = *(cast(int*)args[1]);
        //d_object.commandStarted_emit(arg__1);
}*/
/*private extern(C) void qtd_QFtp_dataTransferProgress_handle(void* dId, void** args) {
        auto d_object = cast(QFtp) dId;
        auto arg__1 = *(cast(long*)args[1]);
        auto arg__2 = *(cast(long*)args[2]);
        //d_object.dataTransferProgress_emit(arg__1, arg__2);
}*/
/*private extern(C) void qtd_QFtp_done_handle(void* dId, void** args) {
        auto d_object = cast(QFtp) dId;
        auto arg__1 = *(cast(bool*)args[1]);
        //d_object.done_emit(arg__1);
}*/
/*private extern(C) void qtd_QFtp_listInfo_handle(void* dId, void** args) {
        auto d_object = cast(QFtp) dId;
        scope arg__1 = new QUrlInfo(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.listInfo_emit(arg__1);
}*/
/*private extern(C) void qtd_QFtp_rawCommandReply_handle(void* dId, void** args) {
        auto d_object = cast(QFtp) dId;
        auto arg__1 = *(cast(int*)args[1]);
        auto arg__2_ptr = args[2];
        string arg__2 = QStringUtil.toNativeString(arg__2_ptr);
        //d_object.rawCommandReply_emit(arg__1, arg__2);
}*/
/*private extern(C) void qtd_QFtp_readyRead_handle(void* dId, void** args) {
        auto d_object = cast(QFtp) dId;
        //d_object.readyRead_emit();
}*/
/*private extern(C) void qtd_QFtp_stateChanged_handle(void* dId, void** args) {
        auto d_object = cast(QFtp) dId;
        auto arg__1 = *(cast(int*)args[1]);
        //d_object.stateChanged_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QFtp_staticMetaObject();

extern(C) void qtd_QFtp_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QFtp_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
