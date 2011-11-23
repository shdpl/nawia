#ifndef QTEXTIMAGEFORMAT_SHELL_H
#define QTEXTIMAGEFORMAT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtextformat.h>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qfont.h>
#include <qpen.h>
#include <qstringlist.h>
#include <qtextformat.h>
#include <qvariant.h>
#include <qvector.h>

class QTextImageFormat_QtDShell : public QTextImageFormat
{
public:
    QTextImageFormat_QtDShell();
    QTextImageFormat_QtDShell(const QTextFormat&  format0);
    ~QTextImageFormat_QtDShell();

};

#endif // QTEXTIMAGEFORMAT_SHELL_H
