#ifndef QPLAINTEXTDOCUMENTLAYOUT_SHELL_H
#define QPLAINTEXTDOCUMENTLAYOUT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qplaintextedit.h>

#include <QAbstractTextDocumentLayout>
#include <QVariant>
#include <qabstracttextdocumentlayout.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpainter.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextobject.h>
#include <qvariant.h>

class QPlainTextDocumentLayout_QtDShell : public QPlainTextDocumentLayout, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QPlainTextDocumentLayout_QtDShell(void *d_ptr, QTextDocument*  document0);
    ~QPlainTextDocumentLayout_QtDShell();

    QRectF  blockBoundingRect(const QTextBlock&  block0) const;
    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    void documentChanged(int  from0, int  arg__2, int  charsAdded2);
    QSizeF  documentSize() const;
    void draw(QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2);
    void drawInlineObject(QPainter*  painter0, const QRectF&  rect1, QTextInlineObject  object2, int  posInDocument3, const QTextFormat&  format4);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    QRectF  frameBoundingRect(QTextFrame*  arg__1) const;
    int  hitTest(const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const;
    int  pageCount() const;
    void positionInlineObject(QTextInlineObject  item0, int  posInDocument1, const QTextFormat&  format2);
    void resizeInlineObject(QTextInlineObject  item0, int  posInDocument1, const QTextFormat&  format2);
    void timerEvent(QTimerEvent*  arg__1);
    QTextCharFormat  __public_format(int  pos0);
    int  __public_formatIndex(int  pos0);
    QObject*  __public_sender() const;
    void __public_documentSizeChanged(const QSizeF&  newSize0);
    void __public_pageCountChanged(int  newPages0);
    void __public_update(const QRectF&  arg__1);
    void __public_updateBlock(const QTextBlock&  block0);
    QRectF  __override_blockBoundingRect(const QTextBlock&  block0, bool static_call) const;
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    void __override_documentChanged(int  from0, int  arg__2, int  charsAdded2, bool static_call);
    QSizeF  __override_documentSize(bool static_call) const;
    void __override_draw(QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2, bool static_call);
    void __override_drawInlineObject(QPainter*  painter0, const QRectF&  rect1, QTextInlineObject  object2, int  posInDocument3, const QTextFormat&  format4, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    QRectF  __override_frameBoundingRect(QTextFrame*  arg__1, bool static_call) const;
    int  __override_hitTest(const QPointF&  arg__1, int  arg__2, bool static_call) const;
    int  __override_pageCount(bool static_call) const;
    void __override_positionInlineObject(QTextInlineObject  item0, int  posInDocument1, const QTextFormat&  format2, bool static_call);
    void __override_resizeInlineObject(QTextInlineObject  item0, int  posInDocument1, const QTextFormat&  format2, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QPLAINTEXTDOCUMENTLAYOUT_SHELL_H
