#ifndef QIMAGEWRITER_SHELL_H
#define QIMAGEWRITER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qimagewriter.h>

#include <QVariant>
#include <qbytearray.h>
#include <qimage.h>
#include <qimagewriter.h>
#include <qiodevice.h>
#include <qlist.h>

class QImageWriter_QtDShell : public QImageWriter
{
public:
    QImageWriter_QtDShell();
    QImageWriter_QtDShell(QIODevice*  device0, const QByteArray&  format1);
    QImageWriter_QtDShell(const QString&  fileName0, const QByteArray&  format1);
    ~QImageWriter_QtDShell();

};

#endif // QIMAGEWRITER_SHELL_H
