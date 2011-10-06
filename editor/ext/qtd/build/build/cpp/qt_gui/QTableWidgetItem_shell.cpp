#include <QVariant>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qtablewidget.h>
#include <qvariant.h>

#include "QTableWidgetItem_shell.h"
#include <iostream>
#include <qtablewidget.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_delete(void* nativeId)
{
    delete (QTableWidgetItem_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_destroy(void* nativeId)
{
    call_destructor((QTableWidgetItem_QtDShell*)nativeId);
}

QTableWidgetItem_QtDShell::QTableWidgetItem_QtDShell(void *d_ptr, const QIcon&  icon0, const QString&  text1, int  type2)
    : QTableWidgetItem(icon0, text1, type2),
      QtdObjectLink(d_ptr)
{
}

QTableWidgetItem_QtDShell::QTableWidgetItem_QtDShell(void *d_ptr, const QString&  text0, int  type1)
    : QTableWidgetItem(text0, type1),
      QtdObjectLink(d_ptr)
{
}

QTableWidgetItem_QtDShell::QTableWidgetItem_QtDShell(void *d_ptr, const QTableWidgetItem&  other0)
    : QTableWidgetItem(other0),
      QtdObjectLink(d_ptr)
{
}

QTableWidgetItem_QtDShell::QTableWidgetItem_QtDShell(void *d_ptr, int  type0)
    : QTableWidgetItem(type0),
      QtdObjectLink(d_ptr)
{
}

QTableWidgetItem_QtDShell::~QTableWidgetItem_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QTableWidgetItem_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QTableWidgetItem*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void*, QTableWidgetItem_clone_const_dispatch, (void *dId))
QTD_FUNC(GUI, QTableWidgetItem_clone_const_dispatch)
QTableWidgetItem*  QTableWidgetItem_QtDShell::clone() const
{
    return (QTableWidgetItem*) qtd_QTableWidgetItem_clone_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void*, QTableWidgetItem_data_int_const_dispatch, (void *dId, int role0))
QTD_FUNC(GUI, QTableWidgetItem_data_int_const_dispatch)
QVariant  QTableWidgetItem_QtDShell::data(int  role0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QTableWidgetItem_data_int_const_dispatch(this->dId, (int )role0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QTableWidgetItem_operator_less_QTableWidgetItem_const_dispatch, (void *dId, void* other0))
QTD_FUNC(GUI, QTableWidgetItem_operator_less_QTableWidgetItem_const_dispatch)
bool  QTableWidgetItem_QtDShell::operator<(const QTableWidgetItem&  other0) const
{
    return qtd_QTableWidgetItem_operator_less_QTableWidgetItem_const_dispatch(this->dId, &(QTableWidgetItem& )other0);
}

QTD_FUNC_DECL(GUI, void, QTableWidgetItem_read_QDataStream_dispatch, (void *dId, void* in0))
QTD_FUNC(GUI, QTableWidgetItem_read_QDataStream_dispatch)
void QTableWidgetItem_QtDShell::read(QDataStream&  in0)
{
    qtd_QTableWidgetItem_read_QDataStream_dispatch(this->dId, &(QDataStream& )in0);
}

QTD_FUNC_DECL(GUI, void, QTableWidgetItem_setData_int_QVariant_dispatch, (void *dId, int role0, void* value1))
QTD_FUNC(GUI, QTableWidgetItem_setData_int_QVariant_dispatch)
void QTableWidgetItem_QtDShell::setData(int  role0, const QVariant&  value1)
{
    qtd_QTableWidgetItem_setData_int_QVariant_dispatch(this->dId, (int )role0, &(QVariant& )value1);
}

QTD_FUNC_DECL(GUI, void, QTableWidgetItem_write_QDataStream_const_dispatch, (void *dId, void* out0))
QTD_FUNC(GUI, QTableWidgetItem_write_QDataStream_const_dispatch)
void QTableWidgetItem_QtDShell::write(QDataStream&  out0) const
{
    qtd_QTableWidgetItem_write_QDataStream_const_dispatch(this->dId, &(QDataStream& )out0);
}

QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_initCallBacks(VoidFunc *virts) {
    qtd_QTableWidgetItem_clone_const_dispatch = (qtd_QTableWidgetItem_clone_const_dispatch_t) virts[0];
    qtd_QTableWidgetItem_data_int_const_dispatch = (qtd_QTableWidgetItem_data_int_const_dispatch_t) virts[1];
    qtd_QTableWidgetItem_operator_less_QTableWidgetItem_const_dispatch = (qtd_QTableWidgetItem_operator_less_QTableWidgetItem_const_dispatch_t) virts[2];
    qtd_QTableWidgetItem_read_QDataStream_dispatch = (qtd_QTableWidgetItem_read_QDataStream_dispatch_t) virts[3];
    qtd_QTableWidgetItem_setData_int_QVariant_dispatch = (qtd_QTableWidgetItem_setData_int_QVariant_dispatch_t) virts[4];
    qtd_QTableWidgetItem_write_QDataStream_const_dispatch = (qtd_QTableWidgetItem_write_QDataStream_const_dispatch_t) virts[5];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QTableWidgetItem*  QTableWidgetItem_QtDShell::__override_clone(bool static_call) const
{
    if (static_call) {
        return QTableWidgetItem::clone();
    } else {
        return clone();
    }
}

QVariant  QTableWidgetItem_QtDShell::__override_data(int  role0, bool static_call) const
{
    if (static_call) {
        return QTableWidgetItem::data((int )role0);
    } else {
        return data((int )role0);
    }
}

bool  QTableWidgetItem_QtDShell::__override_operator_less(const QTableWidgetItem&  other0, bool static_call) const
{
    if (static_call) {
        return QTableWidgetItem::operator<((const QTableWidgetItem& )other0);
    } else {
        return operator<((const QTableWidgetItem& )other0);
    }
}

void QTableWidgetItem_QtDShell::__override_read(QDataStream&  in0, bool static_call)
{
    if (static_call) {
        QTableWidgetItem::read((QDataStream& )in0);
    } else {
        read((QDataStream& )in0);
    }
}

void QTableWidgetItem_QtDShell::__override_setData(int  role0, const QVariant&  value1, bool static_call)
{
    if (static_call) {
        QTableWidgetItem::setData((int )role0, (const QVariant& )value1);
    } else {
        setData((int )role0, (const QVariant& )value1);
    }
}

void QTableWidgetItem_QtDShell::__override_write(QDataStream&  out0, bool static_call) const
{
    if (static_call) {
        QTableWidgetItem::write((QDataStream& )out0);
    } else {
        write((QDataStream& )out0);
    }
}

// ---externC---
// QTableWidgetItem::QTableWidgetItem(const QIcon & icon, const QString & text, int type)
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidgetItem_QTableWidgetItem_QIcon_string_int
(void *d_ptr,
 void* icon0,
 DArray text1,
 int type2)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QTableWidgetItem_QtDShell *__qt_this = new QTableWidgetItem_QtDShell(d_ptr, (const QIcon& )__qt_icon0, (const QString& )__qt_text1, (int )type2);
    return (void *) __qt_this;

}

// QTableWidgetItem::QTableWidgetItem(const QString & text, int type)
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidgetItem_QTableWidgetItem_string_int
(void *d_ptr,
 DArray text0,
 int type1)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QTableWidgetItem_QtDShell *__qt_this = new QTableWidgetItem_QtDShell(d_ptr, (const QString& )__qt_text0, (int )type1);
    return (void *) __qt_this;

}

// QTableWidgetItem::QTableWidgetItem(const QTableWidgetItem & other)
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidgetItem_QTableWidgetItem_QTableWidgetItem
(void *d_ptr,
 void* other0)
{
    const QTableWidgetItem&  __qt_other0 = (const QTableWidgetItem& ) * (QTableWidgetItem *) other0;
    QTableWidgetItem_QtDShell *__qt_this = new QTableWidgetItem_QtDShell(d_ptr, (const QTableWidgetItem& )__qt_other0);
    return (void *) __qt_this;

}

// QTableWidgetItem::QTableWidgetItem(int type)
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidgetItem_QTableWidgetItem_int
(void *d_ptr,
 int type0)
{
    QTableWidgetItem_QtDShell *__qt_this = new QTableWidgetItem_QtDShell(d_ptr, (int )type0);
    return (void *) __qt_this;

}

// QTableWidgetItem::background() const
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidgetItem_background_const
(void* __this_nativeId)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    QBrush  __qt_return_value = __qt_this->background();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QTableWidgetItem::checkState() const
QTD_EXTERN QTD_EXPORT int qtd_QTableWidgetItem_checkState_const
(void* __this_nativeId)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->checkState();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidgetItem::column() const
QTD_EXTERN QTD_EXPORT int qtd_QTableWidgetItem_column_const
(void* __this_nativeId)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->column();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidgetItem::flags() const
QTD_EXTERN QTD_EXPORT int qtd_QTableWidgetItem_flags_const
(void* __this_nativeId)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->flags();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidgetItem::font() const
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidgetItem_font_const
(void* __this_nativeId)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    QFont  __qt_return_value = __qt_this->font();

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QTableWidgetItem::foreground() const
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidgetItem_foreground_const
(void* __this_nativeId)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    QBrush  __qt_return_value = __qt_this->foreground();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QTableWidgetItem::icon() const
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidgetItem_icon_const
(void* __this_nativeId)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->icon();

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QTableWidgetItem::isSelected() const
QTD_EXTERN QTD_EXPORT bool qtd_QTableWidgetItem_isSelected_const
(void* __this_nativeId)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSelected();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidgetItem::operator<<(QDataStream & out_)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_writeTo_QDataStream
(void* __this_nativeId,
 void* out0)
{
    QDataStream&  __qt_out0 = (QDataStream& ) * (QDataStream *) out0;
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_out0, *__qt_this);

}

// QTableWidgetItem::operator>>(QDataStream & in_)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_readFrom_QDataStream
(void* __this_nativeId,
 void* in0)
{
    QDataStream&  __qt_in0 = (QDataStream& ) * (QDataStream *) in0;
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_in0, *__qt_this);

}

// QTableWidgetItem::row() const
QTD_EXTERN QTD_EXPORT int qtd_QTableWidgetItem_row_const
(void* __this_nativeId)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->row();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidgetItem::setBackground(const QBrush & brush)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_setBackground_QBrush
(void* __this_nativeId,
 void* brush0)
{
    const QBrush&  __qt_brush0 = (const QBrush& ) *(QBrush *)brush0;
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setBackground((const QBrush& )__qt_brush0);

}

// QTableWidgetItem::setCheckState(Qt::CheckState state)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_setCheckState_CheckState
(void* __this_nativeId,
 int state0)
{
    Qt::CheckState __qt_state0 = (Qt::CheckState) state0;
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setCheckState((Qt::CheckState )__qt_state0);

}

// QTableWidgetItem::setFlags(QFlags<Qt::ItemFlag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_setFlags_ItemFlags
(void* __this_nativeId,
 int flags0)
{
    QFlags<Qt::ItemFlag> __qt_flags0 = (QFlags<Qt::ItemFlag>) flags0;
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setFlags((Qt::ItemFlags )__qt_flags0);

}

// QTableWidgetItem::setFont(const QFont & font)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_setFont_QFont
(void* __this_nativeId,
 void* font0)
{
    const QFont&  __qt_font0 = (const QFont& ) *(QFont *)font0;
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setFont((const QFont& )__qt_font0);

}

// QTableWidgetItem::setForeground(const QBrush & brush)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_setForeground_QBrush
(void* __this_nativeId,
 void* brush0)
{
    const QBrush&  __qt_brush0 = (const QBrush& ) *(QBrush *)brush0;
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setForeground((const QBrush& )__qt_brush0);

}

// QTableWidgetItem::setIcon(const QIcon & icon)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_setIcon_QIcon
(void* __this_nativeId,
 void* icon0)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setIcon((const QIcon& )__qt_icon0);

}

// QTableWidgetItem::setSelected(bool select)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_setSelected_bool
(void* __this_nativeId,
 bool select0)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setSelected((bool )select0);

}

// QTableWidgetItem::setSizeHint(const QSize & size)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_setSizeHint_QSize
(void* __this_nativeId,
 QSize size0)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setSizeHint((const QSize& )size0);

}

// QTableWidgetItem::setStatusTip(const QString & statusTip)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_setStatusTip_string
(void* __this_nativeId,
 DArray statusTip0)
{
    QString __qt_statusTip0 = QString::fromUtf8((const char *)statusTip0.ptr, statusTip0.length);
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setStatusTip((const QString& )__qt_statusTip0);

}

// QTableWidgetItem::setText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_setText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setText((const QString& )__qt_text0);

}

// QTableWidgetItem::setTextAlignment(int alignment)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_setTextAlignment_int
(void* __this_nativeId,
 int alignment0)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setTextAlignment((int )alignment0);

}

// QTableWidgetItem::setToolTip(const QString & toolTip)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_setToolTip_string
(void* __this_nativeId,
 DArray toolTip0)
{
    QString __qt_toolTip0 = QString::fromUtf8((const char *)toolTip0.ptr, toolTip0.length);
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setToolTip((const QString& )__qt_toolTip0);

}

// QTableWidgetItem::setWhatsThis(const QString & whatsThis)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_setWhatsThis_string
(void* __this_nativeId,
 DArray whatsThis0)
{
    QString __qt_whatsThis0 = QString::fromUtf8((const char *)whatsThis0.ptr, whatsThis0.length);
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setWhatsThis((const QString& )__qt_whatsThis0);

}

// QTableWidgetItem::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->sizeHint();

    *__d_return_value = __qt_return_value;

}

// QTableWidgetItem::statusTip() const
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_statusTip_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->statusTip();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTableWidgetItem::tableWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidgetItem_tableWidget_const
(void* __this_nativeId)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    QTableWidget*  __qt_return_value = __qt_this->tableWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTableWidgetItem::text() const
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_text_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTableWidgetItem::textAlignment() const
QTD_EXTERN QTD_EXPORT int qtd_QTableWidgetItem_textAlignment_const
(void* __this_nativeId)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->textAlignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidgetItem::toolTip() const
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_toolTip_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toolTip();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTableWidgetItem::type() const
QTD_EXTERN QTD_EXPORT int qtd_QTableWidgetItem_type_const
(void* __this_nativeId)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->type();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidgetItem::whatsThis() const
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_whatsThis_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->whatsThis();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTableWidgetItem::clone() const
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidgetItem_clone_const
(void* __this_nativeId)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QTableWidgetItem*)__this_nativeId) != NULL;
    QTableWidgetItem*  __qt_return_value = __qt_this->__override_clone(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTableWidgetItem::data(int role) const
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidgetItem_data_int_const
(void* __this_nativeId,
 int role0)
{
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QTableWidgetItem*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_data((int )role0, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QTableWidgetItem::operator<(const QTableWidgetItem & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QTableWidgetItem_operator_less_QTableWidgetItem_const
(void* __this_nativeId,
 void* other0)
{
    const QTableWidgetItem&  __qt_other0 = (const QTableWidgetItem& ) * (QTableWidgetItem *) other0;
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QTableWidgetItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_operator_less((const QTableWidgetItem& )__qt_other0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidgetItem::read(QDataStream & in_)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_read_QDataStream
(void* __this_nativeId,
 void* in0)
{
    QDataStream&  __qt_in0 = (QDataStream& ) * (QDataStream *) in0;
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QTableWidgetItem*)__this_nativeId) != NULL;
    __qt_this->__override_read((QDataStream& )__qt_in0, __do_static_call);

}

// QTableWidgetItem::setData(int role, const QVariant & value)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_setData_int_QVariant
(void* __this_nativeId,
 int role0,
 QVariant* value1)
{
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QTableWidgetItem*)__this_nativeId) != NULL;
    __qt_this->__override_setData((int )role0, (const QVariant& )__qt_value1, __do_static_call);

}

// QTableWidgetItem::write(QDataStream & out_) const
QTD_EXTERN QTD_EXPORT void qtd_QTableWidgetItem_write_QDataStream_const
(void* __this_nativeId,
 void* out0)
{
    QDataStream&  __qt_out0 = (QDataStream& ) * (QDataStream *) out0;
    QTableWidgetItem_QtDShell *__qt_this = (QTableWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QTableWidgetItem*)__this_nativeId) != NULL;
    __qt_this->__override_write((QDataStream& )__qt_out0, __do_static_call);

}

// ---externC---end
// Field accessors


