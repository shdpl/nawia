#ifndef QICONENGINEV2_SHELL_H
#define QICONENGINEV2_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qiconengine.h>

#include <QVariant>
#include <qdatastream.h>
#include <qiconengine.h>
#include <qlist.h>
#include <qpainter.h>
#include <qpixmap.h>

class QIconEngineV2_QtDShell : public QIconEngineV2, public QtdObjectLink
{
public:
    QIconEngineV2_QtDShell(void *d_ptr);
    ~QIconEngineV2_QtDShell();

    QSize  actualSize(const QSize&  size0, QIcon::Mode  mode1, QIcon::State  state2);
    void addFile(const QString&  fileName0, const QSize&  size1, QIcon::Mode  mode2, QIcon::State  state3);
    void addPixmap(const QPixmap&  pixmap0, QIcon::Mode  mode1, QIcon::State  state2);
    QIconEngineV2*  clone() const;
    QString  key() const;
    void paint(QPainter*  painter0, const QRect&  rect1, QIcon::Mode  mode2, QIcon::State  state3);
    QPixmap  pixmap(const QSize&  size0, QIcon::Mode  mode1, QIcon::State  state2);
    bool  read(QDataStream&  in0);
    bool  write(QDataStream&  out0) const;
    QSize  __override_actualSize(const QSize&  size0, int  mode1, int  state2, bool static_call);
    void __override_addFile(const QString&  fileName0, const QSize&  size1, int  mode2, int  state3, bool static_call);
    void __override_addPixmap(const QPixmap&  pixmap0, int  mode1, int  state2, bool static_call);
    QString  __override_key(bool static_call) const;
    void __override_paint(QPainter*  painter0, const QRect&  rect1, int  mode2, int  state3, bool static_call);
    QPixmap  __override_pixmap(const QSize&  size0, int  mode1, int  state2, bool static_call);
    bool  __override_read(QDataStream&  in0, bool static_call);
    bool  __override_write(QDataStream&  out0, bool static_call) const;
};

#endif // QICONENGINEV2_SHELL_H
