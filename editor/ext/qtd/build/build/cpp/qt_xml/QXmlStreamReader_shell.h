#ifndef QXMLSTREAMREADER_SHELL_H
#define QXMLSTREAMREADER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qxmlstream.h>

#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qvector.h>
#include <qxmlstream.h>

class QXmlStreamReader_QtDShell : public QXmlStreamReader
{
public:
    QXmlStreamReader_QtDShell();
    QXmlStreamReader_QtDShell(QIODevice*  device0);
    QXmlStreamReader_QtDShell(const QByteArray&  data0);
    QXmlStreamReader_QtDShell(const QString&  data0);
    ~QXmlStreamReader_QtDShell();

};

#endif // QXMLSTREAMREADER_SHELL_H
