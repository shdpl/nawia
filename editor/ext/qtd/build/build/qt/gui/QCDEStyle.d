module qt.gui.QCDEStyle;

public import qt.gui.QCDEStyle_aux;
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
public import qt.core.Qt;
public import qt.gui.QPalette;
public import qt.gui.QIcon;
public import qt.gui.QStyle;
public import qt.gui.QSizePolicy;
public import qt.gui.QStyleOption;
public import qt.gui.QFontMetrics;
public import qt.gui.QApplication;
public import qt.gui.QPainter;
public import qt.core.QRect;
public import qt.gui.QMotifStyle;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.core.QSize;
public import qt.gui.QStyleOptionComplex;
public import qt.core.QObject;
public import qt.gui.QStyleHintReturn;
public import qt.core.QTimerEvent;
public import qt.gui.QPalette;
public import qt.gui.QPixmap;
public import qt.gui.QIcon;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QCDEStyle : QMotifStyle
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

    public this(bool useHighlightCols = false) {
        void* ret = qtd_QCDEStyle_QCDEStyle_bool(cast(void*) this, useHighlightCols);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected QIcon standardIconImplementation(QStyle.StandardPixmap standardIcon, QStyleOption opt = null, QWidget widget = null) const {
        void* ret = qtd_QCDEStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const(qtdNativeId, standardIcon, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public void drawControl(QStyle.ControlElement element, QStyleOption opt, QPainter p, QWidget w = null) const {
        qtd_QCDEStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const(qtdNativeId, element, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, p is null ? null : p.qtdNativeId, w is null ? null : (cast(QWidget)w).qtdNativeId);
    }

    public void drawPrimitive(QStyle.PrimitiveElement pe, QStyleOption opt, QPainter p, QWidget w = null) const {
        qtd_QCDEStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const(qtdNativeId, pe, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, p is null ? null : p.qtdNativeId, w is null ? null : (cast(QWidget)w).qtdNativeId);
    }

    public int pixelMetric(QStyle.PixelMetric metric, QStyleOption option = null, QWidget widget = null) const {
        return qtd_QCDEStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const(qtdNativeId, metric, option is null ? null : (cast(QStyleOption)option).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
    }

    public QPalette standardPalette() const {
        void* ret = qtd_QCDEStyle_standardPalette_const(qtdNativeId);
        QPalette __d_return_value = new QPalette(ret);
        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*,const QWidget*)const", 
            "standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*)const", 
            "standardIconImplementation(QStyle::StandardPixmap)const"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QCDEStyle_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QCDEStyle);
    }

    static QCDEStyle __getObject(void* nativeId) {
        return static_cast!(QCDEStyle)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QCDEStyle_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QCDEStyle_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QCDEStyle(nativeId, initFlags);
        QCDEStyle.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(QStyle.StandardPixmap,QStyleOption,QWidget)("standardIconImplementation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(QStyle.StandardPixmap,QStyleOption)("standardIconImplementation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(QStyle.StandardPixmap)("standardIconImplementation"), index));

    }

    public alias void __isQtType_QCDEStyle;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QCDEStyle_QCDEStyle_bool(void *d_ptr,
 bool useHighlightCols0);
private extern(C) void*  qtd_QCDEStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 int standardIcon0,
 void* opt1,
 void* widget2);
private extern(C) void  qtd_QCDEStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const(void* __this_nativeId,
 int element0,
 void* opt1,
 void* p2,
 void* w3);
private extern(C) void  qtd_QCDEStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const(void* __this_nativeId,
 int pe0,
 void* opt1,
 void* p2,
 void* w3);
private extern(C) int  qtd_QCDEStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 int metric0,
 void* option1,
 void* widget2);
private extern(C) void*  qtd_QCDEStyle_standardPalette_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QCDEStyle_initCallBacks(void* virtuals);

extern(C) void static_init_QCDEStyle() {
    qtd_QCDEStyle_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QCDEStyle_staticMetaObject();

extern(C) void qtd_QCDEStyle_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QCDEStyle_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
