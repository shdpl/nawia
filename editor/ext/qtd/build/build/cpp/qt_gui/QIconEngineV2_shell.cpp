#include <QVariant>
#include <qdatastream.h>
#include <qiconengine.h>
#include <qlist.h>
#include <qpainter.h>
#include <qpixmap.h>

#include "QIconEngineV2_shell.h"
#include <iostream>
#include <qiconengine.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QIconEngineV2_QtDShell::QIconEngineV2_QtDShell(void *d_ptr)
    : QIconEngineV2(),
      QtdObjectLink(d_ptr)
{
}

QIconEngineV2_QtDShell::~QIconEngineV2_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QIconEngineV2_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QIconEngineV2*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QIconEngine_actualSize_QSize_Mode_State_dispatch, (void *dId, QSize *__d_return_value, QSize* size0, int mode1, int state2))
QSize  QIconEngineV2_QtDShell::actualSize(const QSize&  size0, QIcon::Mode  mode1, QIcon::State  state2)
{
    QSize __d_return_value;
    qtd_QIconEngine_actualSize_QSize_Mode_State_dispatch(this->dId, &__d_return_value, &(QSize& )size0, (QIcon::Mode )mode1, (QIcon::State )state2);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QIconEngine_addFile_string_QSize_Mode_State_dispatch, (void *dId, const unsigned short* fileName0, int fileName0_size, QSize* size1, int mode2, int state3))
void QIconEngineV2_QtDShell::addFile(const QString&  fileName0, const QSize&  size1, QIcon::Mode  mode2, QIcon::State  state3)
{
    qtd_QIconEngine_addFile_string_QSize_Mode_State_dispatch(this->dId, fileName0.utf16(), fileName0.size(), &(QSize& )size1, (QIcon::Mode )mode2, (QIcon::State )state3);
}

QTD_FUNC_DECL(GUI, void, QIconEngine_addPixmap_QPixmap_Mode_State_dispatch, (void *dId, void* pixmap0, int mode1, int state2))
void QIconEngineV2_QtDShell::addPixmap(const QPixmap&  pixmap0, QIcon::Mode  mode1, QIcon::State  state2)
{
    qtd_QIconEngine_addPixmap_QPixmap_Mode_State_dispatch(this->dId, &(QPixmap& )pixmap0, (QIcon::Mode )mode1, (QIcon::State )state2);
}

QTD_FUNC_DECL(GUI, void, QIconEngineV2_key_const_dispatch, (void *dId, DArray* ret_str))
QTD_FUNC(GUI, QIconEngineV2_key_const_dispatch)
QString  QIconEngineV2_QtDShell::key() const
{
    DArray ret_str;
    qtd_QIconEngineV2_key_const_dispatch(this->dId, &ret_str);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(GUI, void, QIconEngine_paint_QPainter_QRect_Mode_State_dispatch, (void *dId, void* painter0, QRect* rect1, int mode2, int state3))
void QIconEngineV2_QtDShell::paint(QPainter*  painter0, const QRect&  rect1, QIcon::Mode  mode2, QIcon::State  state3)
{
    qtd_QIconEngine_paint_QPainter_QRect_Mode_State_dispatch(this->dId, (QPainter* )painter0, &(QRect& )rect1, (QIcon::Mode )mode2, (QIcon::State )state3);
}

QTD_FUNC_DECL(GUI, void*, QIconEngine_pixmap_QSize_Mode_State_dispatch, (void *dId, QSize* size0, int mode1, int state2))
QPixmap  QIconEngineV2_QtDShell::pixmap(const QSize&  size0, QIcon::Mode  mode1, QIcon::State  state2)
{
    QPixmap *__qt_return_value = (QPixmap*) qtd_QIconEngine_pixmap_QSize_Mode_State_dispatch(this->dId, &(QSize& )size0, (QIcon::Mode )mode1, (QIcon::State )state2);
    return QPixmap(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QIconEngineV2_read_QDataStream_dispatch, (void *dId, void* in0))
QTD_FUNC(GUI, QIconEngineV2_read_QDataStream_dispatch)
bool  QIconEngineV2_QtDShell::read(QDataStream&  in0)
{
    return qtd_QIconEngineV2_read_QDataStream_dispatch(this->dId, &(QDataStream& )in0);
}

QTD_FUNC_DECL(GUI, bool, QIconEngineV2_write_QDataStream_const_dispatch, (void *dId, void* out0))
QTD_FUNC(GUI, QIconEngineV2_write_QDataStream_const_dispatch)
bool  QIconEngineV2_QtDShell::write(QDataStream&  out0) const
{
    return qtd_QIconEngineV2_write_QDataStream_const_dispatch(this->dId, &(QDataStream& )out0);
}

QTD_EXTERN QTD_EXPORT void qtd_QIconEngineV2_initCallBacks(VoidFunc *virts) {
    qtd_QIconEngineV2_key_const_dispatch = (qtd_QIconEngineV2_key_const_dispatch_t) virts[0];
    qtd_QIconEngineV2_read_QDataStream_dispatch = (qtd_QIconEngineV2_read_QDataStream_dispatch_t) virts[1];
    qtd_QIconEngineV2_write_QDataStream_const_dispatch = (qtd_QIconEngineV2_write_QDataStream_const_dispatch_t) virts[2];
}
// Functions in shell class
QIconEngineV2*  QIconEngineV2_QtDShell::clone() const
{
    return QIconEngineV2::clone();
}

// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QSize  QIconEngineV2_QtDShell::__override_actualSize(const QSize&  size0, int  mode1, int  state2, bool static_call)
{
    if (static_call) {
        return QIconEngine::actualSize((const QSize& )size0, (QIcon::Mode )mode1, (QIcon::State )state2);
    } else {
        return actualSize((const QSize& )size0, (QIcon::Mode )mode1, (QIcon::State )state2);
    }
}

void QIconEngineV2_QtDShell::__override_addFile(const QString&  fileName0, const QSize&  size1, int  mode2, int  state3, bool static_call)
{
    if (static_call) {
        QIconEngine::addFile((const QString& )fileName0, (const QSize& )size1, (QIcon::Mode )mode2, (QIcon::State )state3);
    } else {
        addFile((const QString& )fileName0, (const QSize& )size1, (QIcon::Mode )mode2, (QIcon::State )state3);
    }
}

void QIconEngineV2_QtDShell::__override_addPixmap(const QPixmap&  pixmap0, int  mode1, int  state2, bool static_call)
{
    if (static_call) {
        QIconEngine::addPixmap((const QPixmap& )pixmap0, (QIcon::Mode )mode1, (QIcon::State )state2);
    } else {
        addPixmap((const QPixmap& )pixmap0, (QIcon::Mode )mode1, (QIcon::State )state2);
    }
}

QString  QIconEngineV2_QtDShell::__override_key(bool static_call) const
{
    if (static_call) {
        return QIconEngineV2::key();
    } else {
        return key();
    }
}

void QIconEngineV2_QtDShell::__override_paint(QPainter*  painter0, const QRect&  rect1, int  mode2, int  state3, bool static_call)
{
    if (static_call) {
        return;
    } else {
        paint((QPainter* )painter0, (const QRect& )rect1, (QIcon::Mode )mode2, (QIcon::State )state3);
    }
}

QPixmap  QIconEngineV2_QtDShell::__override_pixmap(const QSize&  size0, int  mode1, int  state2, bool static_call)
{
    if (static_call) {
        return QIconEngine::pixmap((const QSize& )size0, (QIcon::Mode )mode1, (QIcon::State )state2);
    } else {
        return pixmap((const QSize& )size0, (QIcon::Mode )mode1, (QIcon::State )state2);
    }
}

bool  QIconEngineV2_QtDShell::__override_read(QDataStream&  in0, bool static_call)
{
    if (static_call) {
        return QIconEngineV2::read((QDataStream& )in0);
    } else {
        return read((QDataStream& )in0);
    }
}

bool  QIconEngineV2_QtDShell::__override_write(QDataStream&  out0, bool static_call) const
{
    if (static_call) {
        return QIconEngineV2::write((QDataStream& )out0);
    } else {
        return write((QDataStream& )out0);
    }
}

// ---externC---
// QIconEngineV2::()
QTD_EXTERN QTD_EXPORT void* qtd_QIconEngineV2_QIconEngineV2
(void *d_ptr)
{
    QIconEngineV2_QtDShell *__qt_this = new QIconEngineV2_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QIconEngineV2::availableSizes(QIcon::Mode mode, QIcon::State state)
QTD_EXTERN QTD_EXPORT void qtd_QIconEngineV2_availableSizes_Mode_State
(void* __this_nativeId,
 void* __d_return_value,
 int mode0,
 int state1)
{
    QIcon::Mode __qt_mode0 = (QIcon::Mode) mode0;
    QIcon::State __qt_state1 = (QIcon::State) state1;
    QIconEngineV2_QtDShell *__qt_this = (QIconEngineV2_QtDShell *) __this_nativeId;
    QList<QSize >  __qt_return_value = __qt_this->availableSizes((QIcon::Mode )__qt_mode0, (QIcon::State )__qt_state1);

QList<QSize > &__d_return_value_tmp = (*(QList<QSize > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QIconEngineV2::iconName()
QTD_EXTERN QTD_EXPORT void qtd_QIconEngineV2_iconName
(void* __this_nativeId,
 void* __d_return_value)
{
    QIconEngineV2_QtDShell *__qt_this = (QIconEngineV2_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->iconName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QIconEngineV2::key() const
QTD_EXTERN QTD_EXPORT void qtd_QIconEngineV2_key_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QIconEngineV2_QtDShell *__qt_this = (QIconEngineV2_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QIconEngine*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_key(__do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QIconEngineV2::read(QDataStream & in_)
QTD_EXTERN QTD_EXPORT bool qtd_QIconEngineV2_read_QDataStream
(void* __this_nativeId,
 void* in0)
{
    QDataStream&  __qt_in0 = (QDataStream& ) * (QDataStream *) in0;
    QIconEngineV2_QtDShell *__qt_this = (QIconEngineV2_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QIconEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_read((QDataStream& )__qt_in0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QIconEngineV2::write(QDataStream & out_) const
QTD_EXTERN QTD_EXPORT bool qtd_QIconEngineV2_write_QDataStream_const
(void* __this_nativeId,
 void* out0)
{
    QDataStream&  __qt_out0 = (QDataStream& ) * (QDataStream *) out0;
    QIconEngineV2_QtDShell *__qt_this = (QIconEngineV2_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QIconEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_write((QDataStream& )__qt_out0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// QIconEngineV2::paint(QPainter * painter, const QRect & rect, QIcon::Mode mode, QIcon::State state)
QTD_EXTERN QTD_EXPORT void qtd_QIconEngineV2_paint_QPainter_QRect_Mode_State
(void* __this_nativeId,
 void* painter0,
 QRect rect1,
 int mode2,
 int state3)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    QIcon::Mode __qt_mode2 = (QIcon::Mode) mode2;
    QIcon::State __qt_state3 = (QIcon::State) state3;
    QIconEngineV2_QtDShell *__qt_this = (QIconEngineV2_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QIconEngine*)__this_nativeId) != NULL;
    __qt_this->__override_paint((QPainter* )__qt_painter0, (const QRect& )rect1, (QIcon::Mode )__qt_mode2, (QIcon::State )__qt_state3, __do_static_call);

}

// Field accessors


