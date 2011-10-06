module qt.gui.QHBoxLayout;

public import qt.gui.QHBoxLayout_aux;
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
private import qt.gui.ArrayOps2;
// automatic imports-------------
public import qt.gui.QBoxLayout;
public import qt.gui.QLayoutItem;
public import qt.core.QObject;
public import qt.gui.QLayout;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QRect;
public import qt.gui.QSpacerItem;
public import qt.gui.QWidget;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QHBoxLayout : QBoxLayout
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
        void* ret = qtd_QHBoxLayout_QHBoxLayout(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QWidget parent_) {
        void* ret = qtd_QHBoxLayout_QHBoxLayout_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QHBoxLayout_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QHBoxLayout);
    }

    static QHBoxLayout __getObject(void* nativeId) {
        return static_cast!(QHBoxLayout)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QHBoxLayout_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QHBoxLayout_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QHBoxLayout(nativeId, initFlags);
        QHBoxLayout.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QHBoxLayout;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QHBoxLayout_QHBoxLayout(void *d_ptr);
private extern(C) void* qtd_QHBoxLayout_QHBoxLayout_QWidget(void *d_ptr,
 void* parent0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QHBoxLayout_initCallBacks(void* virtuals);

extern(C) void static_init_QHBoxLayout() {
    qtd_QHBoxLayout_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QHBoxLayout_staticMetaObject();

extern(C) void qtd_QHBoxLayout_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QHBoxLayout_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
