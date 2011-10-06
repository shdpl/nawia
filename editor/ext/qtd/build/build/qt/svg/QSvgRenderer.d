module qt.svg.QSvgRenderer;

public import qt.svg.QSvgRenderer_aux;
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
private import qt.svg.ArrayOps2;
// automatic imports-------------
public import qt.xml.QXmlStreamReader;
public import qt.gui.QPainter;
public import qt.core.QRectF;
public import qt.core.QObject;
public import qt.gui.QMatrix;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QRect;
public import qt.core.QByteArray;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSvgRenderer : QObject
{

    private static const string[] __signalSignatures = [
            "repaintNeeded()"    ];

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

    protected final void repaintNeeded() {
        qtd_QSvgRenderer_repaintNeeded(qtdNativeId);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QSvgRenderer_QSvgRenderer_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QXmlStreamReader contents, QObject parent_ = null) {
        void* ret = qtd_QSvgRenderer_QSvgRenderer_QXmlStreamReader_QObject(cast(void*) this, contents is null ? null : contents.qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QByteArray) contents, QObject parent_ = null) {
        void* ret = qtd_QSvgRenderer_QSvgRenderer_QByteArray_QObject(cast(void*) this, contents is null ? null : (cast(QByteArray)contents).qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string filename, QObject parent_ = null) {
        void* ret = qtd_QSvgRenderer_QSvgRenderer_string_QObject(cast(void*) this, filename, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool animated() const {
        return qtd_QSvgRenderer_animated_const(qtdNativeId);
    }

    public final int animationDuration() const {
        return qtd_QSvgRenderer_animationDuration_const(qtdNativeId);
    }

    public final QRectF boundsOnElement(string id) const {
        QRectF res;
        qtd_QSvgRenderer_boundsOnElement_string_const(qtdNativeId, &res, id);
        return res;
    }

    public final int currentFrame() const {
        return qtd_QSvgRenderer_currentFrame_const(qtdNativeId);
    }

    public final QSize defaultSize() const {
        QSize res;
        qtd_QSvgRenderer_defaultSize_const(qtdNativeId, &res);
        return res;
    }

    public final bool elementExists(string id) const {
        return qtd_QSvgRenderer_elementExists_string_const(qtdNativeId, id);
    }

    public final int framesPerSecond() const {
        return qtd_QSvgRenderer_framesPerSecond_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QSvgRenderer_isValid_const(qtdNativeId);
    }

    public final bool load(QXmlStreamReader contents) {
        return qtd_QSvgRenderer_load_QXmlStreamReader(qtdNativeId, contents is null ? null : contents.qtdNativeId);
    }

    public final bool load(const(QByteArray) contents) {
        return qtd_QSvgRenderer_load_QByteArray(qtdNativeId, contents is null ? null : (cast(QByteArray)contents).qtdNativeId);
    }

    public final bool load(string filename) {
        return qtd_QSvgRenderer_load_string(qtdNativeId, filename);
    }

    public final QMatrix matrixForElement(string id) const {
        void* ret = qtd_QSvgRenderer_matrixForElement_string_const(qtdNativeId, id);
        QMatrix __d_return_value = new QMatrix(ret);
        return __d_return_value;
    }

    public final void render(QPainter p) {
        qtd_QSvgRenderer_render_QPainter(qtdNativeId, p is null ? null : p.qtdNativeId);
    }

    public final void render(QPainter p, const(QRectF) bounds) {
        qtd_QSvgRenderer_render_QPainter_QRectF(qtdNativeId, p is null ? null : p.qtdNativeId, bounds);
    }

    public final void render(QPainter p, string elementId, const(QRectF) bounds = QRectF()) {
        qtd_QSvgRenderer_render_QPainter_string_QRectF(qtdNativeId, p is null ? null : p.qtdNativeId, elementId, bounds);
    }

    public final void setCurrentFrame(int arg__1) {
        qtd_QSvgRenderer_setCurrentFrame_int(qtdNativeId, arg__1);
    }

    public final void setFramesPerSecond(int num) {
        qtd_QSvgRenderer_setFramesPerSecond_int(qtdNativeId, num);
    }

    public final void setViewBox(const(QRect) viewbox) {
        qtd_QSvgRenderer_setViewBox_QRect(qtdNativeId, viewbox);
    }

    public final void setViewBox(const(QRectF) viewbox) {
        qtd_QSvgRenderer_setViewBox_QRectF(qtdNativeId, viewbox);
    }

    public final QRect viewBox() const {
        QRect res;
        qtd_QSvgRenderer_viewBox_const(qtdNativeId, &res);
        return res;
    }

    public final QRectF viewBoxF() const {
        QRectF res;
        qtd_QSvgRenderer_viewBoxF_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "load(QXmlStreamReader*)", 
            "load(QByteArray)", 
            "load(QString)", 
            "render(QPainter*)", 
            "render(QPainter*,QRectF)", 
            "render(QPainter*,QString,QRectF)", 
            "render(QPainter*,QString)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QSvgRenderer_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QSvgRenderer);
    }

    static QSvgRenderer __getObject(void* nativeId) {
        return static_cast!(QSvgRenderer)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QSvgRenderer_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QSvgRenderer_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QSvgRenderer(nativeId, initFlags);
        QSvgRenderer.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("repaintNeeded"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(QXmlStreamReader)("load"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(const(QByteArray))("load"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(string)("load"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(QPainter)("render"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(QPainter,const(QRectF))("render"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!(QPainter,string,const(QRectF))("render"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[6]);
        mo.addMethod(new QMetaSlot(signature!(QPainter,string)("render"), index));

    }

    public alias void __isQtType_QSvgRenderer;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QSvgRenderer_repaintNeeded(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QSvgRenderer_QSvgRenderer_QObject(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QSvgRenderer_QSvgRenderer_QXmlStreamReader_QObject(void *d_ptr,
 void* contents0,
 void* parent1);
private extern(C) void* qtd_QSvgRenderer_QSvgRenderer_QByteArray_QObject(void *d_ptr,
 void* contents0,
 void* parent1);
private extern(C) void* qtd_QSvgRenderer_QSvgRenderer_string_QObject(void *d_ptr,
 string filename0,
 void* parent1);
private extern(C) bool  qtd_QSvgRenderer_animated_const(void* __this_nativeId);
private extern(C) int  qtd_QSvgRenderer_animationDuration_const(void* __this_nativeId);
private extern(C) void  qtd_QSvgRenderer_boundsOnElement_string_const(void* __this_nativeId,
 QRectF * __d_return_value,
 string id0);
private extern(C) int  qtd_QSvgRenderer_currentFrame_const(void* __this_nativeId);
private extern(C) void  qtd_QSvgRenderer_defaultSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) bool  qtd_QSvgRenderer_elementExists_string_const(void* __this_nativeId,
 string id0);
private extern(C) int  qtd_QSvgRenderer_framesPerSecond_const(void* __this_nativeId);
private extern(C) bool  qtd_QSvgRenderer_isValid_const(void* __this_nativeId);
private extern(C) bool  qtd_QSvgRenderer_load_QXmlStreamReader(void* __this_nativeId,
 void* contents0);
private extern(C) bool  qtd_QSvgRenderer_load_QByteArray(void* __this_nativeId,
 void* contents0);
private extern(C) bool  qtd_QSvgRenderer_load_string(void* __this_nativeId,
 string filename0);
private extern(C) void*  qtd_QSvgRenderer_matrixForElement_string_const(void* __this_nativeId,
 string id0);
private extern(C) void  qtd_QSvgRenderer_render_QPainter(void* __this_nativeId,
 void* p0);
private extern(C) void  qtd_QSvgRenderer_render_QPainter_QRectF(void* __this_nativeId,
 void* p0,
 QRectF bounds1);
private extern(C) void  qtd_QSvgRenderer_render_QPainter_string_QRectF(void* __this_nativeId,
 void* p0,
 string elementId1,
 QRectF bounds2);
private extern(C) void  qtd_QSvgRenderer_setCurrentFrame_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QSvgRenderer_setFramesPerSecond_int(void* __this_nativeId,
 int num0);
private extern(C) void  qtd_QSvgRenderer_setViewBox_QRect(void* __this_nativeId,
 QRect viewbox0);
private extern(C) void  qtd_QSvgRenderer_setViewBox_QRectF(void* __this_nativeId,
 QRectF viewbox0);
private extern(C) void  qtd_QSvgRenderer_viewBox_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void  qtd_QSvgRenderer_viewBoxF_const(void* __this_nativeId,
 QRectF * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QSvgRenderer_initCallBacks(void* virtuals);

extern(C) void static_init_QSvgRenderer() {
    qtd_QSvgRenderer_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QSvgRenderer_repaintNeeded_handle(void* dId, void** args) {
        auto d_object = cast(QSvgRenderer) dId;
        //d_object.repaintNeeded_emit();
}*/

extern(C) QMetaObjectNative* qtd_QSvgRenderer_staticMetaObject();

extern(C) void qtd_QSvgRenderer_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QSvgRenderer_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
