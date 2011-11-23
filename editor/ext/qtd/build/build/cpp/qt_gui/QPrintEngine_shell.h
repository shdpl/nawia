#ifndef QPRINTENGINE_SHELL_H
#define QPRINTENGINE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qprintengine.h>

#include <QVariant>
#include <qvariant.h>

class QPrintEngine_QtDShell : public QPrintEngine, public QtdObjectLink
{
public:
    QPrintEngine_QtDShell(void *d_ptr);
    ~QPrintEngine_QtDShell();

    bool  abort();
    int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
    bool  newPage();
    QPrinter::PrinterState  printerState() const;
    QVariant  property(QPrintEngine::PrintEnginePropertyKey  key0) const;
    void setProperty(QPrintEngine::PrintEnginePropertyKey  key0, const QVariant&  value1);
    bool  __override_abort(bool static_call);
    int  __override_metric(int  arg__1, bool static_call) const;
    bool  __override_newPage(bool static_call);
    int  __override_printerState(bool static_call) const;
    QVariant  __override_property(int  key0, bool static_call) const;
    void __override_setProperty(int  key0, const QVariant&  value1, bool static_call);
};

#endif // QPRINTENGINE_SHELL_H
