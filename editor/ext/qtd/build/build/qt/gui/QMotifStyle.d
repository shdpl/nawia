module qt.gui.QMotifStyle;

public import qt.gui.QMotifStyle_aux;
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
public import qt.gui.QCommonStyle;
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

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QMotifStyle : QCommonStyle
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
        void* ret = qtd_QMotifStyle_QMotifStyle_bool(cast(void*) this, useHighlightCols);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void setUseHighlightColors(bool arg__1) {
        qtd_QMotifStyle_setUseHighlightColors_bool(qtdNativeId, arg__1);
    }

    protected QIcon standardIconImplementation(QStyle.StandardPixmap standardIcon, QStyleOption opt = null, QWidget widget = null) const {
        void* ret = qtd_QMotifStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const(qtdNativeId, standardIcon, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final bool useHighlightColors() const {
        return qtd_QMotifStyle_useHighlightColors_const(qtdNativeId);
    }

    public void drawComplexControl(QStyle.ComplexControl cc, QStyleOptionComplex opt, QPainter p, QWidget w = null) const {
        qtd_QMotifStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const(qtdNativeId, cc, opt is null ? null : (cast(QStyleOptionComplex)opt).qtdNativeId, p is null ? null : p.qtdNativeId, w is null ? null : (cast(QWidget)w).qtdNativeId);
    }

    public void drawControl(QStyle.ControlElement element, QStyleOption opt, QPainter p, QWidget w = null) const {
        qtd_QMotifStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const(qtdNativeId, element, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, p is null ? null : p.qtdNativeId, w is null ? null : (cast(QWidget)w).qtdNativeId);
    }

    public void drawPrimitive(QStyle.PrimitiveElement pe, QStyleOption opt, QPainter p, QWidget w = null) const {
        qtd_QMotifStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const(qtdNativeId, pe, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, p is null ? null : p.qtdNativeId, w is null ? null : (cast(QWidget)w).qtdNativeId);
    }

    public bool event(QEvent arg__1) {
        return qtd_QMotifStyle_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool eventFilter(QObject o, QEvent e) {
        return qtd_QMotifStyle_eventFilter_QObject_QEvent(qtdNativeId, o is null ? null : o.qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public int pixelMetric(QStyle.PixelMetric metric, QStyleOption option = null, QWidget widget = null) const {
        return qtd_QMotifStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const(qtdNativeId, metric, option is null ? null : (cast(QStyleOption)option).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
    }

    public void polish(QApplication arg__1) {
        qtd_QMotifStyle_polish_QApplication(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public void polish(QPalette arg__1) {
        qtd_QMotifStyle_polish_nativepointerQPalette(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public void polish(QWidget arg__1) {
        qtd_QMotifStyle_polish_QWidget(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize sizeFromContents(QStyle.ContentsType ct, QStyleOption opt, const(QSize) contentsSize, QWidget widget = null) const {
        QSize res;
        qtd_QMotifStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const(qtdNativeId, &res, ct, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, contentsSize, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        return res;
    }

    public QPalette standardPalette() const {
        void* ret = qtd_QMotifStyle_standardPalette_const(qtdNativeId);
        QPalette __d_return_value = new QPalette(ret);
        return __d_return_value;
    }

    public int styleHint(QStyle.StyleHint hint, QStyleOption opt = null, QWidget widget = null, QStyleHintReturn returnData = null) const {
        return qtd_QMotifStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const(qtdNativeId, hint, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId, returnData is null ? null : returnData.qtdNativeId);
    }

    public QRect subControlRect(QStyle.ComplexControl cc, QStyleOptionComplex opt, int sc, QWidget widget = null) const {
        QRect res;
        qtd_QMotifStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const(qtdNativeId, &res, cc, opt is null ? null : (cast(QStyleOptionComplex)opt).qtdNativeId, sc, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        return res;
    }

    public QRect subElementRect(QStyle.SubElement r, QStyleOption opt, QWidget widget = null) const {
        QRect res;
        qtd_QMotifStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const(qtdNativeId, &res, r, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        return res;
    }

    protected void timerEvent(QTimerEvent event) {
        qtd_QMotifStyle_timerEvent_QTimerEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void unpolish(QApplication arg__1) {
        qtd_QMotifStyle_unpolish_QApplication(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public void unpolish(QWidget arg__1) {
        qtd_QMotifStyle_unpolish_QWidget(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*,const QWidget*)const", 
            "standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*)const", 
            "standardIconImplementation(QStyle::StandardPixmap)const"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QMotifStyle_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QMotifStyle);
    }

    static QMotifStyle __getObject(void* nativeId) {
        return static_cast!(QMotifStyle)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QMotifStyle_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QMotifStyle_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QMotifStyle(nativeId, initFlags);
        QMotifStyle.__createEntity(nativeId, cast(void*)obj);
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

    public alias void __isQtType_QMotifStyle;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QMotifStyle_QMotifStyle_bool(void *d_ptr,
 bool useHighlightCols0);
private extern(C) void  qtd_QMotifStyle_setUseHighlightColors_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void*  qtd_QMotifStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 int standardIcon0,
 void* opt1,
 void* widget2);
private extern(C) bool  qtd_QMotifStyle_useHighlightColors_const(void* __this_nativeId);
private extern(C) void  qtd_QMotifStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const(void* __this_nativeId,
 int cc0,
 void* opt1,
 void* p2,
 void* w3);
private extern(C) void  qtd_QMotifStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const(void* __this_nativeId,
 int element0,
 void* opt1,
 void* p2,
 void* w3);
private extern(C) void  qtd_QMotifStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const(void* __this_nativeId,
 int pe0,
 void* opt1,
 void* p2,
 void* w3);
private extern(C) bool  qtd_QMotifStyle_event_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QMotifStyle_eventFilter_QObject_QEvent(void* __this_nativeId,
 void* o0,
 void* e1);
private extern(C) int  qtd_QMotifStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 int metric0,
 void* option1,
 void* widget2);
private extern(C) void  qtd_QMotifStyle_polish_QApplication(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMotifStyle_polish_nativepointerQPalette(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMotifStyle_polish_QWidget(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMotifStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const(void* __this_nativeId,
 QSize * __d_return_value,
 int ct0,
 void* opt1,
 QSize contentsSize2,
 void* widget3);
private extern(C) void*  qtd_QMotifStyle_standardPalette_const(void* __this_nativeId);
private extern(C) int  qtd_QMotifStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const(void* __this_nativeId,
 int hint0,
 void* opt1,
 void* widget2,
 void* returnData3);
private extern(C) void  qtd_QMotifStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const(void* __this_nativeId,
 QRect * __d_return_value,
 int cc0,
 void* opt1,
 int sc2,
 void* widget3);
private extern(C) void  qtd_QMotifStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 QRect * __d_return_value,
 int r0,
 void* opt1,
 void* widget2);
private extern(C) void  qtd_QMotifStyle_timerEvent_QTimerEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QMotifStyle_unpolish_QApplication(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMotifStyle_unpolish_QWidget(void* __this_nativeId,
 void* arg__1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QMotifStyle_initCallBacks(void* virtuals);

extern(C) void static_init_QMotifStyle() {
    qtd_QMotifStyle_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QMotifStyle_staticMetaObject();

extern(C) void qtd_QMotifStyle_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QMotifStyle_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
