#include <QVariant>
#include <qlist.h>
#include <qprinter.h>
#include <qprinterinfo.h>

#include <iostream>
#include <qprinterinfo.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QPrinterInfo_delete(void* nativeId)
{
    delete (QPrinterInfo*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QPrinterInfo_destroy(void* nativeId)
{
    call_destructor((QPrinterInfo*)nativeId);
}

// ---externC---
// QPrinterInfo::QPrinterInfo()
QTD_EXTERN QTD_EXPORT void* qtd_QPrinterInfo_QPrinterInfo
()
{
    QPrinterInfo *__qt_this = new QPrinterInfo();
    return (void *) __qt_this;

}

// QPrinterInfo::QPrinterInfo(const QPrinter & printer)
QTD_EXTERN QTD_EXPORT void* qtd_QPrinterInfo_QPrinterInfo_QPrinter
(void* printer0)
{
    const QPrinter&  __qt_printer0 = (const QPrinter& ) * (QPrinter *) printer0;
    QPrinterInfo *__qt_this = new QPrinterInfo((const QPrinter& )__qt_printer0);
    return (void *) __qt_this;

}

// QPrinterInfo::QPrinterInfo(const QPrinterInfo & src)
QTD_EXTERN QTD_EXPORT void* qtd_QPrinterInfo_QPrinterInfo_QPrinterInfo
(void* src0)
{
    const QPrinterInfo&  __qt_src0 = (const QPrinterInfo& ) *(QPrinterInfo *)src0;
    QPrinterInfo *__qt_this = new QPrinterInfo((const QPrinterInfo& )__qt_src0);
    return (void *) __qt_this;

}

// QPrinterInfo::isDefault() const
QTD_EXTERN QTD_EXPORT bool qtd_QPrinterInfo_isDefault_const
(void* __this_nativeId)
{
    QPrinterInfo *__qt_this = (QPrinterInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isDefault();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinterInfo::isNull() const
QTD_EXTERN QTD_EXPORT bool qtd_QPrinterInfo_isNull_const
(void* __this_nativeId)
{
    QPrinterInfo *__qt_this = (QPrinterInfo *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNull();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinterInfo::printerName() const
QTD_EXTERN QTD_EXPORT void qtd_QPrinterInfo_printerName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QPrinterInfo *__qt_this = (QPrinterInfo *) __this_nativeId;
    QString  __qt_return_value = __qt_this->printerName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QPrinterInfo::supportedPaperSizes() const
QTD_EXTERN QTD_EXPORT void qtd_QPrinterInfo_supportedPaperSizes_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QPrinterInfo *__qt_this = (QPrinterInfo *) __this_nativeId;
    QList<QPrinter::PageSize >  __qt_return_value = __qt_this->supportedPaperSizes();

QList<QPrinter::PageSize > &__d_return_value_tmp = (*(QList<QPrinter::PageSize > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QPrinterInfo::availablePrinters()
QTD_EXTERN QTD_EXPORT void qtd_QPrinterInfo_availablePrinters
(void* __d_return_value)
{
    QList<QPrinterInfo >  __qt_return_value = QPrinterInfo::availablePrinters();

QList<QPrinterInfo > &__d_return_value_tmp = (*(QList<QPrinterInfo > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QPrinterInfo::defaultPrinter()
QTD_EXTERN QTD_EXPORT void* qtd_QPrinterInfo_defaultPrinter
()
{
    QPrinterInfo  __qt_return_value = QPrinterInfo::defaultPrinter();

    void* __d_return_value = (void*) new QPrinterInfo(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QPrinterInfo_QTypeInfo_isComplex() { return (bool) QTypeInfo<QPrinterInfo>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QPrinterInfo_QTypeInfo_isStatic() { return (bool) QTypeInfo<QPrinterInfo>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QPrinterInfo_QTypeInfo_isLarge() { return (bool) QTypeInfo<QPrinterInfo>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QPrinterInfo_QTypeInfo_isPointer() { return (bool) QTypeInfo<QPrinterInfo>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QPrinterInfo_QTypeInfo_isDummy() { return (bool) QTypeInfo<QPrinterInfo>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QPrinterInfo_placed_copy(void* orig, void* place) {
    const QPrinterInfo&  __qt_orig = (const QPrinterInfo& ) *(QPrinterInfo *)orig;
    QPrinterInfo *result = new (place) QPrinterInfo (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QPrinterInfo_native_copy(void* orig) {
    const QPrinterInfo&  __qt_orig = (const QPrinterInfo& ) *(QPrinterInfo *)orig;
    QPrinterInfo *result = new QPrinterInfo (__qt_orig);
    return result;
}

