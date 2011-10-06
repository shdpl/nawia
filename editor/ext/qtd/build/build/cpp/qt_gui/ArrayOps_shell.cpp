/****************************************************************************
**
** This is a generated file, please don't touch.
**
****************************************************************************/

// stuff for passing D function pointers

#include "qtd_masterinclude.h"

#include "qtd_core.h"
#include "ArrayOps_qt_gui.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOpsPrimitive.h"

QTD_FUNC(GUI, allocate_QDockWidget_array)
QTD_FUNC(GUI, assign_QDockWidget_array_element)
QTD_FUNC(GUI, get_QDockWidget_from_array)

QTD_FUNC(GUI, allocate_QTableWidgetItem_array)
QTD_FUNC(GUI, assign_QTableWidgetItem_array_element)
QTD_FUNC(GUI, get_QTableWidgetItem_from_array)

QTD_FUNC(GUI, allocate_QMdiSubWindow_array)
QTD_FUNC(GUI, assign_QMdiSubWindow_array_element)
QTD_FUNC(GUI, get_QMdiSubWindow_from_array)

QTD_FUNC(GUI, allocate_QColor_array)
QTD_FUNC(GUI, assign_QColor_array_element)
QTD_FUNC(GUI, get_QColor_from_array)

QTD_FUNC(GUI, allocate_QGraphicsView_array)
QTD_FUNC(GUI, assign_QGraphicsView_array_element)
QTD_FUNC(GUI, get_QGraphicsView_from_array)

QTD_FUNC(GUI, allocate_QTextLength_array)
QTD_FUNC(GUI, assign_QTextLength_array_element)
QTD_FUNC(GUI, get_QTextLength_from_array)

QTD_FUNC(GUI, allocate_QTableWidgetSelectionRange_array)
QTD_FUNC(GUI, assign_QTableWidgetSelectionRange_array_element)
QTD_FUNC(GUI, get_QTableWidgetSelectionRange_from_array)

QTD_FUNC(GUI, allocate_QStandardItem_array)
QTD_FUNC(GUI, assign_QStandardItem_array_element)
QTD_FUNC(GUI, get_QStandardItem_from_array)

QTD_FUNC(GUI, allocate_QUndoStack_array)
QTD_FUNC(GUI, assign_QUndoStack_array_element)
QTD_FUNC(GUI, get_QUndoStack_from_array)

QTD_FUNC(GUI, allocate_QPolygonF_array)
QTD_FUNC(GUI, assign_QPolygonF_array_element)
QTD_FUNC(GUI, get_QPolygonF_from_array)

QTD_FUNC(GUI, allocate_QTextEdit_ExtraSelection_array)
QTD_FUNC(GUI, assign_QTextEdit_ExtraSelection_array_element)
QTD_FUNC(GUI, get_QTextEdit_ExtraSelection_from_array)

QTD_FUNC(GUI, allocate_QAction_array)
QTD_FUNC(GUI, assign_QAction_array_element)
QTD_FUNC(GUI, get_QAction_from_array)

QTD_FUNC(GUI, allocate_QTextOption_Tab_array)
QTD_FUNC(GUI, assign_QTextOption_Tab_array_element)
QTD_FUNC(GUI, get_QTextOption_Tab_from_array)

QTD_FUNC(GUI, allocate_QListWidgetItem_array)
QTD_FUNC(GUI, assign_QListWidgetItem_array_element)
QTD_FUNC(GUI, get_QListWidgetItem_from_array)

QTD_FUNC(GUI, allocate_QGraphicsItem_array)
QTD_FUNC(GUI, assign_QGraphicsItem_array_element)
QTD_FUNC(GUI, get_QGraphicsItem_from_array)

QTD_FUNC(GUI, allocate_QTextFormat_array)
QTD_FUNC(GUI, assign_QTextFormat_array_element)
QTD_FUNC(GUI, get_QTextFormat_from_array)

QTD_FUNC(GUI, allocate_QTextLayout_FormatRange_array)
QTD_FUNC(GUI, assign_QTextLayout_FormatRange_array_element)
QTD_FUNC(GUI, get_QTextLayout_FormatRange_from_array)

QTD_FUNC(GUI, allocate_QTextBlock_array)
QTD_FUNC(GUI, assign_QTextBlock_array_element)
QTD_FUNC(GUI, get_QTextBlock_from_array)

QTD_FUNC(GUI, allocate_QItemSelectionRange_array)
QTD_FUNC(GUI, assign_QItemSelectionRange_array_element)
QTD_FUNC(GUI, get_QItemSelectionRange_from_array)

QTD_FUNC(GUI, allocate_QKeySequence_array)
QTD_FUNC(GUI, assign_QKeySequence_array_element)
QTD_FUNC(GUI, get_QKeySequence_from_array)

QTD_FUNC(GUI, allocate_QInputMethodEvent_Attribute_array)
QTD_FUNC(GUI, assign_QInputMethodEvent_Attribute_array_element)
QTD_FUNC(GUI, get_QInputMethodEvent_Attribute_from_array)

QTD_FUNC(GUI, allocate_QGraphicsWidget_array)
QTD_FUNC(GUI, assign_QGraphicsWidget_array_element)
QTD_FUNC(GUI, get_QGraphicsWidget_from_array)

QTD_FUNC(GUI, allocate_QTreeWidgetItem_array)
QTD_FUNC(GUI, assign_QTreeWidgetItem_array_element)
QTD_FUNC(GUI, get_QTreeWidgetItem_from_array)

QTD_FUNC(GUI, allocate_QTextFrame_array)
QTD_FUNC(GUI, assign_QTextFrame_array_element)
QTD_FUNC(GUI, get_QTextFrame_from_array)

QTD_FUNC(GUI, allocate_QWidget_array)
QTD_FUNC(GUI, assign_QWidget_array_element)
QTD_FUNC(GUI, get_QWidget_from_array)

QTD_FUNC(GUI, allocate_QPrinterInfo_array)
QTD_FUNC(GUI, assign_QPrinterInfo_array_element)
QTD_FUNC(GUI, get_QPrinterInfo_from_array)

QTD_FUNC(GUI, allocate_QAbstractButton_array)
QTD_FUNC(GUI, assign_QAbstractButton_array_element)
QTD_FUNC(GUI, get_QAbstractButton_from_array)

// signal conversion functions
// QModelIndex
QTD_EXTERN QTD_EXPORT void qtd_qt_gui_QModelIndex_fromcpp_QList(void *cpp_ptr, DArray* __d_container) {
const QList<QModelIndex >& container = (*reinterpret_cast< const QList<QModelIndex > (*)>(cpp_ptr));
QList<QModelIndex > &__d_container_tmp = (*(QList<QModelIndex > *)__d_container);
__d_container_tmp = container;
}
// string
QTD_EXTERN QTD_EXPORT void qtd_qt_gui_string_fromcpp_QStringList(void *cpp_ptr, DArray* __d_container) {
const QStringList& container = (*reinterpret_cast< const QStringList (*)>(cpp_ptr));
QStringList &__d_container_tmp = (*(QStringList *)__d_container);
__d_container_tmp = container;
}
// QRectF
QTD_EXTERN QTD_EXPORT void qtd_qt_gui_QRectF_fromcpp_QList(void *cpp_ptr, DArray* __d_container) {
const QList<QRectF >& container = (*reinterpret_cast< const QList<QRectF > (*)>(cpp_ptr));
QList<QRectF > &__d_container_tmp = (*(QList<QRectF > *)__d_container);
__d_container_tmp = container;
}
