#ifndef QABSTRACTICONENGINEFACTORYV2_SHELL_H
#define QABSTRACTICONENGINEFACTORYV2_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qiconengineplugin.h>

#include <QVariant>
#include <qiconengine.h>
#include <qstringlist.h>

class QAbstractIconEngineFactoryV2_QtDShell : public QIconEngineFactoryInterfaceV2, public QtdObjectLink
{
public:
    QAbstractIconEngineFactoryV2_QtDShell(void *d_ptr);
    ~QAbstractIconEngineFactoryV2_QtDShell();

    QIconEngineV2*  create(const QString&  filename0);
    QStringList  keys() const;
    QIconEngineV2*  __override_create(const QString&  filename0, bool static_call);
    QStringList  __override_keys(bool static_call) const;
};

#endif // QABSTRACTICONENGINEFACTORYV2_SHELL_H
