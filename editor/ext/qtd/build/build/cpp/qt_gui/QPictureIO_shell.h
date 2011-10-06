#ifndef QPICTUREIO_SHELL_H
#define QPICTUREIO_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qpicture.h>

#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qpicture.h>

class QPictureIO_QtDShell : public QPictureIO
{
public:
    QPictureIO_QtDShell();
    QPictureIO_QtDShell(QIODevice*  ioDevice0, const char*  format1);
    QPictureIO_QtDShell(const QString&  fileName0, const char*  format1);
    ~QPictureIO_QtDShell();

};

#endif // QPICTUREIO_SHELL_H
