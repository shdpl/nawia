#ifndef QGLPIXELBUFFER_SHELL_H
#define QGLPIXELBUFFER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qglpixelbuffer.h>

#include <QImage>
#include <QVariant>
#include <qgl.h>
#include <qglpixelbuffer.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpixmap.h>

class QGLPixelBuffer_QtDShell : public QGLPixelBuffer, public QtdObjectLink
{
public:
    QGLPixelBuffer_QtDShell(void *d_ptr, const QSize&  size0, const QGLFormat&  format1, QGLWidget*  shareWidget2);
    QGLPixelBuffer_QtDShell(void *d_ptr, int  width0, int  height1, const QGLFormat&  format2, QGLWidget*  shareWidget3);
    ~QGLPixelBuffer_QtDShell();

    int  devType() const;
    int  metric(QPaintDevice::PaintDeviceMetric  metric0) const;
    QPaintEngine*  paintEngine() const;
    int  __override_devType(bool static_call) const;
    int  __override_metric(int  metric0, bool static_call) const;
    QPaintEngine*  __override_paintEngine(bool static_call) const;
};

#endif // QGLPIXELBUFFER_SHELL_H
