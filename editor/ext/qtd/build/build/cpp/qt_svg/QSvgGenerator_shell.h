#ifndef QSVGGENERATOR_SHELL_H
#define QSVGGENERATOR_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qsvggenerator.h>

#include <QVariant>
#include <qiodevice.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>

class QSvgGenerator_QtDShell : public QSvgGenerator, public QtdObjectLink
{
public:
    QSvgGenerator_QtDShell(void *d_ptr);
    ~QSvgGenerator_QtDShell();

    int  devType() const;
    int  metric(QPaintDevice::PaintDeviceMetric  metric0) const;
    QPaintEngine*  paintEngine() const;
    int  __override_devType(bool static_call) const;
    int  __override_metric(int  metric0, bool static_call) const;
    QPaintEngine*  __override_paintEngine(bool static_call) const;
};

#endif // QSVGGENERATOR_SHELL_H
