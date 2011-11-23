#ifndef QIMAGEREADER_SHELL_H
#define QIMAGEREADER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qimagereader.h>

#include <QColor>
#include <QImage>
#include <QRect>
#include <QSize>
#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcolor.h>
#include <qimage.h>
#include <qimagereader.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qstringlist.h>

class QImageReader_QtDShell : public QImageReader
{
public:
    QImageReader_QtDShell();
    QImageReader_QtDShell(QIODevice*  device0, const QByteArray&  format1);
    QImageReader_QtDShell(const QString&  fileName0, const QByteArray&  format1);
    ~QImageReader_QtDShell();

};

#endif // QIMAGEREADER_SHELL_H
