module qt.core.QProcess;

public import qt.core.QProcess_aux;
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
public import qt.core.QChildEvent;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QProcess : QIODevice
{
    public enum ProcessError {
        FailedToStart = 0,
        Crashed = 1,
        Timedout = 2,
        ReadError = 3,
        WriteError = 4,
        UnknownError = 5
    }

    alias ProcessError.FailedToStart FailedToStart;
    alias ProcessError.Crashed Crashed;
    alias ProcessError.Timedout Timedout;
    alias ProcessError.ReadError ReadError;
    alias ProcessError.WriteError WriteError;
    alias ProcessError.UnknownError UnknownError;

    public enum ProcessChannelMode {
        SeparateChannels = 0,
        MergedChannels = 1,
        ForwardedChannels = 2
    }

    alias ProcessChannelMode.SeparateChannels SeparateChannels;
    alias ProcessChannelMode.MergedChannels MergedChannels;
    alias ProcessChannelMode.ForwardedChannels ForwardedChannels;

    public enum ProcessChannel {
        StandardOutput = 0,
        StandardError = 1
    }

    alias ProcessChannel.StandardOutput StandardOutput;
    alias ProcessChannel.StandardError StandardError;

    public enum ProcessState {
        NotRunning = 0,
        Starting = 1,
        Running = 2
    }

    alias ProcessState.NotRunning NotRunning;
    alias ProcessState.Starting Starting;
    alias ProcessState.Running Running;

    public enum ExitStatus {
        NormalExit = 0,
        CrashExit = 1
    }

    alias ExitStatus.NormalExit NormalExit;
    alias ExitStatus.CrashExit CrashExit;


Object __rcStandardOutputProcess = null;

    private static const string[] __signalSignatures = [
            "error(QProcess::ProcessError)", 
            "finished(int)", 
            "finished(int,QProcess::ExitStatus)", 
            "readyReadStandardError()", 
            "readyReadStandardOutput()", 
            "started()", 
            "stateChanged(QProcess::ProcessState)"    ];

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

    protected final void error(QProcess.ProcessError error) {
        qtd_QProcess_error_ProcessError(qtdNativeId, error);
    }

    protected final void finished(int exitCode) {
        qtd_QProcess_finished_int(qtdNativeId, exitCode);
    }

    protected final void finished(int exitCode, QProcess.ExitStatus exitStatus) {
        qtd_QProcess_finished_int_ExitStatus(qtdNativeId, exitCode, exitStatus);
    }

    protected final void readyReadStandardError() {
        qtd_QProcess_readyReadStandardError(qtdNativeId);
    }

    protected final void readyReadStandardOutput() {
        qtd_QProcess_readyReadStandardOutput(qtdNativeId);
    }

    protected final void started() {
        qtd_QProcess_started(qtdNativeId);
    }

    protected final void stateChanged(QProcess.ProcessState state) {
        qtd_QProcess_stateChanged_ProcessState(qtdNativeId, state);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QProcess_QProcess_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void closeReadChannel(QProcess.ProcessChannel channel) {
        qtd_QProcess_closeReadChannel_ProcessChannel(qtdNativeId, channel);
    }

    public final void closeWriteChannel() {
        qtd_QProcess_closeWriteChannel(qtdNativeId);
    }

    public final QList!(string) environment() const {
        auto res = QList!(string).opCall();
        qtd_QProcess_environment_const(qtdNativeId, &res);
        return res;
    }

    public final QProcess.ProcessError lastError() const {
        return cast(QProcess.ProcessError) qtd_QProcess_lastError_const(qtdNativeId);
    }

    public final int exitCode() const {
        return qtd_QProcess_exitCode_const(qtdNativeId);
    }

    public final QProcess.ExitStatus exitStatus() const {
        return cast(QProcess.ExitStatus) qtd_QProcess_exitStatus_const(qtdNativeId);
    }

    public final void kill() {
        qtd_QProcess_kill(qtdNativeId);
    }

    public final QProcess.ProcessChannelMode processChannelMode() const {
        return cast(QProcess.ProcessChannelMode) qtd_QProcess_processChannelMode_const(qtdNativeId);
    }

    public final QByteArray readAllStandardError() {
        void* ret = qtd_QProcess_readAllStandardError(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QByteArray readAllStandardOutput() {
        void* ret = qtd_QProcess_readAllStandardOutput(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QProcess.ProcessChannel readChannel() const {
        return cast(QProcess.ProcessChannel) qtd_QProcess_readChannel_const(qtdNativeId);
    }

    public final void setEnvironment(QList!(string) environment) {
        qtd_QProcess_setEnvironment_QList(qtdNativeId, &environment);
    }

    public final void setProcessChannelMode(QProcess.ProcessChannelMode mode) {
        qtd_QProcess_setProcessChannelMode_ProcessChannelMode(qtdNativeId, mode);
    }

    protected final void setProcessState(QProcess.ProcessState state) {
        qtd_QProcess_setProcessState_ProcessState(qtdNativeId, state);
    }

    public final void setReadChannel(QProcess.ProcessChannel channel) {
        qtd_QProcess_setReadChannel_ProcessChannel(qtdNativeId, channel);
    }

    public final void setStandardErrorFile(string fileName, int mode = 8) {
        qtd_QProcess_setStandardErrorFile_string_OpenMode(qtdNativeId, fileName, mode);
    }

    public final void setStandardInputFile(string fileName) {
        qtd_QProcess_setStandardInputFile_string(qtdNativeId, fileName);
    }

    public final void setStandardOutputFile(string fileName, int mode = 8) {
        qtd_QProcess_setStandardOutputFile_string_OpenMode(qtdNativeId, fileName, mode);
    }

    public final void setStandardOutputProcess(QProcess destination) {
        {
            __rcStandardOutputProcess = cast(Object) destination;
        }
        qtd_QProcess_setStandardOutputProcess_QProcess(qtdNativeId, destination is null ? null : destination.qtdNativeId);
    }

    public final void setWorkingDirectory(string dir) {
        qtd_QProcess_setWorkingDirectory_string(qtdNativeId, dir);
    }

    public final void start(string program, int mode = 3) {
        qtd_QProcess_start_string_OpenMode(qtdNativeId, program, mode);
    }

    public final void start(string program, QList!(string) arguments, int mode = 3) {
        qtd_QProcess_start_string_QList_OpenMode(qtdNativeId, program, &arguments, mode);
    }

    public final QProcess.ProcessState state() const {
        return cast(QProcess.ProcessState) qtd_QProcess_state_const(qtdNativeId);
    }

    public final void terminate() {
        qtd_QProcess_terminate(qtdNativeId);
    }

    public final bool waitForFinished(int msecs = 30000) {
        return qtd_QProcess_waitForFinished_int(qtdNativeId, msecs);
    }

    public final bool waitForStarted(int msecs = 30000) {
        return qtd_QProcess_waitForStarted_int(qtdNativeId, msecs);
    }

    public final string workingDirectory() const {
        string res;
        qtd_QProcess_workingDirectory_const(qtdNativeId, &res);
        return res;
    }

    public bool atEnd() const {
        return qtd_QProcess_atEnd_const(qtdNativeId);
    }

    public long bytesAvailable() const {
        return qtd_QProcess_bytesAvailable_const(qtdNativeId);
    }

    public long bytesToWrite() const {
        return qtd_QProcess_bytesToWrite_const(qtdNativeId);
    }

    public bool canReadLine() const {
        return qtd_QProcess_canReadLine_const(qtdNativeId);
    }

    public void close() {
        qtd_QProcess_close(qtdNativeId);
    }

    public bool isSequential() const {
        return qtd_QProcess_isSequential_const(qtdNativeId);
    }

    protected long readData(char* data, long maxlen) {
        return qtd_QProcess_readData_nativepointerchar_long(qtdNativeId, data, maxlen);
    }

    protected void setupChildProcess() {
        qtd_QProcess_setupChildProcess(qtdNativeId);
    }

    public bool waitForBytesWritten(int msecs = 30000) {
        return qtd_QProcess_waitForBytesWritten_int(qtdNativeId, msecs);
    }

    public bool waitForReadyRead(int msecs = 30000) {
        return qtd_QProcess_waitForReadyRead_int(qtdNativeId, msecs);
    }

    protected long writeData(const(char*) data, long len) {
        return qtd_QProcess_writeData_nativepointerchar_long(qtdNativeId, data, len);
    }

    public static int execute(string program) {
        return qtd_QProcess_execute_string(program);
    }

    public static int execute(string program, QList!(string) arguments) {
        return qtd_QProcess_execute_string_QList(program, &arguments);
    }

    public static bool startDetached(string program) {
        return qtd_QProcess_startDetached_string(program);
    }

    public static bool startDetached(string program, QList!(string) arguments) {
        return qtd_QProcess_startDetached_string_QList(program, &arguments);
    }

    public static bool startDetached(string program, QList!(string) arguments, string workingDirectory, long* pid = null) {
        return qtd_QProcess_startDetached_string_QList_string_nativepointerlong(program, &arguments, workingDirectory, pid);
    }

    public static QList!(string) systemEnvironment() {
        auto res = QList!(string).opCall();
        qtd_QProcess_systemEnvironment(&res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "kill()", 
            "terminate()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QProcess_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QProcess);
    }

    static QProcess __getObject(void* nativeId) {
        return static_cast!(QProcess)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QProcess_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QProcess_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QProcess(nativeId, initFlags);
        QProcess.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QProcess.ProcessError)("error"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int)("finished"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(int,QProcess.ExitStatus)("finished"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!()("readyReadStandardError"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!()("readyReadStandardOutput"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!()("started"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[6]);
        mo.addMethod(new QMetaSignal(signature!(QProcess.ProcessState)("stateChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("kill"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("terminate"), index));

    }

    public alias void __isQtType_QProcess;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QProcess_error_ProcessError(void* __this_nativeId,
 int error0);
private extern(C) void  qtd_QProcess_finished_int(void* __this_nativeId,
 int exitCode0);
private extern(C) void  qtd_QProcess_finished_int_ExitStatus(void* __this_nativeId,
 int exitCode0,
 int exitStatus1);
private extern(C) void  qtd_QProcess_readyReadStandardError(void* __this_nativeId);
private extern(C) void  qtd_QProcess_readyReadStandardOutput(void* __this_nativeId);
private extern(C) void  qtd_QProcess_started(void* __this_nativeId);
private extern(C) void  qtd_QProcess_stateChanged_ProcessState(void* __this_nativeId,
 int state0);

// C wrappers
private extern(C) void* qtd_QProcess_QProcess_QObject(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QProcess_closeReadChannel_ProcessChannel(void* __this_nativeId,
 int channel0);
private extern(C) void  qtd_QProcess_closeWriteChannel(void* __this_nativeId);
private extern(C) void  qtd_QProcess_environment_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QProcess_lastError_const(void* __this_nativeId);
private extern(C) int  qtd_QProcess_exitCode_const(void* __this_nativeId);
private extern(C) int  qtd_QProcess_exitStatus_const(void* __this_nativeId);
private extern(C) void  qtd_QProcess_kill(void* __this_nativeId);
private extern(C) int  qtd_QProcess_processChannelMode_const(void* __this_nativeId);
private extern(C) void*  qtd_QProcess_readAllStandardError(void* __this_nativeId);
private extern(C) void*  qtd_QProcess_readAllStandardOutput(void* __this_nativeId);
private extern(C) int  qtd_QProcess_readChannel_const(void* __this_nativeId);
private extern(C) void  qtd_QProcess_setEnvironment_QList(void* __this_nativeId,
 void* environment0);
private extern(C) void  qtd_QProcess_setProcessChannelMode_ProcessChannelMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QProcess_setProcessState_ProcessState(void* __this_nativeId,
 int state0);
private extern(C) void  qtd_QProcess_setReadChannel_ProcessChannel(void* __this_nativeId,
 int channel0);
private extern(C) void  qtd_QProcess_setStandardErrorFile_string_OpenMode(void* __this_nativeId,
 string fileName0,
 int mode1);
private extern(C) void  qtd_QProcess_setStandardInputFile_string(void* __this_nativeId,
 string fileName0);
private extern(C) void  qtd_QProcess_setStandardOutputFile_string_OpenMode(void* __this_nativeId,
 string fileName0,
 int mode1);
private extern(C) void  qtd_QProcess_setStandardOutputProcess_QProcess(void* __this_nativeId,
 void* destination0);
private extern(C) void  qtd_QProcess_setWorkingDirectory_string(void* __this_nativeId,
 string dir0);
private extern(C) void  qtd_QProcess_start_string_OpenMode(void* __this_nativeId,
 string program0,
 int mode1);
private extern(C) void  qtd_QProcess_start_string_QList_OpenMode(void* __this_nativeId,
 string program0,
 void* arguments1,
 int mode2);
private extern(C) int  qtd_QProcess_state_const(void* __this_nativeId);
private extern(C) void  qtd_QProcess_terminate(void* __this_nativeId);
private extern(C) bool  qtd_QProcess_waitForFinished_int(void* __this_nativeId,
 int msecs0);
private extern(C) bool  qtd_QProcess_waitForStarted_int(void* __this_nativeId,
 int msecs0);
private extern(C) void  qtd_QProcess_workingDirectory_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QProcess_atEnd_const(void* __this_nativeId);
private extern(C) long  qtd_QProcess_bytesAvailable_const(void* __this_nativeId);
private extern(C) long  qtd_QProcess_bytesToWrite_const(void* __this_nativeId);
private extern(C) bool  qtd_QProcess_canReadLine_const(void* __this_nativeId);
private extern(C) void  qtd_QProcess_close(void* __this_nativeId);
private extern(C) bool  qtd_QProcess_isSequential_const(void* __this_nativeId);
private extern(C) long  qtd_QProcess_readData_nativepointerchar_long(void* __this_nativeId,
 char* data0,
 long maxlen1);
private extern(C) void  qtd_QProcess_setupChildProcess(void* __this_nativeId);
private extern(C) bool  qtd_QProcess_waitForBytesWritten_int(void* __this_nativeId,
 int msecs0);
private extern(C) bool  qtd_QProcess_waitForReadyRead_int(void* __this_nativeId,
 int msecs0);
private extern(C) long  qtd_QProcess_writeData_nativepointerchar_long(void* __this_nativeId,
 const (char*) data0,
 long len1);
private extern(C) int  qtd_QProcess_execute_string(string program0);
private extern(C) int  qtd_QProcess_execute_string_QList(string program0,
 void* arguments1);
private extern(C) bool  qtd_QProcess_startDetached_string(string program0);
private extern(C) bool  qtd_QProcess_startDetached_string_QList(string program0,
 void* arguments1);
private extern(C) bool  qtd_QProcess_startDetached_string_QList_string_nativepointerlong(string program0,
 void* arguments1,
 string workingDirectory2,
 long* pid3);
private extern(C) void  qtd_QProcess_systemEnvironment(void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId) qtd_QProcess_setupChildProcess_dispatch; }
extern(C) void qtd_export_QProcess_setupChildProcess_dispatch(void *dId){
    auto d_object = cast(QProcess) dId;
    d_object.setupChildProcess();
}

private extern (C) void qtd_QProcess_initCallBacks(void* virtuals);

extern(C) void static_init_QProcess() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QProcess_setupChildProcess_dispatch;
    qtd_QProcess_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QProcess_aboutToClose_handle(void* dId, void** args) {
        auto d_object = cast(QProcess) dId;
        //d_object.aboutToClose_emit();
}*/
/*private extern(C) void qtd_QProcess_bytesWritten_handle(void* dId, void** args) {
        auto d_object = cast(QProcess) dId;
        auto bytes0 = *(cast(long*)args[1]);
        //d_object.bytesWritten_emit(bytes0);
}*/
/*private extern(C) void qtd_QProcess_readChannelFinished_handle(void* dId, void** args) {
        auto d_object = cast(QProcess) dId;
        //d_object.readChannelFinished_emit();
}*/
/*private extern(C) void qtd_QProcess_readyRead_handle(void* dId, void** args) {
        auto d_object = cast(QProcess) dId;
        //d_object.readyRead_emit();
}*/
/*private extern(C) void qtd_QProcess_error_handle(void* dId, void** args) {
        auto d_object = cast(QProcess) dId;
        auto error0 = *(cast(QProcess.ProcessError*)args[1]);
        //d_object.error_emit(error0);
}*/
/*private extern(C) void qtd_QProcess_finished_handle(void* dId, void** args) {
        auto d_object = cast(QProcess) dId;
        auto exitCode0 = *(cast(int*)args[1]);
        //d_object.finished_emit(exitCode0);
}*/
/*private extern(C) void qtd_QProcess_finished_handle(void* dId, void** args) {
        auto d_object = cast(QProcess) dId;
        auto exitCode0 = *(cast(int*)args[1]);
        auto exitStatus1 = *(cast(QProcess.ExitStatus*)args[2]);
        //d_object.finished_emit(exitCode0, exitStatus1);
}*/
/*private extern(C) void qtd_QProcess_readyReadStandardError_handle(void* dId, void** args) {
        auto d_object = cast(QProcess) dId;
        //d_object.readyReadStandardError_emit();
}*/
/*private extern(C) void qtd_QProcess_readyReadStandardOutput_handle(void* dId, void** args) {
        auto d_object = cast(QProcess) dId;
        //d_object.readyReadStandardOutput_emit();
}*/
/*private extern(C) void qtd_QProcess_started_handle(void* dId, void** args) {
        auto d_object = cast(QProcess) dId;
        //d_object.started_emit();
}*/
/*private extern(C) void qtd_QProcess_stateChanged_handle(void* dId, void** args) {
        auto d_object = cast(QProcess) dId;
        auto state0 = *(cast(QProcess.ProcessState*)args[1]);
        //d_object.stateChanged_emit(state0);
}*/

extern(C) QMetaObjectNative* qtd_QProcess_staticMetaObject();

extern(C) void qtd_QProcess_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QProcess_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
