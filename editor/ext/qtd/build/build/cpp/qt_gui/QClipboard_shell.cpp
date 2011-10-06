#include <QImage>
#include <QPixmap>
#include <QVariant>
#include <qbytearray.h>
#include <qclipboard.h>
#include <qcoreevent.h>
#include <qimage.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpixmap.h>
#include <qvariant.h>

#include "QClipboard_shell.h"
#include <iostream>
#include <qclipboard.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QClipboardEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QClipboardEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QClipboard_createEntity(void *nativeId, void* dId)
{
    new QClipboardEntity((QObject*)nativeId, dId);
}

// ---externC---
// QClipboard::clear(QClipboard::Mode mode)
QTD_EXTERN QTD_EXPORT void qtd_QClipboard_clear_Mode
(void* __this_nativeId,
 int mode0)
{
    QClipboard::Mode __qt_mode0 = (QClipboard::Mode) mode0;
    QClipboard *__qt_this = (QClipboard *) __this_nativeId;
    __qt_this->clear((QClipboard::Mode )__qt_mode0);

}

// QClipboard::image(QClipboard::Mode mode) const
QTD_EXTERN QTD_EXPORT void* qtd_QClipboard_image_Mode_const
(void* __this_nativeId,
 int mode0)
{
    QClipboard::Mode __qt_mode0 = (QClipboard::Mode) mode0;
    QClipboard *__qt_this = (QClipboard *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->image((QClipboard::Mode )__qt_mode0);

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QClipboard::mimeData(QClipboard::Mode mode) const
QTD_EXTERN QTD_EXPORT void* qtd_QClipboard_mimeData_Mode_const
(void* __this_nativeId,
 int mode0)
{
    QClipboard::Mode __qt_mode0 = (QClipboard::Mode) mode0;
    QClipboard *__qt_this = (QClipboard *) __this_nativeId;
    const QMimeData*  __qt_return_value = __qt_this->mimeData((QClipboard::Mode )__qt_mode0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QClipboard::ownsClipboard() const
QTD_EXTERN QTD_EXPORT bool qtd_QClipboard_ownsClipboard_const
(void* __this_nativeId)
{
    QClipboard *__qt_this = (QClipboard *) __this_nativeId;
    bool  __qt_return_value = __qt_this->ownsClipboard();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QClipboard::ownsFindBuffer() const
QTD_EXTERN QTD_EXPORT bool qtd_QClipboard_ownsFindBuffer_const
(void* __this_nativeId)
{
    QClipboard *__qt_this = (QClipboard *) __this_nativeId;
    bool  __qt_return_value = __qt_this->ownsFindBuffer();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QClipboard::ownsSelection() const
QTD_EXTERN QTD_EXPORT bool qtd_QClipboard_ownsSelection_const
(void* __this_nativeId)
{
    QClipboard *__qt_this = (QClipboard *) __this_nativeId;
    bool  __qt_return_value = __qt_this->ownsSelection();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QClipboard::pixmap(QClipboard::Mode mode) const
QTD_EXTERN QTD_EXPORT void* qtd_QClipboard_pixmap_Mode_const
(void* __this_nativeId,
 int mode0)
{
    QClipboard::Mode __qt_mode0 = (QClipboard::Mode) mode0;
    QClipboard *__qt_this = (QClipboard *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->pixmap((QClipboard::Mode )__qt_mode0);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QClipboard::setImage(const QImage & arg__1, QClipboard::Mode mode)
QTD_EXTERN QTD_EXPORT void qtd_QClipboard_setImage_QImage_Mode
(void* __this_nativeId,
 void* arg__1,
 int mode1)
{
    const QImage&  __qt_arg__1 = (const QImage& ) *(QImage *)arg__1;
    QClipboard::Mode __qt_mode1 = (QClipboard::Mode) mode1;
    QClipboard *__qt_this = (QClipboard *) __this_nativeId;
    __qt_this->setImage((const QImage& )__qt_arg__1, (QClipboard::Mode )__qt_mode1);

}

// QClipboard::setMimeData(QMimeData * data, QClipboard::Mode mode)
QTD_EXTERN QTD_EXPORT void qtd_QClipboard_setMimeData_QMimeData_Mode
(void* __this_nativeId,
 void* data0,
 int mode1)
{
    QMimeData*  __qt_data0 = (QMimeData* ) data0;
    QClipboard::Mode __qt_mode1 = (QClipboard::Mode) mode1;
    QClipboard *__qt_this = (QClipboard *) __this_nativeId;
    __qt_this->setMimeData((QMimeData* )__qt_data0, (QClipboard::Mode )__qt_mode1);

}

// QClipboard::setPixmap(const QPixmap & arg__1, QClipboard::Mode mode)
QTD_EXTERN QTD_EXPORT void qtd_QClipboard_setPixmap_QPixmap_Mode
(void* __this_nativeId,
 void* arg__1,
 int mode1)
{
    const QPixmap&  __qt_arg__1 = (const QPixmap& ) *(QPixmap *)arg__1;
    QClipboard::Mode __qt_mode1 = (QClipboard::Mode) mode1;
    QClipboard *__qt_this = (QClipboard *) __this_nativeId;
    __qt_this->setPixmap((const QPixmap& )__qt_arg__1, (QClipboard::Mode )__qt_mode1);

}

// QClipboard::setText(const QString & arg__1, QClipboard::Mode mode)
QTD_EXTERN QTD_EXPORT void qtd_QClipboard_setText_string_Mode
(void* __this_nativeId,
 DArray arg__1,
 int mode1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QClipboard::Mode __qt_mode1 = (QClipboard::Mode) mode1;
    QClipboard *__qt_this = (QClipboard *) __this_nativeId;
    __qt_this->setText((const QString& )__qt_arg__1, (QClipboard::Mode )__qt_mode1);

}

// QClipboard::supportsFindBuffer() const
QTD_EXTERN QTD_EXPORT bool qtd_QClipboard_supportsFindBuffer_const
(void* __this_nativeId)
{
    QClipboard *__qt_this = (QClipboard *) __this_nativeId;
    bool  __qt_return_value = __qt_this->supportsFindBuffer();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QClipboard::supportsSelection() const
QTD_EXTERN QTD_EXPORT bool qtd_QClipboard_supportsSelection_const
(void* __this_nativeId)
{
    QClipboard *__qt_this = (QClipboard *) __this_nativeId;
    bool  __qt_return_value = __qt_this->supportsSelection();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QClipboard::text(QClipboard::Mode mode) const
QTD_EXTERN QTD_EXPORT void qtd_QClipboard_text_Mode_const
(void* __this_nativeId,
 void* __d_return_value,
 int mode0)
{
    QClipboard::Mode __qt_mode0 = (QClipboard::Mode) mode0;
    QClipboard *__qt_this = (QClipboard *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text((QClipboard::Mode )__qt_mode0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QClipboard::text(QString & subtype, QClipboard::Mode mode) const
QTD_EXTERN QTD_EXPORT void qtd_QClipboard_text_nativepointerstring_Mode_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray subtype0,
 int mode1)
{
    QString __qt_subtype0 = QString::fromUtf8((const char *)subtype0.ptr, subtype0.length);
    QClipboard::Mode __qt_mode1 = (QClipboard::Mode) mode1;
    QClipboard *__qt_this = (QClipboard *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text((QString& )__qt_subtype0, (QClipboard::Mode )__qt_mode1);

    qtd_toUtf8(__qt_subtype0.utf16(), __qt_subtype0.size(), &subtype0);
    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QClipboard_staticMetaObject() {
    return (void*)&QClipboard::staticMetaObject;
}


