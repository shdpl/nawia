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

#include "QTextDocument_shell.h"
#include <iostream>
#include <qtextdocument.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QTextDocumentEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QTextDocumentEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_createEntity(void *nativeId, void* dId)
{
    new QTextDocumentEntity((QObject*)nativeId, dId);
}

QTextDocument_QtDShell::QTextDocument_QtDShell(void *d_ptr, QObject*  parent0)
    : QTextDocument(parent0),
      QObjectLink(this, d_ptr)
{
}

QTextDocument_QtDShell::QTextDocument_QtDShell(void *d_ptr, const QString&  text0, QObject*  parent1)
    : QTextDocument(text0, parent1),
      QObjectLink(this, d_ptr)
{
}

QTextDocument_QtDShell::~QTextDocument_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QTextDocument_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QTextDocument::metaObject();
}

int QTextDocument_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QTextDocument::qt_metacall(_c, _id, _a);
}

int QTextDocument_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QTextDocument::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QTextDocument_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QTextDocument_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QTextDocument_clear_dispatch, (void *dId))
QTD_FUNC(GUI, QTextDocument_clear_dispatch)
void QTextDocument_QtDShell::clear()
{
    qtd_QTextDocument_clear_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void*, QTextDocument_createObject_QTextFormat_dispatch, (void *dId, void* f0))
QTD_FUNC(GUI, QTextDocument_createObject_QTextFormat_dispatch)
QTextObject*  QTextDocument_QtDShell::createObject(const QTextFormat&  f0)
{
    return (QTextObject*) qtd_QTextDocument_createObject_QTextFormat_dispatch(QObjectLink::getLink(this)->dId, &(QTextFormat& )f0);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTextDocument_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QTextDocument_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QTextDocument_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void*, QTextDocument_loadResource_int_QUrl_dispatch, (void *dId, int type0, void* name1))
QTD_FUNC(GUI, QTextDocument_loadResource_int_QUrl_dispatch)
QVariant  QTextDocument_QtDShell::loadResource(int  type0, const QUrl&  name1)
{
    QVariant *__qt_return_value = (QVariant*) qtd_QTextDocument_loadResource_int_QUrl_dispatch(QObjectLink::getLink(this)->dId, (int )type0, &(QUrl& )name1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QTextDocument_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_initCallBacks(VoidFunc *virts) {
    qtd_QTextDocument_clear_dispatch = (qtd_QTextDocument_clear_dispatch_t) virts[0];
    qtd_QTextDocument_createObject_QTextFormat_dispatch = (qtd_QTextDocument_createObject_QTextFormat_dispatch_t) virts[1];
    qtd_QTextDocument_loadResource_int_QUrl_dispatch = (qtd_QTextDocument_loadResource_int_QUrl_dispatch_t) virts[2];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QTextDocument_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QTextDocument_QtDShell::__public_blockCountChanged(int  newBlockCount0)
{
    QTextDocument::blockCountChanged((int )newBlockCount0);
}

void QTextDocument_QtDShell::__public_contentsChange(int  from0, int  charsRemoves1, int  charsAdded2)
{
    QTextDocument::contentsChange((int )from0, (int )charsRemoves1, (int )charsAdded2);
}

void QTextDocument_QtDShell::__public_contentsChanged()
{
    QTextDocument::contentsChanged();
}

void QTextDocument_QtDShell::__public_cursorPositionChanged(const QTextCursor&  cursor0)
{
    QTextDocument::cursorPositionChanged((const QTextCursor& )cursor0);
}

void QTextDocument_QtDShell::__public_documentLayoutChanged()
{
    QTextDocument::documentLayoutChanged();
}

void QTextDocument_QtDShell::__public_modificationChanged(bool  m0)
{
    QTextDocument::modificationChanged((bool )m0);
}

void QTextDocument_QtDShell::__public_redoAvailable(bool  arg__1)
{
    QTextDocument::redoAvailable((bool )arg__1);
}

void QTextDocument_QtDShell::__public_undoAvailable(bool  arg__1)
{
    QTextDocument::undoAvailable((bool )arg__1);
}

void QTextDocument_QtDShell::__public_undoCommandAdded()
{
    QTextDocument::undoCommandAdded();
}

// Write virtual function overries used to decide on static/virtual calls
void QTextDocument_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QTextDocument_QtDShell::__override_clear(bool static_call)
{
    if (static_call) {
        QTextDocument::clear();
    } else {
        clear();
    }
}

QTextObject*  QTextDocument_QtDShell::__override_createObject(const QTextFormat&  f0, bool static_call)
{
    if (static_call) {
        return QTextDocument::createObject((const QTextFormat& )f0);
    } else {
        return createObject((const QTextFormat& )f0);
    }
}

void QTextDocument_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QTextDocument_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QTextDocument_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

QVariant  QTextDocument_QtDShell::__override_loadResource(int  type0, const QUrl&  name1, bool static_call)
{
    if (static_call) {
        return QTextDocument::loadResource((int )type0, (const QUrl& )name1);
    } else {
        return loadResource((int )type0, (const QUrl& )name1);
    }
}

void QTextDocument_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QTextDocument::blockCountChanged(int newBlockCount)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_blockCountChanged_int
(void* __this_nativeId,
 int newBlockCount0)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->__public_blockCountChanged((int )newBlockCount0);

}

// QTextDocument::contentsChange(int from, int charsRemoves, int charsAdded)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_contentsChange_int_int_int
(void* __this_nativeId,
 int from0,
 int charsRemoves1,
 int charsAdded2)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->__public_contentsChange((int )from0, (int )charsRemoves1, (int )charsAdded2);

}

// QTextDocument::contentsChanged()
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_contentsChanged
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->__public_contentsChanged();

}

// QTextDocument::cursorPositionChanged(const QTextCursor & cursor)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_cursorPositionChanged_QTextCursor
(void* __this_nativeId,
 void* cursor0)
{
    const QTextCursor&  __qt_cursor0 = (const QTextCursor& ) *(QTextCursor *)cursor0;
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->__public_cursorPositionChanged((const QTextCursor& )__qt_cursor0);

}

// QTextDocument::documentLayoutChanged()
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_documentLayoutChanged
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->__public_documentLayoutChanged();

}

// QTextDocument::modificationChanged(bool m)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_modificationChanged_bool
(void* __this_nativeId,
 bool m0)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->__public_modificationChanged((bool )m0);

}

// QTextDocument::redoAvailable(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_redoAvailable_bool
(void* __this_nativeId,
 bool arg__1)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->__public_redoAvailable((bool )arg__1);

}

// QTextDocument::undoAvailable(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_undoAvailable_bool
(void* __this_nativeId,
 bool arg__1)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->__public_undoAvailable((bool )arg__1);

}

// QTextDocument::undoCommandAdded()
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_undoCommandAdded
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->__public_undoCommandAdded();

}

// ---externC---
// QTextDocument::QTextDocument(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_QTextDocument_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QTextDocument_QtDShell *__qt_this = new QTextDocument_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QTextDocument::QTextDocument(const QString & text, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_QTextDocument_string_QObject
(void *d_ptr,
 DArray text0,
 void* parent1)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QObject*  __qt_parent1 = (QObject* ) parent1;
    QTextDocument_QtDShell *__qt_this = new QTextDocument_QtDShell(d_ptr, (const QString& )__qt_text0, (QObject* )__qt_parent1);
    return (void *) __qt_this;

}

// QTextDocument::addResource(int type, const QUrl & name, const QVariant & resource)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_addResource_int_QUrl_QVariant
(void* __this_nativeId,
 int type0,
 void* name1,
 QVariant* resource2)
{
    const QUrl&  __qt_name1 = (const QUrl& ) *(QUrl *)name1;
    QVariant __qt_resource2 = resource2 == NULL ? QVariant() : QVariant(*resource2);
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->addResource((int )type0, (const QUrl& )__qt_name1, (const QVariant& )__qt_resource2);

}

// QTextDocument::adjustSize()
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_adjustSize
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->adjustSize();

}

// QTextDocument::allFormats() const
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_allFormats_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QVector<QTextFormat >  __qt_return_value = __qt_this->allFormats();


    qtd_allocate_QTextFormat_array(__d_return_value, __qt_return_value.size());
    QVector<QTextFormat > ::const_iterator __qt_return_value_end_it = __qt_return_value.constEnd();
    int i___qt_return_value = 0;
    for (QVector<QTextFormat > ::const_iterator __qt_return_value_it = __qt_return_value.constBegin(); __qt_return_value_it != __qt_return_value_end_it; ++__qt_return_value_it) {
        QTextFormat  __qt_tmp = *__qt_return_value_it;
        void* __java_tmp = (void*) new QTextFormat(__qt_tmp);
        qtd_assign_QTextFormat_array_element(__d_return_value, i___qt_return_value, __java_tmp);
        ++i___qt_return_value;
    }

}

// QTextDocument::availableRedoSteps() const
QTD_EXTERN QTD_EXPORT int qtd_QTextDocument_availableRedoSteps_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->availableRedoSteps();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextDocument::availableUndoSteps() const
QTD_EXTERN QTD_EXPORT int qtd_QTextDocument_availableUndoSteps_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->availableUndoSteps();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextDocument::begin() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_begin_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QTextBlock  __qt_return_value = __qt_this->begin();

    void* __d_return_value = (void*) new QTextBlock(__qt_return_value);

    return __d_return_value;
}

// QTextDocument::blockCount() const
QTD_EXTERN QTD_EXPORT int qtd_QTextDocument_blockCount_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->blockCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextDocument::characterAt(int pos) const
// QTextDocument::characterCount() const
QTD_EXTERN QTD_EXPORT int qtd_QTextDocument_characterCount_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->characterCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextDocument::clone(QObject * parent_) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_clone_QObject_const
(void* __this_nativeId,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QTextDocument*  __qt_return_value = __qt_this->clone((QObject* )__qt_parent0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextDocument::defaultFont() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_defaultFont_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QFont  __qt_return_value = __qt_this->defaultFont();

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QTextDocument::defaultStyleSheet() const
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_defaultStyleSheet_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->defaultStyleSheet();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextDocument::defaultTextOption() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_defaultTextOption_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QTextOption  __qt_return_value = __qt_this->defaultTextOption();

    void* __d_return_value = (void*) new QTextOption(__qt_return_value);

    return __d_return_value;
}

// QTextDocument::documentLayout() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_documentLayout_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QAbstractTextDocumentLayout*  __qt_return_value = __qt_this->documentLayout();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextDocument::documentMargin() const
QTD_EXTERN QTD_EXPORT double qtd_QTextDocument_documentMargin_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->documentMargin();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextDocument::drawContents(QPainter * painter, const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_drawContents_QPainter_QRectF
(void* __this_nativeId,
 void* painter0,
 QRectF rect1)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->drawContents((QPainter* )__qt_painter0, (const QRectF& )rect1);

}

// QTextDocument::end() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_end_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QTextBlock  __qt_return_value = __qt_this->end();

    void* __d_return_value = (void*) new QTextBlock(__qt_return_value);

    return __d_return_value;
}

// QTextDocument::find(const QRegExp & expr, const QTextCursor & from, QFlags<QTextDocument::FindFlag> options) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_find_QRegExp_QTextCursor_FindFlags_const
(void* __this_nativeId,
 void* expr0,
 void* from1,
 int options2)
{
    const QRegExp&  __qt_expr0 = (const QRegExp& ) *(QRegExp *)expr0;
    const QTextCursor&  __qt_from1 = (const QTextCursor& ) *(QTextCursor *)from1;
    QFlags<QTextDocument::FindFlag> __qt_options2 = (QFlags<QTextDocument::FindFlag>) options2;
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QTextCursor  __qt_return_value = __qt_this->find((const QRegExp& )__qt_expr0, (const QTextCursor& )__qt_from1, (QTextDocument::FindFlags )__qt_options2);

    void* __d_return_value = (void*) new QTextCursor(__qt_return_value);

    return __d_return_value;
}

// QTextDocument::find(const QRegExp & expr, int from, QFlags<QTextDocument::FindFlag> options) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_find_QRegExp_int_FindFlags_const
(void* __this_nativeId,
 void* expr0,
 int from1,
 int options2)
{
    const QRegExp&  __qt_expr0 = (const QRegExp& ) *(QRegExp *)expr0;
    QFlags<QTextDocument::FindFlag> __qt_options2 = (QFlags<QTextDocument::FindFlag>) options2;
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QTextCursor  __qt_return_value = __qt_this->find((const QRegExp& )__qt_expr0, (int )from1, (QTextDocument::FindFlags )__qt_options2);

    void* __d_return_value = (void*) new QTextCursor(__qt_return_value);

    return __d_return_value;
}

// QTextDocument::find(const QString & subString, const QTextCursor & from, QFlags<QTextDocument::FindFlag> options) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_find_string_QTextCursor_FindFlags_const
(void* __this_nativeId,
 DArray subString0,
 void* from1,
 int options2)
{
    QString __qt_subString0 = QString::fromUtf8((const char *)subString0.ptr, subString0.length);
    const QTextCursor&  __qt_from1 = (const QTextCursor& ) *(QTextCursor *)from1;
    QFlags<QTextDocument::FindFlag> __qt_options2 = (QFlags<QTextDocument::FindFlag>) options2;
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QTextCursor  __qt_return_value = __qt_this->find((const QString& )__qt_subString0, (const QTextCursor& )__qt_from1, (QTextDocument::FindFlags )__qt_options2);

    void* __d_return_value = (void*) new QTextCursor(__qt_return_value);

    return __d_return_value;
}

// QTextDocument::find(const QString & subString, int from, QFlags<QTextDocument::FindFlag> options) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_find_string_int_FindFlags_const
(void* __this_nativeId,
 DArray subString0,
 int from1,
 int options2)
{
    QString __qt_subString0 = QString::fromUtf8((const char *)subString0.ptr, subString0.length);
    QFlags<QTextDocument::FindFlag> __qt_options2 = (QFlags<QTextDocument::FindFlag>) options2;
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QTextCursor  __qt_return_value = __qt_this->find((const QString& )__qt_subString0, (int )from1, (QTextDocument::FindFlags )__qt_options2);

    void* __d_return_value = (void*) new QTextCursor(__qt_return_value);

    return __d_return_value;
}

// QTextDocument::findBlock(int pos) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_findBlock_int_const
(void* __this_nativeId,
 int pos0)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QTextBlock  __qt_return_value = __qt_this->findBlock((int )pos0);

    void* __d_return_value = (void*) new QTextBlock(__qt_return_value);

    return __d_return_value;
}

// QTextDocument::findBlockByLineNumber(int blockNumber) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_findBlockByLineNumber_int_const
(void* __this_nativeId,
 int blockNumber0)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QTextBlock  __qt_return_value = __qt_this->findBlockByLineNumber((int )blockNumber0);

    void* __d_return_value = (void*) new QTextBlock(__qt_return_value);

    return __d_return_value;
}

// QTextDocument::findBlockByNumber(int blockNumber) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_findBlockByNumber_int_const
(void* __this_nativeId,
 int blockNumber0)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QTextBlock  __qt_return_value = __qt_this->findBlockByNumber((int )blockNumber0);

    void* __d_return_value = (void*) new QTextBlock(__qt_return_value);

    return __d_return_value;
}

// QTextDocument::firstBlock() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_firstBlock_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QTextBlock  __qt_return_value = __qt_this->firstBlock();

    void* __d_return_value = (void*) new QTextBlock(__qt_return_value);

    return __d_return_value;
}

// QTextDocument::frameAt(int pos) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_frameAt_int_const
(void* __this_nativeId,
 int pos0)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QTextFrame*  __qt_return_value = __qt_this->frameAt((int )pos0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextDocument::idealWidth() const
QTD_EXTERN QTD_EXPORT double qtd_QTextDocument_idealWidth_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->idealWidth();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextDocument::indentWidth() const
QTD_EXTERN QTD_EXPORT double qtd_QTextDocument_indentWidth_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->indentWidth();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextDocument::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextDocument_isEmpty_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEmpty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextDocument::isModified() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextDocument_isModified_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isModified();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextDocument::isRedoAvailable() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextDocument_isRedoAvailable_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isRedoAvailable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextDocument::isUndoAvailable() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextDocument_isUndoAvailable_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isUndoAvailable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextDocument::isUndoRedoEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextDocument_isUndoRedoEnabled_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isUndoRedoEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextDocument::lastBlock() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_lastBlock_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QTextBlock  __qt_return_value = __qt_this->lastBlock();

    void* __d_return_value = (void*) new QTextBlock(__qt_return_value);

    return __d_return_value;
}

// QTextDocument::lineCount() const
QTD_EXTERN QTD_EXPORT int qtd_QTextDocument_lineCount_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->lineCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextDocument::markContentsDirty(int from, int length)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_markContentsDirty_int_int
(void* __this_nativeId,
 int from0,
 int length1)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->markContentsDirty((int )from0, (int )length1);

}

// QTextDocument::maximumBlockCount() const
QTD_EXTERN QTD_EXPORT int qtd_QTextDocument_maximumBlockCount_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->maximumBlockCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextDocument::metaInformation(QTextDocument::MetaInformation info) const
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_metaInformation_MetaInformation_const
(void* __this_nativeId,
 void* __d_return_value,
 int info0)
{
    QTextDocument::MetaInformation __qt_info0 = (QTextDocument::MetaInformation) info0;
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->metaInformation((QTextDocument::MetaInformation )__qt_info0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextDocument::object(int objectIndex) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_object_int_const
(void* __this_nativeId,
 int objectIndex0)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QTextObject*  __qt_return_value = __qt_this->object((int )objectIndex0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextDocument::objectForFormat(const QTextFormat & arg__1) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_objectForFormat_QTextFormat_const
(void* __this_nativeId,
 void* arg__1)
{
    const QTextFormat&  __qt_arg__1 = (const QTextFormat& ) *(QTextFormat *)arg__1;
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QTextObject*  __qt_return_value = __qt_this->objectForFormat((const QTextFormat& )__qt_arg__1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextDocument::pageCount() const
QTD_EXTERN QTD_EXPORT int qtd_QTextDocument_pageCount_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->pageCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextDocument::pageSize() const
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_pageSize_const
(void* __this_nativeId,
 QSizeF * __d_return_value)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QSizeF  __qt_return_value = __qt_this->pageSize();

    *__d_return_value = __qt_return_value;

}

// QTextDocument::print(QPrinter * printer) const
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_print_QPrinter_const
(void* __this_nativeId,
 void* printer0)
{
    QPrinter*  __qt_printer0 = (QPrinter* ) printer0;
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->print((QPrinter* )__qt_printer0);

}

// QTextDocument::redo()
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_redo
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->redo();

}

// QTextDocument::redo(QTextCursor * cursor)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_redo_nativepointerQTextCursor
(void* __this_nativeId,
 void* cursor0)
{
    QTextCursor*  __qt_cursor0 = (QTextCursor* ) cursor0;
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->redo((QTextCursor* )__qt_cursor0);

}

// QTextDocument::resource(int type, const QUrl & name) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_resource_int_QUrl_const
(void* __this_nativeId,
 int type0,
 void* name1)
{
    const QUrl&  __qt_name1 = (const QUrl& ) *(QUrl *)name1;
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->resource((int )type0, (const QUrl& )__qt_name1);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QTextDocument::revision() const
QTD_EXTERN QTD_EXPORT int qtd_QTextDocument_revision_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->revision();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextDocument::rootFrame() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_rootFrame_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QTextFrame*  __qt_return_value = __qt_this->rootFrame();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextDocument::setDefaultFont(const QFont & font)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_setDefaultFont_QFont
(void* __this_nativeId,
 void* font0)
{
    const QFont&  __qt_font0 = (const QFont& ) *(QFont *)font0;
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->setDefaultFont((const QFont& )__qt_font0);

}

// QTextDocument::setDefaultStyleSheet(const QString & sheet)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_setDefaultStyleSheet_string
(void* __this_nativeId,
 DArray sheet0)
{
    QString __qt_sheet0 = QString::fromUtf8((const char *)sheet0.ptr, sheet0.length);
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->setDefaultStyleSheet((const QString& )__qt_sheet0);

}

// QTextDocument::setDefaultTextOption(const QTextOption & option)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_setDefaultTextOption_QTextOption
(void* __this_nativeId,
 void* option0)
{
    const QTextOption&  __qt_option0 = (const QTextOption& ) *(QTextOption *)option0;
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->setDefaultTextOption((const QTextOption& )__qt_option0);

}

// QTextDocument::setDocumentLayout(QAbstractTextDocumentLayout * layout)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_setDocumentLayout_QAbstractTextDocumentLayout
(void* __this_nativeId,
 void* layout0)
{
    QAbstractTextDocumentLayout*  __qt_layout0 = (QAbstractTextDocumentLayout* ) layout0;
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->setDocumentLayout((QAbstractTextDocumentLayout* )__qt_layout0);

}

// QTextDocument::setDocumentMargin(double margin)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_setDocumentMargin_double
(void* __this_nativeId,
 double margin0)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->setDocumentMargin((double )margin0);

}

// QTextDocument::setHtml(const QString & html)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_setHtml_string
(void* __this_nativeId,
 DArray html0)
{
    QString __qt_html0 = QString::fromUtf8((const char *)html0.ptr, html0.length);
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->setHtml((const QString& )__qt_html0);

}

// QTextDocument::setIndentWidth(double width)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_setIndentWidth_double
(void* __this_nativeId,
 double width0)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->setIndentWidth((double )width0);

}

// QTextDocument::setMaximumBlockCount(int maximum)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_setMaximumBlockCount_int
(void* __this_nativeId,
 int maximum0)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->setMaximumBlockCount((int )maximum0);

}

// QTextDocument::setMetaInformation(QTextDocument::MetaInformation info, const QString & arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_setMetaInformation_MetaInformation_string
(void* __this_nativeId,
 int info0,
 DArray arg__2)
{
    QTextDocument::MetaInformation __qt_info0 = (QTextDocument::MetaInformation) info0;
    QString __qt_arg__2 = QString::fromUtf8((const char *)arg__2.ptr, arg__2.length);
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->setMetaInformation((QTextDocument::MetaInformation )__qt_info0, (const QString& )__qt_arg__2);

}

// QTextDocument::setModified(bool m)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_setModified_bool
(void* __this_nativeId,
 bool m0)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->setModified((bool )m0);

}

// QTextDocument::setPageSize(const QSizeF & size)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_setPageSize_QSizeF
(void* __this_nativeId,
 QSizeF size0)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->setPageSize((const QSizeF& )size0);

}

// QTextDocument::setPlainText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_setPlainText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->setPlainText((const QString& )__qt_text0);

}

// QTextDocument::setTextWidth(double width)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_setTextWidth_double
(void* __this_nativeId,
 double width0)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->setTextWidth((double )width0);

}

// QTextDocument::setUndoRedoEnabled(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_setUndoRedoEnabled_bool
(void* __this_nativeId,
 bool enable0)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->setUndoRedoEnabled((bool )enable0);

}

// QTextDocument::setUseDesignMetrics(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_setUseDesignMetrics_bool
(void* __this_nativeId,
 bool b0)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->setUseDesignMetrics((bool )b0);

}

// QTextDocument::size() const
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_size_const
(void* __this_nativeId,
 QSizeF * __d_return_value)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QSizeF  __qt_return_value = __qt_this->size();

    *__d_return_value = __qt_return_value;

}

// QTextDocument::textWidth() const
QTD_EXTERN QTD_EXPORT double qtd_QTextDocument_textWidth_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->textWidth();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextDocument::toHtml(const QByteArray & encoding) const
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_toHtml_QByteArray_const
(void* __this_nativeId,
 void* __d_return_value,
 void* encoding0)
{
    const QByteArray&  __qt_encoding0 = (const QByteArray& ) *(QByteArray *)encoding0;
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toHtml((const QByteArray& )__qt_encoding0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextDocument::toPlainText() const
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_toPlainText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toPlainText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextDocument::undo()
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_undo
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->undo();

}

// QTextDocument::undo(QTextCursor * cursor)
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_undo_nativepointerQTextCursor
(void* __this_nativeId,
 void* cursor0)
{
    QTextCursor*  __qt_cursor0 = (QTextCursor* ) cursor0;
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    __qt_this->undo((QTextCursor* )__qt_cursor0);

}

// QTextDocument::useDesignMetrics() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextDocument_useDesignMetrics_const
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->useDesignMetrics();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextDocument::clear()
QTD_EXTERN QTD_EXPORT void qtd_QTextDocument_clear
(void* __this_nativeId)
{
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_clear(__do_static_call);

}

// QTextDocument::createObject(const QTextFormat & f)
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_createObject_QTextFormat
(void* __this_nativeId,
 void* f0)
{
    const QTextFormat&  __qt_f0 = (const QTextFormat& ) *(QTextFormat *)f0;
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QTextObject*  __qt_return_value = __qt_this->__override_createObject((const QTextFormat& )__qt_f0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextDocument::loadResource(int type, const QUrl & name)
QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_loadResource_int_QUrl
(void* __this_nativeId,
 int type0,
 void* name1)
{
    const QUrl&  __qt_name1 = (const QUrl& ) *(QUrl *)name1;
    QTextDocument_QtDShell *__qt_this = (QTextDocument_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_loadResource((int )type0, (const QUrl& )__qt_name1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QTextDocument_staticMetaObject() {
    return (void*)&QTextDocument::staticMetaObject;
}


