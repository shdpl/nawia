#ifndef QPRINTER_SHELL_H
#define QPRINTER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qprinter.h>

#include <QVariant>
#include <qlist.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qprintengine.h>
#include <qprinter.h>
#include <qprinterinfo.h>

class QPrinter_QtDShell : public QPrinter, public QtdObjectLink
{
public:
    QPrinter_QtDShell(void *d_ptr, QPrinter::PrinterMode  mode0);
    QPrinter_QtDShell(void *d_ptr, const QPrinterInfo&  printer0, QPrinter::PrinterMode  mode1);
    ~QPrinter_QtDShell();

    int  devType() const;
    int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
    QPaintEngine*  paintEngine() const;
    void __public_setEngines(QPrintEngine*  printEngine0, QPaintEngine*  paintEngine1);
    int  __override_devType(bool static_call) const;
    int  __override_metric(int  arg__1, bool static_call) const;
    QPaintEngine*  __override_paintEngine(bool static_call) const;
};

#endif // QPRINTER_SHELL_H
