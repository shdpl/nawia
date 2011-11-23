#ifndef QABSTRACTIMAGEIOHANDLERFACTORY_SHELL_H
#define QABSTRACTIMAGEIOHANDLERFACTORY_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qimageiohandler.h>

#include <QVariant>
#include <qbytearray.h>
#include <qimageiohandler.h>
#include <qiodevice.h>
#include <qstringlist.h>

class QAbstractImageIOHandlerFactory_QtDShell : public QImageIOHandlerFactoryInterface, public QtdObjectLink
{
public:
    QAbstractImageIOHandlerFactory_QtDShell(void *d_ptr);
    ~QAbstractImageIOHandlerFactory_QtDShell();

    QImageIOHandler*  create(QIODevice*  device0, const QByteArray&  format1) const;
    QStringList  keys() const;
    QImageIOHandler*  __override_create(QIODevice*  device0, const QByteArray&  format1, bool static_call) const;
    QStringList  __override_keys(bool static_call) const;
};

#endif // QABSTRACTIMAGEIOHANDLERFACTORY_SHELL_H
