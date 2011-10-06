#include <QVariant>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qlist.h>
#include <qstandarditemmodel.h>
#include <qvariant.h>

#include "QStandardItem_shell.h"
#include <iostream>
#include <qstandarditemmodel.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_delete(void* nativeId)
{
    delete (QStandardItem_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_destroy(void* nativeId)
{
    call_destructor((QStandardItem_QtDShell*)nativeId);
}

QStandardItem_QtDShell::QStandardItem_QtDShell(void *d_ptr)
    : QStandardItem(),
      QtdObjectLink(d_ptr)
{
}

QStandardItem_QtDShell::QStandardItem_QtDShell(void *d_ptr, const QIcon&  icon0, const QString&  text1)
    : QStandardItem(icon0, text1),
      QtdObjectLink(d_ptr)
{
}

QStandardItem_QtDShell::QStandardItem_QtDShell(void *d_ptr, const QStandardItem&  other0)
    : QStandardItem(other0),
      QtdObjectLink(d_ptr)
{
}

QStandardItem_QtDShell::QStandardItem_QtDShell(void *d_ptr, const QString&  text0)
    : QStandardItem(text0),
      QtdObjectLink(d_ptr)
{
}

QStandardItem_QtDShell::QStandardItem_QtDShell(void *d_ptr, int  rows0, int  columns1)
    : QStandardItem(rows0, columns1),
      QtdObjectLink(d_ptr)
{
}

QStandardItem_QtDShell::~QStandardItem_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QStandardItem_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QStandardItem*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void*, QStandardItem_clone_const_dispatch, (void *dId))
QTD_FUNC(GUI, QStandardItem_clone_const_dispatch)
QStandardItem*  QStandardItem_QtDShell::clone() const
{
    return (QStandardItem*) qtd_QStandardItem_clone_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void*, QStandardItem_data_int_const_dispatch, (void *dId, int role0))
QTD_FUNC(GUI, QStandardItem_data_int_const_dispatch)
QVariant  QStandardItem_QtDShell::data(int  role0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QStandardItem_data_int_const_dispatch(this->dId, (int )role0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QStandardItem_operator_less_QStandardItem_const_dispatch, (void *dId, void* other0))
QTD_FUNC(GUI, QStandardItem_operator_less_QStandardItem_const_dispatch)
bool  QStandardItem_QtDShell::operator<(const QStandardItem&  other0) const
{
    return qtd_QStandardItem_operator_less_QStandardItem_const_dispatch(this->dId, &(QStandardItem& )other0);
}

QTD_FUNC_DECL(GUI, void, QStandardItem_read_QDataStream_dispatch, (void *dId, void* in0))
QTD_FUNC(GUI, QStandardItem_read_QDataStream_dispatch)
void QStandardItem_QtDShell::read(QDataStream&  in0)
{
    qtd_QStandardItem_read_QDataStream_dispatch(this->dId, &(QDataStream& )in0);
}

QTD_FUNC_DECL(GUI, void, QStandardItem_setData_QVariant_int_dispatch, (void *dId, void* value0, int role1))
QTD_FUNC(GUI, QStandardItem_setData_QVariant_int_dispatch)
void QStandardItem_QtDShell::setData(const QVariant&  value0, int  role1)
{
    qtd_QStandardItem_setData_QVariant_int_dispatch(this->dId, &(QVariant& )value0, (int )role1);
}

QTD_FUNC_DECL(GUI, int, QStandardItem_type_const_dispatch, (void *dId))
QTD_FUNC(GUI, QStandardItem_type_const_dispatch)
int  QStandardItem_QtDShell::type() const
{
    return qtd_QStandardItem_type_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QStandardItem_write_QDataStream_const_dispatch, (void *dId, void* out0))
QTD_FUNC(GUI, QStandardItem_write_QDataStream_const_dispatch)
void QStandardItem_QtDShell::write(QDataStream&  out0) const
{
    qtd_QStandardItem_write_QDataStream_const_dispatch(this->dId, &(QDataStream& )out0);
}

QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_initCallBacks(VoidFunc *virts) {
    qtd_QStandardItem_clone_const_dispatch = (qtd_QStandardItem_clone_const_dispatch_t) virts[0];
    qtd_QStandardItem_data_int_const_dispatch = (qtd_QStandardItem_data_int_const_dispatch_t) virts[1];
    qtd_QStandardItem_operator_less_QStandardItem_const_dispatch = (qtd_QStandardItem_operator_less_QStandardItem_const_dispatch_t) virts[2];
    qtd_QStandardItem_read_QDataStream_dispatch = (qtd_QStandardItem_read_QDataStream_dispatch_t) virts[3];
    qtd_QStandardItem_setData_QVariant_int_dispatch = (qtd_QStandardItem_setData_QVariant_int_dispatch_t) virts[4];
    qtd_QStandardItem_type_const_dispatch = (qtd_QStandardItem_type_const_dispatch_t) virts[5];
    qtd_QStandardItem_write_QDataStream_const_dispatch = (qtd_QStandardItem_write_QDataStream_const_dispatch_t) virts[6];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QStandardItem_QtDShell::__public_emitDataChanged()
{
    QStandardItem::emitDataChanged();
}

// Write virtual function overries used to decide on static/virtual calls
QStandardItem*  QStandardItem_QtDShell::__override_clone(bool static_call) const
{
    if (static_call) {
        return QStandardItem::clone();
    } else {
        return clone();
    }
}

QVariant  QStandardItem_QtDShell::__override_data(int  role0, bool static_call) const
{
    if (static_call) {
        return QStandardItem::data((int )role0);
    } else {
        return data((int )role0);
    }
}

bool  QStandardItem_QtDShell::__override_operator_less(const QStandardItem&  other0, bool static_call) const
{
    if (static_call) {
        return QStandardItem::operator<((const QStandardItem& )other0);
    } else {
        return operator<((const QStandardItem& )other0);
    }
}

void QStandardItem_QtDShell::__override_read(QDataStream&  in0, bool static_call)
{
    if (static_call) {
        QStandardItem::read((QDataStream& )in0);
    } else {
        read((QDataStream& )in0);
    }
}

void QStandardItem_QtDShell::__override_setData(const QVariant&  value0, int  role1, bool static_call)
{
    if (static_call) {
        QStandardItem::setData((const QVariant& )value0, (int )role1);
    } else {
        setData((const QVariant& )value0, (int )role1);
    }
}

int  QStandardItem_QtDShell::__override_type(bool static_call) const
{
    if (static_call) {
        return QStandardItem::type();
    } else {
        return type();
    }
}

void QStandardItem_QtDShell::__override_write(QDataStream&  out0, bool static_call) const
{
    if (static_call) {
        QStandardItem::write((QDataStream& )out0);
    } else {
        write((QDataStream& )out0);
    }
}

// ---externC---
// QStandardItem::QStandardItem()
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItem_QStandardItem
(void *d_ptr)
{
    QStandardItem_QtDShell *__qt_this = new QStandardItem_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QStandardItem::QStandardItem(const QIcon & icon, const QString & text)
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItem_QStandardItem_QIcon_string
(void *d_ptr,
 void* icon0,
 DArray text1)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QStandardItem_QtDShell *__qt_this = new QStandardItem_QtDShell(d_ptr, (const QIcon& )__qt_icon0, (const QString& )__qt_text1);
    return (void *) __qt_this;

}

// QStandardItem::QStandardItem(const QStandardItem & other)
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItem_QStandardItem_QStandardItem
(void *d_ptr,
 void* other0)
{
    const QStandardItem&  __qt_other0 = (const QStandardItem& ) * (QStandardItem *) other0;
    QStandardItem_QtDShell *__qt_this = new QStandardItem_QtDShell(d_ptr, (const QStandardItem& )__qt_other0);
    return (void *) __qt_this;

}

// QStandardItem::QStandardItem(const QString & text)
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItem_QStandardItem_string
(void *d_ptr,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QStandardItem_QtDShell *__qt_this = new QStandardItem_QtDShell(d_ptr, (const QString& )__qt_text0);
    return (void *) __qt_this;

}

// QStandardItem::QStandardItem(int rows, int columns)
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItem_QStandardItem_int_int
(void *d_ptr,
 int rows0,
 int columns1)
{
    QStandardItem_QtDShell *__qt_this = new QStandardItem_QtDShell(d_ptr, (int )rows0, (int )columns1);
    return (void *) __qt_this;

}

// QStandardItem::accessibleDescription() const
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_accessibleDescription_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->accessibleDescription();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QStandardItem::accessibleText() const
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_accessibleText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->accessibleText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QStandardItem::appendColumn(const QList<QStandardItem * > & items)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_appendColumn_QList
(void* __this_nativeId,
 void* items0)
{
QList<QStandardItem* > __qt_items0 = (*(QList<QStandardItem* > *)items0);
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->appendColumn((const QList<QStandardItem* >& )__qt_items0);

}

// QStandardItem::appendRow(QStandardItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_appendRow_QStandardItem
(void* __this_nativeId,
 void* item0)
{
    QStandardItem*  __qt_item0 = (QStandardItem* ) item0;
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->appendRow((QStandardItem* )__qt_item0);

}

// QStandardItem::appendRow(const QList<QStandardItem * > & items)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_appendRow_QList
(void* __this_nativeId,
 void* items0)
{
QList<QStandardItem* > __qt_items0 = (*(QList<QStandardItem* > *)items0);
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->appendRow((const QList<QStandardItem* >& )__qt_items0);

}

// QStandardItem::appendRows(const QList<QStandardItem * > & items)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_appendRows_QList
(void* __this_nativeId,
 void* items0)
{
QList<QStandardItem* > __qt_items0 = (*(QList<QStandardItem* > *)items0);
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->appendRows((const QList<QStandardItem* >& )__qt_items0);

}

// QStandardItem::background() const
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItem_background_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    QBrush  __qt_return_value = __qt_this->background();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QStandardItem::checkState() const
QTD_EXTERN QTD_EXPORT int qtd_QStandardItem_checkState_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->checkState();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItem::child(int row, int column) const
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItem_child_int_int_const
(void* __this_nativeId,
 int row0,
 int column1)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    QStandardItem*  __qt_return_value = __qt_this->child((int )row0, (int )column1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStandardItem::column() const
QTD_EXTERN QTD_EXPORT int qtd_QStandardItem_column_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->column();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItem::columnCount() const
QTD_EXTERN QTD_EXPORT int qtd_QStandardItem_columnCount_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->columnCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItem::emitDataChanged()
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_emitDataChanged
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->__public_emitDataChanged();

}

// QStandardItem::flags() const
QTD_EXTERN QTD_EXPORT int qtd_QStandardItem_flags_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->flags();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItem::font() const
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItem_font_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    QFont  __qt_return_value = __qt_this->font();

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QStandardItem::foreground() const
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItem_foreground_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    QBrush  __qt_return_value = __qt_this->foreground();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QStandardItem::hasChildren() const
QTD_EXTERN QTD_EXPORT bool qtd_QStandardItem_hasChildren_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasChildren();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItem::icon() const
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItem_icon_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->icon();

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QStandardItem::index() const
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_index_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->index();

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QStandardItem::insertColumn(int column, const QList<QStandardItem * > & items)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_insertColumn_int_QList
(void* __this_nativeId,
 int column0,
 void* items1)
{
QList<QStandardItem* > __qt_items1 = (*(QList<QStandardItem* > *)items1);
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->insertColumn((int )column0, (const QList<QStandardItem* >& )__qt_items1);

}

// QStandardItem::insertColumns(int column, int count)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_insertColumns_int_int
(void* __this_nativeId,
 int column0,
 int count1)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->insertColumns((int )column0, (int )count1);

}

// QStandardItem::insertRow(int row, QStandardItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_insertRow_int_QStandardItem
(void* __this_nativeId,
 int row0,
 void* item1)
{
    QStandardItem*  __qt_item1 = (QStandardItem* ) item1;
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->insertRow((int )row0, (QStandardItem* )__qt_item1);

}

// QStandardItem::insertRow(int row, const QList<QStandardItem * > & items)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_insertRow_int_QList
(void* __this_nativeId,
 int row0,
 void* items1)
{
QList<QStandardItem* > __qt_items1 = (*(QList<QStandardItem* > *)items1);
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->insertRow((int )row0, (const QList<QStandardItem* >& )__qt_items1);

}

// QStandardItem::insertRows(int row, const QList<QStandardItem * > & items)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_insertRows_int_QList
(void* __this_nativeId,
 int row0,
 void* items1)
{
QList<QStandardItem* > __qt_items1 = (*(QList<QStandardItem* > *)items1);
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->insertRows((int )row0, (const QList<QStandardItem* >& )__qt_items1);

}

// QStandardItem::insertRows(int row, int count)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_insertRows_int_int
(void* __this_nativeId,
 int row0,
 int count1)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->insertRows((int )row0, (int )count1);

}

// QStandardItem::isCheckable() const
QTD_EXTERN QTD_EXPORT bool qtd_QStandardItem_isCheckable_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isCheckable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItem::isDragEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QStandardItem_isDragEnabled_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isDragEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItem::isDropEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QStandardItem_isDropEnabled_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isDropEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItem::isEditable() const
QTD_EXTERN QTD_EXPORT bool qtd_QStandardItem_isEditable_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEditable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItem::isEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QStandardItem_isEnabled_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItem::isSelectable() const
QTD_EXTERN QTD_EXPORT bool qtd_QStandardItem_isSelectable_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSelectable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItem::isTristate() const
QTD_EXTERN QTD_EXPORT bool qtd_QStandardItem_isTristate_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isTristate();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItem::model() const
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItem_model_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    QStandardItemModel*  __qt_return_value = __qt_this->model();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStandardItem::operator<<(QDataStream & out_)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_writeTo_QDataStream
(void* __this_nativeId,
 void* out0)
{
    QDataStream&  __qt_out0 = (QDataStream& ) * (QDataStream *) out0;
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_out0, *__qt_this);

}

// QStandardItem::operator>>(QDataStream & in_)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_readFrom_QDataStream
(void* __this_nativeId,
 void* in0)
{
    QDataStream&  __qt_in0 = (QDataStream& ) * (QDataStream *) in0;
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_in0, *__qt_this);

}

// QStandardItem::parent() const
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItem_parent_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    QStandardItem*  __qt_return_value = __qt_this->parent();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStandardItem::removeColumn(int column)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_removeColumn_int
(void* __this_nativeId,
 int column0)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->removeColumn((int )column0);

}

// QStandardItem::removeColumns(int column, int count)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_removeColumns_int_int
(void* __this_nativeId,
 int column0,
 int count1)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->removeColumns((int )column0, (int )count1);

}

// QStandardItem::removeRow(int row)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_removeRow_int
(void* __this_nativeId,
 int row0)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->removeRow((int )row0);

}

// QStandardItem::removeRows(int row, int count)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_removeRows_int_int
(void* __this_nativeId,
 int row0,
 int count1)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->removeRows((int )row0, (int )count1);

}

// QStandardItem::row() const
QTD_EXTERN QTD_EXPORT int qtd_QStandardItem_row_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->row();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItem::rowCount() const
QTD_EXTERN QTD_EXPORT int qtd_QStandardItem_rowCount_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->rowCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItem::setAccessibleDescription(const QString & accessibleDescription)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setAccessibleDescription_string
(void* __this_nativeId,
 DArray accessibleDescription0)
{
    QString __qt_accessibleDescription0 = QString::fromUtf8((const char *)accessibleDescription0.ptr, accessibleDescription0.length);
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setAccessibleDescription((const QString& )__qt_accessibleDescription0);

}

// QStandardItem::setAccessibleText(const QString & accessibleText)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setAccessibleText_string
(void* __this_nativeId,
 DArray accessibleText0)
{
    QString __qt_accessibleText0 = QString::fromUtf8((const char *)accessibleText0.ptr, accessibleText0.length);
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setAccessibleText((const QString& )__qt_accessibleText0);

}

// QStandardItem::setBackground(const QBrush & brush)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setBackground_QBrush
(void* __this_nativeId,
 void* brush0)
{
    const QBrush&  __qt_brush0 = (const QBrush& ) *(QBrush *)brush0;
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setBackground((const QBrush& )__qt_brush0);

}

// QStandardItem::setCheckState(Qt::CheckState checkState)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setCheckState_CheckState
(void* __this_nativeId,
 int checkState0)
{
    Qt::CheckState __qt_checkState0 = (Qt::CheckState) checkState0;
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setCheckState((Qt::CheckState )__qt_checkState0);

}

// QStandardItem::setCheckable(bool checkable)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setCheckable_bool
(void* __this_nativeId,
 bool checkable0)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setCheckable((bool )checkable0);

}

// QStandardItem::setChild(int row, QStandardItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setChild_int_QStandardItem
(void* __this_nativeId,
 int row0,
 void* item1)
{
    QStandardItem*  __qt_item1 = (QStandardItem* ) item1;
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setChild((int )row0, (QStandardItem* )__qt_item1);

}

// QStandardItem::setChild(int row, int column, QStandardItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setChild_int_int_QStandardItem
(void* __this_nativeId,
 int row0,
 int column1,
 void* item2)
{
    QStandardItem*  __qt_item2 = (QStandardItem* ) item2;
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setChild((int )row0, (int )column1, (QStandardItem* )__qt_item2);

}

// QStandardItem::setColumnCount(int columns)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setColumnCount_int
(void* __this_nativeId,
 int columns0)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setColumnCount((int )columns0);

}

// QStandardItem::setDragEnabled(bool dragEnabled)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setDragEnabled_bool
(void* __this_nativeId,
 bool dragEnabled0)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setDragEnabled((bool )dragEnabled0);

}

// QStandardItem::setDropEnabled(bool dropEnabled)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setDropEnabled_bool
(void* __this_nativeId,
 bool dropEnabled0)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setDropEnabled((bool )dropEnabled0);

}

// QStandardItem::setEditable(bool editable)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setEditable_bool
(void* __this_nativeId,
 bool editable0)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setEditable((bool )editable0);

}

// QStandardItem::setEnabled(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setEnabled_bool
(void* __this_nativeId,
 bool enabled0)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setEnabled((bool )enabled0);

}

// QStandardItem::setFlags(QFlags<Qt::ItemFlag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setFlags_ItemFlags
(void* __this_nativeId,
 int flags0)
{
    QFlags<Qt::ItemFlag> __qt_flags0 = (QFlags<Qt::ItemFlag>) flags0;
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setFlags((Qt::ItemFlags )__qt_flags0);

}

// QStandardItem::setFont(const QFont & font)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setFont_QFont
(void* __this_nativeId,
 void* font0)
{
    const QFont&  __qt_font0 = (const QFont& ) *(QFont *)font0;
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setFont((const QFont& )__qt_font0);

}

// QStandardItem::setForeground(const QBrush & brush)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setForeground_QBrush
(void* __this_nativeId,
 void* brush0)
{
    const QBrush&  __qt_brush0 = (const QBrush& ) *(QBrush *)brush0;
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setForeground((const QBrush& )__qt_brush0);

}

// QStandardItem::setIcon(const QIcon & icon)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setIcon_QIcon
(void* __this_nativeId,
 void* icon0)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setIcon((const QIcon& )__qt_icon0);

}

// QStandardItem::setRowCount(int rows)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setRowCount_int
(void* __this_nativeId,
 int rows0)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setRowCount((int )rows0);

}

// QStandardItem::setSelectable(bool selectable)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setSelectable_bool
(void* __this_nativeId,
 bool selectable0)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setSelectable((bool )selectable0);

}

// QStandardItem::setSizeHint(const QSize & sizeHint)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setSizeHint_QSize
(void* __this_nativeId,
 QSize sizeHint0)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setSizeHint((const QSize& )sizeHint0);

}

// QStandardItem::setStatusTip(const QString & statusTip)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setStatusTip_string
(void* __this_nativeId,
 DArray statusTip0)
{
    QString __qt_statusTip0 = QString::fromUtf8((const char *)statusTip0.ptr, statusTip0.length);
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setStatusTip((const QString& )__qt_statusTip0);

}

// QStandardItem::setText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setText((const QString& )__qt_text0);

}

// QStandardItem::setTextAlignment(QFlags<Qt::AlignmentFlag> textAlignment)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setTextAlignment_Alignment
(void* __this_nativeId,
 int textAlignment0)
{
    QFlags<Qt::AlignmentFlag> __qt_textAlignment0 = (QFlags<Qt::AlignmentFlag>) textAlignment0;
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setTextAlignment((Qt::Alignment )__qt_textAlignment0);

}

// QStandardItem::setToolTip(const QString & toolTip)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setToolTip_string
(void* __this_nativeId,
 DArray toolTip0)
{
    QString __qt_toolTip0 = QString::fromUtf8((const char *)toolTip0.ptr, toolTip0.length);
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setToolTip((const QString& )__qt_toolTip0);

}

// QStandardItem::setTristate(bool tristate)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setTristate_bool
(void* __this_nativeId,
 bool tristate0)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setTristate((bool )tristate0);

}

// QStandardItem::setWhatsThis(const QString & whatsThis)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setWhatsThis_string
(void* __this_nativeId,
 DArray whatsThis0)
{
    QString __qt_whatsThis0 = QString::fromUtf8((const char *)whatsThis0.ptr, whatsThis0.length);
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->setWhatsThis((const QString& )__qt_whatsThis0);

}

// QStandardItem::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->sizeHint();

    *__d_return_value = __qt_return_value;

}

// QStandardItem::sortChildren(int column, Qt::SortOrder order)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_sortChildren_int_SortOrder
(void* __this_nativeId,
 int column0,
 int order1)
{
    Qt::SortOrder __qt_order1 = (Qt::SortOrder) order1;
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    __qt_this->sortChildren((int )column0, (Qt::SortOrder )__qt_order1);

}

// QStandardItem::statusTip() const
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_statusTip_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->statusTip();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QStandardItem::takeChild(int row, int column)
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItem_takeChild_int_int
(void* __this_nativeId,
 int row0,
 int column1)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    QStandardItem*  __qt_return_value = __qt_this->takeChild((int )row0, (int )column1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStandardItem::takeColumn(int column)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_takeColumn_int
(void* __this_nativeId,
 void* __d_return_value,
 int column0)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    QList<QStandardItem* >  __qt_return_value = __qt_this->takeColumn((int )column0);

QList<QStandardItem* > &__d_return_value_tmp = (*(QList<QStandardItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QStandardItem::takeRow(int row)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_takeRow_int
(void* __this_nativeId,
 void* __d_return_value,
 int row0)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    QList<QStandardItem* >  __qt_return_value = __qt_this->takeRow((int )row0);

QList<QStandardItem* > &__d_return_value_tmp = (*(QList<QStandardItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QStandardItem::text() const
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_text_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QStandardItem::textAlignment() const
QTD_EXTERN QTD_EXPORT int qtd_QStandardItem_textAlignment_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->textAlignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItem::toolTip() const
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_toolTip_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toolTip();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QStandardItem::whatsThis() const
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_whatsThis_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->whatsThis();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QStandardItem::clone() const
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItem_clone_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QStandardItem*)__this_nativeId) != NULL;
    QStandardItem*  __qt_return_value = __qt_this->__override_clone(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStandardItem::data(int role) const
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItem_data_int_const
(void* __this_nativeId,
 int role0)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QStandardItem*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_data((int )role0, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QStandardItem::operator<(const QStandardItem & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QStandardItem_operator_less_QStandardItem_const
(void* __this_nativeId,
 void* other0)
{
    const QStandardItem&  __qt_other0 = (const QStandardItem& ) * (QStandardItem *) other0;
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QStandardItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_operator_less((const QStandardItem& )__qt_other0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItem::read(QDataStream & in_)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_read_QDataStream
(void* __this_nativeId,
 void* in0)
{
    QDataStream&  __qt_in0 = (QDataStream& ) * (QDataStream *) in0;
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QStandardItem*)__this_nativeId) != NULL;
    __qt_this->__override_read((QDataStream& )__qt_in0, __do_static_call);

}

// QStandardItem::setData(const QVariant & value, int role)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_setData_QVariant_int
(void* __this_nativeId,
 QVariant* value0,
 int role1)
{
    QVariant __qt_value0 = value0 == NULL ? QVariant() : QVariant(*value0);
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QStandardItem*)__this_nativeId) != NULL;
    __qt_this->__override_setData((const QVariant& )__qt_value0, (int )role1, __do_static_call);

}

// QStandardItem::type() const
QTD_EXTERN QTD_EXPORT int qtd_QStandardItem_type_const
(void* __this_nativeId)
{
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QStandardItem*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_type(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItem::write(QDataStream & out_) const
QTD_EXTERN QTD_EXPORT void qtd_QStandardItem_write_QDataStream_const
(void* __this_nativeId,
 void* out0)
{
    QDataStream&  __qt_out0 = (QDataStream& ) * (QDataStream *) out0;
    QStandardItem_QtDShell *__qt_this = (QStandardItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QStandardItem*)__this_nativeId) != NULL;
    __qt_this->__override_write((QDataStream& )__qt_out0, __do_static_call);

}

// ---externC---end
// Field accessors


