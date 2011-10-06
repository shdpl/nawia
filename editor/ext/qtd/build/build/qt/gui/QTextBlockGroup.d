module qt.gui.QTextBlockGroup;

public import qt.gui.QTextBlockGroup_aux;
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
public import qt.gui.QTextDocument;
public import qt.gui.QTextBlock;
public import qt.core.QList;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.gui.QTextObject;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextBlockGroup : QTextObject
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

    protected this(QTextDocument doc) {
        void* ret = qtd_QTextBlockGroup_QTextBlockGroup_QTextDocument(cast(void*) this, doc is null ? null : doc.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected final QList!(QTextBlock) blockList() const {
        auto res = QList!(QTextBlock).opCall();
        qtd_QTextBlockGroup_blockList_const(qtdNativeId, &res);
        return res;
    }

    protected void blockFormatChanged(const(QTextBlock) block) {
        qtd_QTextBlockGroup_blockFormatChanged_QTextBlock(qtdNativeId, block is null ? null : (cast(QTextBlock)block).qtdNativeId);
    }

    protected void blockInserted(const(QTextBlock) block) {
        qtd_QTextBlockGroup_blockInserted_QTextBlock(qtdNativeId, block is null ? null : (cast(QTextBlock)block).qtdNativeId);
    }

    protected void blockRemoved(const(QTextBlock) block) {
        qtd_QTextBlockGroup_blockRemoved_QTextBlock(qtdNativeId, block is null ? null : (cast(QTextBlock)block).qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTextBlockGroup_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTextBlockGroup);
    }

    static QTextBlockGroup __getObject(void* nativeId) {
        return static_cast!(QTextBlockGroup)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTextBlockGroup_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTextBlockGroup_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTextBlockGroup(nativeId, initFlags);
        QTextBlockGroup.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QTextBlockGroup;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextBlockGroup_QTextBlockGroup_QTextDocument(void *d_ptr,
 void* doc0);
private extern(C) void  qtd_QTextBlockGroup_blockList_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QTextBlockGroup_blockFormatChanged_QTextBlock(void* __this_nativeId,
 void* block0);
private extern(C) void  qtd_QTextBlockGroup_blockInserted_QTextBlock(void* __this_nativeId,
 void* block0);
private extern(C) void  qtd_QTextBlockGroup_blockRemoved_QTextBlock(void* __this_nativeId,
 void* block0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, void* block0) qtd_QTextBlockGroup_blockFormatChanged_QTextBlock_dispatch; }
extern(C) void qtd_export_QTextBlockGroup_blockFormatChanged_QTextBlock_dispatch(void *dId, void* block0){
    auto d_object = cast(QTextBlockGroup) dId;
    scope block0_d_ref = new QTextBlock(block0, QtdObjectInitFlags.onStack);
    d_object.blockFormatChanged(block0_d_ref);
}

extern(C){ extern void function(void *dId, void* block0) qtd_QTextBlockGroup_blockInserted_QTextBlock_dispatch; }
extern(C) void qtd_export_QTextBlockGroup_blockInserted_QTextBlock_dispatch(void *dId, void* block0){
    auto d_object = cast(QTextBlockGroup) dId;
    scope block0_d_ref = new QTextBlock(block0, QtdObjectInitFlags.onStack);
    d_object.blockInserted(block0_d_ref);
}

extern(C){ extern void function(void *dId, void* block0) qtd_QTextBlockGroup_blockRemoved_QTextBlock_dispatch; }
extern(C) void qtd_export_QTextBlockGroup_blockRemoved_QTextBlock_dispatch(void *dId, void* block0){
    auto d_object = cast(QTextBlockGroup) dId;
    scope block0_d_ref = new QTextBlock(block0, QtdObjectInitFlags.onStack);
    d_object.blockRemoved(block0_d_ref);
}

private extern (C) void qtd_QTextBlockGroup_initCallBacks(void* virtuals);

extern(C) void static_init_QTextBlockGroup() {
    void*[3] virt_arr;
    virt_arr[0] = &qtd_export_QTextBlockGroup_blockFormatChanged_QTextBlock_dispatch;
    virt_arr[1] = &qtd_export_QTextBlockGroup_blockInserted_QTextBlock_dispatch;
    virt_arr[2] = &qtd_export_QTextBlockGroup_blockRemoved_QTextBlock_dispatch;
    qtd_QTextBlockGroup_initCallBacks(virt_arr.ptr);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QTextBlockGroup_staticMetaObject();

extern(C) void qtd_QTextBlockGroup_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTextBlockGroup_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
