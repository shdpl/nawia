module qt.gui.QTextFrame;

public import qt.gui.QTextFrame_aux;
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
public import qt.core.QList;
public import qt.core.QObject;
public import qt.gui.QTextCursor;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QTextFrameFormat;
public import qt.core.QChildEvent;
public import qt.gui.QTextObject;
public import qt.gui.QTextFrame_iterator;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextFrame : QTextObject
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
        void* ret = qtd_QTextFrame_QTextFrame_QTextDocument(cast(void*) this, doc is null ? null : doc.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QTextFrame_iterator begin() const {
        void* ret = qtd_QTextFrame_begin_const(qtdNativeId);
        QTextFrame_iterator __d_return_value = new QTextFrame_iterator(ret);
        return __d_return_value;
    }

    public final QList!(QTextFrame) childFrames() const {
        auto res = QList!(QTextFrame).opCall();
        qtd_QTextFrame_childFrames_const(qtdNativeId, &res);
        return res;
    }

    public final QTextFrame_iterator end() const {
        void* ret = qtd_QTextFrame_end_const(qtdNativeId);
        QTextFrame_iterator __d_return_value = new QTextFrame_iterator(ret);
        return __d_return_value;
    }

    public final QTextCursor firstCursorPosition() const {
        void* ret = qtd_QTextFrame_firstCursorPosition_const(qtdNativeId);
        QTextCursor __d_return_value = new QTextCursor(ret);
        return __d_return_value;
    }

    public final int firstPosition() const {
        return qtd_QTextFrame_firstPosition_const(qtdNativeId);
    }

    public final QTextFrameFormat frameFormat() const {
        void* ret = qtd_QTextFrame_frameFormat_const(qtdNativeId);
        QTextFrameFormat __d_return_value = new QTextFrameFormat(ret);
        return __d_return_value;
    }

    public final QTextCursor lastCursorPosition() const {
        void* ret = qtd_QTextFrame_lastCursorPosition_const(qtdNativeId);
        QTextCursor __d_return_value = new QTextCursor(ret);
        return __d_return_value;
    }

    public final int lastPosition() const {
        return qtd_QTextFrame_lastPosition_const(qtdNativeId);
    }

    public final QTextFrame parentFrame() const {
        void *ret = qtd_QTextFrame_parentFrame_const(qtdNativeId);
        QTextFrame __d_return_value = QTextFrame.__getObject(ret);
        return __d_return_value;
    }

    public final void setFrameFormat(const(QTextFrameFormat) format) {
        qtd_QTextFrame_setFrameFormat_QTextFrameFormat(qtdNativeId, format is null ? null : (cast(QTextFrameFormat)format).qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTextFrame_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTextFrame);
    }

    static QTextFrame __getObject(void* nativeId) {
        return static_cast!(QTextFrame)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTextFrame_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTextFrame_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTextFrame(nativeId, initFlags);
        QTextFrame.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QTextFrame;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextFrame_QTextFrame_QTextDocument(void *d_ptr,
 void* doc0);
private extern(C) void*  qtd_QTextFrame_begin_const(void* __this_nativeId);
private extern(C) void  qtd_QTextFrame_childFrames_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QTextFrame_end_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextFrame_firstCursorPosition_const(void* __this_nativeId);
private extern(C) int  qtd_QTextFrame_firstPosition_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextFrame_frameFormat_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextFrame_lastCursorPosition_const(void* __this_nativeId);
private extern(C) int  qtd_QTextFrame_lastPosition_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextFrame_parentFrame_const(void* __this_nativeId);
private extern(C) void  qtd_QTextFrame_setFrameFormat_QTextFrameFormat(void* __this_nativeId,
 void* format0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTextFrame_initCallBacks(void* virtuals);

extern(C) void static_init_QTextFrame() {
    qtd_QTextFrame_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QTextFrame_staticMetaObject();

extern(C) void qtd_QTextFrame_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTextFrame_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
