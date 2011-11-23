#ifndef QGLFRAMEBUFFEROBJECT_SHELL_H
#define QGLFRAMEBUFFEROBJECT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qglframebufferobject.h>

#include <QVariant>
#include <qglframebufferobject.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>

class QGLFramebufferObject_QtDShell : public QGLFramebufferObject, public QtdObjectLink
{
public:
    QGLFramebufferObject_QtDShell(void *d_ptr, const QSize&  size0, GLenum  target1);
    QGLFramebufferObject_QtDShell(void *d_ptr, const QSize&  size0, QGLFramebufferObject::Attachment  attachment1, GLenum  target2, GLenum  internal_format3);
    QGLFramebufferObject_QtDShell(void *d_ptr, int  width0, int  height1, GLenum  target2);
    QGLFramebufferObject_QtDShell(void *d_ptr, int  width0, int  height1, QGLFramebufferObject::Attachment  attachment2, GLenum  target3, GLenum  internal_format4);
    ~QGLFramebufferObject_QtDShell();

    int  devType() const;
    int  metric(QPaintDevice::PaintDeviceMetric  metric0) const;
    QPaintEngine*  paintEngine() const;
    int  __override_devType(bool static_call) const;
    int  __override_metric(int  metric0, bool static_call) const;
    QPaintEngine*  __override_paintEngine(bool static_call) const;
};

#endif // QGLFRAMEBUFFEROBJECT_SHELL_H
