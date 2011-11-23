#ifndef QDATASTREAM_SHELL_H
#define QDATASTREAM_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qdatastream.h>

#include <QVariant>
#include <qbytearray.h>
#include <qdatastream.h>
#include <qiodevice.h>

class QDataStream_QtDShell : public QDataStream, public QtdObjectLink
{
public:
    QDataStream_QtDShell(void *d_ptr);
    QDataStream_QtDShell(void *d_ptr, QByteArray*  arg__1, QIODevice::OpenMode  flags1);
    QDataStream_QtDShell(void *d_ptr, QIODevice*  arg__1);
    QDataStream_QtDShell(void *d_ptr, const QByteArray&  arg__1);
    ~QDataStream_QtDShell();

};

#endif // QDATASTREAM_SHELL_H
