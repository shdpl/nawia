#include <QVariant>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qbytearray.h>
#include <qcompleter.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QCompleter_shell.h"
#include <iostream>
#include <qcompleter.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QCompleterEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QCompleterEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QCompleter_createEntity(void *nativeId, void* dId)
{
    new QCompleterEntity((QObject*)nativeId, dId);
}

QCompleter_QtDShell::QCompleter_QtDShell(void *d_ptr, QAbstractItemModel*  model0, QObject*  parent1)
    : QCompleter(model0, parent1),
      QObjectLink(this, d_ptr)
{
}

QCompleter_QtDShell::QCompleter_QtDShell(void *d_ptr, QObject*  parent0)
    : QCompleter(parent0),
      QObjectLink(this, d_ptr)
{
}

QCompleter_QtDShell::QCompleter_QtDShell(void *d_ptr, const QStringList&  completions0, QObject*  parent1)
    : QCompleter(completions0, parent1),
      QObjectLink(this, d_ptr)
{
}

QCompleter_QtDShell::~QCompleter_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QCompleter_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QCompleter::metaObject();
}

int QCompleter_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QCompleter::qt_metacall(_c, _id, _a);
}

int QCompleter_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QCompleter::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QCompleter_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QCompleter_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QCompleter_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QCompleter_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* o0, void* e1))
bool  QCompleter_QtDShell::eventFilter(QObject*  o0, QEvent*  e1)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )o0, (QEvent* )e1);
}

QTD_FUNC_DECL(GUI, void, QCompleter_pathFromIndex_QModelIndex_const_dispatch, (void *dId, DArray* ret_str, QModelIndexAccessor* index0))
QTD_FUNC(GUI, QCompleter_pathFromIndex_QModelIndex_const_dispatch)
QString  QCompleter_QtDShell::pathFromIndex(const QModelIndex&  index0) const
{
    DArray ret_str;
    qtd_QCompleter_pathFromIndex_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &ret_str, &qtd_from_QModelIndex(index0));
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(GUI, void, QCompleter_splitPath_string_const_dispatch, (void *dId, void * __d_arr, const unsigned short* path0, int path0_size))
QTD_FUNC(GUI, QCompleter_splitPath_string_const_dispatch)
QStringList  QCompleter_QtDShell::splitPath(const QString&  path0) const
{
    QStringList __d_return_value;
    qtd_QCompleter_splitPath_string_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, path0.utf16(), path0.size());
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QCompleter_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QCompleter_initCallBacks(VoidFunc *virts) {
    qtd_QCompleter_pathFromIndex_QModelIndex_const_dispatch = (qtd_QCompleter_pathFromIndex_QModelIndex_const_dispatch_t) virts[0];
    qtd_QCompleter_splitPath_string_const_dispatch = (qtd_QCompleter_splitPath_string_const_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QCompleter_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QCompleter_QtDShell::__public_activated(const QModelIndex&  index0)
{
    QCompleter::activated((const QModelIndex& )index0);
}

void QCompleter_QtDShell::__public_activated(const QString&  text0)
{
    QCompleter::activated((const QString& )text0);
}

void QCompleter_QtDShell::__public_highlighted(const QModelIndex&  index0)
{
    QCompleter::highlighted((const QModelIndex& )index0);
}

void QCompleter_QtDShell::__public_highlighted(const QString&  text0)
{
    QCompleter::highlighted((const QString& )text0);
}

// Write virtual function overries used to decide on static/virtual calls
void QCompleter_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QCompleter_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QCompleter_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QCompleter::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QCompleter_QtDShell::__override_eventFilter(QObject*  o0, QEvent*  e1, bool static_call)
{
    if (static_call) {
        return QCompleter::eventFilter((QObject* )o0, (QEvent* )e1);
    } else {
        return eventFilter((QObject* )o0, (QEvent* )e1);
    }
}

QString  QCompleter_QtDShell::__override_pathFromIndex(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QCompleter::pathFromIndex((const QModelIndex& )index0);
    } else {
        return pathFromIndex((const QModelIndex& )index0);
    }
}

QStringList  QCompleter_QtDShell::__override_splitPath(const QString&  path0, bool static_call) const
{
    if (static_call) {
        return QCompleter::splitPath((const QString& )path0);
    } else {
        return splitPath((const QString& )path0);
    }
}

void QCompleter_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QCompleter::activated(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QCompleter_activated_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    __qt_this->__public_activated((const QModelIndex& )__qt_index0);

}

// QCompleter::activated(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QCompleter_activated_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    __qt_this->__public_activated((const QString& )__qt_text0);

}

// QCompleter::highlighted(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QCompleter_highlighted_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    __qt_this->__public_highlighted((const QModelIndex& )__qt_index0);

}

// QCompleter::highlighted(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QCompleter_highlighted_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    __qt_this->__public_highlighted((const QString& )__qt_text0);

}

// ---externC---
// QCompleter::QCompleter(QAbstractItemModel * model, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QCompleter_QCompleter_QAbstractItemModel_QObject
(void *d_ptr,
 void* model0,
 void* parent1)
{
    QAbstractItemModel*  __qt_model0 = (QAbstractItemModel* ) model0;
    QObject*  __qt_parent1 = (QObject* ) parent1;
    QCompleter_QtDShell *__qt_this = new QCompleter_QtDShell(d_ptr, (QAbstractItemModel* )__qt_model0, (QObject* )__qt_parent1);
    return (void *) __qt_this;

}

// QCompleter::QCompleter(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QCompleter_QCompleter_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QCompleter_QtDShell *__qt_this = new QCompleter_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QCompleter::QCompleter(const QStringList & completions, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QCompleter_QCompleter_QList_QObject
(void *d_ptr,
 void* completions0,
 void* parent1)
{
QStringList __qt_completions0 = (*(QStringList *)completions0);
    QObject*  __qt_parent1 = (QObject* ) parent1;
    QCompleter_QtDShell *__qt_this = new QCompleter_QtDShell(d_ptr, (const QStringList& )__qt_completions0, (QObject* )__qt_parent1);
    return (void *) __qt_this;

}

// QCompleter::caseSensitivity() const
QTD_EXTERN QTD_EXPORT int qtd_QCompleter_caseSensitivity_const
(void* __this_nativeId)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->caseSensitivity();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCompleter::complete(const QRect & rect)
QTD_EXTERN QTD_EXPORT void qtd_QCompleter_complete_QRect
(void* __this_nativeId,
 QRect rect0)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    __qt_this->complete((const QRect& )rect0);

}

// QCompleter::completionColumn() const
QTD_EXTERN QTD_EXPORT int qtd_QCompleter_completionColumn_const
(void* __this_nativeId)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->completionColumn();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCompleter::completionCount() const
QTD_EXTERN QTD_EXPORT int qtd_QCompleter_completionCount_const
(void* __this_nativeId)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->completionCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCompleter::completionMode() const
QTD_EXTERN QTD_EXPORT int qtd_QCompleter_completionMode_const
(void* __this_nativeId)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->completionMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCompleter::completionModel() const
QTD_EXTERN QTD_EXPORT void* qtd_QCompleter_completionModel_const
(void* __this_nativeId)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    QAbstractItemModel*  __qt_return_value = __qt_this->completionModel();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QCompleter::completionPrefix() const
QTD_EXTERN QTD_EXPORT void qtd_QCompleter_completionPrefix_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->completionPrefix();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QCompleter::completionRole() const
QTD_EXTERN QTD_EXPORT int qtd_QCompleter_completionRole_const
(void* __this_nativeId)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->completionRole();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCompleter::currentCompletion() const
QTD_EXTERN QTD_EXPORT void qtd_QCompleter_currentCompletion_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->currentCompletion();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QCompleter::currentIndex() const
QTD_EXTERN QTD_EXPORT void qtd_QCompleter_currentIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->currentIndex();

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QCompleter::currentRow() const
QTD_EXTERN QTD_EXPORT int qtd_QCompleter_currentRow_const
(void* __this_nativeId)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentRow();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCompleter::maxVisibleItems() const
QTD_EXTERN QTD_EXPORT int qtd_QCompleter_maxVisibleItems_const
(void* __this_nativeId)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->maxVisibleItems();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCompleter::model() const
QTD_EXTERN QTD_EXPORT void* qtd_QCompleter_model_const
(void* __this_nativeId)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    QAbstractItemModel*  __qt_return_value = __qt_this->model();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QCompleter::modelSorting() const
QTD_EXTERN QTD_EXPORT int qtd_QCompleter_modelSorting_const
(void* __this_nativeId)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->modelSorting();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCompleter::popup() const
QTD_EXTERN QTD_EXPORT void* qtd_QCompleter_popup_const
(void* __this_nativeId)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    QAbstractItemView*  __qt_return_value = __qt_this->popup();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QCompleter::setCaseSensitivity(Qt::CaseSensitivity caseSensitivity)
QTD_EXTERN QTD_EXPORT void qtd_QCompleter_setCaseSensitivity_CaseSensitivity
(void* __this_nativeId,
 int caseSensitivity0)
{
    Qt::CaseSensitivity __qt_caseSensitivity0 = (Qt::CaseSensitivity) caseSensitivity0;
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    __qt_this->setCaseSensitivity((Qt::CaseSensitivity )__qt_caseSensitivity0);

}

// QCompleter::setCompletionColumn(int column)
QTD_EXTERN QTD_EXPORT void qtd_QCompleter_setCompletionColumn_int
(void* __this_nativeId,
 int column0)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    __qt_this->setCompletionColumn((int )column0);

}

// QCompleter::setCompletionMode(QCompleter::CompletionMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QCompleter_setCompletionMode_CompletionMode
(void* __this_nativeId,
 int mode0)
{
    QCompleter::CompletionMode __qt_mode0 = (QCompleter::CompletionMode) mode0;
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    __qt_this->setCompletionMode((QCompleter::CompletionMode )__qt_mode0);

}

// QCompleter::setCompletionPrefix(const QString & prefix)
QTD_EXTERN QTD_EXPORT void qtd_QCompleter_setCompletionPrefix_string
(void* __this_nativeId,
 DArray prefix0)
{
    QString __qt_prefix0 = QString::fromUtf8((const char *)prefix0.ptr, prefix0.length);
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    __qt_this->setCompletionPrefix((const QString& )__qt_prefix0);

}

// QCompleter::setCompletionRole(int role)
QTD_EXTERN QTD_EXPORT void qtd_QCompleter_setCompletionRole_int
(void* __this_nativeId,
 int role0)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    __qt_this->setCompletionRole((int )role0);

}

// QCompleter::setCurrentRow(int row)
QTD_EXTERN QTD_EXPORT bool qtd_QCompleter_setCurrentRow_int
(void* __this_nativeId,
 int row0)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setCurrentRow((int )row0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCompleter::setMaxVisibleItems(int maxItems)
QTD_EXTERN QTD_EXPORT void qtd_QCompleter_setMaxVisibleItems_int
(void* __this_nativeId,
 int maxItems0)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    __qt_this->setMaxVisibleItems((int )maxItems0);

}

// QCompleter::setModel(QAbstractItemModel * c)
QTD_EXTERN QTD_EXPORT void qtd_QCompleter_setModel_QAbstractItemModel
(void* __this_nativeId,
 void* c0)
{
    QAbstractItemModel*  __qt_c0 = (QAbstractItemModel* ) c0;
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    __qt_this->setModel((QAbstractItemModel* )__qt_c0);

}

// QCompleter::setModelSorting(QCompleter::ModelSorting sorting)
QTD_EXTERN QTD_EXPORT void qtd_QCompleter_setModelSorting_ModelSorting
(void* __this_nativeId,
 int sorting0)
{
    QCompleter::ModelSorting __qt_sorting0 = (QCompleter::ModelSorting) sorting0;
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    __qt_this->setModelSorting((QCompleter::ModelSorting )__qt_sorting0);

}

// QCompleter::setPopup(QAbstractItemView * popup)
QTD_EXTERN QTD_EXPORT void qtd_QCompleter_setPopup_QAbstractItemView
(void* __this_nativeId,
 void* popup0)
{
    QAbstractItemView*  __qt_popup0 = (QAbstractItemView* ) popup0;
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    __qt_this->setPopup((QAbstractItemView* )__qt_popup0);

}

// QCompleter::setWidget(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QCompleter_setWidget_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    __qt_this->setWidget((QWidget* )__qt_widget0);

}

// QCompleter::setWrapAround(bool wrap)
QTD_EXTERN QTD_EXPORT void qtd_QCompleter_setWrapAround_bool
(void* __this_nativeId,
 bool wrap0)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    __qt_this->setWrapAround((bool )wrap0);

}

// QCompleter::widget() const
QTD_EXTERN QTD_EXPORT void* qtd_QCompleter_widget_const
(void* __this_nativeId)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->widget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QCompleter::wrapAround() const
QTD_EXTERN QTD_EXPORT bool qtd_QCompleter_wrapAround_const
(void* __this_nativeId)
{
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->wrapAround();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCompleter::event(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QCompleter_event_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCompleter::eventFilter(QObject * o, QEvent * e)
QTD_EXTERN QTD_EXPORT bool qtd_QCompleter_eventFilter_QObject_QEvent
(void* __this_nativeId,
 void* o0,
 void* e1)
{
    QObject*  __qt_o0 = (QObject* ) o0;
    QEvent*  __qt_e1 = (QEvent* ) e1;
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_eventFilter((QObject* )__qt_o0, (QEvent* )__qt_e1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCompleter::pathFromIndex(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QCompleter_pathFromIndex_QModelIndex_const
(void* __this_nativeId,
 void* __d_return_value,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_pathFromIndex((const QModelIndex& )__qt_index0, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QCompleter::splitPath(const QString & path) const
QTD_EXTERN QTD_EXPORT void qtd_QCompleter_splitPath_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QCompleter_QtDShell *__qt_this = (QCompleter_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_splitPath((const QString& )__qt_path0, __do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QCompleter_staticMetaObject() {
    return (void*)&QCompleter::staticMetaObject;
}


