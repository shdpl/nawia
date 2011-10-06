#include <QVariant>
#include <qapplication.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qfontmetrics.h>
#include <qicon.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QStyle_shell.h"
#include <iostream>
#include <qstyle.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QStyleEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QStyleEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QStyle_createEntity(void *nativeId, void* dId)
{
    new QStyleEntity((QObject*)nativeId, dId);
}

QStyle_QtDShell::QStyle_QtDShell(void *d_ptr)
    : QStyle(),
      QObjectLink(this, d_ptr)
{
}

QStyle_QtDShell::~QStyle_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QStyle_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QStyle::metaObject();
}

int QStyle_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QStyle::qt_metacall(_c, _id, _a);
}

int QStyle_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QStyle::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QStyle_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QStyle_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QStyle_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const_dispatch, (void *dId, int cc0, void* opt1, void* p2, void* widget3))
QTD_FUNC(GUI, QStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const_dispatch)
void QStyle_QtDShell::drawComplexControl(QStyle::ComplexControl  cc0, const QStyleOptionComplex*  opt1, QPainter*  p2, const QWidget*  widget3) const
{
    qtd_QStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QStyle::ComplexControl )cc0, (QStyleOptionComplex* )opt1, (QPainter* )p2, (QWidget* )widget3);
}

QTD_FUNC_DECL(GUI, void, QStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch, (void *dId, int element0, void* opt1, void* p2, void* w3))
QTD_FUNC(GUI, QStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch)
void QStyle_QtDShell::drawControl(QStyle::ControlElement  element0, const QStyleOption*  opt1, QPainter*  p2, const QWidget*  w3) const
{
    qtd_QStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QStyle::ControlElement )element0, (QStyleOption* )opt1, (QPainter* )p2, (QWidget* )w3);
}

QTD_FUNC_DECL(GUI, void, QStyle_drawItemPixmap_QPainter_QRect_int_QPixmap_const_dispatch, (void *dId, void* painter0, QRect* rect1, int alignment2, void* pixmap3))
QTD_FUNC(GUI, QStyle_drawItemPixmap_QPainter_QRect_int_QPixmap_const_dispatch)
void QStyle_QtDShell::drawItemPixmap(QPainter*  painter0, const QRect&  rect1, int  alignment2, const QPixmap&  pixmap3) const
{
    qtd_QStyle_drawItemPixmap_QPainter_QRect_int_QPixmap_const_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QRect& )rect1, (int )alignment2, &(QPixmap& )pixmap3);
}

QTD_FUNC_DECL(GUI, void, QStyle_drawItemText_QPainter_QRect_int_QPalette_bool_string_ColorRole_const_dispatch, (void *dId, void* painter0, QRect* rect1, int flags2, void* pal3, bool enabled4, const unsigned short* text5, int text5_size, int textRole6))
QTD_FUNC(GUI, QStyle_drawItemText_QPainter_QRect_int_QPalette_bool_string_ColorRole_const_dispatch)
void QStyle_QtDShell::drawItemText(QPainter*  painter0, const QRect&  rect1, int  flags2, const QPalette&  pal3, bool  enabled4, const QString&  text5, QPalette::ColorRole  textRole6) const
{
    qtd_QStyle_drawItemText_QPainter_QRect_int_QPalette_bool_string_ColorRole_const_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QRect& )rect1, (int )flags2, &(QPalette& )pal3, (bool )enabled4, text5.utf16(), text5.size(), (QPalette::ColorRole )textRole6);
}

QTD_FUNC_DECL(GUI, void, QStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch, (void *dId, int pe0, void* opt1, void* p2, void* w3))
QTD_FUNC(GUI, QStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch)
void QStyle_QtDShell::drawPrimitive(QStyle::PrimitiveElement  pe0, const QStyleOption*  opt1, QPainter*  p2, const QWidget*  w3) const
{
    qtd_QStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QStyle::PrimitiveElement )pe0, (QStyleOption* )opt1, (QPainter* )p2, (QWidget* )w3);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QStyle_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QStyle_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void*, QStyle_generatedIconPixmap_Mode_QPixmap_nativepointerQStyleOption_const_dispatch, (void *dId, int iconMode0, void* pixmap1, void* opt2))
QTD_FUNC(GUI, QStyle_generatedIconPixmap_Mode_QPixmap_nativepointerQStyleOption_const_dispatch)
QPixmap  QStyle_QtDShell::generatedIconPixmap(QIcon::Mode  iconMode0, const QPixmap&  pixmap1, const QStyleOption*  opt2) const
{
    QPixmap *__qt_return_value = (QPixmap*) qtd_QStyle_generatedIconPixmap_Mode_QPixmap_nativepointerQStyleOption_const_dispatch(QObjectLink::getLink(this)->dId, (QIcon::Mode )iconMode0, &(QPixmap& )pixmap1, (QStyleOption* )opt2);
    return QPixmap(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, int, QStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const_dispatch, (void *dId, int cc0, void* opt1, QPoint* pt2, void* widget3))
QTD_FUNC(GUI, QStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const_dispatch)
QStyle::SubControl  QStyle_QtDShell::hitTestComplexControl(QStyle::ComplexControl  cc0, const QStyleOptionComplex*  opt1, const QPoint&  pt2, const QWidget*  widget3) const
{
    return (QStyle::SubControl) qtd_QStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QStyle::ComplexControl )cc0, (QStyleOptionComplex* )opt1, &(QPoint& )pt2, (QWidget* )widget3);
}

QTD_FUNC_DECL(GUI, void, QStyle_itemPixmapRect_QRect_int_QPixmap_const_dispatch, (void *dId, QRect *__d_return_value, QRect* r0, int flags1, void* pixmap2))
QTD_FUNC(GUI, QStyle_itemPixmapRect_QRect_int_QPixmap_const_dispatch)
QRect  QStyle_QtDShell::itemPixmapRect(const QRect&  r0, int  flags1, const QPixmap&  pixmap2) const
{
    QRect __d_return_value;
    qtd_QStyle_itemPixmapRect_QRect_int_QPixmap_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &(QRect& )r0, (int )flags1, &(QPixmap& )pixmap2);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QStyle_itemTextRect_QFontMetrics_QRect_int_bool_string_const_dispatch, (void *dId, QRect *__d_return_value, void* fm0, QRect* r1, int flags2, bool enabled3, const unsigned short* text4, int text4_size))
QTD_FUNC(GUI, QStyle_itemTextRect_QFontMetrics_QRect_int_bool_string_const_dispatch)
QRect  QStyle_QtDShell::itemTextRect(const QFontMetrics&  fm0, const QRect&  r1, int  flags2, bool  enabled3, const QString&  text4) const
{
    QRect __d_return_value;
    qtd_QStyle_itemTextRect_QFontMetrics_QRect_int_bool_string_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &(QFontMetrics& )fm0, &(QRect& )r1, (int )flags2, (bool )enabled3, text4.utf16(), text4.size());
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const_dispatch, (void *dId, int metric0, void* option1, void* widget2))
QTD_FUNC(GUI, QStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const_dispatch)
int  QStyle_QtDShell::pixelMetric(QStyle::PixelMetric  metric0, const QStyleOption*  option1, const QWidget*  widget2) const
{
    return qtd_QStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QStyle::PixelMetric )metric0, (QStyleOption* )option1, (QWidget* )widget2);
}

QTD_FUNC_DECL(GUI, void, QStyle_polish_QApplication_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QStyle_polish_QApplication_dispatch)
void QStyle_QtDShell::polish(QApplication*  arg__1)
{
    qtd_QStyle_polish_QApplication_dispatch(QObjectLink::getLink(this)->dId, (QApplication* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QStyle_polish_nativepointerQPalette_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QStyle_polish_nativepointerQPalette_dispatch)
void QStyle_QtDShell::polish(QPalette&  arg__1)
{
    qtd_QStyle_polish_nativepointerQPalette_dispatch(QObjectLink::getLink(this)->dId, &(QPalette& )arg__1);
}

QTD_FUNC_DECL(GUI, void, QStyle_polish_QWidget_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QStyle_polish_QWidget_dispatch)
void QStyle_QtDShell::polish(QWidget*  arg__1)
{
    qtd_QStyle_polish_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const_dispatch, (void *dId, QSize *__d_return_value, int ct0, void* opt1, QSize* contentsSize2, void* w3))
QTD_FUNC(GUI, QStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const_dispatch)
QSize  QStyle_QtDShell::sizeFromContents(QStyle::ContentsType  ct0, const QStyleOption*  opt1, const QSize&  contentsSize2, const QWidget*  w3) const
{
    QSize __d_return_value;
    qtd_QStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (QStyle::ContentsType )ct0, (QStyleOption* )opt1, &(QSize& )contentsSize2, (QWidget* )w3);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QStyle_standardPalette_const_dispatch, (void *dId))
QTD_FUNC(GUI, QStyle_standardPalette_const_dispatch)
QPalette  QStyle_QtDShell::standardPalette() const
{
    QPalette *__qt_return_value = (QPalette*) qtd_QStyle_standardPalette_const_dispatch(QObjectLink::getLink(this)->dId);
    return QPalette(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, int, QStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const_dispatch, (void *dId, int stylehint0, void* opt1, void* widget2, void* returnData3))
QTD_FUNC(GUI, QStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const_dispatch)
int  QStyle_QtDShell::styleHint(QStyle::StyleHint  stylehint0, const QStyleOption*  opt1, const QWidget*  widget2, QStyleHintReturn*  returnData3) const
{
    return qtd_QStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const_dispatch(QObjectLink::getLink(this)->dId, (QStyle::StyleHint )stylehint0, (QStyleOption* )opt1, (QWidget* )widget2, (QStyleHintReturn* )returnData3);
}

QTD_FUNC_DECL(GUI, void, QStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const_dispatch, (void *dId, QRect *__d_return_value, int cc0, void* opt1, int sc2, void* widget3))
QTD_FUNC(GUI, QStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const_dispatch)
QRect  QStyle_QtDShell::subControlRect(QStyle::ComplexControl  cc0, const QStyleOptionComplex*  opt1, QStyle::SubControl  sc2, const QWidget*  widget3) const
{
    QRect __d_return_value;
    qtd_QStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (QStyle::ComplexControl )cc0, (QStyleOptionComplex* )opt1, (QStyle::SubControl )sc2, (QWidget* )widget3);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const_dispatch, (void *dId, QRect *__d_return_value, int subElement0, void* option1, void* widget2))
QTD_FUNC(GUI, QStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const_dispatch)
QRect  QStyle_QtDShell::subElementRect(QStyle::SubElement  subElement0, const QStyleOption*  option1, const QWidget*  widget2) const
{
    QRect __d_return_value;
    qtd_QStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (QStyle::SubElement )subElement0, (QStyleOption* )option1, (QWidget* )widget2);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QStyle_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QStyle_unpolish_QApplication_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QStyle_unpolish_QApplication_dispatch)
void QStyle_QtDShell::unpolish(QApplication*  arg__1)
{
    qtd_QStyle_unpolish_QApplication_dispatch(QObjectLink::getLink(this)->dId, (QApplication* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QStyle_unpolish_QWidget_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QStyle_unpolish_QWidget_dispatch)
void QStyle_QtDShell::unpolish(QWidget*  arg__1)
{
    qtd_QStyle_unpolish_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QStyle_layoutSpacingImplementation_ControlType_ControlType_Orientation_nativepointerQStyleOption_QWidget_const_dispatch, (void *dId, int control10, int control21, int orientation2, void* option3, void* widget4))
QTD_FUNC(GUI, QStyle_layoutSpacingImplementation_ControlType_ControlType_Orientation_nativepointerQStyleOption_QWidget_const_dispatch)
int  QStyle_QtDShell::layoutSpacingImplementation(QSizePolicy::ControlType  control10, QSizePolicy::ControlType  control21, Qt::Orientation  orientation2, const QStyleOption*  option3, const QWidget*  widget4) const
{
    return qtd_QStyle_layoutSpacingImplementation_ControlType_ControlType_Orientation_nativepointerQStyleOption_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QSizePolicy::ControlType )control10, (QSizePolicy::ControlType )control21, (Qt::Orientation )orientation2, (QStyleOption* )option3, (QWidget* )widget4);
}

QTD_FUNC_DECL(GUI, void*, QStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const_dispatch, (void *dId, int standardIcon0, void* opt1, void* widget2))
QTD_FUNC(GUI, QStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const_dispatch)
QIcon  QStyle_QtDShell::standardIconImplementation(QStyle::StandardPixmap  standardIcon0, const QStyleOption*  opt1, const QWidget*  widget2) const
{
    QIcon *__qt_return_value = (QIcon*) qtd_QStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QStyle::StandardPixmap )standardIcon0, (QStyleOption* )opt1, (QWidget* )widget2);
    return QIcon(*__qt_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QStyle_initCallBacks(VoidFunc *virts) {
    qtd_QStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const_dispatch = (qtd_QStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const_dispatch_t) virts[0];
    qtd_QStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch = (qtd_QStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch_t) virts[1];
    qtd_QStyle_drawItemPixmap_QPainter_QRect_int_QPixmap_const_dispatch = (qtd_QStyle_drawItemPixmap_QPainter_QRect_int_QPixmap_const_dispatch_t) virts[2];
    qtd_QStyle_drawItemText_QPainter_QRect_int_QPalette_bool_string_ColorRole_const_dispatch = (qtd_QStyle_drawItemText_QPainter_QRect_int_QPalette_bool_string_ColorRole_const_dispatch_t) virts[3];
    qtd_QStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch = (qtd_QStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch_t) virts[4];
    qtd_QStyle_generatedIconPixmap_Mode_QPixmap_nativepointerQStyleOption_const_dispatch = (qtd_QStyle_generatedIconPixmap_Mode_QPixmap_nativepointerQStyleOption_const_dispatch_t) virts[5];
    qtd_QStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const_dispatch = (qtd_QStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const_dispatch_t) virts[6];
    qtd_QStyle_itemPixmapRect_QRect_int_QPixmap_const_dispatch = (qtd_QStyle_itemPixmapRect_QRect_int_QPixmap_const_dispatch_t) virts[7];
    qtd_QStyle_itemTextRect_QFontMetrics_QRect_int_bool_string_const_dispatch = (qtd_QStyle_itemTextRect_QFontMetrics_QRect_int_bool_string_const_dispatch_t) virts[8];
    qtd_QStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const_dispatch = (qtd_QStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const_dispatch_t) virts[9];
    qtd_QStyle_polish_QApplication_dispatch = (qtd_QStyle_polish_QApplication_dispatch_t) virts[10];
    qtd_QStyle_polish_nativepointerQPalette_dispatch = (qtd_QStyle_polish_nativepointerQPalette_dispatch_t) virts[11];
    qtd_QStyle_polish_QWidget_dispatch = (qtd_QStyle_polish_QWidget_dispatch_t) virts[12];
    qtd_QStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const_dispatch = (qtd_QStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const_dispatch_t) virts[13];
    qtd_QStyle_standardPalette_const_dispatch = (qtd_QStyle_standardPalette_const_dispatch_t) virts[14];
    qtd_QStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const_dispatch = (qtd_QStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const_dispatch_t) virts[15];
    qtd_QStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const_dispatch = (qtd_QStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const_dispatch_t) virts[16];
    qtd_QStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const_dispatch = (qtd_QStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const_dispatch_t) virts[17];
    qtd_QStyle_unpolish_QApplication_dispatch = (qtd_QStyle_unpolish_QApplication_dispatch_t) virts[18];
    qtd_QStyle_unpolish_QWidget_dispatch = (qtd_QStyle_unpolish_QWidget_dispatch_t) virts[19];
    qtd_QStyle_layoutSpacingImplementation_ControlType_ControlType_Orientation_nativepointerQStyleOption_QWidget_const_dispatch = (qtd_QStyle_layoutSpacingImplementation_ControlType_ControlType_Orientation_nativepointerQStyleOption_QWidget_const_dispatch_t) virts[20];
    qtd_QStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const_dispatch = (qtd_QStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const_dispatch_t) virts[21];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
int  QStyle_QtDShell::__public_layoutSpacingImplementation(int  control10, int  control21, int  orientation2, const QStyleOption*  option3, const QWidget*  widget4) const
{
    return QStyle::layoutSpacingImplementation((QSizePolicy::ControlType )control10, (QSizePolicy::ControlType )control21, (Qt::Orientation )orientation2, (const QStyleOption* )option3, (const QWidget* )widget4);
}

QObject*  QStyle_QtDShell::__public_sender() const
{
    return QObject::sender();
}

QIcon  QStyle_QtDShell::__public_standardIconImplementation(int  standardIcon0, const QStyleOption*  opt1, const QWidget*  widget2) const
{
    return QStyle::standardIconImplementation((QStyle::StandardPixmap )standardIcon0, (const QStyleOption* )opt1, (const QWidget* )widget2);
}

// Write virtual function overries used to decide on static/virtual calls
void QStyle_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QStyle_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

void QStyle_QtDShell::__override_drawComplexControl(int  cc0, const QStyleOptionComplex*  opt1, QPainter*  p2, const QWidget*  widget3, bool static_call) const
{
    if (static_call) {
        return;
    } else {
        drawComplexControl((QStyle::ComplexControl )cc0, (const QStyleOptionComplex* )opt1, (QPainter* )p2, (const QWidget* )widget3);
    }
}

void QStyle_QtDShell::__override_drawControl(int  element0, const QStyleOption*  opt1, QPainter*  p2, const QWidget*  w3, bool static_call) const
{
    if (static_call) {
        return;
    } else {
        drawControl((QStyle::ControlElement )element0, (const QStyleOption* )opt1, (QPainter* )p2, (const QWidget* )w3);
    }
}

void QStyle_QtDShell::__override_drawItemPixmap(QPainter*  painter0, const QRect&  rect1, int  alignment2, const QPixmap&  pixmap3, bool static_call) const
{
    if (static_call) {
        QStyle::drawItemPixmap((QPainter* )painter0, (const QRect& )rect1, (int )alignment2, (const QPixmap& )pixmap3);
    } else {
        drawItemPixmap((QPainter* )painter0, (const QRect& )rect1, (int )alignment2, (const QPixmap& )pixmap3);
    }
}

void QStyle_QtDShell::__override_drawItemText(QPainter*  painter0, const QRect&  rect1, int  flags2, const QPalette&  pal3, bool  enabled4, const QString&  text5, int  textRole6, bool static_call) const
{
    if (static_call) {
        QStyle::drawItemText((QPainter* )painter0, (const QRect& )rect1, (int )flags2, (const QPalette& )pal3, (bool )enabled4, (const QString& )text5, (QPalette::ColorRole )textRole6);
    } else {
        drawItemText((QPainter* )painter0, (const QRect& )rect1, (int )flags2, (const QPalette& )pal3, (bool )enabled4, (const QString& )text5, (QPalette::ColorRole )textRole6);
    }
}

void QStyle_QtDShell::__override_drawPrimitive(int  pe0, const QStyleOption*  opt1, QPainter*  p2, const QWidget*  w3, bool static_call) const
{
    if (static_call) {
        return;
    } else {
        drawPrimitive((QStyle::PrimitiveElement )pe0, (const QStyleOption* )opt1, (QPainter* )p2, (const QWidget* )w3);
    }
}

bool  QStyle_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QStyle_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

QPixmap  QStyle_QtDShell::__override_generatedIconPixmap(int  iconMode0, const QPixmap&  pixmap1, const QStyleOption*  opt2, bool static_call) const
{
    if (static_call) {
        return QPixmap();
    } else {
        return generatedIconPixmap((QIcon::Mode )iconMode0, (const QPixmap& )pixmap1, (const QStyleOption* )opt2);
    }
}

int  QStyle_QtDShell::__override_hitTestComplexControl(int  cc0, const QStyleOptionComplex*  opt1, const QPoint&  pt2, const QWidget*  widget3, bool static_call) const
{
    if (static_call) {
        return QStyle::SubControl(0);
    } else {
        return hitTestComplexControl((QStyle::ComplexControl )cc0, (const QStyleOptionComplex* )opt1, (const QPoint& )pt2, (const QWidget* )widget3);
    }
}

QRect  QStyle_QtDShell::__override_itemPixmapRect(const QRect&  r0, int  flags1, const QPixmap&  pixmap2, bool static_call) const
{
    if (static_call) {
        return QStyle::itemPixmapRect((const QRect& )r0, (int )flags1, (const QPixmap& )pixmap2);
    } else {
        return itemPixmapRect((const QRect& )r0, (int )flags1, (const QPixmap& )pixmap2);
    }
}

QRect  QStyle_QtDShell::__override_itemTextRect(const QFontMetrics&  fm0, const QRect&  r1, int  flags2, bool  enabled3, const QString&  text4, bool static_call) const
{
    if (static_call) {
        return QStyle::itemTextRect((const QFontMetrics& )fm0, (const QRect& )r1, (int )flags2, (bool )enabled3, (const QString& )text4);
    } else {
        return itemTextRect((const QFontMetrics& )fm0, (const QRect& )r1, (int )flags2, (bool )enabled3, (const QString& )text4);
    }
}

int  QStyle_QtDShell::__override_pixelMetric(int  metric0, const QStyleOption*  option1, const QWidget*  widget2, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return pixelMetric((QStyle::PixelMetric )metric0, (const QStyleOption* )option1, (const QWidget* )widget2);
    }
}

void QStyle_QtDShell::__override_polish(QApplication*  arg__1, bool static_call)
{
    if (static_call) {
        QStyle::polish((QApplication* )arg__1);
    } else {
        polish((QApplication* )arg__1);
    }
}

void QStyle_QtDShell::__override_polish(QPalette&  arg__1, bool static_call)
{
    if (static_call) {
        QStyle::polish((QPalette& )arg__1);
    } else {
        polish((QPalette& )arg__1);
    }
}

void QStyle_QtDShell::__override_polish(QWidget*  arg__1, bool static_call)
{
    if (static_call) {
        QStyle::polish((QWidget* )arg__1);
    } else {
        polish((QWidget* )arg__1);
    }
}

QSize  QStyle_QtDShell::__override_sizeFromContents(int  ct0, const QStyleOption*  opt1, const QSize&  contentsSize2, const QWidget*  w3, bool static_call) const
{
    if (static_call) {
        return QSize();
    } else {
        return sizeFromContents((QStyle::ContentsType )ct0, (const QStyleOption* )opt1, (const QSize& )contentsSize2, (const QWidget* )w3);
    }
}

QPalette  QStyle_QtDShell::__override_standardPalette(bool static_call) const
{
    if (static_call) {
        return QStyle::standardPalette();
    } else {
        return standardPalette();
    }
}

int  QStyle_QtDShell::__override_styleHint(int  stylehint0, const QStyleOption*  opt1, const QWidget*  widget2, QStyleHintReturn*  returnData3, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return styleHint((QStyle::StyleHint )stylehint0, (const QStyleOption* )opt1, (const QWidget* )widget2, (QStyleHintReturn* )returnData3);
    }
}

QRect  QStyle_QtDShell::__override_subControlRect(int  cc0, const QStyleOptionComplex*  opt1, int  sc2, const QWidget*  widget3, bool static_call) const
{
    if (static_call) {
        return QRect();
    } else {
        return subControlRect((QStyle::ComplexControl )cc0, (const QStyleOptionComplex* )opt1, (QStyle::SubControl )sc2, (const QWidget* )widget3);
    }
}

QRect  QStyle_QtDShell::__override_subElementRect(int  subElement0, const QStyleOption*  option1, const QWidget*  widget2, bool static_call) const
{
    if (static_call) {
        return QRect();
    } else {
        return subElementRect((QStyle::SubElement )subElement0, (const QStyleOption* )option1, (const QWidget* )widget2);
    }
}

void QStyle_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QStyle_QtDShell::__override_unpolish(QApplication*  arg__1, bool static_call)
{
    if (static_call) {
        QStyle::unpolish((QApplication* )arg__1);
    } else {
        unpolish((QApplication* )arg__1);
    }
}

void QStyle_QtDShell::__override_unpolish(QWidget*  arg__1, bool static_call)
{
    if (static_call) {
        QStyle::unpolish((QWidget* )arg__1);
    } else {
        unpolish((QWidget* )arg__1);
    }
}

// ---externC---
// QStyle::QStyle()
QTD_EXTERN QTD_EXPORT void* qtd_QStyle_QStyle
(void *d_ptr)
{
    QStyle_QtDShell *__qt_this = new QStyle_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QStyle::combinedLayoutSpacing(QFlags<QSizePolicy::ControlType> controls1, QFlags<QSizePolicy::ControlType> controls2, Qt::Orientation orientation, QStyleOption * option, QWidget * widget) const
QTD_EXTERN QTD_EXPORT int qtd_QStyle_combinedLayoutSpacing_ControlTypes_ControlTypes_Orientation_nativepointerQStyleOption_QWidget_const
(void* __this_nativeId,
 int controls10,
 int controls21,
 int orientation2,
 void* option3,
 void* widget4)
{
    QFlags<QSizePolicy::ControlType> __qt_controls10 = (QFlags<QSizePolicy::ControlType>) controls10;
    QFlags<QSizePolicy::ControlType> __qt_controls21 = (QFlags<QSizePolicy::ControlType>) controls21;
    Qt::Orientation __qt_orientation2 = (Qt::Orientation) orientation2;
    QStyleOption*  __qt_option3 = (QStyleOption* ) option3;
    QWidget*  __qt_widget4 = (QWidget* ) widget4;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->combinedLayoutSpacing((QSizePolicy::ControlTypes )__qt_controls10, (QSizePolicy::ControlTypes )__qt_controls21, (Qt::Orientation )__qt_orientation2, (QStyleOption* )__qt_option3, (QWidget* )__qt_widget4);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStyle::layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT int qtd_QStyle_layoutSpacing_ControlType_ControlType_Orientation_nativepointerQStyleOption_QWidget_const
(void* __this_nativeId,
 int control10,
 int control21,
 int orientation2,
 void* option3,
 void* widget4)
{
    QSizePolicy::ControlType __qt_control10 = (QSizePolicy::ControlType) control10;
    QSizePolicy::ControlType __qt_control21 = (QSizePolicy::ControlType) control21;
    Qt::Orientation __qt_orientation2 = (Qt::Orientation) orientation2;
    const QStyleOption*  __qt_option3 = (const QStyleOption* ) option3;
    const QWidget*  __qt_widget4 = (const QWidget* ) widget4;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->layoutSpacing((QSizePolicy::ControlType )__qt_control10, (QSizePolicy::ControlType )__qt_control21, (Qt::Orientation )__qt_orientation2, (const QStyleOption* )__qt_option3, (const QWidget* )__qt_widget4);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStyle::layoutSpacingImplementation(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT int qtd_QStyle_layoutSpacingImplementation_ControlType_ControlType_Orientation_nativepointerQStyleOption_QWidget_const
(void* __this_nativeId,
 int control10,
 int control21,
 int orientation2,
 void* option3,
 void* widget4)
{
    QSizePolicy::ControlType __qt_control10 = (QSizePolicy::ControlType) control10;
    QSizePolicy::ControlType __qt_control21 = (QSizePolicy::ControlType) control21;
    Qt::Orientation __qt_orientation2 = (Qt::Orientation) orientation2;
    const QStyleOption*  __qt_option3 = (const QStyleOption* ) option3;
    const QWidget*  __qt_widget4 = (const QWidget* ) widget4;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->__public_layoutSpacingImplementation((QSizePolicy::ControlType )__qt_control10, (QSizePolicy::ControlType )__qt_control21, (Qt::Orientation )__qt_orientation2, (const QStyleOption* )__qt_option3, (const QWidget* )__qt_widget4);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStyle::proxy() const
QTD_EXTERN QTD_EXPORT void* qtd_QStyle_proxy_const
(void* __this_nativeId)
{
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    const QStyle*  __qt_return_value = __qt_this->proxy();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStyle::standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption * option, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT void* qtd_QStyle_standardIcon_StandardPixmap_nativepointerQStyleOption_QWidget_const
(void* __this_nativeId,
 int standardIcon0,
 void* option1,
 void* widget2)
{
    QStyle::StandardPixmap __qt_standardIcon0 = (QStyle::StandardPixmap) standardIcon0;
    const QStyleOption*  __qt_option1 = (const QStyleOption* ) option1;
    const QWidget*  __qt_widget2 = (const QWidget* ) widget2;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->standardIcon((QStyle::StandardPixmap )__qt_standardIcon0, (const QStyleOption* )__qt_option1, (const QWidget* )__qt_widget2);

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QStyle::standardIconImplementation(QStyle::StandardPixmap standardIcon, const QStyleOption * opt, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT void* qtd_QStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const
(void* __this_nativeId,
 int standardIcon0,
 void* opt1,
 void* widget2)
{
    QStyle::StandardPixmap __qt_standardIcon0 = (QStyle::StandardPixmap) standardIcon0;
    const QStyleOption*  __qt_opt1 = (const QStyleOption* ) opt1;
    const QWidget*  __qt_widget2 = (const QWidget* ) widget2;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->__public_standardIconImplementation((QStyle::StandardPixmap )__qt_standardIcon0, (const QStyleOption* )__qt_opt1, (const QWidget* )__qt_widget2);

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QStyle::drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QPainter * p, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT void qtd_QStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const
(void* __this_nativeId,
 int cc0,
 void* opt1,
 void* p2,
 void* widget3)
{
    QStyle::ComplexControl __qt_cc0 = (QStyle::ComplexControl) cc0;
    const QStyleOptionComplex*  __qt_opt1 = (const QStyleOptionComplex* ) opt1;
    QPainter*  __qt_p2 = (QPainter* ) p2;
    const QWidget*  __qt_widget3 = (const QWidget* ) widget3;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawComplexControl((QStyle::ComplexControl )__qt_cc0, (const QStyleOptionComplex* )__qt_opt1, (QPainter* )__qt_p2, (const QWidget* )__qt_widget3, __do_static_call);

}

// QStyle::drawControl(QStyle::ControlElement element, const QStyleOption * opt, QPainter * p, const QWidget * w) const
QTD_EXTERN QTD_EXPORT void qtd_QStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const
(void* __this_nativeId,
 int element0,
 void* opt1,
 void* p2,
 void* w3)
{
    QStyle::ControlElement __qt_element0 = (QStyle::ControlElement) element0;
    const QStyleOption*  __qt_opt1 = (const QStyleOption* ) opt1;
    QPainter*  __qt_p2 = (QPainter* ) p2;
    const QWidget*  __qt_w3 = (const QWidget* ) w3;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawControl((QStyle::ControlElement )__qt_element0, (const QStyleOption* )__qt_opt1, (QPainter* )__qt_p2, (const QWidget* )__qt_w3, __do_static_call);

}

// QStyle::drawItemPixmap(QPainter * painter, const QRect & rect, int alignment, const QPixmap & pixmap) const
QTD_EXTERN QTD_EXPORT void qtd_QStyle_drawItemPixmap_QPainter_QRect_int_QPixmap_const
(void* __this_nativeId,
 void* painter0,
 QRect rect1,
 int alignment2,
 void* pixmap3)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QPixmap&  __qt_pixmap3 = (const QPixmap& ) *(QPixmap *)pixmap3;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawItemPixmap((QPainter* )__qt_painter0, (const QRect& )rect1, (int )alignment2, (const QPixmap& )__qt_pixmap3, __do_static_call);

}

// QStyle::drawItemText(QPainter * painter, const QRect & rect, int flags, const QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole textRole) const
QTD_EXTERN QTD_EXPORT void qtd_QStyle_drawItemText_QPainter_QRect_int_QPalette_bool_string_ColorRole_const
(void* __this_nativeId,
 void* painter0,
 QRect rect1,
 int flags2,
 void* pal3,
 bool enabled4,
 DArray text5,
 int textRole6)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QPalette&  __qt_pal3 = (const QPalette& ) *(QPalette *)pal3;
    QString __qt_text5 = QString::fromUtf8((const char *)text5.ptr, text5.length);
    QPalette::ColorRole __qt_textRole6 = (QPalette::ColorRole) textRole6;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawItemText((QPainter* )__qt_painter0, (const QRect& )rect1, (int )flags2, (const QPalette& )__qt_pal3, (bool )enabled4, (const QString& )__qt_text5, (QPalette::ColorRole )__qt_textRole6, __do_static_call);

}

// QStyle::drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption * opt, QPainter * p, const QWidget * w) const
QTD_EXTERN QTD_EXPORT void qtd_QStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const
(void* __this_nativeId,
 int pe0,
 void* opt1,
 void* p2,
 void* w3)
{
    QStyle::PrimitiveElement __qt_pe0 = (QStyle::PrimitiveElement) pe0;
    const QStyleOption*  __qt_opt1 = (const QStyleOption* ) opt1;
    QPainter*  __qt_p2 = (QPainter* ) p2;
    const QWidget*  __qt_w3 = (const QWidget* ) w3;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawPrimitive((QStyle::PrimitiveElement )__qt_pe0, (const QStyleOption* )__qt_opt1, (QPainter* )__qt_p2, (const QWidget* )__qt_w3, __do_static_call);

}

// QStyle::generatedIconPixmap(QIcon::Mode iconMode, const QPixmap & pixmap, const QStyleOption * opt) const
QTD_EXTERN QTD_EXPORT void* qtd_QStyle_generatedIconPixmap_Mode_QPixmap_nativepointerQStyleOption_const
(void* __this_nativeId,
 int iconMode0,
 void* pixmap1,
 void* opt2)
{
    QIcon::Mode __qt_iconMode0 = (QIcon::Mode) iconMode0;
    const QPixmap&  __qt_pixmap1 = (const QPixmap& ) *(QPixmap *)pixmap1;
    const QStyleOption*  __qt_opt2 = (const QStyleOption* ) opt2;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QPixmap  __qt_return_value = __qt_this->__override_generatedIconPixmap((QIcon::Mode )__qt_iconMode0, (const QPixmap& )__qt_pixmap1, (const QStyleOption* )__qt_opt2, __do_static_call);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QStyle::hitTestComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, const QPoint & pt, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT int qtd_QStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const
(void* __this_nativeId,
 int cc0,
 void* opt1,
 QPoint pt2,
 void* widget3)
{
    QStyle::ComplexControl __qt_cc0 = (QStyle::ComplexControl) cc0;
    const QStyleOptionComplex*  __qt_opt1 = (const QStyleOptionComplex* ) opt1;
    const QWidget*  __qt_widget3 = (const QWidget* ) widget3;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_hitTestComplexControl((QStyle::ComplexControl )__qt_cc0, (const QStyleOptionComplex* )__qt_opt1, (const QPoint& )pt2, (const QWidget* )__qt_widget3, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStyle::itemPixmapRect(const QRect & r, int flags, const QPixmap & pixmap) const
QTD_EXTERN QTD_EXPORT void qtd_QStyle_itemPixmapRect_QRect_int_QPixmap_const
(void* __this_nativeId,
 QRect * __d_return_value,
 QRect r0,
 int flags1,
 void* pixmap2)
{
    const QPixmap&  __qt_pixmap2 = (const QPixmap& ) *(QPixmap *)pixmap2;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_itemPixmapRect((const QRect& )r0, (int )flags1, (const QPixmap& )__qt_pixmap2, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QStyle::itemTextRect(const QFontMetrics & fm, const QRect & r, int flags, bool enabled, const QString & text) const
QTD_EXTERN QTD_EXPORT void qtd_QStyle_itemTextRect_QFontMetrics_QRect_int_bool_string_const
(void* __this_nativeId,
 QRect * __d_return_value,
 void* fm0,
 QRect r1,
 int flags2,
 bool enabled3,
 DArray text4)
{
    const QFontMetrics&  __qt_fm0 = (const QFontMetrics& ) *(QFontMetrics *)fm0;
    QString __qt_text4 = QString::fromUtf8((const char *)text4.ptr, text4.length);
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_itemTextRect((const QFontMetrics& )__qt_fm0, (const QRect& )r1, (int )flags2, (bool )enabled3, (const QString& )__qt_text4, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QStyle::pixelMetric(QStyle::PixelMetric metric, const QStyleOption * option, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT int qtd_QStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const
(void* __this_nativeId,
 int metric0,
 void* option1,
 void* widget2)
{
    QStyle::PixelMetric __qt_metric0 = (QStyle::PixelMetric) metric0;
    const QStyleOption*  __qt_option1 = (const QStyleOption* ) option1;
    const QWidget*  __qt_widget2 = (const QWidget* ) widget2;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_pixelMetric((QStyle::PixelMetric )__qt_metric0, (const QStyleOption* )__qt_option1, (const QWidget* )__qt_widget2, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStyle::polish(QApplication * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QStyle_polish_QApplication
(void* __this_nativeId,
 void* arg__1)
{
    QApplication*  __qt_arg__1 = (QApplication* ) arg__1;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_polish((QApplication* )__qt_arg__1, __do_static_call);

}

// QStyle::polish(QPalette & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QStyle_polish_nativepointerQPalette
(void* __this_nativeId,
 void* arg__1)
{
    QPalette&  __qt_arg__1 = (QPalette& ) * (QPalette *) arg__1;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_polish((QPalette& )__qt_arg__1, __do_static_call);

}

// QStyle::polish(QWidget * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QStyle_polish_QWidget
(void* __this_nativeId,
 void* arg__1)
{
    QWidget*  __qt_arg__1 = (QWidget* ) arg__1;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_polish((QWidget* )__qt_arg__1, __do_static_call);

}

// QStyle::sizeFromContents(QStyle::ContentsType ct, const QStyleOption * opt, const QSize & contentsSize, const QWidget * w) const
QTD_EXTERN QTD_EXPORT void qtd_QStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const
(void* __this_nativeId,
 QSize * __d_return_value,
 int ct0,
 void* opt1,
 QSize contentsSize2,
 void* w3)
{
    QStyle::ContentsType __qt_ct0 = (QStyle::ContentsType) ct0;
    const QStyleOption*  __qt_opt1 = (const QStyleOption* ) opt1;
    const QWidget*  __qt_w3 = (const QWidget* ) w3;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeFromContents((QStyle::ContentsType )__qt_ct0, (const QStyleOption* )__qt_opt1, (const QSize& )contentsSize2, (const QWidget* )__qt_w3, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QStyle::standardPalette() const
QTD_EXTERN QTD_EXPORT void* qtd_QStyle_standardPalette_const
(void* __this_nativeId)
{
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QPalette  __qt_return_value = __qt_this->__override_standardPalette(__do_static_call);

    void* __d_return_value = (void*) new QPalette(__qt_return_value);

    return __d_return_value;
}

// QStyle::styleHint(QStyle::StyleHint stylehint, const QStyleOption * opt, const QWidget * widget, QStyleHintReturn * returnData) const
QTD_EXTERN QTD_EXPORT int qtd_QStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const
(void* __this_nativeId,
 int stylehint0,
 void* opt1,
 void* widget2,
 void* returnData3)
{
    QStyle::StyleHint __qt_stylehint0 = (QStyle::StyleHint) stylehint0;
    const QStyleOption*  __qt_opt1 = (const QStyleOption* ) opt1;
    const QWidget*  __qt_widget2 = (const QWidget* ) widget2;
    QStyleHintReturn*  __qt_returnData3 = (QStyleHintReturn* ) returnData3;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_styleHint((QStyle::StyleHint )__qt_stylehint0, (const QStyleOption* )__qt_opt1, (const QWidget* )__qt_widget2, (QStyleHintReturn* )__qt_returnData3, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStyle::subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT void qtd_QStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const
(void* __this_nativeId,
 QRect * __d_return_value,
 int cc0,
 void* opt1,
 int sc2,
 void* widget3)
{
    QStyle::ComplexControl __qt_cc0 = (QStyle::ComplexControl) cc0;
    const QStyleOptionComplex*  __qt_opt1 = (const QStyleOptionComplex* ) opt1;
    QStyle::SubControl __qt_sc2 = (QStyle::SubControl) sc2;
    const QWidget*  __qt_widget3 = (const QWidget* ) widget3;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_subControlRect((QStyle::ComplexControl )__qt_cc0, (const QStyleOptionComplex* )__qt_opt1, (QStyle::SubControl )__qt_sc2, (const QWidget* )__qt_widget3, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QStyle::subElementRect(QStyle::SubElement subElement, const QStyleOption * option, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT void qtd_QStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const
(void* __this_nativeId,
 QRect * __d_return_value,
 int subElement0,
 void* option1,
 void* widget2)
{
    QStyle::SubElement __qt_subElement0 = (QStyle::SubElement) subElement0;
    const QStyleOption*  __qt_option1 = (const QStyleOption* ) option1;
    const QWidget*  __qt_widget2 = (const QWidget* ) widget2;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_subElementRect((QStyle::SubElement )__qt_subElement0, (const QStyleOption* )__qt_option1, (const QWidget* )__qt_widget2, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QStyle::unpolish(QApplication * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QStyle_unpolish_QApplication
(void* __this_nativeId,
 void* arg__1)
{
    QApplication*  __qt_arg__1 = (QApplication* ) arg__1;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_unpolish((QApplication* )__qt_arg__1, __do_static_call);

}

// QStyle::unpolish(QWidget * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QStyle_unpolish_QWidget
(void* __this_nativeId,
 void* arg__1)
{
    QWidget*  __qt_arg__1 = (QWidget* ) arg__1;
    QStyle_QtDShell *__qt_this = (QStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_unpolish((QWidget* )__qt_arg__1, __do_static_call);

}

// QStyle::alignedRect(Qt::LayoutDirection direction, QFlags<Qt::AlignmentFlag> alignment, const QSize & size, const QRect & rectangle)
QTD_EXTERN QTD_EXPORT void qtd_QStyle_alignedRect_LayoutDirection_Alignment_QSize_QRect
(QRect * __d_return_value,
 int direction0,
 int alignment1,
 QSize size2,
 QRect rectangle3)
{
    Qt::LayoutDirection __qt_direction0 = (Qt::LayoutDirection) direction0;
    QFlags<Qt::AlignmentFlag> __qt_alignment1 = (QFlags<Qt::AlignmentFlag>) alignment1;
    QRect  __qt_return_value = QStyle_QtDShell::alignedRect((Qt::LayoutDirection )__qt_direction0, (Qt::Alignment )__qt_alignment1, (const QSize& )size2, (const QRect& )rectangle3);

    *__d_return_value = __qt_return_value;

}

// QStyle::sliderPositionFromValue(int min, int max, int val, int space, bool upsideDown)
QTD_EXTERN QTD_EXPORT int qtd_QStyle_sliderPositionFromValue_int_int_int_int_bool
(int min0,
 int max1,
 int val2,
 int space3,
 bool upsideDown4)
{
    int  __qt_return_value = QStyle_QtDShell::sliderPositionFromValue((int )min0, (int )max1, (int )val2, (int )space3, (bool )upsideDown4);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStyle::sliderValueFromPosition(int min, int max, int pos, int space, bool upsideDown)
QTD_EXTERN QTD_EXPORT int qtd_QStyle_sliderValueFromPosition_int_int_int_int_bool
(int min0,
 int max1,
 int pos2,
 int space3,
 bool upsideDown4)
{
    int  __qt_return_value = QStyle_QtDShell::sliderValueFromPosition((int )min0, (int )max1, (int )pos2, (int )space3, (bool )upsideDown4);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStyle::visualAlignment(Qt::LayoutDirection direction, QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT int qtd_QStyle_visualAlignment_LayoutDirection_Alignment
(int direction0,
 int alignment1)
{
    Qt::LayoutDirection __qt_direction0 = (Qt::LayoutDirection) direction0;
    QFlags<Qt::AlignmentFlag> __qt_alignment1 = (QFlags<Qt::AlignmentFlag>) alignment1;
    int  __qt_return_value = QStyle_QtDShell::visualAlignment((Qt::LayoutDirection )__qt_direction0, (Qt::Alignment )__qt_alignment1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStyle::visualPos(Qt::LayoutDirection direction, const QRect & boundingRect, const QPoint & logicalPos)
QTD_EXTERN QTD_EXPORT void qtd_QStyle_visualPos_LayoutDirection_QRect_QPoint
(QPoint * __d_return_value,
 int direction0,
 QRect boundingRect1,
 QPoint logicalPos2)
{
    Qt::LayoutDirection __qt_direction0 = (Qt::LayoutDirection) direction0;
    QPoint  __qt_return_value = QStyle_QtDShell::visualPos((Qt::LayoutDirection )__qt_direction0, (const QRect& )boundingRect1, (const QPoint& )logicalPos2);

    *__d_return_value = __qt_return_value;

}

// QStyle::visualRect(Qt::LayoutDirection direction, const QRect & boundingRect, const QRect & logicalRect)
QTD_EXTERN QTD_EXPORT void qtd_QStyle_visualRect_LayoutDirection_QRect_QRect
(QRect * __d_return_value,
 int direction0,
 QRect boundingRect1,
 QRect logicalRect2)
{
    Qt::LayoutDirection __qt_direction0 = (Qt::LayoutDirection) direction0;
    QRect  __qt_return_value = QStyle_QtDShell::visualRect((Qt::LayoutDirection )__qt_direction0, (const QRect& )boundingRect1, (const QRect& )logicalRect2);

    *__d_return_value = __qt_return_value;

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QStyle_staticMetaObject() {
    return (void*)&QStyle::staticMetaObject;
}


