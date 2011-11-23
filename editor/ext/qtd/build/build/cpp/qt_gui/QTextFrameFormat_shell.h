#ifndef QTEXTFRAMEFORMAT_SHELL_H
#define QTEXTFRAMEFORMAT_SHELL_H

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

class QTextFrameFormat_QtDShell : public QTextFrameFormat
{
public:
    QTextFrameFormat_QtDShell();
    QTextFrameFormat_QtDShell(const QTextFormat&  fmt0);
    ~QTextFrameFormat_QtDShell();

};

#endif // QTEXTFRAMEFORMAT_SHELL_H
