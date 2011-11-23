#ifndef QWINDOWSSTYLE_SHELL_H
#define QWINDOWSSTYLE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qwindowsstyle.h>

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
#include <qwindowsstyle.h>

class QWindowsStyle_QtDShell : public QWindowsStyle, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QWindowsStyle_QtDShell(void *d_ptr);
    ~QWindowsStyle_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    void drawComplexControl(QStyle::ComplexControl  cc0, const QStyleOptionComplex*  opt1, QPainter*  p2, const QWidget*  w3) const;
    void drawControl(QStyle::ControlElement  element0, const QStyleOption*  opt1, QPainter*  p2, const QWidget*  w3) const;
    void drawItemPixmap(QPainter*  painter0, const QRect&  rect1, int  alignment2, const QPixmap&  pixmap3) const;
    void drawItemText(QPainter*  painter0, const QRect&  rect1, int  flags2, const QPalette&  pal3, bool  enabled4, const QString&  text5, QPalette::ColorRole  textRole6) const;
    void drawPrimitive(QStyle::PrimitiveElement  pe0, const QStyleOption*  opt1, QPainter*  p2, const QWidget*  w3) const;
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  o0, QEvent*  e1);
    QPixmap  generatedIconPixmap(QIcon::Mode  iconMode0, const QPixmap&  pixmap1, const QStyleOption*  opt2) const;
    QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  cc0, const QStyleOptionComplex*  opt1, const QPoint&  pt2, const QWidget*  w3) const;
    QRect  itemPixmapRect(const QRect&  r0, int  flags1, const QPixmap&  pixmap2) const;
    QRect  itemTextRect(const QFontMetrics&  fm0, const QRect&  r1, int  flags2, bool  enabled3, const QString&  text4) const;
    int  pixelMetric(QStyle::PixelMetric  pm0, const QStyleOption*  option1, const QWidget*  widget2) const;
    void polish(QApplication*  arg__1);
    void polish(QPalette&  arg__1);
    void polish(QWidget*  arg__1);
    QSize  sizeFromContents(QStyle::ContentsType  ct0, const QStyleOption*  opt1, const QSize&  contentsSize2, const QWidget*  widget3) const;
    QPalette  standardPalette() const;
    int  styleHint(QStyle::StyleHint  hint0, const QStyleOption*  opt1, const QWidget*  widget2, QStyleHintReturn*  returnData3) const;
    QRect  subControlRect(QStyle::ComplexControl  cc0, const QStyleOptionComplex*  opt1, QStyle::SubControl  sc2, const QWidget*  w3) const;
    QRect  subElementRect(QStyle::SubElement  r0, const QStyleOption*  opt1, const QWidget*  widget2) const;
    void timerEvent(QTimerEvent*  event0);
    void unpolish(QApplication*  arg__1);
    void unpolish(QWidget*  arg__1);
    int  layoutSpacingImplementation(QSizePolicy::ControlType  control10, QSizePolicy::ControlType  control21, Qt::Orientation  orientation2, const QStyleOption*  option3, const QWidget*  widget4) const;
    QIcon  standardIconImplementation(QStyle::StandardPixmap  standardIcon0, const QStyleOption*  option1, const QWidget*  widget2) const;
    int  __public_layoutSpacingImplementation(int  control10, int  control21, int  orientation2, const QStyleOption*  option3, const QWidget*  widget4) const;
    QObject*  __public_sender() const;
    QIcon  __public_standardIconImplementation(int  standardIcon0, const QStyleOption*  option1, const QWidget*  widget2) const;
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    void __override_drawComplexControl(int  cc0, const QStyleOptionComplex*  opt1, QPainter*  p2, const QWidget*  w3, bool static_call) const;
    void __override_drawControl(int  element0, const QStyleOption*  opt1, QPainter*  p2, const QWidget*  w3, bool static_call) const;
    void __override_drawItemPixmap(QPainter*  painter0, const QRect&  rect1, int  alignment2, const QPixmap&  pixmap3, bool static_call) const;
    void __override_drawItemText(QPainter*  painter0, const QRect&  rect1, int  flags2, const QPalette&  pal3, bool  enabled4, const QString&  text5, int  textRole6, bool static_call) const;
    void __override_drawPrimitive(int  pe0, const QStyleOption*  opt1, QPainter*  p2, const QWidget*  w3, bool static_call) const;
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  o0, QEvent*  e1, bool static_call);
    QPixmap  __override_generatedIconPixmap(int  iconMode0, const QPixmap&  pixmap1, const QStyleOption*  opt2, bool static_call) const;
    int  __override_hitTestComplexControl(int  cc0, const QStyleOptionComplex*  opt1, const QPoint&  pt2, const QWidget*  w3, bool static_call) const;
    QRect  __override_itemPixmapRect(const QRect&  r0, int  flags1, const QPixmap&  pixmap2, bool static_call) const;
    QRect  __override_itemTextRect(const QFontMetrics&  fm0, const QRect&  r1, int  flags2, bool  enabled3, const QString&  text4, bool static_call) const;
    int  __override_pixelMetric(int  pm0, const QStyleOption*  option1, const QWidget*  widget2, bool static_call) const;
    void __override_polish(QApplication*  arg__1, bool static_call);
    void __override_polish(QPalette&  arg__1, bool static_call);
    void __override_polish(QWidget*  arg__1, bool static_call);
    QSize  __override_sizeFromContents(int  ct0, const QStyleOption*  opt1, const QSize&  contentsSize2, const QWidget*  widget3, bool static_call) const;
    QPalette  __override_standardPalette(bool static_call) const;
    int  __override_styleHint(int  hint0, const QStyleOption*  opt1, const QWidget*  widget2, QStyleHintReturn*  returnData3, bool static_call) const;
    QRect  __override_subControlRect(int  cc0, const QStyleOptionComplex*  opt1, int  sc2, const QWidget*  w3, bool static_call) const;
    QRect  __override_subElementRect(int  r0, const QStyleOption*  opt1, const QWidget*  widget2, bool static_call) const;
    void __override_timerEvent(QTimerEvent*  event0, bool static_call);
    void __override_unpolish(QApplication*  arg__1, bool static_call);
    void __override_unpolish(QWidget*  arg__1, bool static_call);
};

#endif // QWINDOWSSTYLE_SHELL_H
