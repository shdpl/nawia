#ifndef QGLCONTEXT_SHELL_H
#define QGLCONTEXT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qgl.h>

#include <QVariant>
#include <qcolor.h>
#include <qgl.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpixmap.h>

class QGLContext_QtDShell : public QGLContext, public QtdObjectLink
{
public:
    QGLContext_QtDShell(void *d_ptr, const QGLFormat&  format0);
    QGLContext_QtDShell(void *d_ptr, const QGLFormat&  format0, QPaintDevice*  device1);
    ~QGLContext_QtDShell();

    bool  chooseContext(const QGLContext*  shareContext0);
    bool  create(const QGLContext*  shareContext0);
    void doneCurrent();
    void makeCurrent();
    void swapBuffers() const;
    uint  __public_colorIndex(const QColor&  c0) const;
    bool  __public_deviceIsPixmap() const;
    bool  __public_initialized() const;
    void __public_setInitialized(bool  on0);
    void __public_setValid(bool  valid0);
    void __public_setWindowCreated(bool  on0);
    bool  __public_windowCreated() const;
    bool  __override_chooseContext(const QGLContext*  shareContext0, bool static_call);
    bool  __override_create(const QGLContext*  shareContext0, bool static_call);
    void __override_doneCurrent(bool static_call);
    void __override_makeCurrent(bool static_call);
    void __override_swapBuffers(bool static_call) const;
    static QGLContext*  currentCtx_getter();
    static void setCurrentCtx_setter(QGLContext*  currentCtx0);
};

#endif // QGLCONTEXT_SHELL_H
