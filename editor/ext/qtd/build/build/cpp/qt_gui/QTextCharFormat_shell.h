#ifndef QTEXTCHARFORMAT_SHELL_H
#define QTEXTCHARFORMAT_SHELL_H

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

class QTextCharFormat_QtDShell : public QTextCharFormat
{
public:
    QTextCharFormat_QtDShell();
    QTextCharFormat_QtDShell(const QTextFormat&  fmt0);
    ~QTextCharFormat_QtDShell();

};

#endif // QTEXTCHARFORMAT_SHELL_H
