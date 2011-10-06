#include <QVariant>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qlist.h>
#include <qstringlist.h>
#include <qtreewidget.h>
#include <qvariant.h>

#include "QTreeWidgetItem_shell.h"
#include <iostream>
#include <qtreewidget.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_delete(void* nativeId)
{
    delete (QTreeWidgetItem_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_destroy(void* nativeId)
{
    call_destructor((QTreeWidgetItem_QtDShell*)nativeId);
}

QTreeWidgetItem_QtDShell::QTreeWidgetItem_QtDShell(void *d_ptr, QTreeWidget*  view0, QTreeWidgetItem*  after1, int  type2)
    : QTreeWidgetItem(view0, after1, type2),
      QtdObjectLink(d_ptr)
{
}

QTreeWidgetItem_QtDShell::QTreeWidgetItem_QtDShell(void *d_ptr, QTreeWidget*  view0, const QStringList&  strings1, int  type2)
    : QTreeWidgetItem(view0, strings1, type2),
      QtdObjectLink(d_ptr)
{
}

QTreeWidgetItem_QtDShell::QTreeWidgetItem_QtDShell(void *d_ptr, QTreeWidget*  view0, int  type1)
    : QTreeWidgetItem(view0, type1),
      QtdObjectLink(d_ptr)
{
}

QTreeWidgetItem_QtDShell::QTreeWidgetItem_QtDShell(void *d_ptr, QTreeWidgetItem*  parent0, QTreeWidgetItem*  after1, int  type2)
    : QTreeWidgetItem(parent0, after1, type2),
      QtdObjectLink(d_ptr)
{
}

QTreeWidgetItem_QtDShell::QTreeWidgetItem_QtDShell(void *d_ptr, QTreeWidgetItem*  parent0, const QStringList&  strings1, int  type2)
    : QTreeWidgetItem(parent0, strings1, type2),
      QtdObjectLink(d_ptr)
{
}

QTreeWidgetItem_QtDShell::QTreeWidgetItem_QtDShell(void *d_ptr, QTreeWidgetItem*  parent0, int  type1)
    : QTreeWidgetItem(parent0, type1),
      QtdObjectLink(d_ptr)
{
}

QTreeWidgetItem_QtDShell::QTreeWidgetItem_QtDShell(void *d_ptr, const QStringList&  strings0, int  type1)
    : QTreeWidgetItem(strings0, type1),
      QtdObjectLink(d_ptr)
{
}

QTreeWidgetItem_QtDShell::QTreeWidgetItem_QtDShell(void *d_ptr, int  type0)
    : QTreeWidgetItem(type0),
      QtdObjectLink(d_ptr)
{
}

QTreeWidgetItem_QtDShell::~QTreeWidgetItem_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QTreeWidgetItem_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QTreeWidgetItem*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void*, QTreeWidgetItem_clone_const_dispatch, (void *dId))
QTD_FUNC(GUI, QTreeWidgetItem_clone_const_dispatch)
QTreeWidgetItem*  QTreeWidgetItem_QtDShell::clone() const
{
    return (QTreeWidgetItem*) qtd_QTreeWidgetItem_clone_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void*, QTreeWidgetItem_data_int_int_const_dispatch, (void *dId, int column0, int role1))
QTD_FUNC(GUI, QTreeWidgetItem_data_int_int_const_dispatch)
QVariant  QTreeWidgetItem_QtDShell::data(int  column0, int  role1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QTreeWidgetItem_data_int_int_const_dispatch(this->dId, (int )column0, (int )role1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QTreeWidgetItem_operator_less_QTreeWidgetItem_const_dispatch, (void *dId, void* other0))
QTD_FUNC(GUI, QTreeWidgetItem_operator_less_QTreeWidgetItem_const_dispatch)
bool  QTreeWidgetItem_QtDShell::operator<(const QTreeWidgetItem&  other0) const
{
    return qtd_QTreeWidgetItem_operator_less_QTreeWidgetItem_const_dispatch(this->dId, &(QTreeWidgetItem& )other0);
}

QTD_FUNC_DECL(GUI, void, QTreeWidgetItem_read_QDataStream_dispatch, (void *dId, void* in0))
QTD_FUNC(GUI, QTreeWidgetItem_read_QDataStream_dispatch)
void QTreeWidgetItem_QtDShell::read(QDataStream&  in0)
{
    qtd_QTreeWidgetItem_read_QDataStream_dispatch(this->dId, &(QDataStream& )in0);
}

QTD_FUNC_DECL(GUI, void, QTreeWidgetItem_setData_int_int_QVariant_dispatch, (void *dId, int column0, int role1, void* value2))
QTD_FUNC(GUI, QTreeWidgetItem_setData_int_int_QVariant_dispatch)
void QTreeWidgetItem_QtDShell::setData(int  column0, int  role1, const QVariant&  value2)
{
    qtd_QTreeWidgetItem_setData_int_int_QVariant_dispatch(this->dId, (int )column0, (int )role1, &(QVariant& )value2);
}

QTD_FUNC_DECL(GUI, void, QTreeWidgetItem_write_QDataStream_const_dispatch, (void *dId, void* out0))
QTD_FUNC(GUI, QTreeWidgetItem_write_QDataStream_const_dispatch)
void QTreeWidgetItem_QtDShell::write(QDataStream&  out0) const
{
    qtd_QTreeWidgetItem_write_QDataStream_const_dispatch(this->dId, &(QDataStream& )out0);
}

QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_initCallBacks(VoidFunc *virts) {
    qtd_QTreeWidgetItem_clone_const_dispatch = (qtd_QTreeWidgetItem_clone_const_dispatch_t) virts[0];
    qtd_QTreeWidgetItem_data_int_int_const_dispatch = (qtd_QTreeWidgetItem_data_int_int_const_dispatch_t) virts[1];
    qtd_QTreeWidgetItem_operator_less_QTreeWidgetItem_const_dispatch = (qtd_QTreeWidgetItem_operator_less_QTreeWidgetItem_const_dispatch_t) virts[2];
    qtd_QTreeWidgetItem_read_QDataStream_dispatch = (qtd_QTreeWidgetItem_read_QDataStream_dispatch_t) virts[3];
    qtd_QTreeWidgetItem_setData_int_int_QVariant_dispatch = (qtd_QTreeWidgetItem_setData_int_int_QVariant_dispatch_t) virts[4];
    qtd_QTreeWidgetItem_write_QDataStream_const_dispatch = (qtd_QTreeWidgetItem_write_QDataStream_const_dispatch_t) virts[5];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QTreeWidgetItem_QtDShell::__public_emitDataChanged()
{
    QTreeWidgetItem::emitDataChanged();
}

// Write virtual function overries used to decide on static/virtual calls
QTreeWidgetItem*  QTreeWidgetItem_QtDShell::__override_clone(bool static_call) const
{
    if (static_call) {
        return QTreeWidgetItem::clone();
    } else {
        return clone();
    }
}

QVariant  QTreeWidgetItem_QtDShell::__override_data(int  column0, int  role1, bool static_call) const
{
    if (static_call) {
        return QTreeWidgetItem::data((int )column0, (int )role1);
    } else {
        return data((int )column0, (int )role1);
    }
}

bool  QTreeWidgetItem_QtDShell::__override_operator_less(const QTreeWidgetItem&  other0, bool static_call) const
{
    if (static_call) {
        return QTreeWidgetItem::operator<((const QTreeWidgetItem& )other0);
    } else {
        return operator<((const QTreeWidgetItem& )other0);
    }
}

void QTreeWidgetItem_QtDShell::__override_read(QDataStream&  in0, bool static_call)
{
    if (static_call) {
        QTreeWidgetItem::read((QDataStream& )in0);
    } else {
        read((QDataStream& )in0);
    }
}

void QTreeWidgetItem_QtDShell::__override_setData(int  column0, int  role1, const QVariant&  value2, bool static_call)
{
    if (static_call) {
        QTreeWidgetItem::setData((int )column0, (int )role1, (const QVariant& )value2);
    } else {
        setData((int )column0, (int )role1, (const QVariant& )value2);
    }
}

void QTreeWidgetItem_QtDShell::__override_write(QDataStream&  out0, bool static_call) const
{
    if (static_call) {
        QTreeWidgetItem::write((QDataStream& )out0);
    } else {
        write((QDataStream& )out0);
    }
}

// ---externC---
// QTreeWidgetItem::QTreeWidgetItem(QTreeWidget * view, QTreeWidgetItem * after, int type)
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItem_QTreeWidgetItem_QTreeWidget_QTreeWidgetItem_int
(void *d_ptr,
 void* view0,
 void* after1,
 int type2)
{
    QTreeWidget*  __qt_view0 = (QTreeWidget* ) view0;
    QTreeWidgetItem*  __qt_after1 = (QTreeWidgetItem* ) after1;
    QTreeWidgetItem_QtDShell *__qt_this = new QTreeWidgetItem_QtDShell(d_ptr, (QTreeWidget* )__qt_view0, (QTreeWidgetItem* )__qt_after1, (int )type2);
    return (void *) __qt_this;

}

// QTreeWidgetItem::QTreeWidgetItem(QTreeWidget * view, const QStringList & strings, int type)
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItem_QTreeWidgetItem_QTreeWidget_QList_int
(void *d_ptr,
 void* view0,
 void* strings1,
 int type2)
{
    QTreeWidget*  __qt_view0 = (QTreeWidget* ) view0;
QStringList __qt_strings1 = (*(QStringList *)strings1);
    QTreeWidgetItem_QtDShell *__qt_this = new QTreeWidgetItem_QtDShell(d_ptr, (QTreeWidget* )__qt_view0, (const QStringList& )__qt_strings1, (int )type2);
    return (void *) __qt_this;

}

// QTreeWidgetItem::QTreeWidgetItem(QTreeWidget * view, int type)
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItem_QTreeWidgetItem_QTreeWidget_int
(void *d_ptr,
 void* view0,
 int type1)
{
    QTreeWidget*  __qt_view0 = (QTreeWidget* ) view0;
    QTreeWidgetItem_QtDShell *__qt_this = new QTreeWidgetItem_QtDShell(d_ptr, (QTreeWidget* )__qt_view0, (int )type1);
    return (void *) __qt_this;

}

// QTreeWidgetItem::QTreeWidgetItem(QTreeWidgetItem * parent_, QTreeWidgetItem * after, int type)
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItem_QTreeWidgetItem_QTreeWidgetItem_QTreeWidgetItem_int
(void *d_ptr,
 void* parent0,
 void* after1,
 int type2)
{
    QTreeWidgetItem*  __qt_parent0 = (QTreeWidgetItem* ) parent0;
    QTreeWidgetItem*  __qt_after1 = (QTreeWidgetItem* ) after1;
    QTreeWidgetItem_QtDShell *__qt_this = new QTreeWidgetItem_QtDShell(d_ptr, (QTreeWidgetItem* )__qt_parent0, (QTreeWidgetItem* )__qt_after1, (int )type2);
    return (void *) __qt_this;

}

// QTreeWidgetItem::QTreeWidgetItem(QTreeWidgetItem * parent_, const QStringList & strings, int type)
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItem_QTreeWidgetItem_QTreeWidgetItem_QList_int
(void *d_ptr,
 void* parent0,
 void* strings1,
 int type2)
{
    QTreeWidgetItem*  __qt_parent0 = (QTreeWidgetItem* ) parent0;
QStringList __qt_strings1 = (*(QStringList *)strings1);
    QTreeWidgetItem_QtDShell *__qt_this = new QTreeWidgetItem_QtDShell(d_ptr, (QTreeWidgetItem* )__qt_parent0, (const QStringList& )__qt_strings1, (int )type2);
    return (void *) __qt_this;

}

// QTreeWidgetItem::QTreeWidgetItem(QTreeWidgetItem * parent_, int type)
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItem_QTreeWidgetItem_QTreeWidgetItem_int
(void *d_ptr,
 void* parent0,
 int type1)
{
    QTreeWidgetItem*  __qt_parent0 = (QTreeWidgetItem* ) parent0;
    QTreeWidgetItem_QtDShell *__qt_this = new QTreeWidgetItem_QtDShell(d_ptr, (QTreeWidgetItem* )__qt_parent0, (int )type1);
    return (void *) __qt_this;

}

// QTreeWidgetItem::QTreeWidgetItem(const QStringList & strings, int type)
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItem_QTreeWidgetItem_QList_int
(void *d_ptr,
 void* strings0,
 int type1)
{
QStringList __qt_strings0 = (*(QStringList *)strings0);
    QTreeWidgetItem_QtDShell *__qt_this = new QTreeWidgetItem_QtDShell(d_ptr, (const QStringList& )__qt_strings0, (int )type1);
    return (void *) __qt_this;

}

// QTreeWidgetItem::QTreeWidgetItem(int type)
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItem_QTreeWidgetItem_int
(void *d_ptr,
 int type0)
{
    QTreeWidgetItem_QtDShell *__qt_this = new QTreeWidgetItem_QtDShell(d_ptr, (int )type0);
    return (void *) __qt_this;

}

// QTreeWidgetItem::addChild(QTreeWidgetItem * child)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_addChild_QTreeWidgetItem
(void* __this_nativeId,
 void* child0)
{
    QTreeWidgetItem*  __qt_child0 = (QTreeWidgetItem* ) child0;
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->addChild((QTreeWidgetItem* )__qt_child0);

}

// QTreeWidgetItem::addChildren(const QList<QTreeWidgetItem * > & children)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_addChildren_QList
(void* __this_nativeId,
 void* children0)
{
QList<QTreeWidgetItem* > __qt_children0 = (*(QList<QTreeWidgetItem* > *)children0);
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->addChildren((const QList<QTreeWidgetItem* >& )__qt_children0);

}

// QTreeWidgetItem::background(int column) const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItem_background_int_const
(void* __this_nativeId,
 int column0)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    QBrush  __qt_return_value = __qt_this->background((int )column0);

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QTreeWidgetItem::checkState(int column) const
QTD_EXTERN QTD_EXPORT int qtd_QTreeWidgetItem_checkState_int_const
(void* __this_nativeId,
 int column0)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->checkState((int )column0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidgetItem::child(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItem_child_int_const
(void* __this_nativeId,
 int index0)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    QTreeWidgetItem*  __qt_return_value = __qt_this->child((int )index0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTreeWidgetItem::childCount() const
QTD_EXTERN QTD_EXPORT int qtd_QTreeWidgetItem_childCount_const
(void* __this_nativeId)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->childCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidgetItem::childIndicatorPolicy() const
QTD_EXTERN QTD_EXPORT int qtd_QTreeWidgetItem_childIndicatorPolicy_const
(void* __this_nativeId)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->childIndicatorPolicy();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidgetItem::columnCount() const
QTD_EXTERN QTD_EXPORT int qtd_QTreeWidgetItem_columnCount_const
(void* __this_nativeId)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->columnCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidgetItem::emitDataChanged()
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_emitDataChanged
(void* __this_nativeId)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->__public_emitDataChanged();

}

// QTreeWidgetItem::flags() const
QTD_EXTERN QTD_EXPORT int qtd_QTreeWidgetItem_flags_const
(void* __this_nativeId)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->flags();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidgetItem::font(int column) const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItem_font_int_const
(void* __this_nativeId,
 int column0)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    QFont  __qt_return_value = __qt_this->font((int )column0);

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QTreeWidgetItem::foreground(int column) const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItem_foreground_int_const
(void* __this_nativeId,
 int column0)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    QBrush  __qt_return_value = __qt_this->foreground((int )column0);

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QTreeWidgetItem::icon(int column) const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItem_icon_int_const
(void* __this_nativeId,
 int column0)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->icon((int )column0);

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QTreeWidgetItem::indexOfChild(QTreeWidgetItem * child) const
QTD_EXTERN QTD_EXPORT int qtd_QTreeWidgetItem_indexOfChild_QTreeWidgetItem_const
(void* __this_nativeId,
 void* child0)
{
    QTreeWidgetItem*  __qt_child0 = (QTreeWidgetItem* ) child0;
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->indexOfChild((QTreeWidgetItem* )__qt_child0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidgetItem::insertChild(int index, QTreeWidgetItem * child)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_insertChild_int_QTreeWidgetItem
(void* __this_nativeId,
 int index0,
 void* child1)
{
    QTreeWidgetItem*  __qt_child1 = (QTreeWidgetItem* ) child1;
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->insertChild((int )index0, (QTreeWidgetItem* )__qt_child1);

}

// QTreeWidgetItem::insertChildren(int index, const QList<QTreeWidgetItem * > & children)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_insertChildren_int_QList
(void* __this_nativeId,
 int index0,
 void* children1)
{
QList<QTreeWidgetItem* > __qt_children1 = (*(QList<QTreeWidgetItem* > *)children1);
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->insertChildren((int )index0, (const QList<QTreeWidgetItem* >& )__qt_children1);

}

// QTreeWidgetItem::isDisabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QTreeWidgetItem_isDisabled_const
(void* __this_nativeId)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isDisabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidgetItem::isExpanded() const
QTD_EXTERN QTD_EXPORT bool qtd_QTreeWidgetItem_isExpanded_const
(void* __this_nativeId)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isExpanded();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidgetItem::isFirstColumnSpanned() const
QTD_EXTERN QTD_EXPORT bool qtd_QTreeWidgetItem_isFirstColumnSpanned_const
(void* __this_nativeId)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isFirstColumnSpanned();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidgetItem::isHidden() const
QTD_EXTERN QTD_EXPORT bool qtd_QTreeWidgetItem_isHidden_const
(void* __this_nativeId)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isHidden();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidgetItem::isSelected() const
QTD_EXTERN QTD_EXPORT bool qtd_QTreeWidgetItem_isSelected_const
(void* __this_nativeId)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSelected();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidgetItem::operator<<(QDataStream & out_)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_writeTo_QDataStream
(void* __this_nativeId,
 void* out0)
{
    QDataStream&  __qt_out0 = (QDataStream& ) * (QDataStream *) out0;
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_out0, *__qt_this);

}

// QTreeWidgetItem::operator>>(QDataStream & in_)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_readFrom_QDataStream
(void* __this_nativeId,
 void* in0)
{
    QDataStream&  __qt_in0 = (QDataStream& ) * (QDataStream *) in0;
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_in0, *__qt_this);

}

// QTreeWidgetItem::parent() const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItem_parent_const
(void* __this_nativeId)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    QTreeWidgetItem*  __qt_return_value = __qt_this->parent();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTreeWidgetItem::removeChild(QTreeWidgetItem * child)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_removeChild_QTreeWidgetItem
(void* __this_nativeId,
 void* child0)
{
    QTreeWidgetItem*  __qt_child0 = (QTreeWidgetItem* ) child0;
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->removeChild((QTreeWidgetItem* )__qt_child0);

}

// QTreeWidgetItem::setBackground(int column, const QBrush & brush)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_setBackground_int_QBrush
(void* __this_nativeId,
 int column0,
 void* brush1)
{
    const QBrush&  __qt_brush1 = (const QBrush& ) *(QBrush *)brush1;
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setBackground((int )column0, (const QBrush& )__qt_brush1);

}

// QTreeWidgetItem::setCheckState(int column, Qt::CheckState state)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_setCheckState_int_CheckState
(void* __this_nativeId,
 int column0,
 int state1)
{
    Qt::CheckState __qt_state1 = (Qt::CheckState) state1;
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setCheckState((int )column0, (Qt::CheckState )__qt_state1);

}

// QTreeWidgetItem::setChildIndicatorPolicy(QTreeWidgetItem::ChildIndicatorPolicy policy)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_setChildIndicatorPolicy_ChildIndicatorPolicy
(void* __this_nativeId,
 int policy0)
{
    QTreeWidgetItem::ChildIndicatorPolicy __qt_policy0 = (QTreeWidgetItem::ChildIndicatorPolicy) policy0;
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setChildIndicatorPolicy((QTreeWidgetItem::ChildIndicatorPolicy )__qt_policy0);

}

// QTreeWidgetItem::setDisabled(bool disabled)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_setDisabled_bool
(void* __this_nativeId,
 bool disabled0)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setDisabled((bool )disabled0);

}

// QTreeWidgetItem::setExpanded(bool expand)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_setExpanded_bool
(void* __this_nativeId,
 bool expand0)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setExpanded((bool )expand0);

}

// QTreeWidgetItem::setFirstColumnSpanned(bool span)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_setFirstColumnSpanned_bool
(void* __this_nativeId,
 bool span0)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setFirstColumnSpanned((bool )span0);

}

// QTreeWidgetItem::setFlags(QFlags<Qt::ItemFlag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_setFlags_ItemFlags
(void* __this_nativeId,
 int flags0)
{
    QFlags<Qt::ItemFlag> __qt_flags0 = (QFlags<Qt::ItemFlag>) flags0;
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setFlags((Qt::ItemFlags )__qt_flags0);

}

// QTreeWidgetItem::setFont(int column, const QFont & font)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_setFont_int_QFont
(void* __this_nativeId,
 int column0,
 void* font1)
{
    const QFont&  __qt_font1 = (const QFont& ) *(QFont *)font1;
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setFont((int )column0, (const QFont& )__qt_font1);

}

// QTreeWidgetItem::setForeground(int column, const QBrush & brush)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_setForeground_int_QBrush
(void* __this_nativeId,
 int column0,
 void* brush1)
{
    const QBrush&  __qt_brush1 = (const QBrush& ) *(QBrush *)brush1;
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setForeground((int )column0, (const QBrush& )__qt_brush1);

}

// QTreeWidgetItem::setHidden(bool hide)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_setHidden_bool
(void* __this_nativeId,
 bool hide0)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setHidden((bool )hide0);

}

// QTreeWidgetItem::setIcon(int column, const QIcon & icon)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_setIcon_int_QIcon
(void* __this_nativeId,
 int column0,
 void* icon1)
{
    const QIcon&  __qt_icon1 = (const QIcon& ) *(QIcon *)icon1;
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setIcon((int )column0, (const QIcon& )__qt_icon1);

}

// QTreeWidgetItem::setSelected(bool select)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_setSelected_bool
(void* __this_nativeId,
 bool select0)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setSelected((bool )select0);

}

// QTreeWidgetItem::setSizeHint(int column, const QSize & size)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_setSizeHint_int_QSize
(void* __this_nativeId,
 int column0,
 QSize size1)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setSizeHint((int )column0, (const QSize& )size1);

}

// QTreeWidgetItem::setStatusTip(int column, const QString & statusTip)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_setStatusTip_int_string
(void* __this_nativeId,
 int column0,
 DArray statusTip1)
{
    QString __qt_statusTip1 = QString::fromUtf8((const char *)statusTip1.ptr, statusTip1.length);
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setStatusTip((int )column0, (const QString& )__qt_statusTip1);

}

// QTreeWidgetItem::setText(int column, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_setText_int_string
(void* __this_nativeId,
 int column0,
 DArray text1)
{
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setText((int )column0, (const QString& )__qt_text1);

}

// QTreeWidgetItem::setTextAlignment(int column, int alignment)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_setTextAlignment_int_int
(void* __this_nativeId,
 int column0,
 int alignment1)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setTextAlignment((int )column0, (int )alignment1);

}

// QTreeWidgetItem::setToolTip(int column, const QString & toolTip)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_setToolTip_int_string
(void* __this_nativeId,
 int column0,
 DArray toolTip1)
{
    QString __qt_toolTip1 = QString::fromUtf8((const char *)toolTip1.ptr, toolTip1.length);
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setToolTip((int )column0, (const QString& )__qt_toolTip1);

}

// QTreeWidgetItem::setWhatsThis(int column, const QString & whatsThis)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_setWhatsThis_int_string
(void* __this_nativeId,
 int column0,
 DArray whatsThis1)
{
    QString __qt_whatsThis1 = QString::fromUtf8((const char *)whatsThis1.ptr, whatsThis1.length);
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setWhatsThis((int )column0, (const QString& )__qt_whatsThis1);

}

// QTreeWidgetItem::sizeHint(int column) const
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_sizeHint_int_const
(void* __this_nativeId,
 QSize * __d_return_value,
 int column0)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->sizeHint((int )column0);

    *__d_return_value = __qt_return_value;

}

// QTreeWidgetItem::sortChildren(int column, Qt::SortOrder order)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_sortChildren_int_SortOrder
(void* __this_nativeId,
 int column0,
 int order1)
{
    Qt::SortOrder __qt_order1 = (Qt::SortOrder) order1;
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->sortChildren((int )column0, (Qt::SortOrder )__qt_order1);

}

// QTreeWidgetItem::statusTip(int column) const
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_statusTip_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int column0)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->statusTip((int )column0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTreeWidgetItem::takeChild(int index)
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItem_takeChild_int
(void* __this_nativeId,
 int index0)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    QTreeWidgetItem*  __qt_return_value = __qt_this->takeChild((int )index0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTreeWidgetItem::takeChildren()
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_takeChildren
(void* __this_nativeId,
 void* __d_return_value)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    QList<QTreeWidgetItem* >  __qt_return_value = __qt_this->takeChildren();

QList<QTreeWidgetItem* > &__d_return_value_tmp = (*(QList<QTreeWidgetItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTreeWidgetItem::text(int column) const
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_text_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int column0)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text((int )column0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTreeWidgetItem::textAlignment(int column) const
QTD_EXTERN QTD_EXPORT int qtd_QTreeWidgetItem_textAlignment_int_const
(void* __this_nativeId,
 int column0)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->textAlignment((int )column0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidgetItem::toolTip(int column) const
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_toolTip_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int column0)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toolTip((int )column0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTreeWidgetItem::treeWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItem_treeWidget_const
(void* __this_nativeId)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    QTreeWidget*  __qt_return_value = __qt_this->treeWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTreeWidgetItem::type() const
QTD_EXTERN QTD_EXPORT int qtd_QTreeWidgetItem_type_const
(void* __this_nativeId)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->type();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidgetItem::whatsThis(int column) const
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_whatsThis_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int column0)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->whatsThis((int )column0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTreeWidgetItem::clone() const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItem_clone_const
(void* __this_nativeId)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QTreeWidgetItem*)__this_nativeId) != NULL;
    QTreeWidgetItem*  __qt_return_value = __qt_this->__override_clone(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTreeWidgetItem::data(int column, int role) const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidgetItem_data_int_int_const
(void* __this_nativeId,
 int column0,
 int role1)
{
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QTreeWidgetItem*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_data((int )column0, (int )role1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QTreeWidgetItem::operator<(const QTreeWidgetItem & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QTreeWidgetItem_operator_less_QTreeWidgetItem_const
(void* __this_nativeId,
 void* other0)
{
    const QTreeWidgetItem&  __qt_other0 = (const QTreeWidgetItem& ) * (QTreeWidgetItem *) other0;
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QTreeWidgetItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_operator_less((const QTreeWidgetItem& )__qt_other0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidgetItem::read(QDataStream & in_)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_read_QDataStream
(void* __this_nativeId,
 void* in0)
{
    QDataStream&  __qt_in0 = (QDataStream& ) * (QDataStream *) in0;
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QTreeWidgetItem*)__this_nativeId) != NULL;
    __qt_this->__override_read((QDataStream& )__qt_in0, __do_static_call);

}

// QTreeWidgetItem::setData(int column, int role, const QVariant & value)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_setData_int_int_QVariant
(void* __this_nativeId,
 int column0,
 int role1,
 QVariant* value2)
{
    QVariant __qt_value2 = value2 == NULL ? QVariant() : QVariant(*value2);
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QTreeWidgetItem*)__this_nativeId) != NULL;
    __qt_this->__override_setData((int )column0, (int )role1, (const QVariant& )__qt_value2, __do_static_call);

}

// QTreeWidgetItem::write(QDataStream & out_) const
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidgetItem_write_QDataStream_const
(void* __this_nativeId,
 void* out0)
{
    QDataStream&  __qt_out0 = (QDataStream& ) * (QDataStream *) out0;
    QTreeWidgetItem_QtDShell *__qt_this = (QTreeWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QTreeWidgetItem*)__this_nativeId) != NULL;
    __qt_this->__override_write((QDataStream& )__qt_out0, __do_static_call);

}

// ---externC---end
// Field accessors


