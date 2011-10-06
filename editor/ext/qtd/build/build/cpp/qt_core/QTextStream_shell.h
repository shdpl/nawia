#ifndef QTEXTSTREAM_SHELL_H
#define QTEXTSTREAM_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtextstream.h>

#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qlocale.h>
#include <qtextstream.h>

class QTextStream_QtDShell : public QTextStream, public QtdObjectLink
{
public:
    QTextStream_QtDShell(void *d_ptr);
    QTextStream_QtDShell(void *d_ptr, QIODevice*  device0);
    QTextStream_QtDShell(void *d_ptr, const QByteArray&  array0, QIODevice::OpenMode  openMode1);
    ~QTextStream_QtDShell();

};

#endif // QTEXTSTREAM_SHELL_H
