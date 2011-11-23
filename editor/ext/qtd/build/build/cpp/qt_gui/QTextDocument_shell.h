#ifndef QTEXTDOCUMENT_SHELL_H
#define QTEXTDOCUMENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtextdocument.h>

#include <QTextBlock>
#include <QTextCursor>
#include <QTextFormat>
#include <QVariant>
#include <qabstracttextdocumentlayout.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qfont.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qprinter.h>
#include <qregexp.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qtextoption.h>
#include <qurl.h>
#include <qvariant.h>
#include <qvector.h>

class QTextDocument_QtDShell : public QTextDocument, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QTextDocument_QtDShell(void *d_ptr, QObject*  parent0);
    QTextDocument_QtDShell(void *d_ptr, const QString&  text0, QObject*  parent1);
    ~QTextDocument_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void clear();
    QTextObject*  createObject(const QTextFormat&  f0);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    QVariant  loadResource(int  type0, const QUrl&  name1);
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __public_blockCountChanged(int  newBlockCount0);
    void __public_contentsChange(int  from0, int  charsRemoves1, int  charsAdded2);
    void __public_contentsChanged();
    void __public_cursorPositionChanged(const QTextCursor&  cursor0);
    void __public_documentLayoutChanged();
    void __public_modificationChanged(bool  m0);
    void __public_redoAvailable(bool  arg__1);
    void __public_undoAvailable(bool  arg__1);
    void __public_undoCommandAdded();
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_clear(bool static_call);
    QTextObject*  __override_createObject(const QTextFormat&  f0, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    QVariant  __override_loadResource(int  type0, const QUrl&  name1, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QTEXTDOCUMENT_SHELL_H
