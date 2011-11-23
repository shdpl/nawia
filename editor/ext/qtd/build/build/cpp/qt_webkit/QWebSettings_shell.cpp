#include <QVariant>
#include <qicon.h>
#include <qpixmap.h>
#include <qurl.h>
#include <qwebsettings.h>

#include <iostream>
#include <qwebsettings.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_webkit.h"

// ---externC---
// QWebSettings::defaultTextEncoding() const
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_defaultTextEncoding_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWebSettings *__qt_this = (QWebSettings *) __this_nativeId;
    QString  __qt_return_value = __qt_this->defaultTextEncoding();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWebSettings::fontFamily(QWebSettings::FontFamily which) const
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_fontFamily_FontFamily_const
(void* __this_nativeId,
 void* __d_return_value,
 int which0)
{
    QWebSettings::FontFamily __qt_which0 = (QWebSettings::FontFamily) which0;
    QWebSettings *__qt_this = (QWebSettings *) __this_nativeId;
    QString  __qt_return_value = __qt_this->fontFamily((QWebSettings::FontFamily )__qt_which0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWebSettings::fontSize(QWebSettings::FontSize type) const
QTD_EXTERN QTD_EXPORT int qtd_QWebSettings_fontSize_FontSize_const
(void* __this_nativeId,
 int type0)
{
    QWebSettings::FontSize __qt_type0 = (QWebSettings::FontSize) type0;
    QWebSettings *__qt_this = (QWebSettings *) __this_nativeId;
    int  __qt_return_value = __qt_this->fontSize((QWebSettings::FontSize )__qt_type0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebSettings::localStoragePath() const
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_localStoragePath_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWebSettings *__qt_this = (QWebSettings *) __this_nativeId;
    QString  __qt_return_value = __qt_this->localStoragePath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWebSettings::resetAttribute(QWebSettings::WebAttribute attr)
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_resetAttribute_WebAttribute
(void* __this_nativeId,
 int attr0)
{
    QWebSettings::WebAttribute __qt_attr0 = (QWebSettings::WebAttribute) attr0;
    QWebSettings *__qt_this = (QWebSettings *) __this_nativeId;
    __qt_this->resetAttribute((QWebSettings::WebAttribute )__qt_attr0);

}

// QWebSettings::resetFontFamily(QWebSettings::FontFamily which)
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_resetFontFamily_FontFamily
(void* __this_nativeId,
 int which0)
{
    QWebSettings::FontFamily __qt_which0 = (QWebSettings::FontFamily) which0;
    QWebSettings *__qt_this = (QWebSettings *) __this_nativeId;
    __qt_this->resetFontFamily((QWebSettings::FontFamily )__qt_which0);

}

// QWebSettings::resetFontSize(QWebSettings::FontSize type)
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_resetFontSize_FontSize
(void* __this_nativeId,
 int type0)
{
    QWebSettings::FontSize __qt_type0 = (QWebSettings::FontSize) type0;
    QWebSettings *__qt_this = (QWebSettings *) __this_nativeId;
    __qt_this->resetFontSize((QWebSettings::FontSize )__qt_type0);

}

// QWebSettings::setAttribute(QWebSettings::WebAttribute attr, bool on)
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_setAttribute_WebAttribute_bool
(void* __this_nativeId,
 int attr0,
 bool on1)
{
    QWebSettings::WebAttribute __qt_attr0 = (QWebSettings::WebAttribute) attr0;
    QWebSettings *__qt_this = (QWebSettings *) __this_nativeId;
    __qt_this->setAttribute((QWebSettings::WebAttribute )__qt_attr0, (bool )on1);

}

// QWebSettings::setDefaultTextEncoding(const QString & encoding)
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_setDefaultTextEncoding_string
(void* __this_nativeId,
 DArray encoding0)
{
    QString __qt_encoding0 = QString::fromUtf8((const char *)encoding0.ptr, encoding0.length);
    QWebSettings *__qt_this = (QWebSettings *) __this_nativeId;
    __qt_this->setDefaultTextEncoding((const QString& )__qt_encoding0);

}

// QWebSettings::setFontFamily(QWebSettings::FontFamily which, const QString & family)
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_setFontFamily_FontFamily_string
(void* __this_nativeId,
 int which0,
 DArray family1)
{
    QWebSettings::FontFamily __qt_which0 = (QWebSettings::FontFamily) which0;
    QString __qt_family1 = QString::fromUtf8((const char *)family1.ptr, family1.length);
    QWebSettings *__qt_this = (QWebSettings *) __this_nativeId;
    __qt_this->setFontFamily((QWebSettings::FontFamily )__qt_which0, (const QString& )__qt_family1);

}

// QWebSettings::setFontSize(QWebSettings::FontSize type, int size)
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_setFontSize_FontSize_int
(void* __this_nativeId,
 int type0,
 int size1)
{
    QWebSettings::FontSize __qt_type0 = (QWebSettings::FontSize) type0;
    QWebSettings *__qt_this = (QWebSettings *) __this_nativeId;
    __qt_this->setFontSize((QWebSettings::FontSize )__qt_type0, (int )size1);

}

// QWebSettings::setLocalStoragePath(const QString & path)
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_setLocalStoragePath_string
(void* __this_nativeId,
 DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QWebSettings *__qt_this = (QWebSettings *) __this_nativeId;
    __qt_this->setLocalStoragePath((const QString& )__qt_path0);

}

// QWebSettings::setUserStyleSheetUrl(const QUrl & location)
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_setUserStyleSheetUrl_QUrl
(void* __this_nativeId,
 void* location0)
{
    const QUrl&  __qt_location0 = (const QUrl& ) *(QUrl *)location0;
    QWebSettings *__qt_this = (QWebSettings *) __this_nativeId;
    __qt_this->setUserStyleSheetUrl((const QUrl& )__qt_location0);

}

// QWebSettings::testAttribute(QWebSettings::WebAttribute attr) const
QTD_EXTERN QTD_EXPORT bool qtd_QWebSettings_testAttribute_WebAttribute_const
(void* __this_nativeId,
 int attr0)
{
    QWebSettings::WebAttribute __qt_attr0 = (QWebSettings::WebAttribute) attr0;
    QWebSettings *__qt_this = (QWebSettings *) __this_nativeId;
    bool  __qt_return_value = __qt_this->testAttribute((QWebSettings::WebAttribute )__qt_attr0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebSettings::userStyleSheetUrl() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebSettings_userStyleSheetUrl_const
(void* __this_nativeId)
{
    QWebSettings *__qt_this = (QWebSettings *) __this_nativeId;
    QUrl  __qt_return_value = __qt_this->userStyleSheetUrl();

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// QWebSettings::clearIconDatabase()
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_clearIconDatabase
()
{
    QWebSettings::clearIconDatabase();

}

// QWebSettings::clearMemoryCaches()
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_clearMemoryCaches
()
{
    QWebSettings::clearMemoryCaches();

}

// QWebSettings::enablePersistentStorage(const QString & path)
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_enablePersistentStorage_string
(DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QWebSettings::enablePersistentStorage((const QString& )__qt_path0);

}

// QWebSettings::globalSettings()
QTD_EXTERN QTD_EXPORT void* qtd_QWebSettings_globalSettings
()
{
    QWebSettings*  __qt_return_value = QWebSettings::globalSettings();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebSettings::iconDatabasePath()
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_iconDatabasePath
(void* __d_return_value)
{
    QString  __qt_return_value = QWebSettings::iconDatabasePath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWebSettings::iconForUrl(const QUrl & url)
QTD_EXTERN QTD_EXPORT void* qtd_QWebSettings_iconForUrl_QUrl
(void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QIcon  __qt_return_value = QWebSettings::iconForUrl((const QUrl& )__qt_url0);

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QWebSettings::maximumPagesInCache()
QTD_EXTERN QTD_EXPORT int qtd_QWebSettings_maximumPagesInCache
()
{
    int  __qt_return_value = QWebSettings::maximumPagesInCache();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebSettings::offlineStorageDefaultQuota()
QTD_EXTERN QTD_EXPORT qint64 qtd_QWebSettings_offlineStorageDefaultQuota
()
{
    qint64  __qt_return_value = QWebSettings::offlineStorageDefaultQuota();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebSettings::offlineStoragePath()
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_offlineStoragePath
(void* __d_return_value)
{
    QString  __qt_return_value = QWebSettings::offlineStoragePath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWebSettings::offlineWebApplicationCachePath()
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_offlineWebApplicationCachePath
(void* __d_return_value)
{
    QString  __qt_return_value = QWebSettings::offlineWebApplicationCachePath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWebSettings::offlineWebApplicationCacheQuota()
QTD_EXTERN QTD_EXPORT qint64 qtd_QWebSettings_offlineWebApplicationCacheQuota
()
{
    qint64  __qt_return_value = QWebSettings::offlineWebApplicationCacheQuota();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebSettings::setIconDatabasePath(const QString & location)
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_setIconDatabasePath_string
(DArray location0)
{
    QString __qt_location0 = QString::fromUtf8((const char *)location0.ptr, location0.length);
    QWebSettings::setIconDatabasePath((const QString& )__qt_location0);

}

// QWebSettings::setMaximumPagesInCache(int pages)
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_setMaximumPagesInCache_int
(int pages0)
{
    QWebSettings::setMaximumPagesInCache((int )pages0);

}

// QWebSettings::setObjectCacheCapacities(int cacheMinDeadCapacity, int cacheMaxDead, int totalCapacity)
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_setObjectCacheCapacities_int_int_int
(int cacheMinDeadCapacity0,
 int cacheMaxDead1,
 int totalCapacity2)
{
    QWebSettings::setObjectCacheCapacities((int )cacheMinDeadCapacity0, (int )cacheMaxDead1, (int )totalCapacity2);

}

// QWebSettings::setOfflineStorageDefaultQuota(qint64 maximumSize)
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_setOfflineStorageDefaultQuota_long
(qint64 maximumSize0)
{
    QWebSettings::setOfflineStorageDefaultQuota((qint64 )maximumSize0);

}

// QWebSettings::setOfflineStoragePath(const QString & path)
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_setOfflineStoragePath_string
(DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QWebSettings::setOfflineStoragePath((const QString& )__qt_path0);

}

// QWebSettings::setOfflineWebApplicationCachePath(const QString & path)
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_setOfflineWebApplicationCachePath_string
(DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QWebSettings::setOfflineWebApplicationCachePath((const QString& )__qt_path0);

}

// QWebSettings::setOfflineWebApplicationCacheQuota(qint64 maximumSize)
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_setOfflineWebApplicationCacheQuota_long
(qint64 maximumSize0)
{
    QWebSettings::setOfflineWebApplicationCacheQuota((qint64 )maximumSize0);

}

// QWebSettings::setWebGraphic(QWebSettings::WebGraphic type, const QPixmap & graphic)
QTD_EXTERN QTD_EXPORT void qtd_QWebSettings_setWebGraphic_WebGraphic_QPixmap
(int type0,
 void* graphic1)
{
    QWebSettings::WebGraphic __qt_type0 = (QWebSettings::WebGraphic) type0;
    const QPixmap&  __qt_graphic1 = (const QPixmap& ) *(QPixmap *)graphic1;
    QWebSettings::setWebGraphic((QWebSettings::WebGraphic )__qt_type0, (const QPixmap& )__qt_graphic1);

}

// QWebSettings::webGraphic(QWebSettings::WebGraphic type)
QTD_EXTERN QTD_EXPORT void* qtd_QWebSettings_webGraphic_WebGraphic
(int type0)
{
    QWebSettings::WebGraphic __qt_type0 = (QWebSettings::WebGraphic) type0;
    QPixmap  __qt_return_value = QWebSettings::webGraphic((QWebSettings::WebGraphic )__qt_type0);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors


