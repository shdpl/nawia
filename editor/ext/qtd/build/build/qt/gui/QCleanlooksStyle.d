module qt.gui.QCleanlooksStyle;

public import qt.gui.QCleanlooksStyle_aux;
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


public class QCleanlooksStyle : QWindowsStyle
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
        void* ret = qtd_QCleanlooksStyle_QCleanlooksStyle(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected QIcon standardIconImplementation(QStyle.StandardPixmap standardIcon, QStyleOption option, QWidget widget = null) const {
        void* ret = qtd_QCleanlooksStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const(qtdNativeId, standardIcon, option is null ? null : (cast(QStyleOption)option).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public void drawComplexControl(QStyle.ComplexControl control, QStyleOptionComplex option, QPainter painter, QWidget widget) const {
        qtd_QCleanlooksStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const(qtdNativeId, control, option is null ? null : (cast(QStyleOptionComplex)option).qtdNativeId, painter is null ? null : painter.qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
    }

    public void drawControl(QStyle.ControlElement ce, QStyleOption option, QPainter painter, QWidget widget) const {
        qtd_QCleanlooksStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const(qtdNativeId, ce, option is null ? null : (cast(QStyleOption)option).qtdNativeId, painter is null ? null : painter.qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
    }

    public void drawItemPixmap(QPainter painter, const(QRect) rect, int alignment, const(QPixmap) pixmap) const {
        qtd_QCleanlooksStyle_drawItemPixmap_QPainter_QRect_int_QPixmap_const(qtdNativeId, painter is null ? null : painter.qtdNativeId, rect, alignment, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId);
    }

    public void drawItemText(QPainter painter, const(QRect) rect, int flags, const(QPalette) pal, bool enabled, string text, QPalette.ColorRole textRole = QPalette.ColorRole.NoRole) const {
        qtd_QCleanlooksStyle_drawItemText_QPainter_QRect_int_QPalette_bool_string_ColorRole_const(qtdNativeId, painter is null ? null : painter.qtdNativeId, rect, flags, pal is null ? null : (cast(QPalette)pal).qtdNativeId, enabled, text, textRole);
    }

    public void drawPrimitive(QStyle.PrimitiveElement elem, QStyleOption option, QPainter painter, QWidget widget = null) const {
        qtd_QCleanlooksStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const(qtdNativeId, elem, option is null ? null : (cast(QStyleOption)option).qtdNativeId, painter is null ? null : painter.qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
    }

    public QPixmap generatedIconPixmap(QIcon.Mode iconMode, const(QPixmap) pixmap, QStyleOption opt) const {
        void* ret = qtd_QCleanlooksStyle_generatedIconPixmap_Mode_QPixmap_nativepointerQStyleOption_const(qtdNativeId, iconMode, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public int hitTestComplexControl(QStyle.ComplexControl cc, QStyleOptionComplex opt, const(QPoint) pt, QWidget w = null) const {
        return qtd_QCleanlooksStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const(qtdNativeId, cc, opt is null ? null : (cast(QStyleOptionComplex)opt).qtdNativeId, pt, w is null ? null : (cast(QWidget)w).qtdNativeId);
    }

    public QRect itemPixmapRect(const(QRect) r, int flags, const(QPixmap) pixmap) const {
        QRect res;
        qtd_QCleanlooksStyle_itemPixmapRect_QRect_int_QPixmap_const(qtdNativeId, &res, r, flags, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId);
        return res;
    }

    public int pixelMetric(QStyle.PixelMetric metric, QStyleOption option = null, QWidget widget = null) const {
        return qtd_QCleanlooksStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const(qtdNativeId, metric, option is null ? null : (cast(QStyleOption)option).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
    }

    public void polish(QApplication app) {
        qtd_QCleanlooksStyle_polish_QApplication(qtdNativeId, app is null ? null : app.qtdNativeId);
    }

    public void polish(QPalette pal) {
        qtd_QCleanlooksStyle_polish_nativepointerQPalette(qtdNativeId, pal is null ? null : pal.qtdNativeId);
    }

    public void polish(QWidget widget) {
        qtd_QCleanlooksStyle_polish_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public QSize sizeFromContents(QStyle.ContentsType type, QStyleOption option, const(QSize) size, QWidget widget) const {
        QSize res;
        qtd_QCleanlooksStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const(qtdNativeId, &res, type, option is null ? null : (cast(QStyleOption)option).qtdNativeId, size, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        return res;
    }

    public QPalette standardPalette() const {
        void* ret = qtd_QCleanlooksStyle_standardPalette_const(qtdNativeId);
        QPalette __d_return_value = new QPalette(ret);
        return __d_return_value;
    }

    public int styleHint(QStyle.StyleHint hint, QStyleOption option = null, QWidget widget = null, QStyleHintReturn returnData = null) const {
        return qtd_QCleanlooksStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const(qtdNativeId, hint, option is null ? null : (cast(QStyleOption)option).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId, returnData is null ? null : returnData.qtdNativeId);
    }

    public QRect subControlRect(QStyle.ComplexControl cc, QStyleOptionComplex opt, int sc, QWidget widget) const {
        QRect res;
        qtd_QCleanlooksStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const(qtdNativeId, &res, cc, opt is null ? null : (cast(QStyleOptionComplex)opt).qtdNativeId, sc, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        return res;
    }

    public QRect subElementRect(QStyle.SubElement r, QStyleOption opt, QWidget widget = null) const {
        QRect res;
        qtd_QCleanlooksStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const(qtdNativeId, &res, r, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        return res;
    }

    public void unpolish(QApplication app) {
        qtd_QCleanlooksStyle_unpolish_QApplication(qtdNativeId, app is null ? null : app.qtdNativeId);
    }

    public void unpolish(QWidget widget) {
        qtd_QCleanlooksStyle_unpolish_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*,const QWidget*)const", 
            "standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*)const"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QCleanlooksStyle_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QCleanlooksStyle);
    }

    static QCleanlooksStyle __getObject(void* nativeId) {
        return static_cast!(QCleanlooksStyle)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QCleanlooksStyle_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QCleanlooksStyle_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QCleanlooksStyle(nativeId, initFlags);
        QCleanlooksStyle.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(QStyle.StandardPixmap,QStyleOption,QWidget)("standardIconImplementation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(QStyle.StandardPixmap,QStyleOption)("standardIconImplementation"), index));

    }

    public alias void __isQtType_QCleanlooksStyle;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QCleanlooksStyle_QCleanlooksStyle(void *d_ptr);
private extern(C) void*  qtd_QCleanlooksStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 int standardIcon0,
 void* option1,
 void* widget2);
private extern(C) void  qtd_QCleanlooksStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const(void* __this_nativeId,
 int control0,
 void* option1,
 void* painter2,
 void* widget3);
private extern(C) void  qtd_QCleanlooksStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const(void* __this_nativeId,
 int ce0,
 void* option1,
 void* painter2,
 void* widget3);
private extern(C) void  qtd_QCleanlooksStyle_drawItemPixmap_QPainter_QRect_int_QPixmap_const(void* __this_nativeId,
 void* painter0,
 QRect rect1,
 int alignment2,
 void* pixmap3);
private extern(C) void  qtd_QCleanlooksStyle_drawItemText_QPainter_QRect_int_QPalette_bool_string_ColorRole_const(void* __this_nativeId,
 void* painter0,
 QRect rect1,
 int flags2,
 void* pal3,
 bool enabled4,
 string text5,
 int textRole6);
private extern(C) void  qtd_QCleanlooksStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const(void* __this_nativeId,
 int elem0,
 void* option1,
 void* painter2,
 void* widget3);
private extern(C) void*  qtd_QCleanlooksStyle_generatedIconPixmap_Mode_QPixmap_nativepointerQStyleOption_const(void* __this_nativeId,
 int iconMode0,
 void* pixmap1,
 void* opt2);
private extern(C) int  qtd_QCleanlooksStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const(void* __this_nativeId,
 int cc0,
 void* opt1,
 QPoint pt2,
 void* w3);
private extern(C) void  qtd_QCleanlooksStyle_itemPixmapRect_QRect_int_QPixmap_const(void* __this_nativeId,
 QRect * __d_return_value,
 QRect r0,
 int flags1,
 void* pixmap2);
private extern(C) int  qtd_QCleanlooksStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 int metric0,
 void* option1,
 void* widget2);
private extern(C) void  qtd_QCleanlooksStyle_polish_QApplication(void* __this_nativeId,
 void* app0);
private extern(C) void  qtd_QCleanlooksStyle_polish_nativepointerQPalette(void* __this_nativeId,
 void* pal0);
private extern(C) void  qtd_QCleanlooksStyle_polish_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QCleanlooksStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const(void* __this_nativeId,
 QSize * __d_return_value,
 int type0,
 void* option1,
 QSize size2,
 void* widget3);
private extern(C) void*  qtd_QCleanlooksStyle_standardPalette_const(void* __this_nativeId);
private extern(C) int  qtd_QCleanlooksStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const(void* __this_nativeId,
 int hint0,
 void* option1,
 void* widget2,
 void* returnData3);
private extern(C) void  qtd_QCleanlooksStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const(void* __this_nativeId,
 QRect * __d_return_value,
 int cc0,
 void* opt1,
 int sc2,
 void* widget3);
private extern(C) void  qtd_QCleanlooksStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 QRect * __d_return_value,
 int r0,
 void* opt1,
 void* widget2);
private extern(C) void  qtd_QCleanlooksStyle_unpolish_QApplication(void* __this_nativeId,
 void* app0);
private extern(C) void  qtd_QCleanlooksStyle_unpolish_QWidget(void* __this_nativeId,
 void* widget0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QCleanlooksStyle_initCallBacks(void* virtuals);

extern(C) void static_init_QCleanlooksStyle() {
    qtd_QCleanlooksStyle_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QCleanlooksStyle_staticMetaObject();

extern(C) void qtd_QCleanlooksStyle_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QCleanlooksStyle_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
