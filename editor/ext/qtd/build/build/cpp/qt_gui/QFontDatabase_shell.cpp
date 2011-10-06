#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qlist.h>
#include <qstringlist.h>

#include <iostream>
#include <qfontdatabase.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QFontDatabase_delete(void* nativeId)
{
    delete (QFontDatabase*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QFontDatabase_destroy(void* nativeId)
{
    call_destructor((QFontDatabase*)nativeId);
}

// ---externC---
// QFontDatabase::QFontDatabase()
QTD_EXTERN QTD_EXPORT void* qtd_QFontDatabase_QFontDatabase
()
{
    QFontDatabase *__qt_this = new QFontDatabase();
    return (void *) __qt_this;

}

// QFontDatabase::bold(const QString & family, const QString & style) const
QTD_EXTERN QTD_EXPORT bool qtd_QFontDatabase_bold_string_string_const
(void* __this_nativeId,
 DArray family0,
 DArray style1)
{
    QString __qt_family0 = QString::fromUtf8((const char *)family0.ptr, family0.length);
    QString __qt_style1 = QString::fromUtf8((const char *)style1.ptr, style1.length);
    QFontDatabase *__qt_this = (QFontDatabase *) __this_nativeId;
    bool  __qt_return_value = __qt_this->bold((const QString& )__qt_family0, (const QString& )__qt_style1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontDatabase::families(QFontDatabase::WritingSystem writingSystem) const
QTD_EXTERN QTD_EXPORT void qtd_QFontDatabase_families_WritingSystem_const
(void* __this_nativeId,
 void* __d_return_value,
 int writingSystem0)
{
    QFontDatabase::WritingSystem __qt_writingSystem0 = (QFontDatabase::WritingSystem) writingSystem0;
    QFontDatabase *__qt_this = (QFontDatabase *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->families((QFontDatabase::WritingSystem )__qt_writingSystem0);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QFontDatabase::font(const QString & family, const QString & style, int pointSize) const
QTD_EXTERN QTD_EXPORT void* qtd_QFontDatabase_font_string_string_int_const
(void* __this_nativeId,
 DArray family0,
 DArray style1,
 int pointSize2)
{
    QString __qt_family0 = QString::fromUtf8((const char *)family0.ptr, family0.length);
    QString __qt_style1 = QString::fromUtf8((const char *)style1.ptr, style1.length);
    QFontDatabase *__qt_this = (QFontDatabase *) __this_nativeId;
    QFont  __qt_return_value = __qt_this->font((const QString& )__qt_family0, (const QString& )__qt_style1, (int )pointSize2);

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QFontDatabase::isBitmapScalable(const QString & family, const QString & style) const
QTD_EXTERN QTD_EXPORT bool qtd_QFontDatabase_isBitmapScalable_string_string_const
(void* __this_nativeId,
 DArray family0,
 DArray style1)
{
    QString __qt_family0 = QString::fromUtf8((const char *)family0.ptr, family0.length);
    QString __qt_style1 = QString::fromUtf8((const char *)style1.ptr, style1.length);
    QFontDatabase *__qt_this = (QFontDatabase *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isBitmapScalable((const QString& )__qt_family0, (const QString& )__qt_style1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontDatabase::isFixedPitch(const QString & family, const QString & style) const
QTD_EXTERN QTD_EXPORT bool qtd_QFontDatabase_isFixedPitch_string_string_const
(void* __this_nativeId,
 DArray family0,
 DArray style1)
{
    QString __qt_family0 = QString::fromUtf8((const char *)family0.ptr, family0.length);
    QString __qt_style1 = QString::fromUtf8((const char *)style1.ptr, style1.length);
    QFontDatabase *__qt_this = (QFontDatabase *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isFixedPitch((const QString& )__qt_family0, (const QString& )__qt_style1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontDatabase::isScalable(const QString & family, const QString & style) const
QTD_EXTERN QTD_EXPORT bool qtd_QFontDatabase_isScalable_string_string_const
(void* __this_nativeId,
 DArray family0,
 DArray style1)
{
    QString __qt_family0 = QString::fromUtf8((const char *)family0.ptr, family0.length);
    QString __qt_style1 = QString::fromUtf8((const char *)style1.ptr, style1.length);
    QFontDatabase *__qt_this = (QFontDatabase *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isScalable((const QString& )__qt_family0, (const QString& )__qt_style1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontDatabase::isSmoothlyScalable(const QString & family, const QString & style) const
QTD_EXTERN QTD_EXPORT bool qtd_QFontDatabase_isSmoothlyScalable_string_string_const
(void* __this_nativeId,
 DArray family0,
 DArray style1)
{
    QString __qt_family0 = QString::fromUtf8((const char *)family0.ptr, family0.length);
    QString __qt_style1 = QString::fromUtf8((const char *)style1.ptr, style1.length);
    QFontDatabase *__qt_this = (QFontDatabase *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSmoothlyScalable((const QString& )__qt_family0, (const QString& )__qt_style1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontDatabase::italic(const QString & family, const QString & style) const
QTD_EXTERN QTD_EXPORT bool qtd_QFontDatabase_italic_string_string_const
(void* __this_nativeId,
 DArray family0,
 DArray style1)
{
    QString __qt_family0 = QString::fromUtf8((const char *)family0.ptr, family0.length);
    QString __qt_style1 = QString::fromUtf8((const char *)style1.ptr, style1.length);
    QFontDatabase *__qt_this = (QFontDatabase *) __this_nativeId;
    bool  __qt_return_value = __qt_this->italic((const QString& )__qt_family0, (const QString& )__qt_style1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontDatabase::pointSizes(const QString & family, const QString & style)
QTD_EXTERN QTD_EXPORT void qtd_QFontDatabase_pointSizes_string_string
(void* __this_nativeId,
 void* __d_return_value,
 DArray family0,
 DArray style1)
{
    QString __qt_family0 = QString::fromUtf8((const char *)family0.ptr, family0.length);
    QString __qt_style1 = QString::fromUtf8((const char *)style1.ptr, style1.length);
    QFontDatabase *__qt_this = (QFontDatabase *) __this_nativeId;
    QList<int >  __qt_return_value = __qt_this->pointSizes((const QString& )__qt_family0, (const QString& )__qt_style1);

QList<int > &__d_return_value_tmp = (*(QList<int > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QFontDatabase::smoothSizes(const QString & family, const QString & style)
QTD_EXTERN QTD_EXPORT void qtd_QFontDatabase_smoothSizes_string_string
(void* __this_nativeId,
 void* __d_return_value,
 DArray family0,
 DArray style1)
{
    QString __qt_family0 = QString::fromUtf8((const char *)family0.ptr, family0.length);
    QString __qt_style1 = QString::fromUtf8((const char *)style1.ptr, style1.length);
    QFontDatabase *__qt_this = (QFontDatabase *) __this_nativeId;
    QList<int >  __qt_return_value = __qt_this->smoothSizes((const QString& )__qt_family0, (const QString& )__qt_style1);

QList<int > &__d_return_value_tmp = (*(QList<int > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QFontDatabase::styleString(const QFont & font)
QTD_EXTERN QTD_EXPORT void qtd_QFontDatabase_styleString_QFont
(void* __this_nativeId,
 void* __d_return_value,
 void* font0)
{
    const QFont&  __qt_font0 = (const QFont& ) *(QFont *)font0;
    QFontDatabase *__qt_this = (QFontDatabase *) __this_nativeId;
    QString  __qt_return_value = __qt_this->styleString((const QFont& )__qt_font0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFontDatabase::styleString(const QFontInfo & fontInfo)
QTD_EXTERN QTD_EXPORT void qtd_QFontDatabase_styleString_QFontInfo
(void* __this_nativeId,
 void* __d_return_value,
 void* fontInfo0)
{
    const QFontInfo&  __qt_fontInfo0 = (const QFontInfo& ) *(QFontInfo *)fontInfo0;
    QFontDatabase *__qt_this = (QFontDatabase *) __this_nativeId;
    QString  __qt_return_value = __qt_this->styleString((const QFontInfo& )__qt_fontInfo0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFontDatabase::styles(const QString & family) const
QTD_EXTERN QTD_EXPORT void qtd_QFontDatabase_styles_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray family0)
{
    QString __qt_family0 = QString::fromUtf8((const char *)family0.ptr, family0.length);
    QFontDatabase *__qt_this = (QFontDatabase *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->styles((const QString& )__qt_family0);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QFontDatabase::weight(const QString & family, const QString & style) const
QTD_EXTERN QTD_EXPORT int qtd_QFontDatabase_weight_string_string_const
(void* __this_nativeId,
 DArray family0,
 DArray style1)
{
    QString __qt_family0 = QString::fromUtf8((const char *)family0.ptr, family0.length);
    QString __qt_style1 = QString::fromUtf8((const char *)style1.ptr, style1.length);
    QFontDatabase *__qt_this = (QFontDatabase *) __this_nativeId;
    int  __qt_return_value = __qt_this->weight((const QString& )__qt_family0, (const QString& )__qt_style1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontDatabase::writingSystems() const
QTD_EXTERN QTD_EXPORT void qtd_QFontDatabase_writingSystems_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFontDatabase *__qt_this = (QFontDatabase *) __this_nativeId;
    QList<QFontDatabase::WritingSystem >  __qt_return_value = __qt_this->writingSystems();

QList<QFontDatabase::WritingSystem > &__d_return_value_tmp = (*(QList<QFontDatabase::WritingSystem > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QFontDatabase::writingSystems(const QString & family) const
QTD_EXTERN QTD_EXPORT void qtd_QFontDatabase_writingSystems_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray family0)
{
    QString __qt_family0 = QString::fromUtf8((const char *)family0.ptr, family0.length);
    QFontDatabase *__qt_this = (QFontDatabase *) __this_nativeId;
    QList<QFontDatabase::WritingSystem >  __qt_return_value = __qt_this->writingSystems((const QString& )__qt_family0);

QList<QFontDatabase::WritingSystem > &__d_return_value_tmp = (*(QList<QFontDatabase::WritingSystem > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QFontDatabase::addApplicationFont(const QString & fileName)
QTD_EXTERN QTD_EXPORT int qtd_QFontDatabase_addApplicationFont_string
(DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    int  __qt_return_value = QFontDatabase::addApplicationFont((const QString& )__qt_fileName0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontDatabase::addApplicationFontFromData(const QByteArray & fontData)
QTD_EXTERN QTD_EXPORT int qtd_QFontDatabase_addApplicationFontFromData_QByteArray
(void* fontData0)
{
    const QByteArray&  __qt_fontData0 = (const QByteArray& ) *(QByteArray *)fontData0;
    int  __qt_return_value = QFontDatabase::addApplicationFontFromData((const QByteArray& )__qt_fontData0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontDatabase::applicationFontFamilies(int id)
QTD_EXTERN QTD_EXPORT void qtd_QFontDatabase_applicationFontFamilies_int
(void* __d_return_value,
 int id0)
{
    QStringList  __qt_return_value = QFontDatabase::applicationFontFamilies((int )id0);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QFontDatabase::removeAllApplicationFonts()
QTD_EXTERN QTD_EXPORT bool qtd_QFontDatabase_removeAllApplicationFonts
()
{
    bool  __qt_return_value = QFontDatabase::removeAllApplicationFonts();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontDatabase::removeApplicationFont(int id)
QTD_EXTERN QTD_EXPORT bool qtd_QFontDatabase_removeApplicationFont_int
(int id0)
{
    bool  __qt_return_value = QFontDatabase::removeApplicationFont((int )id0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontDatabase::standardSizes()
QTD_EXTERN QTD_EXPORT void qtd_QFontDatabase_standardSizes
(void* __d_return_value)
{
    QList<int >  __qt_return_value = QFontDatabase::standardSizes();

QList<int > &__d_return_value_tmp = (*(QList<int > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QFontDatabase::supportsThreadedFontRendering()
QTD_EXTERN QTD_EXPORT bool qtd_QFontDatabase_supportsThreadedFontRendering
()
{
    bool  __qt_return_value = QFontDatabase::supportsThreadedFontRendering();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontDatabase::writingSystemName(QFontDatabase::WritingSystem writingSystem)
QTD_EXTERN QTD_EXPORT void qtd_QFontDatabase_writingSystemName_WritingSystem
(void* __d_return_value,
 int writingSystem0)
{
    QFontDatabase::WritingSystem __qt_writingSystem0 = (QFontDatabase::WritingSystem) writingSystem0;
    QString  __qt_return_value = QFontDatabase::writingSystemName((QFontDatabase::WritingSystem )__qt_writingSystem0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFontDatabase::writingSystemSample(QFontDatabase::WritingSystem writingSystem)
QTD_EXTERN QTD_EXPORT void qtd_QFontDatabase_writingSystemSample_WritingSystem
(void* __d_return_value,
 int writingSystem0)
{
    QFontDatabase::WritingSystem __qt_writingSystem0 = (QFontDatabase::WritingSystem) writingSystem0;
    QString  __qt_return_value = QFontDatabase::writingSystemSample((QFontDatabase::WritingSystem )__qt_writingSystem0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QFontDatabase_QTypeInfo_isComplex() { return (bool) QTypeInfo<QFontDatabase>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QFontDatabase_QTypeInfo_isStatic() { return (bool) QTypeInfo<QFontDatabase>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QFontDatabase_QTypeInfo_isLarge() { return (bool) QTypeInfo<QFontDatabase>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QFontDatabase_QTypeInfo_isPointer() { return (bool) QTypeInfo<QFontDatabase>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QFontDatabase_QTypeInfo_isDummy() { return (bool) QTypeInfo<QFontDatabase>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QFontDatabase_placed_copy(void* orig, void* place) {
    const QFontDatabase&  __qt_orig = (const QFontDatabase& ) *(QFontDatabase *)orig;
    QFontDatabase *result = new (place) QFontDatabase (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QFontDatabase_native_copy(void* orig) {
    const QFontDatabase&  __qt_orig = (const QFontDatabase& ) *(QFontDatabase *)orig;
    QFontDatabase *result = new QFontDatabase (__qt_orig);
    return result;
}

