#ifndef QIMAGE_SHELL_H
#define QIMAGE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qimage.h>

#include <QMatrix>
#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qdatastream.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qmatrix.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qstringlist.h>
#include <qtransform.h>
#include <qvariant.h>
#include <qvector.h>

class QImage_QtDShell : public QImage, public QtdObjectLink
{
public:
    QImage_QtDShell(void *d_ptr);
    QImage_QtDShell(void *d_ptr, const QImage&  arg__1);
    QImage_QtDShell(void *d_ptr, const QSize&  size0, QImage::Format  format1);
    QImage_QtDShell(void *d_ptr, const QString&  fileName0, const char*  format1);
    QImage_QtDShell(void *d_ptr, const char**  xpm0);
    QImage_QtDShell(void *d_ptr, int  width0, int  height1, QImage::Format  format2);
    QImage_QtDShell(void *d_ptr, unsigned char*  data0, int  width1, int  height2, QImage::Format  format3);
    QImage_QtDShell(void *d_ptr, unsigned char*  data0, int  width1, int  height2, int  bytesPerLine3, QImage::Format  format4);
    ~QImage_QtDShell();

    int  devType() const;
    int  metric(QPaintDevice::PaintDeviceMetric  metric0) const;
    QPaintEngine*  paintEngine() const;
    int  __override_devType(bool static_call) const;
    int  __override_metric(int  metric0, bool static_call) const;
    QPaintEngine*  __override_paintEngine(bool static_call) const;
};

#endif // QIMAGE_SHELL_H
