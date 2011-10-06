#ifndef QPICTURE_SHELL_H
#define QPICTURE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qpicture.h>

#include <QVariant>
#include <qdatastream.h>
#include <qiodevice.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpicture.h>

class QPicture_QtDShell : public QPicture, public QtdObjectLink
{
public:
    QPicture_QtDShell(void *d_ptr, const QPicture&  arg__1);
    QPicture_QtDShell(void *d_ptr, int  formatVersion0);
    ~QPicture_QtDShell();

    int  devType() const;
    int  metric(QPaintDevice::PaintDeviceMetric  m0) const;
    QPaintEngine*  paintEngine() const;
    void setData(const char*  data0, uint  size1);
    int  __override_devType(bool static_call) const;
    int  __override_metric(int  m0, bool static_call) const;
    QPaintEngine*  __override_paintEngine(bool static_call) const;
    void __override_setData(const char*  data0, uint  size1, bool static_call);
};

#endif // QPICTURE_SHELL_H
