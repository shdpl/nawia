#ifndef QTEXTLISTFORMAT_SHELL_H
#define QTEXTLISTFORMAT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtextformat.h>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpen.h>
#include <qtextformat.h>
#include <qvariant.h>
#include <qvector.h>

class QTextListFormat_QtDShell : public QTextListFormat
{
public:
    QTextListFormat_QtDShell();
    QTextListFormat_QtDShell(const QTextFormat&  fmt0);
    ~QTextListFormat_QtDShell();

};

#endif // QTEXTLISTFORMAT_SHELL_H
