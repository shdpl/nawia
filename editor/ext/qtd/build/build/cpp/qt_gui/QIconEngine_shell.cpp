#include <QVariant>
#include <qpainter.h>
#include <qpixmap.h>

#include "QIconEngine_shell.h"
#include <iostream>
#include <qiconengine.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QIconEngine_delete(void* nativeId)
{
    delete (QIconEngine_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QIconEngine_destroy(void* nativeId)
{
    call_destructor((QIconEngine_QtDShell*)nativeId);
}

QIconEngine_QtDShell::QIconEngine_QtDShell(void *d_ptr)
    : QIconEngine(),
      QtdObjectLink(d_ptr)
{
}

QIconEngine_QtDShell::~QIconEngine_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QIconEngine_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QIconEngine*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QIconEngine_actualSize_QSize_Mode_State_dispatch, (void *dId, QSize *__d_return_value, QSize* size0, int mode1, int state2))
QTD_FUNC(GUI, QIconEngine_actualSize_QSize_Mode_State_dispatch)
QSize  QIconEngine_QtDShell::actualSize(const QSize&  size0, QIcon::Mode  mode1, QIcon::State  state2)
{
    QSize __d_return_value;
    qtd_QIconEngine_actualSize_QSize_Mode_State_dispatch(this->dId, &__d_return_value, &(QSize& )size0, (QIcon::Mode )mode1, (QIcon::State )state2);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QIconEngine_addFile_string_QSize_Mode_State_dispatch, (void *dId, const unsigned short* fileName0, int fileName0_size, QSize* size1, int mode2, int state3))
QTD_FUNC(GUI, QIconEngine_addFile_string_QSize_Mode_State_dispatch)
void QIconEngine_QtDShell::addFile(const QString&  fileName0, const QSize&  size1, QIcon::Mode  mode2, QIcon::State  state3)
{
    qtd_QIconEngine_addFile_string_QSize_Mode_State_dispatch(this->dId, fileName0.utf16(), fileName0.size(), &(QSize& )size1, (QIcon::Mode )mode2, (QIcon::State )state3);
}

QTD_FUNC_DECL(GUI, void, QIconEngine_addPixmap_QPixmap_Mode_State_dispatch, (void *dId, void* pixmap0, int mode1, int state2))
QTD_FUNC(GUI, QIconEngine_addPixmap_QPixmap_Mode_State_dispatch)
void QIconEngine_QtDShell::addPixmap(const QPixmap&  pixmap0, QIcon::Mode  mode1, QIcon::State  state2)
{
    qtd_QIconEngine_addPixmap_QPixmap_Mode_State_dispatch(this->dId, &(QPixmap& )pixmap0, (QIcon::Mode )mode1, (QIcon::State )state2);
}

QTD_FUNC_DECL(GUI, void, QIconEngine_paint_QPainter_QRect_Mode_State_dispatch, (void *dId, void* painter0, QRect* rect1, int mode2, int state3))
QTD_FUNC(GUI, QIconEngine_paint_QPainter_QRect_Mode_State_dispatch)
void QIconEngine_QtDShell::paint(QPainter*  painter0, const QRect&  rect1, QIcon::Mode  mode2, QIcon::State  state3)
{
    qtd_QIconEngine_paint_QPainter_QRect_Mode_State_dispatch(this->dId, (QPainter* )painter0, &(QRect& )rect1, (QIcon::Mode )mode2, (QIcon::State )state3);
}

QTD_FUNC_DECL(GUI, void*, QIconEngine_pixmap_QSize_Mode_State_dispatch, (void *dId, QSize* size0, int mode1, int state2))
QTD_FUNC(GUI, QIconEngine_pixmap_QSize_Mode_State_dispatch)
QPixmap  QIconEngine_QtDShell::pixmap(const QSize&  size0, QIcon::Mode  mode1, QIcon::State  state2)
{
    QPixmap *__qt_return_value = (QPixmap*) qtd_QIconEngine_pixmap_QSize_Mode_State_dispatch(this->dId, &(QSize& )size0, (QIcon::Mode )mode1, (QIcon::State )state2);
    return QPixmap(*__qt_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QIconEngine_initCallBacks(VoidFunc *virts) {
    qtd_QIconEngine_actualSize_QSize_Mode_State_dispatch = (qtd_QIconEngine_actualSize_QSize_Mode_State_dispatch_t) virts[0];
    qtd_QIconEngine_addFile_string_QSize_Mode_State_dispatch = (qtd_QIconEngine_addFile_string_QSize_Mode_State_dispatch_t) virts[1];
    qtd_QIconEngine_addPixmap_QPixmap_Mode_State_dispatch = (qtd_QIconEngine_addPixmap_QPixmap_Mode_State_dispatch_t) virts[2];
    qtd_QIconEngine_paint_QPainter_QRect_Mode_State_dispatch = (qtd_QIconEngine_paint_QPainter_QRect_Mode_State_dispatch_t) virts[3];
    qtd_QIconEngine_pixmap_QSize_Mode_State_dispatch = (qtd_QIconEngine_pixmap_QSize_Mode_State_dispatch_t) virts[4];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QSize  QIconEngine_QtDShell::__override_actualSize(const QSize&  size0, int  mode1, int  state2, bool static_call)
{
    if (static_call) {
        return QIconEngine::actualSize((const QSize& )size0, (QIcon::Mode )mode1, (QIcon::State )state2);
    } else {
        return actualSize((const QSize& )size0, (QIcon::Mode )mode1, (QIcon::State )state2);
    }
}

void QIconEngine_QtDShell::__override_addFile(const QString&  fileName0, const QSize&  size1, int  mode2, int  state3, bool static_call)
{
    if (static_call) {
        QIconEngine::addFile((const QString& )fileName0, (const QSize& )size1, (QIcon::Mode )mode2, (QIcon::State )state3);
    } else {
        addFile((const QString& )fileName0, (const QSize& )size1, (QIcon::Mode )mode2, (QIcon::State )state3);
    }
}

void QIconEngine_QtDShell::__override_addPixmap(const QPixmap&  pixmap0, int  mode1, int  state2, bool static_call)
{
    if (static_call) {
        QIconEngine::addPixmap((const QPixmap& )pixmap0, (QIcon::Mode )mode1, (QIcon::State )state2);
    } else {
        addPixmap((const QPixmap& )pixmap0, (QIcon::Mode )mode1, (QIcon::State )state2);
    }
}

void QIconEngine_QtDShell::__override_paint(QPainter*  painter0, const QRect&  rect1, int  mode2, int  state3, bool static_call)
{
    if (static_call) {
        return;
    } else {
        paint((QPainter* )painter0, (const QRect& )rect1, (QIcon::Mode )mode2, (QIcon::State )state3);
    }
}

QPixmap  QIconEngine_QtDShell::__override_pixmap(const QSize&  size0, int  mode1, int  state2, bool static_call)
{
    if (static_call) {
        return QIconEngine::pixmap((const QSize& )size0, (QIcon::Mode )mode1, (QIcon::State )state2);
    } else {
        return pixmap((const QSize& )size0, (QIcon::Mode )mode1, (QIcon::State )state2);
    }
}

// ---externC---
// QIconEngine::()
QTD_EXTERN QTD_EXPORT void* qtd_QIconEngine_QIconEngine
(void *d_ptr)
{
    QIconEngine_QtDShell *__qt_this = new QIconEngine_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QIconEngine::actualSize(const QSize & size, QIcon::Mode mode, QIcon::State state)
QTD_EXTERN QTD_EXPORT void qtd_QIconEngine_actualSize_QSize_Mode_State
(void* __this_nativeId,
 QSize * __d_return_value,
 QSize size0,
 int mode1,
 int state2)
{
    QIcon::Mode __qt_mode1 = (QIcon::Mode) mode1;
    QIcon::State __qt_state2 = (QIcon::State) state2;
    QIconEngine_QtDShell *__qt_this = (QIconEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QIconEngine*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_actualSize((const QSize& )size0, (QIcon::Mode )__qt_mode1, (QIcon::State )__qt_state2, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QIconEngine::addFile(const QString & fileName, const QSize & size, QIcon::Mode mode, QIcon::State state)
QTD_EXTERN QTD_EXPORT void qtd_QIconEngine_addFile_string_QSize_Mode_State
(void* __this_nativeId,
 DArray fileName0,
 QSize size1,
 int mode2,
 int state3)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QIcon::Mode __qt_mode2 = (QIcon::Mode) mode2;
    QIcon::State __qt_state3 = (QIcon::State) state3;
    QIconEngine_QtDShell *__qt_this = (QIconEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QIconEngine*)__this_nativeId) != NULL;
    __qt_this->__override_addFile((const QString& )__qt_fileName0, (const QSize& )size1, (QIcon::Mode )__qt_mode2, (QIcon::State )__qt_state3, __do_static_call);

}

// QIconEngine::addPixmap(const QPixmap & pixmap, QIcon::Mode mode, QIcon::State state)
QTD_EXTERN QTD_EXPORT void qtd_QIconEngine_addPixmap_QPixmap_Mode_State
(void* __this_nativeId,
 void* pixmap0,
 int mode1,
 int state2)
{
    const QPixmap&  __qt_pixmap0 = (const QPixmap& ) *(QPixmap *)pixmap0;
    QIcon::Mode __qt_mode1 = (QIcon::Mode) mode1;
    QIcon::State __qt_state2 = (QIcon::State) state2;
    QIconEngine_QtDShell *__qt_this = (QIconEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QIconEngine*)__this_nativeId) != NULL;
    __qt_this->__override_addPixmap((const QPixmap& )__qt_pixmap0, (QIcon::Mode )__qt_mode1, (QIcon::State )__qt_state2, __do_static_call);

}

// QIconEngine::paint(QPainter * painter, const QRect & rect, QIcon::Mode mode, QIcon::State state)
QTD_EXTERN QTD_EXPORT void qtd_QIconEngine_paint_QPainter_QRect_Mode_State
(void* __this_nativeId,
 void* painter0,
 QRect rect1,
 int mode2,
 int state3)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    QIcon::Mode __qt_mode2 = (QIcon::Mode) mode2;
    QIcon::State __qt_state3 = (QIcon::State) state3;
    QIconEngine_QtDShell *__qt_this = (QIconEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QIconEngine*)__this_nativeId) != NULL;
    __qt_this->__override_paint((QPainter* )__qt_painter0, (const QRect& )rect1, (QIcon::Mode )__qt_mode2, (QIcon::State )__qt_state3, __do_static_call);

}

// QIconEngine::pixmap(const QSize & size, QIcon::Mode mode, QIcon::State state)
QTD_EXTERN QTD_EXPORT void* qtd_QIconEngine_pixmap_QSize_Mode_State
(void* __this_nativeId,
 QSize size0,
 int mode1,
 int state2)
{
    QIcon::Mode __qt_mode1 = (QIcon::Mode) mode1;
    QIcon::State __qt_state2 = (QIcon::State) state2;
    QIconEngine_QtDShell *__qt_this = (QIconEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QIconEngine*)__this_nativeId) != NULL;
    QPixmap  __qt_return_value = __qt_this->__override_pixmap((const QSize& )size0, (QIcon::Mode )__qt_mode1, (QIcon::State )__qt_state2, __do_static_call);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors


