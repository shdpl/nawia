#include <QVariant>
#include <qdatastream.h>
#include <qiodevice.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpicture.h>

#include "QPicture_shell.h"
#include <iostream>
#include <qpicture.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QPaintDevice* qtd_QPicture_cast_to_QPaintDevice(QPicture *ptr)
{
    return dynamic_cast<QPaintDevice*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QPicture_delete(void* nativeId)
{
    delete (QPicture_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QPicture_destroy(void* nativeId)
{
    call_destructor((QPicture_QtDShell*)nativeId);
}

QPicture_QtDShell::QPicture_QtDShell(void *d_ptr, const QPicture&  arg__1)
    : QPicture(arg__1),
      QtdObjectLink(d_ptr)
{
}

QPicture_QtDShell::QPicture_QtDShell(void *d_ptr, int  formatVersion0)
    : QPicture(formatVersion0),
      QtdObjectLink(d_ptr)
{
}

QPicture_QtDShell::~QPicture_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QPicture_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QPicture*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QPicture_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int m0))
int  QPicture_QtDShell::metric(QPaintDevice::PaintDeviceMetric  m0) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(this->dId, (QPaintDevice::PaintDeviceMetric )m0);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QPicture_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QPicture_setData_nativepointerchar_uint_dispatch, (void *dId, char* data0, uint size1))
QTD_FUNC(GUI, QPicture_setData_nativepointerchar_uint_dispatch)
void QPicture_QtDShell::setData(const char*  data0, uint  size1)
{
    qtd_QPicture_setData_nativepointerchar_uint_dispatch(this->dId, (char* )data0, (uint )size1);
}

QTD_EXTERN QTD_EXPORT void qtd_QPicture_initCallBacks(VoidFunc *virts) {
    qtd_QPicture_setData_nativepointerchar_uint_dispatch = (qtd_QPicture_setData_nativepointerchar_uint_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
int  QPicture_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QPicture::devType();
    } else {
        return devType();
    }
}

int  QPicture_QtDShell::__override_metric(int  m0, bool static_call) const
{
    if (static_call) {
        return QPicture::metric((QPaintDevice::PaintDeviceMetric )m0);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )m0);
    }
}

QPaintEngine*  QPicture_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QPicture::paintEngine();
    } else {
        return paintEngine();
    }
}

void QPicture_QtDShell::__override_setData(const char*  data0, uint  size1, bool static_call)
{
    if (static_call) {
        QPicture::setData((const char* )data0, (uint )size1);
    } else {
        setData((const char* )data0, (uint )size1);
    }
}

// ---externC---
// QPicture::QPicture(const QPicture & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QPicture_QPicture_QPicture
(void *d_ptr,
 void* arg__1)
{
    const QPicture&  __qt_arg__1 = (const QPicture& ) *(QPicture *)arg__1;
    QPicture_QtDShell *__qt_this = new QPicture_QtDShell(d_ptr, (const QPicture& )__qt_arg__1);
    return (void *) __qt_this;

}

// QPicture::QPicture(int formatVersion)
QTD_EXTERN QTD_EXPORT void* qtd_QPicture_QPicture_int
(void *d_ptr,
 int formatVersion0)
{
    QPicture_QtDShell *__qt_this = new QPicture_QtDShell(d_ptr, (int )formatVersion0);
    return (void *) __qt_this;

}

// QPicture::boundingRect() const
QTD_EXTERN QTD_EXPORT void qtd_QPicture_boundingRect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->boundingRect();

    *__d_return_value = __qt_return_value;

}

// QPicture::colorCount() const
QTD_EXTERN QTD_EXPORT int qtd_QPicture_colorCount_const
(void* __this_nativeId)
{
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::colorCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPicture::data() const
QTD_EXTERN QTD_EXPORT char* qtd_QPicture_data_private_const
(void* __this_nativeId)
{
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    const char*  __qt_return_value = __qt_this->data();

    char* __d_return_value = (char*) __qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QPicture::depth() const
QTD_EXTERN QTD_EXPORT int qtd_QPicture_depth_const
(void* __this_nativeId)
{
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::depth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPicture::height() const
QTD_EXTERN QTD_EXPORT int qtd_QPicture_height_const
(void* __this_nativeId)
{
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::height();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPicture::heightMM() const
QTD_EXTERN QTD_EXPORT int qtd_QPicture_heightMM_const
(void* __this_nativeId)
{
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::heightMM();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPicture::isNull() const
QTD_EXTERN QTD_EXPORT bool qtd_QPicture_isNull_const
(void* __this_nativeId)
{
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNull();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPicture::load(QIODevice * dev, const char * format)
QTD_EXTERN QTD_EXPORT bool qtd_QPicture_load_QIODevice_nativepointerchar
(void* __this_nativeId,
 void* dev0,
 char* format1)
{
    QIODevice*  __qt_dev0 = (QIODevice* ) dev0;
    const char*  __qt_format1 = (const char* ) format1;
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->load((QIODevice* )__qt_dev0, (const char* )__qt_format1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPicture::load(const QString & fileName, const char * format)
QTD_EXTERN QTD_EXPORT bool qtd_QPicture_load_string_nativepointerchar
(void* __this_nativeId,
 DArray fileName0,
 char* format1)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    const char*  __qt_format1 = (const char* ) format1;
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->load((const QString& )__qt_fileName0, (const char* )__qt_format1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPicture::logicalDpiX() const
QTD_EXTERN QTD_EXPORT int qtd_QPicture_logicalDpiX_const
(void* __this_nativeId)
{
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::logicalDpiX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPicture::logicalDpiY() const
QTD_EXTERN QTD_EXPORT int qtd_QPicture_logicalDpiY_const
(void* __this_nativeId)
{
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::logicalDpiY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPicture::numColors() const
QTD_EXTERN QTD_EXPORT int qtd_QPicture_numColors_const
(void* __this_nativeId)
{
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::numColors();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPicture::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPicture_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QPicture::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPicture_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QPicture::paintingActive() const
QTD_EXTERN QTD_EXPORT bool qtd_QPicture_paintingActive_const
(void* __this_nativeId)
{
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QPaintDevice::paintingActive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPicture::physicalDpiX() const
QTD_EXTERN QTD_EXPORT int qtd_QPicture_physicalDpiX_const
(void* __this_nativeId)
{
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::physicalDpiX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPicture::physicalDpiY() const
QTD_EXTERN QTD_EXPORT int qtd_QPicture_physicalDpiY_const
(void* __this_nativeId)
{
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::physicalDpiY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPicture::play(QPainter * p)
QTD_EXTERN QTD_EXPORT bool qtd_QPicture_play_QPainter
(void* __this_nativeId,
 void* p0)
{
    QPainter*  __qt_p0 = (QPainter* ) p0;
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->play((QPainter* )__qt_p0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPicture::save(QIODevice * dev, const char * format)
QTD_EXTERN QTD_EXPORT bool qtd_QPicture_save_QIODevice_nativepointerchar
(void* __this_nativeId,
 void* dev0,
 char* format1)
{
    QIODevice*  __qt_dev0 = (QIODevice* ) dev0;
    const char*  __qt_format1 = (const char* ) format1;
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->save((QIODevice* )__qt_dev0, (const char* )__qt_format1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPicture::save(const QString & fileName, const char * format)
QTD_EXTERN QTD_EXPORT bool qtd_QPicture_save_string_nativepointerchar
(void* __this_nativeId,
 DArray fileName0,
 char* format1)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    const char*  __qt_format1 = (const char* ) format1;
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->save((const QString& )__qt_fileName0, (const char* )__qt_format1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPicture::setBoundingRect(const QRect & r)
QTD_EXTERN QTD_EXPORT void qtd_QPicture_setBoundingRect_QRect
(void* __this_nativeId,
 QRect r0)
{
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    __qt_this->setBoundingRect((const QRect& )r0);

}

// QPicture::size() const
QTD_EXTERN QTD_EXPORT uint qtd_QPicture_size_const
(void* __this_nativeId)
{
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    uint  __qt_return_value = __qt_this->size();

    uint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPicture::width() const
QTD_EXTERN QTD_EXPORT int qtd_QPicture_width_const
(void* __this_nativeId)
{
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::width();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPicture::widthMM() const
QTD_EXTERN QTD_EXPORT int qtd_QPicture_widthMM_const
(void* __this_nativeId)
{
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::widthMM();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPicture::devType() const
QTD_EXTERN QTD_EXPORT int qtd_QPicture_devType_const
(void* __this_nativeId)
{
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPicture*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_devType(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPicture::metric(QPaintDevice::PaintDeviceMetric m) const
QTD_EXTERN QTD_EXPORT int qtd_QPicture_metric_PaintDeviceMetric_const
(void* __this_nativeId,
 int m0)
{
    QPaintDevice::PaintDeviceMetric __qt_m0 = (QPaintDevice::PaintDeviceMetric) m0;
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPicture*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_metric((QPaintDevice::PaintDeviceMetric )__qt_m0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPicture::paintEngine() const
QTD_EXTERN QTD_EXPORT void* qtd_QPicture_paintEngine_const
(void* __this_nativeId)
{
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPicture*)__this_nativeId) != NULL;
    QPaintEngine*  __qt_return_value = __qt_this->__override_paintEngine(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QPicture::setData(const char * data, uint size)
QTD_EXTERN QTD_EXPORT void qtd_QPicture_setData_nativepointerchar_uint
(void* __this_nativeId,
 char* data0,
 uint size1)
{
    const char*  __qt_data0 = (const char* ) data0;
    QPicture_QtDShell *__qt_this = (QPicture_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPicture*)__this_nativeId) != NULL;
    __qt_this->__override_setData((const char* )__qt_data0, (uint )size1, __do_static_call);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QPicture_QTypeInfo_isComplex() { return (bool) QTypeInfo<QPicture>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QPicture_QTypeInfo_isStatic() { return (bool) QTypeInfo<QPicture>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QPicture_QTypeInfo_isLarge() { return (bool) QTypeInfo<QPicture>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QPicture_QTypeInfo_isPointer() { return (bool) QTypeInfo<QPicture>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QPicture_QTypeInfo_isDummy() { return (bool) QTypeInfo<QPicture>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QPicture_placed_copy(void* orig, void* place) {
    const QPicture_QtDShell&  __qt_orig = (const QPicture_QtDShell& ) *(QPicture_QtDShell *)orig;
    QPicture *result = new (place) QPicture (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QPicture_native_copy(void* orig) {
    const QPicture_QtDShell&  __qt_orig = (const QPicture_QtDShell& ) *(QPicture_QtDShell *)orig;
    QPicture *result = new QPicture (__qt_orig);
    return result;
}

