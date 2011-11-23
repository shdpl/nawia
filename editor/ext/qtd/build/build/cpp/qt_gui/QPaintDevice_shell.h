#ifndef QPAINTDEVICE_SHELL_H
#define QPAINTDEVICE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qpaintdevice.h>

#include <QVariant>
#include <qpaintdevice.h>
#include <qpaintengine.h>

class QPaintDevice_QtDShell : public QPaintDevice, public QtdObjectLink
{
public:
    QPaintDevice_QtDShell(void *d_ptr);
    ~QPaintDevice_QtDShell();

    int  devType() const;
    int  metric(QPaintDevice::PaintDeviceMetric  metric0) const;
    QPaintEngine*  paintEngine() const;
    int  __override_devType(bool static_call) const;
    int  __override_metric(int  metric0, bool static_call) const;
    QPaintEngine*  __override_paintEngine(bool static_call) const;
};

#endif // QPAINTDEVICE_SHELL_H
