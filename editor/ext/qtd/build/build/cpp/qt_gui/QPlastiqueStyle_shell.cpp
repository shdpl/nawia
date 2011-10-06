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
#include <qplastiquestyle.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QPlastiqueStyle_shell.h"
#include <iostream>
#include <qplastiquestyle.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QPlastiqueStyleEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QPlastiqueStyleEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QPlastiqueStyle_createEntity(void *nativeId, void* dId)
{
    new QPlastiqueStyleEntity((QObject*)nativeId, dId);
}

QPlastiqueStyle_QtDShell::QPlastiqueStyle_QtDShell(void *d_ptr)
    : QPlastiqueStyle(),
      QObjectLink(this, d_ptr)
{
}

QPlastiqueStyle_QtDShell::~QPlastiqueStyle_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QPlastiqueStyle_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QPlastiqueStyle::metaObject();
}

int QPlastiqueStyle_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QPlastiqueStyle::qt_metacall(_c, _id, _a);
}

int QPlastiqueStyle_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QPlastiqueStyle::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QPlastiqueStyle_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QPlastiqueStyle_QtDShell *__qt_this = (QPlastiqueStyle_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QPlastiqueStyle_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QPlastiqueStyle_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const_dispatch, (void *dId, int control0, void* option1, void* painter2, void* widget3))
void QPlastiqueStyle_QtDShell::drawComplexControl(QStyle::ComplexControl  control0, const QStyleOptionComplex*  option1, QPainter*  painter2, const QWidget*  widget3) const
{
    qtd_QStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QStyle::ComplexControl )control0, (QStyleOptionComplex* )option1, (QPainter* )painter2, (QWidget* )widget3);
}

QTD_FUNC_DECL(GUI, void, QStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch, (void *dId, int element0, void* option1, void* painter2, void* widget3))
void QPlastiqueStyle_QtDShell::drawControl(QStyle::ControlElement  element0, const QStyleOption*  option1, QPainter*  painter2, const QWidget*  widget3) const
{
    qtd_QStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QStyle::ControlElement )element0, (QStyleOption* )option1, (QPainter* )painter2, (QWidget* )widget3);
}

QTD_FUNC_DECL(GUI, void, QStyle_drawItemPixmap_QPainter_QRect_int_QPixmap_const_dispatch, (void *dId, void* painter0, QRect* rect1, int alignment2, void* pixmap3))
void QPlastiqueStyle_QtDShell::drawItemPixmap(QPainter*  painter0, const QRect&  rect1, int  alignment2, const QPixmap&  pixmap3) const
{
    qtd_QStyle_drawItemPixmap_QPainter_QRect_int_QPixmap_const_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QRect& )rect1, (int )alignment2, &(QPixmap& )pixmap3);
}

QTD_FUNC_DECL(GUI, void, QStyle_drawItemText_QPainter_QRect_int_QPalette_bool_string_ColorRole_const_dispatch, (void *dId, void* painter0, QRect* rect1, int flags2, void* pal3, bool enabled4, const unsigned short* text5, int text5_size, int textRole6))
void QPlastiqueStyle_QtDShell::drawItemText(QPainter*  painter0, const QRect&  rect1, int  flags2, const QPalette&  pal3, bool  enabled4, const QString&  text5, QPalette::ColorRole  textRole6) const
{
    qtd_QStyle_drawItemText_QPainter_QRect_int_QPalette_bool_string_ColorRole_const_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QRect& )rect1, (int )flags2, &(QPalette& )pal3, (bool )enabled4, text5.utf16(), text5.size(), (QPalette::ColorRole )textRole6);
}

QTD_FUNC_DECL(GUI, void, QStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch, (void *dId, int element0, void* option1, void* painter2, void* widget3))
void QPlastiqueStyle_QtDShell::drawPrimitive(QStyle::PrimitiveElement  element0, const QStyleOption*  option1, QPainter*  painter2, const QWidget*  widget3) const
{
    qtd_QStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QStyle::PrimitiveElement )element0, (QStyleOption* )option1, (QPainter* )painter2, (QWidget* )widget3);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QPlastiqueStyle_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* watched0, void* event1))
bool  QPlastiqueStyle_QtDShell::eventFilter(QObject*  watched0, QEvent*  event1)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )watched0, (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void*, QStyle_generatedIconPixmap_Mode_QPixmap_nativepointerQStyleOption_const_dispatch, (void *dId, int iconMode0, void* pixmap1, void* opt2))
QPixmap  QPlastiqueStyle_QtDShell::generatedIconPixmap(QIcon::Mode  iconMode0, const QPixmap&  pixmap1, const QStyleOption*  opt2) const
{
    QPixmap *__qt_return_value = (QPixmap*) qtd_QStyle_generatedIconPixmap_Mode_QPixmap_nativepointerQStyleOption_const_dispatch(QObjectLink::getLink(this)->dId, (QIcon::Mode )iconMode0, &(QPixmap& )pixmap1, (QStyleOption* )opt2);
    return QPixmap(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, int, QStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const_dispatch, (void *dId, int control0, void* option1, QPoint* pos2, void* widget3))
QStyle::SubControl  QPlastiqueStyle_QtDShell::hitTestComplexControl(QStyle::ComplexControl  control0, const QStyleOptionComplex*  option1, const QPoint&  pos2, const QWidget*  widget3) const
{
    return (QStyle::SubControl) qtd_QStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QStyle::ComplexControl )control0, (QStyleOptionComplex* )option1, &(QPoint& )pos2, (QWidget* )widget3);
}

QTD_FUNC_DECL(GUI, void, QStyle_itemPixmapRect_QRect_int_QPixmap_const_dispatch, (void *dId, QRect *__d_return_value, QRect* r0, int flags1, void* pixmap2))
QRect  QPlastiqueStyle_QtDShell::itemPixmapRect(const QRect&  r0, int  flags1, const QPixmap&  pixmap2) const
{
    QRect __d_return_value;
    qtd_QStyle_itemPixmapRect_QRect_int_QPixmap_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &(QRect& )r0, (int )flags1, &(QPixmap& )pixmap2);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QStyle_itemTextRect_QFontMetrics_QRect_int_bool_string_const_dispatch, (void *dId, QRect *__d_return_value, void* fm0, QRect* r1, int flags2, bool enabled3, const unsigned short* text4, int text4_size))
QRect  QPlastiqueStyle_QtDShell::itemTextRect(const QFontMetrics&  fm0, const QRect&  r1, int  flags2, bool  enabled3, const QString&  text4) const
{
    QRect __d_return_value;
    qtd_QStyle_itemTextRect_QFontMetrics_QRect_int_bool_string_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &(QFontMetrics& )fm0, &(QRect& )r1, (int )flags2, (bool )enabled3, text4.utf16(), text4.size());
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const_dispatch, (void *dId, int metric0, void* option1, void* widget2))
int  QPlastiqueStyle_QtDShell::pixelMetric(QStyle::PixelMetric  metric0, const QStyleOption*  option1, const QWidget*  widget2) const
{
    return qtd_QStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QStyle::PixelMetric )metric0, (QStyleOption* )option1, (QWidget* )widget2);
}

QTD_FUNC_DECL(GUI, void, QStyle_polish_QApplication_dispatch, (void *dId, void* app0))
void QPlastiqueStyle_QtDShell::polish(QApplication*  app0)
{
    qtd_QStyle_polish_QApplication_dispatch(QObjectLink::getLink(this)->dId, (QApplication* )app0);
}

QTD_FUNC_DECL(GUI, void, QStyle_polish_nativepointerQPalette_dispatch, (void *dId, void* pal0))
void QPlastiqueStyle_QtDShell::polish(QPalette&  pal0)
{
    qtd_QStyle_polish_nativepointerQPalette_dispatch(QObjectLink::getLink(this)->dId, &(QPalette& )pal0);
}

QTD_FUNC_DECL(GUI, void, QStyle_polish_QWidget_dispatch, (void *dId, void* widget0))
void QPlastiqueStyle_QtDShell::polish(QWidget*  widget0)
{
    qtd_QStyle_polish_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )widget0);
}

QTD_FUNC_DECL(GUI, void, QStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const_dispatch, (void *dId, QSize *__d_return_value, int type0, void* option1, QSize* size2, void* widget3))
QSize  QPlastiqueStyle_QtDShell::sizeFromContents(QStyle::ContentsType  type0, const QStyleOption*  option1, const QSize&  size2, const QWidget*  widget3) const
{
    QSize __d_return_value;
    qtd_QStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (QStyle::ContentsType )type0, (QStyleOption* )option1, &(QSize& )size2, (QWidget* )widget3);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QStyle_standardPalette_const_dispatch, (void *dId))
QPalette  QPlastiqueStyle_QtDShell::standardPalette() const
{
    QPalette *__qt_return_value = (QPalette*) qtd_QStyle_standardPalette_const_dispatch(QObjectLink::getLink(this)->dId);
    return QPalette(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, int, QStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const_dispatch, (void *dId, int hint0, void* option1, void* widget2, void* returnData3))
int  QPlastiqueStyle_QtDShell::styleHint(QStyle::StyleHint  hint0, const QStyleOption*  option1, const QWidget*  widget2, QStyleHintReturn*  returnData3) const
{
    return qtd_QStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const_dispatch(QObjectLink::getLink(this)->dId, (QStyle::StyleHint )hint0, (QStyleOption* )option1, (QWidget* )widget2, (QStyleHintReturn* )returnData3);
}

QTD_FUNC_DECL(GUI, void, QStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const_dispatch, (void *dId, QRect *__d_return_value, int cc0, void* opt1, int sc2, void* widget3))
QRect  QPlastiqueStyle_QtDShell::subControlRect(QStyle::ComplexControl  cc0, const QStyleOptionComplex*  opt1, QStyle::SubControl  sc2, const QWidget*  widget3) const
{
    QRect __d_return_value;
    qtd_QStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (QStyle::ComplexControl )cc0, (QStyleOptionComplex* )opt1, (QStyle::SubControl )sc2, (QWidget* )widget3);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const_dispatch, (void *dId, QRect *__d_return_value, int element0, void* option1, void* widget2))
QRect  QPlastiqueStyle_QtDShell::subElementRect(QStyle::SubElement  element0, const QStyleOption*  option1, const QWidget*  widget2) const
{
    QRect __d_return_value;
    qtd_QStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (QStyle::SubElement )element0, (QStyleOption* )option1, (QWidget* )widget2);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* event0))
void QPlastiqueStyle_QtDShell::timerEvent(QTimerEvent*  event0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QStyle_unpolish_QApplication_dispatch, (void *dId, void* app0))
void QPlastiqueStyle_QtDShell::unpolish(QApplication*  app0)
{
    qtd_QStyle_unpolish_QApplication_dispatch(QObjectLink::getLink(this)->dId, (QApplication* )app0);
}

QTD_FUNC_DECL(GUI, void, QStyle_unpolish_QWidget_dispatch, (void *dId, void* widget0))
void QPlastiqueStyle_QtDShell::unpolish(QWidget*  widget0)
{
    qtd_QStyle_unpolish_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )widget0);
}

QTD_FUNC_DECL(GUI, int, QStyle_layoutSpacingImplementation_ControlType_ControlType_Orientation_nativepointerQStyleOption_QWidget_const_dispatch, (void *dId, int control10, int control21, int orientation2, void* option3, void* widget4))
int  QPlastiqueStyle_QtDShell::layoutSpacingImplementation(QSizePolicy::ControlType  control10, QSizePolicy::ControlType  control21, Qt::Orientation  orientation2, const QStyleOption*  option3, const QWidget*  widget4) const
{
    return qtd_QStyle_layoutSpacingImplementation_ControlType_ControlType_Orientation_nativepointerQStyleOption_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QSizePolicy::ControlType )control10, (QSizePolicy::ControlType )control21, (Qt::Orientation )orientation2, (QStyleOption* )option3, (QWidget* )widget4);
}

QTD_FUNC_DECL(GUI, void*, QStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const_dispatch, (void *dId, int standardIcon0, void* opt1, void* widget2))
QIcon  QPlastiqueStyle_QtDShell::standardIconImplementation(QStyle::StandardPixmap  standardIcon0, const QStyleOption*  opt1, const QWidget*  widget2) const
{
    QIcon *__qt_return_value = (QIcon*) qtd_QStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QStyle::StandardPixmap )standardIcon0, (QStyleOption* )opt1, (QWidget* )widget2);
    return QIcon(*__qt_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QPlastiqueStyle_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
int  QPlastiqueStyle_QtDShell::__public_layoutSpacingImplementation(int  control10, int  control21, int  orientation2, const QStyleOption*  option3, const QWidget*  widget4) const
{
    return QPlastiqueStyle::layoutSpacingImplementation((QSizePolicy::ControlType )control10, (QSizePolicy::ControlType )control21, (Qt::Orientation )orientation2, (const QStyleOption* )option3, (const QWidget* )widget4);
}

QObject*  QPlastiqueStyle_QtDShell::__public_sender() const
{
    return QObject::sender();
}

QIcon  QPlastiqueStyle_QtDShell::__public_standardIconImplementation(int  standardIcon0, const QStyleOption*  opt1, const QWidget*  widget2) const
{
    return QPlastiqueStyle::standardIconImplementation((QStyle::StandardPixmap )standardIcon0, (const QStyleOption* )opt1, (const QWidget* )widget2);
}

// Write virtual function overries used to decide on static/virtual calls
void QPlastiqueStyle_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QPlastiqueStyle_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

void QPlastiqueStyle_QtDShell::__override_drawComplexControl(int  control0, const QStyleOptionComplex*  option1, QPainter*  painter2, const QWidget*  widget3, bool static_call) const
{
    if (static_call) {
        QPlastiqueStyle::drawComplexControl((QStyle::ComplexControl )control0, (const QStyleOptionComplex* )option1, (QPainter* )painter2, (const QWidget* )widget3);
    } else {
        drawComplexControl((QStyle::ComplexControl )control0, (const QStyleOptionComplex* )option1, (QPainter* )painter2, (const QWidget* )widget3);
    }
}

void QPlastiqueStyle_QtDShell::__override_drawControl(int  element0, const QStyleOption*  option1, QPainter*  painter2, const QWidget*  widget3, bool static_call) const
{
    if (static_call) {
        QPlastiqueStyle::drawControl((QStyle::ControlElement )element0, (const QStyleOption* )option1, (QPainter* )painter2, (const QWidget* )widget3);
    } else {
        drawControl((QStyle::ControlElement )element0, (const QStyleOption* )option1, (QPainter* )painter2, (const QWidget* )widget3);
    }
}

void QPlastiqueStyle_QtDShell::__override_drawItemPixmap(QPainter*  painter0, const QRect&  rect1, int  alignment2, const QPixmap&  pixmap3, bool static_call) const
{
    if (static_call) {
        QStyle::drawItemPixmap((QPainter* )painter0, (const QRect& )rect1, (int )alignment2, (const QPixmap& )pixmap3);
    } else {
        drawItemPixmap((QPainter* )painter0, (const QRect& )rect1, (int )alignment2, (const QPixmap& )pixmap3);
    }
}

void QPlastiqueStyle_QtDShell::__override_drawItemText(QPainter*  painter0, const QRect&  rect1, int  flags2, const QPalette&  pal3, bool  enabled4, const QString&  text5, int  textRole6, bool static_call) const
{
    if (static_call) {
        QStyle::drawItemText((QPainter* )painter0, (const QRect& )rect1, (int )flags2, (const QPalette& )pal3, (bool )enabled4, (const QString& )text5, (QPalette::ColorRole )textRole6);
    } else {
        drawItemText((QPainter* )painter0, (const QRect& )rect1, (int )flags2, (const QPalette& )pal3, (bool )enabled4, (const QString& )text5, (QPalette::ColorRole )textRole6);
    }
}

void QPlastiqueStyle_QtDShell::__override_drawPrimitive(int  element0, const QStyleOption*  option1, QPainter*  painter2, const QWidget*  widget3, bool static_call) const
{
    if (static_call) {
        QPlastiqueStyle::drawPrimitive((QStyle::PrimitiveElement )element0, (const QStyleOption* )option1, (QPainter* )painter2, (const QWidget* )widget3);
    } else {
        drawPrimitive((QStyle::PrimitiveElement )element0, (const QStyleOption* )option1, (QPainter* )painter2, (const QWidget* )widget3);
    }
}

bool  QPlastiqueStyle_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QPlastiqueStyle_QtDShell::__override_eventFilter(QObject*  watched0, QEvent*  event1, bool static_call)
{
    if (static_call) {
        return QPlastiqueStyle::eventFilter((QObject* )watched0, (QEvent* )event1);
    } else {
        return eventFilter((QObject* )watched0, (QEvent* )event1);
    }
}

QPixmap  QPlastiqueStyle_QtDShell::__override_generatedIconPixmap(int  iconMode0, const QPixmap&  pixmap1, const QStyleOption*  opt2, bool static_call) const
{
    if (static_call) {
        return QCommonStyle::generatedIconPixmap((QIcon::Mode )iconMode0, (const QPixmap& )pixmap1, (const QStyleOption* )opt2);
    } else {
        return generatedIconPixmap((QIcon::Mode )iconMode0, (const QPixmap& )pixmap1, (const QStyleOption* )opt2);
    }
}

int  QPlastiqueStyle_QtDShell::__override_hitTestComplexControl(int  control0, const QStyleOptionComplex*  option1, const QPoint&  pos2, const QWidget*  widget3, bool static_call) const
{
    if (static_call) {
        return QPlastiqueStyle::hitTestComplexControl((QStyle::ComplexControl )control0, (const QStyleOptionComplex* )option1, (const QPoint& )pos2, (const QWidget* )widget3);
    } else {
        return hitTestComplexControl((QStyle::ComplexControl )control0, (const QStyleOptionComplex* )option1, (const QPoint& )pos2, (const QWidget* )widget3);
    }
}

QRect  QPlastiqueStyle_QtDShell::__override_itemPixmapRect(const QRect&  r0, int  flags1, const QPixmap&  pixmap2, bool static_call) const
{
    if (static_call) {
        return QStyle::itemPixmapRect((const QRect& )r0, (int )flags1, (const QPixmap& )pixmap2);
    } else {
        return itemPixmapRect((const QRect& )r0, (int )flags1, (const QPixmap& )pixmap2);
    }
}

QRect  QPlastiqueStyle_QtDShell::__override_itemTextRect(const QFontMetrics&  fm0, const QRect&  r1, int  flags2, bool  enabled3, const QString&  text4, bool static_call) const
{
    if (static_call) {
        return QStyle::itemTextRect((const QFontMetrics& )fm0, (const QRect& )r1, (int )flags2, (bool )enabled3, (const QString& )text4);
    } else {
        return itemTextRect((const QFontMetrics& )fm0, (const QRect& )r1, (int )flags2, (bool )enabled3, (const QString& )text4);
    }
}

int  QPlastiqueStyle_QtDShell::__override_pixelMetric(int  metric0, const QStyleOption*  option1, const QWidget*  widget2, bool static_call) const
{
    if (static_call) {
        return QPlastiqueStyle::pixelMetric((QStyle::PixelMetric )metric0, (const QStyleOption* )option1, (const QWidget* )widget2);
    } else {
        return pixelMetric((QStyle::PixelMetric )metric0, (const QStyleOption* )option1, (const QWidget* )widget2);
    }
}

void QPlastiqueStyle_QtDShell::__override_polish(QApplication*  app0, bool static_call)
{
    if (static_call) {
        QPlastiqueStyle::polish((QApplication* )app0);
    } else {
        polish((QApplication* )app0);
    }
}

void QPlastiqueStyle_QtDShell::__override_polish(QPalette&  pal0, bool static_call)
{
    if (static_call) {
        QPlastiqueStyle::polish((QPalette& )pal0);
    } else {
        polish((QPalette& )pal0);
    }
}

void QPlastiqueStyle_QtDShell::__override_polish(QWidget*  widget0, bool static_call)
{
    if (static_call) {
        QPlastiqueStyle::polish((QWidget* )widget0);
    } else {
        polish((QWidget* )widget0);
    }
}

QSize  QPlastiqueStyle_QtDShell::__override_sizeFromContents(int  type0, const QStyleOption*  option1, const QSize&  size2, const QWidget*  widget3, bool static_call) const
{
    if (static_call) {
        return QPlastiqueStyle::sizeFromContents((QStyle::ContentsType )type0, (const QStyleOption* )option1, (const QSize& )size2, (const QWidget* )widget3);
    } else {
        return sizeFromContents((QStyle::ContentsType )type0, (const QStyleOption* )option1, (const QSize& )size2, (const QWidget* )widget3);
    }
}

QPalette  QPlastiqueStyle_QtDShell::__override_standardPalette(bool static_call) const
{
    if (static_call) {
        return QPlastiqueStyle::standardPalette();
    } else {
        return standardPalette();
    }
}

int  QPlastiqueStyle_QtDShell::__override_styleHint(int  hint0, const QStyleOption*  option1, const QWidget*  widget2, QStyleHintReturn*  returnData3, bool static_call) const
{
    if (static_call) {
        return QPlastiqueStyle::styleHint((QStyle::StyleHint )hint0, (const QStyleOption* )option1, (const QWidget* )widget2, (QStyleHintReturn* )returnData3);
    } else {
        return styleHint((QStyle::StyleHint )hint0, (const QStyleOption* )option1, (const QWidget* )widget2, (QStyleHintReturn* )returnData3);
    }
}

QRect  QPlastiqueStyle_QtDShell::__override_subControlRect(int  cc0, const QStyleOptionComplex*  opt1, int  sc2, const QWidget*  widget3, bool static_call) const
{
    if (static_call) {
        return QPlastiqueStyle::subControlRect((QStyle::ComplexControl )cc0, (const QStyleOptionComplex* )opt1, (QStyle::SubControl )sc2, (const QWidget* )widget3);
    } else {
        return subControlRect((QStyle::ComplexControl )cc0, (const QStyleOptionComplex* )opt1, (QStyle::SubControl )sc2, (const QWidget* )widget3);
    }
}

QRect  QPlastiqueStyle_QtDShell::__override_subElementRect(int  element0, const QStyleOption*  option1, const QWidget*  widget2, bool static_call) const
{
    if (static_call) {
        return QPlastiqueStyle::subElementRect((QStyle::SubElement )element0, (const QStyleOption* )option1, (const QWidget* )widget2);
    } else {
        return subElementRect((QStyle::SubElement )element0, (const QStyleOption* )option1, (const QWidget* )widget2);
    }
}

void QPlastiqueStyle_QtDShell::__override_timerEvent(QTimerEvent*  event0, bool static_call)
{
    if (static_call) {
        QPlastiqueStyle::timerEvent((QTimerEvent* )event0);
    } else {
        timerEvent((QTimerEvent* )event0);
    }
}

void QPlastiqueStyle_QtDShell::__override_unpolish(QApplication*  app0, bool static_call)
{
    if (static_call) {
        QPlastiqueStyle::unpolish((QApplication* )app0);
    } else {
        unpolish((QApplication* )app0);
    }
}

void QPlastiqueStyle_QtDShell::__override_unpolish(QWidget*  widget0, bool static_call)
{
    if (static_call) {
        QPlastiqueStyle::unpolish((QWidget* )widget0);
    } else {
        unpolish((QWidget* )widget0);
    }
}

// ---externC---
// QPlastiqueStyle::QPlastiqueStyle()
QTD_EXTERN QTD_EXPORT void* qtd_QPlastiqueStyle_QPlastiqueStyle
(void *d_ptr)
{
    QPlastiqueStyle_QtDShell *__qt_this = new QPlastiqueStyle_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QPlastiqueStyle::layoutSpacingImplementation(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT int qtd_QPlastiqueStyle_layoutSpacingImplementation_ControlType_ControlType_Orientation_nativepointerQStyleOption_QWidget_const
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
    QPlastiqueStyle_QtDShell *__qt_this = (QPlastiqueStyle_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->__public_layoutSpacingImplementation((QSizePolicy::ControlType )__qt_control10, (QSizePolicy::ControlType )__qt_control21, (Qt::Orientation )__qt_orientation2, (const QStyleOption* )__qt_option3, (const QWidget* )__qt_widget4);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlastiqueStyle::standardIconImplementation(QStyle::StandardPixmap standardIcon, const QStyleOption * opt, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT void* qtd_QPlastiqueStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const
(void* __this_nativeId,
 int standardIcon0,
 void* opt1,
 void* widget2)
{
    QStyle::StandardPixmap __qt_standardIcon0 = (QStyle::StandardPixmap) standardIcon0;
    const QStyleOption*  __qt_opt1 = (const QStyleOption* ) opt1;
    const QWidget*  __qt_widget2 = (const QWidget* ) widget2;
    QPlastiqueStyle_QtDShell *__qt_this = (QPlastiqueStyle_QtDShell *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->__public_standardIconImplementation((QStyle::StandardPixmap )__qt_standardIcon0, (const QStyleOption* )__qt_opt1, (const QWidget* )__qt_widget2);

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QPlastiqueStyle::drawComplexControl(QStyle::ComplexControl control, const QStyleOptionComplex * option, QPainter * painter, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT void qtd_QPlastiqueStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const
(void* __this_nativeId,
 int control0,
 void* option1,
 void* painter2,
 void* widget3)
{
    QStyle::ComplexControl __qt_control0 = (QStyle::ComplexControl) control0;
    const QStyleOptionComplex*  __qt_option1 = (const QStyleOptionComplex* ) option1;
    QPainter*  __qt_painter2 = (QPainter* ) painter2;
    const QWidget*  __qt_widget3 = (const QWidget* ) widget3;
    QPlastiqueStyle_QtDShell *__qt_this = (QPlastiqueStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawComplexControl((QStyle::ComplexControl )__qt_control0, (const QStyleOptionComplex* )__qt_option1, (QPainter* )__qt_painter2, (const QWidget* )__qt_widget3, __do_static_call);

}

// QPlastiqueStyle::drawControl(QStyle::ControlElement element, const QStyleOption * option, QPainter * painter, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT void qtd_QPlastiqueStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const
(void* __this_nativeId,
 int element0,
 void* option1,
 void* painter2,
 void* widget3)
{
    QStyle::ControlElement __qt_element0 = (QStyle::ControlElement) element0;
    const QStyleOption*  __qt_option1 = (const QStyleOption* ) option1;
    QPainter*  __qt_painter2 = (QPainter* ) painter2;
    const QWidget*  __qt_widget3 = (const QWidget* ) widget3;
    QPlastiqueStyle_QtDShell *__qt_this = (QPlastiqueStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawControl((QStyle::ControlElement )__qt_element0, (const QStyleOption* )__qt_option1, (QPainter* )__qt_painter2, (const QWidget* )__qt_widget3, __do_static_call);

}

// QPlastiqueStyle::drawPrimitive(QStyle::PrimitiveElement element, const QStyleOption * option, QPainter * painter, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT void qtd_QPlastiqueStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const
(void* __this_nativeId,
 int element0,
 void* option1,
 void* painter2,
 void* widget3)
{
    QStyle::PrimitiveElement __qt_element0 = (QStyle::PrimitiveElement) element0;
    const QStyleOption*  __qt_option1 = (const QStyleOption* ) option1;
    QPainter*  __qt_painter2 = (QPainter* ) painter2;
    const QWidget*  __qt_widget3 = (const QWidget* ) widget3;
    QPlastiqueStyle_QtDShell *__qt_this = (QPlastiqueStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawPrimitive((QStyle::PrimitiveElement )__qt_element0, (const QStyleOption* )__qt_option1, (QPainter* )__qt_painter2, (const QWidget* )__qt_widget3, __do_static_call);

}

// QPlastiqueStyle::eventFilter(QObject * watched, QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QPlastiqueStyle_eventFilter_QObject_QEvent
(void* __this_nativeId,
 void* watched0,
 void* event1)
{
    QObject*  __qt_watched0 = (QObject* ) watched0;
    QEvent*  __qt_event1 = (QEvent* ) event1;
    QPlastiqueStyle_QtDShell *__qt_this = (QPlastiqueStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_eventFilter((QObject* )__qt_watched0, (QEvent* )__qt_event1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlastiqueStyle::hitTestComplexControl(QStyle::ComplexControl control, const QStyleOptionComplex * option, const QPoint & pos, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT int qtd_QPlastiqueStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const
(void* __this_nativeId,
 int control0,
 void* option1,
 QPoint pos2,
 void* widget3)
{
    QStyle::ComplexControl __qt_control0 = (QStyle::ComplexControl) control0;
    const QStyleOptionComplex*  __qt_option1 = (const QStyleOptionComplex* ) option1;
    const QWidget*  __qt_widget3 = (const QWidget* ) widget3;
    QPlastiqueStyle_QtDShell *__qt_this = (QPlastiqueStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_hitTestComplexControl((QStyle::ComplexControl )__qt_control0, (const QStyleOptionComplex* )__qt_option1, (const QPoint& )pos2, (const QWidget* )__qt_widget3, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlastiqueStyle::pixelMetric(QStyle::PixelMetric metric, const QStyleOption * option, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT int qtd_QPlastiqueStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const
(void* __this_nativeId,
 int metric0,
 void* option1,
 void* widget2)
{
    QStyle::PixelMetric __qt_metric0 = (QStyle::PixelMetric) metric0;
    const QStyleOption*  __qt_option1 = (const QStyleOption* ) option1;
    const QWidget*  __qt_widget2 = (const QWidget* ) widget2;
    QPlastiqueStyle_QtDShell *__qt_this = (QPlastiqueStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_pixelMetric((QStyle::PixelMetric )__qt_metric0, (const QStyleOption* )__qt_option1, (const QWidget* )__qt_widget2, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlastiqueStyle::polish(QApplication * app)
QTD_EXTERN QTD_EXPORT void qtd_QPlastiqueStyle_polish_QApplication
(void* __this_nativeId,
 void* app0)
{
    QApplication*  __qt_app0 = (QApplication* ) app0;
    QPlastiqueStyle_QtDShell *__qt_this = (QPlastiqueStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_polish((QApplication* )__qt_app0, __do_static_call);

}

// QPlastiqueStyle::polish(QPalette & pal)
QTD_EXTERN QTD_EXPORT void qtd_QPlastiqueStyle_polish_nativepointerQPalette
(void* __this_nativeId,
 void* pal0)
{
    QPalette&  __qt_pal0 = (QPalette& ) * (QPalette *) pal0;
    QPlastiqueStyle_QtDShell *__qt_this = (QPlastiqueStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_polish((QPalette& )__qt_pal0, __do_static_call);

}

// QPlastiqueStyle::polish(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QPlastiqueStyle_polish_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QPlastiqueStyle_QtDShell *__qt_this = (QPlastiqueStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_polish((QWidget* )__qt_widget0, __do_static_call);

}

// QPlastiqueStyle::sizeFromContents(QStyle::ContentsType type, const QStyleOption * option, const QSize & size, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT void qtd_QPlastiqueStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const
(void* __this_nativeId,
 QSize * __d_return_value,
 int type0,
 void* option1,
 QSize size2,
 void* widget3)
{
    QStyle::ContentsType __qt_type0 = (QStyle::ContentsType) type0;
    const QStyleOption*  __qt_option1 = (const QStyleOption* ) option1;
    const QWidget*  __qt_widget3 = (const QWidget* ) widget3;
    QPlastiqueStyle_QtDShell *__qt_this = (QPlastiqueStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeFromContents((QStyle::ContentsType )__qt_type0, (const QStyleOption* )__qt_option1, (const QSize& )size2, (const QWidget* )__qt_widget3, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QPlastiqueStyle::standardPalette() const
QTD_EXTERN QTD_EXPORT void* qtd_QPlastiqueStyle_standardPalette_const
(void* __this_nativeId)
{
    QPlastiqueStyle_QtDShell *__qt_this = (QPlastiqueStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QPalette  __qt_return_value = __qt_this->__override_standardPalette(__do_static_call);

    void* __d_return_value = (void*) new QPalette(__qt_return_value);

    return __d_return_value;
}

// QPlastiqueStyle::styleHint(QStyle::StyleHint hint, const QStyleOption * option, const QWidget * widget, QStyleHintReturn * returnData) const
QTD_EXTERN QTD_EXPORT int qtd_QPlastiqueStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const
(void* __this_nativeId,
 int hint0,
 void* option1,
 void* widget2,
 void* returnData3)
{
    QStyle::StyleHint __qt_hint0 = (QStyle::StyleHint) hint0;
    const QStyleOption*  __qt_option1 = (const QStyleOption* ) option1;
    const QWidget*  __qt_widget2 = (const QWidget* ) widget2;
    QStyleHintReturn*  __qt_returnData3 = (QStyleHintReturn* ) returnData3;
    QPlastiqueStyle_QtDShell *__qt_this = (QPlastiqueStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_styleHint((QStyle::StyleHint )__qt_hint0, (const QStyleOption* )__qt_option1, (const QWidget* )__qt_widget2, (QStyleHintReturn* )__qt_returnData3, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlastiqueStyle::subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT void qtd_QPlastiqueStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const
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
    QPlastiqueStyle_QtDShell *__qt_this = (QPlastiqueStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_subControlRect((QStyle::ComplexControl )__qt_cc0, (const QStyleOptionComplex* )__qt_opt1, (QStyle::SubControl )__qt_sc2, (const QWidget* )__qt_widget3, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QPlastiqueStyle::subElementRect(QStyle::SubElement element, const QStyleOption * option, const QWidget * widget) const
QTD_EXTERN QTD_EXPORT void qtd_QPlastiqueStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const
(void* __this_nativeId,
 QRect * __d_return_value,
 int element0,
 void* option1,
 void* widget2)
{
    QStyle::SubElement __qt_element0 = (QStyle::SubElement) element0;
    const QStyleOption*  __qt_option1 = (const QStyleOption* ) option1;
    const QWidget*  __qt_widget2 = (const QWidget* ) widget2;
    QPlastiqueStyle_QtDShell *__qt_this = (QPlastiqueStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_subElementRect((QStyle::SubElement )__qt_element0, (const QStyleOption* )__qt_option1, (const QWidget* )__qt_widget2, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QPlastiqueStyle::timerEvent(QTimerEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QPlastiqueStyle_timerEvent_QTimerEvent
(void* __this_nativeId,
 void* event0)
{
    QTimerEvent*  __qt_event0 = (QTimerEvent* ) event0;
    QPlastiqueStyle_QtDShell *__qt_this = (QPlastiqueStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_timerEvent((QTimerEvent* )__qt_event0, __do_static_call);

}

// QPlastiqueStyle::unpolish(QApplication * app)
QTD_EXTERN QTD_EXPORT void qtd_QPlastiqueStyle_unpolish_QApplication
(void* __this_nativeId,
 void* app0)
{
    QApplication*  __qt_app0 = (QApplication* ) app0;
    QPlastiqueStyle_QtDShell *__qt_this = (QPlastiqueStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_unpolish((QApplication* )__qt_app0, __do_static_call);

}

// QPlastiqueStyle::unpolish(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QPlastiqueStyle_unpolish_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QPlastiqueStyle_QtDShell *__qt_this = (QPlastiqueStyle_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_unpolish((QWidget* )__qt_widget0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QPlastiqueStyle_staticMetaObject() {
    return (void*)&QPlastiqueStyle::staticMetaObject;
}


