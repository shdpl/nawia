#include <QVariant>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfont.h>
#include <qitemdelegate.h>
#include <qitemeditorfactory.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpixmap.h>
#include <qstyleoption.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QItemDelegate_shell.h"
#include <iostream>
#include <qitemdelegate.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QItemDelegateEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QItemDelegateEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QItemDelegate_createEntity(void *nativeId, void* dId)
{
    new QItemDelegateEntity((QObject*)nativeId, dId);
}

QItemDelegate_QtDShell::QItemDelegate_QtDShell(void *d_ptr, QObject*  parent0)
    : QItemDelegate(parent0),
      QObjectLink(this, d_ptr)
{
}

QItemDelegate_QtDShell::~QItemDelegate_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QItemDelegate_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QItemDelegate::metaObject();
}

int QItemDelegate_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QItemDelegate::qt_metacall(_c, _id, _a);
}

int QItemDelegate_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QItemDelegate::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QItemDelegate_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QItemDelegate_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemDelegate_createEditor_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch, (void *dId, void* parent0, void* option1, QModelIndexAccessor* index2))
QWidget*  QItemDelegate_QtDShell::createEditor(QWidget*  parent0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2) const
{
    return (QWidget*) qtd_QAbstractItemDelegate_createEditor_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )parent0, &(QStyleOptionViewItem& )option1, &qtd_from_QModelIndex(index2));
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QItemDelegate_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QItemDelegate_drawCheck_QPainter_QStyleOptionViewItem_QRect_CheckState_const_dispatch, (void *dId, void* painter0, void* option1, QRect* rect2, int state3))
QTD_FUNC(GUI, QItemDelegate_drawCheck_QPainter_QStyleOptionViewItem_QRect_CheckState_const_dispatch)
void QItemDelegate_QtDShell::drawCheck(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QRect&  rect2, Qt::CheckState  state3) const
{
    qtd_QItemDelegate_drawCheck_QPainter_QStyleOptionViewItem_QRect_CheckState_const_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QStyleOptionViewItem& )option1, &(QRect& )rect2, (Qt::CheckState )state3);
}

QTD_FUNC_DECL(GUI, void, QItemDelegate_drawDecoration_QPainter_QStyleOptionViewItem_QRect_QPixmap_const_dispatch, (void *dId, void* painter0, void* option1, QRect* rect2, void* pixmap3))
QTD_FUNC(GUI, QItemDelegate_drawDecoration_QPainter_QStyleOptionViewItem_QRect_QPixmap_const_dispatch)
void QItemDelegate_QtDShell::drawDecoration(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QRect&  rect2, const QPixmap&  pixmap3) const
{
    qtd_QItemDelegate_drawDecoration_QPainter_QStyleOptionViewItem_QRect_QPixmap_const_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QStyleOptionViewItem& )option1, &(QRect& )rect2, &(QPixmap& )pixmap3);
}

QTD_FUNC_DECL(GUI, void, QItemDelegate_drawDisplay_QPainter_QStyleOptionViewItem_QRect_string_const_dispatch, (void *dId, void* painter0, void* option1, QRect* rect2, const unsigned short* text3, int text3_size))
QTD_FUNC(GUI, QItemDelegate_drawDisplay_QPainter_QStyleOptionViewItem_QRect_string_const_dispatch)
void QItemDelegate_QtDShell::drawDisplay(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QRect&  rect2, const QString&  text3) const
{
    qtd_QItemDelegate_drawDisplay_QPainter_QStyleOptionViewItem_QRect_string_const_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QStyleOptionViewItem& )option1, &(QRect& )rect2, text3.utf16(), text3.size());
}

QTD_FUNC_DECL(GUI, void, QItemDelegate_drawFocus_QPainter_QStyleOptionViewItem_QRect_const_dispatch, (void *dId, void* painter0, void* option1, QRect* rect2))
QTD_FUNC(GUI, QItemDelegate_drawFocus_QPainter_QStyleOptionViewItem_QRect_const_dispatch)
void QItemDelegate_QtDShell::drawFocus(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QRect&  rect2) const
{
    qtd_QItemDelegate_drawFocus_QPainter_QStyleOptionViewItem_QRect_const_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QStyleOptionViewItem& )option1, &(QRect& )rect2);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemDelegate_editorEvent_QEvent_QAbstractItemModel_QStyleOptionViewItem_QModelIndex_dispatch, (void *dId, void* event0, void* model1, void* option2, QModelIndexAccessor* index3))
bool  QItemDelegate_QtDShell::editorEvent(QEvent*  event0, QAbstractItemModel*  model1, const QStyleOptionViewItem&  option2, const QModelIndex&  index3)
{
    return qtd_QAbstractItemDelegate_editorEvent_QEvent_QAbstractItemModel_QStyleOptionViewItem_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0, (QAbstractItemModel* )model1, &(QStyleOptionViewItem& )option2, &qtd_from_QModelIndex(index3));
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QItemDelegate_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* object0, void* event1))
bool  QItemDelegate_QtDShell::eventFilter(QObject*  object0, QEvent*  event1)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )object0, (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemDelegate_paint_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch, (void *dId, void* painter0, void* option1, QModelIndexAccessor* index2))
void QItemDelegate_QtDShell::paint(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2) const
{
    qtd_QAbstractItemDelegate_paint_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QStyleOptionViewItem& )option1, &qtd_from_QModelIndex(index2));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemDelegate_setEditorData_QWidget_QModelIndex_const_dispatch, (void *dId, void* editor0, QModelIndexAccessor* index1))
void QItemDelegate_QtDShell::setEditorData(QWidget*  editor0, const QModelIndex&  index1) const
{
    qtd_QAbstractItemDelegate_setEditorData_QWidget_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0, &qtd_from_QModelIndex(index1));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemDelegate_setModelData_QWidget_QAbstractItemModel_QModelIndex_const_dispatch, (void *dId, void* editor0, void* model1, QModelIndexAccessor* index2))
void QItemDelegate_QtDShell::setModelData(QWidget*  editor0, QAbstractItemModel*  model1, const QModelIndex&  index2) const
{
    qtd_QAbstractItemDelegate_setModelData_QWidget_QAbstractItemModel_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0, (QAbstractItemModel* )model1, &qtd_from_QModelIndex(index2));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemDelegate_sizeHint_QStyleOptionViewItem_QModelIndex_const_dispatch, (void *dId, QSize *__d_return_value, void* option0, QModelIndexAccessor* index1))
QSize  QItemDelegate_QtDShell::sizeHint(const QStyleOptionViewItem&  option0, const QModelIndex&  index1) const
{
    QSize __d_return_value;
    qtd_QAbstractItemDelegate_sizeHint_QStyleOptionViewItem_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &(QStyleOptionViewItem& )option0, &qtd_from_QModelIndex(index1));
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QItemDelegate_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemDelegate_updateEditorGeometry_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch, (void *dId, void* editor0, void* option1, QModelIndexAccessor* index2))
void QItemDelegate_QtDShell::updateEditorGeometry(QWidget*  editor0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2) const
{
    qtd_QAbstractItemDelegate_updateEditorGeometry_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0, &(QStyleOptionViewItem& )option1, &qtd_from_QModelIndex(index2));
}

QTD_EXTERN QTD_EXPORT void qtd_QItemDelegate_initCallBacks(VoidFunc *virts) {
    qtd_QItemDelegate_drawCheck_QPainter_QStyleOptionViewItem_QRect_CheckState_const_dispatch = (qtd_QItemDelegate_drawCheck_QPainter_QStyleOptionViewItem_QRect_CheckState_const_dispatch_t) virts[0];
    qtd_QItemDelegate_drawDecoration_QPainter_QStyleOptionViewItem_QRect_QPixmap_const_dispatch = (qtd_QItemDelegate_drawDecoration_QPainter_QStyleOptionViewItem_QRect_QPixmap_const_dispatch_t) virts[1];
    qtd_QItemDelegate_drawDisplay_QPainter_QStyleOptionViewItem_QRect_string_const_dispatch = (qtd_QItemDelegate_drawDisplay_QPainter_QStyleOptionViewItem_QRect_string_const_dispatch_t) virts[2];
    qtd_QItemDelegate_drawFocus_QPainter_QStyleOptionViewItem_QRect_const_dispatch = (qtd_QItemDelegate_drawFocus_QPainter_QStyleOptionViewItem_QRect_const_dispatch_t) virts[3];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QRect  QItemDelegate_QtDShell::__public_check(const QStyleOptionViewItem&  option0, const QRect&  bounding1, const QVariant&  variant2) const
{
    return QItemDelegate::check((const QStyleOptionViewItem& )option0, (const QRect& )bounding1, (const QVariant& )variant2);
}

QPixmap  QItemDelegate_QtDShell::__public_decoration(const QStyleOptionViewItem&  option0, const QVariant&  variant1) const
{
    return QItemDelegate::decoration((const QStyleOptionViewItem& )option0, (const QVariant& )variant1);
}

void QItemDelegate_QtDShell::__public_drawBackground(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2) const
{
    QItemDelegate::drawBackground((QPainter* )painter0, (const QStyleOptionViewItem& )option1, (const QModelIndex& )index2);
}

QRect  QItemDelegate_QtDShell::__public_rect(const QStyleOptionViewItem&  option0, const QModelIndex&  index1, int  role2) const
{
    return QItemDelegate::rect((const QStyleOptionViewItem& )option0, (const QModelIndex& )index1, (int )role2);
}

QObject*  QItemDelegate_QtDShell::__public_sender() const
{
    return QObject::sender();
}

QStyleOptionViewItem  QItemDelegate_QtDShell::__public_setOptions(const QModelIndex&  index0, const QStyleOptionViewItem&  option1) const
{
    return QItemDelegate::setOptions((const QModelIndex& )index0, (const QStyleOptionViewItem& )option1);
}

QRect  QItemDelegate_QtDShell::__public_textRectangle(QPainter*  painter0, const QRect&  rect1, const QFont&  font2, const QString&  text3) const
{
    return QItemDelegate::textRectangle((QPainter* )painter0, (const QRect& )rect1, (const QFont& )font2, (const QString& )text3);
}

void QItemDelegate_QtDShell::__public_closeEditor(QWidget*  editor0, int  hint1)
{
    QAbstractItemDelegate::closeEditor((QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
}

void QItemDelegate_QtDShell::__public_commitData(QWidget*  editor0)
{
    QAbstractItemDelegate::commitData((QWidget* )editor0);
}

void QItemDelegate_QtDShell::__public_sizeHintChanged(const QModelIndex&  arg__1)
{
    QAbstractItemDelegate::sizeHintChanged((const QModelIndex& )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QItemDelegate_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

QWidget*  QItemDelegate_QtDShell::__override_createEditor(QWidget*  parent0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2, bool static_call) const
{
    if (static_call) {
        return QItemDelegate::createEditor((QWidget* )parent0, (const QStyleOptionViewItem& )option1, (const QModelIndex& )index2);
    } else {
        return createEditor((QWidget* )parent0, (const QStyleOptionViewItem& )option1, (const QModelIndex& )index2);
    }
}

void QItemDelegate_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

void QItemDelegate_QtDShell::__override_drawCheck(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QRect&  rect2, int  state3, bool static_call) const
{
    if (static_call) {
        QItemDelegate::drawCheck((QPainter* )painter0, (const QStyleOptionViewItem& )option1, (const QRect& )rect2, (Qt::CheckState )state3);
    } else {
        drawCheck((QPainter* )painter0, (const QStyleOptionViewItem& )option1, (const QRect& )rect2, (Qt::CheckState )state3);
    }
}

void QItemDelegate_QtDShell::__override_drawDecoration(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QRect&  rect2, const QPixmap&  pixmap3, bool static_call) const
{
    if (static_call) {
        QItemDelegate::drawDecoration((QPainter* )painter0, (const QStyleOptionViewItem& )option1, (const QRect& )rect2, (const QPixmap& )pixmap3);
    } else {
        drawDecoration((QPainter* )painter0, (const QStyleOptionViewItem& )option1, (const QRect& )rect2, (const QPixmap& )pixmap3);
    }
}

void QItemDelegate_QtDShell::__override_drawDisplay(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QRect&  rect2, const QString&  text3, bool static_call) const
{
    if (static_call) {
        QItemDelegate::drawDisplay((QPainter* )painter0, (const QStyleOptionViewItem& )option1, (const QRect& )rect2, (const QString& )text3);
    } else {
        drawDisplay((QPainter* )painter0, (const QStyleOptionViewItem& )option1, (const QRect& )rect2, (const QString& )text3);
    }
}

void QItemDelegate_QtDShell::__override_drawFocus(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QRect&  rect2, bool static_call) const
{
    if (static_call) {
        QItemDelegate::drawFocus((QPainter* )painter0, (const QStyleOptionViewItem& )option1, (const QRect& )rect2);
    } else {
        drawFocus((QPainter* )painter0, (const QStyleOptionViewItem& )option1, (const QRect& )rect2);
    }
}

bool  QItemDelegate_QtDShell::__override_editorEvent(QEvent*  event0, QAbstractItemModel*  model1, const QStyleOptionViewItem&  option2, const QModelIndex&  index3, bool static_call)
{
    if (static_call) {
        return QItemDelegate::editorEvent((QEvent* )event0, (QAbstractItemModel* )model1, (const QStyleOptionViewItem& )option2, (const QModelIndex& )index3);
    } else {
        return editorEvent((QEvent* )event0, (QAbstractItemModel* )model1, (const QStyleOptionViewItem& )option2, (const QModelIndex& )index3);
    }
}

bool  QItemDelegate_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QItemDelegate_QtDShell::__override_eventFilter(QObject*  object0, QEvent*  event1, bool static_call)
{
    if (static_call) {
        return QItemDelegate::eventFilter((QObject* )object0, (QEvent* )event1);
    } else {
        return eventFilter((QObject* )object0, (QEvent* )event1);
    }
}

void QItemDelegate_QtDShell::__override_paint(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2, bool static_call) const
{
    if (static_call) {
        QItemDelegate::paint((QPainter* )painter0, (const QStyleOptionViewItem& )option1, (const QModelIndex& )index2);
    } else {
        paint((QPainter* )painter0, (const QStyleOptionViewItem& )option1, (const QModelIndex& )index2);
    }
}

void QItemDelegate_QtDShell::__override_setEditorData(QWidget*  editor0, const QModelIndex&  index1, bool static_call) const
{
    if (static_call) {
        QItemDelegate::setEditorData((QWidget* )editor0, (const QModelIndex& )index1);
    } else {
        setEditorData((QWidget* )editor0, (const QModelIndex& )index1);
    }
}

void QItemDelegate_QtDShell::__override_setModelData(QWidget*  editor0, QAbstractItemModel*  model1, const QModelIndex&  index2, bool static_call) const
{
    if (static_call) {
        QItemDelegate::setModelData((QWidget* )editor0, (QAbstractItemModel* )model1, (const QModelIndex& )index2);
    } else {
        setModelData((QWidget* )editor0, (QAbstractItemModel* )model1, (const QModelIndex& )index2);
    }
}

QSize  QItemDelegate_QtDShell::__override_sizeHint(const QStyleOptionViewItem&  option0, const QModelIndex&  index1, bool static_call) const
{
    if (static_call) {
        return QItemDelegate::sizeHint((const QStyleOptionViewItem& )option0, (const QModelIndex& )index1);
    } else {
        return sizeHint((const QStyleOptionViewItem& )option0, (const QModelIndex& )index1);
    }
}

void QItemDelegate_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QItemDelegate_QtDShell::__override_updateEditorGeometry(QWidget*  editor0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2, bool static_call) const
{
    if (static_call) {
        QItemDelegate::updateEditorGeometry((QWidget* )editor0, (const QStyleOptionViewItem& )option1, (const QModelIndex& )index2);
    } else {
        updateEditorGeometry((QWidget* )editor0, (const QStyleOptionViewItem& )option1, (const QModelIndex& )index2);
    }
}

// ---externC---
// QItemDelegate::QItemDelegate(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QItemDelegate_QItemDelegate_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QItemDelegate_QtDShell *__qt_this = new QItemDelegate_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QItemDelegate::check(const QStyleOptionViewItem & option, const QRect & bounding, const QVariant & variant) const
QTD_EXTERN QTD_EXPORT void qtd_QItemDelegate_check_QStyleOptionViewItem_QRect_QVariant_const
(void* __this_nativeId,
 QRect * __d_return_value,
 void* option0,
 QRect bounding1,
 QVariant* variant2)
{
    const QStyleOptionViewItem&  __qt_option0 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option0;
    QVariant __qt_variant2 = variant2 == NULL ? QVariant() : QVariant(*variant2);
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->__public_check((const QStyleOptionViewItem& )__qt_option0, (const QRect& )bounding1, (const QVariant& )__qt_variant2);

    *__d_return_value = __qt_return_value;

}

// QItemDelegate::decoration(const QStyleOptionViewItem & option, const QVariant & variant) const
QTD_EXTERN QTD_EXPORT void* qtd_QItemDelegate_decoration_QStyleOptionViewItem_QVariant_const
(void* __this_nativeId,
 void* option0,
 QVariant* variant1)
{
    const QStyleOptionViewItem&  __qt_option0 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option0;
    QVariant __qt_variant1 = variant1 == NULL ? QVariant() : QVariant(*variant1);
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->__public_decoration((const QStyleOptionViewItem& )__qt_option0, (const QVariant& )__qt_variant1);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QItemDelegate::drawBackground(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QItemDelegate_drawBackground_QPainter_QStyleOptionViewItem_QModelIndex_const
(void* __this_nativeId,
 void* painter0,
 void* option1,
 QModelIndexAccessor index2)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QStyleOptionViewItem&  __qt_option1 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option1;
    QModelIndex __qt_index2 = qtd_to_QModelIndex(index2);
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    __qt_this->__public_drawBackground((QPainter* )__qt_painter0, (const QStyleOptionViewItem& )__qt_option1, (const QModelIndex& )__qt_index2);

}

// QItemDelegate::hasClipping() const
QTD_EXTERN QTD_EXPORT bool qtd_QItemDelegate_hasClipping_const
(void* __this_nativeId)
{
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasClipping();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemDelegate::itemEditorFactory() const
QTD_EXTERN QTD_EXPORT void* qtd_QItemDelegate_itemEditorFactory_const
(void* __this_nativeId)
{
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    QItemEditorFactory*  __qt_return_value = __qt_this->itemEditorFactory();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QItemDelegate::rect(const QStyleOptionViewItem & option, const QModelIndex & index, int role) const
QTD_EXTERN QTD_EXPORT void qtd_QItemDelegate_rect_QStyleOptionViewItem_QModelIndex_int_const
(void* __this_nativeId,
 QRect * __d_return_value,
 void* option0,
 QModelIndexAccessor index1,
 int role2)
{
    const QStyleOptionViewItem&  __qt_option0 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option0;
    QModelIndex __qt_index1 = qtd_to_QModelIndex(index1);
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->__public_rect((const QStyleOptionViewItem& )__qt_option0, (const QModelIndex& )__qt_index1, (int )role2);

    *__d_return_value = __qt_return_value;

}

// QItemDelegate::setClipping(bool clip)
QTD_EXTERN QTD_EXPORT void qtd_QItemDelegate_setClipping_bool
(void* __this_nativeId,
 bool clip0)
{
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    __qt_this->setClipping((bool )clip0);

}

// QItemDelegate::setItemEditorFactory(QItemEditorFactory * factory)
QTD_EXTERN QTD_EXPORT void qtd_QItemDelegate_setItemEditorFactory_QItemEditorFactory
(void* __this_nativeId,
 void* factory0)
{
    QItemEditorFactory*  __qt_factory0 = (QItemEditorFactory* ) factory0;
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    __qt_this->setItemEditorFactory((QItemEditorFactory* )__qt_factory0);

}

// QItemDelegate::setOptions(const QModelIndex & index, const QStyleOptionViewItem & option) const
QTD_EXTERN QTD_EXPORT void* qtd_QItemDelegate_setOptions_QModelIndex_QStyleOptionViewItem_const
(void* __this_nativeId,
 QModelIndexAccessor index0,
 void* option1)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    const QStyleOptionViewItem&  __qt_option1 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option1;
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    QStyleOptionViewItem  __qt_return_value = __qt_this->__public_setOptions((const QModelIndex& )__qt_index0, (const QStyleOptionViewItem& )__qt_option1);

    void* __d_return_value = (void*) new QStyleOptionViewItem(__qt_return_value);

    return __d_return_value;
}

// QItemDelegate::textRectangle(QPainter * painter, const QRect & rect, const QFont & font, const QString & text) const
QTD_EXTERN QTD_EXPORT void qtd_QItemDelegate_textRectangle_QPainter_QRect_QFont_string_const
(void* __this_nativeId,
 QRect * __d_return_value,
 void* painter0,
 QRect rect1,
 void* font2,
 DArray text3)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QFont&  __qt_font2 = (const QFont& ) *(QFont *)font2;
    QString __qt_text3 = QString::fromUtf8((const char *)text3.ptr, text3.length);
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->__public_textRectangle((QPainter* )__qt_painter0, (const QRect& )rect1, (const QFont& )__qt_font2, (const QString& )__qt_text3);

    *__d_return_value = __qt_return_value;

}

// QItemDelegate::createEditor(QWidget * parent_, const QStyleOptionViewItem & option, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void* qtd_QItemDelegate_createEditor_QWidget_QStyleOptionViewItem_QModelIndex_const
(void* __this_nativeId,
 void* parent0,
 void* option1,
 QModelIndexAccessor index2)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    const QStyleOptionViewItem&  __qt_option1 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option1;
    QModelIndex __qt_index2 = qtd_to_QModelIndex(index2);
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QWidget*  __qt_return_value = __qt_this->__override_createEditor((QWidget* )__qt_parent0, (const QStyleOptionViewItem& )__qt_option1, (const QModelIndex& )__qt_index2, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QItemDelegate::drawCheck(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect, Qt::CheckState state) const
QTD_EXTERN QTD_EXPORT void qtd_QItemDelegate_drawCheck_QPainter_QStyleOptionViewItem_QRect_CheckState_const
(void* __this_nativeId,
 void* painter0,
 void* option1,
 QRect rect2,
 int state3)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QStyleOptionViewItem&  __qt_option1 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option1;
    Qt::CheckState __qt_state3 = (Qt::CheckState) state3;
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawCheck((QPainter* )__qt_painter0, (const QStyleOptionViewItem& )__qt_option1, (const QRect& )rect2, (Qt::CheckState )__qt_state3, __do_static_call);

}

// QItemDelegate::drawDecoration(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect, const QPixmap & pixmap) const
QTD_EXTERN QTD_EXPORT void qtd_QItemDelegate_drawDecoration_QPainter_QStyleOptionViewItem_QRect_QPixmap_const
(void* __this_nativeId,
 void* painter0,
 void* option1,
 QRect rect2,
 void* pixmap3)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QStyleOptionViewItem&  __qt_option1 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option1;
    const QPixmap&  __qt_pixmap3 = (const QPixmap& ) *(QPixmap *)pixmap3;
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawDecoration((QPainter* )__qt_painter0, (const QStyleOptionViewItem& )__qt_option1, (const QRect& )rect2, (const QPixmap& )__qt_pixmap3, __do_static_call);

}

// QItemDelegate::drawDisplay(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect, const QString & text) const
QTD_EXTERN QTD_EXPORT void qtd_QItemDelegate_drawDisplay_QPainter_QStyleOptionViewItem_QRect_string_const
(void* __this_nativeId,
 void* painter0,
 void* option1,
 QRect rect2,
 DArray text3)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QStyleOptionViewItem&  __qt_option1 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option1;
    QString __qt_text3 = QString::fromUtf8((const char *)text3.ptr, text3.length);
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawDisplay((QPainter* )__qt_painter0, (const QStyleOptionViewItem& )__qt_option1, (const QRect& )rect2, (const QString& )__qt_text3, __do_static_call);

}

// QItemDelegate::drawFocus(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect) const
QTD_EXTERN QTD_EXPORT void qtd_QItemDelegate_drawFocus_QPainter_QStyleOptionViewItem_QRect_const
(void* __this_nativeId,
 void* painter0,
 void* option1,
 QRect rect2)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QStyleOptionViewItem&  __qt_option1 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option1;
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawFocus((QPainter* )__qt_painter0, (const QStyleOptionViewItem& )__qt_option1, (const QRect& )rect2, __do_static_call);

}

// QItemDelegate::editorEvent(QEvent * event, QAbstractItemModel * model, const QStyleOptionViewItem & option, const QModelIndex & index)
QTD_EXTERN QTD_EXPORT bool qtd_QItemDelegate_editorEvent_QEvent_QAbstractItemModel_QStyleOptionViewItem_QModelIndex
(void* __this_nativeId,
 void* event0,
 void* model1,
 void* option2,
 QModelIndexAccessor index3)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QAbstractItemModel*  __qt_model1 = (QAbstractItemModel* ) model1;
    const QStyleOptionViewItem&  __qt_option2 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option2;
    QModelIndex __qt_index3 = qtd_to_QModelIndex(index3);
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_editorEvent((QEvent* )__qt_event0, (QAbstractItemModel* )__qt_model1, (const QStyleOptionViewItem& )__qt_option2, (const QModelIndex& )__qt_index3, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemDelegate::eventFilter(QObject * object, QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QItemDelegate_eventFilter_QObject_QEvent
(void* __this_nativeId,
 void* object0,
 void* event1)
{
    QObject*  __qt_object0 = (QObject* ) object0;
    QEvent*  __qt_event1 = (QEvent* ) event1;
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_eventFilter((QObject* )__qt_object0, (QEvent* )__qt_event1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemDelegate::paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QItemDelegate_paint_QPainter_QStyleOptionViewItem_QModelIndex_const
(void* __this_nativeId,
 void* painter0,
 void* option1,
 QModelIndexAccessor index2)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QStyleOptionViewItem&  __qt_option1 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option1;
    QModelIndex __qt_index2 = qtd_to_QModelIndex(index2);
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paint((QPainter* )__qt_painter0, (const QStyleOptionViewItem& )__qt_option1, (const QModelIndex& )__qt_index2, __do_static_call);

}

// QItemDelegate::setEditorData(QWidget * editor, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QItemDelegate_setEditorData_QWidget_QModelIndex_const
(void* __this_nativeId,
 void* editor0,
 QModelIndexAccessor index1)
{
    QWidget*  __qt_editor0 = (QWidget* ) editor0;
    QModelIndex __qt_index1 = qtd_to_QModelIndex(index1);
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setEditorData((QWidget* )__qt_editor0, (const QModelIndex& )__qt_index1, __do_static_call);

}

// QItemDelegate::setModelData(QWidget * editor, QAbstractItemModel * model, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QItemDelegate_setModelData_QWidget_QAbstractItemModel_QModelIndex_const
(void* __this_nativeId,
 void* editor0,
 void* model1,
 QModelIndexAccessor index2)
{
    QWidget*  __qt_editor0 = (QWidget* ) editor0;
    QAbstractItemModel*  __qt_model1 = (QAbstractItemModel* ) model1;
    QModelIndex __qt_index2 = qtd_to_QModelIndex(index2);
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setModelData((QWidget* )__qt_editor0, (QAbstractItemModel* )__qt_model1, (const QModelIndex& )__qt_index2, __do_static_call);

}

// QItemDelegate::sizeHint(const QStyleOptionViewItem & option, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QItemDelegate_sizeHint_QStyleOptionViewItem_QModelIndex_const
(void* __this_nativeId,
 QSize * __d_return_value,
 void* option0,
 QModelIndexAccessor index1)
{
    const QStyleOptionViewItem&  __qt_option0 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option0;
    QModelIndex __qt_index1 = qtd_to_QModelIndex(index1);
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint((const QStyleOptionViewItem& )__qt_option0, (const QModelIndex& )__qt_index1, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QItemDelegate::updateEditorGeometry(QWidget * editor, const QStyleOptionViewItem & option, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QItemDelegate_updateEditorGeometry_QWidget_QStyleOptionViewItem_QModelIndex_const
(void* __this_nativeId,
 void* editor0,
 void* option1,
 QModelIndexAccessor index2)
{
    QWidget*  __qt_editor0 = (QWidget* ) editor0;
    const QStyleOptionViewItem&  __qt_option1 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option1;
    QModelIndex __qt_index2 = qtd_to_QModelIndex(index2);
    QItemDelegate_QtDShell *__qt_this = (QItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_updateEditorGeometry((QWidget* )__qt_editor0, (const QStyleOptionViewItem& )__qt_option1, (const QModelIndex& )__qt_index2, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QItemDelegate_staticMetaObject() {
    return (void*)&QItemDelegate::staticMetaObject;
}


