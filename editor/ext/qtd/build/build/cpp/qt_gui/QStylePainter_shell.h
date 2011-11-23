#ifndef QSTYLEPAINTER_SHELL_H
#define QSTYLEPAINTER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstylepainter.h>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qimage.h>
#include <qmatrix.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpolygon.h>
#include <qregion.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qstylepainter.h>
#include <qtextoption.h>
#include <qtransform.h>
#include <qwidget.h>

class QStylePainter_QtDShell : public QStylePainter
{
public:
    QStylePainter_QtDShell();
    QStylePainter_QtDShell(QPaintDevice*  pd0, QWidget*  w1);
    QStylePainter_QtDShell(QWidget*  w0);
    ~QStylePainter_QtDShell();

};

#endif // QSTYLEPAINTER_SHELL_H
