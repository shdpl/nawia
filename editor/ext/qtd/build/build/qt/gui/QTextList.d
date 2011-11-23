module qt.gui.QTextList;

public import qt.gui.QTextList_aux;
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
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.gui.QTextListFormat;
public import qt.gui.QTextBlockGroup;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextList : QTextBlockGroup
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

    public this(QTextDocument doc) {
        void* ret = qtd_QTextList_QTextList_QTextDocument(cast(void*) this, doc is null ? null : doc.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void add(const(QTextBlock) block) {
        qtd_QTextList_add_QTextBlock(qtdNativeId, block is null ? null : (cast(QTextBlock)block).qtdNativeId);
    }

    public final int count() const {
        return qtd_QTextList_count_const(qtdNativeId);
    }

    public final QTextListFormat textListFormat() const {
        void* ret = qtd_QTextList_textListFormat_const(qtdNativeId);
        QTextListFormat __d_return_value = new QTextListFormat(ret);
        return __d_return_value;
    }

    public final QTextBlock item(int i) const {
        void* ret = qtd_QTextList_item_int_const(qtdNativeId, i);
        QTextBlock __d_return_value = new QTextBlock(ret);
        return __d_return_value;
    }

    public final int itemNumber(const(QTextBlock) arg__1) const {
        return qtd_QTextList_itemNumber_QTextBlock_const(qtdNativeId, arg__1 is null ? null : (cast(QTextBlock)arg__1).qtdNativeId);
    }

    public final string itemText(const(QTextBlock) arg__1) const {
        string res;
        qtd_QTextList_itemText_QTextBlock_const(qtdNativeId, &res, arg__1 is null ? null : (cast(QTextBlock)arg__1).qtdNativeId);
        return res;
    }

    public final void remove(const(QTextBlock) arg__1) {
        qtd_QTextList_remove_QTextBlock(qtdNativeId, arg__1 is null ? null : (cast(QTextBlock)arg__1).qtdNativeId);
    }

    public final void removeItem(int i) {
        qtd_QTextList_removeItem_int(qtdNativeId, i);
    }

    public final void setFormat(const(QTextListFormat) format) {
        qtd_QTextList_setFormat_QTextListFormat(qtdNativeId, format is null ? null : (cast(QTextListFormat)format).qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTextList_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTextList);
    }

    static QTextList __getObject(void* nativeId) {
        return static_cast!(QTextList)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTextList_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTextList_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTextList(nativeId, initFlags);
        QTextList.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QTextList;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextList_QTextList_QTextDocument(void *d_ptr,
 void* doc0);
private extern(C) void  qtd_QTextList_add_QTextBlock(void* __this_nativeId,
 void* block0);
private extern(C) int  qtd_QTextList_count_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextList_textListFormat_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextList_item_int_const(void* __this_nativeId,
 int i0);
private extern(C) int  qtd_QTextList_itemNumber_QTextBlock_const(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTextList_itemText_QTextBlock_const(void* __this_nativeId,
 void* __d_return_value,
 void* arg__1);
private extern(C) void  qtd_QTextList_remove_QTextBlock(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTextList_removeItem_int(void* __this_nativeId,
 int i0);
private extern(C) void  qtd_QTextList_setFormat_QTextListFormat(void* __this_nativeId,
 void* format0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTextList_initCallBacks(void* virtuals);

extern(C) void static_init_QTextList() {
    qtd_QTextList_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QTextList_staticMetaObject();

extern(C) void qtd_QTextList_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTextList_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
