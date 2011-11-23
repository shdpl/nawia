#include <QTextCursor>
#include <QTextFrame>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qtexttable.h>
#include <qvariant.h>

#include "QTextTable_shell.h"
#include <iostream>
#include <qtexttable.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QTextTableEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QTextTableEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QTextTable_createEntity(void *nativeId, void* dId)
{
    new QTextTableEntity((QObject*)nativeId, dId);
}

QTextTable_QtDShell::QTextTable_QtDShell(void *d_ptr, QTextDocument*  doc0)
    : QTextTable(doc0),
      QObjectLink(this, d_ptr)
{
}

QTextTable_QtDShell::~QTextTable_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QTextTable_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QTextTable::metaObject();
}

int QTextTable_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QTextTable::qt_metacall(_c, _id, _a);
}

int QTextTable_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QTextTable::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QTextTable_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QTextTable_QtDShell *__qt_this = (QTextTable_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QTextTable_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTextTable_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QTextTable_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QTextTable_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QTextTable_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QTextTable_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QTextTable_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
void QTextTable_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QTextTable_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QTextTable_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QTextTable_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QTextTable_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QTextTable::QTextTable(QTextDocument * doc)
QTD_EXTERN QTD_EXPORT void* qtd_QTextTable_QTextTable_QTextDocument
(void *d_ptr,
 void* doc0)
{
    QTextDocument*  __qt_doc0 = (QTextDocument* ) doc0;
    QTextTable_QtDShell *__qt_this = new QTextTable_QtDShell(d_ptr, (QTextDocument* )__qt_doc0);
    return (void *) __qt_this;

}

// QTextTable::appendColumns(int count)
QTD_EXTERN QTD_EXPORT void qtd_QTextTable_appendColumns_int
(void* __this_nativeId,
 int count0)
{
    QTextTable_QtDShell *__qt_this = (QTextTable_QtDShell *) __this_nativeId;
    __qt_this->appendColumns((int )count0);

}

// QTextTable::appendRows(int count)
QTD_EXTERN QTD_EXPORT void qtd_QTextTable_appendRows_int
(void* __this_nativeId,
 int count0)
{
    QTextTable_QtDShell *__qt_this = (QTextTable_QtDShell *) __this_nativeId;
    __qt_this->appendRows((int )count0);

}

// QTextTable::cellAt(const QTextCursor & c) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextTable_cellAt_QTextCursor_const
(void* __this_nativeId,
 void* c0)
{
    const QTextCursor&  __qt_c0 = (const QTextCursor& ) *(QTextCursor *)c0;
    QTextTable_QtDShell *__qt_this = (QTextTable_QtDShell *) __this_nativeId;
    QTextTableCell  __qt_return_value = __qt_this->cellAt((const QTextCursor& )__qt_c0);

    void* __d_return_value = (void*) new QTextTableCell(__qt_return_value);

    return __d_return_value;
}

// QTextTable::cellAt(int position) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextTable_cellAt_int_const
(void* __this_nativeId,
 int position0)
{
    QTextTable_QtDShell *__qt_this = (QTextTable_QtDShell *) __this_nativeId;
    QTextTableCell  __qt_return_value = __qt_this->cellAt((int )position0);

    void* __d_return_value = (void*) new QTextTableCell(__qt_return_value);

    return __d_return_value;
}

// QTextTable::cellAt(int row, int col) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextTable_cellAt_int_int_const
(void* __this_nativeId,
 int row0,
 int col1)
{
    QTextTable_QtDShell *__qt_this = (QTextTable_QtDShell *) __this_nativeId;
    QTextTableCell  __qt_return_value = __qt_this->cellAt((int )row0, (int )col1);

    void* __d_return_value = (void*) new QTextTableCell(__qt_return_value);

    return __d_return_value;
}

// QTextTable::columns() const
QTD_EXTERN QTD_EXPORT int qtd_QTextTable_columns_const
(void* __this_nativeId)
{
    QTextTable_QtDShell *__qt_this = (QTextTable_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->columns();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextTable::format() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextTable_tableFormat_const
(void* __this_nativeId)
{
    QTextTable_QtDShell *__qt_this = (QTextTable_QtDShell *) __this_nativeId;
    QTextTableFormat  __qt_return_value = __qt_this->format();

    void* __d_return_value = (void*) new QTextTableFormat(__qt_return_value);

    return __d_return_value;
}

// QTextTable::insertColumns(int pos, int num)
QTD_EXTERN QTD_EXPORT void qtd_QTextTable_insertColumns_int_int
(void* __this_nativeId,
 int pos0,
 int num1)
{
    QTextTable_QtDShell *__qt_this = (QTextTable_QtDShell *) __this_nativeId;
    __qt_this->insertColumns((int )pos0, (int )num1);

}

// QTextTable::insertRows(int pos, int num)
QTD_EXTERN QTD_EXPORT void qtd_QTextTable_insertRows_int_int
(void* __this_nativeId,
 int pos0,
 int num1)
{
    QTextTable_QtDShell *__qt_this = (QTextTable_QtDShell *) __this_nativeId;
    __qt_this->insertRows((int )pos0, (int )num1);

}

// QTextTable::mergeCells(const QTextCursor & cursor)
QTD_EXTERN QTD_EXPORT void qtd_QTextTable_mergeCells_QTextCursor
(void* __this_nativeId,
 void* cursor0)
{
    const QTextCursor&  __qt_cursor0 = (const QTextCursor& ) *(QTextCursor *)cursor0;
    QTextTable_QtDShell *__qt_this = (QTextTable_QtDShell *) __this_nativeId;
    __qt_this->mergeCells((const QTextCursor& )__qt_cursor0);

}

// QTextTable::mergeCells(int row, int col, int numRows, int numCols)
QTD_EXTERN QTD_EXPORT void qtd_QTextTable_mergeCells_int_int_int_int
(void* __this_nativeId,
 int row0,
 int col1,
 int numRows2,
 int numCols3)
{
    QTextTable_QtDShell *__qt_this = (QTextTable_QtDShell *) __this_nativeId;
    __qt_this->mergeCells((int )row0, (int )col1, (int )numRows2, (int )numCols3);

}

// QTextTable::removeColumns(int pos, int num)
QTD_EXTERN QTD_EXPORT void qtd_QTextTable_removeColumns_int_int
(void* __this_nativeId,
 int pos0,
 int num1)
{
    QTextTable_QtDShell *__qt_this = (QTextTable_QtDShell *) __this_nativeId;
    __qt_this->removeColumns((int )pos0, (int )num1);

}

// QTextTable::removeRows(int pos, int num)
QTD_EXTERN QTD_EXPORT void qtd_QTextTable_removeRows_int_int
(void* __this_nativeId,
 int pos0,
 int num1)
{
    QTextTable_QtDShell *__qt_this = (QTextTable_QtDShell *) __this_nativeId;
    __qt_this->removeRows((int )pos0, (int )num1);

}

// QTextTable::resize(int rows, int cols)
QTD_EXTERN QTD_EXPORT void qtd_QTextTable_resize_int_int
(void* __this_nativeId,
 int rows0,
 int cols1)
{
    QTextTable_QtDShell *__qt_this = (QTextTable_QtDShell *) __this_nativeId;
    __qt_this->resize((int )rows0, (int )cols1);

}

// QTextTable::rowEnd(const QTextCursor & c) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextTable_rowEnd_QTextCursor_const
(void* __this_nativeId,
 void* c0)
{
    const QTextCursor&  __qt_c0 = (const QTextCursor& ) *(QTextCursor *)c0;
    QTextTable_QtDShell *__qt_this = (QTextTable_QtDShell *) __this_nativeId;
    QTextCursor  __qt_return_value = __qt_this->rowEnd((const QTextCursor& )__qt_c0);

    void* __d_return_value = (void*) new QTextCursor(__qt_return_value);

    return __d_return_value;
}

// QTextTable::rowStart(const QTextCursor & c) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextTable_rowStart_QTextCursor_const
(void* __this_nativeId,
 void* c0)
{
    const QTextCursor&  __qt_c0 = (const QTextCursor& ) *(QTextCursor *)c0;
    QTextTable_QtDShell *__qt_this = (QTextTable_QtDShell *) __this_nativeId;
    QTextCursor  __qt_return_value = __qt_this->rowStart((const QTextCursor& )__qt_c0);

    void* __d_return_value = (void*) new QTextCursor(__qt_return_value);

    return __d_return_value;
}

// QTextTable::rows() const
QTD_EXTERN QTD_EXPORT int qtd_QTextTable_rows_const
(void* __this_nativeId)
{
    QTextTable_QtDShell *__qt_this = (QTextTable_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->rows();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextTable::setFormat(const QTextTableFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QTextTable_setFormat_QTextTableFormat
(void* __this_nativeId,
 void* format0)
{
    const QTextTableFormat&  __qt_format0 = (const QTextTableFormat& ) *(QTextTableFormat *)format0;
    QTextTable_QtDShell *__qt_this = (QTextTable_QtDShell *) __this_nativeId;
    __qt_this->setFormat((const QTextTableFormat& )__qt_format0);

}

// QTextTable::splitCell(int row, int col, int numRows, int numCols)
QTD_EXTERN QTD_EXPORT void qtd_QTextTable_splitCell_int_int_int_int
(void* __this_nativeId,
 int row0,
 int col1,
 int numRows2,
 int numCols3)
{
    QTextTable_QtDShell *__qt_this = (QTextTable_QtDShell *) __this_nativeId;
    __qt_this->splitCell((int )row0, (int )col1, (int )numRows2, (int )numCols3);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QTextTable_staticMetaObject() {
    return (void*)&QTextTable::staticMetaObject;
}


