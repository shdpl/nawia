#ifndef QTEXTLAYOUT_SHELL_H
#define QTEXTLAYOUT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtextlayout.h>

#include <QTextLayout>
#include <QTextOption>
#include <QVariant>
#include <qfont.h>
#include <qlist.h>
#include <qpaintdevice.h>
#include <qpainter.h>
#include <qtextlayout.h>
#include <qtextobject.h>
#include <qtextoption.h>
#include <qvector.h>

class QTextLayout_QtDShell : public QTextLayout
{
public:
    QTextLayout_QtDShell();
    QTextLayout_QtDShell(const QString&  text0);
    QTextLayout_QtDShell(const QString&  text0, const QFont&  font1, QPaintDevice*  paintdevice2);
    QTextLayout_QtDShell(const QTextBlock&  b0);
    ~QTextLayout_QtDShell();

};

#endif // QTEXTLAYOUT_SHELL_H
