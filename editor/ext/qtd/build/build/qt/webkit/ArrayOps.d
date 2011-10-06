/****************************************************************************
**
** This is a generated file, please don't touch.
**
****************************************************************************/

module qt.webkit.ArrayOps;

// QWebFrame
public import qt.webkit.QWebFrame;

    extern (C) void qtd_export_allocate_QWebFrame_array(QWebFrame[]* arr, size_t len) {  *arr = new QWebFrame[len];  }
    extern (C)  void qtd_set_allocate_QWebFrame_array(VoidFunc func);
    static this() { qtd_set_allocate_QWebFrame_array(cast(VoidFunc)&qtd_export_allocate_QWebFrame_array); }
    extern (C) void qtd_export_assign_QWebFrame_array_element(QWebFrame[]* arr, size_t pos, void* elem) {  (*arr)[pos] = qtd_QWebFrame_cpp_to_d(elem);  }
    extern (C)  void qtd_set_assign_QWebFrame_array_element(VoidFunc func);
    static this() { qtd_set_assign_QWebFrame_array_element(cast(VoidFunc)&qtd_export_assign_QWebFrame_array_element); }
    extern (C) void qtd_export_get_QWebFrame_from_array(QWebFrame* arr, size_t pos, void** elem) {  *elem = arr[pos].qtdNativeId;  }
    extern (C)  void qtd_set_get_QWebFrame_from_array(VoidFunc func);
    static this() { qtd_set_get_QWebFrame_from_array(cast(VoidFunc)&qtd_export_get_QWebFrame_from_array); }
package QWebFrame qtd_QWebFrame_cpp_to_d(void* ret)
{
return QWebFrame.__getObject(ret);
}

// QWebHistoryItem
public import qt.webkit.QWebHistoryItem;

    extern (C) void qtd_export_allocate_QWebHistoryItem_array(QWebHistoryItem[]* arr, size_t len) {  *arr = new QWebHistoryItem[len];  }
    extern (C)  void qtd_set_allocate_QWebHistoryItem_array(VoidFunc func);
    static this() { qtd_set_allocate_QWebHistoryItem_array(cast(VoidFunc)&qtd_export_allocate_QWebHistoryItem_array); }
    extern (C) void qtd_export_assign_QWebHistoryItem_array_element(QWebHistoryItem[]* arr, size_t pos, void* elem) {  (*arr)[pos] = qtd_QWebHistoryItem_cpp_to_d(elem);  }
    extern (C)  void qtd_set_assign_QWebHistoryItem_array_element(VoidFunc func);
    static this() { qtd_set_assign_QWebHistoryItem_array_element(cast(VoidFunc)&qtd_export_assign_QWebHistoryItem_array_element); }
    extern (C) void qtd_export_get_QWebHistoryItem_from_array(QWebHistoryItem* arr, size_t pos, void** elem) {  *elem = arr[pos].qtdNativeId;  }
    extern (C)  void qtd_set_get_QWebHistoryItem_from_array(VoidFunc func);
    static this() { qtd_set_get_QWebHistoryItem_from_array(cast(VoidFunc)&qtd_export_get_QWebHistoryItem_from_array); }
package QWebHistoryItem qtd_QWebHistoryItem_cpp_to_d(void* ret)
{
return new QWebHistoryItem(ret);
}

