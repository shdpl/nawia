#include <QVariant>
#include <qlist.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qprintengine.h>
#include <qprinter.h>
#include <qprinterinfo.h>

#include "QPrinter_shell.h"
#include <iostream>
#include <qprinter.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QPaintDevice* qtd_QPrinter_cast_to_QPaintDevice(QPrinter *ptr)
{
    return dynamic_cast<QPaintDevice*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QPrinter_delete(void* nativeId)
{
    delete (QPrinter_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QPrinter_destroy(void* nativeId)
{
    call_destructor((QPrinter_QtDShell*)nativeId);
}

QPrinter_QtDShell::QPrinter_QtDShell(void *d_ptr, QPrinter::PrinterMode  mode0)
    : QPrinter(mode0),
      QtdObjectLink(d_ptr)
{
}

QPrinter_QtDShell::QPrinter_QtDShell(void *d_ptr, const QPrinterInfo&  printer0, QPrinter::PrinterMode  mode1)
    : QPrinter(printer0, mode1),
      QtdObjectLink(d_ptr)
{
}

QPrinter_QtDShell::~QPrinter_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QPrinter_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QPrinter*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QPrinter_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QPrinter_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(this->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QPrinter_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(this->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QPrinter_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QPrinter_QtDShell::__public_setEngines(QPrintEngine*  printEngine0, QPaintEngine*  paintEngine1)
{
    QPrinter::setEngines((QPrintEngine* )printEngine0, (QPaintEngine* )paintEngine1);
}

// Write virtual function overries used to decide on static/virtual calls
int  QPrinter_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QPrinter::devType();
    } else {
        return devType();
    }
}

int  QPrinter_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QPrinter::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QPaintEngine*  QPrinter_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QPrinter::paintEngine();
    } else {
        return paintEngine();
    }
}

// ---externC---
// QPrinter::QPrinter(QPrinter::PrinterMode mode)
QTD_EXTERN QTD_EXPORT void* qtd_QPrinter_QPrinter_PrinterMode
(void *d_ptr,
 int mode0)
{
    QPrinter::PrinterMode __qt_mode0 = (QPrinter::PrinterMode) mode0;
    QPrinter_QtDShell *__qt_this = new QPrinter_QtDShell(d_ptr, (QPrinter::PrinterMode )__qt_mode0);
    return (void *) __qt_this;

}

// QPrinter::QPrinter(const QPrinterInfo & printer, QPrinter::PrinterMode mode)
QTD_EXTERN QTD_EXPORT void* qtd_QPrinter_QPrinter_QPrinterInfo_PrinterMode
(void *d_ptr,
 void* printer0,
 int mode1)
{
    const QPrinterInfo&  __qt_printer0 = (const QPrinterInfo& ) *(QPrinterInfo *)printer0;
    QPrinter::PrinterMode __qt_mode1 = (QPrinter::PrinterMode) mode1;
    QPrinter_QtDShell *__qt_this = new QPrinter_QtDShell(d_ptr, (const QPrinterInfo& )__qt_printer0, (QPrinter::PrinterMode )__qt_mode1);
    return (void *) __qt_this;

}

// QPrinter::abort()
QTD_EXTERN QTD_EXPORT bool qtd_QPrinter_abort
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->abort();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::actualNumCopies() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_actualNumCopies_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->actualNumCopies();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::collateCopies() const
QTD_EXTERN QTD_EXPORT bool qtd_QPrinter_collateCopies_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->collateCopies();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::colorCount() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_colorCount_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::colorCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::colorMode() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_colorMode_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->colorMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::copyCount() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_copyCount_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->copyCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::creator() const
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_creator_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->creator();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QPrinter::depth() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_depth_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::depth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::docName() const
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_docName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->docName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QPrinter::doubleSidedPrinting() const
QTD_EXTERN QTD_EXPORT bool qtd_QPrinter_doubleSidedPrinting_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->doubleSidedPrinting();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::duplex() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_duplex_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->duplex();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::fontEmbeddingEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QPrinter_fontEmbeddingEnabled_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->fontEmbeddingEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::fromPage() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_fromPage_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->fromPage();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::fullPage() const
QTD_EXTERN QTD_EXPORT bool qtd_QPrinter_fullPage_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->fullPage();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::getPageMargins(double * left, double * top, double * right, double * bottom, QPrinter::Unit unit) const
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_getPageMargins_nativepointerdouble_nativepointerdouble_nativepointerdouble_nativepointerdouble_Unit_const
(void* __this_nativeId,
 double* left0,
 double* top1,
 double* right2,
 double* bottom3,
 int unit4)
{
    double*  __qt_left0 = (double* ) left0;
    double*  __qt_top1 = (double* ) top1;
    double*  __qt_right2 = (double* ) right2;
    double*  __qt_bottom3 = (double* ) bottom3;
    QPrinter::Unit __qt_unit4 = (QPrinter::Unit) unit4;
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->getPageMargins((double* )__qt_left0, (double* )__qt_top1, (double* )__qt_right2, (double* )__qt_bottom3, (QPrinter::Unit )__qt_unit4);

}

// QPrinter::height() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_height_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::height();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::heightMM() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_heightMM_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::heightMM();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QPrinter_isValid_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::logicalDpiX() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_logicalDpiX_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::logicalDpiX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::logicalDpiY() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_logicalDpiY_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::logicalDpiY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::newPage()
QTD_EXTERN QTD_EXPORT bool qtd_QPrinter_newPage
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->newPage();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::numColors() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_numColors_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::numColors();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::numCopies() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_numCopies_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->numCopies();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::orientation() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_orientation_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->orientation();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::outputFileName() const
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_outputFileName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->outputFileName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QPrinter::outputFormat() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_outputFormat_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->outputFormat();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::pageOrder() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_pageOrder_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->pageOrder();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::pageRect() const
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_pageRect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->pageRect();

    *__d_return_value = __qt_return_value;

}

// QPrinter::pageRect(QPrinter::Unit arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_pageRect_Unit_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 int arg__1)
{
    QPrinter::Unit __qt_arg__1 = (QPrinter::Unit) arg__1;
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->pageRect((QPrinter::Unit )__qt_arg__1);

    *__d_return_value = __qt_return_value;

}

// QPrinter::pageSize() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_pageSize_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->pageSize();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::paintingActive() const
QTD_EXTERN QTD_EXPORT bool qtd_QPrinter_paintingActive_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QPaintDevice::paintingActive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::paperRect() const
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_paperRect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->paperRect();

    *__d_return_value = __qt_return_value;

}

// QPrinter::paperRect(QPrinter::Unit arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_paperRect_Unit_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 int arg__1)
{
    QPrinter::Unit __qt_arg__1 = (QPrinter::Unit) arg__1;
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->paperRect((QPrinter::Unit )__qt_arg__1);

    *__d_return_value = __qt_return_value;

}

// QPrinter::paperSize() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_paperSize_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->paperSize();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::paperSize(QPrinter::Unit unit) const
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_paperSize_Unit_const
(void* __this_nativeId,
 QSizeF * __d_return_value,
 int unit0)
{
    QPrinter::Unit __qt_unit0 = (QPrinter::Unit) unit0;
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    QSizeF  __qt_return_value = __qt_this->paperSize((QPrinter::Unit )__qt_unit0);

    *__d_return_value = __qt_return_value;

}

// QPrinter::paperSource() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_paperSource_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->paperSource();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::physicalDpiX() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_physicalDpiX_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::physicalDpiX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::physicalDpiY() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_physicalDpiY_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::physicalDpiY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::printEngine() const
QTD_EXTERN QTD_EXPORT void* qtd_QPrinter_printEngine_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    QPrintEngine*  __qt_return_value = __qt_this->printEngine();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QPrinter::printProgram() const
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_printProgram_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->printProgram();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QPrinter::printRange() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_printRange_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->printRange();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::printerName() const
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_printerName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->printerName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QPrinter::printerState() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_printerState_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->printerState();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::resolution() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_resolution_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->resolution();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::setCollateCopies(bool collate)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setCollateCopies_bool
(void* __this_nativeId,
 bool collate0)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setCollateCopies((bool )collate0);

}

// QPrinter::setColorMode(QPrinter::ColorMode arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setColorMode_ColorMode
(void* __this_nativeId,
 int arg__1)
{
    QPrinter::ColorMode __qt_arg__1 = (QPrinter::ColorMode) arg__1;
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setColorMode((QPrinter::ColorMode )__qt_arg__1);

}

// QPrinter::setCopyCount(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setCopyCount_int
(void* __this_nativeId,
 int arg__1)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setCopyCount((int )arg__1);

}

// QPrinter::setCreator(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setCreator_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setCreator((const QString& )__qt_arg__1);

}

// QPrinter::setDocName(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setDocName_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setDocName((const QString& )__qt_arg__1);

}

// QPrinter::setDoubleSidedPrinting(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setDoubleSidedPrinting_bool
(void* __this_nativeId,
 bool enable0)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setDoubleSidedPrinting((bool )enable0);

}

// QPrinter::setDuplex(QPrinter::DuplexMode duplex)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setDuplex_DuplexMode
(void* __this_nativeId,
 int duplex0)
{
    QPrinter::DuplexMode __qt_duplex0 = (QPrinter::DuplexMode) duplex0;
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setDuplex((QPrinter::DuplexMode )__qt_duplex0);

}

// QPrinter::setEngines(QPrintEngine * printEngine, QPaintEngine * paintEngine)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setEngines_QPrintEngine_QPaintEngine
(void* __this_nativeId,
 void* printEngine0,
 void* paintEngine1)
{
    QPrintEngine*  __qt_printEngine0 = (QPrintEngine* ) printEngine0;
    QPaintEngine*  __qt_paintEngine1 = (QPaintEngine* ) paintEngine1;
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->__public_setEngines((QPrintEngine* )__qt_printEngine0, (QPaintEngine* )__qt_paintEngine1);

}

// QPrinter::setFontEmbeddingEnabled(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setFontEmbeddingEnabled_bool
(void* __this_nativeId,
 bool enable0)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setFontEmbeddingEnabled((bool )enable0);

}

// QPrinter::setFromTo(int fromPage, int toPage)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setFromTo_int_int
(void* __this_nativeId,
 int fromPage0,
 int toPage1)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setFromTo((int )fromPage0, (int )toPage1);

}

// QPrinter::setFullPage(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setFullPage_bool
(void* __this_nativeId,
 bool arg__1)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setFullPage((bool )arg__1);

}

// QPrinter::setNumCopies(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setNumCopies_int
(void* __this_nativeId,
 int arg__1)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setNumCopies((int )arg__1);

}

// QPrinter::setOrientation(QPrinter::Orientation arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setOrientation_Orientation
(void* __this_nativeId,
 int arg__1)
{
    QPrinter::Orientation __qt_arg__1 = (QPrinter::Orientation) arg__1;
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setOrientation((QPrinter::Orientation )__qt_arg__1);

}

// QPrinter::setOutputFileName(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setOutputFileName_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setOutputFileName((const QString& )__qt_arg__1);

}

// QPrinter::setOutputFormat(QPrinter::OutputFormat format)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setOutputFormat_OutputFormat
(void* __this_nativeId,
 int format0)
{
    QPrinter::OutputFormat __qt_format0 = (QPrinter::OutputFormat) format0;
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setOutputFormat((QPrinter::OutputFormat )__qt_format0);

}

// QPrinter::setPageMargins(double left, double top, double right, double bottom, QPrinter::Unit unit)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setPageMargins_double_double_double_double_Unit
(void* __this_nativeId,
 double left0,
 double top1,
 double right2,
 double bottom3,
 int unit4)
{
    QPrinter::Unit __qt_unit4 = (QPrinter::Unit) unit4;
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setPageMargins((double )left0, (double )top1, (double )right2, (double )bottom3, (QPrinter::Unit )__qt_unit4);

}

// QPrinter::setPageOrder(QPrinter::PageOrder arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setPageOrder_PageOrder
(void* __this_nativeId,
 int arg__1)
{
    QPrinter::PageOrder __qt_arg__1 = (QPrinter::PageOrder) arg__1;
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setPageOrder((QPrinter::PageOrder )__qt_arg__1);

}

// QPrinter::setPageSize(QPrinter::PageSize arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setPageSize_PageSize
(void* __this_nativeId,
 int arg__1)
{
    QPrinter::PageSize __qt_arg__1 = (QPrinter::PageSize) arg__1;
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setPageSize((QPrinter::PageSize )__qt_arg__1);

}

// QPrinter::setPaperSize(QPrinter::PageSize arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setPaperSize_PageSize
(void* __this_nativeId,
 int arg__1)
{
    QPrinter::PageSize __qt_arg__1 = (QPrinter::PageSize) arg__1;
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setPaperSize((QPrinter::PageSize )__qt_arg__1);

}

// QPrinter::setPaperSize(const QSizeF & paperSize, QPrinter::Unit unit)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setPaperSize_QSizeF_Unit
(void* __this_nativeId,
 QSizeF paperSize0,
 int unit1)
{
    QPrinter::Unit __qt_unit1 = (QPrinter::Unit) unit1;
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setPaperSize((const QSizeF& )paperSize0, (QPrinter::Unit )__qt_unit1);

}

// QPrinter::setPaperSource(QPrinter::PaperSource arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setPaperSource_PaperSource
(void* __this_nativeId,
 int arg__1)
{
    QPrinter::PaperSource __qt_arg__1 = (QPrinter::PaperSource) arg__1;
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setPaperSource((QPrinter::PaperSource )__qt_arg__1);

}

// QPrinter::setPrintProgram(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setPrintProgram_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setPrintProgram((const QString& )__qt_arg__1);

}

// QPrinter::setPrintRange(QPrinter::PrintRange range)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setPrintRange_PrintRange
(void* __this_nativeId,
 int range0)
{
    QPrinter::PrintRange __qt_range0 = (QPrinter::PrintRange) range0;
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setPrintRange((QPrinter::PrintRange )__qt_range0);

}

// QPrinter::setPrinterName(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setPrinterName_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setPrinterName((const QString& )__qt_arg__1);

}

// QPrinter::setResolution(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_setResolution_int
(void* __this_nativeId,
 int arg__1)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    __qt_this->setResolution((int )arg__1);

}

// QPrinter::supportedResolutions() const
QTD_EXTERN QTD_EXPORT void qtd_QPrinter_supportedResolutions_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    QList<int >  __qt_return_value = __qt_this->supportedResolutions();

QList<int > &__d_return_value_tmp = (*(QList<int > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QPrinter::supportsMultipleCopies() const
QTD_EXTERN QTD_EXPORT bool qtd_QPrinter_supportsMultipleCopies_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->supportsMultipleCopies();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::toPage() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_toPage_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->toPage();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::width() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_width_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::width();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::widthMM() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_widthMM_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::widthMM();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::devType() const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_devType_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPrinter*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_devType(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::metric(QPaintDevice::PaintDeviceMetric arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QPrinter_metric_PaintDeviceMetric_const
(void* __this_nativeId,
 int arg__1)
{
    QPaintDevice::PaintDeviceMetric __qt_arg__1 = (QPaintDevice::PaintDeviceMetric) arg__1;
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPrinter*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_metric((QPaintDevice::PaintDeviceMetric )__qt_arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrinter::paintEngine() const
QTD_EXTERN QTD_EXPORT void* qtd_QPrinter_paintEngine_const
(void* __this_nativeId)
{
    QPrinter_QtDShell *__qt_this = (QPrinter_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPrinter*)__this_nativeId) != NULL;
    QPaintEngine*  __qt_return_value = __qt_this->__override_paintEngine(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


