#ifndef QBITMAP_SHELL_H
#define QBITMAP_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qbitmap.h>

#include <QVariant>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
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

class QBitmap_QtDShell : public QBitmap, public QtdObjectLink
{
public:
    QBitmap_QtDShell(void *d_ptr);
    QBitmap_QtDShell(void *d_ptr, const QPixmap&  arg__1);
    QBitmap_QtDShell(void *d_ptr, const QSize&  arg__1);
    QBitmap_QtDShell(void *d_ptr, const QString&  fileName0, const char*  format1);
    QBitmap_QtDShell(void *d_ptr, int  w0, int  h1);
    ~QBitmap_QtDShell();

    int  devType() const;
    int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
    QPaintEngine*  paintEngine() const;
    int  __override_devType(bool static_call) const;
    int  __override_metric(int  arg__1, bool static_call) const;
    QPaintEngine*  __override_paintEngine(bool static_call) const;
};

#endif // QBITMAP_SHELL_H
