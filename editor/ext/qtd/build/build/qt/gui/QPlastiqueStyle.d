module qt.gui.QPlastiqueStyle;

public import qt.gui.QPlastiqueStyle_aux;
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
public import qt.gui.QSizePolicy;
public import qt.gui.QStyle;
public import qt.gui.QStyleOption;
public import qt.gui.QFontMetrics;
public import qt.gui.QApplication;
public import qt.gui.QPainter;
public import qt.core.QRect;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.gui.QWindowsStyle;
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


public class QPlastiqueStyle : QWindowsStyle
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
        void* ret = qtd_QPlastiqueStyle_QPlastiqueStyle(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected int layoutSpacingImplementation(QSizePolicy.ControlType control1, QSizePolicy.ControlType control2, Qt.Orientation orientation, QStyleOption option = null, QWidget widget = null) const {
        return qtd_QPlastiqueStyle_layoutSpacingImplementation_ControlType_ControlType_Orientation_nativepointerQStyleOption_QWidget_const(qtdNativeId, control1, control2, orientation, option is null ? null : (cast(QStyleOption)option).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
    }

    protected QIcon standardIconImplementation(QStyle.StandardPixmap standardIcon, QStyleOption opt = null, QWidget widget = null) const {
        void* ret = qtd_QPlastiqueStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const(qtdNativeId, standardIcon, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public void drawComplexControl(QStyle.ComplexControl control, QStyleOptionComplex option, QPainter painter, QWidget widget) const {
        qtd_QPlastiqueStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const(qtdNativeId, control, option is null ? null : (cast(QStyleOptionComplex)option).qtdNativeId, painter is null ? null : painter.qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
    }

    public void drawControl(QStyle.ControlElement element, QStyleOption option, QPainter painter, QWidget widget) const {
        qtd_QPlastiqueStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const(qtdNativeId, element, option is null ? null : (cast(QStyleOption)option).qtdNativeId, painter is null ? null : painter.qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
    }

    public void drawPrimitive(QStyle.PrimitiveElement element, QStyleOption option, QPainter painter, QWidget widget = null) const {
        qtd_QPlastiqueStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const(qtdNativeId, element, option is null ? null : (cast(QStyleOption)option).qtdNativeId, painter is null ? null : painter.qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
    }

    public bool eventFilter(QObject watched, QEvent event) {
        return qtd_QPlastiqueStyle_eventFilter_QObject_QEvent(qtdNativeId, watched is null ? null : watched.qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public int hitTestComplexControl(QStyle.ComplexControl control, QStyleOptionComplex option, const(QPoint) pos, QWidget widget = null) const {
        return qtd_QPlastiqueStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const(qtdNativeId, control, option is null ? null : (cast(QStyleOptionComplex)option).qtdNativeId, pos, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
    }

    public int pixelMetric(QStyle.PixelMetric metric, QStyleOption option = null, QWidget widget = null) const {
        return qtd_QPlastiqueStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const(qtdNativeId, metric, option is null ? null : (cast(QStyleOption)option).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
    }

    public void polish(QApplication app) {
        qtd_QPlastiqueStyle_polish_QApplication(qtdNativeId, app is null ? null : app.qtdNativeId);
    }

    public void polish(QPalette pal) {
        qtd_QPlastiqueStyle_polish_nativepointerQPalette(qtdNativeId, pal is null ? null : pal.qtdNativeId);
    }

    public void polish(QWidget widget) {
        qtd_QPlastiqueStyle_polish_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public QSize sizeFromContents(QStyle.ContentsType type, QStyleOption option, const(QSize) size, QWidget widget) const {
        QSize res;
        qtd_QPlastiqueStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const(qtdNativeId, &res, type, option is null ? null : (cast(QStyleOption)option).qtdNativeId, size, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        return res;
    }

    public QPalette standardPalette() const {
        void* ret = qtd_QPlastiqueStyle_standardPalette_const(qtdNativeId);
        QPalette __d_return_value = new QPalette(ret);
        return __d_return_value;
    }

    public int styleHint(QStyle.StyleHint hint, QStyleOption option = null, QWidget widget = null, QStyleHintReturn returnData = null) const {
        return qtd_QPlastiqueStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const(qtdNativeId, hint, option is null ? null : (cast(QStyleOption)option).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId, returnData is null ? null : returnData.qtdNativeId);
    }

    public QRect subControlRect(QStyle.ComplexControl cc, QStyleOptionComplex opt, int sc, QWidget widget) const {
        QRect res;
        qtd_QPlastiqueStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const(qtdNativeId, &res, cc, opt is null ? null : (cast(QStyleOptionComplex)opt).qtdNativeId, sc, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        return res;
    }

    public QRect subElementRect(QStyle.SubElement element, QStyleOption option, QWidget widget) const {
        QRect res;
        qtd_QPlastiqueStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const(qtdNativeId, &res, element, option is null ? null : (cast(QStyleOption)option).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        return res;
    }

    protected void timerEvent(QTimerEvent event) {
        qtd_QPlastiqueStyle_timerEvent_QTimerEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void unpolish(QApplication app) {
        qtd_QPlastiqueStyle_unpolish_QApplication(qtdNativeId, app is null ? null : app.qtdNativeId);
    }

    public void unpolish(QWidget widget) {
        qtd_QPlastiqueStyle_unpolish_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation,const QStyleOption*,const QWidget*)const", 
            "layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation,const QStyleOption*)const", 
            "layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation)const", 
            "standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*,const QWidget*)const", 
            "standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*)const", 
            "standardIconImplementation(QStyle::StandardPixmap)const"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QPlastiqueStyle_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QPlastiqueStyle);
    }

    static QPlastiqueStyle __getObject(void* nativeId) {
        return static_cast!(QPlastiqueStyle)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QPlastiqueStyle_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QPlastiqueStyle_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QPlastiqueStyle(nativeId, initFlags);
        QPlastiqueStyle.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(QSizePolicy.ControlType,QSizePolicy.ControlType,Qt.Orientation,QStyleOption,QWidget)("layoutSpacingImplementation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(QSizePolicy.ControlType,QSizePolicy.ControlType,Qt.Orientation,QStyleOption)("layoutSpacingImplementation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(QSizePolicy.ControlType,QSizePolicy.ControlType,Qt.Orientation)("layoutSpacingImplementation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(QStyle.StandardPixmap,QStyleOption,QWidget)("standardIconImplementation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(QStyle.StandardPixmap,QStyleOption)("standardIconImplementation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!(QStyle.StandardPixmap)("standardIconImplementation"), index));

    }

    public alias void __isQtType_QPlastiqueStyle;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPlastiqueStyle_QPlastiqueStyle(void *d_ptr);
private extern(C) int  qtd_QPlastiqueStyle_layoutSpacingImplementation_ControlType_ControlType_Orientation_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 int control10,
 int control21,
 int orientation2,
 void* option3,
 void* widget4);
private extern(C) void*  qtd_QPlastiqueStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 int standardIcon0,
 void* opt1,
 void* widget2);
private extern(C) void  qtd_QPlastiqueStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const(void* __this_nativeId,
 int control0,
 void* option1,
 void* painter2,
 void* widget3);
private extern(C) void  qtd_QPlastiqueStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const(void* __this_nativeId,
 int element0,
 void* option1,
 void* painter2,
 void* widget3);
private extern(C) void  qtd_QPlastiqueStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const(void* __this_nativeId,
 int element0,
 void* option1,
 void* painter2,
 void* widget3);
private extern(C) bool  qtd_QPlastiqueStyle_eventFilter_QObject_QEvent(void* __this_nativeId,
 void* watched0,
 void* event1);
private extern(C) int  qtd_QPlastiqueStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const(void* __this_nativeId,
 int control0,
 void* option1,
 QPoint pos2,
 void* widget3);
private extern(C) int  qtd_QPlastiqueStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 int metric0,
 void* option1,
 void* widget2);
private extern(C) void  qtd_QPlastiqueStyle_polish_QApplication(void* __this_nativeId,
 void* app0);
private extern(C) void  qtd_QPlastiqueStyle_polish_nativepointerQPalette(void* __this_nativeId,
 void* pal0);
private extern(C) void  qtd_QPlastiqueStyle_polish_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QPlastiqueStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const(void* __this_nativeId,
 QSize * __d_return_value,
 int type0,
 void* option1,
 QSize size2,
 void* widget3);
private extern(C) void*  qtd_QPlastiqueStyle_standardPalette_const(void* __this_nativeId);
private extern(C) int  qtd_QPlastiqueStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const(void* __this_nativeId,
 int hint0,
 void* option1,
 void* widget2,
 void* returnData3);
private extern(C) void  qtd_QPlastiqueStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const(void* __this_nativeId,
 QRect * __d_return_value,
 int cc0,
 void* opt1,
 int sc2,
 void* widget3);
private extern(C) void  qtd_QPlastiqueStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 QRect * __d_return_value,
 int element0,
 void* option1,
 void* widget2);
private extern(C) void  qtd_QPlastiqueStyle_timerEvent_QTimerEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QPlastiqueStyle_unpolish_QApplication(void* __this_nativeId,
 void* app0);
private extern(C) void  qtd_QPlastiqueStyle_unpolish_QWidget(void* __this_nativeId,
 void* widget0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QPlastiqueStyle_initCallBacks(void* virtuals);

extern(C) void static_init_QPlastiqueStyle() {
    qtd_QPlastiqueStyle_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QPlastiqueStyle_staticMetaObject();

extern(C) void qtd_QPlastiqueStyle_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QPlastiqueStyle_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
