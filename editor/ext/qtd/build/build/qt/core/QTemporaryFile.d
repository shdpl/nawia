module qt.core.QTemporaryFile;

public import qt.core.QTemporaryFile_aux;
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
public import qt.core.QFile;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QAbstractFileEngine;
public import qt.core.QChildEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTemporaryFile : QFile
{

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
        void* ret = qtd_QTemporaryFile_QTemporaryFile(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QObject parent_) {
        void* ret = qtd_QTemporaryFile_QTemporaryFile_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string templateName) {
        void* ret = qtd_QTemporaryFile_QTemporaryFile_string(cast(void*) this, templateName);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string templateName, QObject parent_) {
        void* ret = qtd_QTemporaryFile_QTemporaryFile_string_QObject(cast(void*) this, templateName, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool autoRemove() const {
        return qtd_QTemporaryFile_autoRemove_const(qtdNativeId);
    }

    public final string uniqueFilename() const {
        string res;
        qtd_QTemporaryFile_uniqueFilename_const(qtdNativeId, &res);
        return res;
    }

    public final string fileTemplate() const {
        string res;
        qtd_QTemporaryFile_fileTemplate_const(qtdNativeId, &res);
        return res;
    }

    public final bool open() {
        return qtd_QTemporaryFile_open(qtdNativeId);
    }

    public final void setAutoRemove(bool b) {
        qtd_QTemporaryFile_setAutoRemove_bool(qtdNativeId, b);
    }

    public final void setFileTemplate(string name) {
        qtd_QTemporaryFile_setFileTemplate_string(qtdNativeId, name);
    }

    public QAbstractFileEngine fileEngine() const {
        void* ret = qtd_QTemporaryFile_fileEngine_const(qtdNativeId);
        QAbstractFileEngine __d_return_value = qtd_QAbstractFileEngine_from_ptr(ret);

        return __d_return_value;
    }

    public bool open(int flags) {
        return qtd_QTemporaryFile_open_OpenMode(qtdNativeId, flags);
    }

    public static QTemporaryFile createLocalFile(QFile file) {
        void *ret = qtd_QTemporaryFile_createLocalFile_QFile(file is null ? null : file.qtdNativeId);
        QTemporaryFile __d_return_value = QTemporaryFile.__getObject(ret);
        return __d_return_value;
    }

    public static QTemporaryFile createLocalFile(string fileName) {
        void *ret = qtd_QTemporaryFile_createLocalFile_string(fileName);
        QTemporaryFile __d_return_value = QTemporaryFile.__getObject(ret);
        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTemporaryFile_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTemporaryFile);
    }

    static QTemporaryFile __getObject(void* nativeId) {
        return static_cast!(QTemporaryFile)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTemporaryFile_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTemporaryFile_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTemporaryFile(nativeId, initFlags);
        QTemporaryFile.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QTemporaryFile;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTemporaryFile_QTemporaryFile(void *d_ptr);
private extern(C) void* qtd_QTemporaryFile_QTemporaryFile_QObject(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QTemporaryFile_QTemporaryFile_string(void *d_ptr,
 string templateName0);
private extern(C) void* qtd_QTemporaryFile_QTemporaryFile_string_QObject(void *d_ptr,
 string templateName0,
 void* parent1);
private extern(C) bool  qtd_QTemporaryFile_autoRemove_const(void* __this_nativeId);
private extern(C) void  qtd_QTemporaryFile_uniqueFilename_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QTemporaryFile_fileTemplate_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QTemporaryFile_open(void* __this_nativeId);
private extern(C) void  qtd_QTemporaryFile_setAutoRemove_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QTemporaryFile_setFileTemplate_string(void* __this_nativeId,
 string name0);
private extern(C) void*  qtd_QTemporaryFile_fileEngine_const(void* __this_nativeId);
private extern(C) bool  qtd_QTemporaryFile_open_OpenMode(void* __this_nativeId,
 int flags0);
private extern(C) void*  qtd_QTemporaryFile_createLocalFile_QFile(void* file0);
private extern(C) void*  qtd_QTemporaryFile_createLocalFile_string(string fileName0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTemporaryFile_initCallBacks(void* virtuals);

extern(C) void static_init_QTemporaryFile() {
    qtd_QTemporaryFile_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QTemporaryFile_aboutToClose_handle(void* dId, void** args) {
        auto d_object = cast(QTemporaryFile) dId;
        //d_object.aboutToClose_emit();
}*/
/*private extern(C) void qtd_QTemporaryFile_bytesWritten_handle(void* dId, void** args) {
        auto d_object = cast(QTemporaryFile) dId;
        auto bytes0 = *(cast(long*)args[1]);
        //d_object.bytesWritten_emit(bytes0);
}*/
/*private extern(C) void qtd_QTemporaryFile_readChannelFinished_handle(void* dId, void** args) {
        auto d_object = cast(QTemporaryFile) dId;
        //d_object.readChannelFinished_emit();
}*/
/*private extern(C) void qtd_QTemporaryFile_readyRead_handle(void* dId, void** args) {
        auto d_object = cast(QTemporaryFile) dId;
        //d_object.readyRead_emit();
}*/

extern(C) QMetaObjectNative* qtd_QTemporaryFile_staticMetaObject();

extern(C) void qtd_QTemporaryFile_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTemporaryFile_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
