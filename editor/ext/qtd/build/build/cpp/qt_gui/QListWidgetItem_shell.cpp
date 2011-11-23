#include <QVariant>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qlistwidget.h>
#include <qvariant.h>

#include "QListWidgetItem_shell.h"
#include <iostream>
#include <qlistwidget.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_delete(void* nativeId)
{
    delete (QListWidgetItem_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_destroy(void* nativeId)
{
    call_destructor((QListWidgetItem_QtDShell*)nativeId);
}

QListWidgetItem_QtDShell::QListWidgetItem_QtDShell(void *d_ptr, QListWidget*  view0, int  type1)
    : QListWidgetItem(view0, type1),
      QtdObjectLink(d_ptr)
{
}

QListWidgetItem_QtDShell::QListWidgetItem_QtDShell(void *d_ptr, const QIcon&  icon0, const QString&  text1, QListWidget*  view2, int  type3)
    : QListWidgetItem(icon0, text1, view2, type3),
      QtdObjectLink(d_ptr)
{
}

QListWidgetItem_QtDShell::QListWidgetItem_QtDShell(void *d_ptr, const QListWidgetItem&  other0)
    : QListWidgetItem(other0),
      QtdObjectLink(d_ptr)
{
}

QListWidgetItem_QtDShell::QListWidgetItem_QtDShell(void *d_ptr, const QString&  text0, QListWidget*  view1, int  type2)
    : QListWidgetItem(text0, view1, type2),
      QtdObjectLink(d_ptr)
{
}

QListWidgetItem_QtDShell::~QListWidgetItem_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QListWidgetItem_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QListWidgetItem*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void*, QListWidgetItem_clone_const_dispatch, (void *dId))
QTD_FUNC(GUI, QListWidgetItem_clone_const_dispatch)
QListWidgetItem*  QListWidgetItem_QtDShell::clone() const
{
    return (QListWidgetItem*) qtd_QListWidgetItem_clone_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void*, QListWidgetItem_data_int_const_dispatch, (void *dId, int role0))
QTD_FUNC(GUI, QListWidgetItem_data_int_const_dispatch)
QVariant  QListWidgetItem_QtDShell::data(int  role0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QListWidgetItem_data_int_const_dispatch(this->dId, (int )role0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QListWidgetItem_operator_less_QListWidgetItem_const_dispatch, (void *dId, void* other0))
QTD_FUNC(GUI, QListWidgetItem_operator_less_QListWidgetItem_const_dispatch)
bool  QListWidgetItem_QtDShell::operator<(const QListWidgetItem&  other0) const
{
    return qtd_QListWidgetItem_operator_less_QListWidgetItem_const_dispatch(this->dId, &(QListWidgetItem& )other0);
}

QTD_FUNC_DECL(GUI, void, QListWidgetItem_read_QDataStream_dispatch, (void *dId, void* in0))
QTD_FUNC(GUI, QListWidgetItem_read_QDataStream_dispatch)
void QListWidgetItem_QtDShell::read(QDataStream&  in0)
{
    qtd_QListWidgetItem_read_QDataStream_dispatch(this->dId, &(QDataStream& )in0);
}

QTD_FUNC_DECL(GUI, void, QListWidgetItem_setData_int_QVariant_dispatch, (void *dId, int role0, void* value1))
QTD_FUNC(GUI, QListWidgetItem_setData_int_QVariant_dispatch)
void QListWidgetItem_QtDShell::setData(int  role0, const QVariant&  value1)
{
    qtd_QListWidgetItem_setData_int_QVariant_dispatch(this->dId, (int )role0, &(QVariant& )value1);
}

QTD_FUNC_DECL(GUI, void, QListWidgetItem_write_QDataStream_const_dispatch, (void *dId, void* out0))
QTD_FUNC(GUI, QListWidgetItem_write_QDataStream_const_dispatch)
void QListWidgetItem_QtDShell::write(QDataStream&  out0) const
{
    qtd_QListWidgetItem_write_QDataStream_const_dispatch(this->dId, &(QDataStream& )out0);
}

QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_initCallBacks(VoidFunc *virts) {
    qtd_QListWidgetItem_clone_const_dispatch = (qtd_QListWidgetItem_clone_const_dispatch_t) virts[0];
    qtd_QListWidgetItem_data_int_const_dispatch = (qtd_QListWidgetItem_data_int_const_dispatch_t) virts[1];
    qtd_QListWidgetItem_operator_less_QListWidgetItem_const_dispatch = (qtd_QListWidgetItem_operator_less_QListWidgetItem_const_dispatch_t) virts[2];
    qtd_QListWidgetItem_read_QDataStream_dispatch = (qtd_QListWidgetItem_read_QDataStream_dispatch_t) virts[3];
    qtd_QListWidgetItem_setData_int_QVariant_dispatch = (qtd_QListWidgetItem_setData_int_QVariant_dispatch_t) virts[4];
    qtd_QListWidgetItem_write_QDataStream_const_dispatch = (qtd_QListWidgetItem_write_QDataStream_const_dispatch_t) virts[5];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QListWidgetItem*  QListWidgetItem_QtDShell::__override_clone(bool static_call) const
{
    if (static_call) {
        return QListWidgetItem::clone();
    } else {
        return clone();
    }
}

QVariant  QListWidgetItem_QtDShell::__override_data(int  role0, bool static_call) const
{
    if (static_call) {
        return QListWidgetItem::data((int )role0);
    } else {
        return data((int )role0);
    }
}

bool  QListWidgetItem_QtDShell::__override_operator_less(const QListWidgetItem&  other0, bool static_call) const
{
    if (static_call) {
        return QListWidgetItem::operator<((const QListWidgetItem& )other0);
    } else {
        return operator<((const QListWidgetItem& )other0);
    }
}

void QListWidgetItem_QtDShell::__override_read(QDataStream&  in0, bool static_call)
{
    if (static_call) {
        QListWidgetItem::read((QDataStream& )in0);
    } else {
        read((QDataStream& )in0);
    }
}

void QListWidgetItem_QtDShell::__override_setData(int  role0, const QVariant&  value1, bool static_call)
{
    if (static_call) {
        QListWidgetItem::setData((int )role0, (const QVariant& )value1);
    } else {
        setData((int )role0, (const QVariant& )value1);
    }
}

void QListWidgetItem_QtDShell::__override_write(QDataStream&  out0, bool static_call) const
{
    if (static_call) {
        QListWidgetItem::write((QDataStream& )out0);
    } else {
        write((QDataStream& )out0);
    }
}

// ---externC---
// QListWidgetItem::QListWidgetItem(QListWidget * view, int type)
QTD_EXTERN QTD_EXPORT void* qtd_QListWidgetItem_QListWidgetItem_QListWidget_int
(void *d_ptr,
 void* view0,
 int type1)
{
    QListWidget*  __qt_view0 = (QListWidget* ) view0;
    QListWidgetItem_QtDShell *__qt_this = new QListWidgetItem_QtDShell(d_ptr, (QListWidget* )__qt_view0, (int )type1);
    return (void *) __qt_this;

}

// QListWidgetItem::QListWidgetItem(const QIcon & icon, const QString & text, QListWidget * view, int type)
QTD_EXTERN QTD_EXPORT void* qtd_QListWidgetItem_QListWidgetItem_QIcon_string_QListWidget_int
(void *d_ptr,
 void* icon0,
 DArray text1,
 void* view2,
 int type3)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QListWidget*  __qt_view2 = (QListWidget* ) view2;
    QListWidgetItem_QtDShell *__qt_this = new QListWidgetItem_QtDShell(d_ptr, (const QIcon& )__qt_icon0, (const QString& )__qt_text1, (QListWidget* )__qt_view2, (int )type3);
    return (void *) __qt_this;

}

// QListWidgetItem::QListWidgetItem(const QListWidgetItem & other)
QTD_EXTERN QTD_EXPORT void* qtd_QListWidgetItem_QListWidgetItem_QListWidgetItem
(void *d_ptr,
 void* other0)
{
    const QListWidgetItem&  __qt_other0 = (const QListWidgetItem& ) * (QListWidgetItem *) other0;
    QListWidgetItem_QtDShell *__qt_this = new QListWidgetItem_QtDShell(d_ptr, (const QListWidgetItem& )__qt_other0);
    return (void *) __qt_this;

}

// QListWidgetItem::QListWidgetItem(const QString & text, QListWidget * view, int type)
QTD_EXTERN QTD_EXPORT void* qtd_QListWidgetItem_QListWidgetItem_string_QListWidget_int
(void *d_ptr,
 DArray text0,
 void* view1,
 int type2)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QListWidget*  __qt_view1 = (QListWidget* ) view1;
    QListWidgetItem_QtDShell *__qt_this = new QListWidgetItem_QtDShell(d_ptr, (const QString& )__qt_text0, (QListWidget* )__qt_view1, (int )type2);
    return (void *) __qt_this;

}

// QListWidgetItem::background() const
QTD_EXTERN QTD_EXPORT void* qtd_QListWidgetItem_background_const
(void* __this_nativeId)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    QBrush  __qt_return_value = __qt_this->background();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QListWidgetItem::checkState() const
QTD_EXTERN QTD_EXPORT int qtd_QListWidgetItem_checkState_const
(void* __this_nativeId)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->checkState();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListWidgetItem::flags() const
QTD_EXTERN QTD_EXPORT int qtd_QListWidgetItem_flags_const
(void* __this_nativeId)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->flags();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListWidgetItem::font() const
QTD_EXTERN QTD_EXPORT void* qtd_QListWidgetItem_font_const
(void* __this_nativeId)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    QFont  __qt_return_value = __qt_this->font();

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QListWidgetItem::foreground() const
QTD_EXTERN QTD_EXPORT void* qtd_QListWidgetItem_foreground_const
(void* __this_nativeId)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    QBrush  __qt_return_value = __qt_this->foreground();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QListWidgetItem::icon() const
QTD_EXTERN QTD_EXPORT void* qtd_QListWidgetItem_icon_const
(void* __this_nativeId)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->icon();

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QListWidgetItem::isHidden() const
QTD_EXTERN QTD_EXPORT bool qtd_QListWidgetItem_isHidden_const
(void* __this_nativeId)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isHidden();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListWidgetItem::isSelected() const
QTD_EXTERN QTD_EXPORT bool qtd_QListWidgetItem_isSelected_const
(void* __this_nativeId)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSelected();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListWidgetItem::listWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QListWidgetItem_listWidget_const
(void* __this_nativeId)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    QListWidget*  __qt_return_value = __qt_this->listWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QListWidgetItem::operator<<(QDataStream & out_)
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_writeTo_QDataStream
(void* __this_nativeId,
 void* out0)
{
    QDataStream&  __qt_out0 = (QDataStream& ) * (QDataStream *) out0;
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_out0, *__qt_this);

}

// QListWidgetItem::operator>>(QDataStream & in_)
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_readFrom_QDataStream
(void* __this_nativeId,
 void* in0)
{
    QDataStream&  __qt_in0 = (QDataStream& ) * (QDataStream *) in0;
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_in0, *__qt_this);

}

// QListWidgetItem::setBackground(const QBrush & brush)
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_setBackground_QBrush
(void* __this_nativeId,
 void* brush0)
{
    const QBrush&  __qt_brush0 = (const QBrush& ) *(QBrush *)brush0;
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setBackground((const QBrush& )__qt_brush0);

}

// QListWidgetItem::setCheckState(Qt::CheckState state)
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_setCheckState_CheckState
(void* __this_nativeId,
 int state0)
{
    Qt::CheckState __qt_state0 = (Qt::CheckState) state0;
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setCheckState((Qt::CheckState )__qt_state0);

}

// QListWidgetItem::setFlags(QFlags<Qt::ItemFlag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_setFlags_ItemFlags
(void* __this_nativeId,
 int flags0)
{
    QFlags<Qt::ItemFlag> __qt_flags0 = (QFlags<Qt::ItemFlag>) flags0;
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setFlags((Qt::ItemFlags )__qt_flags0);

}

// QListWidgetItem::setFont(const QFont & font)
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_setFont_QFont
(void* __this_nativeId,
 void* font0)
{
    const QFont&  __qt_font0 = (const QFont& ) *(QFont *)font0;
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setFont((const QFont& )__qt_font0);

}

// QListWidgetItem::setForeground(const QBrush & brush)
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_setForeground_QBrush
(void* __this_nativeId,
 void* brush0)
{
    const QBrush&  __qt_brush0 = (const QBrush& ) *(QBrush *)brush0;
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setForeground((const QBrush& )__qt_brush0);

}

// QListWidgetItem::setHidden(bool hide)
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_setHidden_bool
(void* __this_nativeId,
 bool hide0)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setHidden((bool )hide0);

}

// QListWidgetItem::setIcon(const QIcon & icon)
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_setIcon_QIcon
(void* __this_nativeId,
 void* icon0)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setIcon((const QIcon& )__qt_icon0);

}

// QListWidgetItem::setSelected(bool select)
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_setSelected_bool
(void* __this_nativeId,
 bool select0)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setSelected((bool )select0);

}

// QListWidgetItem::setSizeHint(const QSize & size)
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_setSizeHint_QSize
(void* __this_nativeId,
 QSize size0)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setSizeHint((const QSize& )size0);

}

// QListWidgetItem::setStatusTip(const QString & statusTip)
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_setStatusTip_string
(void* __this_nativeId,
 DArray statusTip0)
{
    QString __qt_statusTip0 = QString::fromUtf8((const char *)statusTip0.ptr, statusTip0.length);
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setStatusTip((const QString& )__qt_statusTip0);

}

// QListWidgetItem::setText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_setText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setText((const QString& )__qt_text0);

}

// QListWidgetItem::setTextAlignment(int alignment)
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_setTextAlignment_int
(void* __this_nativeId,
 int alignment0)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setTextAlignment((int )alignment0);

}

// QListWidgetItem::setToolTip(const QString & toolTip)
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_setToolTip_string
(void* __this_nativeId,
 DArray toolTip0)
{
    QString __qt_toolTip0 = QString::fromUtf8((const char *)toolTip0.ptr, toolTip0.length);
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setToolTip((const QString& )__qt_toolTip0);

}

// QListWidgetItem::setWhatsThis(const QString & whatsThis)
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_setWhatsThis_string
(void* __this_nativeId,
 DArray whatsThis0)
{
    QString __qt_whatsThis0 = QString::fromUtf8((const char *)whatsThis0.ptr, whatsThis0.length);
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->setWhatsThis((const QString& )__qt_whatsThis0);

}

// QListWidgetItem::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->sizeHint();

    *__d_return_value = __qt_return_value;

}

// QListWidgetItem::statusTip() const
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_statusTip_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->statusTip();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QListWidgetItem::text() const
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_text_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QListWidgetItem::textAlignment() const
QTD_EXTERN QTD_EXPORT int qtd_QListWidgetItem_textAlignment_const
(void* __this_nativeId)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->textAlignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListWidgetItem::toolTip() const
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_toolTip_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toolTip();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QListWidgetItem::type() const
QTD_EXTERN QTD_EXPORT int qtd_QListWidgetItem_type_const
(void* __this_nativeId)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->type();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListWidgetItem::whatsThis() const
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_whatsThis_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->whatsThis();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QListWidgetItem::clone() const
QTD_EXTERN QTD_EXPORT void* qtd_QListWidgetItem_clone_const
(void* __this_nativeId)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QListWidgetItem*)__this_nativeId) != NULL;
    QListWidgetItem*  __qt_return_value = __qt_this->__override_clone(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QListWidgetItem::data(int role) const
QTD_EXTERN QTD_EXPORT void* qtd_QListWidgetItem_data_int_const
(void* __this_nativeId,
 int role0)
{
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QListWidgetItem*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_data((int )role0, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QListWidgetItem::operator<(const QListWidgetItem & other) const
QTD_EXTERN QTD_EXPORT bool qtd_QListWidgetItem_operator_less_QListWidgetItem_const
(void* __this_nativeId,
 void* other0)
{
    const QListWidgetItem&  __qt_other0 = (const QListWidgetItem& ) * (QListWidgetItem *) other0;
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QListWidgetItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_operator_less((const QListWidgetItem& )__qt_other0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListWidgetItem::read(QDataStream & in_)
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_read_QDataStream
(void* __this_nativeId,
 void* in0)
{
    QDataStream&  __qt_in0 = (QDataStream& ) * (QDataStream *) in0;
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QListWidgetItem*)__this_nativeId) != NULL;
    __qt_this->__override_read((QDataStream& )__qt_in0, __do_static_call);

}

// QListWidgetItem::setData(int role, const QVariant & value)
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_setData_int_QVariant
(void* __this_nativeId,
 int role0,
 QVariant* value1)
{
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QListWidgetItem*)__this_nativeId) != NULL;
    __qt_this->__override_setData((int )role0, (const QVariant& )__qt_value1, __do_static_call);

}

// QListWidgetItem::write(QDataStream & out_) const
QTD_EXTERN QTD_EXPORT void qtd_QListWidgetItem_write_QDataStream_const
(void* __this_nativeId,
 void* out0)
{
    QDataStream&  __qt_out0 = (QDataStream& ) * (QDataStream *) out0;
    QListWidgetItem_QtDShell *__qt_this = (QListWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QListWidgetItem*)__this_nativeId) != NULL;
    __qt_this->__override_write((QDataStream& )__qt_out0, __do_static_call);

}

// ---externC---end
// Field accessors


