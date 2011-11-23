#ifndef QPAINTER_SHELL_H
#define QPAINTER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qpainter.h>

#include <QPainterPath>
#include <QPixmap>
#include <QVariant>
#include <QWidget>
#include <qbrush.h>
#include <qcolor.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qimage.h>
#include <qmatrix.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpen.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpolygon.h>
#include <qregion.h>
#include <qtextoption.h>
#include <qtransform.h>
#include <qwidget.h>

class QPainter_QtDShell : public QPainter
{
public:
    QPainter_QtDShell();
    QPainter_QtDShell(QPaintDevice*  arg__1);
    ~QPainter_QtDShell();

};

#endif // QPAINTER_SHELL_H
