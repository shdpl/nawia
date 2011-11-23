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

#include "QSyntaxHighlighter_shell.h"
#include <iostream>
#include <qsyntaxhighlighter.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QSyntaxHighlighterEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QSyntaxHighlighterEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QSyntaxHighlighter_createEntity(void *nativeId, void* dId)
{
    new QSyntaxHighlighterEntity((QObject*)nativeId, dId);
}

QSyntaxHighlighter_QtDShell::QSyntaxHighlighter_QtDShell(void *d_ptr, QObject*  parent0)
    : QSyntaxHighlighter(parent0),
      QObjectLink(this, d_ptr)
{
}

QSyntaxHighlighter_QtDShell::QSyntaxHighlighter_QtDShell(void *d_ptr, QTextDocument*  parent0)
    : QSyntaxHighlighter(parent0),
      QObjectLink(this, d_ptr)
{
}

QSyntaxHighlighter_QtDShell::QSyntaxHighlighter_QtDShell(void *d_ptr, QTextEdit*  parent0)
    : QSyntaxHighlighter(parent0),
      QObjectLink(this, d_ptr)
{
}

QSyntaxHighlighter_QtDShell::~QSyntaxHighlighter_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QSyntaxHighlighter_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QSyntaxHighlighter::metaObject();
}

int QSyntaxHighlighter_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QSyntaxHighlighter::qt_metacall(_c, _id, _a);
}

int QSyntaxHighlighter_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QSyntaxHighlighter::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QSyntaxHighlighter_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QSyntaxHighlighter_QtDShell *__qt_this = (QSyntaxHighlighter_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QSyntaxHighlighter_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QSyntaxHighlighter_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QSyntaxHighlighter_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QSyntaxHighlighter_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QSyntaxHighlighter_highlightBlock_string_dispatch, (void *dId, const unsigned short* text0, int text0_size))
QTD_FUNC(GUI, QSyntaxHighlighter_highlightBlock_string_dispatch)
void QSyntaxHighlighter_QtDShell::highlightBlock(const QString&  text0)
{
    qtd_QSyntaxHighlighter_highlightBlock_string_dispatch(QObjectLink::getLink(this)->dId, text0.utf16(), text0.size());
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QSyntaxHighlighter_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QSyntaxHighlighter_initCallBacks(VoidFunc *virts) {
    qtd_QSyntaxHighlighter_highlightBlock_string_dispatch = (qtd_QSyntaxHighlighter_highlightBlock_string_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QTextBlock  QSyntaxHighlighter_QtDShell::__public_currentBlock() const
{
    return QSyntaxHighlighter::currentBlock();
}

int  QSyntaxHighlighter_QtDShell::__public_currentBlockState() const
{
    return QSyntaxHighlighter::currentBlockState();
}

QTextBlockUserData*  QSyntaxHighlighter_QtDShell::__public_currentBlockUserData() const
{
    return QSyntaxHighlighter::currentBlockUserData();
}

QTextCharFormat  QSyntaxHighlighter_QtDShell::__public_format(int  pos0) const
{
    return QSyntaxHighlighter::format((int )pos0);
}

int  QSyntaxHighlighter_QtDShell::__public_previousBlockState() const
{
    return QSyntaxHighlighter::previousBlockState();
}

QObject*  QSyntaxHighlighter_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QSyntaxHighlighter_QtDShell::__public_setCurrentBlockState(int  newState0)
{
    QSyntaxHighlighter::setCurrentBlockState((int )newState0);
}

void QSyntaxHighlighter_QtDShell::__public_setCurrentBlockUserData(QTextBlockUserData*  data0)
{
    QSyntaxHighlighter::setCurrentBlockUserData((QTextBlockUserData* )data0);
}

void QSyntaxHighlighter_QtDShell::__public_setFormat(int  start0, int  count1, const QColor&  color2)
{
    QSyntaxHighlighter::setFormat((int )start0, (int )count1, (const QColor& )color2);
}

void QSyntaxHighlighter_QtDShell::__public_setFormat(int  start0, int  count1, const QFont&  font2)
{
    QSyntaxHighlighter::setFormat((int )start0, (int )count1, (const QFont& )font2);
}

void QSyntaxHighlighter_QtDShell::__public_setFormat(int  start0, int  count1, const QTextCharFormat&  format2)
{
    QSyntaxHighlighter::setFormat((int )start0, (int )count1, (const QTextCharFormat& )format2);
}

// Write virtual function overries used to decide on static/virtual calls
void QSyntaxHighlighter_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QSyntaxHighlighter_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QSyntaxHighlighter_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QSyntaxHighlighter_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QSyntaxHighlighter_QtDShell::__override_highlightBlock(const QString&  text0, bool static_call)
{
    if (static_call) {
        return;
    } else {
        highlightBlock((const QString& )text0);
    }
}

void QSyntaxHighlighter_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QSyntaxHighlighter::QSyntaxHighlighter(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSyntaxHighlighter_QSyntaxHighlighter_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QSyntaxHighlighter_QtDShell *__qt_this = new QSyntaxHighlighter_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QSyntaxHighlighter::QSyntaxHighlighter(QTextDocument * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSyntaxHighlighter_QSyntaxHighlighter_QTextDocument
(void *d_ptr,
 void* parent0)
{
    QTextDocument*  __qt_parent0 = (QTextDocument* ) parent0;
    QSyntaxHighlighter_QtDShell *__qt_this = new QSyntaxHighlighter_QtDShell(d_ptr, (QTextDocument* )__qt_parent0);
    return (void *) __qt_this;

}

// QSyntaxHighlighter::QSyntaxHighlighter(QTextEdit * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSyntaxHighlighter_QSyntaxHighlighter_QTextEdit
(void *d_ptr,
 void* parent0)
{
    QTextEdit*  __qt_parent0 = (QTextEdit* ) parent0;
    QSyntaxHighlighter_QtDShell *__qt_this = new QSyntaxHighlighter_QtDShell(d_ptr, (QTextEdit* )__qt_parent0);
    return (void *) __qt_this;

}

// QSyntaxHighlighter::currentBlock() const
QTD_EXTERN QTD_EXPORT void* qtd_QSyntaxHighlighter_currentBlock_const
(void* __this_nativeId)
{
    QSyntaxHighlighter_QtDShell *__qt_this = (QSyntaxHighlighter_QtDShell *) __this_nativeId;
    QTextBlock  __qt_return_value = __qt_this->__public_currentBlock();

    void* __d_return_value = (void*) new QTextBlock(__qt_return_value);

    return __d_return_value;
}

// QSyntaxHighlighter::currentBlockState() const
QTD_EXTERN QTD_EXPORT int qtd_QSyntaxHighlighter_currentBlockState_const
(void* __this_nativeId)
{
    QSyntaxHighlighter_QtDShell *__qt_this = (QSyntaxHighlighter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->__public_currentBlockState();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSyntaxHighlighter::currentBlockUserData() const
QTD_EXTERN QTD_EXPORT void* qtd_QSyntaxHighlighter_currentBlockUserData_const
(void* __this_nativeId)
{
    QSyntaxHighlighter_QtDShell *__qt_this = (QSyntaxHighlighter_QtDShell *) __this_nativeId;
    QTextBlockUserData*  __qt_return_value = __qt_this->__public_currentBlockUserData();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QSyntaxHighlighter::document() const
QTD_EXTERN QTD_EXPORT void* qtd_QSyntaxHighlighter_document_const
(void* __this_nativeId)
{
    QSyntaxHighlighter_QtDShell *__qt_this = (QSyntaxHighlighter_QtDShell *) __this_nativeId;
    QTextDocument*  __qt_return_value = __qt_this->document();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QSyntaxHighlighter::format(int pos) const
QTD_EXTERN QTD_EXPORT void* qtd_QSyntaxHighlighter_format_int_const
(void* __this_nativeId,
 int pos0)
{
    QSyntaxHighlighter_QtDShell *__qt_this = (QSyntaxHighlighter_QtDShell *) __this_nativeId;
    QTextCharFormat  __qt_return_value = __qt_this->__public_format((int )pos0);

    void* __d_return_value = (void*) new QTextCharFormat(__qt_return_value);

    return __d_return_value;
}

// QSyntaxHighlighter::previousBlockState() const
QTD_EXTERN QTD_EXPORT int qtd_QSyntaxHighlighter_previousBlockState_const
(void* __this_nativeId)
{
    QSyntaxHighlighter_QtDShell *__qt_this = (QSyntaxHighlighter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->__public_previousBlockState();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSyntaxHighlighter::rehighlight()
QTD_EXTERN QTD_EXPORT void qtd_QSyntaxHighlighter_rehighlight
(void* __this_nativeId)
{
    QSyntaxHighlighter_QtDShell *__qt_this = (QSyntaxHighlighter_QtDShell *) __this_nativeId;
    __qt_this->rehighlight();

}

// QSyntaxHighlighter::rehighlightBlock(const QTextBlock & block)
QTD_EXTERN QTD_EXPORT void qtd_QSyntaxHighlighter_rehighlightBlock_QTextBlock
(void* __this_nativeId,
 void* block0)
{
    const QTextBlock&  __qt_block0 = (const QTextBlock& ) *(QTextBlock *)block0;
    QSyntaxHighlighter_QtDShell *__qt_this = (QSyntaxHighlighter_QtDShell *) __this_nativeId;
    __qt_this->rehighlightBlock((const QTextBlock& )__qt_block0);

}

// QSyntaxHighlighter::setCurrentBlockState(int newState)
QTD_EXTERN QTD_EXPORT void qtd_QSyntaxHighlighter_setCurrentBlockState_int
(void* __this_nativeId,
 int newState0)
{
    QSyntaxHighlighter_QtDShell *__qt_this = (QSyntaxHighlighter_QtDShell *) __this_nativeId;
    __qt_this->__public_setCurrentBlockState((int )newState0);

}

// QSyntaxHighlighter::setCurrentBlockUserData(QTextBlockUserData * data)
QTD_EXTERN QTD_EXPORT void qtd_QSyntaxHighlighter_setCurrentBlockUserData_QTextBlockUserData
(void* __this_nativeId,
 void* data0)
{
    QTextBlockUserData*  __qt_data0 = (QTextBlockUserData* ) data0;
    QSyntaxHighlighter_QtDShell *__qt_this = (QSyntaxHighlighter_QtDShell *) __this_nativeId;
    __qt_this->__public_setCurrentBlockUserData((QTextBlockUserData* )__qt_data0);

}

// QSyntaxHighlighter::setDocument(QTextDocument * doc)
QTD_EXTERN QTD_EXPORT void qtd_QSyntaxHighlighter_setDocument_QTextDocument
(void* __this_nativeId,
 void* doc0)
{
    QTextDocument*  __qt_doc0 = (QTextDocument* ) doc0;
    QSyntaxHighlighter_QtDShell *__qt_this = (QSyntaxHighlighter_QtDShell *) __this_nativeId;
    __qt_this->setDocument((QTextDocument* )__qt_doc0);

}

// QSyntaxHighlighter::setFormat(int start, int count, const QColor & color)
QTD_EXTERN QTD_EXPORT void qtd_QSyntaxHighlighter_setFormat_int_int_QColor
(void* __this_nativeId,
 int start0,
 int count1,
 void* color2)
{
    const QColor&  __qt_color2 = (const QColor& ) *(QColor *)color2;
    QSyntaxHighlighter_QtDShell *__qt_this = (QSyntaxHighlighter_QtDShell *) __this_nativeId;
    __qt_this->__public_setFormat((int )start0, (int )count1, (const QColor& )__qt_color2);

}

// QSyntaxHighlighter::setFormat(int start, int count, const QFont & font)
QTD_EXTERN QTD_EXPORT void qtd_QSyntaxHighlighter_setFormat_int_int_QFont
(void* __this_nativeId,
 int start0,
 int count1,
 void* font2)
{
    const QFont&  __qt_font2 = (const QFont& ) *(QFont *)font2;
    QSyntaxHighlighter_QtDShell *__qt_this = (QSyntaxHighlighter_QtDShell *) __this_nativeId;
    __qt_this->__public_setFormat((int )start0, (int )count1, (const QFont& )__qt_font2);

}

// QSyntaxHighlighter::setFormat(int start, int count, const QTextCharFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QSyntaxHighlighter_setFormat_int_int_QTextCharFormat
(void* __this_nativeId,
 int start0,
 int count1,
 void* format2)
{
    const QTextCharFormat&  __qt_format2 = (const QTextCharFormat& ) *(QTextCharFormat *)format2;
    QSyntaxHighlighter_QtDShell *__qt_this = (QSyntaxHighlighter_QtDShell *) __this_nativeId;
    __qt_this->__public_setFormat((int )start0, (int )count1, (const QTextCharFormat& )__qt_format2);

}

// QSyntaxHighlighter::highlightBlock(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QSyntaxHighlighter_highlightBlock_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QSyntaxHighlighter_QtDShell *__qt_this = (QSyntaxHighlighter_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_highlightBlock((const QString& )__qt_text0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QSyntaxHighlighter_staticMetaObject() {
    return (void*)&QSyntaxHighlighter::staticMetaObject;
}


