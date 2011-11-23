module qt.gui.QCommonStyle;

public import qt.gui.QCommonStyle_aux;
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
public import qt.gui.QStyle;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QCommonStyle : QStyle
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
        void* ret = qtd_QCommonStyle_QCommonStyle(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected QIcon standardIconImplementation(QStyle.StandardPixmap standardIcon, QStyleOption opt = null, QWidget widget = null) const {
        void* ret = qtd_QCommonStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const(qtdNativeId, standardIcon, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public void drawComplexControl(QStyle.ComplexControl cc, QStyleOptionComplex opt, QPainter p, QWidget w = null) const {
        qtd_QCommonStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const(qtdNativeId, cc, opt is null ? null : (cast(QStyleOptionComplex)opt).qtdNativeId, p is null ? null : p.qtdNativeId, w is null ? null : (cast(QWidget)w).qtdNativeId);
    }

    public void drawControl(QStyle.ControlElement element, QStyleOption opt, QPainter p, QWidget w = null) const {
        qtd_QCommonStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const(qtdNativeId, element, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, p is null ? null : p.qtdNativeId, w is null ? null : (cast(QWidget)w).qtdNativeId);
    }

    public void drawPrimitive(QStyle.PrimitiveElement pe, QStyleOption opt, QPainter p, QWidget w = null) const {
        qtd_QCommonStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const(qtdNativeId, pe, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, p is null ? null : p.qtdNativeId, w is null ? null : (cast(QWidget)w).qtdNativeId);
    }

    public QPixmap generatedIconPixmap(QIcon.Mode iconMode, const(QPixmap) pixmap, QStyleOption opt) const {
        void* ret = qtd_QCommonStyle_generatedIconPixmap_Mode_QPixmap_nativepointerQStyleOption_const(qtdNativeId, iconMode, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public int hitTestComplexControl(QStyle.ComplexControl cc, QStyleOptionComplex opt, const(QPoint) pt, QWidget w = null) const {
        return qtd_QCommonStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const(qtdNativeId, cc, opt is null ? null : (cast(QStyleOptionComplex)opt).qtdNativeId, pt, w is null ? null : (cast(QWidget)w).qtdNativeId);
    }

    public int pixelMetric(QStyle.PixelMetric m, QStyleOption opt = null, QWidget widget = null) const {
        return qtd_QCommonStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const(qtdNativeId, m, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
    }

    public void polish(QApplication app) {
        qtd_QCommonStyle_polish_QApplication(qtdNativeId, app is null ? null : app.qtdNativeId);
    }

    public void polish(QPalette arg__1) {
        qtd_QCommonStyle_polish_nativepointerQPalette(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public void polish(QWidget widget) {
        qtd_QCommonStyle_polish_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public QSize sizeFromContents(QStyle.ContentsType ct, QStyleOption opt, const(QSize) contentsSize, QWidget widget = null) const {
        QSize res;
        qtd_QCommonStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const(qtdNativeId, &res, ct, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, contentsSize, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        return res;
    }

    public int styleHint(QStyle.StyleHint sh, QStyleOption opt = null, QWidget w = null, QStyleHintReturn shret = null) const {
        return qtd_QCommonStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const(qtdNativeId, sh, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, w is null ? null : (cast(QWidget)w).qtdNativeId, shret is null ? null : shret.qtdNativeId);
    }

    public QRect subControlRect(QStyle.ComplexControl cc, QStyleOptionComplex opt, int sc, QWidget w = null) const {
        QRect res;
        qtd_QCommonStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const(qtdNativeId, &res, cc, opt is null ? null : (cast(QStyleOptionComplex)opt).qtdNativeId, sc, w is null ? null : (cast(QWidget)w).qtdNativeId);
        return res;
    }

    public QRect subElementRect(QStyle.SubElement r, QStyleOption opt, QWidget widget = null) const {
        QRect res;
        qtd_QCommonStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const(qtdNativeId, &res, r, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        return res;
    }

    public void unpolish(QApplication application) {
        qtd_QCommonStyle_unpolish_QApplication(qtdNativeId, application is null ? null : application.qtdNativeId);
    }

    public void unpolish(QWidget widget) {
        qtd_QCommonStyle_unpolish_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*,const QWidget*)const", 
            "standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*)const", 
            "standardIconImplementation(QStyle::StandardPixmap)const"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QCommonStyle_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QCommonStyle);
    }

    static QCommonStyle __getObject(void* nativeId) {
        return static_cast!(QCommonStyle)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QCommonStyle_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QCommonStyle_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QCommonStyle(nativeId, initFlags);
        QCommonStyle.__createEntity(nativeId, cast(void*)obj);
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

    public alias void __isQtType_QCommonStyle;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QCommonStyle_QCommonStyle(void *d_ptr);
private extern(C) void*  qtd_QCommonStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 int standardIcon0,
 void* opt1,
 void* widget2);
private extern(C) void  qtd_QCommonStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const(void* __this_nativeId,
 int cc0,
 void* opt1,
 void* p2,
 void* w3);
private extern(C) void  qtd_QCommonStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const(void* __this_nativeId,
 int element0,
 void* opt1,
 void* p2,
 void* w3);
private extern(C) void  qtd_QCommonStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const(void* __this_nativeId,
 int pe0,
 void* opt1,
 void* p2,
 void* w3);
private extern(C) void*  qtd_QCommonStyle_generatedIconPixmap_Mode_QPixmap_nativepointerQStyleOption_const(void* __this_nativeId,
 int iconMode0,
 void* pixmap1,
 void* opt2);
private extern(C) int  qtd_QCommonStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const(void* __this_nativeId,
 int cc0,
 void* opt1,
 QPoint pt2,
 void* w3);
private extern(C) int  qtd_QCommonStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 int m0,
 void* opt1,
 void* widget2);
private extern(C) void  qtd_QCommonStyle_polish_QApplication(void* __this_nativeId,
 void* app0);
private extern(C) void  qtd_QCommonStyle_polish_nativepointerQPalette(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QCommonStyle_polish_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QCommonStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const(void* __this_nativeId,
 QSize * __d_return_value,
 int ct0,
 void* opt1,
 QSize contentsSize2,
 void* widget3);
private extern(C) int  qtd_QCommonStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const(void* __this_nativeId,
 int sh0,
 void* opt1,
 void* w2,
 void* shret3);
private extern(C) void  qtd_QCommonStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const(void* __this_nativeId,
 QRect * __d_return_value,
 int cc0,
 void* opt1,
 int sc2,
 void* w3);
private extern(C) void  qtd_QCommonStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 QRect * __d_return_value,
 int r0,
 void* opt1,
 void* widget2);
private extern(C) void  qtd_QCommonStyle_unpolish_QApplication(void* __this_nativeId,
 void* application0);
private extern(C) void  qtd_QCommonStyle_unpolish_QWidget(void* __this_nativeId,
 void* widget0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QCommonStyle_initCallBacks(void* virtuals);

extern(C) void static_init_QCommonStyle() {
    qtd_QCommonStyle_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QCommonStyle_staticMetaObject();

extern(C) void qtd_QCommonStyle_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QCommonStyle_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
