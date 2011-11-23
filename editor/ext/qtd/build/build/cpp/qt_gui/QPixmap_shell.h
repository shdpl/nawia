#ifndef QPIXMAP_SHELL_H
#define QPIXMAP_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qpixmap.h>

#include <QBitmap>
#include <QMatrix>
#include <QVariant>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qdatastream.h>
#include <qimage.h>
#include <qimagereader.h>
#include <qimagewriter.h>
#include <qiodevice.h>
#include <qmatrix.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpixmap.h>
#include <qregion.h>
#include <qtransform.h>
#include <qvariant.h>
#include <qwidget.h>

class QPixmap_QtDShell : public QPixmap, public QtdObjectLink
{
public:
    QPixmap_QtDShell(void *d_ptr);
    QPixmap_QtDShell(void *d_ptr, const QPixmap&  arg__1);
    QPixmap_QtDShell(void *d_ptr, const QSize&  arg__1);
    QPixmap_QtDShell(void *d_ptr, const QString&  fileName0, const char*  format1, Qt::ImageConversionFlags  flags2);
    QPixmap_QtDShell(void *d_ptr, const char**  xpm0);
    QPixmap_QtDShell(void *d_ptr, int  w0, int  h1);
    ~QPixmap_QtDShell();

    int  devType() const;
    int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
    QPaintEngine*  paintEngine() const;
    int  __override_devType(bool static_call) const;
    int  __override_metric(int  arg__1, bool static_call) const;
    QPaintEngine*  __override_paintEngine(bool static_call) const;
};

#endif // QPIXMAP_SHELL_H
