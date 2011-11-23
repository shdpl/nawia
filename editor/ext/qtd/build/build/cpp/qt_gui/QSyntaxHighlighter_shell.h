#ifndef QSYNTAXHIGHLIGHTER_SHELL_H
#define QSYNTAXHIGHLIGHTER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qsyntaxhighlighter.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qfont.h>
#include <qlist.h>
#include <qobject.h>
#include <qsyntaxhighlighter.h>
#include <qtextdocument.h>
#include <qtextedit.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qvariant.h>

class QSyntaxHighlighter_QtDShell : public QSyntaxHighlighter, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QSyntaxHighlighter_QtDShell(void *d_ptr, QObject*  parent0);
    QSyntaxHighlighter_QtDShell(void *d_ptr, QTextDocument*  parent0);
    QSyntaxHighlighter_QtDShell(void *d_ptr, QTextEdit*  parent0);
    ~QSyntaxHighlighter_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void highlightBlock(const QString&  text0);
    void timerEvent(QTimerEvent*  arg__1);
    QTextBlock  __public_currentBlock() const;
    int  __public_currentBlockState() const;
    QTextBlockUserData*  __public_currentBlockUserData() const;
    QTextCharFormat  __public_format(int  pos0) const;
    int  __public_previousBlockState() const;
    QObject*  __public_sender() const;
    void __public_setCurrentBlockState(int  newState0);
    void __public_setCurrentBlockUserData(QTextBlockUserData*  data0);
    void __public_setFormat(int  start0, int  count1, const QColor&  color2);
    void __public_setFormat(int  start0, int  count1, const QFont&  font2);
    void __public_setFormat(int  start0, int  count1, const QTextCharFormat&  format2);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_highlightBlock(const QString&  text0, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QSYNTAXHIGHLIGHTER_SHELL_H
