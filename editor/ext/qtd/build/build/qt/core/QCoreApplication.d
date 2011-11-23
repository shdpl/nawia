module qt.core.QCoreApplication;

import qtd.String;
public import qt.core.QCoreApplication_aux;
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
private import qt.core.ArrayOps;
private import qt.core.ArrayOps2;
// automatic imports-------------
public import qt.core.Qt;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QTranslator;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QCoreApplication : QObject
{
    public enum Encoding {
        CodecForTr = 0,
        UnicodeUTF8 = 1
    }

    alias Encoding.CodecForTr CodecForTr;
    alias Encoding.UnicodeUTF8 UnicodeUTF8;


    package static Object[] __rcTranslators;

    private static const string[] __signalSignatures = [
            "aboutToQuit()", 
            "unixSignal(int)"    ];

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

    protected final void aboutToQuit() {
        qtd_QCoreApplication_aboutToQuit(qtdNativeId);
    }

    protected final void unixSignal(int arg__1) {
        qtd_QCoreApplication_unixSignal_int(qtdNativeId, arg__1);
    }
// Functions

    private this(int* argc, char** argv) {
        void* ret = qtd_QCoreApplication_QCoreApplication_nativepointerint_nativepointerchar(cast(void*) this, argc, argv);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public bool event(QEvent arg__1) {
        return qtd_QCoreApplication_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool notify(QObject arg__1, QEvent arg__2) {
        return qtd_QCoreApplication_notify_QObject_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId, arg__2 is null ? null : arg__2.qtdNativeId);
    }

    public static void addLibraryPath(string arg__1) {
        qtd_QCoreApplication_addLibraryPath_string(arg__1);
    }

    public static string applicationDirPath() {
        string res;
        qtd_QCoreApplication_applicationDirPath(&res);
        return res;
    }

    public static string applicationFilePath() {
        string res;
        qtd_QCoreApplication_applicationFilePath(&res);
        return res;
    }

    public static string applicationName() {
        string res;
        qtd_QCoreApplication_applicationName(&res);
        return res;
    }

    public static long applicationPid() {
        return qtd_QCoreApplication_applicationPid();
    }

    public static string applicationVersion() {
        string res;
        qtd_QCoreApplication_applicationVersion(&res);
        return res;
    }

    public static QList!(string) arguments() {
        auto res = QList!(string).opCall();
        qtd_QCoreApplication_arguments(&res);
        return res;
    }

    public static bool closingDown() {
        return qtd_QCoreApplication_closingDown();
    }

    public static int exec() {
        return qtd_QCoreApplication_exec();
    }

    public static void exit(int retcode = 0) {
        qtd_QCoreApplication_exit_int(retcode);
    }

    public static void flush() {
        qtd_QCoreApplication_flush();
    }

    public static bool hasPendingEvents() {
        return qtd_QCoreApplication_hasPendingEvents();
    }

    public static void installTranslator(QTranslator messageFile) {
        if (messageFile !is null) {
            __rcTranslators ~= cast(Object) messageFile;
        }
        qtd_QCoreApplication_installTranslator_QTranslator(messageFile is null ? null : messageFile.qtdNativeId);
    }

    public static QCoreApplication instance() {
        void *ret = qtd_QCoreApplication_instance();
        QCoreApplication __d_return_value = QCoreApplication.__getObject(ret);
        return __d_return_value;
    }

    public static QList!(string) libraryPaths() {
        auto res = QList!(string).opCall();
        qtd_QCoreApplication_libraryPaths(&res);
        return res;
    }

    public static string organizationDomain() {
        string res;
        qtd_QCoreApplication_organizationDomain(&res);
        return res;
    }

    public static string organizationName() {
        string res;
        qtd_QCoreApplication_organizationName(&res);
        return res;
    }

    public static void postEvent(QObject receiver, QEvent event) {
        if (event !is null) {
            event.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QCoreApplication_postEvent_QObject_QEvent(receiver is null ? null : receiver.qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public static void postEvent(QObject receiver, QEvent event, int priority) {
        qtd_QCoreApplication_postEvent_QObject_QEvent_int(receiver is null ? null : receiver.qtdNativeId, event is null ? null : event.qtdNativeId, priority);
    }

    public static void processEvents(int flags = 0) {
        qtd_QCoreApplication_processEvents_ProcessEventsFlags(flags);
    }

    public static void processEvents(int flags, int maxtime) {
        qtd_QCoreApplication_processEvents_ProcessEventsFlags_int(flags, maxtime);
    }

    public static void quit() {
        qtd_QCoreApplication_quit();
    }

    public static void removeLibraryPath(string arg__1) {
        qtd_QCoreApplication_removeLibraryPath_string(arg__1);
    }

    public static void removePostedEvents(QObject receiver) {
        qtd_QCoreApplication_removePostedEvents_QObject(receiver is null ? null : receiver.qtdNativeId);
    }

    public static void removePostedEvents(QObject receiver, int eventType) {
        qtd_QCoreApplication_removePostedEvents_QObject_int(receiver is null ? null : receiver.qtdNativeId, eventType);
    }

    public static void removeTranslator(QTranslator messageFile) {
        if (messageFile !is null) {
            remove(__rcTranslators, cast(Object) messageFile);
        }
        qtd_QCoreApplication_removeTranslator_QTranslator(messageFile is null ? null : messageFile.qtdNativeId);
    }

    public static bool sendEvent(QObject receiver, QEvent event) {
        return qtd_QCoreApplication_sendEvent_QObject_QEvent(receiver is null ? null : receiver.qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public static void sendPostedEvents() {
        qtd_QCoreApplication_sendPostedEvents();
    }

    public static void sendPostedEvents(QObject receiver, int event_type) {
        qtd_QCoreApplication_sendPostedEvents_QObject_int(receiver is null ? null : receiver.qtdNativeId, event_type);
    }

    public static void setApplicationName(string application) {
        qtd_QCoreApplication_setApplicationName_string(application);
    }

    public static void setApplicationVersion(string version_) {
        qtd_QCoreApplication_setApplicationVersion_string(version_);
    }

    public static void setAttribute(Qt.ApplicationAttribute attribute, bool on = true) {
        qtd_QCoreApplication_setAttribute_ApplicationAttribute_bool(attribute, on);
    }

    public static void setLibraryPaths(QList!(string) arg__1) {
        qtd_QCoreApplication_setLibraryPaths_QList(&arg__1);
    }

    public static void setOrganizationDomain(string orgDomain) {
        qtd_QCoreApplication_setOrganizationDomain_string(orgDomain);
    }

    public static void setOrganizationName(string orgName) {
        qtd_QCoreApplication_setOrganizationName_string(orgName);
    }

    public static bool startingUp() {
        return qtd_QCoreApplication_startingUp();
    }

    public static bool testAttribute(Qt.ApplicationAttribute attribute) {
        return qtd_QCoreApplication_testAttribute_ApplicationAttribute(attribute);
    }

    public static string translate(const(char*) context, const(char*) key, const(char*) disambiguation = null, QCoreApplication.Encoding encoding = QCoreApplication.Encoding.CodecForTr) {
        string res;
        qtd_QCoreApplication_translate_nativepointerchar_nativepointerchar_nativepointerchar_Encoding(&res, context, key, disambiguation, encoding);
        return res;
    }

    public static string translate(const(char*) context, const(char*) key, const(char*) disambiguation, QCoreApplication.Encoding encoding, int n) {
        string res;
        qtd_QCoreApplication_translate_nativepointerchar_nativepointerchar_nativepointerchar_Encoding_int(&res, context, key, disambiguation, encoding, n);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "quit()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QCoreApplication_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QCoreApplication);
    }

    static QCoreApplication __getObject(void* nativeId) {
        return static_cast!(QCoreApplication)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QCoreApplication_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QCoreApplication_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QCoreApplication(nativeId, initFlags);
        QCoreApplication.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("aboutToQuit"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int)("unixSignal"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("quit"), index));

    }

    public alias void __isQtType_QCoreApplication;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    protected static QCoreApplication m_instance = null;

    this(string[] args)
    {
        //        if (m_instance != null)
        //            throw new RuntimeException("QCoreApplication can only be initialized once");

        argc = cast(int) args.length;
        argv = toStringzArray(args);
        this(&argc, argv);

        //        m_instance.aboutToQuit.connect(m_instance, "disposeOfMyself()");
    }

    private int argc;
    private char **argv;
    /*
    public static string translate(string context, string key, string disambiguation, QCoreApplication_Encoding encoding) {
    string res;
    qtd_QCoreApplication_translate_nativepointerchar_nativepointerchar_nativepointerchar_Encoding(&res, toStringz(context), toStringz(key), toStringz(disambiguation), encoding);
    return res;
    }

    public static string translate(string context, string key, string disambiguation, QCoreApplication_Encoding encoding, int n) {
    string res;
    qtd_QCoreApplication_translate_nativepointerchar_nativepointerchar_nativepointerchar_Encoding_int(&res, toStringz(context), toStringz(key), toStringz(disambiguation), encoding, n);
    return res;
    }
     */

}

// C wrappers for signal emitters
private extern(C) void  qtd_QCoreApplication_aboutToQuit(void* __this_nativeId);
private extern(C) void  qtd_QCoreApplication_unixSignal_int(void* __this_nativeId,
 int arg__1);

// C wrappers
private extern(C) void* qtd_QCoreApplication_QCoreApplication_nativepointerint_nativepointerchar(void *d_ptr,
 int * argc0,
 char** argv1);
private extern(C) bool  qtd_QCoreApplication_event_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QCoreApplication_notify_QObject_QEvent(void* __this_nativeId,
 void* arg__1,
 void* arg__2);
private extern(C) void  qtd_QCoreApplication_addLibraryPath_string(string arg__1);
private extern(C) void  qtd_QCoreApplication_applicationDirPath(void* __d_return_value);
private extern(C) void  qtd_QCoreApplication_applicationFilePath(void* __d_return_value);
private extern(C) void  qtd_QCoreApplication_applicationName(void* __d_return_value);
private extern(C) long  qtd_QCoreApplication_applicationPid();
private extern(C) void  qtd_QCoreApplication_applicationVersion(void* __d_return_value);
private extern(C) void  qtd_QCoreApplication_arguments(void* __d_return_value);
private extern(C) bool  qtd_QCoreApplication_closingDown();
private extern(C) int  qtd_QCoreApplication_exec();
private extern(C) void  qtd_QCoreApplication_exit_int(int retcode0);
private extern(C) void  qtd_QCoreApplication_flush();
private extern(C) bool  qtd_QCoreApplication_hasPendingEvents();
private extern(C) void  qtd_QCoreApplication_installTranslator_QTranslator(void* messageFile0);
private extern(C) void*  qtd_QCoreApplication_instance();
private extern(C) void  qtd_QCoreApplication_libraryPaths(void* __d_return_value);
private extern(C) void  qtd_QCoreApplication_organizationDomain(void* __d_return_value);
private extern(C) void  qtd_QCoreApplication_organizationName(void* __d_return_value);
private extern(C) void  qtd_QCoreApplication_postEvent_QObject_QEvent(void* receiver0,
 void* event1);
private extern(C) void  qtd_QCoreApplication_postEvent_QObject_QEvent_int(void* receiver0,
 void* event1,
 int priority2);
private extern(C) void  qtd_QCoreApplication_processEvents_ProcessEventsFlags(int flags0);
private extern(C) void  qtd_QCoreApplication_processEvents_ProcessEventsFlags_int(int flags0,
 int maxtime1);
private extern(C) void  qtd_QCoreApplication_quit();
private extern(C) void  qtd_QCoreApplication_removeLibraryPath_string(string arg__1);
private extern(C) void  qtd_QCoreApplication_removePostedEvents_QObject(void* receiver0);
private extern(C) void  qtd_QCoreApplication_removePostedEvents_QObject_int(void* receiver0,
 int eventType1);
private extern(C) void  qtd_QCoreApplication_removeTranslator_QTranslator(void* messageFile0);
private extern(C) bool  qtd_QCoreApplication_sendEvent_QObject_QEvent(void* receiver0,
 void* event1);
private extern(C) void  qtd_QCoreApplication_sendPostedEvents();
private extern(C) void  qtd_QCoreApplication_sendPostedEvents_QObject_int(void* receiver0,
 int event_type1);
private extern(C) void  qtd_QCoreApplication_setApplicationName_string(string application0);
private extern(C) void  qtd_QCoreApplication_setApplicationVersion_string(string version0);
private extern(C) void  qtd_QCoreApplication_setAttribute_ApplicationAttribute_bool(int attribute0,
 bool on1);
private extern(C) void  qtd_QCoreApplication_setLibraryPaths_QList(void* arg__1);
private extern(C) void  qtd_QCoreApplication_setOrganizationDomain_string(string orgDomain0);
private extern(C) void  qtd_QCoreApplication_setOrganizationName_string(string orgName0);
private extern(C) bool  qtd_QCoreApplication_startingUp();
private extern(C) bool  qtd_QCoreApplication_testAttribute_ApplicationAttribute(int attribute0);
private extern(C) void  qtd_QCoreApplication_translate_nativepointerchar_nativepointerchar_nativepointerchar_Encoding(void* __d_return_value,
 const (char*) context0,
 const (char*) key1,
 const (char*) disambiguation2,
 int encoding3);
private extern(C) void  qtd_QCoreApplication_translate_nativepointerchar_nativepointerchar_nativepointerchar_Encoding_int(void* __d_return_value,
 const (char*) context0,
 const (char*) key1,
 const (char*) disambiguation2,
 int encoding3,
 int n4);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId, void* arg__1, void* arg__2) qtd_QCoreApplication_notify_QObject_QEvent_dispatch; }
extern(C) bool qtd_export_QCoreApplication_notify_QObject_QEvent_dispatch(void *dId, void* arg__1, void* arg__2){
    auto d_object = cast(QCoreApplication) dId;
    scope arg__1_d_ref = new QObject(arg__1, QtdObjectInitFlags.onStack);

    scope arg__2_d_ref = new QEvent(arg__2, QtdObjectInitFlags.onStack);
    auto return_value = d_object.notify(arg__1_d_ref, arg__2_d_ref);
    return return_value;
}

private extern (C) void qtd_QCoreApplication_initCallBacks(void* virtuals);

extern(C) void static_init_QCoreApplication() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QCoreApplication_notify_QObject_QEvent_dispatch;
    qtd_QCoreApplication_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QCoreApplication_aboutToQuit_handle(void* dId, void** args) {
        auto d_object = cast(QCoreApplication) dId;
        //d_object.aboutToQuit_emit();
}*/
/*private extern(C) void qtd_QCoreApplication_unixSignal_handle(void* dId, void** args) {
        auto d_object = cast(QCoreApplication) dId;
        auto arg__1 = *(cast(int*)args[1]);
        //d_object.unixSignal_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QCoreApplication_staticMetaObject();

extern(C) void qtd_QCoreApplication_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QCoreApplication_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
