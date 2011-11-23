#ifndef QTEXTOBJECTINTERFACE_SHELL_H
#define QTEXTOBJECTINTERFACE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qabstracttextdocumentlayout.h>

#include <QVariant>
#include <qpainter.h>
#include <qtextdocument.h>
#include <qtextformat.h>

class QTextObjectInterface_QtDShell : public QTextObjectInterface, public QtdObjectLink
{
public:
    QTextObjectInterface_QtDShell(void *d_ptr);
    ~QTextObjectInterface_QtDShell();

    void drawObject(QPainter*  painter0, const QRectF&  rect1, QTextDocument*  doc2, int  posInDocument3, const QTextFormat&  format4);
    QSizeF  intrinsicSize(QTextDocument*  doc0, int  posInDocument1, const QTextFormat&  format2);
    void __override_drawObject(QPainter*  painter0, const QRectF&  rect1, QTextDocument*  doc2, int  posInDocument3, const QTextFormat&  format4, bool static_call);
    QSizeF  __override_intrinsicSize(QTextDocument*  doc0, int  posInDocument1, const QTextFormat&  format2, bool static_call);
};

#endif // QTEXTOBJECTINTERFACE_SHELL_H
