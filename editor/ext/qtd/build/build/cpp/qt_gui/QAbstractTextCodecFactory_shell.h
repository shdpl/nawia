#ifndef QABSTRACTTEXTCODECFACTORY_SHELL_H
#define QABSTRACTTEXTCODECFACTORY_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtextcodecplugin.h>

#include <QVariant>
#include <qstringlist.h>
#include <qtextcodec.h>

class QAbstractTextCodecFactory_QtDShell : public QTextCodecFactoryInterface, public QtdObjectLink
{
public:
    QAbstractTextCodecFactory_QtDShell(void *d_ptr);
    ~QAbstractTextCodecFactory_QtDShell();

    QTextCodec*  create(const QString&  key0);
    QStringList  keys() const;
    QTextCodec*  __override_create(const QString&  key0, bool static_call);
    QStringList  __override_keys(bool static_call) const;
};

#endif // QABSTRACTTEXTCODECFACTORY_SHELL_H
