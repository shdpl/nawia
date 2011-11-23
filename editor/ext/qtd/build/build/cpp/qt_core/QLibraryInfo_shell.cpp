#include <QVariant>
#include <qdatetime.h>

#include <iostream>
#include <qlibraryinfo.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

// ---externC---
// QLibraryInfo::buildDate()
QTD_EXTERN QTD_EXPORT void* qtd_QLibraryInfo_buildDate
()
{
    QDate  __qt_return_value = QLibraryInfo::buildDate();

    void* __d_return_value = (void*) new QDate(__qt_return_value);

    return __d_return_value;
}

// QLibraryInfo::buildKey()
QTD_EXTERN QTD_EXPORT void qtd_QLibraryInfo_buildKey
(void* __d_return_value)
{
    QString  __qt_return_value = QLibraryInfo::buildKey();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLibraryInfo::licensedProducts()
QTD_EXTERN QTD_EXPORT void qtd_QLibraryInfo_licensedProducts
(void* __d_return_value)
{
    QString  __qt_return_value = QLibraryInfo::licensedProducts();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLibraryInfo::licensee()
QTD_EXTERN QTD_EXPORT void qtd_QLibraryInfo_licensee
(void* __d_return_value)
{
    QString  __qt_return_value = QLibraryInfo::licensee();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLibraryInfo::location(QLibraryInfo::LibraryLocation arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLibraryInfo_location_LibraryLocation
(void* __d_return_value,
 int arg__1)
{
    QLibraryInfo::LibraryLocation __qt_arg__1 = (QLibraryInfo::LibraryLocation) arg__1;
    QString  __qt_return_value = QLibraryInfo::location((QLibraryInfo::LibraryLocation )__qt_arg__1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


