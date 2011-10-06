#ifndef QICONENGINE_SHELL_H
#define QICONENGINE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qiconengine.h>

#include <QVariant>
#include <qpainter.h>
#include <qpixmap.h>

class QIconEngine_QtDShell : public QIconEngine, public QtdObjectLink
{
public:
    QIconEngine_QtDShell(void *d_ptr);
    ~QIconEngine_QtDShell();

    QSize  actualSize(const QSize&  size0, QIcon::Mode  mode1, QIcon::State  state2);
    void addFile(const QString&  fileName0, const QSize&  size1, QIcon::Mode  mode2, QIcon::State  state3);
    void addPixmap(const QPixmap&  pixmap0, QIcon::Mode  mode1, QIcon::State  state2);
    void paint(QPainter*  painter0, const QRect&  rect1, QIcon::Mode  mode2, QIcon::State  state3);
    QPixmap  pixmap(const QSize&  size0, QIcon::Mode  mode1, QIcon::State  state2);
    QSize  __override_actualSize(const QSize&  size0, int  mode1, int  state2, bool static_call);
    void __override_addFile(const QString&  fileName0, const QSize&  size1, int  mode2, int  state3, bool static_call);
    void __override_addPixmap(const QPixmap&  pixmap0, int  mode1, int  state2, bool static_call);
    void __override_paint(QPainter*  painter0, const QRect&  rect1, int  mode2, int  state3, bool static_call);
    QPixmap  __override_pixmap(const QSize&  size0, int  mode1, int  state2, bool static_call);
};

#endif // QICONENGINE_SHELL_H
