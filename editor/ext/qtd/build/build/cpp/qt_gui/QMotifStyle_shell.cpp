#include <QVariant>
#include <qapplication.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qfontmetrics.h>
#include <qicon.h>
#include <qlist.h>
#include <qmotifstyle.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QMotifStyle_shell.h"
#include <iostream>
#include <qmotifstyle.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QMotifStyleEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QMotifStyleEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QMotifStyle_createEntity(void *nativeId, void* dId)
{
    new QMotifStyleEntity((QObject*)nativeId, dId);
}

QMotifStyle_QtDShell::QMotifStyle_QtDShell(void *d_ptr, bool  useHighlightCols0)
    : QMotifStyle(useHighlightCols0),
      QObjectLink(this, d_ptr)
{
}

QMotifStyle_QtDShell::~QMotifStyle_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QMotifStyle_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QMotifStyle::metaObject();
}

int QMotifStyle_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QMotifStyle::qt_metacall(_c, _id, _a);
}

int QMotifStyle_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QMotifStyle::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QMotifStyle_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QMotifStyle_QtDShell *__qt_this = (QMotifStyle_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QMotifStyle_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMotifStyle_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const_dispatch, (void *dId, int cc0, void* opt1, void* p2, void* w3))
void QMotifStyle_QtDShell::drawComplexControl(QStyle::ComplexControl  cc0, const QStyleOptionComplex*  opt1, QPainter*  p2, const QWidget*  w3) const
{
    qtd_QStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QStyle::ComplexControl )cc0, (QStyleOptionComplex* )opt1, (QPainter* )p2, (QWidget* )w3);
}

QTD_FUNC_DECL(GUI, void, QStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch, (void *dId, int element0, void* opt1, void* p2, void* w3))
void QMotifStyle_QtDShell::drawControl(QStyle::ControlElement  element0, const QStyleOption*  opt1, QPainter*  p2, const QWidget*  w3) const
{
    qtd_QStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QStyle::ControlElement )element0, (QStyleOption* )opt1, (QPainter* )p2, (QWidget* )w3);
}

QTD_FUNC_DECL(GUI, void, QStyle_drawItemPixmap_QPainter_QRect_int_QPixmap_const_dispatch, (void *dId, void* painter0, QRect* rect1, int alignment2, void* pixmap3))
void QMotifStyle_QtDShell::drawItemPixmap(QPainter*  painter0, const QRect&  rect1, int  alignment2, const QPixmap&  pixmap3) const
{
    qtd_QStyle_drawItemPixmap_QPainter_QRect_int_QPixmap_const_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QRect& )rect1, (int )alignment2, &(QPixmap& )pixmap3);
}

QTD_FUNC_DECL(GUI, void, QStyle_drawItemText_QPainter_QRect_int_QPalette_bool_string_ColorRole_const_dispatch, (void *dId, void* painter0, QRect* rect1, int flags2, void* pal3, bool enabled4, const unsigned short* text5, int text5_size, int textRole6))
void QMotifStyle_QtDShell::drawItemText(QPainter*  painter0, const QRect&  rect1, int  flags2, const QPalette&  pal3, bool  enabled4, const QString&  text5, QPalette::ColorRole  textRole6) const
{
    qtd_QStyle_drawItemText_QPainter_QRect_int_QPalette_bool_string_ColorRole_const_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QRect& )rect1, (int )flags2, &(QPalette& )pal3, (bool )enabled4, text5.utf16(), text5.size(), (QPalette::ColorRole )textRole6);
}

QTD_FUNC_DECL(GUI, void, QStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch, (void *dId, int pe0, void* opt1, void* p2, void* w3))
void QMotifStyle_QtDShell::drawPrimitive(QStyle::PrimitiveElement  pe0, const QStyleOption*  opt1, QPainter*  p2, const QWidget*  w3) const
{
    qtd_QStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QStyle::PrimitiveElement )pe0, (QStyleOption* )opt1, (QPainter* )p2, (QWidget* )w3);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QMotifStyle_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* o0, void* e1))
bool  QMotifStyle_QtDShell::eventFilter(QObject*  o0, QEvent*  e1)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )o0, (QEvent* )e1);
}

QTD_FUNC_DECL(GUI, void*, QStyle_generatedIconPixmap_Mode_QPixmap_nativepointerQStyleOption_const_dispatch, (void *dId, int iconMode0, void* pixmap1, void* opt2))
QPixmap  QMotifStyle_QtDShell::generatedIconPixmap(QIcon::Mode  iconMode0, const QPixmap&  pixmap1, const QStyleOption*  opt2) const
{
    QPixmap *__qt_return_value = (QPixmap*) qtd_QStyle_generatedIconPixmap_Mode_QPixmap_nativepointerQStyleOption_const_dispatch(QObjectLink::getLink(this)->dId, (QIcon::Mode )iconMode0, &(QPixmap& )pixmap1, (QStyleOption* )opt2);
    return QPixmap(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, int, QStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const_dispatch, (void *dId, int cc0, void* opt1, QPoint* pt2, void* w3))
QStyle::SubControl  QMotifStyle_QtDShell::hitTestComplexControl(QStyle::ComplexControl  cc0, const QStyleOptionComplex*  opt1, const QPoint&  pt2, const QWidget*  w3) const
{
    return (QStyle::SubControl) qtd_QStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QStyle::ComplexControl )cc0, (QStyleOptionComplex* )opt1, &(QPoint& )pt2, (QWidget* )w3);
}

QTD_FUNC_DECL(GUI, void, QStyle_itemPixmapRect_QRect_int_QPixmap_const_dispatch, (void *dId, QRect *__d_return_value, QRect* r0, int flags1, void* pixmap2))
QRect  QMotifStyle_QtDShell::itemPixmapRect(const QRect&  r0, int  flags1, const QPixmap&  pixmap2) const
{
    QRect __d_return_value;
    qtd_QStyle_itemPixmapRect_QRect_int_QPixmap_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &(QRect& )r0, (int )flags1, &(QPixmap& )pixmap2);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QStyle_itemTextRect_QFontMetrics_QRect_int_bool_string_const_dispatch, (void *dId, QRect *__d_return_value, void* fm0, QRect* r1, int flags2, bool enabled3, const unsigned short* text4, int text4_size))
QRect  QMotifStyle_QtDShell::itemTextRect(const QFontMetrics&  fm0, const QRect&  r1, int  flags2, bool  enabled3, const QString&  text4) const
{
    QRect __d_return_value;
    qtd_QStyle_itemTextRect_QFontMetrics_QRect_int_bool_string_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &(QFontMetrics& )fm0, &(QRect& )r1, (int )flags2, (bool )enabled3, text4.utf16(), text4.size());
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const_dispatch, (void *dId, int metric0, void* option1, void* widget2))
int  QMotifStyle_QtDShell::pixelMetric(QStyle::PixelMetric  metric0, const QStyleOption*  option1, const QWidget*  widget2) const
{
    return qtd_QStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QStyle::PixelMetric )metric0, (QStyleOption* )option1, (QWidget* )widget2);
}

QTD_FUNC_DECL(GUI, void, QStyle_polish_QApplication_dispatch, (void *dId, void* arg__1))
void QMotifStyle_QtDShell::polish(QApplication*  arg__1)
{
    qtd_QStyle_polish_QApplication_dispatch(QObjectLink::getLink(this)->dId, (QApplication* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QStyle_polish_nativepointerQPalette_dispatch, (void *dId, void* arg__1))
void QMotifStyle_QtDShell::polish(QPalette&  arg__1)
{
    qtd_QStyle_polish_nativepointerQPalette_dispatch(QObjectLink::getLink(this)->dId, &(QPalette& )arg__1);
}

QTD_FUNC_DECL(GUI, void, QStyle_polish_QWidget_dispatch, (void *dId, void* arg__1))
void QMotifStyle_QtDShell::polish(QWidget*  arg__1)
{
    qtd_QStyle_polish_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const_dispatch, (void *dId, QSize *__d_return_value, int ct0, void* opt1, QSize* contentsSize2, void* widget3))
QSize  QMotifStyle_QtDShell::sizeFromContents(QStyle::ContentsType  ct0, const QStyleOption*  opt1, const QSize&  contentsSize2, const QWidget*  widget3) const
{
    QSize __d_return_value;
    qtd_QStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (QStyle::ContentsType )ct0, (QStyleOption* )opt1, &(QSize& )contentsSize2, (QWidget* )widget3);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QStyle_standardPalette_const_dispatch, (void *dId))
QPalette  QMotifStyle_QtDShell::standardPalette() const
{
    QPalette *__qt_return_value = (QPalette*) qtd_QStyle_standardPalette_const_dispatch(QObjectLink::getLink(this)->dId);
    return QPalette(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, int, QStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const_dispatch, (void *dId, int hint0, void* opt1, void* widget2, void* returnData3))
int  QMotifStyle_QtDShell::styleHint(QStyle::StyleHint  hint0, const QStyleOption*  opt1, const QWidget*  widget2, QStyleHintReturn*  returnData3) const
{
    return qtd_QStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const_dispatch(QObjectLink::getLink(this)->dId, (QStyle::StyleHint )hint0, (QStyleOption* )opt1, (QWidget* )widget2, (QStyleHintReturn* )returnData3);
}

QTD_FUNC_DECL(GUI, void, QStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const_dispatch, (void *dId, QRect *__d_return_value, int cc0, void* opt1, int sc2, void* widget3))
QRect  QMotifStyle_QtDShell::subControlRect(QStyle::ComplexControl  cc0, const QStyleOptionComplex*  opt1, QStyle::SubControl  sc2, const QWidget*  widget3) const
{
    QRect __d_return_value;
    qtd_QStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (QStyle::ComplexControl )cc0, (QStyleOptionComplex* )opt1, (QStyle::SubControl )sc2, (QWidget* )widget3);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const_dispatch, (void *dId, QRect *__d_return_value, int r0, void* opt1, void* widget2))
QRect  QMotifStyle_QtDShell::subElementRect(QStyle::SubElement  r0, const QStyleOption*  opt1, const QWidget*  widget2) const
{
    QRect __d_return_value;
    qtd_QStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (QStyle::SubElement )r0, (QStyleOption* )opt1, (QWidget* )widget2);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* event0))
void QMotifStyle_QtDShell::timerEvent(QTimerEvent*  event0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QStyle_unpolish_QApplication_dispatch, (void *dId, void* arg__1))
void QMotifStyle_QtDShell::unpolish(QApplication*  arg__1)
{
    qtd_QStyle_unpolish_QApplication_dispatch(QObjectLink::getLink(this)->dId, (QApplication* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QStyle_unpolish_QWidget_dispatch, (void *dId, void* arg__1))
void QMotifStyle_QtDShell::unpolish(QWidget*  arg__1)
{
    qtd_QStyle_unpolish_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QStyle_layoutSpacingImplementation_ControlType_ControlType_Orientation_nativepointerQStyleOption_QWidget_const_dispatch, (void *dId, int control10, int control21, int orientation2, void* option3, void* widget4))
int  QMotifStyle_QtDShell::layoutSpacingImplementation(QSizePolicy::ControlType  control10, QSizePolicy::ControlType  control21, Qt::Orientation  orientation2, const QStyleOption*  option3, const QWidget*  widget4) const
{
    return qtd_QStyle_layoutSpacingImplementation_ControlType_ControlType_Orientation_nativepointerQStyleOption_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QSizePolicy::ControlType )control10, (QSizePolicy::ControlType )control21, (Qt::Orientation )orientation2, (QStyleOption* )option3, (QWidget* )widget4);
}

QTD_FUNC_DECL(GUI, void*, QStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const_dispatch, (void *dId, int standardIcon0, void* opt1, void* widget2))
QIcon  QMotifStyle_QtDShell::standardIconImplementation(QStyle::StandardPixmap  standardIcon0, const QStyleOption*  opt1, const QWidget*  widget2) const
{
    QIcon *__qt_return_value = (QIcon*) qtd_QStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QStyle::StandardPixmap )standardIcon0, (QStyleOption* )opt1, (QWidget* )widget2);
    return QIcon(*__qt_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QMotifStyle_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
int  QMotifStyle_QtDShell::__public_layoutSpacingImplementation(int  control10, int  control21, int  orientation2, const QStyleOption*  option3, const QWidget*  widget4) const
{
    return QStyle::layoutSpacingImplementation((QSizePolicy::ControlType )control10, (QSizePolicy::ControlType )control21, (Qt::Orientation )orientation2, (const QStyleOption* )option3, (const QWidget* )widget4);
}

QObject*  QMotifStyle_QtDShell::__public_sender() const
{
    return QObject::sender();
}

QIcon  QMotifStyle_QtDShell::__public_standardIconImplementation(int  standardIcon0, const QStyleOption*  opt1, const QWidget*  widget2) const
{
    return QMotifStyle::standardIconImplementation((QStyle::StandardPixmap )standardIcon0, (const QStyleOption* )opt1, (const QWidget* )widget2);
}

// Write virtual function overries used to decide on static/virtual calls
void QMotifStyle_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QMotifStyle_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

void QMotifStyle_QtDShell::__override_drawComplexControl(int  cc0, const QStyleOptionComplex*  opt1, QPainter*  p2, const QWidget*  w3, bool static_call) const
{
    if (static_call) {
        QMotifStyle::drawComplexControl((QStyle::ComplexControl )cc0, (const QStyleOptionComplex* )opt1, (QPainter* )p2, (const QWidget* )w3);
    } else {
        drawComplexControl((QStyle::ComplexControl )cc0, (const QStyleOptionComplex* )opt1, (QPainter* )p2, (const QWidget* )w3);
    }
}

void QMotifStyle_QtDShell::__override_drawControl(int  element0, const QStyleOption*  opt1, QPainter*  p2, const QWidget*  w3, bool static_call) const
{
    if (static_call) {
        QMotifStyle::drawControl((QStyle::ControlElement )element0, (const QStyleOption* )opt1, (QPainter* )p2, (const QWidget* )w3);
    } else {
        drawControl((QStyle::ControlElement )element0, (const QStyleOption* )opt1, (QPainter* )p2, (const QWidget* )w3);
    }
}

void QMotifStyle_QtDShell::__override_drawItemPixmap(QPainter*  painter0, const QRect&  rect1, int  alignment2, const QPixmap&  pixmap3, bool static_call) const
{
    if (static_call) {
        QStyle::drawItemPixmap((QPainter* )painter0, (const QRect& )rect1, (int )alignment2, (const QPixmap& )pixmap3);
    } else {
        drawItemPixmap((QPainter* )painter0, (const QRect& )rect1, (int )alignment2, (const QPixmap& )pixmap3);
    }
}

void QMotifStyle_QtDShell::__override_drawItemText(QPainter*  painter0, const QRect&  rect1, int  flags2, const QPalette&  pal3, bool  enabled4, const QString&  text5, int  textRole6, bool static_call) const
{
    if (static_call) {
        QStyle::drawItemText((QPainter* )painter0, (const QRect& )rect1, (int )flags2, (const QPalette& )pal3, (bool )enabled4, (const QString& )text5, (QPalette::ColorRole )textRole6);
    } else {
        drawItemText((QPainter* )painter0, (const QRect& )rect1, (int )flags2, (const QPalette& )pal3, (bool )enabled4, (const QString& )text5, (QPalette::ColorRole )textRole6);
    }
}

void QMotifStyle_QtDShell::__override_drawPrimitive(int  pe0, const QStyleOption*  opt1, QPainter*  p2, const QWidget*  w3, bool static_call) const
{
    if (static_call) {
        QMotifStyle::drawPrimitive((QStyle::PrimitiveElement )pe0, (const QStyleOption* )opt1, (QPainter* )p2, (const QWidget* )w3);
    } else {
        drawPrimitive((QStyle::PrimitiveElement )pe0, (const QStyleOption* )opt1, (QPainter* )p2, (const QWidget* )w3);
    }
}

bool  QMotifStyle_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QMotifStyle::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QMotifStyle_QtDShell::__override_eventFilter(QObject*  o0, QEvent*  e1, bool static_call)
{
    if (static_call) {
        return QMotifStyle::eventFilter((QObject* )o0, (QEvent* )e1);
    } else {
        return eventFilter((QObject* )o0, (QEvent* )e1);
    }
}

QPixmap  QMotifStyle_QtDShell::__override_generatedIconPixmap(int  iconMode0, const QPixmap&  pixmap1, const QStyleOption*  opt2, bool static_call) const
{
    if (static_call) {
        return QCommonStyle::generatedIconPixmap((QIcon::Mode )iconMode0, (const QPixmap& )pixmap1, (const QStyleOption* )opt2);
    } else {
        return generatedIconPixmap((QIcon::Mode )iconMode0, (const QPixmap& )pixmap1, (const QStyleOption* )opt2);
    }
}

int  QMotifStyle_QtDShell::__override_hitTestComplexControl(int  cc0, const QStyleOptionComplex*  opt1, const QPoint&  pt2, const QWidget*  w3, bool static_call) const
{
    if (static_call) {
        return QCommonStyle::hitTestComplexControl((QStyle::ComplexControl )cc0, (const QStyleOptionComplex* )opt1, (const QPoint& )pt2, (const QWidget* )w3);
    } else {
        return hitTestComplexControl((QStyle::ComplexControl )cc0, (const QStyleOptionComplex* )opt1, (const QPoint& )pt2, (const QWidget* )w3);
    }
}

QRect  QMotifStyle_QtDShell::__override_itemPixmapRect(const QRect&  r0, int  flags1, const QPixmap&  pixmap2, bool static_call) const
{
    if (static_call) {
        return QStyle::itemPixmapRect((const QRect& )r0, (int )flags1, (const QPixmap& )pixmap2);
    } else {
        return itemPixmapRect((const QRect& )r0, (int )flags1, (const QPixmap& )pixmap2);
    }
}

QRect  QMotifStyle_QtDShell::__override_itemTextRect(const QFontMetrics&  fm0, const QRect&  r1, int  flags2, bool  enabled3, const QString&  text4, bool static_call) const
{
    if (static_call) {
        return QStyle::itemTextRect((const QFontMetrics& )fm0, (const QRect& )r1, (int )flags2, (bool )enabled3, (const QString& )text4);
    } else {
        return itemTextRect((const QFontMetrics& )fm0, (const QRect& )r1, (int )flags2, (bool )enabled3, (const QString& )text4);
    }
}

int  QMotifStyle_QtDShell::__override_pixelMetric(int  metric0, const QStyleOption*  option1, const QWidget*  widget2, bool static_call) const
{
    if (static_call) {
        return QMotifStyle::pixelMetric((QStyle::PixelMetric )metric0, (const QStyleOption* )option1, (const QWidget* )widget2);
    } else {
        return pixelMetric((QStyle::PixelMetric )metric0, (const QStyleOption* )option1, (const QWidget* )widget2);
    }
}

void QMotifStyle_QtDShell::__override_polish(QApplication*  arg__1, bool static_call)
{
    if (static_call) {
        QMotifStyle::polish((QApplication* )arg__1);
    } else {
        polish((QApplication* )arg__1);
    }
}

void QMotifStyle_QtDShell::__override_polish(QPalette&  arg__1, bool static_call)
{
    if (static_call) {
        QMotifStyle::polish((QPalette& )arg__1);
    } else {
        polish((QPalette& )arg__1);
    }
}

void QMotifStyle_QtDShell::__override_polish(QWidget*  arg__1, bool static_call)
{
    if (static_call) {
        QMotifStyle::polish((QWidget* )arg__1);
    } else {
        polish((QWidget* )arg__1);
    }
}

QSize  QMotifStyle_QtDShell::__override_sizeFromContents(int  ct0, const QStyleOption*  opt1, const QSize&  contentsSize2, const QWidget*  widget3, bool static_call) const
{
    if (static_call) {
        return QMotifStyle::sizeFromContents((QStyle::ContentsType )ct0, (const QStyleOption* )opt1, (const QSize& )contentsSize2, (const QWidget* )widget3);
    } else {
        return sizeFromContents((QStyle::ContentsType )ct0, (const QStyleOption* )opt1, (const QSize& )contentsSize2, (const QWidget* )widget3);
    }
}

QPalette  QMotifStyle_QtDShell::__override_standardPalette(bool static_call) const
{
    if (static_call) {
        return QMotifStyle::standardPalette();
    } else {
        return standardPalette();
    }
}

int  QMotifStyle_QtDShell::__override_styleHint(int  hint0, const QStyleOption*  opt1, const QWidget*  widget2, QStyleHintReturn*  returnData3, bool static_call) const
{
    if (static_call) {
        return QMotifStyle::styleHint((QStyle::StyleHint )hint0, (const QStyleOption* )opt1, (const QWidget* )widget2, (QStyleHintReturn* )returnData3);
    } else {
        return styleHint((QStyle::StyleHint )hint0, (const QStyleOption* )opt1, (const QWidget* )widget2, (QStyleHintReturn* )returnData3);
    }
}

QRect  QMotifStyle_QtDShell::__override_subControlRect(int  cc0, const QStyleOptionComplex*  opt1, int  sc2, const QWidget*  widget3, bool static_call) const
{
    if (static_call) {
        return QMotifStyle::subControlRect((QStyle::ComplexControl )cc0, (const QStyleOptionComplex* )opt1, (QStyle::SubControl )sc2, (const QWidget* )widget3);
    } else {
        return subControlRect((QStyle::ComplexControl )cc0, (const QStyleOptionComplex* )opt1, (QStyle::SubControl )sc2, (const QWidget* )widget3);
    }
}

QRect  QMotifStyle_QtDShell::__override_subElementRect(int  r0, const QStyleOption*  opt1, const QWidget*  widget2, bool static_call) const
{
    if (static_call) {
        return QMotifStyle::subElementRect((QStyle::SubElement )r0, (const QStyleOption* )opt1, (const QWidget* )widget2);
    } else {
        return subElementRect((QStyle::SubElement )r0, (const QStyleOption* )opt1, (const QWidget* )widget2);
    }
}

void QMotifStyle_QtDShell::__override_timerEvent(QTimerEvent*  event0, bool static_call)
{
    if (static_call) {
        QMotifStyle::timerEvent((QTimerEvent* )event0);
    } else {
        timerEvent((QTimerEvent* )event0);
    }
}

void QMotifStyle_QtDShell::__override_unpolish(QApplication*  arg__1, bool static_call)
{
    if (static_call) {
        QMotifStyle::unpolish((QApplication* )arg__1);
    } else {
        unpolish((QApplication* )arg__1);
    }
}

void QMotifStyle_QtDShell::__override_unpolish(QWidget*  arg__1, bool static_call)
{
    if (static_call) {
        QMotifStyle::unpolish((QWidget* )arg__1);
    } else {
        unpolish((QWidget* )arg__1);
    }
}

// ---externC---
// QMotifStyle::QMotifStyle(bool useHighlightCols)
QTD_EXTERN QTD_EXPORT void* qtd_QMotifStyle_QMotifStyle_bool
(void *d_ptr,
 bool useHighlightCols0)
{
    QMotifStyle_QtDShell *__qt_this = new QMotifStyle_QtDShell(d_ptr, (bool )useHighlightCols0);
    return (void *) __qt_this;

}

// QMotifStyle::setUseHighlightColors(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMotifStyle_setUseHighlightColors_bool
(void* __this_nativeId,
 bool arg__1)
{
    QMotifStyle_QtDShell *__qt_this = (QMotifStyle_QtDShell *) __this_nativeId;
    __qt_this->setUseHighlightColors((bool )arg__1);

}

// QMotifStyle::standardIconImplementation(QStyle::StandardPixmap standardIcon, const QStyleOption * opt, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT void* qtd_QMotifStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const
(void* __this_nativeId,
 int standardIcon0,
 void* opt1,
 void* widget2)
{
    QStyle::StandardPixmap __qt_standardIcon0 = (QStyle::StandardPixmap) standardIcon0;
    const QStyleOption*  __qt_opt1 = (const QStyleOption* ) opt1;
    const QWidget*  __qt_widget2 = (const QWidget* ) widget2;
    QMotifStyle_QtDShell *__qt_this = (QMotifStyle_QtDShell *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->__public_standardIconImplementation((QStyle::StandardPixmap )__qt_standardIcon0, (const QStyleOption* )__qt_opt1, (const QWidget* )__qt_widget2);

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QMotifStyle::useHighlightColors() const
QTD_EXTERN QTD_EXPORT bool qtd_QMotifStyle_useHighlightColors_const
(void* __this_nativeId)
{
    QMotifStyle_QtDShell *__qt_this = (QMotifStyle_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->useHighlightColors();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMotifStyle::drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QPainter * p, const QWidget * w) const
QTD_EXTERN QTD_EXPORT void qtd_QMotifStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const
(void* __this_nativeId,
 int cc0,
 void* opt1,
 void* p2,
 void* w3)
{
    QStyle::ComplexControl __qt_cc0 = (QStyle::ComplexControl) cc0;
    const QStyleOptionComplex*  __qt_opt1 = (const QStyleOptionComplex* ) opt1;
    QPainter*  __qt_p2 = (QPainter* ) p2;
    const QWidget*  __qt_w3 = (const QWidget* ) w3;
    QMotifStyle_QtDShell *__qt_this = (QMotifStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawComplexControl((QStyle::ComplexControl )__qt_cc0, (const QStyleOptionComplex* )__qt_opt1, (QPainter* )__qt_p2, (const QWidget* )__qt_w3, __do_static_call);

}

// QMotifStyle::drawControl(QStyle::ControlElement element, const QStyleOption * opt, QPainter * p, const QWidget * w) const
QTD_EXTERN QTD_EXPORT void qtd_QMotifStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const
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
    QMotifStyle_QtDShell *__qt_this = (QMotifStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawControl((QStyle::ControlElement )__qt_element0, (const QStyleOption* )__qt_opt1, (QPainter* )__qt_p2, (const QWidget* )__qt_w3, __do_static_call);

}

// QMotifStyle::drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption * opt, QPainter * p, const QWidget * w) const
QTD_EXTERN QTD_EXPORT void qtd_QMotifStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const
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
    QMotifStyle_QtDShell *__qt_this = (QMotifStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawPrimitive((QStyle::PrimitiveElement )__qt_pe0, (const QStyleOption* )__qt_opt1, (QPainter* )__qt_p2, (const QWidget* )__qt_w3, __do_static_call);

}

// QMotifStyle::event(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QMotifStyle_event_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QMotifStyle_QtDShell *__qt_this = (QMotifStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMotifStyle::eventFilter(QObject * o, QEvent * e)
QTD_EXTERN QTD_EXPORT bool qtd_QMotifStyle_eventFilter_QObject_QEvent
(void* __this_nativeId,
 void* o0,
 void* e1)
{
    QObject*  __qt_o0 = (QObject* ) o0;
    QEvent*  __qt_e1 = (QEvent* ) e1;
    QMotifStyle_QtDShell *__qt_this = (QMotifStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_eventFilter((QObject* )__qt_o0, (QEvent* )__qt_e1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMotifStyle::pixelMetric(QStyle::PixelMetric metric, const QStyleOption * option, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT int qtd_QMotifStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const
(void* __this_nativeId,
 int metric0,
 void* option1,
 void* widget2)
{
    QStyle::PixelMetric __qt_metric0 = (QStyle::PixelMetric) metric0;
    const QStyleOption*  __qt_option1 = (const QStyleOption* ) option1;
    const QWidget*  __qt_widget2 = (const QWidget* ) widget2;
    QMotifStyle_QtDShell *__qt_this = (QMotifStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_pixelMetric((QStyle::PixelMetric )__qt_metric0, (const QStyleOption* )__qt_option1, (const QWidget* )__qt_widget2, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMotifStyle::polish(QApplication * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMotifStyle_polish_QApplication
(void* __this_nativeId,
 void* arg__1)
{
    QApplication*  __qt_arg__1 = (QApplication* ) arg__1;
    QMotifStyle_QtDShell *__qt_this = (QMotifStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_polish((QApplication* )__qt_arg__1, __do_static_call);

}

// QMotifStyle::polish(QPalette & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMotifStyle_polish_nativepointerQPalette
(void* __this_nativeId,
 void* arg__1)
{
    QPalette&  __qt_arg__1 = (QPalette& ) * (QPalette *) arg__1;
    QMotifStyle_QtDShell *__qt_this = (QMotifStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_polish((QPalette& )__qt_arg__1, __do_static_call);

}

// QMotifStyle::polish(QWidget * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMotifStyle_polish_QWidget
(void* __this_nativeId,
 void* arg__1)
{
    QWidget*  __qt_arg__1 = (QWidget* ) arg__1;
    QMotifStyle_QtDShell *__qt_this = (QMotifStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_polish((QWidget* )__qt_arg__1, __do_static_call);

}

// QMotifStyle::sizeFromContents(QStyle::ContentsType ct, const QStyleOption * opt, const QSize & contentsSize, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT void qtd_QMotifStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const
(void* __this_nativeId,
 QSize * __d_return_value,
 int ct0,
 void* opt1,
 QSize contentsSize2,
 void* widget3)
{
    QStyle::ContentsType __qt_ct0 = (QStyle::ContentsType) ct0;
    const QStyleOption*  __qt_opt1 = (const QStyleOption* ) opt1;
    const QWidget*  __qt_widget3 = (const QWidget* ) widget3;
    QMotifStyle_QtDShell *__qt_this = (QMotifStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeFromContents((QStyle::ContentsType )__qt_ct0, (const QStyleOption* )__qt_opt1, (const QSize& )contentsSize2, (const QWidget* )__qt_widget3, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QMotifStyle::standardPalette() const
QTD_EXTERN QTD_EXPORT void* qtd_QMotifStyle_standardPalette_const
(void* __this_nativeId)
{
    QMotifStyle_QtDShell *__qt_this = (QMotifStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QPalette  __qt_return_value = __qt_this->__override_standardPalette(__do_static_call);

    void* __d_return_value = (void*) new QPalette(__qt_return_value);

    return __d_return_value;
}

// QMotifStyle::styleHint(QStyle::StyleHint hint, const QStyleOption * opt, const QWidget * widget, QStyleHintReturn * returnData) const
QTD_EXTERN QTD_EXPORT int qtd_QMotifStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const
(void* __this_nativeId,
 int hint0,
 void* opt1,
 void* widget2,
 void* returnData3)
{
    QStyle::StyleHint __qt_hint0 = (QStyle::StyleHint) hint0;
    const QStyleOption*  __qt_opt1 = (const QStyleOption* ) opt1;
    const QWidget*  __qt_widget2 = (const QWidget* ) widget2;
    QStyleHintReturn*  __qt_returnData3 = (QStyleHintReturn* ) returnData3;
    QMotifStyle_QtDShell *__qt_this = (QMotifStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_styleHint((QStyle::StyleHint )__qt_hint0, (const QStyleOption* )__qt_opt1, (const QWidget* )__qt_widget2, (QStyleHintReturn* )__qt_returnData3, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMotifStyle::subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT void qtd_QMotifStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const
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
    QMotifStyle_QtDShell *__qt_this = (QMotifStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_subControlRect((QStyle::ComplexControl )__qt_cc0, (const QStyleOptionComplex* )__qt_opt1, (QStyle::SubControl )__qt_sc2, (const QWidget* )__qt_widget3, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QMotifStyle::subElementRect(QStyle::SubElement r, const QStyleOption * opt, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT void qtd_QMotifStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const
(void* __this_nativeId,
 QRect * __d_return_value,
 int r0,
 void* opt1,
 void* widget2)
{
    QStyle::SubElement __qt_r0 = (QStyle::SubElement) r0;
    const QStyleOption*  __qt_opt1 = (const QStyleOption* ) opt1;
    const QWidget*  __qt_widget2 = (const QWidget* ) widget2;
    QMotifStyle_QtDShell *__qt_this = (QMotifStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_subElementRect((QStyle::SubElement )__qt_r0, (const QStyleOption* )__qt_opt1, (const QWidget* )__qt_widget2, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QMotifStyle::timerEvent(QTimerEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QMotifStyle_timerEvent_QTimerEvent
(void* __this_nativeId,
 void* event0)
{
    QTimerEvent*  __qt_event0 = (QTimerEvent* ) event0;
    QMotifStyle_QtDShell *__qt_this = (QMotifStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_timerEvent((QTimerEvent* )__qt_event0, __do_static_call);

}

// QMotifStyle::unpolish(QApplication * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMotifStyle_unpolish_QApplication
(void* __this_nativeId,
 void* arg__1)
{
    QApplication*  __qt_arg__1 = (QApplication* ) arg__1;
    QMotifStyle_QtDShell *__qt_this = (QMotifStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_unpolish((QApplication* )__qt_arg__1, __do_static_call);

}

// QMotifStyle::unpolish(QWidget * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMotifStyle_unpolish_QWidget
(void* __this_nativeId,
 void* arg__1)
{
    QWidget*  __qt_arg__1 = (QWidget* ) arg__1;
    QMotifStyle_QtDShell *__qt_this = (QMotifStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_unpolish((QWidget* )__qt_arg__1, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QMotifStyle_staticMetaObject() {
    return (void*)&QMotifStyle::staticMetaObject;
}


