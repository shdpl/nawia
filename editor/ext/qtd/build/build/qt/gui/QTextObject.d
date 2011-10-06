module qt.gui.QTextObject;

public import qt.gui.QTextObject_aux;
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
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.gui.QTextFormat;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextObject : QObject
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
        void* ret = qtd_QTextObject_QTextObject_QTextDocument(cast(void*) this, doc is null ? null : doc.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QTextDocument document() const {
        void *ret = qtd_QTextObject_document_const(qtdNativeId);
        QTextDocument __d_return_value = QTextDocument.__getObject(ret);
        return __d_return_value;
    }

    public final QTextFormat format() const {
        void* ret = qtd_QTextObject_format_const(qtdNativeId);
        QTextFormat __d_return_value = new QTextFormat(ret);
        return __d_return_value;
    }

    public final int formatIndex() const {
        return qtd_QTextObject_formatIndex_const(qtdNativeId);
    }

    public final int objectIndex() const {
        return qtd_QTextObject_objectIndex_const(qtdNativeId);
    }

    protected final void setFormat(const(QTextFormat) format) {
        qtd_QTextObject_setFormat_QTextFormat(qtdNativeId, format is null ? null : (cast(QTextFormat)format).qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTextObject_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTextObject);
    }

    static QTextObject __getObject(void* nativeId) {
        return static_cast!(QTextObject)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTextObject_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTextObject_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTextObject(nativeId, initFlags);
        QTextObject.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QTextObject;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextObject_QTextObject_QTextDocument(void *d_ptr,
 void* doc0);
private extern(C) void*  qtd_QTextObject_document_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextObject_format_const(void* __this_nativeId);
private extern(C) int  qtd_QTextObject_formatIndex_const(void* __this_nativeId);
private extern(C) int  qtd_QTextObject_objectIndex_const(void* __this_nativeId);
private extern(C) void  qtd_QTextObject_setFormat_QTextFormat(void* __this_nativeId,
 void* format0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTextObject_initCallBacks(void* virtuals);

extern(C) void static_init_QTextObject() {
    qtd_QTextObject_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QTextObject_staticMetaObject();

extern(C) void qtd_QTextObject_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTextObject_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
