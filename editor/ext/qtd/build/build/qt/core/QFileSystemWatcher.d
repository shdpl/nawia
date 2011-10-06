module qt.core.QFileSystemWatcher;

public import qt.core.QFileSystemWatcher_aux;
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
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QFileSystemWatcher : QObject
{

    private static const string[] __signalSignatures = [
            "directoryChanged(QString)", 
            "fileChanged(QString)"    ];

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

    protected final void directoryChanged(string path) {
        qtd_QFileSystemWatcher_directoryChanged_string(qtdNativeId, path);
    }

    protected final void fileChanged(string path) {
        qtd_QFileSystemWatcher_fileChanged_string(qtdNativeId, path);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QFileSystemWatcher_QFileSystemWatcher_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QList!(string) paths, QObject parent_ = null) {
        void* ret = qtd_QFileSystemWatcher_QFileSystemWatcher_QList_QObject(cast(void*) this, &paths, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addPath(string file) {
        qtd_QFileSystemWatcher_addPath_string(qtdNativeId, file);
    }

    public final void addPaths(QList!(string) files) {
        qtd_QFileSystemWatcher_addPaths_QList(qtdNativeId, &files);
    }

    public final QList!(string) directories() const {
        auto res = QList!(string).opCall();
        qtd_QFileSystemWatcher_directories_const(qtdNativeId, &res);
        return res;
    }

    public final QList!(string) files() const {
        auto res = QList!(string).opCall();
        qtd_QFileSystemWatcher_files_const(qtdNativeId, &res);
        return res;
    }

    public final void removePath(string file) {
        qtd_QFileSystemWatcher_removePath_string(qtdNativeId, file);
    }

    public final void removePaths(QList!(string) files) {
        qtd_QFileSystemWatcher_removePaths_QList(qtdNativeId, &files);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QFileSystemWatcher_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QFileSystemWatcher);
    }

    static QFileSystemWatcher __getObject(void* nativeId) {
        return static_cast!(QFileSystemWatcher)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QFileSystemWatcher_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QFileSystemWatcher_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QFileSystemWatcher(nativeId, initFlags);
        QFileSystemWatcher.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(string)("directoryChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(string)("fileChanged"), index));

    }

    public alias void __isQtType_QFileSystemWatcher;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QFileSystemWatcher_directoryChanged_string(void* __this_nativeId,
 string path0);
private extern(C) void  qtd_QFileSystemWatcher_fileChanged_string(void* __this_nativeId,
 string path0);

// C wrappers
private extern(C) void* qtd_QFileSystemWatcher_QFileSystemWatcher_QObject(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QFileSystemWatcher_QFileSystemWatcher_QList_QObject(void *d_ptr,
 void* paths0,
 void* parent1);
private extern(C) void  qtd_QFileSystemWatcher_addPath_string(void* __this_nativeId,
 string file0);
private extern(C) void  qtd_QFileSystemWatcher_addPaths_QList(void* __this_nativeId,
 void* files0);
private extern(C) void  qtd_QFileSystemWatcher_directories_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFileSystemWatcher_files_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFileSystemWatcher_removePath_string(void* __this_nativeId,
 string file0);
private extern(C) void  qtd_QFileSystemWatcher_removePaths_QList(void* __this_nativeId,
 void* files0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QFileSystemWatcher_initCallBacks(void* virtuals);

extern(C) void static_init_QFileSystemWatcher() {
    qtd_QFileSystemWatcher_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QFileSystemWatcher_directoryChanged_handle(void* dId, void** args) {
        auto d_object = cast(QFileSystemWatcher) dId;
        auto path0_ptr = args[1];
        string path0 = QStringUtil.toNativeString(path0_ptr);
        //d_object.directoryChanged_emit(path0);
}*/
/*private extern(C) void qtd_QFileSystemWatcher_fileChanged_handle(void* dId, void** args) {
        auto d_object = cast(QFileSystemWatcher) dId;
        auto path0_ptr = args[1];
        string path0 = QStringUtil.toNativeString(path0_ptr);
        //d_object.fileChanged_emit(path0);
}*/

extern(C) QMetaObjectNative* qtd_QFileSystemWatcher_staticMetaObject();

extern(C) void qtd_QFileSystemWatcher_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QFileSystemWatcher_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
