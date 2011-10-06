#include "metainfo.h"
#include <QMetaType>
#include <QString>
#include <QLatin1String>
#include <QHash>
#include <QReadWriteLock>
#include <QReadLocker>
#include <QWriteLocker>
#include <qtjambi_cache.h>
#include <qtjambi_core.h>

#include <qaccessibleplugin.h>
#include <qabstractbutton.h>
#include <qgraphicsitem.h>
#include <qiconengineplugin.h>
#include <qimageiohandler.h>
#include <qinputcontextplugin.h>
#include <qabstractitemdelegate.h>
#include <qabstractitemview.h>
#include <qabstractpagesetupdialog.h>
#include <qpictureformatplugin.h>
#include <qabstractprintdialog.h>
#include <qabstractproxymodel.h>
#include <qabstractscrollarea.h>
#include <qabstractslider.h>
#include <qabstractspinbox.h>
#include <qstyleplugin.h>
#include <qabstractitemmodel.h>
#include <qtextcodecplugin.h>
#include <qabstracttextdocumentlayout.h>
#include <QAbstractTextDocumentLayout>
#include <qabstracttextdocumentlayout.h>
#include <qaccessible.h>
#include <qaccessible2.h>
#include <qaccessiblebridge.h>
#include <qaccessible.h>
#include <qaccessible.h>
#include <qaccessible.h>
#include <qaccessibleobject.h>
#include <qaccessibleobject.h>
#include <qaccessibleplugin.h>
#include <qaccessiblewidget.h>
#include <qaccessiblewidget.h>
#include <qaction.h>
#include <qevent.h>
#include <qactiongroup.h>
#include <qapplication.h>
#include <qbitmap.h>
#include <qboxlayout.h>
#include <qbrush.h>
#include <qbuttongroup.h>
#include <qcdestyle.h>
#include <qcalendarwidget.h>
#include <qcheckbox.h>
#include <qcleanlooksstyle.h>
#include <qclipboard.h>
#include <qevent.h>
#include <qevent.h>
#include <qcolor.h>
#include <qcolordialog.h>
#include <qcolormap.h>
#include <qcolumnview.h>
#include <qcombobox.h>
#include <qcommandlinkbutton.h>
#include <qcommonstyle.h>
#include <qcompleter.h>
#include <qbrush.h>
#include <qevent.h>
#include <qcursor.h>
#include <qdatawidgetmapper.h>
#include <qdatetimeedit.h>
#include <qdatetimeedit.h>
#include <qdesktopservices.h>
#include <qdesktopwidget.h>
#include <qdial.h>
#include <qdialog.h>
#include <qdialogbuttonbox.h>
#include <qdirmodel.h>
#include <qdockwidget.h>
#include <qspinbox.h>
#include <qvalidator.h>
#include <qdrag.h>
#include <qevent.h>
#include <qevent.h>
#include <qevent.h>
#include <qevent.h>
#include <qevent.h>
#include <qerrormessage.h>
#include <qfiledialog.h>
#include <qfileiconprovider.h>
#include <qevent.h>
#include <qfilesystemmodel.h>
#include <qevent.h>
#include <qfocusframe.h>
#include <qfont.h>
#include <qfontcombobox.h>
#include <qfontdatabase.h>
#include <qfontdialog.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qfontmetrics.h>
#include <qformlayout.h>
#include <qframe.h>
#include <qbrush.h>
#include <qgraphicsitem.h>
#include <qgraphicsgridlayout.h>
#include <qgraphicsitem.h>
#include <qgraphicsitemanimation.h>
#include <qgraphicsitem.h>
#include <qgraphicslayout.h>
#include <qgraphicslayoutitem.h>
#include <qgraphicsitem.h>
#include <qgraphicslinearlayout.h>
#include <qgraphicsitem.h>
#include <qgraphicsitem.h>
#include <qgraphicsitem.h>
#include <qgraphicsitem.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicssceneevent.h>
#include <qgraphicssceneevent.h>
#include <qgraphicssceneevent.h>
#include <qgraphicssceneevent.h>
#include <qgraphicssceneevent.h>
#include <qgraphicssceneevent.h>
#include <qgraphicssceneevent.h>
#include <qgraphicssceneevent.h>
#include <qgraphicsitem.h>
#include <qgraphicsitem.h>
#include <qgraphicsview.h>
#include <qgraphicswidget.h>
#include <qgridlayout.h>
#include <qgroupbox.h>
#include <qboxlayout.h>
#include <qheaderview.h>
#include <qevent.h>
#include <qevent.h>
#include <qevent.h>
#include <qicon.h>
#include <qevent.h>
#include <qiconengine.h>
#include <qiconengineplugin.h>
#include <qiconengine.h>
#include <qimage.h>
#include <qimageiohandler.h>
#include <qimageiohandler.h>
#include <qimagereader.h>
#include <qimagewriter.h>
#include <qinputcontext.h>
#include <qinputcontextfactory.h>
#include <qinputcontextplugin.h>
#include <qinputdialog.h>
#include <qevent.h>
#include <qevent.h>
#include <QInputMethodEvent>
#include <qvalidator.h>
#include <qitemdelegate.h>
#include <qitemeditorfactory.h>
#include <qitemeditorfactory.h>
#include <qitemselectionmodel.h>
#include <qitemselectionmodel.h>
#include <qitemselectionmodel.h>
#include <qevent.h>
#include <qkeysequence.h>
#include <qlcdnumber.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlineedit.h>
#include <qbrush.h>
#include <qlistview.h>
#include <qlistwidget.h>
#include <qlistwidget.h>
#include <qmainwindow.h>
#include <qmatrix.h>
#include <qmdiarea.h>
#include <qmdisubwindow.h>
#include <qmenu.h>
#include <qmenubar.h>
#include <qmessagebox.h>
#include <qmotifstyle.h>
#include <qevent.h>
#include <qevent.h>
#include <qmovie.h>
#include <qpagesetupdialog.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpaintengine.h>
#include <qevent.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpainterpath.h>
#include <QPainterPath>
#include <qpalette.h>
#include <qpen.h>
#include <qpicture.h>
#include <qpictureformatplugin.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpixmapcache.h>
#include <qplaintextedit.h>
#include <qplaintextedit.h>
#include <qplastiquestyle.h>
#include <qpolygon.h>
#include <qpolygon.h>
#include <qprintdialog.h>
#include <qprintengine.h>
#include <qprintpreviewdialog.h>
#include <qprintpreviewwidget.h>
#include <qprinter.h>
#include <qprinterinfo.h>
#include <qprogressbar.h>
#include <qprogressdialog.h>
#include <qproxymodel.h>
#include <qpushbutton.h>
#include <qbrush.h>
#include <qradiobutton.h>
#include <qvalidator.h>
#include <qregion.h>
#include <qevent.h>
#include <qrubberband.h>
#include <qscrollarea.h>
#include <qscrollbar.h>
#include <qsessionmanager.h>
#include <qshortcut.h>
#include <qevent.h>
#include <qevent.h>
#include <qsizegrip.h>
#include <qsizepolicy.h>
#include <qslider.h>
#include <qsortfilterproxymodel.h>
#include <qsound.h>
#include <qlayoutitem.h>
#include <qspinbox.h>
#include <qsplashscreen.h>
#include <qsplitter.h>
#include <qsplitter.h>
#include <qstackedlayout.h>
#include <qstackedwidget.h>
#include <qstandarditemmodel.h>
#include <qstandarditemmodel.h>
#include <qstatusbar.h>
#include <qevent.h>
#include <qstringlistmodel.h>
#include <qstyle.h>
#include <qstylefactory.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstyleoption.h>
#include <qstylepainter.h>
#include <qstyleplugin.h>
#include <qstyleditemdelegate.h>
#include <qsyntaxhighlighter.h>
#include <qsystemtrayicon.h>
#include <qtabbar.h>
#include <qtabwidget.h>
#include <qtableview.h>
#include <qtablewidget.h>
#include <qtablewidget.h>
#include <qtablewidget.h>
#include <qevent.h>
#include <qtextobject.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qtextobject.h>
#include <QTextBlock>
#include <qtextbrowser.h>
#include <qtextformat.h>
#include <qtextcodecplugin.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextdocumentfragment.h>
#include <qtextedit.h>
#include <QTextEdit>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qtextobject.h>
#include <qtextformat.h>
#include <QTextFrame>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qpaintengine.h>
#include <qtextlayout.h>
#include <QTextLayout>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextlist.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qabstracttextdocumentlayout.h>
#include <qtextoption.h>
#include <qtextoption.h>
#include <qtexttable.h>
#include <qtexttable.h>
#include <qtextformat.h>
#include <qtextformat.h>
#include <qdatetimeedit.h>
#include <qtoolbar.h>
#include <qevent.h>
#include <qtoolbox.h>
#include <qtoolbutton.h>
#include <qtooltip.h>
#include <qtransform.h>
#include <qtreeview.h>
#include <qtreewidget.h>
#include <qtreewidget.h>
#include <qtreewidgetitemiterator.h>
#include <qundostack.h>
#include <qundogroup.h>
#include <qundostack.h>
#include <qundoview.h>
#include <qboxlayout.h>
#include <qvalidator.h>
#include <qwhatsthis.h>
#include <qevent.h>
#include <qevent.h>
#include <qwidget.h>
#include <qwidgetaction.h>
#include <qlayoutitem.h>
#include <qevent.h>
#include <qwindowsstyle.h>
#include <qwizard.h>
#include <qwizard.h>
#include <qworkspace.h>

void destructor_qt_gui_QAbstractAccessibleFactory_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QAccessibleFactoryInterface *>(ptr);
}

void destructor_qt_gui_QAbstractGraphicsShapeItem_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QAbstractGraphicsShapeItem *>(ptr);
}

void destructor_qt_gui_QAbstractIconEngineFactoryV2_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QIconEngineFactoryInterfaceV2 *>(ptr);
}

void destructor_qt_gui_QAbstractImageIOHandlerFactory_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QImageIOHandlerFactoryInterface *>(ptr);
}

void destructor_qt_gui_QAbstractInputContextFactory_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QInputContextFactoryInterface *>(ptr);
}

void destructor_qt_gui_QAbstractPictureFormat_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QPictureFormatInterface *>(ptr);
}

void destructor_qt_gui_QAbstractStyleFactory_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QStyleFactoryInterface *>(ptr);
}

void destructor_qt_gui_QAbstractTextCodecFactory_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QTextCodecFactoryInterface *>(ptr);
}

void destructor_qt_gui_QAccessible(void *ptr)
{
    delete reinterpret_cast<QAccessible *>(ptr);
}

void destructor_qt_gui_QAccessible2Interface(void *ptr)
{
    delete reinterpret_cast<QAccessible2Interface *>(ptr);
}

void destructor_qt_gui_QAccessibleBridge_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QAccessibleBridge *>(ptr);
}

void destructor_qt_gui_QAccessibleEvent(void *ptr)
{
    delete reinterpret_cast<QAccessibleEvent *>(ptr);
}

void destructor_qt_gui_QAccessibleInterface_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QAccessibleInterface *>(ptr);
}

void destructor_qt_gui_QAccessibleInterfaceEx_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QAccessibleInterfaceEx *>(ptr);
}

void destructor_qt_gui_QAccessibleObject_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QAccessibleInterface *>(ptr);
}

void destructor_qt_gui_QAccessibleObjectEx_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QAccessibleInterfaceEx *>(ptr);
}

void destructor_qt_gui_QAccessibleWidget(void *ptr)
{
    delete reinterpret_cast<QAccessibleInterface *>(ptr);
}

void destructor_qt_gui_QAccessibleWidgetEx(void *ptr)
{
    delete reinterpret_cast<QAccessibleInterfaceEx *>(ptr);
}

void destructor_qt_gui_QActionEvent(void *ptr)
{
    delete reinterpret_cast<QActionEvent *>(ptr);
}

void destructor_qt_gui_QClipboardEvent(void *ptr)
{
    delete reinterpret_cast<QClipboardEvent *>(ptr);
}

void destructor_qt_gui_QCloseEvent(void *ptr)
{
    delete reinterpret_cast<QCloseEvent *>(ptr);
}

// Custom constructor and destructor for QColormap
static void *qcolormap_create(const QColormap *copy)
{
    
    return new QColormap(*copy);
    
}

static void qcolormap_delete(const QColormap *copy)
{
    
    delete copy;
    
}

// Custom constructor and destructor for QConicalGradient
static void *qconicalgradient_create(const QConicalGradient *copy)
{
    
    return new QConicalGradient(copy->center(), copy->angle());
    
}

static void qconicalgradient_delete(const QConicalGradient *copy)
{
    
    delete copy;
    
}

void destructor_qt_gui_QContextMenuEvent(void *ptr)
{
    delete reinterpret_cast<QContextMenuEvent *>(ptr);
}

void destructor_qt_gui_QDesktopServices(void *ptr)
{
    delete reinterpret_cast<QDesktopServices *>(ptr);
}

void destructor_qt_gui_QDragEnterEvent(void *ptr)
{
    delete reinterpret_cast<QDragEnterEvent *>(ptr);
}

void destructor_qt_gui_QDragLeaveEvent(void *ptr)
{
    delete reinterpret_cast<QDragLeaveEvent *>(ptr);
}

void destructor_qt_gui_QDragMoveEvent(void *ptr)
{
    delete reinterpret_cast<QDragMoveEvent *>(ptr);
}

void destructor_qt_gui_QDragResponseEvent(void *ptr)
{
    delete reinterpret_cast<QDragResponseEvent *>(ptr);
}

void destructor_qt_gui_QDropEvent(void *ptr)
{
    delete reinterpret_cast<QDropEvent *>(ptr);
}

void destructor_qt_gui_QFileIconProvider(void *ptr)
{
    delete reinterpret_cast<QFileIconProvider *>(ptr);
}

void destructor_qt_gui_QFileOpenEvent(void *ptr)
{
    delete reinterpret_cast<QFileOpenEvent *>(ptr);
}

void destructor_qt_gui_QFocusEvent(void *ptr)
{
    delete reinterpret_cast<QFocusEvent *>(ptr);
}

// Custom constructor and destructor for QFontInfo
static void *qfontinfo_create(const QFontInfo *copy)
{
    
    return new QFontInfo(*copy);
    
}

static void qfontinfo_delete(const QFontInfo *copy)
{
    
    delete copy;
    
}

// Custom constructor and destructor for QGradient
static void *qgradient_create(const QGradient *copy)
{
    
    Q_UNUSED(copy)
        qWarning("Copying empty QGradient object");
    return new QGradient();
    
}

static void qgradient_delete(const QGradient *copy)
{
    
    delete copy;
    
}

void destructor_qt_gui_QGraphicsEllipseItem(void *ptr)
{
    delete reinterpret_cast<QGraphicsEllipseItem *>(ptr);
}

void destructor_qt_gui_QGraphicsGridLayout(void *ptr)
{
    delete reinterpret_cast<QGraphicsGridLayout *>(ptr);
}

void destructor_qt_gui_QGraphicsItem_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QGraphicsItem *>(ptr);
}

void destructor_qt_gui_QGraphicsItemGroup(void *ptr)
{
    delete reinterpret_cast<QGraphicsItemGroup *>(ptr);
}

void destructor_qt_gui_QGraphicsLayout_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QGraphicsLayout *>(ptr);
}

void destructor_qt_gui_QGraphicsLayoutItem_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QGraphicsLayoutItem *>(ptr);
}

void destructor_qt_gui_QGraphicsLineItem(void *ptr)
{
    delete reinterpret_cast<QGraphicsLineItem *>(ptr);
}

void destructor_qt_gui_QGraphicsLinearLayout(void *ptr)
{
    delete reinterpret_cast<QGraphicsLinearLayout *>(ptr);
}

void destructor_qt_gui_QGraphicsPathItem(void *ptr)
{
    delete reinterpret_cast<QGraphicsPathItem *>(ptr);
}

void destructor_qt_gui_QGraphicsPixmapItem(void *ptr)
{
    delete reinterpret_cast<QGraphicsPixmapItem *>(ptr);
}

void destructor_qt_gui_QGraphicsPolygonItem(void *ptr)
{
    delete reinterpret_cast<QGraphicsPolygonItem *>(ptr);
}

void destructor_qt_gui_QGraphicsRectItem(void *ptr)
{
    delete reinterpret_cast<QGraphicsRectItem *>(ptr);
}

void destructor_qt_gui_QGraphicsSceneContextMenuEvent(void *ptr)
{
    delete reinterpret_cast<QGraphicsSceneContextMenuEvent *>(ptr);
}

void destructor_qt_gui_QGraphicsSceneDragDropEvent(void *ptr)
{
    delete reinterpret_cast<QGraphicsSceneDragDropEvent *>(ptr);
}

void destructor_qt_gui_QGraphicsSceneEvent(void *ptr)
{
    delete reinterpret_cast<QGraphicsSceneEvent *>(ptr);
}

void destructor_qt_gui_QGraphicsSceneHelpEvent(void *ptr)
{
    delete reinterpret_cast<QGraphicsSceneHelpEvent *>(ptr);
}

void destructor_qt_gui_QGraphicsSceneHoverEvent(void *ptr)
{
    delete reinterpret_cast<QGraphicsSceneHoverEvent *>(ptr);
}

void destructor_qt_gui_QGraphicsSceneMouseEvent(void *ptr)
{
    delete reinterpret_cast<QGraphicsSceneMouseEvent *>(ptr);
}

void destructor_qt_gui_QGraphicsSceneMoveEvent(void *ptr)
{
    delete reinterpret_cast<QGraphicsSceneMoveEvent *>(ptr);
}

void destructor_qt_gui_QGraphicsSceneResizeEvent(void *ptr)
{
    delete reinterpret_cast<QGraphicsSceneResizeEvent *>(ptr);
}

void destructor_qt_gui_QGraphicsSceneWheelEvent(void *ptr)
{
    delete reinterpret_cast<QGraphicsSceneWheelEvent *>(ptr);
}

void destructor_qt_gui_QGraphicsSimpleTextItem(void *ptr)
{
    delete reinterpret_cast<QGraphicsSimpleTextItem *>(ptr);
}

void destructor_qt_gui_QHelpEvent(void *ptr)
{
    delete reinterpret_cast<QHelpEvent *>(ptr);
}

void destructor_qt_gui_QHideEvent(void *ptr)
{
    delete reinterpret_cast<QHideEvent *>(ptr);
}

void destructor_qt_gui_QHoverEvent(void *ptr)
{
    delete reinterpret_cast<QHoverEvent *>(ptr);
}

void destructor_qt_gui_QIconDragEvent(void *ptr)
{
    delete reinterpret_cast<QIconDragEvent *>(ptr);
}

void destructor_qt_gui_QIconEngine_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QIconEngine *>(ptr);
}

void destructor_qt_gui_QIconEngineV2_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QIconEngineV2 *>(ptr);
}

void destructor_qt_gui_QImageIOHandler_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QImageIOHandler *>(ptr);
}

void destructor_qt_gui_QImageReader(void *ptr)
{
    delete reinterpret_cast<QImageReader *>(ptr);
}

void destructor_qt_gui_QImageWriter(void *ptr)
{
    delete reinterpret_cast<QImageWriter *>(ptr);
}

void destructor_qt_gui_QInputContextFactory(void *ptr)
{
    delete reinterpret_cast<QInputContextFactory *>(ptr);
}

void destructor_qt_gui_QInputEvent(void *ptr)
{
    delete reinterpret_cast<QInputEvent *>(ptr);
}

void destructor_qt_gui_QInputMethodEvent(void *ptr)
{
    delete reinterpret_cast<QInputMethodEvent *>(ptr);
}

// Custom constructor and destructor for QInputMethodEvent::Attribute
static void *qinputmethodevent_attribute_create(const QInputMethodEvent::Attribute *copy)
{
    
    return new QInputMethodEvent::Attribute(copy->type, copy->start, copy->length, copy->value);
    
}

static void qinputmethodevent_attribute_delete(const QInputMethodEvent::Attribute *copy)
{
    
    delete copy;
    
}

void destructor_qt_gui_QItemEditorCreatorBase_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QItemEditorCreatorBase *>(ptr);
}

void destructor_qt_gui_QItemEditorFactory(void *ptr)
{
    delete reinterpret_cast<QItemEditorFactory *>(ptr);
}

void destructor_qt_gui_QKeyEvent(void *ptr)
{
    delete reinterpret_cast<QKeyEvent *>(ptr);
}

void destructor_qt_gui_QLayoutItem_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QLayoutItem *>(ptr);
}

// Custom constructor and destructor for QLinearGradient
static void *qlineargradient_create(const QLinearGradient *copy)
{
    
    QLinearGradient *lg = new QLinearGradient(copy->start(), copy->finalStop());
    lg->setSpread(copy->spread());
    lg->setStops(copy->stops());
    return (void *) lg;
    
}

static void qlineargradient_delete(const QLinearGradient *copy)
{
    
    delete copy;
    
}

void destructor_qt_gui_QListWidgetItem(void *ptr)
{
    delete reinterpret_cast<QListWidgetItem *>(ptr);
}

void destructor_qt_gui_QMouseEvent(void *ptr)
{
    delete reinterpret_cast<QMouseEvent *>(ptr);
}

void destructor_qt_gui_QMoveEvent(void *ptr)
{
    delete reinterpret_cast<QMoveEvent *>(ptr);
}

void destructor_qt_gui_QPaintDevice_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QPaintDevice *>(ptr);
}

void destructor_qt_gui_QPaintEngine_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QPaintEngine *>(ptr);
}

void destructor_qt_gui_QPaintEngineState(void *ptr)
{
    delete reinterpret_cast<QPaintEngineState *>(ptr);
}

void destructor_qt_gui_QPaintEvent(void *ptr)
{
    delete reinterpret_cast<QPaintEvent *>(ptr);
}

void destructor_qt_gui_QPainter(void *ptr)
{
    delete reinterpret_cast<QPainter *>(ptr);
}

void destructor_qt_gui_QPainterPathStroker(void *ptr)
{
    delete reinterpret_cast<QPainterPathStroker *>(ptr);
}

void destructor_qt_gui_QPictureIO(void *ptr)
{
    delete reinterpret_cast<QPictureIO *>(ptr);
}

void destructor_qt_gui_QPixmapCache(void *ptr)
{
    delete reinterpret_cast<QPixmapCache *>(ptr);
}

void destructor_qt_gui_QPrintEngine_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QPrintEngine *>(ptr);
}

void destructor_qt_gui_QPrinter(void *ptr)
{
    delete reinterpret_cast<QPrinter *>(ptr);
}

// Custom constructor and destructor for QRadialGradient
static void *qradialgradient_create(const QRadialGradient *copy)
{
    
    return new QRadialGradient(copy->center(), copy->radius(), copy->focalPoint());
    
}

static void qradialgradient_delete(const QRadialGradient *copy)
{
    
    delete copy;
    
}

void destructor_qt_gui_QResizeEvent(void *ptr)
{
    delete reinterpret_cast<QResizeEvent *>(ptr);
}

void destructor_qt_gui_QShortcutEvent(void *ptr)
{
    delete reinterpret_cast<QShortcutEvent *>(ptr);
}

void destructor_qt_gui_QShowEvent(void *ptr)
{
    delete reinterpret_cast<QShowEvent *>(ptr);
}

void destructor_qt_gui_QSpacerItem(void *ptr)
{
    delete reinterpret_cast<QSpacerItem *>(ptr);
}

void destructor_qt_gui_QStandardItem(void *ptr)
{
    delete reinterpret_cast<QStandardItem *>(ptr);
}

void destructor_qt_gui_QStatusTipEvent(void *ptr)
{
    delete reinterpret_cast<QStatusTipEvent *>(ptr);
}

void destructor_qt_gui_QStyleFactory(void *ptr)
{
    delete reinterpret_cast<QStyleFactory *>(ptr);
}

void destructor_qt_gui_QStyleHintReturn(void *ptr)
{
    delete reinterpret_cast<QStyleHintReturn *>(ptr);
}

void destructor_qt_gui_QStyleHintReturnMask(void *ptr)
{
    delete reinterpret_cast<QStyleHintReturnMask *>(ptr);
}

void destructor_qt_gui_QStyleHintReturnVariant(void *ptr)
{
    delete reinterpret_cast<QStyleHintReturnVariant *>(ptr);
}

void destructor_qt_gui_QStylePainter(void *ptr)
{
    delete reinterpret_cast<QStylePainter *>(ptr);
}

void destructor_qt_gui_QTableWidgetItem(void *ptr)
{
    delete reinterpret_cast<QTableWidgetItem *>(ptr);
}

void destructor_qt_gui_QTabletEvent(void *ptr)
{
    delete reinterpret_cast<QTabletEvent *>(ptr);
}

void destructor_qt_gui_QTextBlockUserData(void *ptr)
{
    delete reinterpret_cast<QTextBlockUserData *>(ptr);
}

void destructor_qt_gui_QTextItem(void *ptr)
{
    delete reinterpret_cast<QTextItem *>(ptr);
}

void destructor_qt_gui_QTextLayout(void *ptr)
{
    delete reinterpret_cast<QTextLayout *>(ptr);
}

void destructor_qt_gui_QTextObjectInterface_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QTextObjectInterface *>(ptr);
}

void destructor_qt_gui_QToolBarChangeEvent(void *ptr)
{
    delete reinterpret_cast<QToolBarChangeEvent *>(ptr);
}

void destructor_qt_gui_QToolTip(void *ptr)
{
    delete reinterpret_cast<QToolTip *>(ptr);
}

void destructor_qt_gui_QTreeWidgetItem(void *ptr)
{
    delete reinterpret_cast<QTreeWidgetItem *>(ptr);
}

// Custom constructor and destructor for QTreeWidgetItemIterator
static void *qtreewidgetitemiterator_create(const QTreeWidgetItemIterator *copy)
{
    
    return new QTreeWidgetItemIterator(*copy);
    
}

static void qtreewidgetitemiterator_delete(const QTreeWidgetItemIterator *copy)
{
    
    delete copy;
    
}

void destructor_qt_gui_QUndoCommand(void *ptr)
{
    delete reinterpret_cast<QUndoCommand *>(ptr);
}

void destructor_qt_gui_QWhatsThis(void *ptr)
{
    delete reinterpret_cast<QWhatsThis *>(ptr);
}

void destructor_qt_gui_QWhatsThisClickedEvent(void *ptr)
{
    delete reinterpret_cast<QWhatsThisClickedEvent *>(ptr);
}

void destructor_qt_gui_QWheelEvent(void *ptr)
{
    delete reinterpret_cast<QWheelEvent *>(ptr);
}

void destructor_qt_gui_QWidgetItem(void *ptr)
{
    delete reinterpret_cast<QWidgetItem *>(ptr);
}

void destructor_qt_gui_QWindowStateChangeEvent(void *ptr)
{
    delete reinterpret_cast<QWindowStateChangeEvent *>(ptr);
}

static int sns_count = 710;
static const char *qtNames[] = {
    "QAbstractButton::animateClick(int)",
    "QAbstractButton::animateClick()",
    "QAbstractButton::click()",
    "QAbstractButton::clicked(bool)",
    "QAbstractButton::clicked()",
    "QAbstractButton::pressed()",
    "QAbstractButton::released()",
    "QAbstractButton::setChecked(bool)",
    "QAbstractButton::setIconSize(QSize)",
    "QAbstractButton::toggle()",
    "QAbstractButton::toggled(bool)",
    "QAbstractItemDelegate::closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)",
    "QAbstractItemDelegate::closeEditor(QWidget*)",
    "QAbstractItemDelegate::commitData(QWidget*)",
    "QAbstractItemDelegate::helpEvent(QHelpEvent*,QAbstractItemView*,QStyleOptionViewItem,QModelIndex)",
    "QAbstractItemDelegate::sizeHintChanged(QModelIndex)",
    "QAbstractItemView::activated(QModelIndex)",
    "QAbstractItemView::clearSelection()",
    "QAbstractItemView::clicked(QModelIndex)",
    "QAbstractItemView::closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)",
    "QAbstractItemView::commitData(QWidget*)",
    "QAbstractItemView::currentChanged(QModelIndex,QModelIndex)",
    "QAbstractItemView::dataChanged(QModelIndex,QModelIndex)",
    "QAbstractItemView::doItemsLayout()",
    "QAbstractItemView::doubleClicked(QModelIndex)",
    "QAbstractItemView::edit(QModelIndex)",
    "QAbstractItemView::editorDestroyed(QObject*)",
    "QAbstractItemView::entered(QModelIndex)",
    "QAbstractItemView::horizontalScrollbarAction(int)",
    "QAbstractItemView::horizontalScrollbarValueChanged(int)",
    "QAbstractItemView::pressed(QModelIndex)",
    "QAbstractItemView::reset()",
    "QAbstractItemView::rowsAboutToBeRemoved(QModelIndex,int,int)",
    "QAbstractItemView::rowsInserted(QModelIndex,int,int)",
    "QAbstractItemView::scrollToBottom()",
    "QAbstractItemView::scrollToTop()",
    "QAbstractItemView::selectAll()",
    "QAbstractItemView::selectionChanged(QItemSelection,QItemSelection)",
    "QAbstractItemView::setCurrentIndex(QModelIndex)",
    "QAbstractItemView::setRootIndex(QModelIndex)",
    "QAbstractItemView::update(QModelIndex)",
    "QAbstractItemView::updateEditorData()",
    "QAbstractItemView::updateEditorGeometries()",
    "QAbstractItemView::updateGeometries()",
    "QAbstractItemView::verticalScrollbarAction(int)",
    "QAbstractItemView::verticalScrollbarValueChanged(int)",
    "QAbstractItemView::viewportEntered()",
    "QAbstractScrollArea::setupViewport(QWidget*)",
    "QAbstractSlider::actionTriggered(int)",
    "QAbstractSlider::rangeChanged(int,int)",
    "QAbstractSlider::setOrientation(Qt::Orientation)",
    "QAbstractSlider::setValue(int)",
    "QAbstractSlider::sliderMoved(int)",
    "QAbstractSlider::sliderPressed()",
    "QAbstractSlider::sliderReleased()",
    "QAbstractSlider::valueChanged(int)",
    "QAbstractSpinBox::clear()",
    "QAbstractSpinBox::editingFinished()",
    "QAbstractSpinBox::selectAll()",
    "QAbstractSpinBox::stepDown()",
    "QAbstractSpinBox::stepUp()",
    "QAbstractTextDocumentLayout::documentSizeChanged(QSizeF)",
    "QAbstractTextDocumentLayout::pageCountChanged(int)",
    "QAbstractTextDocumentLayout::update(QRectF)",
    "QAbstractTextDocumentLayout::update()",
    "QAbstractTextDocumentLayout::updateBlock(QTextBlock)",
    "QAction::changed()",
    "QAction::hover()",
    "QAction::hovered()",
    "QAction::setChecked(bool)",
    "QAction::setDisabled(bool)",
    "QAction::setEnabled(bool)",
    "QAction::setVisible(bool)",
    "QAction::toggle()",
    "QAction::toggled(bool)",
    "QAction::trigger()",
    "QAction::triggered(bool)",
    "QAction::triggered()",
    "QActionGroup::hovered(QAction*)",
    "QActionGroup::setDisabled(bool)",
    "QActionGroup::setEnabled(bool)",
    "QActionGroup::setExclusive(bool)",
    "QActionGroup::setVisible(bool)",
    "QActionGroup::triggered(QAction*)",
    "QApplication::aboutQt()",
    "QApplication::autoSipEnabled()const",
    "QApplication::closeAllWindows()",
    "QApplication::commitDataRequest(QSessionManager&)",
    "QApplication::focusChanged(QWidget*,QWidget*)",
    "QApplication::fontDatabaseChanged()",
    "QApplication::lastWindowClosed()",
    "QApplication::saveStateRequest(QSessionManager&)",
    "QApplication::setAutoSipEnabled(bool)",
    "QApplication::setStyleSheet(QString)",
    "QButtonGroup::buttonClicked(QAbstractButton*)",
    "QButtonGroup::buttonClicked(int)",
    "QButtonGroup::buttonPressed(QAbstractButton*)",
    "QButtonGroup::buttonPressed(int)",
    "QButtonGroup::buttonReleased(QAbstractButton*)",
    "QButtonGroup::buttonReleased(int)",
    "QCDEStyle::standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*,const QWidget*)const",
    "QCDEStyle::standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*)const",
    "QCDEStyle::standardIconImplementation(QStyle::StandardPixmap)const",
    "QCalendarWidget::activated(QDate)",
    "QCalendarWidget::clicked(QDate)",
    "QCalendarWidget::currentPageChanged(int,int)",
    "QCalendarWidget::selectionChanged()",
    "QCalendarWidget::setCurrentPage(int,int)",
    "QCalendarWidget::setDateRange(QDate,QDate)",
    "QCalendarWidget::setGridVisible(bool)",
    "QCalendarWidget::setNavigationBarVisible(bool)",
    "QCalendarWidget::setSelectedDate(QDate)",
    "QCalendarWidget::showNextMonth()",
    "QCalendarWidget::showNextYear()",
    "QCalendarWidget::showPreviousMonth()",
    "QCalendarWidget::showPreviousYear()",
    "QCalendarWidget::showSelectedDate()",
    "QCalendarWidget::showToday()",
    "QCheckBox::stateChanged(int)",
    "QCleanlooksStyle::standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*,const QWidget*)const",
    "QCleanlooksStyle::standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*)const",
    "QClipboard::changed(QClipboard::Mode)",
    "QClipboard::dataChanged()",
    "QClipboard::findBufferChanged()",
    "QClipboard::ownerDestroyed()",
    "QClipboard::selectionChanged()",
    "QColorDialog::colorSelected(QColor)",
    "QColorDialog::currentColorChanged(QColor)",
    "QColumnView::updatePreviewWidget(QModelIndex)",
    "QComboBox::activated(QString)",
    "QComboBox::activated(int)",
    "QComboBox::clear()",
    "QComboBox::clearEditText()",
    "QComboBox::currentIndexChanged(QString)",
    "QComboBox::currentIndexChanged(int)",
    "QComboBox::editTextChanged(QString)",
    "QComboBox::highlighted(QString)",
    "QComboBox::highlighted(int)",
    "QComboBox::setCurrentIndex(int)",
    "QComboBox::setEditText(QString)",
    "QCommonStyle::standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*,const QWidget*)const",
    "QCommonStyle::standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*)const",
    "QCommonStyle::standardIconImplementation(QStyle::StandardPixmap)const",
    "QCompleter::activated(QModelIndex)",
    "QCompleter::activated(QString)",
    "QCompleter::complete(QRect)",
    "QCompleter::complete()",
    "QCompleter::highlighted(QModelIndex)",
    "QCompleter::highlighted(QString)",
    "QCompleter::setCompletionPrefix(QString)",
    "QCompleter::setWrapAround(bool)",
    "QDataWidgetMapper::currentIndexChanged(int)",
    "QDataWidgetMapper::revert()",
    "QDataWidgetMapper::setCurrentIndex(int)",
    "QDataWidgetMapper::setCurrentModelIndex(QModelIndex)",
    "QDataWidgetMapper::submit()",
    "QDataWidgetMapper::toFirst()",
    "QDataWidgetMapper::toLast()",
    "QDataWidgetMapper::toNext()",
    "QDataWidgetMapper::toPrevious()",
    "QDateTimeEdit::dateChanged(QDate)",
    "QDateTimeEdit::dateTimeChanged(QDateTime)",
    "QDateTimeEdit::setDate(QDate)",
    "QDateTimeEdit::setDateTime(QDateTime)",
    "QDateTimeEdit::setTime(QTime)",
    "QDateTimeEdit::timeChanged(QTime)",
    "QDesktopWidget::resized(int)",
    "QDesktopWidget::screenCountChanged(int)",
    "QDesktopWidget::workAreaResized(int)",
    "QDial::setNotchesVisible(bool)",
    "QDial::setWrapping(bool)",
    "QDialog::accept()",
    "QDialog::accepted()",
    "QDialog::done(int)",
    "QDialog::exec()",
    "QDialog::finished(int)",
    "QDialog::open()",
    "QDialog::reject()",
    "QDialog::rejected()",
    "QDialog::showExtension(bool)",
    "QDialogButtonBox::accepted()",
    "QDialogButtonBox::clicked(QAbstractButton*)",
    "QDialogButtonBox::helpRequested()",
    "QDialogButtonBox::rejected()",
    "QDirModel::refresh(QModelIndex)",
    "QDirModel::refresh()",
    "QDockWidget::allowedAreasChanged(Qt::DockWidgetAreas)",
    "QDockWidget::dockLocationChanged(Qt::DockWidgetArea)",
    "QDockWidget::featuresChanged(QDockWidget::DockWidgetFeatures)",
    "QDockWidget::topLevelChanged(bool)",
    "QDockWidget::visibilityChanged(bool)",
    "QDoubleSpinBox::setValue(double)",
    "QDoubleSpinBox::valueChanged(QString)",
    "QDoubleSpinBox::valueChanged(double)",
    "QDrag::actionChanged(Qt::DropAction)",
    "QDrag::targetChanged(QWidget*)",
    "QErrorMessage::showMessage(QString)",
    "QErrorMessage::showMessage(QString,QString)",
    "QFileDialog::currentChanged(QString)",
    "QFileDialog::directoryEntered(QString)",
    "QFileDialog::fileSelected(QString)",
    "QFileDialog::filesSelected(QStringList)",
    "QFileDialog::filterSelected(QString)",
    "QFileSystemModel::directoryLoaded(QString)",
    "QFileSystemModel::fileRenamed(QString,QString,QString)",
    "QFileSystemModel::rootPathChanged(QString)",
    "QFontComboBox::currentFontChanged(QFont)",
    "QFontComboBox::setCurrentFont(QFont)",
    "QFontDialog::currentFontChanged(QFont)",
    "QFontDialog::fontSelected(QFont)",
    "QGraphicsItemAnimation::reset()",
    "QGraphicsItemAnimation::setStep(qreal)",
    "QGraphicsObject::childrenChanged()",
    "QGraphicsObject::enabledChanged()",
    "QGraphicsObject::heightChanged()",
    "QGraphicsObject::opacityChanged()",
    "QGraphicsObject::parentChanged()",
    "QGraphicsObject::rotationChanged()",
    "QGraphicsObject::scaleChanged()",
    "QGraphicsObject::updateMicroFocus()",
    "QGraphicsObject::visibleChanged()",
    "QGraphicsObject::widthChanged()",
    "QGraphicsObject::xChanged()",
    "QGraphicsObject::yChanged()",
    "QGraphicsObject::zChanged()",
    "QGraphicsProxyWidget::newProxyWidget(const QWidget*)",
    "QGraphicsScene::advance()",
    "QGraphicsScene::changed(QList<QRectF>)",
    "QGraphicsScene::clear()",
    "QGraphicsScene::clearSelection()",
    "QGraphicsScene::focusNextPrevChild(bool)",
    "QGraphicsScene::invalidate(QRectF,QGraphicsScene::SceneLayers)",
    "QGraphicsScene::invalidate(QRectF)",
    "QGraphicsScene::invalidate()",
    "QGraphicsScene::sceneRectChanged(QRectF)",
    "QGraphicsScene::selectionChanged()",
    "QGraphicsScene::update(QRectF)",
    "QGraphicsScene::update()",
    "QGraphicsTextItem::linkActivated(QString)",
    "QGraphicsTextItem::linkHovered(QString)",
    "QGraphicsView::invalidateScene(QRectF,QGraphicsScene::SceneLayers)",
    "QGraphicsView::invalidateScene(QRectF)",
    "QGraphicsView::invalidateScene()",
    "QGraphicsView::setupViewport(QWidget*)",
    "QGraphicsView::updateScene(QList<QRectF>)",
    "QGraphicsView::updateSceneRect(QRectF)",
    "QGraphicsWidget::close()",
    "QGraphicsWidget::geometryChanged()",
    "QGraphicsWidget::layoutChanged()",
    "QGroupBox::clicked(bool)",
    "QGroupBox::clicked()",
    "QGroupBox::setChecked(bool)",
    "QGroupBox::toggled(bool)",
    "QHeaderView::geometriesChanged()",
    "QHeaderView::headerDataChanged(Qt::Orientation,int,int)",
    "QHeaderView::resizeSections()",
    "QHeaderView::sectionAutoResize(int,QHeaderView::ResizeMode)",
    "QHeaderView::sectionClicked(int)",
    "QHeaderView::sectionCountChanged(int,int)",
    "QHeaderView::sectionDoubleClicked(int)",
    "QHeaderView::sectionEntered(int)",
    "QHeaderView::sectionHandleDoubleClicked(int)",
    "QHeaderView::sectionMoved(int,int,int)",
    "QHeaderView::sectionPressed(int)",
    "QHeaderView::sectionResized(int,int,int)",
    "QHeaderView::sectionsAboutToBeRemoved(QModelIndex,int,int)",
    "QHeaderView::sectionsInserted(QModelIndex,int,int)",
    "QHeaderView::setOffset(int)",
    "QHeaderView::setOffsetToLastSection()",
    "QHeaderView::setOffsetToSectionPosition(int)",
    "QHeaderView::sortIndicatorChanged(int,Qt::SortOrder)",
    "QHeaderView::updateSection(int)",
    "QInputDialog::doubleValueChanged(double)",
    "QInputDialog::doubleValueSelected(double)",
    "QInputDialog::intValueChanged(int)",
    "QInputDialog::intValueSelected(int)",
    "QInputDialog::textValueChanged(QString)",
    "QInputDialog::textValueSelected(QString)",
    "QItemSelectionModel::clear()",
    "QItemSelectionModel::clearSelection()",
    "QItemSelectionModel::currentChanged(QModelIndex,QModelIndex)",
    "QItemSelectionModel::currentColumnChanged(QModelIndex,QModelIndex)",
    "QItemSelectionModel::currentRowChanged(QModelIndex,QModelIndex)",
    "QItemSelectionModel::reset()",
    "QItemSelectionModel::select(QItemSelection,QItemSelectionModel::SelectionFlags)",
    "QItemSelectionModel::select(QModelIndex,QItemSelectionModel::SelectionFlags)",
    "QItemSelectionModel::selectionChanged(QItemSelection,QItemSelection)",
    "QItemSelectionModel::setCurrentIndex(QModelIndex,QItemSelectionModel::SelectionFlags)",
    "QLCDNumber::display(QString)",
    "QLCDNumber::display(double)",
    "QLCDNumber::display(int)",
    "QLCDNumber::overflow()",
    "QLCDNumber::setBinMode()",
    "QLCDNumber::setDecMode()",
    "QLCDNumber::setHexMode()",
    "QLCDNumber::setOctMode()",
    "QLCDNumber::setSmallDecimalPoint(bool)",
    "QLabel::clear()",
    "QLabel::linkActivated(QString)",
    "QLabel::linkHovered(QString)",
    "QLabel::setMovie(QMovie*)",
    "QLabel::setNum(double)",
    "QLabel::setNum(int)",
    "QLabel::setPicture(QPicture)",
    "QLabel::setPixmap(QPixmap)",
    "QLabel::setText(QString)",
    "QLineEdit::clear()",
    "QLineEdit::copy()const",
    "QLineEdit::cursorPositionChanged(int,int)",
    "QLineEdit::cut()",
    "QLineEdit::editingFinished()",
    "QLineEdit::paste()",
    "QLineEdit::redo()",
    "QLineEdit::returnPressed()",
    "QLineEdit::selectAll()",
    "QLineEdit::selectionChanged()",
    "QLineEdit::setText(QString)",
    "QLineEdit::textChanged(QString)",
    "QLineEdit::textEdited(QString)",
    "QLineEdit::undo()",
    "QListView::indexesMoved(QModelIndexList)",
    "QListWidget::clear()",
    "QListWidget::currentItemChanged(QListWidgetItem*,QListWidgetItem*)",
    "QListWidget::currentRowChanged(int)",
    "QListWidget::currentTextChanged(QString)",
    "QListWidget::itemActivated(QListWidgetItem*)",
    "QListWidget::itemChanged(QListWidgetItem*)",
    "QListWidget::itemClicked(QListWidgetItem*)",
    "QListWidget::itemDoubleClicked(QListWidgetItem*)",
    "QListWidget::itemEntered(QListWidgetItem*)",
    "QListWidget::itemPressed(QListWidgetItem*)",
    "QListWidget::itemSelectionChanged()",
    "QListWidget::scrollToItem(const QListWidgetItem*,QAbstractItemView::ScrollHint)",
    "QListWidget::scrollToItem(const QListWidgetItem*)",
    "QMainWindow::iconSizeChanged(QSize)",
    "QMainWindow::setAnimated(bool)",
    "QMainWindow::setDockNestingEnabled(bool)",
    "QMainWindow::toolButtonStyleChanged(Qt::ToolButtonStyle)",
    "QMdiArea::activateNextSubWindow()",
    "QMdiArea::activatePreviousSubWindow()",
    "QMdiArea::cascadeSubWindows()",
    "QMdiArea::closeActiveSubWindow()",
    "QMdiArea::closeAllSubWindows()",
    "QMdiArea::setActiveSubWindow(QMdiSubWindow*)",
    "QMdiArea::setupViewport(QWidget*)",
    "QMdiArea::subWindowActivated(QMdiSubWindow*)",
    "QMdiArea::tileSubWindows()",
    "QMdiSubWindow::aboutToActivate()",
    "QMdiSubWindow::showShaded()",
    "QMdiSubWindow::showSystemMenu()",
    "QMdiSubWindow::windowStateChanged(Qt::WindowStates,Qt::WindowStates)",
    "QMenu::aboutToHide()",
    "QMenu::aboutToShow()",
    "QMenu::hovered(QAction*)",
    "QMenu::internalDelayedPopup()",
    "QMenu::internalSetSloppyAction()",
    "QMenu::triggered(QAction*)",
    "QMenuBar::hovered(QAction*)",
    "QMenuBar::setVisible(bool)",
    "QMenuBar::triggered(QAction*)",
    "QMessageBox::buttonClicked(QAbstractButton*)",
    "QMotifStyle::standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*,const QWidget*)const",
    "QMotifStyle::standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*)const",
    "QMotifStyle::standardIconImplementation(QStyle::StandardPixmap)const",
    "QMovie::error(QImageReader::ImageReaderError)",
    "QMovie::finished()",
    "QMovie::frameChanged(int)",
    "QMovie::jumpToNextFrame()",
    "QMovie::resized(QSize)",
    "QMovie::setPaused(bool)",
    "QMovie::setSpeed(int)",
    "QMovie::start()",
    "QMovie::started()",
    "QMovie::stateChanged(QMovie::MovieState)",
    "QMovie::stop()",
    "QMovie::updated(QRect)",
    "QPlainTextEdit::appendHtml(QString)",
    "QPlainTextEdit::appendPlainText(QString)",
    "QPlainTextEdit::blockCountChanged(int)",
    "QPlainTextEdit::centerCursor()",
    "QPlainTextEdit::clear()",
    "QPlainTextEdit::copy()",
    "QPlainTextEdit::copyAvailable(bool)",
    "QPlainTextEdit::cursorPositionChanged()",
    "QPlainTextEdit::cut()",
    "QPlainTextEdit::insertPlainText(QString)",
    "QPlainTextEdit::modificationChanged(bool)",
    "QPlainTextEdit::paste()",
    "QPlainTextEdit::redo()",
    "QPlainTextEdit::redoAvailable(bool)",
    "QPlainTextEdit::selectAll()",
    "QPlainTextEdit::selectionChanged()",
    "QPlainTextEdit::setPlainText(QString)",
    "QPlainTextEdit::textChanged()",
    "QPlainTextEdit::undo()",
    "QPlainTextEdit::undoAvailable(bool)",
    "QPlainTextEdit::updateRequest(QRect,int)",
    "QPlastiqueStyle::layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation,const QStyleOption*,const QWidget*)const",
    "QPlastiqueStyle::layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation,const QStyleOption*)const",
    "QPlastiqueStyle::layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation)const",
    "QPlastiqueStyle::standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*,const QWidget*)const",
    "QPlastiqueStyle::standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*)const",
    "QPlastiqueStyle::standardIconImplementation(QStyle::StandardPixmap)const",
    "QPrintDialog::accepted(QPrinter*)",
    "QPrintPreviewDialog::paintRequested(QPrinter*)",
    "QPrintPreviewWidget::fitInView()",
    "QPrintPreviewWidget::fitToWidth()",
    "QPrintPreviewWidget::paintRequested(QPrinter*)",
    "QPrintPreviewWidget::previewChanged()",
    "QPrintPreviewWidget::print()",
    "QPrintPreviewWidget::setAllPagesViewMode()",
    "QPrintPreviewWidget::setCurrentPage(int)",
    "QPrintPreviewWidget::setFacingPagesViewMode()",
    "QPrintPreviewWidget::setLandscapeOrientation()",
    "QPrintPreviewWidget::setOrientation(QPrinter::Orientation)",
    "QPrintPreviewWidget::setPortraitOrientation()",
    "QPrintPreviewWidget::setSinglePageViewMode()",
    "QPrintPreviewWidget::setViewMode(QPrintPreviewWidget::ViewMode)",
    "QPrintPreviewWidget::setZoomFactor(qreal)",
    "QPrintPreviewWidget::setZoomMode(QPrintPreviewWidget::ZoomMode)",
    "QPrintPreviewWidget::updatePreview()",
    "QPrintPreviewWidget::zoomIn(qreal)",
    "QPrintPreviewWidget::zoomIn()",
    "QPrintPreviewWidget::zoomOut(qreal)",
    "QPrintPreviewWidget::zoomOut()",
    "QProgressBar::reset()",
    "QProgressBar::setMaximum(int)",
    "QProgressBar::setMinimum(int)",
    "QProgressBar::setOrientation(Qt::Orientation)",
    "QProgressBar::setRange(int,int)",
    "QProgressBar::setValue(int)",
    "QProgressBar::valueChanged(int)",
    "QProgressDialog::cancel()",
    "QProgressDialog::canceled()",
    "QProgressDialog::forceShow()",
    "QProgressDialog::reset()",
    "QProgressDialog::setCancelButtonText(QString)",
    "QProgressDialog::setLabelText(QString)",
    "QProgressDialog::setMaximum(int)",
    "QProgressDialog::setMinimum(int)",
    "QProgressDialog::setMinimumDuration(int)",
    "QProgressDialog::setRange(int,int)",
    "QProgressDialog::setValue(int)",
    "QPushButton::showMenu()",
    "QShortcut::activated()",
    "QShortcut::activatedAmbiguously()",
    "QSortFilterProxyModel::clear()",
    "QSortFilterProxyModel::invalidate()",
    "QSortFilterProxyModel::setFilterFixedString(QString)",
    "QSortFilterProxyModel::setFilterRegExp(QString)",
    "QSortFilterProxyModel::setFilterWildcard(QString)",
    "QSound::play()",
    "QSound::stop()",
    "QSpinBox::setValue(int)",
    "QSpinBox::valueChanged(QString)",
    "QSpinBox::valueChanged(int)",
    "QSplashScreen::clearMessage()",
    "QSplashScreen::messageChanged(QString)",
    "QSplashScreen::showMessage(QString,int,QColor)",
    "QSplashScreen::showMessage(QString,int)",
    "QSplashScreen::showMessage(QString)",
    "QSplitter::splitterMoved(int,int)",
    "QStackedLayout::currentChanged(int)",
    "QStackedLayout::setCurrentIndex(int)",
    "QStackedLayout::setCurrentWidget(QWidget*)",
    "QStackedLayout::widgetRemoved(int)",
    "QStackedWidget::currentChanged(int)",
    "QStackedWidget::setCurrentIndex(int)",
    "QStackedWidget::setCurrentWidget(QWidget*)",
    "QStackedWidget::widgetRemoved(int)",
    "QStandardItemModel::itemChanged(QStandardItem*)",
    "QStatusBar::clearMessage()",
    "QStatusBar::messageChanged(QString)",
    "QStatusBar::showMessage(QString,int)",
    "QStatusBar::showMessage(QString)",
    "QStyle::layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation,const QStyleOption*,const QWidget*)const",
    "QStyle::layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation,const QStyleOption*)const",
    "QStyle::layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation)const",
    "QStyle::standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*,const QWidget*)const",
    "QStyle::standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*)const",
    "QStyle::standardIconImplementation(QStyle::StandardPixmap)const",
    "QSyntaxHighlighter::rehighlight()",
    "QSyntaxHighlighter::rehighlightBlock(QTextBlock)",
    "QSystemTrayIcon::activated(QSystemTrayIcon::ActivationReason)",
    "QSystemTrayIcon::hide()",
    "QSystemTrayIcon::messageClicked()",
    "QSystemTrayIcon::setVisible(bool)",
    "QSystemTrayIcon::show()",
    "QTabBar::currentChanged(int)",
    "QTabBar::setCurrentIndex(int)",
    "QTabBar::tabCloseRequested(int)",
    "QTabBar::tabMoved(int,int)",
    "QTabWidget::currentChanged(int)",
    "QTabWidget::setCurrentIndex(int)",
    "QTabWidget::setCurrentWidget(QWidget*)",
    "QTabWidget::tabCloseRequested(int)",
    "QTableView::columnCountChanged(int,int)",
    "QTableView::columnMoved(int,int,int)",
    "QTableView::columnResized(int,int,int)",
    "QTableView::hideColumn(int)",
    "QTableView::hideRow(int)",
    "QTableView::resizeColumnToContents(int)",
    "QTableView::resizeColumnsToContents()",
    "QTableView::resizeRowToContents(int)",
    "QTableView::resizeRowsToContents()",
    "QTableView::rowCountChanged(int,int)",
    "QTableView::rowMoved(int,int,int)",
    "QTableView::rowResized(int,int,int)",
    "QTableView::selectColumn(int)",
    "QTableView::selectRow(int)",
    "QTableView::setShowGrid(bool)",
    "QTableView::showColumn(int)",
    "QTableView::showRow(int)",
    "QTableView::sortByColumn(int)",
    "QTableWidget::cellActivated(int,int)",
    "QTableWidget::cellChanged(int,int)",
    "QTableWidget::cellClicked(int,int)",
    "QTableWidget::cellDoubleClicked(int,int)",
    "QTableWidget::cellEntered(int,int)",
    "QTableWidget::cellPressed(int,int)",
    "QTableWidget::clear()",
    "QTableWidget::clearContents()",
    "QTableWidget::currentCellChanged(int,int,int,int)",
    "QTableWidget::currentItemChanged(QTableWidgetItem*,QTableWidgetItem*)",
    "QTableWidget::insertColumn(int)",
    "QTableWidget::insertRow(int)",
    "QTableWidget::itemActivated(QTableWidgetItem*)",
    "QTableWidget::itemChanged(QTableWidgetItem*)",
    "QTableWidget::itemClicked(QTableWidgetItem*)",
    "QTableWidget::itemDoubleClicked(QTableWidgetItem*)",
    "QTableWidget::itemEntered(QTableWidgetItem*)",
    "QTableWidget::itemPressed(QTableWidgetItem*)",
    "QTableWidget::itemSelectionChanged()",
    "QTableWidget::removeColumn(int)",
    "QTableWidget::removeRow(int)",
    "QTableWidget::scrollToItem(const QTableWidgetItem*,QAbstractItemView::ScrollHint)",
    "QTableWidget::scrollToItem(const QTableWidgetItem*)",
    "QTextBrowser::anchorClicked(QUrl)",
    "QTextBrowser::backward()",
    "QTextBrowser::backwardAvailable(bool)",
    "QTextBrowser::forward()",
    "QTextBrowser::forwardAvailable(bool)",
    "QTextBrowser::highlighted(QString)",
    "QTextBrowser::highlighted(QUrl)",
    "QTextBrowser::historyChanged()",
    "QTextBrowser::home()",
    "QTextBrowser::reload()",
    "QTextBrowser::setSource(QUrl)",
    "QTextBrowser::sourceChanged(QUrl)",
    "QTextDocument::blockCountChanged(int)",
    "QTextDocument::contentsChange(int,int,int)",
    "QTextDocument::contentsChanged()",
    "QTextDocument::cursorPositionChanged(QTextCursor)",
    "QTextDocument::documentLayoutChanged()",
    "QTextDocument::modificationChanged(bool)",
    "QTextDocument::redo()",
    "QTextDocument::redoAvailable(bool)",
    "QTextDocument::setModified(bool)",
    "QTextDocument::setModified()",
    "QTextDocument::undo()",
    "QTextDocument::undoAvailable(bool)",
    "QTextDocument::undoCommandAdded()",
    "QTextEdit::append(QString)",
    "QTextEdit::clear()",
    "QTextEdit::copy()",
    "QTextEdit::copyAvailable(bool)",
    "QTextEdit::currentCharFormatChanged(QTextCharFormat)",
    "QTextEdit::cursorPositionChanged()",
    "QTextEdit::cut()",
    "QTextEdit::insertHtml(QString)",
    "QTextEdit::insertPlainText(QString)",
    "QTextEdit::paste()",
    "QTextEdit::redo()",
    "QTextEdit::redoAvailable(bool)",
    "QTextEdit::scrollToAnchor(QString)",
    "QTextEdit::selectAll()",
    "QTextEdit::selectionChanged()",
    "QTextEdit::setAlignment(Qt::Alignment)",
    "QTextEdit::setCurrentFont(QFont)",
    "QTextEdit::setFontFamily(QString)",
    "QTextEdit::setFontItalic(bool)",
    "QTextEdit::setFontPointSize(qreal)",
    "QTextEdit::setFontUnderline(bool)",
    "QTextEdit::setFontWeight(int)",
    "QTextEdit::setHtml(QString)",
    "QTextEdit::setPlainText(QString)",
    "QTextEdit::setText(QString)",
    "QTextEdit::setTextBackgroundColor(QColor)",
    "QTextEdit::setTextColor(QColor)",
    "QTextEdit::textChanged()",
    "QTextEdit::undo()",
    "QTextEdit::undoAvailable(bool)",
    "QTextEdit::zoomIn(int)",
    "QTextEdit::zoomIn()",
    "QTextEdit::zoomOut(int)",
    "QTextEdit::zoomOut()",
    "QToolBar::actionTriggered(QAction*)",
    "QToolBar::allowedAreasChanged(Qt::ToolBarAreas)",
    "QToolBar::iconSizeChanged(QSize)",
    "QToolBar::movableChanged(bool)",
    "QToolBar::orientationChanged(Qt::Orientation)",
    "QToolBar::setIconSize(QSize)",
    "QToolBar::setToolButtonStyle(Qt::ToolButtonStyle)",
    "QToolBar::toolButtonStyleChanged(Qt::ToolButtonStyle)",
    "QToolBar::topLevelChanged(bool)",
    "QToolBar::visibilityChanged(bool)",
    "QToolBox::currentChanged(int)",
    "QToolBox::setCurrentIndex(int)",
    "QToolBox::setCurrentWidget(QWidget*)",
    "QToolButton::setDefaultAction(QAction*)",
    "QToolButton::setToolButtonStyle(Qt::ToolButtonStyle)",
    "QToolButton::showMenu()",
    "QToolButton::triggered(QAction*)",
    "QTreeView::collapse(QModelIndex)",
    "QTreeView::collapseAll()",
    "QTreeView::collapsed(QModelIndex)",
    "QTreeView::columnCountChanged(int,int)",
    "QTreeView::columnMoved()",
    "QTreeView::columnResized(int,int,int)",
    "QTreeView::expand(QModelIndex)",
    "QTreeView::expandAll()",
    "QTreeView::expandToDepth(int)",
    "QTreeView::expanded(QModelIndex)",
    "QTreeView::hideColumn(int)",
    "QTreeView::reexpand()",
    "QTreeView::resizeColumnToContents(int)",
    "QTreeView::rowsRemoved(QModelIndex,int,int)",
    "QTreeView::showColumn(int)",
    "QTreeView::sortByColumn(int)",
    "QTreeWidget::clear()",
    "QTreeWidget::collapseItem(const QTreeWidgetItem*)",
    "QTreeWidget::currentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)",
    "QTreeWidget::expandItem(const QTreeWidgetItem*)",
    "QTreeWidget::itemActivated(QTreeWidgetItem*,int)",
    "QTreeWidget::itemChanged(QTreeWidgetItem*,int)",
    "QTreeWidget::itemClicked(QTreeWidgetItem*,int)",
    "QTreeWidget::itemCollapsed(QTreeWidgetItem*)",
    "QTreeWidget::itemDoubleClicked(QTreeWidgetItem*,int)",
    "QTreeWidget::itemEntered(QTreeWidgetItem*,int)",
    "QTreeWidget::itemExpanded(QTreeWidgetItem*)",
    "QTreeWidget::itemPressed(QTreeWidgetItem*,int)",
    "QTreeWidget::itemSelectionChanged()",
    "QTreeWidget::scrollToItem(const QTreeWidgetItem*,QAbstractItemView::ScrollHint)",
    "QTreeWidget::scrollToItem(const QTreeWidgetItem*)",
    "QUndoGroup::activeStackChanged(QUndoStack*)",
    "QUndoGroup::canRedoChanged(bool)",
    "QUndoGroup::canUndoChanged(bool)",
    "QUndoGroup::cleanChanged(bool)",
    "QUndoGroup::indexChanged(int)",
    "QUndoGroup::redo()",
    "QUndoGroup::redoTextChanged(QString)",
    "QUndoGroup::setActiveStack(QUndoStack*)",
    "QUndoGroup::undo()",
    "QUndoGroup::undoTextChanged(QString)",
    "QUndoStack::canRedoChanged(bool)",
    "QUndoStack::canUndoChanged(bool)",
    "QUndoStack::cleanChanged(bool)",
    "QUndoStack::indexChanged(int)",
    "QUndoStack::redo()",
    "QUndoStack::redoTextChanged(QString)",
    "QUndoStack::setActive(bool)",
    "QUndoStack::setActive()",
    "QUndoStack::setClean()",
    "QUndoStack::setIndex(int)",
    "QUndoStack::undo()",
    "QUndoStack::undoTextChanged(QString)",
    "QUndoView::setGroup(QUndoGroup*)",
    "QUndoView::setStack(QUndoStack*)",
    "QWidget::close()",
    "QWidget::customContextMenuRequested(QPoint)",
    "QWidget::hide()",
    "QWidget::lower()",
    "QWidget::raise()",
    "QWidget::repaint()",
    "QWidget::setDisabled(bool)",
    "QWidget::setEnabled(bool)",
    "QWidget::setFocus()",
    "QWidget::setHidden(bool)",
    "QWidget::setShown(bool)",
    "QWidget::setStyleSheet(QString)",
    "QWidget::setVisible(bool)",
    "QWidget::setWindowModified(bool)",
    "QWidget::setWindowTitle(QString)",
    "QWidget::show()",
    "QWidget::showFullScreen()",
    "QWidget::showMaximized()",
    "QWidget::showMinimized()",
    "QWidget::showNormal()",
    "QWidget::update()",
    "QWidget::updateMicroFocus()",
    "QWindowsStyle::standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*,const QWidget*)const",
    "QWindowsStyle::standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*)const",
    "QWizard::back()",
    "QWizard::currentIdChanged(int)",
    "QWizard::customButtonClicked(int)",
    "QWizard::helpRequested()",
    "QWizard::next()",
    "QWizard::pageAdded(int)",
    "QWizard::pageRemoved(int)",
    "QWizard::restart()",
    "QWizardPage::completeChanged()",
    "QWorkspace::activateNextWindow()",
    "QWorkspace::activatePreviousWindow()",
    "QWorkspace::arrangeIcons()",
    "QWorkspace::cascade()",
    "QWorkspace::closeActiveWindow()",
    "QWorkspace::closeAllWindows()",
    "QWorkspace::setActiveWindow(QWidget*)",
    "QWorkspace::tile()",
    "QWorkspace::windowActivated(QWidget*)",
};

static const char *javaFunctionNames[] = {
    "qt.gui.QAbstractButton.animateClick(int = 100)",
    "qt.gui.QAbstractButton.animateClick()",
    "qt.gui.QAbstractButton.click()",
    "qt.gui.QAbstractButton.clicked(bool = false)",
    "qt.gui.QAbstractButton.clicked(bool = false)",
    "qt.gui.QAbstractButton.pressed()",
    "qt.gui.QAbstractButton.released()",
    "qt.gui.QAbstractButton.setChecked(bool)",
    "qt.gui.QAbstractButton.setIconSize(const(QSize))",
    "qt.gui.QAbstractButton.toggle()",
    "qt.gui.QAbstractButton.toggled(bool)",
    "qt.gui.QAbstractItemDelegate.closeEditor(QWidget, QAbstractItemDelegate.EndEditHint = QAbstractItemDelegate.EndEditHint.NoHint)",
    "qt.gui.QAbstractItemDelegate.closeEditor(QWidget, QAbstractItemDelegate.EndEditHint = QAbstractItemDelegate.EndEditHint.NoHint)",
    "qt.gui.QAbstractItemDelegate.commitData(QWidget)",
    "qt.gui.QAbstractItemDelegate.helpEvent(QHelpEvent, QAbstractItemView, const(QStyleOptionViewItem), const(QModelIndex))",
    "qt.gui.QAbstractItemDelegate.sizeHintChanged(const(QModelIndex))",
    "qt.gui.QAbstractItemView.activated(const(QModelIndex))",
    "qt.gui.QAbstractItemView.clearSelection()",
    "qt.gui.QAbstractItemView.clicked(const(QModelIndex))",
    "qt.gui.QAbstractItemView.closeEditor(QWidget, QAbstractItemDelegate.EndEditHint)",
    "qt.gui.QAbstractItemView.commitData(QWidget)",
    "qt.gui.QAbstractItemView.currentChanged(const(QModelIndex), const(QModelIndex))",
    "qt.gui.QAbstractItemView.dataChanged(const(QModelIndex), const(QModelIndex))",
    "qt.gui.QAbstractItemView.doItemsLayout()",
    "qt.gui.QAbstractItemView.doubleClicked(const(QModelIndex))",
    "qt.gui.QAbstractItemView.edit(const(QModelIndex))",
    "qt.gui.QAbstractItemView.editorDestroyed(QObject)",
    "qt.gui.QAbstractItemView.entered(const(QModelIndex))",
    "qt.gui.QAbstractItemView.horizontalScrollbarAction(int)",
    "qt.gui.QAbstractItemView.horizontalScrollbarValueChanged(int)",
    "qt.gui.QAbstractItemView.pressed(const(QModelIndex))",
    "qt.gui.QAbstractItemView.reset()",
    "qt.gui.QAbstractItemView.rowsAboutToBeRemoved(const(QModelIndex), int, int)",
    "qt.gui.QAbstractItemView.rowsInserted(const(QModelIndex), int, int)",
    "qt.gui.QAbstractItemView.scrollToBottom()",
    "qt.gui.QAbstractItemView.scrollToTop()",
    "qt.gui.QAbstractItemView.selectAll()",
    "qt.gui.QAbstractItemView.selectionChanged(const(QItemSelection), const(QItemSelection))",
    "qt.gui.QAbstractItemView.setCurrentIndex(const(QModelIndex))",
    "qt.gui.QAbstractItemView.setRootIndex(const(QModelIndex))",
    "qt.gui.QAbstractItemView.update(const(QModelIndex))",
    "qt.gui.QAbstractItemView.updateEditorData()",
    "qt.gui.QAbstractItemView.updateEditorGeometries()",
    "qt.gui.QAbstractItemView.updateGeometries()",
    "qt.gui.QAbstractItemView.verticalScrollbarAction(int)",
    "qt.gui.QAbstractItemView.verticalScrollbarValueChanged(int)",
    "qt.gui.QAbstractItemView.viewportEntered()",
    "qt.gui.QAbstractScrollArea.setupViewport(QWidget)",
    "qt.gui.QAbstractSlider.actionTriggered(int)",
    "qt.gui.QAbstractSlider.rangeChanged(int, int)",
    "qt.gui.QAbstractSlider.setOrientation(Qt.Orientation)",
    "qt.gui.QAbstractSlider.setValue(int)",
    "qt.gui.QAbstractSlider.sliderMoved(int)",
    "qt.gui.QAbstractSlider.sliderPressed()",
    "qt.gui.QAbstractSlider.sliderReleased()",
    "qt.gui.QAbstractSlider.valueChanged(int)",
    "qt.gui.QAbstractSpinBox.clear()",
    "qt.gui.QAbstractSpinBox.editingFinished()",
    "qt.gui.QAbstractSpinBox.selectAll()",
    "qt.gui.QAbstractSpinBox.stepDown()",
    "qt.gui.QAbstractSpinBox.stepUp()",
    "qt.gui.QAbstractTextDocumentLayout.documentSizeChanged(const(QSizeF))",
    "qt.gui.QAbstractTextDocumentLayout.pageCountChanged(int)",
    "qt.gui.QAbstractTextDocumentLayout.update(const(QRectF) = QRectF(0., 0., 1000000000., 1000000000.))",
    "qt.gui.QAbstractTextDocumentLayout.update(const(QRectF) = QRectF(0., 0., 1000000000., 1000000000.))",
    "qt.gui.QAbstractTextDocumentLayout.updateBlock(const(QTextBlock))",
    "qt.gui.QAction.changed()",
    "qt.gui.QAction.hover()",
    "qt.gui.QAction.hovered()",
    "qt.gui.QAction.setChecked(bool)",
    "qt.gui.QAction.setDisabled(bool)",
    "qt.gui.QAction.setEnabled(bool)",
    "qt.gui.QAction.setVisible(bool)",
    "qt.gui.QAction.toggle()",
    "qt.gui.QAction.toggled(bool)",
    "qt.gui.QAction.trigger()",
    "qt.gui.QAction.triggered(bool = false)",
    "qt.gui.QAction.triggered(bool = false)",
    "qt.gui.QActionGroup.hovered(QAction)",
    "qt.gui.QActionGroup.setDisabled(bool)",
    "qt.gui.QActionGroup.setEnabled(bool)",
    "qt.gui.QActionGroup.setExclusive(bool)",
    "qt.gui.QActionGroup.setVisible(bool)",
    "qt.gui.QActionGroup.triggered(QAction)",
    "qt.gui.QApplication.aboutQt()",
    "qt.gui.QApplication.autoSipEnabled() const",
    "qt.gui.QApplication.closeAllWindows()",
    "qt.gui.QApplication.commitDataRequest(QSessionManager)",
    "qt.gui.QApplication.focusChanged(QWidget, QWidget)",
    "qt.gui.QApplication.fontDatabaseChanged()",
    "qt.gui.QApplication.lastWindowClosed()",
    "qt.gui.QApplication.saveStateRequest(QSessionManager)",
    "qt.gui.QApplication.setAutoSipEnabled(bool)",
    "qt.gui.QApplication.setStyleSheet(string)",
    "qt.gui.QButtonGroup.buttonClicked(QAbstractButton)",
    "qt.gui.QButtonGroup.buttonClicked(int)",
    "qt.gui.QButtonGroup.buttonPressed(QAbstractButton)",
    "qt.gui.QButtonGroup.buttonPressed(int)",
    "qt.gui.QButtonGroup.buttonReleased(QAbstractButton)",
    "qt.gui.QButtonGroup.buttonReleased(int)",
    "qt.gui.QCDEStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption = null, QWidget = null) const",
    "qt.gui.QCDEStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption = null) const",
    "qt.gui.QCDEStyle.standardIconImplementation(QStyle.StandardPixmap) const",
    "qt.gui.QCalendarWidget.activated(const(QDate))",
    "qt.gui.QCalendarWidget.clicked(const(QDate))",
    "qt.gui.QCalendarWidget.currentPageChanged(int, int)",
    "qt.gui.QCalendarWidget.selectionChanged()",
    "qt.gui.QCalendarWidget.setCurrentPage(int, int)",
    "qt.gui.QCalendarWidget.setDateRange(const(QDate), const(QDate))",
    "qt.gui.QCalendarWidget.setGridVisible(bool)",
    "qt.gui.QCalendarWidget.setNavigationBarVisible(bool)",
    "qt.gui.QCalendarWidget.setSelectedDate(const(QDate))",
    "qt.gui.QCalendarWidget.showNextMonth()",
    "qt.gui.QCalendarWidget.showNextYear()",
    "qt.gui.QCalendarWidget.showPreviousMonth()",
    "qt.gui.QCalendarWidget.showPreviousYear()",
    "qt.gui.QCalendarWidget.showSelectedDate()",
    "qt.gui.QCalendarWidget.showToday()",
    "qt.gui.QCheckBox.stateChanged(int)",
    "qt.gui.QCleanlooksStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption, QWidget = null) const",
    "qt.gui.QCleanlooksStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption) const",
    "qt.gui.QClipboard.changed(QClipboard.Mode)",
    "qt.gui.QClipboard.dataChanged()",
    "qt.gui.QClipboard.findBufferChanged()",
    "qt.gui.QClipboard.ownerDestroyed()",
    "qt.gui.QClipboard.selectionChanged()",
    "qt.gui.QColorDialog.colorSelected(const(QColor))",
    "qt.gui.QColorDialog.currentColorChanged(const(QColor))",
    "qt.gui.QColumnView.updatePreviewWidget(const(QModelIndex))",
    "qt.gui.QComboBox.activated(string)",
    "qt.gui.QComboBox.activated(int)",
    "qt.gui.QComboBox.clear()",
    "qt.gui.QComboBox.clearEditText()",
    "qt.gui.QComboBox.currentIndexChanged(string)",
    "qt.gui.QComboBox.currentIndexChanged(int)",
    "qt.gui.QComboBox.editTextChanged(string)",
    "qt.gui.QComboBox.highlighted(string)",
    "qt.gui.QComboBox.highlighted(int)",
    "qt.gui.QComboBox.setCurrentIndex(int)",
    "qt.gui.QComboBox.setEditText(string)",
    "qt.gui.QCommonStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption = null, QWidget = null) const",
    "qt.gui.QCommonStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption = null) const",
    "qt.gui.QCommonStyle.standardIconImplementation(QStyle.StandardPixmap) const",
    "qt.gui.QCompleter.activated(const(QModelIndex))",
    "qt.gui.QCompleter.activated(string)",
    "qt.gui.QCompleter.complete(const(QRect) = QRect())",
    "qt.gui.QCompleter.complete()",
    "qt.gui.QCompleter.highlighted(const(QModelIndex))",
    "qt.gui.QCompleter.highlighted(string)",
    "qt.gui.QCompleter.setCompletionPrefix(string)",
    "qt.gui.QCompleter.setWrapAround(bool)",
    "qt.gui.QDataWidgetMapper.currentIndexChanged(int)",
    "qt.gui.QDataWidgetMapper.revert()",
    "qt.gui.QDataWidgetMapper.setCurrentIndex(int)",
    "qt.gui.QDataWidgetMapper.setCurrentModelIndex(const(QModelIndex))",
    "qt.gui.QDataWidgetMapper.submit()",
    "qt.gui.QDataWidgetMapper.toFirst()",
    "qt.gui.QDataWidgetMapper.toLast()",
    "qt.gui.QDataWidgetMapper.toNext()",
    "qt.gui.QDataWidgetMapper.toPrevious()",
    "qt.gui.QDateTimeEdit.dateChanged(const(QDate))",
    "qt.gui.QDateTimeEdit.dateTimeChanged(const(QDateTime))",
    "qt.gui.QDateTimeEdit.setDate(const(QDate))",
    "qt.gui.QDateTimeEdit.setDateTime(const(QDateTime))",
    "qt.gui.QDateTimeEdit.setTime(const(QTime))",
    "qt.gui.QDateTimeEdit.timeChanged(const(QTime))",
    "qt.gui.QDesktopWidget.resized(int)",
    "qt.gui.QDesktopWidget.screenCountChanged(int)",
    "qt.gui.QDesktopWidget.workAreaResized(int)",
    "qt.gui.QDial.setNotchesVisible(bool)",
    "qt.gui.QDial.setWrapping(bool)",
    "qt.gui.QDialog.accept()",
    "qt.gui.QDialog.accepted()",
    "qt.gui.QDialog.done(int)",
    "qt.gui.QDialog.exec()",
    "qt.gui.QDialog.finished(int)",
    "qt.gui.QDialog.open()",
    "qt.gui.QDialog.reject()",
    "qt.gui.QDialog.rejected()",
    "qt.gui.QDialog.showExtension(bool)",
    "qt.gui.QDialogButtonBox.accepted()",
    "qt.gui.QDialogButtonBox.clicked(QAbstractButton)",
    "qt.gui.QDialogButtonBox.helpRequested()",
    "qt.gui.QDialogButtonBox.rejected()",
    "qt.gui.QDirModel.refresh(const(QModelIndex) = QModelIndex())",
    "qt.gui.QDirModel.refresh()",
    "qt.gui.QDockWidget.allowedAreasChanged(int)",
    "qt.gui.QDockWidget.dockLocationChanged(Qt.DockWidgetArea)",
    "qt.gui.QDockWidget.featuresChanged(int)",
    "qt.gui.QDockWidget.topLevelChanged(bool)",
    "qt.gui.QDockWidget.visibilityChanged(bool)",
    "qt.gui.QDoubleSpinBox.setValue(double)",
    "qt.gui.QDoubleSpinBox.valueChanged(string)",
    "qt.gui.QDoubleSpinBox.valueChanged(double)",
    "qt.gui.QDrag.actionChanged(Qt.DropAction)",
    "qt.gui.QDrag.targetChanged(QWidget)",
    "qt.gui.QErrorMessage.showMessage(string)",
    "qt.gui.QErrorMessage.showMessage(string, string)",
    "qt.gui.QFileDialog.currentChanged(string)",
    "qt.gui.QFileDialog.directoryEntered(string)",
    "qt.gui.QFileDialog.fileSelected(string)",
    "qt.gui.QFileDialog.filesSelected(QList!(string))",
    "qt.gui.QFileDialog.filterSelected(string)",
    "qt.gui.QFileSystemModel.directoryLoaded(string)",
    "qt.gui.QFileSystemModel.fileRenamed(string, string, string)",
    "qt.gui.QFileSystemModel.rootPathChanged(string)",
    "qt.gui.QFontComboBox.currentFontChanged(const(QFont))",
    "qt.gui.QFontComboBox.setCurrentFont(const(QFont))",
    "qt.gui.QFontDialog.currentFontChanged(const(QFont))",
    "qt.gui.QFontDialog.fontSelected(const(QFont))",
    "qt.gui.QGraphicsItemAnimation.reset()",
    "qt.gui.QGraphicsItemAnimation.setStep(double)",
    "qt.gui.QGraphicsObject.childrenChanged()",
    "qt.gui.QGraphicsObject.enabledChanged()",
    "qt.gui.QGraphicsObject.heightChanged()",
    "qt.gui.QGraphicsObject.opacityChanged()",
    "qt.gui.QGraphicsObject.parentChanged()",
    "qt.gui.QGraphicsObject.rotationChanged()",
    "qt.gui.QGraphicsObject.scaleChanged()",
    "qt.gui.QGraphicsObject.updateMicroFocus()",
    "qt.gui.QGraphicsObject.visibleChanged()",
    "qt.gui.QGraphicsObject.widthChanged()",
    "qt.gui.QGraphicsObject.xChanged()",
    "qt.gui.QGraphicsObject.yChanged()",
    "qt.gui.QGraphicsObject.zChanged()",
    "qt.gui.QGraphicsProxyWidget.newProxyWidget(QWidget)",
    "qt.gui.QGraphicsScene.advance()",
    "qt.gui.QGraphicsScene.changed(QList!(QRectF))",
    "qt.gui.QGraphicsScene.clear()",
    "qt.gui.QGraphicsScene.clearSelection()",
    "qt.gui.QGraphicsScene.focusNextPrevChild(bool)",
    "qt.gui.QGraphicsScene.invalidate(const(QRectF) = QRectF(), int = 65535)",
    "qt.gui.QGraphicsScene.invalidate(const(QRectF) = QRectF())",
    "qt.gui.QGraphicsScene.invalidate()",
    "qt.gui.QGraphicsScene.sceneRectChanged(const(QRectF))",
    "qt.gui.QGraphicsScene.selectionChanged()",
    "qt.gui.QGraphicsScene.update(const(QRectF) = QRectF())",
    "qt.gui.QGraphicsScene.update()",
    "qt.gui.QGraphicsTextItem.linkActivated(string)",
    "qt.gui.QGraphicsTextItem.linkHovered(string)",
    "qt.gui.QGraphicsView.invalidateScene(const(QRectF) = QRectF(), int = 65535)",
    "qt.gui.QGraphicsView.invalidateScene(const(QRectF) = QRectF())",
    "qt.gui.QGraphicsView.invalidateScene()",
    "qt.gui.QGraphicsView.setupViewport(QWidget)",
    "qt.gui.QGraphicsView.updateScene(QList!(QRectF))",
    "qt.gui.QGraphicsView.updateSceneRect(const(QRectF))",
    "qt.gui.QGraphicsWidget.close()",
    "qt.gui.QGraphicsWidget.geometryChanged()",
    "qt.gui.QGraphicsWidget.layoutChanged()",
    "qt.gui.QGroupBox.clicked(bool = false)",
    "qt.gui.QGroupBox.clicked(bool = false)",
    "qt.gui.QGroupBox.setChecked(bool)",
    "qt.gui.QGroupBox.toggled(bool)",
    "qt.gui.QHeaderView.geometriesChanged()",
    "qt.gui.QHeaderView.headerDataChanged(Qt.Orientation, int, int)",
    "qt.gui.QHeaderView.resizeSections()",
    "qt.gui.QHeaderView.sectionAutoResize(int, QHeaderView.ResizeMode)",
    "qt.gui.QHeaderView.sectionClicked(int)",
    "qt.gui.QHeaderView.sectionCountChanged(int, int)",
    "qt.gui.QHeaderView.sectionDoubleClicked(int)",
    "qt.gui.QHeaderView.sectionEntered(int)",
    "qt.gui.QHeaderView.sectionHandleDoubleClicked(int)",
    "qt.gui.QHeaderView.sectionMoved(int, int, int)",
    "qt.gui.QHeaderView.sectionPressed(int)",
    "qt.gui.QHeaderView.sectionResized(int, int, int)",
    "qt.gui.QHeaderView.sectionsAboutToBeRemoved(const(QModelIndex), int, int)",
    "qt.gui.QHeaderView.sectionsInserted(const(QModelIndex), int, int)",
    "qt.gui.QHeaderView.setOffset(int)",
    "qt.gui.QHeaderView.setOffsetToLastSection()",
    "qt.gui.QHeaderView.setOffsetToSectionPosition(int)",
    "qt.gui.QHeaderView.sortIndicatorChanged(int, Qt.SortOrder)",
    "qt.gui.QHeaderView.updateSection(int)",
    "qt.gui.QInputDialog.doubleValueChanged(double)",
    "qt.gui.QInputDialog.doubleValueSelected(double)",
    "qt.gui.QInputDialog.intValueChanged(int)",
    "qt.gui.QInputDialog.intValueSelected(int)",
    "qt.gui.QInputDialog.textValueChanged(string)",
    "qt.gui.QInputDialog.textValueSelected(string)",
    "qt.gui.QItemSelectionModel.clear()",
    "qt.gui.QItemSelectionModel.clearSelection()",
    "qt.gui.QItemSelectionModel.currentChanged(const(QModelIndex), const(QModelIndex))",
    "qt.gui.QItemSelectionModel.currentColumnChanged(const(QModelIndex), const(QModelIndex))",
    "qt.gui.QItemSelectionModel.currentRowChanged(const(QModelIndex), const(QModelIndex))",
    "qt.gui.QItemSelectionModel.reset()",
    "qt.gui.QItemSelectionModel.select(const(QItemSelection), int)",
    "qt.gui.QItemSelectionModel.select(const(QModelIndex), int)",
    "qt.gui.QItemSelectionModel.selectionChanged(const(QItemSelection), const(QItemSelection))",
    "qt.gui.QItemSelectionModel.setCurrentIndex(const(QModelIndex), int)",
    "qt.gui.QLCDNumber.display(string)",
    "qt.gui.QLCDNumber.display(double)",
    "qt.gui.QLCDNumber.display(int)",
    "qt.gui.QLCDNumber.overflow()",
    "qt.gui.QLCDNumber.setBinMode()",
    "qt.gui.QLCDNumber.setDecMode()",
    "qt.gui.QLCDNumber.setHexMode()",
    "qt.gui.QLCDNumber.setOctMode()",
    "qt.gui.QLCDNumber.setSmallDecimalPoint(bool)",
    "qt.gui.QLabel.clear()",
    "qt.gui.QLabel.linkActivated(string)",
    "qt.gui.QLabel.linkHovered(string)",
    "qt.gui.QLabel.setMovie(QMovie)",
    "qt.gui.QLabel.setNum(double)",
    "qt.gui.QLabel.setNum(int)",
    "qt.gui.QLabel.setPicture(const(QPicture))",
    "qt.gui.QLabel.setPixmap(const(QPixmap))",
    "qt.gui.QLabel.setText(string)",
    "qt.gui.QLineEdit.clear()",
    "qt.gui.QLineEdit.copy() const",
    "qt.gui.QLineEdit.cursorPositionChanged(int, int)",
    "qt.gui.QLineEdit.cut()",
    "qt.gui.QLineEdit.editingFinished()",
    "qt.gui.QLineEdit.paste()",
    "qt.gui.QLineEdit.redo()",
    "qt.gui.QLineEdit.returnPressed()",
    "qt.gui.QLineEdit.selectAll()",
    "qt.gui.QLineEdit.selectionChanged()",
    "qt.gui.QLineEdit.setText(string)",
    "qt.gui.QLineEdit.textChanged(string)",
    "qt.gui.QLineEdit.textEdited(string)",
    "qt.gui.QLineEdit.undo()",
    "qt.gui.QListView.indexesMoved(QList!(QModelIndex))",
    "qt.gui.QListWidget.clear()",
    "qt.gui.QListWidget.currentItemChanged(QListWidgetItem, QListWidgetItem)",
    "qt.gui.QListWidget.currentRowChanged(int)",
    "qt.gui.QListWidget.currentTextChanged(string)",
    "qt.gui.QListWidget.itemActivated(QListWidgetItem)",
    "qt.gui.QListWidget.itemChanged(QListWidgetItem)",
    "qt.gui.QListWidget.itemClicked(QListWidgetItem)",
    "qt.gui.QListWidget.itemDoubleClicked(QListWidgetItem)",
    "qt.gui.QListWidget.itemEntered(QListWidgetItem)",
    "qt.gui.QListWidget.itemPressed(QListWidgetItem)",
    "qt.gui.QListWidget.itemSelectionChanged()",
    "qt.gui.QListWidget.scrollToItem(QListWidgetItem, QAbstractItemView.ScrollHint = QAbstractItemView.ScrollHint.EnsureVisible)",
    "qt.gui.QListWidget.scrollToItem(QListWidgetItem)",
    "qt.gui.QMainWindow.iconSizeChanged(const(QSize))",
    "qt.gui.QMainWindow.setAnimated(bool)",
    "qt.gui.QMainWindow.setDockNestingEnabled(bool)",
    "qt.gui.QMainWindow.toolButtonStyleChanged(Qt.ToolButtonStyle)",
    "qt.gui.QMdiArea.activateNextSubWindow()",
    "qt.gui.QMdiArea.activatePreviousSubWindow()",
    "qt.gui.QMdiArea.cascadeSubWindows()",
    "qt.gui.QMdiArea.closeActiveSubWindow()",
    "qt.gui.QMdiArea.closeAllSubWindows()",
    "qt.gui.QMdiArea.setActiveSubWindow(QMdiSubWindow)",
    "qt.gui.QMdiArea.setupViewport(QWidget)",
    "qt.gui.QMdiArea.subWindowActivated(QMdiSubWindow)",
    "qt.gui.QMdiArea.tileSubWindows()",
    "qt.gui.QMdiSubWindow.aboutToActivate()",
    "qt.gui.QMdiSubWindow.showShaded()",
    "qt.gui.QMdiSubWindow.showSystemMenu()",
    "qt.gui.QMdiSubWindow.windowStateChanged(int, int)",
    "qt.gui.QMenu.aboutToHide()",
    "qt.gui.QMenu.aboutToShow()",
    "qt.gui.QMenu.hovered(QAction)",
    "qt.gui.QMenu.internalDelayedPopup()",
    "qt.gui.QMenu.internalSetSloppyAction()",
    "qt.gui.QMenu.triggered(QAction)",
    "qt.gui.QMenuBar.hovered(QAction)",
    "qt.gui.QMenuBar.setVisible(bool)",
    "qt.gui.QMenuBar.triggered(QAction)",
    "qt.gui.QMessageBox.buttonClicked(QAbstractButton)",
    "qt.gui.QMotifStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption = null, QWidget = null) const",
    "qt.gui.QMotifStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption = null) const",
    "qt.gui.QMotifStyle.standardIconImplementation(QStyle.StandardPixmap) const",
    "qt.gui.QMovie.error(QImageReader.ImageReaderError)",
    "qt.gui.QMovie.finished()",
    "qt.gui.QMovie.frameChanged(int)",
    "qt.gui.QMovie.jumpToNextFrame()",
    "qt.gui.QMovie.resized(const(QSize))",
    "qt.gui.QMovie.setPaused(bool)",
    "qt.gui.QMovie.setSpeed(int)",
    "qt.gui.QMovie.start()",
    "qt.gui.QMovie.started()",
    "qt.gui.QMovie.stateChanged(QMovie.MovieState)",
    "qt.gui.QMovie.stop()",
    "qt.gui.QMovie.updated(const(QRect))",
    "qt.gui.QPlainTextEdit.appendHtml(string)",
    "qt.gui.QPlainTextEdit.appendPlainText(string)",
    "qt.gui.QPlainTextEdit.blockCountChanged(int)",
    "qt.gui.QPlainTextEdit.centerCursor()",
    "qt.gui.QPlainTextEdit.clear()",
    "qt.gui.QPlainTextEdit.copy()",
    "qt.gui.QPlainTextEdit.copyAvailable(bool)",
    "qt.gui.QPlainTextEdit.cursorPositionChanged()",
    "qt.gui.QPlainTextEdit.cut()",
    "qt.gui.QPlainTextEdit.insertPlainText(string)",
    "qt.gui.QPlainTextEdit.modificationChanged(bool)",
    "qt.gui.QPlainTextEdit.paste()",
    "qt.gui.QPlainTextEdit.redo()",
    "qt.gui.QPlainTextEdit.redoAvailable(bool)",
    "qt.gui.QPlainTextEdit.selectAll()",
    "qt.gui.QPlainTextEdit.selectionChanged()",
    "qt.gui.QPlainTextEdit.setPlainText(string)",
    "qt.gui.QPlainTextEdit.textChanged()",
    "qt.gui.QPlainTextEdit.undo()",
    "qt.gui.QPlainTextEdit.undoAvailable(bool)",
    "qt.gui.QPlainTextEdit.updateRequest(const(QRect), int)",
    "qt.gui.QPlastiqueStyle.layoutSpacingImplementation(QSizePolicy.ControlType, QSizePolicy.ControlType, Qt.Orientation, QStyleOption = null, QWidget = null) const",
    "qt.gui.QPlastiqueStyle.layoutSpacingImplementation(QSizePolicy.ControlType, QSizePolicy.ControlType, Qt.Orientation, QStyleOption = null) const",
    "qt.gui.QPlastiqueStyle.layoutSpacingImplementation(QSizePolicy.ControlType, QSizePolicy.ControlType, Qt.Orientation) const",
    "qt.gui.QPlastiqueStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption = null, QWidget = null) const",
    "qt.gui.QPlastiqueStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption = null) const",
    "qt.gui.QPlastiqueStyle.standardIconImplementation(QStyle.StandardPixmap) const",
    "qt.gui.QPrintDialog.accepted(QPrinter)",
    "qt.gui.QPrintPreviewDialog.paintRequested(QPrinter)",
    "qt.gui.QPrintPreviewWidget.fitInView()",
    "qt.gui.QPrintPreviewWidget.fitToWidth()",
    "qt.gui.QPrintPreviewWidget.paintRequested(QPrinter)",
    "qt.gui.QPrintPreviewWidget.previewChanged()",
    "qt.gui.QPrintPreviewWidget.print()",
    "qt.gui.QPrintPreviewWidget.setAllPagesViewMode()",
    "qt.gui.QPrintPreviewWidget.setCurrentPage(int)",
    "qt.gui.QPrintPreviewWidget.setFacingPagesViewMode()",
    "qt.gui.QPrintPreviewWidget.setLandscapeOrientation()",
    "qt.gui.QPrintPreviewWidget.setOrientation(QPrinter.Orientation)",
    "qt.gui.QPrintPreviewWidget.setPortraitOrientation()",
    "qt.gui.QPrintPreviewWidget.setSinglePageViewMode()",
    "qt.gui.QPrintPreviewWidget.setViewMode(QPrintPreviewWidget.ViewMode)",
    "qt.gui.QPrintPreviewWidget.setZoomFactor(double)",
    "qt.gui.QPrintPreviewWidget.setZoomMode(QPrintPreviewWidget.ZoomMode)",
    "qt.gui.QPrintPreviewWidget.updatePreview()",
    "qt.gui.QPrintPreviewWidget.zoomIn(double = 1.1)",
    "qt.gui.QPrintPreviewWidget.zoomIn()",
    "qt.gui.QPrintPreviewWidget.zoomOut(double = 1.1)",
    "qt.gui.QPrintPreviewWidget.zoomOut()",
    "qt.gui.QProgressBar.reset()",
    "qt.gui.QProgressBar.setMaximum(int)",
    "qt.gui.QProgressBar.setMinimum(int)",
    "qt.gui.QProgressBar.setOrientation(Qt.Orientation)",
    "qt.gui.QProgressBar.setRange(int, int)",
    "qt.gui.QProgressBar.setValue(int)",
    "qt.gui.QProgressBar.valueChanged(int)",
    "qt.gui.QProgressDialog.cancel()",
    "qt.gui.QProgressDialog.canceled()",
    "qt.gui.QProgressDialog.forceShow()",
    "qt.gui.QProgressDialog.reset()",
    "qt.gui.QProgressDialog.setCancelButtonText(string)",
    "qt.gui.QProgressDialog.setLabelText(string)",
    "qt.gui.QProgressDialog.setMaximum(int)",
    "qt.gui.QProgressDialog.setMinimum(int)",
    "qt.gui.QProgressDialog.setMinimumDuration(int)",
    "qt.gui.QProgressDialog.setRange(int, int)",
    "qt.gui.QProgressDialog.setValue(int)",
    "qt.gui.QPushButton.showMenu()",
    "qt.gui.QShortcut.activated()",
    "qt.gui.QShortcut.activatedAmbiguously()",
    "qt.gui.QSortFilterProxyModel.clear()",
    "qt.gui.QSortFilterProxyModel.invalidate()",
    "qt.gui.QSortFilterProxyModel.setFilterFixedString(string)",
    "qt.gui.QSortFilterProxyModel.setFilterRegExp(string)",
    "qt.gui.QSortFilterProxyModel.setFilterWildcard(string)",
    "qt.gui.QSound.play()",
    "qt.gui.QSound.stop()",
    "qt.gui.QSpinBox.setValue(int)",
    "qt.gui.QSpinBox.valueChanged(string)",
    "qt.gui.QSpinBox.valueChanged(int)",
    "qt.gui.QSplashScreen.clearMessage()",
    "qt.gui.QSplashScreen.messageChanged(string)",
    "qt.gui.QSplashScreen.showMessage(string, int = 1, const(QColor) = QColor.Black)",
    "qt.gui.QSplashScreen.showMessage(string, int = 1)",
    "qt.gui.QSplashScreen.showMessage(string)",
    "qt.gui.QSplitter.splitterMoved(int, int)",
    "qt.gui.QStackedLayout.currentChanged(int)",
    "qt.gui.QStackedLayout.setCurrentIndex(int)",
    "qt.gui.QStackedLayout.setCurrentWidget(QWidget)",
    "qt.gui.QStackedLayout.widgetRemoved(int)",
    "qt.gui.QStackedWidget.currentChanged(int)",
    "qt.gui.QStackedWidget.setCurrentIndex(int)",
    "qt.gui.QStackedWidget.setCurrentWidget(QWidget)",
    "qt.gui.QStackedWidget.widgetRemoved(int)",
    "qt.gui.QStandardItemModel.itemChanged(QStandardItem)",
    "qt.gui.QStatusBar.clearMessage()",
    "qt.gui.QStatusBar.messageChanged(string)",
    "qt.gui.QStatusBar.showMessage(string, int = 0)",
    "qt.gui.QStatusBar.showMessage(string)",
    "qt.gui.QStyle.layoutSpacingImplementation(QSizePolicy.ControlType, QSizePolicy.ControlType, Qt.Orientation, QStyleOption = null, QWidget = null) const",
    "qt.gui.QStyle.layoutSpacingImplementation(QSizePolicy.ControlType, QSizePolicy.ControlType, Qt.Orientation, QStyleOption = null) const",
    "qt.gui.QStyle.layoutSpacingImplementation(QSizePolicy.ControlType, QSizePolicy.ControlType, Qt.Orientation) const",
    "qt.gui.QStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption = null, QWidget = null) const",
    "qt.gui.QStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption = null) const",
    "qt.gui.QStyle.standardIconImplementation(QStyle.StandardPixmap) const",
    "qt.gui.QSyntaxHighlighter.rehighlight()",
    "qt.gui.QSyntaxHighlighter.rehighlightBlock(const(QTextBlock))",
    "qt.gui.QSystemTrayIcon.activated(QSystemTrayIcon.ActivationReason)",
    "qt.gui.QSystemTrayIcon.hide()",
    "qt.gui.QSystemTrayIcon.messageClicked()",
    "qt.gui.QSystemTrayIcon.setVisible(bool)",
    "qt.gui.QSystemTrayIcon.show()",
    "qt.gui.QTabBar.currentChanged(int)",
    "qt.gui.QTabBar.setCurrentIndex(int)",
    "qt.gui.QTabBar.tabCloseRequested(int)",
    "qt.gui.QTabBar.tabMoved(int, int)",
    "qt.gui.QTabWidget.currentChanged(int)",
    "qt.gui.QTabWidget.setCurrentIndex(int)",
    "qt.gui.QTabWidget.setCurrentWidget(QWidget)",
    "qt.gui.QTabWidget.tabCloseRequested(int)",
    "qt.gui.QTableView.columnCountChanged(int, int)",
    "qt.gui.QTableView.columnMoved(int, int, int)",
    "qt.gui.QTableView.columnResized(int, int, int)",
    "qt.gui.QTableView.hideColumn(int)",
    "qt.gui.QTableView.hideRow(int)",
    "qt.gui.QTableView.resizeColumnToContents(int)",
    "qt.gui.QTableView.resizeColumnsToContents()",
    "qt.gui.QTableView.resizeRowToContents(int)",
    "qt.gui.QTableView.resizeRowsToContents()",
    "qt.gui.QTableView.rowCountChanged(int, int)",
    "qt.gui.QTableView.rowMoved(int, int, int)",
    "qt.gui.QTableView.rowResized(int, int, int)",
    "qt.gui.QTableView.selectColumn(int)",
    "qt.gui.QTableView.selectRow(int)",
    "qt.gui.QTableView.setShowGrid(bool)",
    "qt.gui.QTableView.showColumn(int)",
    "qt.gui.QTableView.showRow(int)",
    "qt.gui.QTableView.sortByColumn(int)",
    "qt.gui.QTableWidget.cellActivated(int, int)",
    "qt.gui.QTableWidget.cellChanged(int, int)",
    "qt.gui.QTableWidget.cellClicked(int, int)",
    "qt.gui.QTableWidget.cellDoubleClicked(int, int)",
    "qt.gui.QTableWidget.cellEntered(int, int)",
    "qt.gui.QTableWidget.cellPressed(int, int)",
    "qt.gui.QTableWidget.clear()",
    "qt.gui.QTableWidget.clearContents()",
    "qt.gui.QTableWidget.currentCellChanged(int, int, int, int)",
    "qt.gui.QTableWidget.currentItemChanged(QTableWidgetItem, QTableWidgetItem)",
    "qt.gui.QTableWidget.insertColumn(int)",
    "qt.gui.QTableWidget.insertRow(int)",
    "qt.gui.QTableWidget.itemActivated(QTableWidgetItem)",
    "qt.gui.QTableWidget.itemChanged(QTableWidgetItem)",
    "qt.gui.QTableWidget.itemClicked(QTableWidgetItem)",
    "qt.gui.QTableWidget.itemDoubleClicked(QTableWidgetItem)",
    "qt.gui.QTableWidget.itemEntered(QTableWidgetItem)",
    "qt.gui.QTableWidget.itemPressed(QTableWidgetItem)",
    "qt.gui.QTableWidget.itemSelectionChanged()",
    "qt.gui.QTableWidget.removeColumn(int)",
    "qt.gui.QTableWidget.removeRow(int)",
    "qt.gui.QTableWidget.scrollToItem(QTableWidgetItem, QAbstractItemView.ScrollHint = QAbstractItemView.ScrollHint.EnsureVisible)",
    "qt.gui.QTableWidget.scrollToItem(QTableWidgetItem)",
    "qt.gui.QTextBrowser.anchorClicked(const(QUrl))",
    "qt.gui.QTextBrowser.backward()",
    "qt.gui.QTextBrowser.backwardAvailable(bool)",
    "qt.gui.QTextBrowser.forward()",
    "qt.gui.QTextBrowser.forwardAvailable(bool)",
    "qt.gui.QTextBrowser.highlighted(string)",
    "qt.gui.QTextBrowser.highlighted(const(QUrl))",
    "qt.gui.QTextBrowser.historyChanged()",
    "qt.gui.QTextBrowser.home()",
    "qt.gui.QTextBrowser.reload()",
    "qt.gui.QTextBrowser.setSource(const(QUrl))",
    "qt.gui.QTextBrowser.sourceChanged(const(QUrl))",
    "qt.gui.QTextDocument.blockCountChanged(int)",
    "qt.gui.QTextDocument.contentsChange(int, int, int)",
    "qt.gui.QTextDocument.contentsChanged()",
    "qt.gui.QTextDocument.cursorPositionChanged(const(QTextCursor))",
    "qt.gui.QTextDocument.documentLayoutChanged()",
    "qt.gui.QTextDocument.modificationChanged(bool)",
    "qt.gui.QTextDocument.redo()",
    "qt.gui.QTextDocument.redoAvailable(bool)",
    "qt.gui.QTextDocument.setModified(bool = true)",
    "qt.gui.QTextDocument.setModified()",
    "qt.gui.QTextDocument.undo()",
    "qt.gui.QTextDocument.undoAvailable(bool)",
    "qt.gui.QTextDocument.undoCommandAdded()",
    "qt.gui.QTextEdit.append(string)",
    "qt.gui.QTextEdit.clear()",
    "qt.gui.QTextEdit.copy()",
    "qt.gui.QTextEdit.copyAvailable(bool)",
    "qt.gui.QTextEdit.currentCharFormatChanged(const(QTextCharFormat))",
    "qt.gui.QTextEdit.cursorPositionChanged()",
    "qt.gui.QTextEdit.cut()",
    "qt.gui.QTextEdit.insertHtml(string)",
    "qt.gui.QTextEdit.insertPlainText(string)",
    "qt.gui.QTextEdit.paste()",
    "qt.gui.QTextEdit.redo()",
    "qt.gui.QTextEdit.redoAvailable(bool)",
    "qt.gui.QTextEdit.scrollToAnchor(string)",
    "qt.gui.QTextEdit.selectAll()",
    "qt.gui.QTextEdit.selectionChanged()",
    "qt.gui.QTextEdit.setAlignment(int)",
    "qt.gui.QTextEdit.setCurrentFont(const(QFont))",
    "qt.gui.QTextEdit.setFontFamily(string)",
    "qt.gui.QTextEdit.setFontItalic(bool)",
    "qt.gui.QTextEdit.setFontPointSize(double)",
    "qt.gui.QTextEdit.setFontUnderline(bool)",
    "qt.gui.QTextEdit.setFontWeight(int)",
    "qt.gui.QTextEdit.setHtml(string)",
    "qt.gui.QTextEdit.setPlainText(string)",
    "qt.gui.QTextEdit.setText(string)",
    "qt.gui.QTextEdit.setTextBackgroundColor(const(QColor))",
    "qt.gui.QTextEdit.setTextColor(const(QColor))",
    "qt.gui.QTextEdit.textChanged()",
    "qt.gui.QTextEdit.undo()",
    "qt.gui.QTextEdit.undoAvailable(bool)",
    "qt.gui.QTextEdit.zoomIn(int = 1)",
    "qt.gui.QTextEdit.zoomIn()",
    "qt.gui.QTextEdit.zoomOut(int = 1)",
    "qt.gui.QTextEdit.zoomOut()",
    "qt.gui.QToolBar.actionTriggered(QAction)",
    "qt.gui.QToolBar.allowedAreasChanged(int)",
    "qt.gui.QToolBar.iconSizeChanged(const(QSize))",
    "qt.gui.QToolBar.movableChanged(bool)",
    "qt.gui.QToolBar.orientationChanged(Qt.Orientation)",
    "qt.gui.QToolBar.setIconSize(const(QSize))",
    "qt.gui.QToolBar.setToolButtonStyle(Qt.ToolButtonStyle)",
    "qt.gui.QToolBar.toolButtonStyleChanged(Qt.ToolButtonStyle)",
    "qt.gui.QToolBar.topLevelChanged(bool)",
    "qt.gui.QToolBar.visibilityChanged(bool)",
    "qt.gui.QToolBox.currentChanged(int)",
    "qt.gui.QToolBox.setCurrentIndex(int)",
    "qt.gui.QToolBox.setCurrentWidget(QWidget)",
    "qt.gui.QToolButton.setDefaultAction(QAction)",
    "qt.gui.QToolButton.setToolButtonStyle(Qt.ToolButtonStyle)",
    "qt.gui.QToolButton.showMenu()",
    "qt.gui.QToolButton.triggered(QAction)",
    "qt.gui.QTreeView.collapse(const(QModelIndex))",
    "qt.gui.QTreeView.collapseAll()",
    "qt.gui.QTreeView.collapsed(const(QModelIndex))",
    "qt.gui.QTreeView.columnCountChanged(int, int)",
    "qt.gui.QTreeView.columnMoved()",
    "qt.gui.QTreeView.columnResized(int, int, int)",
    "qt.gui.QTreeView.expand(const(QModelIndex))",
    "qt.gui.QTreeView.expandAll()",
    "qt.gui.QTreeView.expandToDepth(int)",
    "qt.gui.QTreeView.expanded(const(QModelIndex))",
    "qt.gui.QTreeView.hideColumn(int)",
    "qt.gui.QTreeView.reexpand()",
    "qt.gui.QTreeView.resizeColumnToContents(int)",
    "qt.gui.QTreeView.rowsRemoved(const(QModelIndex), int, int)",
    "qt.gui.QTreeView.showColumn(int)",
    "qt.gui.QTreeView.sortByColumn(int)",
    "qt.gui.QTreeWidget.clear()",
    "qt.gui.QTreeWidget.collapseItem(QTreeWidgetItem)",
    "qt.gui.QTreeWidget.currentItemChanged(QTreeWidgetItem, QTreeWidgetItem)",
    "qt.gui.QTreeWidget.expandItem(QTreeWidgetItem)",
    "qt.gui.QTreeWidget.itemActivated(QTreeWidgetItem, int)",
    "qt.gui.QTreeWidget.itemChanged(QTreeWidgetItem, int)",
    "qt.gui.QTreeWidget.itemClicked(QTreeWidgetItem, int)",
    "qt.gui.QTreeWidget.itemCollapsed(QTreeWidgetItem)",
    "qt.gui.QTreeWidget.itemDoubleClicked(QTreeWidgetItem, int)",
    "qt.gui.QTreeWidget.itemEntered(QTreeWidgetItem, int)",
    "qt.gui.QTreeWidget.itemExpanded(QTreeWidgetItem)",
    "qt.gui.QTreeWidget.itemPressed(QTreeWidgetItem, int)",
    "qt.gui.QTreeWidget.itemSelectionChanged()",
    "qt.gui.QTreeWidget.scrollToItem(QTreeWidgetItem, QAbstractItemView.ScrollHint = QAbstractItemView.ScrollHint.EnsureVisible)",
    "qt.gui.QTreeWidget.scrollToItem(QTreeWidgetItem)",
    "qt.gui.QUndoGroup.activeStackChanged(QUndoStack)",
    "qt.gui.QUndoGroup.canRedoChanged(bool)",
    "qt.gui.QUndoGroup.canUndoChanged(bool)",
    "qt.gui.QUndoGroup.cleanChanged(bool)",
    "qt.gui.QUndoGroup.indexChanged(int)",
    "qt.gui.QUndoGroup.redo()",
    "qt.gui.QUndoGroup.redoTextChanged(string)",
    "qt.gui.QUndoGroup.setActiveStack(QUndoStack)",
    "qt.gui.QUndoGroup.undo()",
    "qt.gui.QUndoGroup.undoTextChanged(string)",
    "qt.gui.QUndoStack.canRedoChanged(bool)",
    "qt.gui.QUndoStack.canUndoChanged(bool)",
    "qt.gui.QUndoStack.cleanChanged(bool)",
    "qt.gui.QUndoStack.indexChanged(int)",
    "qt.gui.QUndoStack.redo()",
    "qt.gui.QUndoStack.redoTextChanged(string)",
    "qt.gui.QUndoStack.setActive(bool = true)",
    "qt.gui.QUndoStack.setActive()",
    "qt.gui.QUndoStack.setClean()",
    "qt.gui.QUndoStack.setIndex(int)",
    "qt.gui.QUndoStack.undo()",
    "qt.gui.QUndoStack.undoTextChanged(string)",
    "qt.gui.QUndoView.setGroup(QUndoGroup)",
    "qt.gui.QUndoView.setStack(QUndoStack)",
    "qt.gui.QWidget.close()",
    "qt.gui.QWidget.customContextMenuRequested(const(QPoint))",
    "qt.gui.QWidget.hide()",
    "qt.gui.QWidget.lower()",
    "qt.gui.QWidget.raise()",
    "qt.gui.QWidget.repaint()",
    "qt.gui.QWidget.setDisabled(bool)",
    "qt.gui.QWidget.setEnabled(bool)",
    "qt.gui.QWidget.setFocus()",
    "qt.gui.QWidget.setHidden(bool)",
    "qt.gui.QWidget.setShown(bool)",
    "qt.gui.QWidget.setStyleSheet(string)",
    "qt.gui.QWidget.setVisible(bool)",
    "qt.gui.QWidget.setWindowModified(bool)",
    "qt.gui.QWidget.setWindowTitle(string)",
    "qt.gui.QWidget.show()",
    "qt.gui.QWidget.showFullScreen()",
    "qt.gui.QWidget.showMaximized()",
    "qt.gui.QWidget.showMinimized()",
    "qt.gui.QWidget.showNormal()",
    "qt.gui.QWidget.update()",
    "qt.gui.QWidget.updateMicroFocus()",
    "qt.gui.QWindowsStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption, QWidget = null) const",
    "qt.gui.QWindowsStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption) const",
    "qt.gui.QWizard.back()",
    "qt.gui.QWizard.currentIdChanged(int)",
    "qt.gui.QWizard.customButtonClicked(int)",
    "qt.gui.QWizard.helpRequested()",
    "qt.gui.QWizard.next()",
    "qt.gui.QWizard.pageAdded(int)",
    "qt.gui.QWizard.pageRemoved(int)",
    "qt.gui.QWizard.restart()",
    "qt.gui.QWizardPage.completeChanged()",
    "qt.gui.QWorkspace.activateNextWindow()",
    "qt.gui.QWorkspace.activatePreviousWindow()",
    "qt.gui.QWorkspace.arrangeIcons()",
    "qt.gui.QWorkspace.cascade()",
    "qt.gui.QWorkspace.closeActiveWindow()",
    "qt.gui.QWorkspace.closeAllWindows()",
    "qt.gui.QWorkspace.setActiveWindow(QWidget)",
    "qt.gui.QWorkspace.tile()",
    "qt.gui.QWorkspace.windowActivated(QWidget)",
};

static const char *javaObjectNames[] = {
    "qt.gui.QAbstractButton.animateClick(int = 100)",
    "qt.gui.QAbstractButton.animateClick()",
    "qt.gui.QAbstractButton.click()",
    "qt.gui.QAbstractButton.clicked",
    "qt.gui.QAbstractButton.clicked",
    "qt.gui.QAbstractButton.pressed",
    "qt.gui.QAbstractButton.released",
    "qt.gui.QAbstractButton.setChecked(bool)",
    "qt.gui.QAbstractButton.setIconSize(const(QSize))",
    "qt.gui.QAbstractButton.toggle()",
    "qt.gui.QAbstractButton.toggled",
    "qt.gui.QAbstractItemDelegate.closeEditor",
    "qt.gui.QAbstractItemDelegate.closeEditor",
    "qt.gui.QAbstractItemDelegate.commitData",
    "qt.gui.QAbstractItemDelegate.helpEvent(QHelpEvent, QAbstractItemView, const(QStyleOptionViewItem), const(QModelIndex))",
    "qt.gui.QAbstractItemDelegate.sizeHintChanged",
    "qt.gui.QAbstractItemView.activated",
    "qt.gui.QAbstractItemView.clearSelection()",
    "qt.gui.QAbstractItemView.clicked",
    "qt.gui.QAbstractItemView.closeEditor(QWidget, QAbstractItemDelegate.EndEditHint)",
    "qt.gui.QAbstractItemView.commitData(QWidget)",
    "qt.gui.QAbstractItemView.currentChanged(const(QModelIndex), const(QModelIndex))",
    "qt.gui.QAbstractItemView.dataChanged(const(QModelIndex), const(QModelIndex))",
    "qt.gui.QAbstractItemView.doItemsLayout()",
    "qt.gui.QAbstractItemView.doubleClicked",
    "qt.gui.QAbstractItemView.edit(const(QModelIndex))",
    "qt.gui.QAbstractItemView.editorDestroyed(QObject)",
    "qt.gui.QAbstractItemView.entered",
    "qt.gui.QAbstractItemView.horizontalScrollbarAction(int)",
    "qt.gui.QAbstractItemView.horizontalScrollbarValueChanged(int)",
    "qt.gui.QAbstractItemView.pressed",
    "qt.gui.QAbstractItemView.reset()",
    "qt.gui.QAbstractItemView.rowsAboutToBeRemoved(const(QModelIndex), int, int)",
    "qt.gui.QAbstractItemView.rowsInserted(const(QModelIndex), int, int)",
    "qt.gui.QAbstractItemView.scrollToBottom()",
    "qt.gui.QAbstractItemView.scrollToTop()",
    "qt.gui.QAbstractItemView.selectAll()",
    "qt.gui.QAbstractItemView.selectionChanged(const(QItemSelection), const(QItemSelection))",
    "qt.gui.QAbstractItemView.setCurrentIndex(const(QModelIndex))",
    "qt.gui.QAbstractItemView.setRootIndex(const(QModelIndex))",
    "qt.gui.QAbstractItemView.update(const(QModelIndex))",
    "qt.gui.QAbstractItemView.updateEditorData()",
    "qt.gui.QAbstractItemView.updateEditorGeometries()",
    "qt.gui.QAbstractItemView.updateGeometries()",
    "qt.gui.QAbstractItemView.verticalScrollbarAction(int)",
    "qt.gui.QAbstractItemView.verticalScrollbarValueChanged(int)",
    "qt.gui.QAbstractItemView.viewportEntered",
    "qt.gui.QAbstractScrollArea.setupViewport(QWidget)",
    "qt.gui.QAbstractSlider.actionTriggered",
    "qt.gui.QAbstractSlider.rangeChanged",
    "qt.gui.QAbstractSlider.setOrientation(Qt.Orientation)",
    "qt.gui.QAbstractSlider.setValue(int)",
    "qt.gui.QAbstractSlider.sliderMoved",
    "qt.gui.QAbstractSlider.sliderPressed",
    "qt.gui.QAbstractSlider.sliderReleased",
    "qt.gui.QAbstractSlider.valueChanged",
    "qt.gui.QAbstractSpinBox.clear()",
    "qt.gui.QAbstractSpinBox.editingFinished",
    "qt.gui.QAbstractSpinBox.selectAll()",
    "qt.gui.QAbstractSpinBox.stepDown()",
    "qt.gui.QAbstractSpinBox.stepUp()",
    "qt.gui.QAbstractTextDocumentLayout.documentSizeChanged",
    "qt.gui.QAbstractTextDocumentLayout.pageCountChanged",
    "qt.gui.QAbstractTextDocumentLayout.update",
    "qt.gui.QAbstractTextDocumentLayout.update",
    "qt.gui.QAbstractTextDocumentLayout.updateBlock",
    "qt.gui.QAction.changed",
    "qt.gui.QAction.hover()",
    "qt.gui.QAction.hovered",
    "qt.gui.QAction.setChecked(bool)",
    "qt.gui.QAction.setDisabled(bool)",
    "qt.gui.QAction.setEnabled(bool)",
    "qt.gui.QAction.setVisible(bool)",
    "qt.gui.QAction.toggle()",
    "qt.gui.QAction.toggled",
    "qt.gui.QAction.trigger()",
    "qt.gui.QAction.triggered",
    "qt.gui.QAction.triggered",
    "qt.gui.QActionGroup.hovered",
    "qt.gui.QActionGroup.setDisabled(bool)",
    "qt.gui.QActionGroup.setEnabled(bool)",
    "qt.gui.QActionGroup.setExclusive(bool)",
    "qt.gui.QActionGroup.setVisible(bool)",
    "qt.gui.QActionGroup.triggered",
    "qt.gui.QApplication.aboutQt()",
    "qt.gui.QApplication.autoSipEnabled() const",
    "qt.gui.QApplication.closeAllWindows()",
    "qt.gui.QApplication.commitDataRequest",
    "qt.gui.QApplication.focusChanged",
    "qt.gui.QApplication.fontDatabaseChanged",
    "qt.gui.QApplication.lastWindowClosed",
    "qt.gui.QApplication.saveStateRequest",
    "qt.gui.QApplication.setAutoSipEnabled(bool)",
    "qt.gui.QApplication.setStyleSheet(string)",
    "qt.gui.QButtonGroup.buttonClicked",
    "qt.gui.QButtonGroup.buttonClicked",
    "qt.gui.QButtonGroup.buttonPressed",
    "qt.gui.QButtonGroup.buttonPressed",
    "qt.gui.QButtonGroup.buttonReleased",
    "qt.gui.QButtonGroup.buttonReleased",
    "qt.gui.QCDEStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption = null, QWidget = null) const",
    "qt.gui.QCDEStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption = null) const",
    "qt.gui.QCDEStyle.standardIconImplementation(QStyle.StandardPixmap) const",
    "qt.gui.QCalendarWidget.activated",
    "qt.gui.QCalendarWidget.clicked",
    "qt.gui.QCalendarWidget.currentPageChanged",
    "qt.gui.QCalendarWidget.selectionChanged",
    "qt.gui.QCalendarWidget.setCurrentPage(int, int)",
    "qt.gui.QCalendarWidget.setDateRange(const(QDate), const(QDate))",
    "qt.gui.QCalendarWidget.setGridVisible(bool)",
    "qt.gui.QCalendarWidget.setNavigationBarVisible(bool)",
    "qt.gui.QCalendarWidget.setSelectedDate(const(QDate))",
    "qt.gui.QCalendarWidget.showNextMonth()",
    "qt.gui.QCalendarWidget.showNextYear()",
    "qt.gui.QCalendarWidget.showPreviousMonth()",
    "qt.gui.QCalendarWidget.showPreviousYear()",
    "qt.gui.QCalendarWidget.showSelectedDate()",
    "qt.gui.QCalendarWidget.showToday()",
    "qt.gui.QCheckBox.stateChanged",
    "qt.gui.QCleanlooksStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption, QWidget = null) const",
    "qt.gui.QCleanlooksStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption) const",
    "qt.gui.QClipboard.changed",
    "qt.gui.QClipboard.dataChanged",
    "qt.gui.QClipboard.findBufferChanged",
    "qt.gui.QClipboard.ownerDestroyed()",
    "qt.gui.QClipboard.selectionChanged",
    "qt.gui.QColorDialog.colorSelected",
    "qt.gui.QColorDialog.currentColorChanged",
    "qt.gui.QColumnView.updatePreviewWidget",
    "qt.gui.QComboBox.activated",
    "qt.gui.QComboBox.activated",
    "qt.gui.QComboBox.clear()",
    "qt.gui.QComboBox.clearEditText()",
    "qt.gui.QComboBox.currentIndexChanged",
    "qt.gui.QComboBox.currentIndexChanged",
    "qt.gui.QComboBox.editTextChanged",
    "qt.gui.QComboBox.highlighted",
    "qt.gui.QComboBox.highlighted",
    "qt.gui.QComboBox.setCurrentIndex(int)",
    "qt.gui.QComboBox.setEditText(string)",
    "qt.gui.QCommonStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption = null, QWidget = null) const",
    "qt.gui.QCommonStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption = null) const",
    "qt.gui.QCommonStyle.standardIconImplementation(QStyle.StandardPixmap) const",
    "qt.gui.QCompleter.activated",
    "qt.gui.QCompleter.activated",
    "qt.gui.QCompleter.complete(const(QRect) = QRect())",
    "qt.gui.QCompleter.complete()",
    "qt.gui.QCompleter.highlighted",
    "qt.gui.QCompleter.highlighted",
    "qt.gui.QCompleter.setCompletionPrefix(string)",
    "qt.gui.QCompleter.setWrapAround(bool)",
    "qt.gui.QDataWidgetMapper.currentIndexChanged",
    "qt.gui.QDataWidgetMapper.revert()",
    "qt.gui.QDataWidgetMapper.setCurrentIndex(int)",
    "qt.gui.QDataWidgetMapper.setCurrentModelIndex(const(QModelIndex))",
    "qt.gui.QDataWidgetMapper.submit()",
    "qt.gui.QDataWidgetMapper.toFirst()",
    "qt.gui.QDataWidgetMapper.toLast()",
    "qt.gui.QDataWidgetMapper.toNext()",
    "qt.gui.QDataWidgetMapper.toPrevious()",
    "qt.gui.QDateTimeEdit.dateChanged",
    "qt.gui.QDateTimeEdit.dateTimeChanged",
    "qt.gui.QDateTimeEdit.setDate(const(QDate))",
    "qt.gui.QDateTimeEdit.setDateTime(const(QDateTime))",
    "qt.gui.QDateTimeEdit.setTime(const(QTime))",
    "qt.gui.QDateTimeEdit.timeChanged",
    "qt.gui.QDesktopWidget.resized",
    "qt.gui.QDesktopWidget.screenCountChanged",
    "qt.gui.QDesktopWidget.workAreaResized",
    "qt.gui.QDial.setNotchesVisible(bool)",
    "qt.gui.QDial.setWrapping(bool)",
    "qt.gui.QDialog.accept()",
    "qt.gui.QDialog.accepted",
    "qt.gui.QDialog.done(int)",
    "qt.gui.QDialog.exec()",
    "qt.gui.QDialog.finished",
    "qt.gui.QDialog.open()",
    "qt.gui.QDialog.reject()",
    "qt.gui.QDialog.rejected",
    "qt.gui.QDialog.showExtension(bool)",
    "qt.gui.QDialogButtonBox.accepted",
    "qt.gui.QDialogButtonBox.clicked",
    "qt.gui.QDialogButtonBox.helpRequested",
    "qt.gui.QDialogButtonBox.rejected",
    "qt.gui.QDirModel.refresh(const(QModelIndex) = QModelIndex())",
    "qt.gui.QDirModel.refresh()",
    "qt.gui.QDockWidget.allowedAreasChanged",
    "qt.gui.QDockWidget.dockLocationChanged",
    "qt.gui.QDockWidget.featuresChanged",
    "qt.gui.QDockWidget.topLevelChanged",
    "qt.gui.QDockWidget.visibilityChanged",
    "qt.gui.QDoubleSpinBox.setValue(double)",
    "qt.gui.QDoubleSpinBox.valueChanged",
    "qt.gui.QDoubleSpinBox.valueChanged",
    "qt.gui.QDrag.actionChanged",
    "qt.gui.QDrag.targetChanged",
    "qt.gui.QErrorMessage.showMessage(string)",
    "qt.gui.QErrorMessage.showMessage(string, string)",
    "qt.gui.QFileDialog.currentChanged",
    "qt.gui.QFileDialog.directoryEntered",
    "qt.gui.QFileDialog.fileSelected",
    "qt.gui.QFileDialog.filesSelected",
    "qt.gui.QFileDialog.filterSelected",
    "qt.gui.QFileSystemModel.directoryLoaded",
    "qt.gui.QFileSystemModel.fileRenamed",
    "qt.gui.QFileSystemModel.rootPathChanged",
    "qt.gui.QFontComboBox.currentFontChanged",
    "qt.gui.QFontComboBox.setCurrentFont(const(QFont))",
    "qt.gui.QFontDialog.currentFontChanged",
    "qt.gui.QFontDialog.fontSelected",
    "qt.gui.QGraphicsItemAnimation.reset()",
    "qt.gui.QGraphicsItemAnimation.setStep(double)",
    "qt.gui.QGraphicsObject.childrenChanged",
    "qt.gui.QGraphicsObject.enabledChanged",
    "qt.gui.QGraphicsObject.heightChanged",
    "qt.gui.QGraphicsObject.opacityChanged",
    "qt.gui.QGraphicsObject.parentChanged",
    "qt.gui.QGraphicsObject.rotationChanged",
    "qt.gui.QGraphicsObject.scaleChanged",
    "qt.gui.QGraphicsObject.updateMicroFocus()",
    "qt.gui.QGraphicsObject.visibleChanged",
    "qt.gui.QGraphicsObject.widthChanged",
    "qt.gui.QGraphicsObject.xChanged",
    "qt.gui.QGraphicsObject.yChanged",
    "qt.gui.QGraphicsObject.zChanged",
    "qt.gui.QGraphicsProxyWidget.newProxyWidget(QWidget)",
    "qt.gui.QGraphicsScene.advance()",
    "qt.gui.QGraphicsScene.changed",
    "qt.gui.QGraphicsScene.clear()",
    "qt.gui.QGraphicsScene.clearSelection()",
    "qt.gui.QGraphicsScene.focusNextPrevChild(bool)",
    "qt.gui.QGraphicsScene.invalidate(const(QRectF) = QRectF(), int = 65535)",
    "qt.gui.QGraphicsScene.invalidate(const(QRectF) = QRectF())",
    "qt.gui.QGraphicsScene.invalidate()",
    "qt.gui.QGraphicsScene.sceneRectChanged",
    "qt.gui.QGraphicsScene.selectionChanged",
    "qt.gui.QGraphicsScene.update(const(QRectF) = QRectF())",
    "qt.gui.QGraphicsScene.update()",
    "qt.gui.QGraphicsTextItem.linkActivated",
    "qt.gui.QGraphicsTextItem.linkHovered",
    "qt.gui.QGraphicsView.invalidateScene(const(QRectF) = QRectF(), int = 65535)",
    "qt.gui.QGraphicsView.invalidateScene(const(QRectF) = QRectF())",
    "qt.gui.QGraphicsView.invalidateScene()",
    "qt.gui.QGraphicsView.setupViewport(QWidget)",
    "qt.gui.QGraphicsView.updateScene(QList!(QRectF))",
    "qt.gui.QGraphicsView.updateSceneRect(const(QRectF))",
    "qt.gui.QGraphicsWidget.close()",
    "qt.gui.QGraphicsWidget.geometryChanged",
    "qt.gui.QGraphicsWidget.layoutChanged",
    "qt.gui.QGroupBox.clicked",
    "qt.gui.QGroupBox.clicked",
    "qt.gui.QGroupBox.setChecked(bool)",
    "qt.gui.QGroupBox.toggled",
    "qt.gui.QHeaderView.geometriesChanged",
    "qt.gui.QHeaderView.headerDataChanged(Qt.Orientation, int, int)",
    "qt.gui.QHeaderView.resizeSections()",
    "qt.gui.QHeaderView.sectionAutoResize",
    "qt.gui.QHeaderView.sectionClicked",
    "qt.gui.QHeaderView.sectionCountChanged",
    "qt.gui.QHeaderView.sectionDoubleClicked",
    "qt.gui.QHeaderView.sectionEntered",
    "qt.gui.QHeaderView.sectionHandleDoubleClicked",
    "qt.gui.QHeaderView.sectionMoved",
    "qt.gui.QHeaderView.sectionPressed",
    "qt.gui.QHeaderView.sectionResized",
    "qt.gui.QHeaderView.sectionsAboutToBeRemoved(const(QModelIndex), int, int)",
    "qt.gui.QHeaderView.sectionsInserted(const(QModelIndex), int, int)",
    "qt.gui.QHeaderView.setOffset(int)",
    "qt.gui.QHeaderView.setOffsetToLastSection()",
    "qt.gui.QHeaderView.setOffsetToSectionPosition(int)",
    "qt.gui.QHeaderView.sortIndicatorChanged",
    "qt.gui.QHeaderView.updateSection(int)",
    "qt.gui.QInputDialog.doubleValueChanged",
    "qt.gui.QInputDialog.doubleValueSelected",
    "qt.gui.QInputDialog.intValueChanged",
    "qt.gui.QInputDialog.intValueSelected",
    "qt.gui.QInputDialog.textValueChanged",
    "qt.gui.QInputDialog.textValueSelected",
    "qt.gui.QItemSelectionModel.clear()",
    "qt.gui.QItemSelectionModel.clearSelection()",
    "qt.gui.QItemSelectionModel.currentChanged",
    "qt.gui.QItemSelectionModel.currentColumnChanged",
    "qt.gui.QItemSelectionModel.currentRowChanged",
    "qt.gui.QItemSelectionModel.reset()",
    "qt.gui.QItemSelectionModel.select(const(QItemSelection), int)",
    "qt.gui.QItemSelectionModel.select(const(QModelIndex), int)",
    "qt.gui.QItemSelectionModel.selectionChanged",
    "qt.gui.QItemSelectionModel.setCurrentIndex(const(QModelIndex), int)",
    "qt.gui.QLCDNumber.display(string)",
    "qt.gui.QLCDNumber.display(double)",
    "qt.gui.QLCDNumber.display(int)",
    "qt.gui.QLCDNumber.overflow",
    "qt.gui.QLCDNumber.setBinMode()",
    "qt.gui.QLCDNumber.setDecMode()",
    "qt.gui.QLCDNumber.setHexMode()",
    "qt.gui.QLCDNumber.setOctMode()",
    "qt.gui.QLCDNumber.setSmallDecimalPoint(bool)",
    "qt.gui.QLabel.clear()",
    "qt.gui.QLabel.linkActivated",
    "qt.gui.QLabel.linkHovered",
    "qt.gui.QLabel.setMovie(QMovie)",
    "qt.gui.QLabel.setNum(double)",
    "qt.gui.QLabel.setNum(int)",
    "qt.gui.QLabel.setPicture(const(QPicture))",
    "qt.gui.QLabel.setPixmap(const(QPixmap))",
    "qt.gui.QLabel.setText(string)",
    "qt.gui.QLineEdit.clear()",
    "qt.gui.QLineEdit.copy() const",
    "qt.gui.QLineEdit.cursorPositionChanged",
    "qt.gui.QLineEdit.cut()",
    "qt.gui.QLineEdit.editingFinished",
    "qt.gui.QLineEdit.paste()",
    "qt.gui.QLineEdit.redo()",
    "qt.gui.QLineEdit.returnPressed",
    "qt.gui.QLineEdit.selectAll()",
    "qt.gui.QLineEdit.selectionChanged",
    "qt.gui.QLineEdit.setText(string)",
    "qt.gui.QLineEdit.textChanged",
    "qt.gui.QLineEdit.textEdited",
    "qt.gui.QLineEdit.undo()",
    "qt.gui.QListView.indexesMoved",
    "qt.gui.QListWidget.clear()",
    "qt.gui.QListWidget.currentItemChanged",
    "qt.gui.QListWidget.currentRowChanged",
    "qt.gui.QListWidget.currentTextChanged",
    "qt.gui.QListWidget.itemActivated",
    "qt.gui.QListWidget.itemChanged",
    "qt.gui.QListWidget.itemClicked",
    "qt.gui.QListWidget.itemDoubleClicked",
    "qt.gui.QListWidget.itemEntered",
    "qt.gui.QListWidget.itemPressed",
    "qt.gui.QListWidget.itemSelectionChanged",
    "qt.gui.QListWidget.scrollToItem(QListWidgetItem, QAbstractItemView.ScrollHint = QAbstractItemView.ScrollHint.EnsureVisible)",
    "qt.gui.QListWidget.scrollToItem(QListWidgetItem)",
    "qt.gui.QMainWindow.iconSizeChanged",
    "qt.gui.QMainWindow.setAnimated(bool)",
    "qt.gui.QMainWindow.setDockNestingEnabled(bool)",
    "qt.gui.QMainWindow.toolButtonStyleChanged",
    "qt.gui.QMdiArea.activateNextSubWindow()",
    "qt.gui.QMdiArea.activatePreviousSubWindow()",
    "qt.gui.QMdiArea.cascadeSubWindows()",
    "qt.gui.QMdiArea.closeActiveSubWindow()",
    "qt.gui.QMdiArea.closeAllSubWindows()",
    "qt.gui.QMdiArea.setActiveSubWindow(QMdiSubWindow)",
    "qt.gui.QMdiArea.setupViewport(QWidget)",
    "qt.gui.QMdiArea.subWindowActivated",
    "qt.gui.QMdiArea.tileSubWindows()",
    "qt.gui.QMdiSubWindow.aboutToActivate",
    "qt.gui.QMdiSubWindow.showShaded()",
    "qt.gui.QMdiSubWindow.showSystemMenu()",
    "qt.gui.QMdiSubWindow.windowStateChanged",
    "qt.gui.QMenu.aboutToHide",
    "qt.gui.QMenu.aboutToShow",
    "qt.gui.QMenu.hovered",
    "qt.gui.QMenu.internalDelayedPopup()",
    "qt.gui.QMenu.internalSetSloppyAction()",
    "qt.gui.QMenu.triggered",
    "qt.gui.QMenuBar.hovered",
    "qt.gui.QMenuBar.setVisible(bool)",
    "qt.gui.QMenuBar.triggered",
    "qt.gui.QMessageBox.buttonClicked",
    "qt.gui.QMotifStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption = null, QWidget = null) const",
    "qt.gui.QMotifStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption = null) const",
    "qt.gui.QMotifStyle.standardIconImplementation(QStyle.StandardPixmap) const",
    "qt.gui.QMovie.error",
    "qt.gui.QMovie.finished",
    "qt.gui.QMovie.frameChanged",
    "qt.gui.QMovie.jumpToNextFrame()",
    "qt.gui.QMovie.resized",
    "qt.gui.QMovie.setPaused(bool)",
    "qt.gui.QMovie.setSpeed(int)",
    "qt.gui.QMovie.start()",
    "qt.gui.QMovie.started",
    "qt.gui.QMovie.stateChanged",
    "qt.gui.QMovie.stop()",
    "qt.gui.QMovie.updated",
    "qt.gui.QPlainTextEdit.appendHtml(string)",
    "qt.gui.QPlainTextEdit.appendPlainText(string)",
    "qt.gui.QPlainTextEdit.blockCountChanged",
    "qt.gui.QPlainTextEdit.centerCursor()",
    "qt.gui.QPlainTextEdit.clear()",
    "qt.gui.QPlainTextEdit.copy()",
    "qt.gui.QPlainTextEdit.copyAvailable",
    "qt.gui.QPlainTextEdit.cursorPositionChanged",
    "qt.gui.QPlainTextEdit.cut()",
    "qt.gui.QPlainTextEdit.insertPlainText(string)",
    "qt.gui.QPlainTextEdit.modificationChanged",
    "qt.gui.QPlainTextEdit.paste()",
    "qt.gui.QPlainTextEdit.redo()",
    "qt.gui.QPlainTextEdit.redoAvailable",
    "qt.gui.QPlainTextEdit.selectAll()",
    "qt.gui.QPlainTextEdit.selectionChanged",
    "qt.gui.QPlainTextEdit.setPlainText(string)",
    "qt.gui.QPlainTextEdit.textChanged",
    "qt.gui.QPlainTextEdit.undo()",
    "qt.gui.QPlainTextEdit.undoAvailable",
    "qt.gui.QPlainTextEdit.updateRequest",
    "qt.gui.QPlastiqueStyle.layoutSpacingImplementation(QSizePolicy.ControlType, QSizePolicy.ControlType, Qt.Orientation, QStyleOption = null, QWidget = null) const",
    "qt.gui.QPlastiqueStyle.layoutSpacingImplementation(QSizePolicy.ControlType, QSizePolicy.ControlType, Qt.Orientation, QStyleOption = null) const",
    "qt.gui.QPlastiqueStyle.layoutSpacingImplementation(QSizePolicy.ControlType, QSizePolicy.ControlType, Qt.Orientation) const",
    "qt.gui.QPlastiqueStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption = null, QWidget = null) const",
    "qt.gui.QPlastiqueStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption = null) const",
    "qt.gui.QPlastiqueStyle.standardIconImplementation(QStyle.StandardPixmap) const",
    "qt.gui.QPrintDialog.accepted",
    "qt.gui.QPrintPreviewDialog.paintRequested",
    "qt.gui.QPrintPreviewWidget.fitInView()",
    "qt.gui.QPrintPreviewWidget.fitToWidth()",
    "qt.gui.QPrintPreviewWidget.paintRequested",
    "qt.gui.QPrintPreviewWidget.previewChanged",
    "qt.gui.QPrintPreviewWidget.print()",
    "qt.gui.QPrintPreviewWidget.setAllPagesViewMode()",
    "qt.gui.QPrintPreviewWidget.setCurrentPage(int)",
    "qt.gui.QPrintPreviewWidget.setFacingPagesViewMode()",
    "qt.gui.QPrintPreviewWidget.setLandscapeOrientation()",
    "qt.gui.QPrintPreviewWidget.setOrientation(QPrinter.Orientation)",
    "qt.gui.QPrintPreviewWidget.setPortraitOrientation()",
    "qt.gui.QPrintPreviewWidget.setSinglePageViewMode()",
    "qt.gui.QPrintPreviewWidget.setViewMode(QPrintPreviewWidget.ViewMode)",
    "qt.gui.QPrintPreviewWidget.setZoomFactor(double)",
    "qt.gui.QPrintPreviewWidget.setZoomMode(QPrintPreviewWidget.ZoomMode)",
    "qt.gui.QPrintPreviewWidget.updatePreview()",
    "qt.gui.QPrintPreviewWidget.zoomIn(double = 1.1)",
    "qt.gui.QPrintPreviewWidget.zoomIn()",
    "qt.gui.QPrintPreviewWidget.zoomOut(double = 1.1)",
    "qt.gui.QPrintPreviewWidget.zoomOut()",
    "qt.gui.QProgressBar.reset()",
    "qt.gui.QProgressBar.setMaximum(int)",
    "qt.gui.QProgressBar.setMinimum(int)",
    "qt.gui.QProgressBar.setOrientation(Qt.Orientation)",
    "qt.gui.QProgressBar.setRange(int, int)",
    "qt.gui.QProgressBar.setValue(int)",
    "qt.gui.QProgressBar.valueChanged",
    "qt.gui.QProgressDialog.cancel()",
    "qt.gui.QProgressDialog.canceled",
    "qt.gui.QProgressDialog.forceShow()",
    "qt.gui.QProgressDialog.reset()",
    "qt.gui.QProgressDialog.setCancelButtonText(string)",
    "qt.gui.QProgressDialog.setLabelText(string)",
    "qt.gui.QProgressDialog.setMaximum(int)",
    "qt.gui.QProgressDialog.setMinimum(int)",
    "qt.gui.QProgressDialog.setMinimumDuration(int)",
    "qt.gui.QProgressDialog.setRange(int, int)",
    "qt.gui.QProgressDialog.setValue(int)",
    "qt.gui.QPushButton.showMenu()",
    "qt.gui.QShortcut.activated",
    "qt.gui.QShortcut.activatedAmbiguously",
    "qt.gui.QSortFilterProxyModel.clear()",
    "qt.gui.QSortFilterProxyModel.invalidate()",
    "qt.gui.QSortFilterProxyModel.setFilterFixedString(string)",
    "qt.gui.QSortFilterProxyModel.setFilterRegExp(string)",
    "qt.gui.QSortFilterProxyModel.setFilterWildcard(string)",
    "qt.gui.QSound.play()",
    "qt.gui.QSound.stop()",
    "qt.gui.QSpinBox.setValue(int)",
    "qt.gui.QSpinBox.valueChanged",
    "qt.gui.QSpinBox.valueChanged",
    "qt.gui.QSplashScreen.clearMessage()",
    "qt.gui.QSplashScreen.messageChanged",
    "qt.gui.QSplashScreen.showMessage(string, int = 1, const(QColor) = QColor.Black)",
    "qt.gui.QSplashScreen.showMessage(string, int = 1)",
    "qt.gui.QSplashScreen.showMessage(string)",
    "qt.gui.QSplitter.splitterMoved",
    "qt.gui.QStackedLayout.currentChanged",
    "qt.gui.QStackedLayout.setCurrentIndex(int)",
    "qt.gui.QStackedLayout.setCurrentWidget(QWidget)",
    "qt.gui.QStackedLayout.widgetRemoved",
    "qt.gui.QStackedWidget.currentChanged",
    "qt.gui.QStackedWidget.setCurrentIndex(int)",
    "qt.gui.QStackedWidget.setCurrentWidget(QWidget)",
    "qt.gui.QStackedWidget.widgetRemoved",
    "qt.gui.QStandardItemModel.itemChanged",
    "qt.gui.QStatusBar.clearMessage()",
    "qt.gui.QStatusBar.messageChanged",
    "qt.gui.QStatusBar.showMessage(string, int = 0)",
    "qt.gui.QStatusBar.showMessage(string)",
    "qt.gui.QStyle.layoutSpacingImplementation(QSizePolicy.ControlType, QSizePolicy.ControlType, Qt.Orientation, QStyleOption = null, QWidget = null) const",
    "qt.gui.QStyle.layoutSpacingImplementation(QSizePolicy.ControlType, QSizePolicy.ControlType, Qt.Orientation, QStyleOption = null) const",
    "qt.gui.QStyle.layoutSpacingImplementation(QSizePolicy.ControlType, QSizePolicy.ControlType, Qt.Orientation) const",
    "qt.gui.QStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption = null, QWidget = null) const",
    "qt.gui.QStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption = null) const",
    "qt.gui.QStyle.standardIconImplementation(QStyle.StandardPixmap) const",
    "qt.gui.QSyntaxHighlighter.rehighlight()",
    "qt.gui.QSyntaxHighlighter.rehighlightBlock(const(QTextBlock))",
    "qt.gui.QSystemTrayIcon.activated",
    "qt.gui.QSystemTrayIcon.hide()",
    "qt.gui.QSystemTrayIcon.messageClicked",
    "qt.gui.QSystemTrayIcon.setVisible(bool)",
    "qt.gui.QSystemTrayIcon.show()",
    "qt.gui.QTabBar.currentChanged",
    "qt.gui.QTabBar.setCurrentIndex(int)",
    "qt.gui.QTabBar.tabCloseRequested",
    "qt.gui.QTabBar.tabMoved",
    "qt.gui.QTabWidget.currentChanged",
    "qt.gui.QTabWidget.setCurrentIndex(int)",
    "qt.gui.QTabWidget.setCurrentWidget(QWidget)",
    "qt.gui.QTabWidget.tabCloseRequested",
    "qt.gui.QTableView.columnCountChanged(int, int)",
    "qt.gui.QTableView.columnMoved(int, int, int)",
    "qt.gui.QTableView.columnResized(int, int, int)",
    "qt.gui.QTableView.hideColumn(int)",
    "qt.gui.QTableView.hideRow(int)",
    "qt.gui.QTableView.resizeColumnToContents(int)",
    "qt.gui.QTableView.resizeColumnsToContents()",
    "qt.gui.QTableView.resizeRowToContents(int)",
    "qt.gui.QTableView.resizeRowsToContents()",
    "qt.gui.QTableView.rowCountChanged(int, int)",
    "qt.gui.QTableView.rowMoved(int, int, int)",
    "qt.gui.QTableView.rowResized(int, int, int)",
    "qt.gui.QTableView.selectColumn(int)",
    "qt.gui.QTableView.selectRow(int)",
    "qt.gui.QTableView.setShowGrid(bool)",
    "qt.gui.QTableView.showColumn(int)",
    "qt.gui.QTableView.showRow(int)",
    "qt.gui.QTableView.sortByColumn(int)",
    "qt.gui.QTableWidget.cellActivated",
    "qt.gui.QTableWidget.cellChanged",
    "qt.gui.QTableWidget.cellClicked",
    "qt.gui.QTableWidget.cellDoubleClicked",
    "qt.gui.QTableWidget.cellEntered",
    "qt.gui.QTableWidget.cellPressed",
    "qt.gui.QTableWidget.clear()",
    "qt.gui.QTableWidget.clearContents()",
    "qt.gui.QTableWidget.currentCellChanged",
    "qt.gui.QTableWidget.currentItemChanged",
    "qt.gui.QTableWidget.insertColumn(int)",
    "qt.gui.QTableWidget.insertRow(int)",
    "qt.gui.QTableWidget.itemActivated",
    "qt.gui.QTableWidget.itemChanged",
    "qt.gui.QTableWidget.itemClicked",
    "qt.gui.QTableWidget.itemDoubleClicked",
    "qt.gui.QTableWidget.itemEntered",
    "qt.gui.QTableWidget.itemPressed",
    "qt.gui.QTableWidget.itemSelectionChanged",
    "qt.gui.QTableWidget.removeColumn(int)",
    "qt.gui.QTableWidget.removeRow(int)",
    "qt.gui.QTableWidget.scrollToItem(QTableWidgetItem, QAbstractItemView.ScrollHint = QAbstractItemView.ScrollHint.EnsureVisible)",
    "qt.gui.QTableWidget.scrollToItem(QTableWidgetItem)",
    "qt.gui.QTextBrowser.anchorClicked",
    "qt.gui.QTextBrowser.backward()",
    "qt.gui.QTextBrowser.backwardAvailable",
    "qt.gui.QTextBrowser.forward()",
    "qt.gui.QTextBrowser.forwardAvailable",
    "qt.gui.QTextBrowser.highlighted",
    "qt.gui.QTextBrowser.highlighted",
    "qt.gui.QTextBrowser.historyChanged",
    "qt.gui.QTextBrowser.home()",
    "qt.gui.QTextBrowser.reload()",
    "qt.gui.QTextBrowser.setSource(const(QUrl))",
    "qt.gui.QTextBrowser.sourceChanged",
    "qt.gui.QTextDocument.blockCountChanged",
    "qt.gui.QTextDocument.contentsChange",
    "qt.gui.QTextDocument.contentsChanged",
    "qt.gui.QTextDocument.cursorPositionChanged",
    "qt.gui.QTextDocument.documentLayoutChanged",
    "qt.gui.QTextDocument.modificationChanged",
    "qt.gui.QTextDocument.redo()",
    "qt.gui.QTextDocument.redoAvailable",
    "qt.gui.QTextDocument.setModified(bool = true)",
    "qt.gui.QTextDocument.setModified()",
    "qt.gui.QTextDocument.undo()",
    "qt.gui.QTextDocument.undoAvailable",
    "qt.gui.QTextDocument.undoCommandAdded",
    "qt.gui.QTextEdit.append(string)",
    "qt.gui.QTextEdit.clear()",
    "qt.gui.QTextEdit.copy()",
    "qt.gui.QTextEdit.copyAvailable",
    "qt.gui.QTextEdit.currentCharFormatChanged",
    "qt.gui.QTextEdit.cursorPositionChanged",
    "qt.gui.QTextEdit.cut()",
    "qt.gui.QTextEdit.insertHtml(string)",
    "qt.gui.QTextEdit.insertPlainText(string)",
    "qt.gui.QTextEdit.paste()",
    "qt.gui.QTextEdit.redo()",
    "qt.gui.QTextEdit.redoAvailable",
    "qt.gui.QTextEdit.scrollToAnchor(string)",
    "qt.gui.QTextEdit.selectAll()",
    "qt.gui.QTextEdit.selectionChanged",
    "qt.gui.QTextEdit.setAlignment(int)",
    "qt.gui.QTextEdit.setCurrentFont(const(QFont))",
    "qt.gui.QTextEdit.setFontFamily(string)",
    "qt.gui.QTextEdit.setFontItalic(bool)",
    "qt.gui.QTextEdit.setFontPointSize(double)",
    "qt.gui.QTextEdit.setFontUnderline(bool)",
    "qt.gui.QTextEdit.setFontWeight(int)",
    "qt.gui.QTextEdit.setHtml(string)",
    "qt.gui.QTextEdit.setPlainText(string)",
    "qt.gui.QTextEdit.setText(string)",
    "qt.gui.QTextEdit.setTextBackgroundColor(const(QColor))",
    "qt.gui.QTextEdit.setTextColor(const(QColor))",
    "qt.gui.QTextEdit.textChanged",
    "qt.gui.QTextEdit.undo()",
    "qt.gui.QTextEdit.undoAvailable",
    "qt.gui.QTextEdit.zoomIn(int = 1)",
    "qt.gui.QTextEdit.zoomIn()",
    "qt.gui.QTextEdit.zoomOut(int = 1)",
    "qt.gui.QTextEdit.zoomOut()",
    "qt.gui.QToolBar.actionTriggered",
    "qt.gui.QToolBar.allowedAreasChanged",
    "qt.gui.QToolBar.iconSizeChanged",
    "qt.gui.QToolBar.movableChanged",
    "qt.gui.QToolBar.orientationChanged",
    "qt.gui.QToolBar.setIconSize(const(QSize))",
    "qt.gui.QToolBar.setToolButtonStyle(Qt.ToolButtonStyle)",
    "qt.gui.QToolBar.toolButtonStyleChanged",
    "qt.gui.QToolBar.topLevelChanged",
    "qt.gui.QToolBar.visibilityChanged",
    "qt.gui.QToolBox.currentChanged",
    "qt.gui.QToolBox.setCurrentIndex(int)",
    "qt.gui.QToolBox.setCurrentWidget(QWidget)",
    "qt.gui.QToolButton.setDefaultAction(QAction)",
    "qt.gui.QToolButton.setToolButtonStyle(Qt.ToolButtonStyle)",
    "qt.gui.QToolButton.showMenu()",
    "qt.gui.QToolButton.triggered",
    "qt.gui.QTreeView.collapse(const(QModelIndex))",
    "qt.gui.QTreeView.collapseAll()",
    "qt.gui.QTreeView.collapsed",
    "qt.gui.QTreeView.columnCountChanged(int, int)",
    "qt.gui.QTreeView.columnMoved()",
    "qt.gui.QTreeView.columnResized(int, int, int)",
    "qt.gui.QTreeView.expand(const(QModelIndex))",
    "qt.gui.QTreeView.expandAll()",
    "qt.gui.QTreeView.expandToDepth(int)",
    "qt.gui.QTreeView.expanded",
    "qt.gui.QTreeView.hideColumn(int)",
    "qt.gui.QTreeView.reexpand()",
    "qt.gui.QTreeView.resizeColumnToContents(int)",
    "qt.gui.QTreeView.rowsRemoved(const(QModelIndex), int, int)",
    "qt.gui.QTreeView.showColumn(int)",
    "qt.gui.QTreeView.sortByColumn(int)",
    "qt.gui.QTreeWidget.clear()",
    "qt.gui.QTreeWidget.collapseItem(QTreeWidgetItem)",
    "qt.gui.QTreeWidget.currentItemChanged",
    "qt.gui.QTreeWidget.expandItem(QTreeWidgetItem)",
    "qt.gui.QTreeWidget.itemActivated",
    "qt.gui.QTreeWidget.itemChanged",
    "qt.gui.QTreeWidget.itemClicked",
    "qt.gui.QTreeWidget.itemCollapsed",
    "qt.gui.QTreeWidget.itemDoubleClicked",
    "qt.gui.QTreeWidget.itemEntered",
    "qt.gui.QTreeWidget.itemExpanded",
    "qt.gui.QTreeWidget.itemPressed",
    "qt.gui.QTreeWidget.itemSelectionChanged",
    "qt.gui.QTreeWidget.scrollToItem(QTreeWidgetItem, QAbstractItemView.ScrollHint = QAbstractItemView.ScrollHint.EnsureVisible)",
    "qt.gui.QTreeWidget.scrollToItem(QTreeWidgetItem)",
    "qt.gui.QUndoGroup.activeStackChanged",
    "qt.gui.QUndoGroup.canRedoChanged",
    "qt.gui.QUndoGroup.canUndoChanged",
    "qt.gui.QUndoGroup.cleanChanged",
    "qt.gui.QUndoGroup.indexChanged",
    "qt.gui.QUndoGroup.redo()",
    "qt.gui.QUndoGroup.redoTextChanged",
    "qt.gui.QUndoGroup.setActiveStack(QUndoStack)",
    "qt.gui.QUndoGroup.undo()",
    "qt.gui.QUndoGroup.undoTextChanged",
    "qt.gui.QUndoStack.canRedoChanged",
    "qt.gui.QUndoStack.canUndoChanged",
    "qt.gui.QUndoStack.cleanChanged",
    "qt.gui.QUndoStack.indexChanged",
    "qt.gui.QUndoStack.redo()",
    "qt.gui.QUndoStack.redoTextChanged",
    "qt.gui.QUndoStack.setActive(bool = true)",
    "qt.gui.QUndoStack.setActive()",
    "qt.gui.QUndoStack.setClean()",
    "qt.gui.QUndoStack.setIndex(int)",
    "qt.gui.QUndoStack.undo()",
    "qt.gui.QUndoStack.undoTextChanged",
    "qt.gui.QUndoView.setGroup(QUndoGroup)",
    "qt.gui.QUndoView.setStack(QUndoStack)",
    "qt.gui.QWidget.close()",
    "qt.gui.QWidget.customContextMenuRequested",
    "qt.gui.QWidget.hide()",
    "qt.gui.QWidget.lower()",
    "qt.gui.QWidget.raise()",
    "qt.gui.QWidget.repaint()",
    "qt.gui.QWidget.setDisabled(bool)",
    "qt.gui.QWidget.setEnabled(bool)",
    "qt.gui.QWidget.setFocus()",
    "qt.gui.QWidget.setHidden(bool)",
    "qt.gui.QWidget.setShown(bool)",
    "qt.gui.QWidget.setStyleSheet(string)",
    "qt.gui.QWidget.setVisible(bool)",
    "qt.gui.QWidget.setWindowModified(bool)",
    "qt.gui.QWidget.setWindowTitle(string)",
    "qt.gui.QWidget.show()",
    "qt.gui.QWidget.showFullScreen()",
    "qt.gui.QWidget.showMaximized()",
    "qt.gui.QWidget.showMinimized()",
    "qt.gui.QWidget.showNormal()",
    "qt.gui.QWidget.update()",
    "qt.gui.QWidget.updateMicroFocus()",
    "qt.gui.QWindowsStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption, QWidget = null) const",
    "qt.gui.QWindowsStyle.standardIconImplementation(QStyle.StandardPixmap, QStyleOption) const",
    "qt.gui.QWizard.back()",
    "qt.gui.QWizard.currentIdChanged",
    "qt.gui.QWizard.customButtonClicked",
    "qt.gui.QWizard.helpRequested",
    "qt.gui.QWizard.next()",
    "qt.gui.QWizard.pageAdded",
    "qt.gui.QWizard.pageRemoved",
    "qt.gui.QWizard.restart()",
    "qt.gui.QWizardPage.completeChanged",
    "qt.gui.QWorkspace.activateNextWindow()",
    "qt.gui.QWorkspace.activatePreviousWindow()",
    "qt.gui.QWorkspace.arrangeIcons()",
    "qt.gui.QWorkspace.cascade()",
    "qt.gui.QWorkspace.closeActiveWindow()",
    "qt.gui.QWorkspace.closeAllWindows()",
    "qt.gui.QWorkspace.setActiveWindow(QWidget)",
    "qt.gui.QWorkspace.tile()",
    "qt.gui.QWorkspace.windowActivated",
};

static const char *javaSignatures[] = {
    "(I)V",
    "()V",
    "()V",
    "(Lbool;)V",
    "(Lbool;)V",
    "()V",
    "()V",
    "(Lbool;)V",
    "(Lqt/core/QSize;)V",
    "()V",
    "(Lbool;)V",
    "(Lqt/gui/QWidget;Lqt/gui/QAbstractItemDelegate$EndEditHint;)V",
    "(Lqt/gui/QWidget;Lqt/gui/QAbstractItemDelegate$EndEditHint;)V",
    "(Lqt/gui/QWidget;)V",
    "(Lqt/gui/QHelpEvent;Lqt/gui/QAbstractItemView;Lqt/gui/QStyleOptionViewItem;Lqt/core/QModelIndex;)Lbool;",
    "(Lqt/core/QModelIndex;)V",
    "(Lqt/core/QModelIndex;)V",
    "()V",
    "(Lqt/core/QModelIndex;)V",
    "(Lqt/gui/QWidget;Lqt/gui/QAbstractItemDelegate$EndEditHint;)V",
    "(Lqt/gui/QWidget;)V",
    "(Lqt/core/QModelIndex;Lqt/core/QModelIndex;)V",
    "(Lqt/core/QModelIndex;Lqt/core/QModelIndex;)V",
    "()V",
    "(Lqt/core/QModelIndex;)V",
    "(Lqt/core/QModelIndex;)V",
    "(Lqt/core/QObject;)V",
    "(Lqt/core/QModelIndex;)V",
    "(I)V",
    "(I)V",
    "(Lqt/core/QModelIndex;)V",
    "()V",
    "(Lqt/core/QModelIndex;II)V",
    "(Lqt/core/QModelIndex;II)V",
    "()V",
    "()V",
    "()V",
    "(Lqt/gui/QItemSelection;Lqt/gui/QItemSelection;)V",
    "(Lqt/core/QModelIndex;)V",
    "(Lqt/core/QModelIndex;)V",
    "(Lqt/core/QModelIndex;)V",
    "()V",
    "()V",
    "()V",
    "(I)V",
    "(I)V",
    "()V",
    "(Lqt/gui/QWidget;)V",
    "(I)V",
    "(II)V",
    "(Lqt/core/Qt$Orientation;)V",
    "(I)V",
    "(I)V",
    "()V",
    "()V",
    "(I)V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "(Lqt/core/QSizeF;)V",
    "(I)V",
    "(Lqt/core/QRectF;)V",
    "(Lqt/core/QRectF;)V",
    "(Lqt/gui/QTextBlock;)V",
    "()V",
    "()V",
    "()V",
    "(Lbool;)V",
    "(Lbool;)V",
    "(Lbool;)V",
    "(Lbool;)V",
    "()V",
    "(Lbool;)V",
    "()V",
    "(Lbool;)V",
    "(Lbool;)V",
    "(Lqt/gui/QAction;)V",
    "(Lbool;)V",
    "(Lbool;)V",
    "(Lbool;)V",
    "(Lbool;)V",
    "(Lqt/gui/QAction;)V",
    "()V",
    "()Lbool;",
    "()V",
    "(Lqt/gui/QSessionManager;)V",
    "(Lqt/gui/QWidget;Lqt/gui/QWidget;)V",
    "()V",
    "()V",
    "(Lqt/gui/QSessionManager;)V",
    "(Lbool;)V",
    "(Ljava/lang/string;)V",
    "(Lqt/gui/QAbstractButton;)V",
    "(I)V",
    "(Lqt/gui/QAbstractButton;)V",
    "(I)V",
    "(Lqt/gui/QAbstractButton;)V",
    "(I)V",
    "(Lqt/gui/QStyle$StandardPixmap;Lcom/trolltech/qt/QNativePointer;Lqt/gui/QWidget;)Lqt/gui/QIcon;",
    "(Lqt/gui/QStyle$StandardPixmap;Lcom/trolltech/qt/QNativePointer;)Lqt/gui/QIcon;",
    "(Lqt/gui/QStyle$StandardPixmap;)Lqt/gui/QIcon;",
    "(Lqt/core/QDate;)V",
    "(Lqt/core/QDate;)V",
    "(II)V",
    "()V",
    "(II)V",
    "(Lqt/core/QDate;Lqt/core/QDate;)V",
    "(Lbool;)V",
    "(Lbool;)V",
    "(Lqt/core/QDate;)V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "(I)V",
    "(Lqt/gui/QStyle$StandardPixmap;Lcom/trolltech/qt/QNativePointer;Lqt/gui/QWidget;)Lqt/gui/QIcon;",
    "(Lqt/gui/QStyle$StandardPixmap;Lcom/trolltech/qt/QNativePointer;)Lqt/gui/QIcon;",
    "(Lqt/gui/QClipboard$Mode;)V",
    "()V",
    "()V",
    "()V",
    "()V",
    "(Lqt/gui/QColor;)V",
    "(Lqt/gui/QColor;)V",
    "(Lqt/core/QModelIndex;)V",
    "(Ljava/lang/string;)V",
    "(I)V",
    "()V",
    "()V",
    "(Ljava/lang/string;)V",
    "(I)V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;)V",
    "(I)V",
    "(I)V",
    "(Ljava/lang/string;)V",
    "(Lqt/gui/QStyle$StandardPixmap;Lcom/trolltech/qt/QNativePointer;Lqt/gui/QWidget;)Lqt/gui/QIcon;",
    "(Lqt/gui/QStyle$StandardPixmap;Lcom/trolltech/qt/QNativePointer;)Lqt/gui/QIcon;",
    "(Lqt/gui/QStyle$StandardPixmap;)Lqt/gui/QIcon;",
    "(Lqt/core/QModelIndex;)V",
    "(Ljava/lang/string;)V",
    "(Lqt/core/QRect;)V",
    "()V",
    "(Lqt/core/QModelIndex;)V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;)V",
    "(Lbool;)V",
    "(I)V",
    "()V",
    "(I)V",
    "(Lqt/core/QModelIndex;)V",
    "()Lbool;",
    "()V",
    "()V",
    "()V",
    "()V",
    "(Lqt/core/QDate;)V",
    "(Lqt/core/QDateTime;)V",
    "(Lqt/core/QDate;)V",
    "(Lqt/core/QDateTime;)V",
    "(Lqt/core/QTime;)V",
    "(Lqt/core/QTime;)V",
    "(I)V",
    "(I)V",
    "(I)V",
    "(Lbool;)V",
    "(Lbool;)V",
    "()V",
    "()V",
    "(I)V",
    "()I",
    "(I)V",
    "()V",
    "()V",
    "()V",
    "(Lbool;)V",
    "()V",
    "(Lqt/gui/QAbstractButton;)V",
    "()V",
    "()V",
    "(Lqt/core/QModelIndex;)V",
    "()V",
    "(Lqt/core/Qt$DockWidgetAreas;)V",
    "(Lqt/core/Qt$DockWidgetArea;)V",
    "(Lqt/gui/QDockWidget$DockWidgetFeatures;)V",
    "(Lbool;)V",
    "(Lbool;)V",
    "(D)V",
    "(Ljava/lang/string;)V",
    "(D)V",
    "(Lqt/core/Qt$DropAction;)V",
    "(Lqt/gui/QWidget;)V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;Ljava/lang/string;)V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;)V",
    "(Lqt/core/QList;)V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;Ljava/lang/string;Ljava/lang/string;)V",
    "(Ljava/lang/string;)V",
    "(Lqt/gui/QFont;)V",
    "(Lqt/gui/QFont;)V",
    "(Lqt/gui/QFont;)V",
    "(Lqt/gui/QFont;)V",
    "()V",
    "(D)V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "(Lqt/gui/QWidget;)Lqt/gui/QGraphicsProxyWidget;",
    "()V",
    "(Lqt/core/QList;)V",
    "()V",
    "()V",
    "(Lbool;)Lbool;",
    "(Lqt/core/QRectF;Lqt/gui/QGraphicsScene$SceneLayers;)V",
    "(Lqt/core/QRectF;)V",
    "()V",
    "(Lqt/core/QRectF;)V",
    "()V",
    "(Lqt/core/QRectF;)V",
    "()V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;)V",
    "(Lqt/core/QRectF;Lqt/gui/QGraphicsScene$SceneLayers;)V",
    "(Lqt/core/QRectF;)V",
    "()V",
    "(Lqt/gui/QWidget;)V",
    "(Lqt/core/QList;)V",
    "(Lqt/core/QRectF;)V",
    "()Lbool;",
    "()V",
    "()V",
    "(Lbool;)V",
    "(Lbool;)V",
    "(Lbool;)V",
    "(Lbool;)V",
    "()V",
    "(Lqt/core/Qt$Orientation;II)V",
    "()V",
    "(ILqt/gui/QHeaderView$ResizeMode;)V",
    "(I)V",
    "(II)V",
    "(I)V",
    "(I)V",
    "(I)V",
    "(III)V",
    "(I)V",
    "(III)V",
    "(Lqt/core/QModelIndex;II)V",
    "(Lqt/core/QModelIndex;II)V",
    "(I)V",
    "()V",
    "(I)V",
    "(ILqt/core/Qt$SortOrder;)V",
    "(I)V",
    "(D)V",
    "(D)V",
    "(I)V",
    "(I)V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;)V",
    "()V",
    "()V",
    "(Lqt/core/QModelIndex;Lqt/core/QModelIndex;)V",
    "(Lqt/core/QModelIndex;Lqt/core/QModelIndex;)V",
    "(Lqt/core/QModelIndex;Lqt/core/QModelIndex;)V",
    "()V",
    "(Lqt/gui/QItemSelection;Lqt/gui/QItemSelectionModel$SelectionFlags;)V",
    "(Lqt/core/QModelIndex;Lqt/gui/QItemSelectionModel$SelectionFlags;)V",
    "(Lqt/gui/QItemSelection;Lqt/gui/QItemSelection;)V",
    "(Lqt/core/QModelIndex;Lqt/gui/QItemSelectionModel$SelectionFlags;)V",
    "(Ljava/lang/string;)V",
    "(D)V",
    "(I)V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "(Lbool;)V",
    "()V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;)V",
    "(Lqt/gui/QMovie;)V",
    "(D)V",
    "(I)V",
    "(Lqt/gui/QPicture;)V",
    "(Lqt/gui/QPixmap;)V",
    "(Ljava/lang/string;)V",
    "()V",
    "()V",
    "(II)V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;)V",
    "()V",
    "(Lqt/core/QList;)V",
    "()V",
    "(Lqt/gui/QListWidgetItem;Lqt/gui/QListWidgetItem;)V",
    "(I)V",
    "(Ljava/lang/string;)V",
    "(Lqt/gui/QListWidgetItem;)V",
    "(Lqt/gui/QListWidgetItem;)V",
    "(Lqt/gui/QListWidgetItem;)V",
    "(Lqt/gui/QListWidgetItem;)V",
    "(Lqt/gui/QListWidgetItem;)V",
    "(Lqt/gui/QListWidgetItem;)V",
    "()V",
    "(Lqt/gui/QListWidgetItem;Lqt/gui/QAbstractItemView$ScrollHint;)V",
    "(Lqt/gui/QListWidgetItem;)V",
    "(Lqt/core/QSize;)V",
    "(Lbool;)V",
    "(Lbool;)V",
    "(Lqt/core/Qt$ToolButtonStyle;)V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "(Lqt/gui/QMdiSubWindow;)V",
    "(Lqt/gui/QWidget;)V",
    "(Lqt/gui/QMdiSubWindow;)V",
    "()V",
    "()V",
    "()V",
    "()V",
    "(Lqt/core/Qt$WindowStates;Lqt/core/Qt$WindowStates;)V",
    "()V",
    "()V",
    "(Lqt/gui/QAction;)V",
    "()V",
    "()V",
    "(Lqt/gui/QAction;)V",
    "(Lqt/gui/QAction;)V",
    "(Lbool;)V",
    "(Lqt/gui/QAction;)V",
    "(Lqt/gui/QAbstractButton;)V",
    "(Lqt/gui/QStyle$StandardPixmap;Lcom/trolltech/qt/QNativePointer;Lqt/gui/QWidget;)Lqt/gui/QIcon;",
    "(Lqt/gui/QStyle$StandardPixmap;Lcom/trolltech/qt/QNativePointer;)Lqt/gui/QIcon;",
    "(Lqt/gui/QStyle$StandardPixmap;)Lqt/gui/QIcon;",
    "(Lqt/gui/QImageReader$ImageReaderError;)V",
    "()V",
    "(I)V",
    "()Lbool;",
    "(Lqt/core/QSize;)V",
    "(Lbool;)V",
    "(I)V",
    "()V",
    "()V",
    "(Lqt/gui/QMovie$MovieState;)V",
    "()V",
    "(Lqt/core/QRect;)V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;)V",
    "(I)V",
    "()V",
    "()V",
    "()V",
    "(Lbool;)V",
    "()V",
    "()V",
    "(Ljava/lang/string;)V",
    "(Lbool;)V",
    "()V",
    "()V",
    "(Lbool;)V",
    "()V",
    "()V",
    "(Ljava/lang/string;)V",
    "()V",
    "()V",
    "(Lbool;)V",
    "(Lqt/core/QRect;I)V",
    "(Lqt/gui/QSizePolicy$ControlType;Lqt/gui/QSizePolicy$ControlType;Lqt/core/Qt$Orientation;Lcom/trolltech/qt/QNativePointer;Lqt/gui/QWidget;)I",
    "(Lqt/gui/QSizePolicy$ControlType;Lqt/gui/QSizePolicy$ControlType;Lqt/core/Qt$Orientation;Lcom/trolltech/qt/QNativePointer;)I",
    "(Lqt/gui/QSizePolicy$ControlType;Lqt/gui/QSizePolicy$ControlType;Lqt/core/Qt$Orientation;)I",
    "(Lqt/gui/QStyle$StandardPixmap;Lcom/trolltech/qt/QNativePointer;Lqt/gui/QWidget;)Lqt/gui/QIcon;",
    "(Lqt/gui/QStyle$StandardPixmap;Lcom/trolltech/qt/QNativePointer;)Lqt/gui/QIcon;",
    "(Lqt/gui/QStyle$StandardPixmap;)Lqt/gui/QIcon;",
    "(Lqt/gui/QPrinter;)V",
    "(Lqt/gui/QPrinter;)V",
    "()V",
    "()V",
    "(Lqt/gui/QPrinter;)V",
    "()V",
    "()V",
    "()V",
    "(I)V",
    "()V",
    "()V",
    "(Lqt/gui/QPrinter$Orientation;)V",
    "()V",
    "()V",
    "(Lqt/gui/QPrintPreviewWidget$ViewMode;)V",
    "(D)V",
    "(Lqt/gui/QPrintPreviewWidget$ZoomMode;)V",
    "()V",
    "(D)V",
    "()V",
    "(D)V",
    "()V",
    "()V",
    "(I)V",
    "(I)V",
    "(Lqt/core/Qt$Orientation;)V",
    "(II)V",
    "(I)V",
    "(I)V",
    "()V",
    "()V",
    "()V",
    "()V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;)V",
    "(I)V",
    "(I)V",
    "(I)V",
    "(II)V",
    "(I)V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;)V",
    "()V",
    "()V",
    "(I)V",
    "(Ljava/lang/string;)V",
    "(I)V",
    "()V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;ILqt/gui/QColor;)V",
    "(Ljava/lang/string;I)V",
    "(Ljava/lang/string;)V",
    "(II)V",
    "(I)V",
    "(I)V",
    "(Lqt/gui/QWidget;)V",
    "(I)V",
    "(I)V",
    "(I)V",
    "(Lqt/gui/QWidget;)V",
    "(I)V",
    "(Lqt/gui/QStandardItem;)V",
    "()V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;I)V",
    "(Ljava/lang/string;)V",
    "(Lqt/gui/QSizePolicy$ControlType;Lqt/gui/QSizePolicy$ControlType;Lqt/core/Qt$Orientation;Lcom/trolltech/qt/QNativePointer;Lqt/gui/QWidget;)I",
    "(Lqt/gui/QSizePolicy$ControlType;Lqt/gui/QSizePolicy$ControlType;Lqt/core/Qt$Orientation;Lcom/trolltech/qt/QNativePointer;)I",
    "(Lqt/gui/QSizePolicy$ControlType;Lqt/gui/QSizePolicy$ControlType;Lqt/core/Qt$Orientation;)I",
    "(Lqt/gui/QStyle$StandardPixmap;Lcom/trolltech/qt/QNativePointer;Lqt/gui/QWidget;)Lqt/gui/QIcon;",
    "(Lqt/gui/QStyle$StandardPixmap;Lcom/trolltech/qt/QNativePointer;)Lqt/gui/QIcon;",
    "(Lqt/gui/QStyle$StandardPixmap;)Lqt/gui/QIcon;",
    "()V",
    "(Lqt/gui/QTextBlock;)V",
    "(Lqt/gui/QSystemTrayIcon$ActivationReason;)V",
    "()V",
    "()V",
    "(Lbool;)V",
    "()V",
    "(I)V",
    "(I)V",
    "(I)V",
    "(II)V",
    "(I)V",
    "(I)V",
    "(Lqt/gui/QWidget;)V",
    "(I)V",
    "(II)V",
    "(III)V",
    "(III)V",
    "(I)V",
    "(I)V",
    "(I)V",
    "()V",
    "(I)V",
    "()V",
    "(II)V",
    "(III)V",
    "(III)V",
    "(I)V",
    "(I)V",
    "(Lbool;)V",
    "(I)V",
    "(I)V",
    "(I)V",
    "(II)V",
    "(II)V",
    "(II)V",
    "(II)V",
    "(II)V",
    "(II)V",
    "()V",
    "()V",
    "(IIII)V",
    "(Lqt/gui/QTableWidgetItem;Lqt/gui/QTableWidgetItem;)V",
    "(I)V",
    "(I)V",
    "(Lqt/gui/QTableWidgetItem;)V",
    "(Lqt/gui/QTableWidgetItem;)V",
    "(Lqt/gui/QTableWidgetItem;)V",
    "(Lqt/gui/QTableWidgetItem;)V",
    "(Lqt/gui/QTableWidgetItem;)V",
    "(Lqt/gui/QTableWidgetItem;)V",
    "()V",
    "(I)V",
    "(I)V",
    "(Lqt/gui/QTableWidgetItem;Lqt/gui/QAbstractItemView$ScrollHint;)V",
    "(Lqt/gui/QTableWidgetItem;)V",
    "(Lqt/core/QUrl;)V",
    "()V",
    "(Lbool;)V",
    "()V",
    "(Lbool;)V",
    "(Ljava/lang/string;)V",
    "(Lqt/core/QUrl;)V",
    "()V",
    "()V",
    "()V",
    "(Lqt/core/QUrl;)V",
    "(Lqt/core/QUrl;)V",
    "(I)V",
    "(III)V",
    "()V",
    "(Lqt/gui/QTextCursor;)V",
    "()V",
    "(Lbool;)V",
    "()V",
    "(Lbool;)V",
    "(Lbool;)V",
    "()V",
    "()V",
    "(Lbool;)V",
    "()V",
    "(Ljava/lang/string;)V",
    "()V",
    "()V",
    "(Lbool;)V",
    "(Lqt/gui/QTextCharFormat;)V",
    "()V",
    "()V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;)V",
    "()V",
    "()V",
    "(Lbool;)V",
    "(Ljava/lang/string;)V",
    "()V",
    "()V",
    "(Lqt/core/Qt$Alignment;)V",
    "(Lqt/gui/QFont;)V",
    "(Ljava/lang/string;)V",
    "(Lbool;)V",
    "(D)V",
    "(Lbool;)V",
    "(I)V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;)V",
    "(Lqt/gui/QColor;)V",
    "(Lqt/gui/QColor;)V",
    "()V",
    "()V",
    "(Lbool;)V",
    "(I)V",
    "()V",
    "(I)V",
    "()V",
    "(Lqt/gui/QAction;)V",
    "(Lqt/core/Qt$ToolBarAreas;)V",
    "(Lqt/core/QSize;)V",
    "(Lbool;)V",
    "(Lqt/core/Qt$Orientation;)V",
    "(Lqt/core/QSize;)V",
    "(Lqt/core/Qt$ToolButtonStyle;)V",
    "(Lqt/core/Qt$ToolButtonStyle;)V",
    "(Lbool;)V",
    "(Lbool;)V",
    "(I)V",
    "(I)V",
    "(Lqt/gui/QWidget;)V",
    "(Lqt/gui/QAction;)V",
    "(Lqt/core/Qt$ToolButtonStyle;)V",
    "()V",
    "(Lqt/gui/QAction;)V",
    "(Lqt/core/QModelIndex;)V",
    "()V",
    "(Lqt/core/QModelIndex;)V",
    "(II)V",
    "()V",
    "(III)V",
    "(Lqt/core/QModelIndex;)V",
    "()V",
    "(I)V",
    "(Lqt/core/QModelIndex;)V",
    "(I)V",
    "()V",
    "(I)V",
    "(Lqt/core/QModelIndex;II)V",
    "(I)V",
    "(I)V",
    "()V",
    "(Lqt/gui/QTreeWidgetItem;)V",
    "(Lqt/gui/QTreeWidgetItem;Lqt/gui/QTreeWidgetItem;)V",
    "(Lqt/gui/QTreeWidgetItem;)V",
    "(Lqt/gui/QTreeWidgetItem;I)V",
    "(Lqt/gui/QTreeWidgetItem;I)V",
    "(Lqt/gui/QTreeWidgetItem;I)V",
    "(Lqt/gui/QTreeWidgetItem;)V",
    "(Lqt/gui/QTreeWidgetItem;I)V",
    "(Lqt/gui/QTreeWidgetItem;I)V",
    "(Lqt/gui/QTreeWidgetItem;)V",
    "(Lqt/gui/QTreeWidgetItem;I)V",
    "()V",
    "(Lqt/gui/QTreeWidgetItem;Lqt/gui/QAbstractItemView$ScrollHint;)V",
    "(Lqt/gui/QTreeWidgetItem;)V",
    "(Lqt/gui/QUndoStack;)V",
    "(Lbool;)V",
    "(Lbool;)V",
    "(Lbool;)V",
    "(I)V",
    "()V",
    "(Ljava/lang/string;)V",
    "(Lqt/gui/QUndoStack;)V",
    "()V",
    "(Ljava/lang/string;)V",
    "(Lbool;)V",
    "(Lbool;)V",
    "(Lbool;)V",
    "(I)V",
    "()V",
    "(Ljava/lang/string;)V",
    "(Lbool;)V",
    "()V",
    "()V",
    "(I)V",
    "()V",
    "(Ljava/lang/string;)V",
    "(Lqt/gui/QUndoGroup;)V",
    "(Lqt/gui/QUndoStack;)V",
    "()Lbool;",
    "(Lqt/core/QPoint;)V",
    "()V",
    "()V",
    "()V",
    "()V",
    "(Lbool;)V",
    "(Lbool;)V",
    "()V",
    "(Lbool;)V",
    "(Lbool;)V",
    "(Ljava/lang/string;)V",
    "(Lbool;)V",
    "(Lbool;)V",
    "(Ljava/lang/string;)V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "(Lqt/gui/QStyle$StandardPixmap;Lcom/trolltech/qt/QNativePointer;Lqt/gui/QWidget;)Lqt/gui/QIcon;",
    "(Lqt/gui/QStyle$StandardPixmap;Lcom/trolltech/qt/QNativePointer;)Lqt/gui/QIcon;",
    "()V",
    "(I)V",
    "(I)V",
    "()V",
    "()V",
    "(I)V",
    "(I)V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "(Lqt/gui/QWidget;)V",
    "()V",
    "(Lqt/gui/QWidget;)V"
};

static int enum_count = 352;
static const char *enumJavaNames[] = {
    "qt/gui/QStyleOptionToolBox$StyleOptionType",
    "qt/gui/QCalendarWidget$SelectionMode",
    "qt/gui/QLineEdit$EchoMode",
    "qt/gui/QFontComboBox$FontFilter",
    "qt/gui/QPainter$RenderHint",
    "qt/gui/QImageIOPlugin$Capability",
    "qt/gui/QWidget$RenderFlag",
    "qt/gui/QGraphicsScene$SceneLayer",
    "qt/gui/QAccessible$Action",
    "qt/gui/QStyleOptionComboBox$StyleOptionVersion",
    "qt/gui/QToolButton$ToolButtonPopupMode",
    "qt/gui/QDockWidget$DockWidgetFeature",
    "qt/gui/QStyleOptionTabWidgetFrame$StyleOptionType",
    "qt/gui/QStyleOptionMenuItem$StyleOptionType",
    "qt/gui/QItemSelectionModel$SelectionFlag",
    "qt/gui/QTextFormat$Property",
    "qt/gui/QAbstractSpinBox$CorrectionMode",
    "qt/gui/QWizard$WizardPixmap",
    "qt/gui/QDialogButtonBox$StandardButton",
    "qt/gui/QMessageBox$StandardButton",
    "qt/gui/QStyle$ComplexControl",
    "qt/gui/QAccessible$RelationFlag",
    "qt/gui/QAccessible$StateFlag",
    "qt/gui/QTextFrameFormat$BorderStyle",
    "qt/gui/QStyle$StandardPixmap",
    "qt/gui/QFrame$Shadow",
    "qt/gui/QAbstractItemView$DragDropMode",
    "qt/gui/QStyle$StyleHint",
    "qt/gui/QGraphicsSceneContextMenuEvent$Reason",
    "qt/gui/QStyleHintReturnVariant$StyleOptionVersion",
    "qt/gui/QStyleOptionSlider$StyleOptionVersion",
    "qt/gui/QTextOption$WrapMode",
    "qt/gui/QGraphicsPixmapItem$enum_1",
    "qt/gui/QStyleOptionButton$StyleOptionVersion",
    "qt/gui/QStackedLayout$StackingMode",
    "qt/gui/QAbstractItemView$SelectionMode",
    "qt/gui/QStyleOptionTitleBar$StyleOptionVersion",
    "qt/gui/QPrinter$OutputFormat",
    "qt/gui/QIcon$Mode",
    "qt/gui/QStyleOptionToolBar$ToolBarFeature",
    "qt/gui/QTextFormat$FormatType",
    "qt/gui/QFont$StyleStrategy",
    "qt/gui/QStyleOptionTabBarBase$StyleOptionVersion",
    "qt/gui/QTextDocument$MetaInformation",
    "qt/gui/QTextCursor$MoveOperation",
    "qt/gui/QStyleOptionProgressBar$StyleOptionType",
    "qt/gui/QRubberBand$Shape",
    "qt/gui/QDialogButtonBox$ButtonLayout",
    "qt/gui/QTreeWidgetItem$ChildIndicatorPolicy",
    "qt/gui/QGraphicsItem$GraphicsItemFlag",
    "qt/gui/QStyleOptionTabV2$StyleOptionVersion",
    "qt/gui/QAccessible$Text",
    "qt/gui/QListView$Flow",
    "qt/gui/QGraphicsLineItem$enum_1",
    "qt/gui/QGradient$Spread",
    "qt/gui/QAccessible$Method",
    "qt/gui/QTextDocument$FindFlag",
    "qt/gui/QGraphicsItem$CacheMode",
    "qt/gui/QFont$Style",
    "qt/gui/QStyleOptionViewItemV2$ViewItemFeature",
    "qt/gui/QStyleOptionButton$ButtonFeature",
    "qt/gui/QGraphicsItem$GraphicsItemChange",
    "qt/gui/QPrinter$DuplexMode",
    "qt/gui/QStyle$PixelMetric",
    "qt/gui/QGraphicsScene$ItemIndexMethod",
    "qt/gui/QStyle$ControlElement",
    "qt/gui/QGraphicsPolygonItem$enum_1",
    "qt/gui/QFormLayout$FieldGrowthPolicy",
    "qt/gui/QTextLayout$CursorMode",
    "qt/gui/QGraphicsView$CacheModeFlag",
    "qt/gui/QStyleOptionViewItemV2$ViewItemFeature",
    "qt/gui/QImage$Format",
    "qt/gui/QTextLength$Type",
    "qt/gui/QStyleOptionGraphicsItem$StyleOptionType",
    "qt/gui/QDialogButtonBox$StandardButton",
    "qt/gui/QGraphicsItem$Extension",
    "qt/gui/QTabWidget$TabPosition",
    "qt/gui/QDirModel$Roles",
    "qt/gui/QGraphicsView$ViewportUpdateMode",
    "qt/gui/QGraphicsView$CacheModeFlag",
    "qt/gui/QSessionManager$RestartHint",
    "qt/gui/QPaintEngine$PolygonDrawMode",
    "qt/gui/QDateTimeEdit$Section",
    "qt/gui/QStyleOptionTabBarBase$StyleOptionType",
    "qt/gui/QStyleOptionToolBoxV2$StyleOptionVersion",
    "qt/gui/QSlider$TickPosition",
    "qt/gui/QPrinter$Unit",
    "qt/gui/QStyleOptionViewItem$StyleOptionType",
    "qt/gui/QStyleHintReturn$StyleOptionType",
    "qt/gui/QStyleOptionViewItemV2$StyleOptionVersion",
    "qt/gui/QStyleOptionViewItemV3$StyleOptionVersion",
    "qt/gui/QStyleOptionViewItemV4$StyleOptionVersion",
    "qt/gui/QPainter$RenderHint",
    "qt/gui/QFileDialog$AcceptMode",
    "qt/gui/QStyleOptionMenuItem$MenuItemType",
    "qt/gui/QStyleOptionComplex$StyleOptionVersion",
    "qt/gui/QAccessible$StateFlag",
    "qt/gui/QStyleOptionGraphicsItem$StyleOptionVersion",
    "qt/gui/QDateTimeEdit$Section",
    "qt/gui/QColormap$Mode",
    "qt/gui/QStyleOptionTab$SelectedPosition",
    "qt/gui/QStyleOptionGroupBox$StyleOptionVersion",
    "qt/gui/QFont$Weight",
    "qt/gui/QAbstractItemView$ScrollMode",
    "qt/gui/QKeySequence$StandardKey",
    "qt/gui/QTextItem$RenderFlag",
    "qt/gui/QFormLayout$ItemRole",
    "qt/gui/QSizePolicy$Policy",
    "qt/gui/QFileDialog$FileMode",
    "qt/gui/QTransform$TransformationType",
    "qt/gui/QAccessible$Role",
    "qt/gui/QTextOption$TabType",
    "qt/gui/QItemSelectionModel$SelectionFlag",
    "qt/gui/QAbstractSlider$SliderAction",
    "qt/gui/QPrinter$ColorMode",
    "qt/gui/QStyleOptionTab$StyleOptionType",
    "qt/gui/QStyleOptionToolButton$ToolButtonFeature",
    "qt/gui/QWidget$RenderFlag",
    "qt/gui/QHeaderView$ResizeMode",
    "qt/gui/QStyleHintReturnVariant$StyleOptionType",
    "qt/gui/QTextOption$Flag",
    "qt/gui/QFont$SpacingType",
    "qt/gui/QMovie$MovieState",
    "qt/gui/QStyleOptionHeader$SortIndicator",
    "qt/gui/QKeySequence$SequenceMatch",
    "qt/gui/QGraphicsSimpleTextItem$enum_1",
    "qt/gui/QAbstractItemView$State",
    "qt/gui/QListWidgetItem$ItemType",
    "qt/gui/QStyle$StateFlag",
    "qt/gui/QSizePolicy$ControlType",
    "qt/gui/QGraphicsWidget$enum_1",
    "qt/gui/QSystemTrayIcon$MessageIcon",
    "qt/gui/QMdiArea$ViewMode",
    "qt/gui/QFileDialog$ViewMode",
    "qt/gui/QStyleOptionViewItemV4$ViewItemPosition",
    "qt/gui/QLayout$SizeConstraint",
    "qt/gui/QFrame$Shape",
    "qt/gui/QCalendarWidget$HorizontalHeaderFormat",
    "qt/gui/QStyleOptionSlider$StyleOptionType",
    "qt/gui/QFormLayout$FormStyle",
    "qt/gui/QPaintEngine$DirtyFlag",
    "qt/gui/QTabWidget$TabShape",
    "qt/gui/QMovie$CacheMode",
    "qt/gui/QFileIconProvider$IconType",
    "qt/gui/QTabletEvent$TabletDevice",
    "qt/gui/QTextEdit$LineWrapMode",
    "qt/gui/QStyleOption$OptionType",
    "qt/gui/QPrinter$PageOrder",
    "qt/gui/QStyleOptionSpinBox$StyleOptionType",
    "qt/gui/QMdiArea$AreaOption",
    "qt/gui/QAbstractPrintDialog$PrintDialogOption",
    "qt/gui/QColor$Spec",
    "qt/gui/QStyleOption$StyleOptionType",
    "qt/gui/QDockWidget$DockWidgetFeature",
    "qt/gui/QGraphicsItem$GraphicsItemFlag",
    "qt/gui/QCompleter$CompletionMode",
    "qt/gui/QFileDialog$DialogLabel",
    "qt/gui/QPrinter$Orientation",
    "qt/gui/QStyleOptionToolButton$StyleOptionVersion",
    "qt/gui/QDataWidgetMapper$SubmitPolicy",
    "qt/gui/QStyleOptionDockWidget$StyleOptionVersion",
    "qt/gui/QStyleOptionGroupBox$StyleOptionType",
    "qt/gui/QTextEdit$AutoFormattingFlag",
    "qt/gui/QGraphicsProxyWidget$enum_1",
    "qt/gui/QPrintPreviewWidget$ZoomMode",
    "qt/gui/QIcon$State",
    "qt/gui/QPainter$CompositionMode",
    "qt/gui/QStyle$StateFlag",
    "qt/gui/QStyleOptionToolBar$ToolBarPosition",
    "qt/gui/QTextOption$Flag",
    "qt/gui/QAbstractItemDelegate$EndEditHint",
    "qt/gui/QLCDNumber$Mode",
    "qt/gui/QTabBar$Shape",
    "qt/gui/QFrame$StyleMask",
    "qt/gui/QInputContext$StandardFormat",
    "qt/gui/QGraphicsEllipseItem$enum_1",
    "qt/gui/QTextCharFormat$UnderlineStyle",
    "qt/gui/QStyleOptionComplex$StyleOptionType",
    "qt/gui/QAbstractSpinBox$StepEnabledFlag",
    "qt/gui/QFontComboBox$FontFilter",
    "qt/gui/QPaintEngine$PaintEngineFeature",
    "qt/gui/QPrinter$PrinterMode",
    "qt/gui/QGradient$CoordinateMode",
    "qt/gui/QStyleOptionToolBar$StyleOptionType",
    "qt/gui/QStyleOptionViewItem$Position",
    "qt/gui/QStyleOptionFrameV2$FrameFeature",
    "qt/gui/QPrinter$PrinterState",
    "qt/gui/QTextEdit$AutoFormattingFlag",
    "qt/gui/QAbstractItemView$DropIndicatorPosition",
    "qt/gui/QStyleOptionTab$TabPosition",
    "qt/gui/QStyleOptionFocusRect$StyleOptionType",
    "qt/gui/QFileDialog$Option",
    "qt/gui/QTextFrameFormat$Position",
    "qt/gui/QTreeWidgetItem$ItemType",
    "qt/gui/QPaintEngine$PaintEngineFeature",
    "qt/gui/QGraphicsItemGroup$enum_1",
    "qt/gui/QFontDatabase$WritingSystem",
    "qt/gui/QMessageBox$ButtonRole",
    "qt/gui/QTextCharFormat$VerticalAlignment",
    "qt/gui/QAbstractItemView$EditTrigger",
    "qt/gui/QStyleOptionComboBox$StyleOptionType",
    "qt/gui/QGraphicsScene$SceneLayer",
    "qt/gui/QTableWidgetItem$ItemType",
    "qt/gui/QWizard$WizardButton",
    "qt/gui/QTextFormat$ObjectTypes",
    "qt/gui/QTextLine$Edge",
    "qt/gui/QStyleOptionDockWidgetV2$StyleOptionVersion",
    "qt/gui/QSystemTrayIcon$ActivationReason",
    "qt/gui/QFont$Stretch",
    "qt/gui/QAbstractPrintDialog$PrintRange",
    "qt/gui/QMdiSubWindow$SubWindowOption",
    "qt/gui/QPalette$ColorGroup",
    "qt/gui/QStyleOptionHeader$SectionPosition",
    "qt/gui/QWizard$WizardStyle",
    "qt/gui/QAccessible$RelationFlag",
    "qt/gui/QGraphicsView$ViewportAnchor",
    "qt/gui/QGraphicsView$DragMode",
    "qt/gui/QStyleOptionFocusRect$StyleOptionVersion",
    "qt/gui/QComboBox$InsertPolicy",
    "qt/gui/QStyle$SubControl",
    "qt/gui/QPainterPath$ElementType",
    "qt/gui/QTextCursor$MoveMode",
    "qt/gui/QLineF$IntersectType",
    "qt/gui/QStyleHintReturnMask$StyleOptionType",
    "qt/gui/QPrintEngine$PrintEnginePropertyKey",
    "qt/gui/QStyleOptionToolBoxV2$SelectedPosition",
    "qt/gui/QTextLine$CursorPosition",
    "qt/gui/QDialog$DialogCode",
    "qt/gui/QDesktopServices$StandardLocation",
    "qt/gui/QAbstractSlider$SliderChange",
    "qt/gui/QBoxLayout$Direction",
    "qt/gui/QStyleOptionSizeGrip$StyleOptionVersion",
    "qt/gui/QListView$Movement",
    "qt/gui/QStyle$SubControl",
    "qt/gui/QTextFormat$PageBreakFlag",
    "qt/gui/QStyleOptionToolButton$ToolButtonFeature",
    "qt/gui/QImageIOPlugin$Capability",
    "qt/gui/QStyleOptionToolBox$StyleOptionVersion",
    "qt/gui/QMessageBox$StandardButton",
    "qt/gui/QGraphicsRectItem$enum_1",
    "qt/gui/QStyleOptionTab$CornerWidget",
    "qt/gui/QStyleHintReturn$StyleOptionVersion",
    "qt/gui/QInputMethodEvent$AttributeType",
    "qt/gui/QTextDocument$ResourceType",
    "qt/gui/QStyleOptionSpinBox$StyleOptionVersion",
    "qt/gui/QImageIOHandler$ImageOption",
    "qt/gui/QGraphicsPathItem$enum_1",
    "qt/gui/QStyleHintReturn$HintReturnType",
    "qt/gui/QGraphicsTextItem$enum_1",
    "qt/gui/QStyleOptionHeader$StyleOptionType",
    "qt/gui/QImage$InvertMode",
    "qt/gui/QContextMenuEvent$Reason",
    "qt/gui/QMdiSubWindow$SubWindowOption",
    "qt/gui/QTextCursor$SelectionType",
    "qt/gui/QStyle$SubElement",
    "qt/gui/QComboBox$SizeAdjustPolicy",
    "qt/gui/QStyleOptionFrameV2$FrameFeature",
    "qt/gui/QPrinter$PrintRange",
    "qt/gui/QPrintPreviewWidget$ViewMode",
    "qt/gui/QStyleOptionToolBar$ToolBarFeature",
    "qt/gui/QPageSetupDialog$PageSetupDialogOption",
    "qt/gui/QKeySequence$SequenceFormat",
    "qt/gui/QStyleOptionButton$ButtonFeature",
    "qt/gui/QStyleOption$StyleOptionVersion",
    "qt/gui/QTextListFormat$Style",
    "qt/gui/QStyle$ContentsType",
    "qt/gui/QStyleOptionFrame$StyleOptionVersion",
    "qt/gui/QPaintEngine$DirtyFlag",
    "qt/gui/QWizard$WizardOption",
    "qt/gui/QAction$ActionEvent",
    "qt/gui/QTreeWidgetItemIterator$IteratorFlag",
    "qt/gui/QAbstractItemView$CursorAction",
    "qt/gui/QAction$MenuRole",
    "qt/gui/QAbstractPrintDialog$PrintDialogOption",
    "qt/gui/QStyleOptionMenuItem$StyleOptionVersion",
    "qt/gui/QPageSetupDialog$PageSetupDialogOption",
    "qt/gui/QFont$StyleHint",
    "qt/gui/QProgressBar$Direction",
    "qt/gui/QStyleOptionToolButton$StyleOptionType",
    "qt/gui/QStyleOptionTab$StyleOptionVersion",
    "qt/gui/QStyleOptionToolBar$StyleOptionVersion",
    "qt/gui/QImageReader$ImageReaderError",
    "qt/gui/QGraphicsItem$enum_1",
    "qt/gui/QListView$LayoutMode",
    "qt/gui/QStyleOptionHeader$StyleOptionVersion",
    "qt/gui/QWorkspace$WindowOrder",
    "qt/gui/QStyleOptionTitleBar$StyleOptionType",
    "qt/gui/QStyleOptionMenuItem$CheckType",
    "qt/gui/QStyleOptionProgressBar$StyleOptionVersion",
    "qt/gui/QStyleOptionFrame$StyleOptionType",
    "qt/gui/QStyleOptionProgressBarV2$StyleOptionType",
    "qt/gui/QImageWriter$ImageWriterError",
    "qt/gui/QAbstractSpinBox$StepEnabledFlag",
    "qt/gui/QMainWindow$DockOption",
    "qt/gui/QAbstractItemView$ScrollHint",
    "qt/gui/QSizePolicy$PolicyFlag",
    "qt/gui/QStyle$PrimitiveElement",
    "qt/gui/QStyleOptionHeader$SelectedPosition",
    "qt/gui/QTreeWidgetItemIterator$IteratorFlag",
    "qt/gui/QWizard$WizardOption",
    "qt/gui/QFileSystemModel$Roles",
    "qt/gui/QLCDNumber$SegmentStyle",
    "qt/gui/QStyleOptionRubberBand$StyleOptionVersion",
    "qt/gui/QStyleHintReturnMask$StyleOptionVersion",
    "qt/gui/QApplication$Type",
    "qt/gui/QAccessible$Event",
    "qt/gui/QStyleOptionTabWidgetFrame$StyleOptionVersion",
    "qt/gui/QMdiArea$AreaOption",
    "qt/gui/QAbstractSpinBox$ButtonSymbols",
    "qt/gui/QStyleOptionProgressBarV2$StyleOptionVersion",
    "qt/gui/QPaintEngine$Type",
    "qt/gui/QPrinter$PaperSource",
    "qt/gui/QAbstractItemView$EditTrigger",
    "qt/gui/QGradient$Type",
    "qt/gui/QPalette$ColorRole",
    "qt/gui/QPlainTextEdit$LineWrapMode",
    "qt/gui/QGraphicsView$OptimizationFlag",
    "qt/gui/QMessageBox$Icon",
    "qt/gui/QGraphicsPixmapItem$ShapeMode",
    "qt/gui/QApplication$ColorSpec",
    "qt/gui/QCalendarWidget$VerticalHeaderFormat",
    "qt/gui/QListView$ViewMode",
    "qt/gui/QStyleOptionRubberBand$StyleOptionType",
    "qt/gui/QClipboard$Mode",
    "qt/gui/QStyleOptionToolBoxV2$TabPosition",
    "qt/gui/QStyleOptionSizeGrip$StyleOptionType",
    "qt/gui/QFileDialog$Option",
    "qt/gui/QStyleOptionButton$StyleOptionType",
    "qt/gui/QStandardItem$ItemType",
    "qt/gui/QMdiArea$WindowOrder",
    "qt/gui/QFormLayout$RowWrapPolicy",
    "qt/gui/QTextDocument$FindFlag",
    "qt/gui/QGraphicsView$OptimizationFlag",
    "qt/gui/QStyleOptionTab$CornerWidget",
    "qt/gui/QValidator$State",
    "qt/gui/QListView$ResizeMode",
    "qt/gui/QMainWindow$DockOption",
    "qt/gui/QAbstractItemView$SelectionBehavior",
    "qt/gui/QTextItem$RenderFlag",
    "qt/gui/QStyleOptionFrameV2$StyleOptionVersion",
    "qt/gui/QPaintDevice$PaintDeviceMetric",
    "qt/gui/QDialogButtonBox$ButtonRole",
    "qt/gui/QStyleOptionDockWidget$StyleOptionType",
    "qt/gui/QRegion$RegionType",
    "qt/gui/QTextFormat$PageBreakFlag",
    "qt/gui/QFont$Capitalization",
    "qt/gui/QCompleter$ModelSorting",
    "qt/gui/QStyleOptionViewItem$StyleOptionVersion",
    "qt/gui/QPrinter$PageSize",
    "qt/gui/QDoubleValidator$Notation",
    "qt/gui/QTabletEvent$PointerType",
    "qt/gui/QSizePolicy$ControlType",
};

static const char *enumCppNames[] = {
    "QStyleOptionToolBox::StyleOptionType",
    "QCalendarWidget::SelectionMode",
    "QLineEdit::EchoMode",
    "QFontComboBox::FontFilters",
    "QPainter::RenderHints",
    "QImageIOPlugin::Capabilities",
    "QWidget::RenderFlag",
    "QGraphicsScene::SceneLayer",
    "QAccessible::Action",
    "QStyleOptionComboBox::StyleOptionVersion",
    "QToolButton::ToolButtonPopupMode",
    "QDockWidget::DockWidgetFeature",
    "QStyleOptionTabWidgetFrame::StyleOptionType",
    "QStyleOptionMenuItem::StyleOptionType",
    "QItemSelectionModel::SelectionFlags",
    "QTextFormat::Property",
    "QAbstractSpinBox::CorrectionMode",
    "QWizard::WizardPixmap",
    "QDialogButtonBox::StandardButtons",
    "QMessageBox::StandardButton",
    "QStyle::ComplexControl",
    "QAccessible::RelationFlag",
    "QAccessible::State",
    "QTextFrameFormat::BorderStyle",
    "QStyle::StandardPixmap",
    "QFrame::Shadow",
    "QAbstractItemView::DragDropMode",
    "QStyle::StyleHint",
    "QGraphicsSceneContextMenuEvent::Reason",
    "QStyleHintReturnVariant::StyleOptionVersion",
    "QStyleOptionSlider::StyleOptionVersion",
    "QTextOption::WrapMode",
    "QGraphicsPixmapItem::enum_1",
    "QStyleOptionButton::StyleOptionVersion",
    "QStackedLayout::StackingMode",
    "QAbstractItemView::SelectionMode",
    "QStyleOptionTitleBar::StyleOptionVersion",
    "QPrinter::OutputFormat",
    "QIcon::Mode",
    "QStyleOptionToolBar::ToolBarFeature",
    "QTextFormat::FormatType",
    "QFont::StyleStrategy",
    "QStyleOptionTabBarBase::StyleOptionVersion",
    "QTextDocument::MetaInformation",
    "QTextCursor::MoveOperation",
    "QStyleOptionProgressBar::StyleOptionType",
    "QRubberBand::Shape",
    "QDialogButtonBox::ButtonLayout",
    "QTreeWidgetItem::ChildIndicatorPolicy",
    "QGraphicsItem::GraphicsItemFlag",
    "QStyleOptionTabV2::StyleOptionVersion",
    "QAccessible::Text",
    "QListView::Flow",
    "QGraphicsLineItem::enum_1",
    "QGradient::Spread",
    "QAccessible::Method",
    "QTextDocument::FindFlag",
    "QGraphicsItem::CacheMode",
    "QFont::Style",
    "QStyleOptionViewItemV2::ViewItemFeatures",
    "QStyleOptionButton::ButtonFeature",
    "QGraphicsItem::GraphicsItemChange",
    "QPrinter::DuplexMode",
    "QStyle::PixelMetric",
    "QGraphicsScene::ItemIndexMethod",
    "QStyle::ControlElement",
    "QGraphicsPolygonItem::enum_1",
    "QFormLayout::FieldGrowthPolicy",
    "QTextLayout::CursorMode",
    "QGraphicsView::CacheModeFlag",
    "QStyleOptionViewItemV2::ViewItemFeature",
    "QImage::Format",
    "QTextLength::Type",
    "QStyleOptionGraphicsItem::StyleOptionType",
    "QDialogButtonBox::StandardButton",
    "QGraphicsItem::Extension",
    "QTabWidget::TabPosition",
    "QDirModel::Roles",
    "QGraphicsView::ViewportUpdateMode",
    "QGraphicsView::CacheMode",
    "QSessionManager::RestartHint",
    "QPaintEngine::PolygonDrawMode",
    "QDateTimeEdit::Sections",
    "QStyleOptionTabBarBase::StyleOptionType",
    "QStyleOptionToolBoxV2::StyleOptionVersion",
    "QSlider::TickPosition",
    "QPrinter::Unit",
    "QStyleOptionViewItem::StyleOptionType",
    "QStyleHintReturn::StyleOptionType",
    "QStyleOptionViewItemV2::StyleOptionVersion",
    "QStyleOptionViewItemV3::StyleOptionVersion",
    "QStyleOptionViewItemV4::StyleOptionVersion",
    "QPainter::RenderHint",
    "QFileDialog::AcceptMode",
    "QStyleOptionMenuItem::MenuItemType",
    "QStyleOptionComplex::StyleOptionVersion",
    "QAccessible::StateFlag",
    "QStyleOptionGraphicsItem::StyleOptionVersion",
    "QDateTimeEdit::Section",
    "QColormap::Mode",
    "QStyleOptionTab::SelectedPosition",
    "QStyleOptionGroupBox::StyleOptionVersion",
    "QFont::Weight",
    "QAbstractItemView::ScrollMode",
    "QKeySequence::StandardKey",
    "QTextItem::RenderFlag",
    "QFormLayout::ItemRole",
    "QSizePolicy::Policy",
    "QFileDialog::FileMode",
    "QTransform::TransformationType",
    "QAccessible::Role",
    "QTextOption::TabType",
    "QItemSelectionModel::SelectionFlag",
    "QAbstractSlider::SliderAction",
    "QPrinter::ColorMode",
    "QStyleOptionTab::StyleOptionType",
    "QStyleOptionToolButton::ToolButtonFeatures",
    "QWidget::RenderFlags",
    "QHeaderView::ResizeMode",
    "QStyleHintReturnVariant::StyleOptionType",
    "QTextOption::Flags",
    "QFont::SpacingType",
    "QMovie::MovieState",
    "QStyleOptionHeader::SortIndicator",
    "QKeySequence::SequenceMatch",
    "QGraphicsSimpleTextItem::enum_1",
    "QAbstractItemView::State",
    "QListWidgetItem::ItemType",
    "QStyle::StateFlag",
    "QSizePolicy::ControlTypes",
    "QGraphicsWidget::enum_1",
    "QSystemTrayIcon::MessageIcon",
    "QMdiArea::ViewMode",
    "QFileDialog::ViewMode",
    "QStyleOptionViewItemV4::ViewItemPosition",
    "QLayout::SizeConstraint",
    "QFrame::Shape",
    "QCalendarWidget::HorizontalHeaderFormat",
    "QStyleOptionSlider::StyleOptionType",
    "QFormLayout::FormStyle",
    "QPaintEngine::DirtyFlag",
    "QTabWidget::TabShape",
    "QMovie::CacheMode",
    "QFileIconProvider::IconType",
    "QTabletEvent::TabletDevice",
    "QTextEdit::LineWrapMode",
    "QStyleOption::OptionType",
    "QPrinter::PageOrder",
    "QStyleOptionSpinBox::StyleOptionType",
    "QMdiArea::AreaOptions",
    "QAbstractPrintDialog::PrintDialogOptions",
    "QColor::Spec",
    "QStyleOption::StyleOptionType",
    "QDockWidget::DockWidgetFeatures",
    "QGraphicsItem::GraphicsItemFlags",
    "QCompleter::CompletionMode",
    "QFileDialog::DialogLabel",
    "QPrinter::Orientation",
    "QStyleOptionToolButton::StyleOptionVersion",
    "QDataWidgetMapper::SubmitPolicy",
    "QStyleOptionDockWidget::StyleOptionVersion",
    "QStyleOptionGroupBox::StyleOptionType",
    "QTextEdit::AutoFormattingFlag",
    "QGraphicsProxyWidget::enum_1",
    "QPrintPreviewWidget::ZoomMode",
    "QIcon::State",
    "QPainter::CompositionMode",
    "QStyle::State",
    "QStyleOptionToolBar::ToolBarPosition",
    "QTextOption::Flag",
    "QAbstractItemDelegate::EndEditHint",
    "QLCDNumber::Mode",
    "QTabBar::Shape",
    "QFrame::StyleMask",
    "QInputContext::StandardFormat",
    "QGraphicsEllipseItem::enum_1",
    "QTextCharFormat::UnderlineStyle",
    "QStyleOptionComplex::StyleOptionType",
    "QAbstractSpinBox::StepEnabled",
    "QFontComboBox::FontFilter",
    "QPaintEngine::PaintEngineFeature",
    "QPrinter::PrinterMode",
    "QGradient::CoordinateMode",
    "QStyleOptionToolBar::StyleOptionType",
    "QStyleOptionViewItem::Position",
    "QStyleOptionFrameV2::FrameFeature",
    "QPrinter::PrinterState",
    "QTextEdit::AutoFormatting",
    "QAbstractItemView::DropIndicatorPosition",
    "QStyleOptionTab::TabPosition",
    "QStyleOptionFocusRect::StyleOptionType",
    "QFileDialog::Options",
    "QTextFrameFormat::Position",
    "QTreeWidgetItem::ItemType",
    "QPaintEngine::PaintEngineFeatures",
    "QGraphicsItemGroup::enum_1",
    "QFontDatabase::WritingSystem",
    "QMessageBox::ButtonRole",
    "QTextCharFormat::VerticalAlignment",
    "QAbstractItemView::EditTriggers",
    "QStyleOptionComboBox::StyleOptionType",
    "QGraphicsScene::SceneLayers",
    "QTableWidgetItem::ItemType",
    "QWizard::WizardButton",
    "QTextFormat::ObjectTypes",
    "QTextLine::Edge",
    "QStyleOptionDockWidgetV2::StyleOptionVersion",
    "QSystemTrayIcon::ActivationReason",
    "QFont::Stretch",
    "QAbstractPrintDialog::PrintRange",
    "QMdiSubWindow::SubWindowOptions",
    "QPalette::ColorGroup",
    "QStyleOptionHeader::SectionPosition",
    "QWizard::WizardStyle",
    "QAccessible::Relation",
    "QGraphicsView::ViewportAnchor",
    "QGraphicsView::DragMode",
    "QStyleOptionFocusRect::StyleOptionVersion",
    "QComboBox::InsertPolicy",
    "QStyle::SubControls",
    "QPainterPath::ElementType",
    "QTextCursor::MoveMode",
    "QLineF::IntersectType",
    "QStyleHintReturnMask::StyleOptionType",
    "QPrintEngine::PrintEnginePropertyKey",
    "QStyleOptionToolBoxV2::SelectedPosition",
    "QTextLine::CursorPosition",
    "QDialog::DialogCode",
    "QDesktopServices::StandardLocation",
    "QAbstractSlider::SliderChange",
    "QBoxLayout::Direction",
    "QStyleOptionSizeGrip::StyleOptionVersion",
    "QListView::Movement",
    "QStyle::SubControl",
    "QTextFormat::PageBreakFlag",
    "QStyleOptionToolButton::ToolButtonFeature",
    "QImageIOPlugin::Capability",
    "QStyleOptionToolBox::StyleOptionVersion",
    "QMessageBox::StandardButtons",
    "QGraphicsRectItem::enum_1",
    "QStyleOptionTab::CornerWidget",
    "QStyleHintReturn::StyleOptionVersion",
    "QInputMethodEvent::AttributeType",
    "QTextDocument::ResourceType",
    "QStyleOptionSpinBox::StyleOptionVersion",
    "QImageIOHandler::ImageOption",
    "QGraphicsPathItem::enum_1",
    "QStyleHintReturn::HintReturnType",
    "QGraphicsTextItem::enum_1",
    "QStyleOptionHeader::StyleOptionType",
    "QImage::InvertMode",
    "QContextMenuEvent::Reason",
    "QMdiSubWindow::SubWindowOption",
    "QTextCursor::SelectionType",
    "QStyle::SubElement",
    "QComboBox::SizeAdjustPolicy",
    "QStyleOptionFrameV2::FrameFeatures",
    "QPrinter::PrintRange",
    "QPrintPreviewWidget::ViewMode",
    "QStyleOptionToolBar::ToolBarFeatures",
    "QPageSetupDialog::PageSetupDialogOption",
    "QKeySequence::SequenceFormat",
    "QStyleOptionButton::ButtonFeatures",
    "QStyleOption::StyleOptionVersion",
    "QTextListFormat::Style",
    "QStyle::ContentsType",
    "QStyleOptionFrame::StyleOptionVersion",
    "QPaintEngine::DirtyFlags",
    "QWizard::WizardOptions",
    "QAction::ActionEvent",
    "QTreeWidgetItemIterator::IteratorFlags",
    "QAbstractItemView::CursorAction",
    "QAction::MenuRole",
    "QAbstractPrintDialog::PrintDialogOption",
    "QStyleOptionMenuItem::StyleOptionVersion",
    "QPageSetupDialog::PageSetupDialogOptions",
    "QFont::StyleHint",
    "QProgressBar::Direction",
    "QStyleOptionToolButton::StyleOptionType",
    "QStyleOptionTab::StyleOptionVersion",
    "QStyleOptionToolBar::StyleOptionVersion",
    "QImageReader::ImageReaderError",
    "QGraphicsItem::enum_1",
    "QListView::LayoutMode",
    "QStyleOptionHeader::StyleOptionVersion",
    "QWorkspace::WindowOrder",
    "QStyleOptionTitleBar::StyleOptionType",
    "QStyleOptionMenuItem::CheckType",
    "QStyleOptionProgressBar::StyleOptionVersion",
    "QStyleOptionFrame::StyleOptionType",
    "QStyleOptionProgressBarV2::StyleOptionType",
    "QImageWriter::ImageWriterError",
    "QAbstractSpinBox::StepEnabledFlag",
    "QMainWindow::DockOptions",
    "QAbstractItemView::ScrollHint",
    "QSizePolicy::PolicyFlag",
    "QStyle::PrimitiveElement",
    "QStyleOptionHeader::SelectedPosition",
    "QTreeWidgetItemIterator::IteratorFlag",
    "QWizard::WizardOption",
    "QFileSystemModel::Roles",
    "QLCDNumber::SegmentStyle",
    "QStyleOptionRubberBand::StyleOptionVersion",
    "QStyleHintReturnMask::StyleOptionVersion",
    "QApplication::Type",
    "QAccessible::Event",
    "QStyleOptionTabWidgetFrame::StyleOptionVersion",
    "QMdiArea::AreaOption",
    "QAbstractSpinBox::ButtonSymbols",
    "QStyleOptionProgressBarV2::StyleOptionVersion",
    "QPaintEngine::Type",
    "QPrinter::PaperSource",
    "QAbstractItemView::EditTrigger",
    "QGradient::Type",
    "QPalette::ColorRole",
    "QPlainTextEdit::LineWrapMode",
    "QGraphicsView::OptimizationFlag",
    "QMessageBox::Icon",
    "QGraphicsPixmapItem::ShapeMode",
    "QApplication::ColorSpec",
    "QCalendarWidget::VerticalHeaderFormat",
    "QListView::ViewMode",
    "QStyleOptionRubberBand::StyleOptionType",
    "QClipboard::Mode",
    "QStyleOptionToolBoxV2::TabPosition",
    "QStyleOptionSizeGrip::StyleOptionType",
    "QFileDialog::Option",
    "QStyleOptionButton::StyleOptionType",
    "QStandardItem::ItemType",
    "QMdiArea::WindowOrder",
    "QFormLayout::RowWrapPolicy",
    "QTextDocument::FindFlags",
    "QGraphicsView::OptimizationFlags",
    "QStyleOptionTab::CornerWidgets",
    "QValidator::State",
    "QListView::ResizeMode",
    "QMainWindow::DockOption",
    "QAbstractItemView::SelectionBehavior",
    "QTextItem::RenderFlags",
    "QStyleOptionFrameV2::StyleOptionVersion",
    "QPaintDevice::PaintDeviceMetric",
    "QDialogButtonBox::ButtonRole",
    "QStyleOptionDockWidget::StyleOptionType",
    "QRegion::RegionType",
    "QTextFormat::PageBreakFlags",
    "QFont::Capitalization",
    "QCompleter::ModelSorting",
    "QStyleOptionViewItem::StyleOptionVersion",
    "QPrinter::PageSize",
    "QDoubleValidator::Notation",
    "QTabletEvent::PointerType",
    "QSizePolicy::ControlType"
};

static bool polymorphichandler_Lqt_core_QEvent_2(const void *ptr, char **class_name, char **package)
{
    Q_ASSERT(ptr != 0);
    QEvent *object = (QEvent *)ptr;
    if (object->type() == QEvent::AccessibilityDescription || object->type() == QEvent::AccessibilityHelp) {
        *class_name = "QAccessibleEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::ActionAdded || object->type() == QEvent::ActionRemoved || object->type() == QEvent::ActionChanged) {
        *class_name = "QActionEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::Clipboard) {
        *class_name = "QClipboardEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::Close) {
        *class_name = "QCloseEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::ContextMenu) {
        *class_name = "QContextMenuEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::DragEnter) {
        *class_name = "QDragEnterEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::DragLeave) {
        *class_name = "QDragLeaveEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::DragMove) {
        *class_name = "QDragMoveEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::DragResponse) {
        *class_name = "QDragResponseEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::Drop) {
        *class_name = "QDropEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::FileOpen) {
        *class_name = "QFileOpenEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::FocusIn || object->type() == QEvent::FocusOut) {
        *class_name = "QFocusEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::GraphicsSceneContextMenu) {
        *class_name = "QGraphicsSceneContextMenuEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::GraphicsSceneDragEnter || object->type() == QEvent::GraphicsSceneDragLeave || object->type() == QEvent::GraphicsSceneDragMove || object->type() == QEvent::GraphicsSceneDrop) {
        *class_name = "QGraphicsSceneDragDropEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::GraphicsSceneHelp) {
        *class_name = "QGraphicsSceneHelpEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::GraphicsSceneHoverEnter || object->type() == QEvent::GraphicsSceneHoverLeave || object->type() == QEvent::GraphicsSceneHoverMove) {
        *class_name = "QGraphicsSceneHoverEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::GraphicsSceneMouseDoubleClick || object->type() == QEvent::GraphicsSceneMouseMove || object->type() == QEvent::GraphicsSceneMousePress || object->type() == QEvent::GraphicsSceneMouseRelease) {
        *class_name = "QGraphicsSceneMouseEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::GraphicsSceneMove) {
        *class_name = "QGraphicsSceneMoveEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::GraphicsSceneResize) {
        *class_name = "QGraphicsSceneResizeEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::GraphicsSceneWheel) {
        *class_name = "QGraphicsSceneWheelEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::ToolTip || object->type() == QEvent::WhatsThis) {
        *class_name = "QHelpEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::Hide) {
        *class_name = "QHideEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::HoverEnter || object->type() == QEvent::HoverLeave || object->type() == QEvent::HoverMove) {
        *class_name = "QHoverEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::IconDrag) {
        *class_name = "QIconDragEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::InputMethod) {
        *class_name = "QInputMethodEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::KeyPress || object->type() == QEvent::KeyRelease) {
        *class_name = "QKeyEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::MouseButtonDblClick || object->type() == QEvent::MouseButtonPress || object->type() == QEvent::MouseButtonRelease || object->type() == QEvent::MouseMove) {
        *class_name = "QMouseEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::Move) {
        *class_name = "QMoveEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::Paint) {
        *class_name = "QPaintEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::Resize) {
        *class_name = "QResizeEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::Shortcut) {
        *class_name = "QShortcutEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::Show) {
        *class_name = "QShowEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::StatusTip) {
        *class_name = "QStatusTipEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::TabletMove || object->type() == QEvent::TabletPress || object->type() == QEvent::TabletRelease) {
        *class_name = "QTabletEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::ToolBarChange) {
        *class_name = "QToolBarChangeEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::WhatsThisClicked) {
        *class_name = "QWhatsThisClickedEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::Wheel) {
        *class_name = "QWheelEvent";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QEvent::WindowStateChange) {
        *class_name = "QWindowStateChangeEvent";
        *package    = "qt/gui/";
        return true;
    }
    return false;
}
static bool polymorphichandler_Lqt_gui_QGradient_2(const void *ptr, char **class_name, char **package)
{
    Q_ASSERT(ptr != 0);
    QGradient *object = (QGradient *)ptr;
    if (object->type() == QGradient::ConicalGradient) {
        *class_name = "QConicalGradient";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QGradient::NoGradient) {
        *class_name = "QGradient";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QGradient::LinearGradient) {
        *class_name = "QLinearGradient";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type() == QGradient::RadialGradient) {
        *class_name = "QRadialGradient";
        *package    = "qt/gui/";
        return true;
    }
    return false;
}
static bool polymorphichandler_Lqt_gui_QStyleOption_2(const void *ptr, char **class_name, char **package)
{
    Q_ASSERT(ptr != 0);
    QStyleOption *object = (QStyleOption *)ptr;
    if (object->type == QStyleOption::SO_Default) {
        *class_name = "QStyleOption";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionButton::Type && object->version == QStyleOptionButton::Version) {
        *class_name = "QStyleOptionButton";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionComboBox::Type && object->version == QStyleOptionComboBox::Version) {
        *class_name = "QStyleOptionComboBox";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionComplex::Type && object->version == QStyleOptionComplex::Version) {
        *class_name = "QStyleOptionComplex";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionDockWidget::Type && object->version == QStyleOptionDockWidget::Version) {
        *class_name = "QStyleOptionDockWidget";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionDockWidgetV2::Type && object->version == QStyleOptionDockWidgetV2::Version) {
        *class_name = "QStyleOptionDockWidgetV2";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionFocusRect::Type && object->version == QStyleOptionFocusRect::Version) {
        *class_name = "QStyleOptionFocusRect";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionFrame::Type && object->version == QStyleOptionFrame::Version) {
        *class_name = "QStyleOptionFrame";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionFrameV2::Type && object->version == QStyleOptionFrameV2::Version) {
        *class_name = "QStyleOptionFrameV2";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionGraphicsItem::Type && object->version == QStyleOptionGraphicsItem::Version) {
        *class_name = "QStyleOptionGraphicsItem";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionGroupBox::Type && object->version == QStyleOptionGroupBox::Version) {
        *class_name = "QStyleOptionGroupBox";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionHeader::Type && object->version == QStyleOptionHeader::Version) {
        *class_name = "QStyleOptionHeader";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionMenuItem::Type && object->version == QStyleOptionMenuItem::Version) {
        *class_name = "QStyleOptionMenuItem";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionProgressBar::Type && object->version == QStyleOptionProgressBar::Version) {
        *class_name = "QStyleOptionProgressBar";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionProgressBarV2::Type && object->version == QStyleOptionProgressBarV2::Version) {
        *class_name = "QStyleOptionProgressBarV2";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionRubberBand::Type && object->version == QStyleOptionRubberBand::Version) {
        *class_name = "QStyleOptionRubberBand";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionSizeGrip::Type && object->version == QStyleOptionSizeGrip::Version) {
        *class_name = "QStyleOptionSizeGrip";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionSlider::Type && object->version == QStyleOptionSlider::Version) {
        *class_name = "QStyleOptionSlider";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionSpinBox::Type && object->version == QStyleOptionSpinBox::Version) {
        *class_name = "QStyleOptionSpinBox";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionTab::Type && object->version == QStyleOptionTab::Version) {
        *class_name = "QStyleOptionTab";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionTabBarBase::Type && object->version == QStyleOptionTabBarBase::Version) {
        *class_name = "QStyleOptionTabBarBase";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionTabV2::Type && object->version == QStyleOptionTabV2::Version) {
        *class_name = "QStyleOptionTabV2";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionTabWidgetFrame::Type && object->version == QStyleOptionTabWidgetFrame::Version) {
        *class_name = "QStyleOptionTabWidgetFrame";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionTitleBar::Type && object->version == QStyleOptionTitleBar::Version) {
        *class_name = "QStyleOptionTitleBar";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionToolBar::Type && object->version == QStyleOptionToolBar::Version) {
        *class_name = "QStyleOptionToolBar";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionToolBox::Type && object->version == QStyleOptionToolBox::Version) {
        *class_name = "QStyleOptionToolBox";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionToolBoxV2::Type && object->version == QStyleOptionToolBoxV2::Version) {
        *class_name = "QStyleOptionToolBoxV2";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionToolButton::Type && object->version == QStyleOptionToolButton::Version) {
        *class_name = "QStyleOptionToolButton";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionViewItem::Type && object->version == QStyleOptionViewItem::Version) {
        *class_name = "QStyleOptionViewItem";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionViewItemV2::Type && object->version == QStyleOptionViewItemV2::Version) {
        *class_name = "QStyleOptionViewItemV2";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionViewItemV3::Type && object->version == QStyleOptionViewItemV3::Version) {
        *class_name = "QStyleOptionViewItemV3";
        *package    = "qt/gui/";
        return true;
    }
    if (object->type == QStyleOptionViewItemV4::Type && object->version == QStyleOptionViewItemV4::Version) {
        *class_name = "QStyleOptionViewItemV4";
        *package    = "qt/gui/";
        return true;
    }
    return false;
}
void __metainfo_init_qt_gui()
{
    registerQtToJava("unsigned char", "ubyte");
    registerQtToJava("int", "int");
    registerJavaToQt("int", "int");
    registerQtToJava("QString", "java/lang/string");
    registerJavaToQt("java/lang/string", "QString");
    registerQtToJava("QStringRef", "java/lang/string");
    registerQtToJava("QLatin1String", "java/lang/string");
    registerQtToJava("GLint", "int");
    registerQtToJava("ulong", "ulong");
    registerQtToJava("QBool", "bool");
    registerQtToJava("QChar", "char");
    registerJavaToQt("char", "QChar");
    registerQtToJava("signed char", "byte");
    registerQtToJava("float", "float");
    registerJavaToQt("float", "float");
    registerQtToJava("double", "double");
    registerJavaToQt("double", "double");
    registerQtToJava("signed int", "int");
    registerQtToJava("unsigned int", "uint");
    registerQtToJava("Qt::HANDLE", "long");
    registerQtToJava("size_t", "size_t");
    registerJavaToQt("size_t", "size_t");
    qRegisterMetaType<size_t>("size_t");
    registerQtToJava("long", "int");
    registerQtToJava("quintptr", "quintptr");
    registerQtToJava("bool", "bool");
    registerJavaToQt("bool", "bool");
    registerQtToJava("qint64", "long");
    registerQtToJava("signed long", "int");
    registerQtToJava("unsigned short", "ushort");
    registerQtToJava("char", "char");
    registerJavaToQt("char", "char");
    registerQtToJava("unsigned __int64", "long");
    registerQtToJava("short", "short");
    registerJavaToQt("short", "short");
    registerQtToJava("QXmlStreamStringRef", "java/lang/string");
    registerQtToJava("uint", "uint");
    registerJavaToQt("uint", "uint");
    registerQtToJava("WId", "long");
    registerQtToJava("unsigned long long", "ulong");
    registerQtToJava("QLatin1Char", "char");
    registerQtToJava("jobject", "java.lang.Object");
    registerJavaToQt("java.lang.Object", "jobject");
    qRegisterMetaType<jobject>("jobject");
    registerQtToJava("__int64", "long");
    registerQtToJava("QVariant", "QVariant");
    registerJavaToQt("QVariant", "QVariant");
    registerQtToJava("GLenum", "int");
    registerQtToJava("QByteRef", "byte");
    registerQtToJava("unsigned long", "uint");
    registerQtToJava("signed short", "short");
    registerQtToJava("GLuint", "int");
    registerQtToJava("QBitRef", "bool");
    for (int i=0;i<sns_count; ++i) {
        registerQtToJava(qtNames[i], javaFunctionNames[i]);
        if (getQtName(javaObjectNames[i]).length() < QByteArray(qtNames[i]).size())
            registerJavaToQt(javaObjectNames[i], qtNames[i]);
        registerJavaSignature(qtNames[i], javaSignatures[i]);
    }
    for (int i=0;i<enum_count; ++i) {
        registerQtToJava(enumCppNames[i], enumJavaNames[i]);
        registerJavaToQt(enumJavaNames[i], enumCppNames[i]);
    }
    registerJavaToQt("qt/gui/IQAbstractAccessibleFactory", "QAbstractAccessibleFactory");
    registerJavaToQt("qt/gui/IQAbstractIconEngineFactoryV2", "QAbstractIconEngineFactoryV2");
    registerJavaToQt("qt/gui/IQAbstractImageIOHandlerFactory", "QAbstractImageIOHandlerFactory");
    registerJavaToQt("qt/gui/IQAbstractInputContextFactory", "QAbstractInputContextFactory");
    registerJavaToQt("qt/gui/IQAbstractPictureFormat", "QAbstractPictureFormat");
    registerJavaToQt("qt/gui/IQAbstractStyleFactory", "QAbstractStyleFactory");
    registerJavaToQt("qt/gui/IQAbstractTextCodecFactory", "QAbstractTextCodecFactory");
    registerJavaToQt("qt/gui/IQGraphicsItem", "QGraphicsItem");
    registerJavaToQt("qt/gui/IQGraphicsLayoutItem", "QGraphicsLayoutItem");
    registerJavaToQt("qt/gui/IQLayoutItem", "QLayoutItem");
    registerJavaToQt("qt/gui/IQPaintDevice", "QPaintDevice");
    registerQtToJava("QAccessibleFactoryInterface", "qt/gui/QAbstractAccessibleFactory_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAbstractAccessibleFactory_ConcreteWrapper", "QAccessibleFactoryInterface");
    registerDestructor("qt/gui/QAbstractAccessibleFactory_ConcreteWrapper", destructor_qt_gui_QAbstractAccessibleFactory_ConcreteWrapper);
    registerQtToJava("QAbstractButton", "qt/gui/QAbstractButton_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAbstractButton_ConcreteWrapper", "QAbstractButton");
    registerDeletionPolicy("qt/gui/QAbstractGraphicsShapeItem_ConcreteWrapper", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QAbstractGraphicsShapeItem", "qt/gui/QAbstractGraphicsShapeItem_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAbstractGraphicsShapeItem_ConcreteWrapper", "QAbstractGraphicsShapeItem");
    registerDestructor("qt/gui/QAbstractGraphicsShapeItem_ConcreteWrapper", destructor_qt_gui_QAbstractGraphicsShapeItem_ConcreteWrapper);
    registerQtToJava("QIconEngineFactoryInterfaceV2", "qt/gui/QAbstractIconEngineFactoryV2_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAbstractIconEngineFactoryV2_ConcreteWrapper", "QIconEngineFactoryInterfaceV2");
    registerDestructor("qt/gui/QAbstractIconEngineFactoryV2_ConcreteWrapper", destructor_qt_gui_QAbstractIconEngineFactoryV2_ConcreteWrapper);
    registerQtToJava("QImageIOHandlerFactoryInterface", "qt/gui/QAbstractImageIOHandlerFactory_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAbstractImageIOHandlerFactory_ConcreteWrapper", "QImageIOHandlerFactoryInterface");
    registerDestructor("qt/gui/QAbstractImageIOHandlerFactory_ConcreteWrapper", destructor_qt_gui_QAbstractImageIOHandlerFactory_ConcreteWrapper);
    registerQtToJava("QInputContextFactoryInterface", "qt/gui/QAbstractInputContextFactory_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAbstractInputContextFactory_ConcreteWrapper", "QInputContextFactoryInterface");
    registerDestructor("qt/gui/QAbstractInputContextFactory_ConcreteWrapper", destructor_qt_gui_QAbstractInputContextFactory_ConcreteWrapper);
    registerQtToJava("QAbstractItemDelegate", "qt/gui/QAbstractItemDelegate_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAbstractItemDelegate_ConcreteWrapper", "QAbstractItemDelegate");
    registerQtToJava("QAbstractItemView", "qt/gui/QAbstractItemView_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAbstractItemView_ConcreteWrapper", "QAbstractItemView");
    registerQtToJava("QAbstractPageSetupDialog", "qt/gui/QAbstractPageSetupDialog_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAbstractPageSetupDialog_ConcreteWrapper", "QAbstractPageSetupDialog");
    registerQtToJava("QPictureFormatInterface", "qt/gui/QAbstractPictureFormat_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAbstractPictureFormat_ConcreteWrapper", "QPictureFormatInterface");
    registerDestructor("qt/gui/QAbstractPictureFormat_ConcreteWrapper", destructor_qt_gui_QAbstractPictureFormat_ConcreteWrapper);
    registerQtToJava("QAbstractPrintDialog", "qt/gui/QAbstractPrintDialog_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAbstractPrintDialog_ConcreteWrapper", "QAbstractPrintDialog");
    registerQtToJava("QAbstractProxyModel", "qt/gui/QAbstractProxyModel_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAbstractProxyModel_ConcreteWrapper", "QAbstractProxyModel");
    registerQtToJava("QAbstractScrollArea", "qt/gui/QAbstractScrollArea");
    registerJavaToQt("qt/gui/QAbstractScrollArea", "QAbstractScrollArea");
    registerQtToJava("QAbstractSlider", "qt/gui/QAbstractSlider");
    registerJavaToQt("qt/gui/QAbstractSlider", "QAbstractSlider");
    registerQtToJava("QAbstractSpinBox", "qt/gui/QAbstractSpinBox");
    registerJavaToQt("qt/gui/QAbstractSpinBox", "QAbstractSpinBox");
    registerQtToJava("QStyleFactoryInterface", "qt/gui/QAbstractStyleFactory_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAbstractStyleFactory_ConcreteWrapper", "QStyleFactoryInterface");
    registerDestructor("qt/gui/QAbstractStyleFactory_ConcreteWrapper", destructor_qt_gui_QAbstractStyleFactory_ConcreteWrapper);
    registerQtToJava("QAbstractTableModel", "qt/gui/QAbstractTableModel_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAbstractTableModel_ConcreteWrapper", "QAbstractTableModel");
    registerQtToJava("QTextCodecFactoryInterface", "qt/gui/QAbstractTextCodecFactory_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAbstractTextCodecFactory_ConcreteWrapper", "QTextCodecFactoryInterface");
    registerDestructor("qt/gui/QAbstractTextCodecFactory_ConcreteWrapper", destructor_qt_gui_QAbstractTextCodecFactory_ConcreteWrapper);
    registerQtToJava("QAbstractTextDocumentLayout", "qt/gui/QAbstractTextDocumentLayout_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAbstractTextDocumentLayout_ConcreteWrapper", "QAbstractTextDocumentLayout");
    registerDeletionPolicy("qt/gui/QAbstractTextDocumentLayout_PaintContext", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QAbstractTextDocumentLayout::PaintContext", "qt/gui/QAbstractTextDocumentLayout_PaintContext");
    registerJavaToQt("qt/gui/QAbstractTextDocumentLayout_PaintContext", "QAbstractTextDocumentLayout::PaintContext");
    qRegisterMetaType<QAbstractTextDocumentLayout::PaintContext>("QAbstractTextDocumentLayout::PaintContext");
    registerDeletionPolicy("qt/gui/QAbstractTextDocumentLayout_Selection", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QAbstractTextDocumentLayout::Selection", "qt/gui/QAbstractTextDocumentLayout_Selection");
    registerJavaToQt("qt/gui/QAbstractTextDocumentLayout_Selection", "QAbstractTextDocumentLayout::Selection");
    qRegisterMetaType<QAbstractTextDocumentLayout::Selection>("QAbstractTextDocumentLayout::Selection");
    registerQtToJava("QAccessible", "qt/gui/QAccessible");
    registerJavaToQt("qt/gui/QAccessible", "QAccessible");
    registerDestructor("qt/gui/QAccessible", destructor_qt_gui_QAccessible);
    registerQtToJava("QAccessible2Interface", "qt/gui/QAccessible2Interface");
    registerJavaToQt("qt/gui/QAccessible2Interface", "QAccessible2Interface");
    registerDestructor("qt/gui/QAccessible2Interface", destructor_qt_gui_QAccessible2Interface);
    registerQtToJava("QAccessibleBridge", "qt/gui/QAccessibleBridge_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAccessibleBridge_ConcreteWrapper", "QAccessibleBridge");
    registerDestructor("qt/gui/QAccessibleBridge_ConcreteWrapper", destructor_qt_gui_QAccessibleBridge_ConcreteWrapper);
    registerQtToJava("QAccessibleEvent", "qt/gui/QAccessibleEvent");
    registerJavaToQt("qt/gui/QAccessibleEvent", "QAccessibleEvent");
    registerDestructor("qt/gui/QAccessibleEvent", destructor_qt_gui_QAccessibleEvent);
    registerQtToJava("QAccessibleInterface", "qt/gui/QAccessibleInterface_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAccessibleInterface_ConcreteWrapper", "QAccessibleInterface");
    registerDestructor("qt/gui/QAccessibleInterface_ConcreteWrapper", destructor_qt_gui_QAccessibleInterface_ConcreteWrapper);
    registerQtToJava("QAccessibleInterfaceEx", "qt/gui/QAccessibleInterfaceEx_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAccessibleInterfaceEx_ConcreteWrapper", "QAccessibleInterfaceEx");
    registerDestructor("qt/gui/QAccessibleInterfaceEx_ConcreteWrapper", destructor_qt_gui_QAccessibleInterfaceEx_ConcreteWrapper);
    registerQtToJava("QAccessibleObject", "qt/gui/QAccessibleObject_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAccessibleObject_ConcreteWrapper", "QAccessibleObject");
    registerDestructor("qt/gui/QAccessibleObject_ConcreteWrapper", destructor_qt_gui_QAccessibleObject_ConcreteWrapper);
    registerQtToJava("QAccessibleObjectEx", "qt/gui/QAccessibleObjectEx_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAccessibleObjectEx_ConcreteWrapper", "QAccessibleObjectEx");
    registerDestructor("qt/gui/QAccessibleObjectEx_ConcreteWrapper", destructor_qt_gui_QAccessibleObjectEx_ConcreteWrapper);
    registerQtToJava("QAccessiblePlugin", "qt/gui/QAccessiblePlugin_ConcreteWrapper");
    registerJavaToQt("qt/gui/QAccessiblePlugin_ConcreteWrapper", "QAccessiblePlugin");
    registerQtToJava("QAccessibleWidget", "qt/gui/QAccessibleWidget");
    registerJavaToQt("qt/gui/QAccessibleWidget", "QAccessibleWidget");
    registerDestructor("qt/gui/QAccessibleWidget", destructor_qt_gui_QAccessibleWidget);
    registerQtToJava("QAccessibleWidgetEx", "qt/gui/QAccessibleWidgetEx");
    registerJavaToQt("qt/gui/QAccessibleWidgetEx", "QAccessibleWidgetEx");
    registerDestructor("qt/gui/QAccessibleWidgetEx", destructor_qt_gui_QAccessibleWidgetEx);
    registerQtToJava("QAction", "qt/gui/QAction");
    registerJavaToQt("qt/gui/QAction", "QAction");
    registerQtToJava("QActionEvent", "qt/gui/QActionEvent");
    registerJavaToQt("qt/gui/QActionEvent", "QActionEvent");
    registerDestructor("qt/gui/QActionEvent", destructor_qt_gui_QActionEvent);
    registerQtToJava("QActionGroup", "qt/gui/QActionGroup");
    registerJavaToQt("qt/gui/QActionGroup", "QActionGroup");
    registerQtToJava("QApplication", "qt/gui/QApplication");
    registerJavaToQt("qt/gui/QApplication", "QApplication");
    registerDeletionPolicy("qt/gui/QBitmap", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QBitmap", "qt/gui/QBitmap");
    registerJavaToQt("qt/gui/QBitmap", "QBitmap");
    registerQtToJava("QBoxLayout", "qt/gui/QBoxLayout");
    registerJavaToQt("qt/gui/QBoxLayout", "QBoxLayout");
    registerQtToJava("QBrush", "qt/gui/QBrush");
    registerJavaToQt("qt/gui/QBrush", "QBrush");
    registerQtToJava("QButtonGroup", "qt/gui/QButtonGroup");
    registerJavaToQt("qt/gui/QButtonGroup", "QButtonGroup");
    registerQtToJava("QCDEStyle", "qt/gui/QCDEStyle");
    registerJavaToQt("qt/gui/QCDEStyle", "QCDEStyle");
    registerQtToJava("QCalendarWidget", "qt/gui/QCalendarWidget");
    registerJavaToQt("qt/gui/QCalendarWidget", "QCalendarWidget");
    registerQtToJava("QCheckBox", "qt/gui/QCheckBox");
    registerJavaToQt("qt/gui/QCheckBox", "QCheckBox");
    registerQtToJava("QCleanlooksStyle", "qt/gui/QCleanlooksStyle");
    registerJavaToQt("qt/gui/QCleanlooksStyle", "QCleanlooksStyle");
    registerQtToJava("QClipboard", "qt/gui/QClipboard");
    registerJavaToQt("qt/gui/QClipboard", "QClipboard");
    registerQtToJava("QClipboardEvent", "qt/gui/QClipboardEvent");
    registerJavaToQt("qt/gui/QClipboardEvent", "QClipboardEvent");
    registerDestructor("qt/gui/QClipboardEvent", destructor_qt_gui_QClipboardEvent);
    registerQtToJava("QCloseEvent", "qt/gui/QCloseEvent");
    registerJavaToQt("qt/gui/QCloseEvent", "QCloseEvent");
    registerDestructor("qt/gui/QCloseEvent", destructor_qt_gui_QCloseEvent);
    registerQtToJava("QColor", "qt/gui/QColor");
    registerJavaToQt("qt/gui/QColor", "QColor");
    registerQtToJava("QColorDialog", "qt/gui/QColorDialog");
    registerJavaToQt("qt/gui/QColorDialog", "QColorDialog");
    registerDeletionPolicy("qt/gui/QColormap", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QColormap", "qt/gui/QColormap");
    registerJavaToQt("qt/gui/QColormap", "QColormap");
    QMetaType::registerType("QColormap",
                            reinterpret_cast<QMetaType::Destructor>(qcolormap_delete),
                            reinterpret_cast<QMetaType::Constructor>(qcolormap_create));
    registerQtToJava("QColumnView", "qt/gui/QColumnView");
    registerJavaToQt("qt/gui/QColumnView", "QColumnView");
    registerQtToJava("QComboBox", "qt/gui/QComboBox");
    registerJavaToQt("qt/gui/QComboBox", "QComboBox");
    registerQtToJava("QCommandLinkButton", "qt/gui/QCommandLinkButton");
    registerJavaToQt("qt/gui/QCommandLinkButton", "QCommandLinkButton");
    registerQtToJava("QCommonStyle", "qt/gui/QCommonStyle");
    registerJavaToQt("qt/gui/QCommonStyle", "QCommonStyle");
    registerQtToJava("QCompleter", "qt/gui/QCompleter");
    registerJavaToQt("qt/gui/QCompleter", "QCompleter");
    registerQtToJava("QConicalGradient", "qt/gui/QConicalGradient");
    registerJavaToQt("qt/gui/QConicalGradient", "QConicalGradient");
    QMetaType::registerType("QConicalGradient",
                            reinterpret_cast<QMetaType::Destructor>(qconicalgradient_delete),
                            reinterpret_cast<QMetaType::Constructor>(qconicalgradient_create));
    registerQtToJava("QContextMenuEvent", "qt/gui/QContextMenuEvent");
    registerJavaToQt("qt/gui/QContextMenuEvent", "QContextMenuEvent");
    registerDestructor("qt/gui/QContextMenuEvent", destructor_qt_gui_QContextMenuEvent);
    registerDeletionPolicy("qt/gui/QCursor", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QCursor", "qt/gui/QCursor");
    registerJavaToQt("qt/gui/QCursor", "QCursor");
    registerQtToJava("QDataWidgetMapper", "qt/gui/QDataWidgetMapper");
    registerJavaToQt("qt/gui/QDataWidgetMapper", "QDataWidgetMapper");
    registerQtToJava("QDateEdit", "qt/gui/QDateEdit");
    registerJavaToQt("qt/gui/QDateEdit", "QDateEdit");
    registerQtToJava("QDateTimeEdit", "qt/gui/QDateTimeEdit");
    registerJavaToQt("qt/gui/QDateTimeEdit", "QDateTimeEdit");
    registerQtToJava("QDesktopServices", "qt/gui/QDesktopServices");
    registerJavaToQt("qt/gui/QDesktopServices", "QDesktopServices");
    registerDestructor("qt/gui/QDesktopServices", destructor_qt_gui_QDesktopServices);
    registerQtToJava("QDesktopWidget", "qt/gui/QDesktopWidget");
    registerJavaToQt("qt/gui/QDesktopWidget", "QDesktopWidget");
    registerQtToJava("QDial", "qt/gui/QDial");
    registerJavaToQt("qt/gui/QDial", "QDial");
    registerQtToJava("QDialog", "qt/gui/QDialog");
    registerJavaToQt("qt/gui/QDialog", "QDialog");
    registerQtToJava("QDialogButtonBox", "qt/gui/QDialogButtonBox");
    registerJavaToQt("qt/gui/QDialogButtonBox", "QDialogButtonBox");
    registerQtToJava("QDirModel", "qt/gui/QDirModel");
    registerJavaToQt("qt/gui/QDirModel", "QDirModel");
    registerQtToJava("QDockWidget", "qt/gui/QDockWidget");
    registerJavaToQt("qt/gui/QDockWidget", "QDockWidget");
    registerQtToJava("QDoubleSpinBox", "qt/gui/QDoubleSpinBox");
    registerJavaToQt("qt/gui/QDoubleSpinBox", "QDoubleSpinBox");
    registerQtToJava("QDoubleValidator", "qt/gui/QDoubleValidator");
    registerJavaToQt("qt/gui/QDoubleValidator", "QDoubleValidator");
    registerQtToJava("QDrag", "qt/gui/QDrag");
    registerJavaToQt("qt/gui/QDrag", "QDrag");
    registerQtToJava("QDragEnterEvent", "qt/gui/QDragEnterEvent");
    registerJavaToQt("qt/gui/QDragEnterEvent", "QDragEnterEvent");
    registerDestructor("qt/gui/QDragEnterEvent", destructor_qt_gui_QDragEnterEvent);
    registerQtToJava("QDragLeaveEvent", "qt/gui/QDragLeaveEvent");
    registerJavaToQt("qt/gui/QDragLeaveEvent", "QDragLeaveEvent");
    registerDestructor("qt/gui/QDragLeaveEvent", destructor_qt_gui_QDragLeaveEvent);
    registerQtToJava("QDragMoveEvent", "qt/gui/QDragMoveEvent");
    registerJavaToQt("qt/gui/QDragMoveEvent", "QDragMoveEvent");
    registerDestructor("qt/gui/QDragMoveEvent", destructor_qt_gui_QDragMoveEvent);
    registerQtToJava("QDragResponseEvent", "qt/gui/QDragResponseEvent");
    registerJavaToQt("qt/gui/QDragResponseEvent", "QDragResponseEvent");
    registerDestructor("qt/gui/QDragResponseEvent", destructor_qt_gui_QDragResponseEvent);
    registerQtToJava("QDropEvent", "qt/gui/QDropEvent");
    registerJavaToQt("qt/gui/QDropEvent", "QDropEvent");
    registerDestructor("qt/gui/QDropEvent", destructor_qt_gui_QDropEvent);
    registerQtToJava("QErrorMessage", "qt/gui/QErrorMessage");
    registerJavaToQt("qt/gui/QErrorMessage", "QErrorMessage");
    registerQtToJava("QFileDialog", "qt/gui/QFileDialog");
    registerJavaToQt("qt/gui/QFileDialog", "QFileDialog");
    registerQtToJava("QFileIconProvider", "qt/gui/QFileIconProvider");
    registerJavaToQt("qt/gui/QFileIconProvider", "QFileIconProvider");
    registerDestructor("qt/gui/QFileIconProvider", destructor_qt_gui_QFileIconProvider);
    registerQtToJava("QFileOpenEvent", "qt/gui/QFileOpenEvent");
    registerJavaToQt("qt/gui/QFileOpenEvent", "QFileOpenEvent");
    registerDestructor("qt/gui/QFileOpenEvent", destructor_qt_gui_QFileOpenEvent);
    registerQtToJava("QFileSystemModel", "qt/gui/QFileSystemModel");
    registerJavaToQt("qt/gui/QFileSystemModel", "QFileSystemModel");
    registerQtToJava("QFocusEvent", "qt/gui/QFocusEvent");
    registerJavaToQt("qt/gui/QFocusEvent", "QFocusEvent");
    registerDestructor("qt/gui/QFocusEvent", destructor_qt_gui_QFocusEvent);
    registerQtToJava("QFocusFrame", "qt/gui/QFocusFrame");
    registerJavaToQt("qt/gui/QFocusFrame", "QFocusFrame");
    registerDeletionPolicy("qt/gui/QFont", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QFont", "qt/gui/QFont");
    registerJavaToQt("qt/gui/QFont", "QFont");
    registerQtToJava("QFontComboBox", "qt/gui/QFontComboBox");
    registerJavaToQt("qt/gui/QFontComboBox", "QFontComboBox");
    registerDeletionPolicy("qt/gui/QFontDatabase", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QFontDatabase", "qt/gui/QFontDatabase");
    registerJavaToQt("qt/gui/QFontDatabase", "QFontDatabase");
    qRegisterMetaType<QFontDatabase>("QFontDatabase");
    registerQtToJava("QFontDialog", "qt/gui/QFontDialog");
    registerJavaToQt("qt/gui/QFontDialog", "QFontDialog");
    registerQtToJava("QFontInfo", "qt/gui/QFontInfo");
    registerJavaToQt("qt/gui/QFontInfo", "QFontInfo");
    QMetaType::registerType("QFontInfo",
                            reinterpret_cast<QMetaType::Destructor>(qfontinfo_delete),
                            reinterpret_cast<QMetaType::Constructor>(qfontinfo_create));
    registerDeletionPolicy("qt/gui/QFontMetrics", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QFontMetrics", "qt/gui/QFontMetrics");
    registerJavaToQt("qt/gui/QFontMetrics", "QFontMetrics");
    qRegisterMetaType<QFontMetrics>("QFontMetrics");
    registerDeletionPolicy("qt/gui/QFontMetricsF", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QFontMetricsF", "qt/gui/QFontMetricsF");
    registerJavaToQt("qt/gui/QFontMetricsF", "QFontMetricsF");
    qRegisterMetaType<QFontMetricsF>("QFontMetricsF");
    registerQtToJava("QFormLayout", "qt/gui/QFormLayout");
    registerJavaToQt("qt/gui/QFormLayout", "QFormLayout");
    registerQtToJava("QFrame", "qt/gui/QFrame");
    registerJavaToQt("qt/gui/QFrame", "QFrame");
    registerQtToJava("QGradient", "qt/gui/QGradient");
    registerJavaToQt("qt/gui/QGradient", "QGradient");
    QMetaType::registerType("QGradient",
                            reinterpret_cast<QMetaType::Destructor>(qgradient_delete),
                            reinterpret_cast<QMetaType::Constructor>(qgradient_create));
    registerDeletionPolicy("qt/gui/QGraphicsEllipseItem", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QGraphicsEllipseItem", "qt/gui/QGraphicsEllipseItem");
    registerJavaToQt("qt/gui/QGraphicsEllipseItem", "QGraphicsEllipseItem");
    registerDestructor("qt/gui/QGraphicsEllipseItem", destructor_qt_gui_QGraphicsEllipseItem);
    registerDeletionPolicy("qt/gui/QGraphicsGridLayout", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QGraphicsGridLayout", "qt/gui/QGraphicsGridLayout");
    registerJavaToQt("qt/gui/QGraphicsGridLayout", "QGraphicsGridLayout");
    registerDestructor("qt/gui/QGraphicsGridLayout", destructor_qt_gui_QGraphicsGridLayout);
    registerDeletionPolicy("qt/gui/QGraphicsItem_ConcreteWrapper", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QGraphicsItem", "qt/gui/QGraphicsItem_ConcreteWrapper");
    registerJavaToQt("qt/gui/QGraphicsItem_ConcreteWrapper", "QGraphicsItem");
    registerDestructor("qt/gui/QGraphicsItem_ConcreteWrapper", destructor_qt_gui_QGraphicsItem_ConcreteWrapper);
    registerQtToJava("QGraphicsItemAnimation", "qt/gui/QGraphicsItemAnimation");
    registerJavaToQt("qt/gui/QGraphicsItemAnimation", "QGraphicsItemAnimation");
    registerDeletionPolicy("qt/gui/QGraphicsItemGroup", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QGraphicsItemGroup", "qt/gui/QGraphicsItemGroup");
    registerJavaToQt("qt/gui/QGraphicsItemGroup", "QGraphicsItemGroup");
    registerDestructor("qt/gui/QGraphicsItemGroup", destructor_qt_gui_QGraphicsItemGroup);
    registerDeletionPolicy("qt/gui/QGraphicsLayout_ConcreteWrapper", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QGraphicsLayout", "qt/gui/QGraphicsLayout_ConcreteWrapper");
    registerJavaToQt("qt/gui/QGraphicsLayout_ConcreteWrapper", "QGraphicsLayout");
    registerDestructor("qt/gui/QGraphicsLayout_ConcreteWrapper", destructor_qt_gui_QGraphicsLayout_ConcreteWrapper);
    registerDeletionPolicy("qt/gui/QGraphicsLayoutItem_ConcreteWrapper", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QGraphicsLayoutItem", "qt/gui/QGraphicsLayoutItem_ConcreteWrapper");
    registerJavaToQt("qt/gui/QGraphicsLayoutItem_ConcreteWrapper", "QGraphicsLayoutItem");
    registerDestructor("qt/gui/QGraphicsLayoutItem_ConcreteWrapper", destructor_qt_gui_QGraphicsLayoutItem_ConcreteWrapper);
    registerDeletionPolicy("qt/gui/QGraphicsLineItem", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QGraphicsLineItem", "qt/gui/QGraphicsLineItem");
    registerJavaToQt("qt/gui/QGraphicsLineItem", "QGraphicsLineItem");
    registerDestructor("qt/gui/QGraphicsLineItem", destructor_qt_gui_QGraphicsLineItem);
    registerDeletionPolicy("qt/gui/QGraphicsLinearLayout", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QGraphicsLinearLayout", "qt/gui/QGraphicsLinearLayout");
    registerJavaToQt("qt/gui/QGraphicsLinearLayout", "QGraphicsLinearLayout");
    registerDestructor("qt/gui/QGraphicsLinearLayout", destructor_qt_gui_QGraphicsLinearLayout);
    registerQtToJava("QGraphicsObject", "qt/gui/QGraphicsObject_ConcreteWrapper");
    registerJavaToQt("qt/gui/QGraphicsObject_ConcreteWrapper", "QGraphicsObject");
    registerDeletionPolicy("qt/gui/QGraphicsPathItem", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QGraphicsPathItem", "qt/gui/QGraphicsPathItem");
    registerJavaToQt("qt/gui/QGraphicsPathItem", "QGraphicsPathItem");
    registerDestructor("qt/gui/QGraphicsPathItem", destructor_qt_gui_QGraphicsPathItem);
    registerDeletionPolicy("qt/gui/QGraphicsPixmapItem", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QGraphicsPixmapItem", "qt/gui/QGraphicsPixmapItem");
    registerJavaToQt("qt/gui/QGraphicsPixmapItem", "QGraphicsPixmapItem");
    registerDestructor("qt/gui/QGraphicsPixmapItem", destructor_qt_gui_QGraphicsPixmapItem);
    registerDeletionPolicy("qt/gui/QGraphicsPolygonItem", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QGraphicsPolygonItem", "qt/gui/QGraphicsPolygonItem");
    registerJavaToQt("qt/gui/QGraphicsPolygonItem", "QGraphicsPolygonItem");
    registerDestructor("qt/gui/QGraphicsPolygonItem", destructor_qt_gui_QGraphicsPolygonItem);
    registerQtToJava("QGraphicsProxyWidget", "qt/gui/QGraphicsProxyWidget");
    registerJavaToQt("qt/gui/QGraphicsProxyWidget", "QGraphicsProxyWidget");
    registerDeletionPolicy("qt/gui/QGraphicsRectItem", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QGraphicsRectItem", "qt/gui/QGraphicsRectItem");
    registerJavaToQt("qt/gui/QGraphicsRectItem", "QGraphicsRectItem");
    registerDestructor("qt/gui/QGraphicsRectItem", destructor_qt_gui_QGraphicsRectItem);
    registerQtToJava("QGraphicsScene", "qt/gui/QGraphicsScene");
    registerJavaToQt("qt/gui/QGraphicsScene", "QGraphicsScene");
    registerQtToJava("QGraphicsSceneContextMenuEvent", "qt/gui/QGraphicsSceneContextMenuEvent");
    registerJavaToQt("qt/gui/QGraphicsSceneContextMenuEvent", "QGraphicsSceneContextMenuEvent");
    registerDestructor("qt/gui/QGraphicsSceneContextMenuEvent", destructor_qt_gui_QGraphicsSceneContextMenuEvent);
    registerQtToJava("QGraphicsSceneDragDropEvent", "qt/gui/QGraphicsSceneDragDropEvent");
    registerJavaToQt("qt/gui/QGraphicsSceneDragDropEvent", "QGraphicsSceneDragDropEvent");
    registerDestructor("qt/gui/QGraphicsSceneDragDropEvent", destructor_qt_gui_QGraphicsSceneDragDropEvent);
    registerQtToJava("QGraphicsSceneEvent", "qt/gui/QGraphicsSceneEvent");
    registerJavaToQt("qt/gui/QGraphicsSceneEvent", "QGraphicsSceneEvent");
    registerDestructor("qt/gui/QGraphicsSceneEvent", destructor_qt_gui_QGraphicsSceneEvent);
    registerQtToJava("QGraphicsSceneHelpEvent", "qt/gui/QGraphicsSceneHelpEvent");
    registerJavaToQt("qt/gui/QGraphicsSceneHelpEvent", "QGraphicsSceneHelpEvent");
    registerDestructor("qt/gui/QGraphicsSceneHelpEvent", destructor_qt_gui_QGraphicsSceneHelpEvent);
    registerQtToJava("QGraphicsSceneHoverEvent", "qt/gui/QGraphicsSceneHoverEvent");
    registerJavaToQt("qt/gui/QGraphicsSceneHoverEvent", "QGraphicsSceneHoverEvent");
    registerDestructor("qt/gui/QGraphicsSceneHoverEvent", destructor_qt_gui_QGraphicsSceneHoverEvent);
    registerQtToJava("QGraphicsSceneMouseEvent", "qt/gui/QGraphicsSceneMouseEvent");
    registerJavaToQt("qt/gui/QGraphicsSceneMouseEvent", "QGraphicsSceneMouseEvent");
    registerDestructor("qt/gui/QGraphicsSceneMouseEvent", destructor_qt_gui_QGraphicsSceneMouseEvent);
    registerQtToJava("QGraphicsSceneMoveEvent", "qt/gui/QGraphicsSceneMoveEvent");
    registerJavaToQt("qt/gui/QGraphicsSceneMoveEvent", "QGraphicsSceneMoveEvent");
    registerDestructor("qt/gui/QGraphicsSceneMoveEvent", destructor_qt_gui_QGraphicsSceneMoveEvent);
    registerQtToJava("QGraphicsSceneResizeEvent", "qt/gui/QGraphicsSceneResizeEvent");
    registerJavaToQt("qt/gui/QGraphicsSceneResizeEvent", "QGraphicsSceneResizeEvent");
    registerDestructor("qt/gui/QGraphicsSceneResizeEvent", destructor_qt_gui_QGraphicsSceneResizeEvent);
    registerQtToJava("QGraphicsSceneWheelEvent", "qt/gui/QGraphicsSceneWheelEvent");
    registerJavaToQt("qt/gui/QGraphicsSceneWheelEvent", "QGraphicsSceneWheelEvent");
    registerDestructor("qt/gui/QGraphicsSceneWheelEvent", destructor_qt_gui_QGraphicsSceneWheelEvent);
    registerDeletionPolicy("qt/gui/QGraphicsSimpleTextItem", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QGraphicsSimpleTextItem", "qt/gui/QGraphicsSimpleTextItem");
    registerJavaToQt("qt/gui/QGraphicsSimpleTextItem", "QGraphicsSimpleTextItem");
    registerDestructor("qt/gui/QGraphicsSimpleTextItem", destructor_qt_gui_QGraphicsSimpleTextItem);
    registerQtToJava("QGraphicsTextItem", "qt/gui/QGraphicsTextItem");
    registerJavaToQt("qt/gui/QGraphicsTextItem", "QGraphicsTextItem");
    registerQtToJava("QGraphicsView", "qt/gui/QGraphicsView");
    registerJavaToQt("qt/gui/QGraphicsView", "QGraphicsView");
    registerQtToJava("QGraphicsWidget", "qt/gui/QGraphicsWidget");
    registerJavaToQt("qt/gui/QGraphicsWidget", "QGraphicsWidget");
    registerQtToJava("QGridLayout", "qt/gui/QGridLayout");
    registerJavaToQt("qt/gui/QGridLayout", "QGridLayout");
    registerQtToJava("QGroupBox", "qt/gui/QGroupBox");
    registerJavaToQt("qt/gui/QGroupBox", "QGroupBox");
    registerQtToJava("QHBoxLayout", "qt/gui/QHBoxLayout");
    registerJavaToQt("qt/gui/QHBoxLayout", "QHBoxLayout");
    registerQtToJava("QHeaderView", "qt/gui/QHeaderView");
    registerJavaToQt("qt/gui/QHeaderView", "QHeaderView");
    registerQtToJava("QHelpEvent", "qt/gui/QHelpEvent");
    registerJavaToQt("qt/gui/QHelpEvent", "QHelpEvent");
    registerDestructor("qt/gui/QHelpEvent", destructor_qt_gui_QHelpEvent);
    registerQtToJava("QHideEvent", "qt/gui/QHideEvent");
    registerJavaToQt("qt/gui/QHideEvent", "QHideEvent");
    registerDestructor("qt/gui/QHideEvent", destructor_qt_gui_QHideEvent);
    registerQtToJava("QHoverEvent", "qt/gui/QHoverEvent");
    registerJavaToQt("qt/gui/QHoverEvent", "QHoverEvent");
    registerDestructor("qt/gui/QHoverEvent", destructor_qt_gui_QHoverEvent);
    registerDeletionPolicy("qt/gui/QIcon", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QIcon", "qt/gui/QIcon");
    registerJavaToQt("qt/gui/QIcon", "QIcon");
    registerQtToJava("QIconDragEvent", "qt/gui/QIconDragEvent");
    registerJavaToQt("qt/gui/QIconDragEvent", "QIconDragEvent");
    registerDestructor("qt/gui/QIconDragEvent", destructor_qt_gui_QIconDragEvent);
    registerQtToJava("QIconEngine", "qt/gui/QIconEngine_ConcreteWrapper");
    registerJavaToQt("qt/gui/QIconEngine_ConcreteWrapper", "QIconEngine");
    registerDestructor("qt/gui/QIconEngine_ConcreteWrapper", destructor_qt_gui_QIconEngine_ConcreteWrapper);
    registerQtToJava("QIconEnginePluginV2", "qt/gui/QIconEnginePluginV2_ConcreteWrapper");
    registerJavaToQt("qt/gui/QIconEnginePluginV2_ConcreteWrapper", "QIconEnginePluginV2");
    registerQtToJava("QIconEngineV2", "qt/gui/QIconEngineV2_ConcreteWrapper");
    registerJavaToQt("qt/gui/QIconEngineV2_ConcreteWrapper", "QIconEngineV2");
    registerDestructor("qt/gui/QIconEngineV2_ConcreteWrapper", destructor_qt_gui_QIconEngineV2_ConcreteWrapper);
    registerQtToJava("QImage", "qt/gui/QImage");
    registerJavaToQt("qt/gui/QImage", "QImage");
    registerQtToJava("QImageIOHandler", "qt/gui/QImageIOHandler_ConcreteWrapper");
    registerJavaToQt("qt/gui/QImageIOHandler_ConcreteWrapper", "QImageIOHandler");
    registerDestructor("qt/gui/QImageIOHandler_ConcreteWrapper", destructor_qt_gui_QImageIOHandler_ConcreteWrapper);
    registerQtToJava("QImageIOPlugin", "qt/gui/QImageIOPlugin_ConcreteWrapper");
    registerJavaToQt("qt/gui/QImageIOPlugin_ConcreteWrapper", "QImageIOPlugin");
    registerQtToJava("QImageReader", "qt/gui/QImageReader");
    registerJavaToQt("qt/gui/QImageReader", "QImageReader");
    registerDestructor("qt/gui/QImageReader", destructor_qt_gui_QImageReader);
    registerQtToJava("QImageWriter", "qt/gui/QImageWriter");
    registerJavaToQt("qt/gui/QImageWriter", "QImageWriter");
    registerDestructor("qt/gui/QImageWriter", destructor_qt_gui_QImageWriter);
    registerQtToJava("QInputContext", "qt/gui/QInputContext_ConcreteWrapper");
    registerJavaToQt("qt/gui/QInputContext_ConcreteWrapper", "QInputContext");
    registerQtToJava("QInputContextFactory", "qt/gui/QInputContextFactory");
    registerJavaToQt("qt/gui/QInputContextFactory", "QInputContextFactory");
    registerDestructor("qt/gui/QInputContextFactory", destructor_qt_gui_QInputContextFactory);
    registerQtToJava("QInputContextPlugin", "qt/gui/QInputContextPlugin_ConcreteWrapper");
    registerJavaToQt("qt/gui/QInputContextPlugin_ConcreteWrapper", "QInputContextPlugin");
    registerQtToJava("QInputDialog", "qt/gui/QInputDialog");
    registerJavaToQt("qt/gui/QInputDialog", "QInputDialog");
    registerQtToJava("QInputEvent", "qt/gui/QInputEvent");
    registerJavaToQt("qt/gui/QInputEvent", "QInputEvent");
    registerDestructor("qt/gui/QInputEvent", destructor_qt_gui_QInputEvent);
    registerQtToJava("QInputMethodEvent", "qt/gui/QInputMethodEvent");
    registerJavaToQt("qt/gui/QInputMethodEvent", "QInputMethodEvent");
    registerDestructor("qt/gui/QInputMethodEvent", destructor_qt_gui_QInputMethodEvent);
    registerQtToJava("QInputMethodEvent::Attribute", "qt/gui/QInputMethodEvent_Attribute");
    registerJavaToQt("qt/gui/QInputMethodEvent_Attribute", "QInputMethodEvent::Attribute");
    QMetaType::registerType("QInputMethodEvent::Attribute",
                            reinterpret_cast<QMetaType::Destructor>(qinputmethodevent_attribute_delete),
                            reinterpret_cast<QMetaType::Constructor>(qinputmethodevent_attribute_create));
    registerQtToJava("QIntValidator", "qt/gui/QIntValidator");
    registerJavaToQt("qt/gui/QIntValidator", "QIntValidator");
    registerQtToJava("QItemDelegate", "qt/gui/QItemDelegate");
    registerJavaToQt("qt/gui/QItemDelegate", "QItemDelegate");
    registerQtToJava("QItemEditorCreatorBase", "qt/gui/QItemEditorCreatorBase_ConcreteWrapper");
    registerJavaToQt("qt/gui/QItemEditorCreatorBase_ConcreteWrapper", "QItemEditorCreatorBase");
    registerDestructor("qt/gui/QItemEditorCreatorBase_ConcreteWrapper", destructor_qt_gui_QItemEditorCreatorBase_ConcreteWrapper);
    registerQtToJava("QItemEditorFactory", "qt/gui/QItemEditorFactory");
    registerJavaToQt("qt/gui/QItemEditorFactory", "QItemEditorFactory");
    registerDestructor("qt/gui/QItemEditorFactory", destructor_qt_gui_QItemEditorFactory);
    registerDeletionPolicy("qt/gui/QItemSelection", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QItemSelection", "qt/gui/QItemSelection");
    registerJavaToQt("qt/gui/QItemSelection", "QItemSelection");
    qRegisterMetaType<QItemSelection>("QItemSelection");
    registerQtToJava("QItemSelectionModel", "qt/gui/QItemSelectionModel");
    registerJavaToQt("qt/gui/QItemSelectionModel", "QItemSelectionModel");
    registerQtToJava("QItemSelectionRange", "qt/gui/QItemSelectionRange");
    registerJavaToQt("qt/gui/QItemSelectionRange", "QItemSelectionRange");
    qRegisterMetaType<QItemSelectionRange>("QItemSelectionRange");
    registerQtToJava("QKeyEvent", "qt/gui/QKeyEvent");
    registerJavaToQt("qt/gui/QKeyEvent", "QKeyEvent");
    registerDestructor("qt/gui/QKeyEvent", destructor_qt_gui_QKeyEvent);
    registerQtToJava("QKeySequence", "qt/gui/QKeySequence");
    registerJavaToQt("qt/gui/QKeySequence", "QKeySequence");
    registerQtToJava("QLCDNumber", "qt/gui/QLCDNumber");
    registerJavaToQt("qt/gui/QLCDNumber", "QLCDNumber");
    registerQtToJava("QLabel", "qt/gui/QLabel");
    registerJavaToQt("qt/gui/QLabel", "QLabel");
    registerQtToJava("QLayout", "qt/gui/QLayout_ConcreteWrapper");
    registerJavaToQt("qt/gui/QLayout_ConcreteWrapper", "QLayout");
    registerQtToJava("QLayoutItem", "qt/gui/QLayoutItem_ConcreteWrapper");
    registerJavaToQt("qt/gui/QLayoutItem_ConcreteWrapper", "QLayoutItem");
    registerDestructor("qt/gui/QLayoutItem_ConcreteWrapper", destructor_qt_gui_QLayoutItem_ConcreteWrapper);
    registerQtToJava("QLineEdit", "qt/gui/QLineEdit");
    registerJavaToQt("qt/gui/QLineEdit", "QLineEdit");
    registerQtToJava("QLinearGradient", "qt/gui/QLinearGradient");
    registerJavaToQt("qt/gui/QLinearGradient", "QLinearGradient");
    QMetaType::registerType("QLinearGradient",
                            reinterpret_cast<QMetaType::Destructor>(qlineargradient_delete),
                            reinterpret_cast<QMetaType::Constructor>(qlineargradient_create));
    registerQtToJava("QListView", "qt/gui/QListView");
    registerJavaToQt("qt/gui/QListView", "QListView");
    registerQtToJava("QListWidget", "qt/gui/QListWidget");
    registerJavaToQt("qt/gui/QListWidget", "QListWidget");
    registerDeletionPolicy("qt/gui/QListWidgetItem", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QListWidgetItem", "qt/gui/QListWidgetItem");
    registerJavaToQt("qt/gui/QListWidgetItem", "QListWidgetItem");
    registerDestructor("qt/gui/QListWidgetItem", destructor_qt_gui_QListWidgetItem);
    registerQtToJava("QMainWindow", "qt/gui/QMainWindow");
    registerJavaToQt("qt/gui/QMainWindow", "QMainWindow");
    registerQtToJava("QMatrix", "qt/gui/QMatrix");
    registerJavaToQt("qt/gui/QMatrix", "QMatrix");
    registerQtToJava("QMdiArea", "qt/gui/QMdiArea");
    registerJavaToQt("qt/gui/QMdiArea", "QMdiArea");
    registerQtToJava("QMdiSubWindow", "qt/gui/QMdiSubWindow");
    registerJavaToQt("qt/gui/QMdiSubWindow", "QMdiSubWindow");
    registerQtToJava("QMenu", "qt/gui/QMenu");
    registerJavaToQt("qt/gui/QMenu", "QMenu");
    registerQtToJava("QMenuBar", "qt/gui/QMenuBar");
    registerJavaToQt("qt/gui/QMenuBar", "QMenuBar");
    registerQtToJava("QMessageBox", "qt/gui/QMessageBox");
    registerJavaToQt("qt/gui/QMessageBox", "QMessageBox");
    registerQtToJava("QMotifStyle", "qt/gui/QMotifStyle");
    registerJavaToQt("qt/gui/QMotifStyle", "QMotifStyle");
    registerQtToJava("QMouseEvent", "qt/gui/QMouseEvent");
    registerJavaToQt("qt/gui/QMouseEvent", "QMouseEvent");
    registerDestructor("qt/gui/QMouseEvent", destructor_qt_gui_QMouseEvent);
    registerQtToJava("QMoveEvent", "qt/gui/QMoveEvent");
    registerJavaToQt("qt/gui/QMoveEvent", "QMoveEvent");
    registerDestructor("qt/gui/QMoveEvent", destructor_qt_gui_QMoveEvent);
    registerQtToJava("QMovie", "qt/gui/QMovie");
    registerJavaToQt("qt/gui/QMovie", "QMovie");
    registerQtToJava("QPageSetupDialog", "qt/gui/QPageSetupDialog");
    registerJavaToQt("qt/gui/QPageSetupDialog", "QPageSetupDialog");
    registerQtToJava("QPaintDevice", "qt/gui/QPaintDevice_ConcreteWrapper");
    registerJavaToQt("qt/gui/QPaintDevice_ConcreteWrapper", "QPaintDevice");
    registerDestructor("qt/gui/QPaintDevice_ConcreteWrapper", destructor_qt_gui_QPaintDevice_ConcreteWrapper);
    registerQtToJava("QPaintEngine", "qt/gui/QPaintEngine_ConcreteWrapper");
    registerJavaToQt("qt/gui/QPaintEngine_ConcreteWrapper", "QPaintEngine");
    registerDestructor("qt/gui/QPaintEngine_ConcreteWrapper", destructor_qt_gui_QPaintEngine_ConcreteWrapper);
    registerQtToJava("QPaintEngineState", "qt/gui/QPaintEngineState");
    registerJavaToQt("qt/gui/QPaintEngineState", "QPaintEngineState");
    registerDestructor("qt/gui/QPaintEngineState", destructor_qt_gui_QPaintEngineState);
    registerQtToJava("QPaintEvent", "qt/gui/QPaintEvent");
    registerJavaToQt("qt/gui/QPaintEvent", "QPaintEvent");
    registerDestructor("qt/gui/QPaintEvent", destructor_qt_gui_QPaintEvent);
    registerQtToJava("QPainter", "qt/gui/QPainter");
    registerJavaToQt("qt/gui/QPainter", "QPainter");
    registerDestructor("qt/gui/QPainter", destructor_qt_gui_QPainter);
    registerQtToJava("QPainterPath", "qt/gui/QPainterPath");
    registerJavaToQt("qt/gui/QPainterPath", "QPainterPath");
    qRegisterMetaType<QPainterPath>("QPainterPath");
    registerQtToJava("QPainterPathStroker", "qt/gui/QPainterPathStroker");
    registerJavaToQt("qt/gui/QPainterPathStroker", "QPainterPathStroker");
    registerDestructor("qt/gui/QPainterPathStroker", destructor_qt_gui_QPainterPathStroker);
    registerQtToJava("QPainterPath::Element", "qt/gui/QPainterPath_Element");
    registerJavaToQt("qt/gui/QPainterPath_Element", "QPainterPath::Element");
    qRegisterMetaType<QPainterPath::Element>("QPainterPath::Element");
    registerQtToJava("QPalette", "qt/gui/QPalette");
    registerJavaToQt("qt/gui/QPalette", "QPalette");
    registerQtToJava("QPen", "qt/gui/QPen");
    registerJavaToQt("qt/gui/QPen", "QPen");
    registerDeletionPolicy("qt/gui/QPicture", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QPicture", "qt/gui/QPicture");
    registerJavaToQt("qt/gui/QPicture", "QPicture");
    qRegisterMetaType<QPicture>("QPicture");
    registerQtToJava("QPictureFormatPlugin", "qt/gui/QPictureFormatPlugin_ConcreteWrapper");
    registerJavaToQt("qt/gui/QPictureFormatPlugin_ConcreteWrapper", "QPictureFormatPlugin");
    registerQtToJava("QPictureIO", "qt/gui/QPictureIO");
    registerJavaToQt("qt/gui/QPictureIO", "QPictureIO");
    registerDestructor("qt/gui/QPictureIO", destructor_qt_gui_QPictureIO);
    registerDeletionPolicy("qt/gui/QPixmap", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QPixmap", "qt/gui/QPixmap");
    registerJavaToQt("qt/gui/QPixmap", "QPixmap");
    registerQtToJava("QPixmapCache", "qt/gui/QPixmapCache");
    registerJavaToQt("qt/gui/QPixmapCache", "QPixmapCache");
    registerDestructor("qt/gui/QPixmapCache", destructor_qt_gui_QPixmapCache);
    registerQtToJava("QPlainTextDocumentLayout", "qt/gui/QPlainTextDocumentLayout");
    registerJavaToQt("qt/gui/QPlainTextDocumentLayout", "QPlainTextDocumentLayout");
    registerQtToJava("QPlainTextEdit", "qt/gui/QPlainTextEdit");
    registerJavaToQt("qt/gui/QPlainTextEdit", "QPlainTextEdit");
    registerQtToJava("QPlastiqueStyle", "qt/gui/QPlastiqueStyle");
    registerJavaToQt("qt/gui/QPlastiqueStyle", "QPlastiqueStyle");
    registerQtToJava("QPolygon", "qt/gui/QPolygon");
    registerJavaToQt("qt/gui/QPolygon", "QPolygon");
    registerQtToJava("QPolygonF", "qt/gui/QPolygonF");
    registerJavaToQt("qt/gui/QPolygonF", "QPolygonF");
    qRegisterMetaType<QPolygonF>("QPolygonF");
    registerQtToJava("QPrintDialog", "qt/gui/QPrintDialog");
    registerJavaToQt("qt/gui/QPrintDialog", "QPrintDialog");
    registerQtToJava("QPrintEngine", "qt/gui/QPrintEngine_ConcreteWrapper");
    registerJavaToQt("qt/gui/QPrintEngine_ConcreteWrapper", "QPrintEngine");
    registerDestructor("qt/gui/QPrintEngine_ConcreteWrapper", destructor_qt_gui_QPrintEngine_ConcreteWrapper);
    registerQtToJava("QPrintPreviewDialog", "qt/gui/QPrintPreviewDialog");
    registerJavaToQt("qt/gui/QPrintPreviewDialog", "QPrintPreviewDialog");
    registerQtToJava("QPrintPreviewWidget", "qt/gui/QPrintPreviewWidget");
    registerJavaToQt("qt/gui/QPrintPreviewWidget", "QPrintPreviewWidget");
    registerDeletionPolicy("qt/gui/QPrinter", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QPrinter", "qt/gui/QPrinter");
    registerJavaToQt("qt/gui/QPrinter", "QPrinter");
    registerDestructor("qt/gui/QPrinter", destructor_qt_gui_QPrinter);
    registerQtToJava("QPrinterInfo", "qt/gui/QPrinterInfo");
    registerJavaToQt("qt/gui/QPrinterInfo", "QPrinterInfo");
    qRegisterMetaType<QPrinterInfo>("QPrinterInfo");
    registerQtToJava("QProgressBar", "qt/gui/QProgressBar");
    registerJavaToQt("qt/gui/QProgressBar", "QProgressBar");
    registerQtToJava("QProgressDialog", "qt/gui/QProgressDialog");
    registerJavaToQt("qt/gui/QProgressDialog", "QProgressDialog");
    registerQtToJava("QProxyModel", "qt/gui/QProxyModel");
    registerJavaToQt("qt/gui/QProxyModel", "QProxyModel");
    registerQtToJava("QPushButton", "qt/gui/QPushButton");
    registerJavaToQt("qt/gui/QPushButton", "QPushButton");
    registerQtToJava("QRadialGradient", "qt/gui/QRadialGradient");
    registerJavaToQt("qt/gui/QRadialGradient", "QRadialGradient");
    QMetaType::registerType("QRadialGradient",
                            reinterpret_cast<QMetaType::Destructor>(qradialgradient_delete),
                            reinterpret_cast<QMetaType::Constructor>(qradialgradient_create));
    registerQtToJava("QRadioButton", "qt/gui/QRadioButton");
    registerJavaToQt("qt/gui/QRadioButton", "QRadioButton");
    registerQtToJava("QRegExpValidator", "qt/gui/QRegExpValidator");
    registerJavaToQt("qt/gui/QRegExpValidator", "QRegExpValidator");
    registerQtToJava("QRegion", "qt/gui/QRegion");
    registerJavaToQt("qt/gui/QRegion", "QRegion");
    registerQtToJava("QResizeEvent", "qt/gui/QResizeEvent");
    registerJavaToQt("qt/gui/QResizeEvent", "QResizeEvent");
    registerDestructor("qt/gui/QResizeEvent", destructor_qt_gui_QResizeEvent);
    registerQtToJava("QRubberBand", "qt/gui/QRubberBand");
    registerJavaToQt("qt/gui/QRubberBand", "QRubberBand");
    registerQtToJava("QScrollArea", "qt/gui/QScrollArea");
    registerJavaToQt("qt/gui/QScrollArea", "QScrollArea");
    registerQtToJava("QScrollBar", "qt/gui/QScrollBar");
    registerJavaToQt("qt/gui/QScrollBar", "QScrollBar");
    registerQtToJava("QSessionManager", "qt/gui/QSessionManager");
    registerJavaToQt("qt/gui/QSessionManager", "QSessionManager");
    registerQtToJava("QShortcut", "qt/gui/QShortcut");
    registerJavaToQt("qt/gui/QShortcut", "QShortcut");
    registerQtToJava("QShortcutEvent", "qt/gui/QShortcutEvent");
    registerJavaToQt("qt/gui/QShortcutEvent", "QShortcutEvent");
    registerDestructor("qt/gui/QShortcutEvent", destructor_qt_gui_QShortcutEvent);
    registerQtToJava("QShowEvent", "qt/gui/QShowEvent");
    registerJavaToQt("qt/gui/QShowEvent", "QShowEvent");
    registerDestructor("qt/gui/QShowEvent", destructor_qt_gui_QShowEvent);
    registerQtToJava("QSizeGrip", "qt/gui/QSizeGrip");
    registerJavaToQt("qt/gui/QSizeGrip", "QSizeGrip");
    registerQtToJava("QSizePolicy", "qt/gui/QSizePolicy");
    registerJavaToQt("qt/gui/QSizePolicy", "QSizePolicy");
    registerQtToJava("QSlider", "qt/gui/QSlider");
    registerJavaToQt("qt/gui/QSlider", "QSlider");
    registerQtToJava("QSortFilterProxyModel", "qt/gui/QSortFilterProxyModel");
    registerJavaToQt("qt/gui/QSortFilterProxyModel", "QSortFilterProxyModel");
    registerQtToJava("QSound", "qt/gui/QSound");
    registerJavaToQt("qt/gui/QSound", "QSound");
    registerQtToJava("QSpacerItem", "qt/gui/QSpacerItem");
    registerJavaToQt("qt/gui/QSpacerItem", "QSpacerItem");
    registerDestructor("qt/gui/QSpacerItem", destructor_qt_gui_QSpacerItem);
    registerQtToJava("QSpinBox", "qt/gui/QSpinBox");
    registerJavaToQt("qt/gui/QSpinBox", "QSpinBox");
    registerQtToJava("QSplashScreen", "qt/gui/QSplashScreen");
    registerJavaToQt("qt/gui/QSplashScreen", "QSplashScreen");
    registerQtToJava("QSplitter", "qt/gui/QSplitter");
    registerJavaToQt("qt/gui/QSplitter", "QSplitter");
    registerQtToJava("QSplitterHandle", "qt/gui/QSplitterHandle");
    registerJavaToQt("qt/gui/QSplitterHandle", "QSplitterHandle");
    registerQtToJava("QStackedLayout", "qt/gui/QStackedLayout");
    registerJavaToQt("qt/gui/QStackedLayout", "QStackedLayout");
    registerQtToJava("QStackedWidget", "qt/gui/QStackedWidget");
    registerJavaToQt("qt/gui/QStackedWidget", "QStackedWidget");
    registerQtToJava("QStandardItem", "qt/gui/QStandardItem");
    registerJavaToQt("qt/gui/QStandardItem", "QStandardItem");
    registerDestructor("qt/gui/QStandardItem", destructor_qt_gui_QStandardItem);
    registerQtToJava("QStandardItemModel", "qt/gui/QStandardItemModel");
    registerJavaToQt("qt/gui/QStandardItemModel", "QStandardItemModel");
    registerQtToJava("QStatusBar", "qt/gui/QStatusBar");
    registerJavaToQt("qt/gui/QStatusBar", "QStatusBar");
    registerQtToJava("QStatusTipEvent", "qt/gui/QStatusTipEvent");
    registerJavaToQt("qt/gui/QStatusTipEvent", "QStatusTipEvent");
    registerDestructor("qt/gui/QStatusTipEvent", destructor_qt_gui_QStatusTipEvent);
    registerQtToJava("QStringListModel", "qt/gui/QStringListModel");
    registerJavaToQt("qt/gui/QStringListModel", "QStringListModel");
    registerQtToJava("QStyle", "qt/gui/QStyle_ConcreteWrapper");
    registerJavaToQt("qt/gui/QStyle_ConcreteWrapper", "QStyle");
    registerQtToJava("QStyleFactory", "qt/gui/QStyleFactory");
    registerJavaToQt("qt/gui/QStyleFactory", "QStyleFactory");
    registerDestructor("qt/gui/QStyleFactory", destructor_qt_gui_QStyleFactory);
    registerQtToJava("QStyleHintReturn", "qt/gui/QStyleHintReturn");
    registerJavaToQt("qt/gui/QStyleHintReturn", "QStyleHintReturn");
    registerDestructor("qt/gui/QStyleHintReturn", destructor_qt_gui_QStyleHintReturn);
    registerQtToJava("QStyleHintReturnMask", "qt/gui/QStyleHintReturnMask");
    registerJavaToQt("qt/gui/QStyleHintReturnMask", "QStyleHintReturnMask");
    registerDestructor("qt/gui/QStyleHintReturnMask", destructor_qt_gui_QStyleHintReturnMask);
    registerQtToJava("QStyleHintReturnVariant", "qt/gui/QStyleHintReturnVariant");
    registerJavaToQt("qt/gui/QStyleHintReturnVariant", "QStyleHintReturnVariant");
    registerDestructor("qt/gui/QStyleHintReturnVariant", destructor_qt_gui_QStyleHintReturnVariant);
    registerDeletionPolicy("qt/gui/QStyleOption", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOption", "qt/gui/QStyleOption");
    registerJavaToQt("qt/gui/QStyleOption", "QStyleOption");
    qRegisterMetaType<QStyleOption>("QStyleOption");
    registerDeletionPolicy("qt/gui/QStyleOptionButton", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionButton", "qt/gui/QStyleOptionButton");
    registerJavaToQt("qt/gui/QStyleOptionButton", "QStyleOptionButton");
    qRegisterMetaType<QStyleOptionButton>("QStyleOptionButton");
    registerDeletionPolicy("qt/gui/QStyleOptionComboBox", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionComboBox", "qt/gui/QStyleOptionComboBox");
    registerJavaToQt("qt/gui/QStyleOptionComboBox", "QStyleOptionComboBox");
    qRegisterMetaType<QStyleOptionComboBox>("QStyleOptionComboBox");
    registerDeletionPolicy("qt/gui/QStyleOptionComplex", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionComplex", "qt/gui/QStyleOptionComplex");
    registerJavaToQt("qt/gui/QStyleOptionComplex", "QStyleOptionComplex");
    qRegisterMetaType<QStyleOptionComplex>("QStyleOptionComplex");
    registerDeletionPolicy("qt/gui/QStyleOptionDockWidget", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionDockWidget", "qt/gui/QStyleOptionDockWidget");
    registerJavaToQt("qt/gui/QStyleOptionDockWidget", "QStyleOptionDockWidget");
    qRegisterMetaType<QStyleOptionDockWidget>("QStyleOptionDockWidget");
    registerDeletionPolicy("qt/gui/QStyleOptionDockWidgetV2", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionDockWidgetV2", "qt/gui/QStyleOptionDockWidgetV2");
    registerJavaToQt("qt/gui/QStyleOptionDockWidgetV2", "QStyleOptionDockWidgetV2");
    qRegisterMetaType<QStyleOptionDockWidgetV2>("QStyleOptionDockWidgetV2");
    registerDeletionPolicy("qt/gui/QStyleOptionFocusRect", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionFocusRect", "qt/gui/QStyleOptionFocusRect");
    registerJavaToQt("qt/gui/QStyleOptionFocusRect", "QStyleOptionFocusRect");
    qRegisterMetaType<QStyleOptionFocusRect>("QStyleOptionFocusRect");
    registerDeletionPolicy("qt/gui/QStyleOptionFrame", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionFrame", "qt/gui/QStyleOptionFrame");
    registerJavaToQt("qt/gui/QStyleOptionFrame", "QStyleOptionFrame");
    qRegisterMetaType<QStyleOptionFrame>("QStyleOptionFrame");
    registerDeletionPolicy("qt/gui/QStyleOptionFrameV2", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionFrameV2", "qt/gui/QStyleOptionFrameV2");
    registerJavaToQt("qt/gui/QStyleOptionFrameV2", "QStyleOptionFrameV2");
    qRegisterMetaType<QStyleOptionFrameV2>("QStyleOptionFrameV2");
    registerDeletionPolicy("qt/gui/QStyleOptionGraphicsItem", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionGraphicsItem", "qt/gui/QStyleOptionGraphicsItem");
    registerJavaToQt("qt/gui/QStyleOptionGraphicsItem", "QStyleOptionGraphicsItem");
    qRegisterMetaType<QStyleOptionGraphicsItem>("QStyleOptionGraphicsItem");
    registerDeletionPolicy("qt/gui/QStyleOptionGroupBox", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionGroupBox", "qt/gui/QStyleOptionGroupBox");
    registerJavaToQt("qt/gui/QStyleOptionGroupBox", "QStyleOptionGroupBox");
    qRegisterMetaType<QStyleOptionGroupBox>("QStyleOptionGroupBox");
    registerDeletionPolicy("qt/gui/QStyleOptionHeader", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionHeader", "qt/gui/QStyleOptionHeader");
    registerJavaToQt("qt/gui/QStyleOptionHeader", "QStyleOptionHeader");
    qRegisterMetaType<QStyleOptionHeader>("QStyleOptionHeader");
    registerDeletionPolicy("qt/gui/QStyleOptionMenuItem", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionMenuItem", "qt/gui/QStyleOptionMenuItem");
    registerJavaToQt("qt/gui/QStyleOptionMenuItem", "QStyleOptionMenuItem");
    qRegisterMetaType<QStyleOptionMenuItem>("QStyleOptionMenuItem");
    registerDeletionPolicy("qt/gui/QStyleOptionProgressBar", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionProgressBar", "qt/gui/QStyleOptionProgressBar");
    registerJavaToQt("qt/gui/QStyleOptionProgressBar", "QStyleOptionProgressBar");
    qRegisterMetaType<QStyleOptionProgressBar>("QStyleOptionProgressBar");
    registerDeletionPolicy("qt/gui/QStyleOptionProgressBarV2", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionProgressBarV2", "qt/gui/QStyleOptionProgressBarV2");
    registerJavaToQt("qt/gui/QStyleOptionProgressBarV2", "QStyleOptionProgressBarV2");
    qRegisterMetaType<QStyleOptionProgressBarV2>("QStyleOptionProgressBarV2");
    registerDeletionPolicy("qt/gui/QStyleOptionRubberBand", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionRubberBand", "qt/gui/QStyleOptionRubberBand");
    registerJavaToQt("qt/gui/QStyleOptionRubberBand", "QStyleOptionRubberBand");
    qRegisterMetaType<QStyleOptionRubberBand>("QStyleOptionRubberBand");
    registerDeletionPolicy("qt/gui/QStyleOptionSizeGrip", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionSizeGrip", "qt/gui/QStyleOptionSizeGrip");
    registerJavaToQt("qt/gui/QStyleOptionSizeGrip", "QStyleOptionSizeGrip");
    qRegisterMetaType<QStyleOptionSizeGrip>("QStyleOptionSizeGrip");
    registerDeletionPolicy("qt/gui/QStyleOptionSlider", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionSlider", "qt/gui/QStyleOptionSlider");
    registerJavaToQt("qt/gui/QStyleOptionSlider", "QStyleOptionSlider");
    qRegisterMetaType<QStyleOptionSlider>("QStyleOptionSlider");
    registerDeletionPolicy("qt/gui/QStyleOptionSpinBox", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionSpinBox", "qt/gui/QStyleOptionSpinBox");
    registerJavaToQt("qt/gui/QStyleOptionSpinBox", "QStyleOptionSpinBox");
    qRegisterMetaType<QStyleOptionSpinBox>("QStyleOptionSpinBox");
    registerDeletionPolicy("qt/gui/QStyleOptionTab", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionTab", "qt/gui/QStyleOptionTab");
    registerJavaToQt("qt/gui/QStyleOptionTab", "QStyleOptionTab");
    qRegisterMetaType<QStyleOptionTab>("QStyleOptionTab");
    registerDeletionPolicy("qt/gui/QStyleOptionTabBarBase", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionTabBarBase", "qt/gui/QStyleOptionTabBarBase");
    registerJavaToQt("qt/gui/QStyleOptionTabBarBase", "QStyleOptionTabBarBase");
    qRegisterMetaType<QStyleOptionTabBarBase>("QStyleOptionTabBarBase");
    registerDeletionPolicy("qt/gui/QStyleOptionTabV2", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionTabV2", "qt/gui/QStyleOptionTabV2");
    registerJavaToQt("qt/gui/QStyleOptionTabV2", "QStyleOptionTabV2");
    qRegisterMetaType<QStyleOptionTabV2>("QStyleOptionTabV2");
    registerDeletionPolicy("qt/gui/QStyleOptionTabWidgetFrame", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionTabWidgetFrame", "qt/gui/QStyleOptionTabWidgetFrame");
    registerJavaToQt("qt/gui/QStyleOptionTabWidgetFrame", "QStyleOptionTabWidgetFrame");
    qRegisterMetaType<QStyleOptionTabWidgetFrame>("QStyleOptionTabWidgetFrame");
    registerDeletionPolicy("qt/gui/QStyleOptionTitleBar", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionTitleBar", "qt/gui/QStyleOptionTitleBar");
    registerJavaToQt("qt/gui/QStyleOptionTitleBar", "QStyleOptionTitleBar");
    qRegisterMetaType<QStyleOptionTitleBar>("QStyleOptionTitleBar");
    registerDeletionPolicy("qt/gui/QStyleOptionToolBar", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionToolBar", "qt/gui/QStyleOptionToolBar");
    registerJavaToQt("qt/gui/QStyleOptionToolBar", "QStyleOptionToolBar");
    qRegisterMetaType<QStyleOptionToolBar>("QStyleOptionToolBar");
    registerDeletionPolicy("qt/gui/QStyleOptionToolBox", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionToolBox", "qt/gui/QStyleOptionToolBox");
    registerJavaToQt("qt/gui/QStyleOptionToolBox", "QStyleOptionToolBox");
    qRegisterMetaType<QStyleOptionToolBox>("QStyleOptionToolBox");
    registerDeletionPolicy("qt/gui/QStyleOptionToolBoxV2", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionToolBoxV2", "qt/gui/QStyleOptionToolBoxV2");
    registerJavaToQt("qt/gui/QStyleOptionToolBoxV2", "QStyleOptionToolBoxV2");
    qRegisterMetaType<QStyleOptionToolBoxV2>("QStyleOptionToolBoxV2");
    registerDeletionPolicy("qt/gui/QStyleOptionToolButton", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionToolButton", "qt/gui/QStyleOptionToolButton");
    registerJavaToQt("qt/gui/QStyleOptionToolButton", "QStyleOptionToolButton");
    qRegisterMetaType<QStyleOptionToolButton>("QStyleOptionToolButton");
    registerDeletionPolicy("qt/gui/QStyleOptionViewItem", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionViewItem", "qt/gui/QStyleOptionViewItem");
    registerJavaToQt("qt/gui/QStyleOptionViewItem", "QStyleOptionViewItem");
    qRegisterMetaType<QStyleOptionViewItem>("QStyleOptionViewItem");
    registerDeletionPolicy("qt/gui/QStyleOptionViewItemV2", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionViewItemV2", "qt/gui/QStyleOptionViewItemV2");
    registerJavaToQt("qt/gui/QStyleOptionViewItemV2", "QStyleOptionViewItemV2");
    qRegisterMetaType<QStyleOptionViewItemV2>("QStyleOptionViewItemV2");
    registerDeletionPolicy("qt/gui/QStyleOptionViewItemV3", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionViewItemV3", "qt/gui/QStyleOptionViewItemV3");
    registerJavaToQt("qt/gui/QStyleOptionViewItemV3", "QStyleOptionViewItemV3");
    qRegisterMetaType<QStyleOptionViewItemV3>("QStyleOptionViewItemV3");
    registerDeletionPolicy("qt/gui/QStyleOptionViewItemV4", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStyleOptionViewItemV4", "qt/gui/QStyleOptionViewItemV4");
    registerJavaToQt("qt/gui/QStyleOptionViewItemV4", "QStyleOptionViewItemV4");
    qRegisterMetaType<QStyleOptionViewItemV4>("QStyleOptionViewItemV4");
    registerDeletionPolicy("qt/gui/QStylePainter", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QStylePainter", "qt/gui/QStylePainter");
    registerJavaToQt("qt/gui/QStylePainter", "QStylePainter");
    registerDestructor("qt/gui/QStylePainter", destructor_qt_gui_QStylePainter);
    registerQtToJava("QStylePlugin", "qt/gui/QStylePlugin_ConcreteWrapper");
    registerJavaToQt("qt/gui/QStylePlugin_ConcreteWrapper", "QStylePlugin");
    registerQtToJava("QStyledItemDelegate", "qt/gui/QStyledItemDelegate");
    registerJavaToQt("qt/gui/QStyledItemDelegate", "QStyledItemDelegate");
    registerQtToJava("QSyntaxHighlighter", "qt/gui/QSyntaxHighlighter_ConcreteWrapper");
    registerJavaToQt("qt/gui/QSyntaxHighlighter_ConcreteWrapper", "QSyntaxHighlighter");
    registerQtToJava("QSystemTrayIcon", "qt/gui/QSystemTrayIcon");
    registerJavaToQt("qt/gui/QSystemTrayIcon", "QSystemTrayIcon");
    registerQtToJava("QTabBar", "qt/gui/QTabBar");
    registerJavaToQt("qt/gui/QTabBar", "QTabBar");
    registerQtToJava("QTabWidget", "qt/gui/QTabWidget");
    registerJavaToQt("qt/gui/QTabWidget", "QTabWidget");
    registerQtToJava("QTableView", "qt/gui/QTableView");
    registerJavaToQt("qt/gui/QTableView", "QTableView");
    registerQtToJava("QTableWidget", "qt/gui/QTableWidget");
    registerJavaToQt("qt/gui/QTableWidget", "QTableWidget");
    registerDeletionPolicy("qt/gui/QTableWidgetItem", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTableWidgetItem", "qt/gui/QTableWidgetItem");
    registerJavaToQt("qt/gui/QTableWidgetItem", "QTableWidgetItem");
    registerDestructor("qt/gui/QTableWidgetItem", destructor_qt_gui_QTableWidgetItem);
    registerQtToJava("QTableWidgetSelectionRange", "qt/gui/QTableWidgetSelectionRange");
    registerJavaToQt("qt/gui/QTableWidgetSelectionRange", "QTableWidgetSelectionRange");
    qRegisterMetaType<QTableWidgetSelectionRange>("QTableWidgetSelectionRange");
    registerQtToJava("QTabletEvent", "qt/gui/QTabletEvent");
    registerJavaToQt("qt/gui/QTabletEvent", "QTabletEvent");
    registerDestructor("qt/gui/QTabletEvent", destructor_qt_gui_QTabletEvent);
    registerDeletionPolicy("qt/gui/QTextBlock", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextBlock", "qt/gui/QTextBlock");
    registerJavaToQt("qt/gui/QTextBlock", "QTextBlock");
    qRegisterMetaType<QTextBlock>("QTextBlock");
    registerDeletionPolicy("qt/gui/QTextBlockFormat", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextBlockFormat", "qt/gui/QTextBlockFormat");
    registerJavaToQt("qt/gui/QTextBlockFormat", "QTextBlockFormat");
    qRegisterMetaType<QTextBlockFormat>("QTextBlockFormat");
    registerDeletionPolicy("qt/gui/QTextBlockGroup", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextBlockGroup", "qt/gui/QTextBlockGroup");
    registerJavaToQt("qt/gui/QTextBlockGroup", "QTextBlockGroup");
    registerDeletionPolicy("qt/gui/QTextBlockUserData", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextBlockUserData", "qt/gui/QTextBlockUserData");
    registerJavaToQt("qt/gui/QTextBlockUserData", "QTextBlockUserData");
    registerDestructor("qt/gui/QTextBlockUserData", destructor_qt_gui_QTextBlockUserData);
    registerDeletionPolicy("qt/gui/QTextBlock_iterator", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextBlock::iterator", "qt/gui/QTextBlock_iterator");
    registerJavaToQt("qt/gui/QTextBlock_iterator", "QTextBlock::iterator");
    qRegisterMetaType<QTextBlock::iterator>("QTextBlock::iterator");
    registerQtToJava("QTextBrowser", "qt/gui/QTextBrowser");
    registerJavaToQt("qt/gui/QTextBrowser", "QTextBrowser");
    registerDeletionPolicy("qt/gui/QTextCharFormat", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextCharFormat", "qt/gui/QTextCharFormat");
    registerJavaToQt("qt/gui/QTextCharFormat", "QTextCharFormat");
    qRegisterMetaType<QTextCharFormat>("QTextCharFormat");
    registerQtToJava("QTextCodecPlugin", "qt/gui/QTextCodecPlugin_ConcreteWrapper");
    registerJavaToQt("qt/gui/QTextCodecPlugin_ConcreteWrapper", "QTextCodecPlugin");
    registerDeletionPolicy("qt/gui/QTextCursor", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextCursor", "qt/gui/QTextCursor");
    registerJavaToQt("qt/gui/QTextCursor", "QTextCursor");
    qRegisterMetaType<QTextCursor>("QTextCursor");
    registerQtToJava("QTextDocument", "qt/gui/QTextDocument");
    registerJavaToQt("qt/gui/QTextDocument", "QTextDocument");
    registerDeletionPolicy("qt/gui/QTextDocumentFragment", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextDocumentFragment", "qt/gui/QTextDocumentFragment");
    registerJavaToQt("qt/gui/QTextDocumentFragment", "QTextDocumentFragment");
    qRegisterMetaType<QTextDocumentFragment>("QTextDocumentFragment");
    registerQtToJava("QTextEdit", "qt/gui/QTextEdit");
    registerJavaToQt("qt/gui/QTextEdit", "QTextEdit");
    registerDeletionPolicy("qt/gui/QTextEdit_ExtraSelection", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextEdit::ExtraSelection", "qt/gui/QTextEdit_ExtraSelection");
    registerJavaToQt("qt/gui/QTextEdit_ExtraSelection", "QTextEdit::ExtraSelection");
    qRegisterMetaType<QTextEdit::ExtraSelection>("QTextEdit::ExtraSelection");
    registerDeletionPolicy("qt/gui/QTextFormat", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextFormat", "qt/gui/QTextFormat");
    registerJavaToQt("qt/gui/QTextFormat", "QTextFormat");
    registerDeletionPolicy("qt/gui/QTextFragment", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextFragment", "qt/gui/QTextFragment");
    registerJavaToQt("qt/gui/QTextFragment", "QTextFragment");
    qRegisterMetaType<QTextFragment>("QTextFragment");
    registerDeletionPolicy("qt/gui/QTextFrame", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextFrame", "qt/gui/QTextFrame");
    registerJavaToQt("qt/gui/QTextFrame", "QTextFrame");
    registerDeletionPolicy("qt/gui/QTextFrameFormat", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextFrameFormat", "qt/gui/QTextFrameFormat");
    registerJavaToQt("qt/gui/QTextFrameFormat", "QTextFrameFormat");
    qRegisterMetaType<QTextFrameFormat>("QTextFrameFormat");
    registerDeletionPolicy("qt/gui/QTextFrame_iterator", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextFrame::iterator", "qt/gui/QTextFrame_iterator");
    registerJavaToQt("qt/gui/QTextFrame_iterator", "QTextFrame::iterator");
    qRegisterMetaType<QTextFrame::iterator>("QTextFrame::iterator");
    registerDeletionPolicy("qt/gui/QTextImageFormat", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextImageFormat", "qt/gui/QTextImageFormat");
    registerJavaToQt("qt/gui/QTextImageFormat", "QTextImageFormat");
    qRegisterMetaType<QTextImageFormat>("QTextImageFormat");
    registerDeletionPolicy("qt/gui/QTextInlineObject", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextInlineObject", "qt/gui/QTextInlineObject");
    registerJavaToQt("qt/gui/QTextInlineObject", "QTextInlineObject");
    qRegisterMetaType<QTextInlineObject>("QTextInlineObject");
    registerDeletionPolicy("qt/gui/QTextItem", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextItem", "qt/gui/QTextItem");
    registerJavaToQt("qt/gui/QTextItem", "QTextItem");
    registerDestructor("qt/gui/QTextItem", destructor_qt_gui_QTextItem);
    registerQtToJava("QTextLayout", "qt/gui/QTextLayout");
    registerJavaToQt("qt/gui/QTextLayout", "QTextLayout");
    registerDestructor("qt/gui/QTextLayout", destructor_qt_gui_QTextLayout);
    registerQtToJava("QTextLayout::FormatRange", "qt/gui/QTextLayout_FormatRange");
    registerJavaToQt("qt/gui/QTextLayout_FormatRange", "QTextLayout::FormatRange");
    qRegisterMetaType<QTextLayout::FormatRange>("QTextLayout::FormatRange");
    registerDeletionPolicy("qt/gui/QTextLength", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextLength", "qt/gui/QTextLength");
    registerJavaToQt("qt/gui/QTextLength", "QTextLength");
    registerDeletionPolicy("qt/gui/QTextLine", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextLine", "qt/gui/QTextLine");
    registerJavaToQt("qt/gui/QTextLine", "QTextLine");
    qRegisterMetaType<QTextLine>("QTextLine");
    registerDeletionPolicy("qt/gui/QTextList", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextList", "qt/gui/QTextList");
    registerJavaToQt("qt/gui/QTextList", "QTextList");
    registerDeletionPolicy("qt/gui/QTextListFormat", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextListFormat", "qt/gui/QTextListFormat");
    registerJavaToQt("qt/gui/QTextListFormat", "QTextListFormat");
    qRegisterMetaType<QTextListFormat>("QTextListFormat");
    registerDeletionPolicy("qt/gui/QTextObject", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextObject", "qt/gui/QTextObject");
    registerJavaToQt("qt/gui/QTextObject", "QTextObject");
    registerDeletionPolicy("qt/gui/QTextObjectInterface_ConcreteWrapper", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextObjectInterface", "qt/gui/QTextObjectInterface_ConcreteWrapper");
    registerJavaToQt("qt/gui/QTextObjectInterface_ConcreteWrapper", "QTextObjectInterface");
    registerDestructor("qt/gui/QTextObjectInterface_ConcreteWrapper", destructor_qt_gui_QTextObjectInterface_ConcreteWrapper);
    registerDeletionPolicy("qt/gui/QTextOption", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextOption", "qt/gui/QTextOption");
    registerJavaToQt("qt/gui/QTextOption", "QTextOption");
    qRegisterMetaType<QTextOption>("QTextOption");
    registerQtToJava("QTextOption::Tab", "qt/gui/QTextOption_Tab");
    registerJavaToQt("qt/gui/QTextOption_Tab", "QTextOption::Tab");
    qRegisterMetaType<QTextOption::Tab>("QTextOption::Tab");
    registerQtToJava("QTextTable", "qt/gui/QTextTable");
    registerJavaToQt("qt/gui/QTextTable", "QTextTable");
    registerDeletionPolicy("qt/gui/QTextTableCell", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextTableCell", "qt/gui/QTextTableCell");
    registerJavaToQt("qt/gui/QTextTableCell", "QTextTableCell");
    qRegisterMetaType<QTextTableCell>("QTextTableCell");
    registerDeletionPolicy("qt/gui/QTextTableCellFormat", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextTableCellFormat", "qt/gui/QTextTableCellFormat");
    registerJavaToQt("qt/gui/QTextTableCellFormat", "QTextTableCellFormat");
    qRegisterMetaType<QTextTableCellFormat>("QTextTableCellFormat");
    registerDeletionPolicy("qt/gui/QTextTableFormat", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTextTableFormat", "qt/gui/QTextTableFormat");
    registerJavaToQt("qt/gui/QTextTableFormat", "QTextTableFormat");
    qRegisterMetaType<QTextTableFormat>("QTextTableFormat");
    registerQtToJava("QTimeEdit", "qt/gui/QTimeEdit");
    registerJavaToQt("qt/gui/QTimeEdit", "QTimeEdit");
    registerQtToJava("QToolBar", "qt/gui/QToolBar");
    registerJavaToQt("qt/gui/QToolBar", "QToolBar");
    registerQtToJava("QToolBarChangeEvent", "qt/gui/QToolBarChangeEvent");
    registerJavaToQt("qt/gui/QToolBarChangeEvent", "QToolBarChangeEvent");
    registerDestructor("qt/gui/QToolBarChangeEvent", destructor_qt_gui_QToolBarChangeEvent);
    registerQtToJava("QToolBox", "qt/gui/QToolBox");
    registerJavaToQt("qt/gui/QToolBox", "QToolBox");
    registerQtToJava("QToolButton", "qt/gui/QToolButton");
    registerJavaToQt("qt/gui/QToolButton", "QToolButton");
    registerQtToJava("QToolTip", "qt/gui/QToolTip");
    registerJavaToQt("qt/gui/QToolTip", "QToolTip");
    registerDestructor("qt/gui/QToolTip", destructor_qt_gui_QToolTip);
    registerQtToJava("QTransform", "qt/gui/QTransform");
    registerJavaToQt("qt/gui/QTransform", "QTransform");
    registerQtToJava("QTreeView", "qt/gui/QTreeView");
    registerJavaToQt("qt/gui/QTreeView", "QTreeView");
    registerQtToJava("QTreeWidget", "qt/gui/QTreeWidget");
    registerJavaToQt("qt/gui/QTreeWidget", "QTreeWidget");
    registerDeletionPolicy("qt/gui/QTreeWidgetItem", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTreeWidgetItem", "qt/gui/QTreeWidgetItem");
    registerJavaToQt("qt/gui/QTreeWidgetItem", "QTreeWidgetItem");
    registerDestructor("qt/gui/QTreeWidgetItem", destructor_qt_gui_QTreeWidgetItem);
    registerDeletionPolicy("qt/gui/QTreeWidgetItemIterator", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QTreeWidgetItemIterator", "qt/gui/QTreeWidgetItemIterator");
    registerJavaToQt("qt/gui/QTreeWidgetItemIterator", "QTreeWidgetItemIterator");
    QMetaType::registerType("QTreeWidgetItemIterator",
                            reinterpret_cast<QMetaType::Destructor>(qtreewidgetitemiterator_delete),
                            reinterpret_cast<QMetaType::Constructor>(qtreewidgetitemiterator_create));
    registerQtToJava("QUndoCommand", "qt/gui/QUndoCommand");
    registerJavaToQt("qt/gui/QUndoCommand", "QUndoCommand");
    registerDestructor("qt/gui/QUndoCommand", destructor_qt_gui_QUndoCommand);
    registerQtToJava("QUndoGroup", "qt/gui/QUndoGroup");
    registerJavaToQt("qt/gui/QUndoGroup", "QUndoGroup");
    registerQtToJava("QUndoStack", "qt/gui/QUndoStack");
    registerJavaToQt("qt/gui/QUndoStack", "QUndoStack");
    registerQtToJava("QUndoView", "qt/gui/QUndoView");
    registerJavaToQt("qt/gui/QUndoView", "QUndoView");
    registerQtToJava("QVBoxLayout", "qt/gui/QVBoxLayout");
    registerJavaToQt("qt/gui/QVBoxLayout", "QVBoxLayout");
    registerQtToJava("QValidator", "qt/gui/QValidator_ConcreteWrapper");
    registerJavaToQt("qt/gui/QValidator_ConcreteWrapper", "QValidator");
    registerQtToJava("QWhatsThis", "qt/gui/QWhatsThis");
    registerJavaToQt("qt/gui/QWhatsThis", "QWhatsThis");
    registerDestructor("qt/gui/QWhatsThis", destructor_qt_gui_QWhatsThis);
    registerQtToJava("QWhatsThisClickedEvent", "qt/gui/QWhatsThisClickedEvent");
    registerJavaToQt("qt/gui/QWhatsThisClickedEvent", "QWhatsThisClickedEvent");
    registerDestructor("qt/gui/QWhatsThisClickedEvent", destructor_qt_gui_QWhatsThisClickedEvent);
    registerQtToJava("QWheelEvent", "qt/gui/QWheelEvent");
    registerJavaToQt("qt/gui/QWheelEvent", "QWheelEvent");
    registerDestructor("qt/gui/QWheelEvent", destructor_qt_gui_QWheelEvent);
    registerQtToJava("QWidget", "qt/gui/QWidget");
    registerJavaToQt("qt/gui/QWidget", "QWidget");
    registerQtToJava("QWidgetAction", "qt/gui/QWidgetAction");
    registerJavaToQt("qt/gui/QWidgetAction", "QWidgetAction");
    registerQtToJava("QWidgetItem", "qt/gui/QWidgetItem");
    registerJavaToQt("qt/gui/QWidgetItem", "QWidgetItem");
    registerDestructor("qt/gui/QWidgetItem", destructor_qt_gui_QWidgetItem);
    registerQtToJava("QWindowStateChangeEvent", "qt/gui/QWindowStateChangeEvent");
    registerJavaToQt("qt/gui/QWindowStateChangeEvent", "QWindowStateChangeEvent");
    registerDestructor("qt/gui/QWindowStateChangeEvent", destructor_qt_gui_QWindowStateChangeEvent);
    registerQtToJava("QWindowsStyle", "qt/gui/QWindowsStyle");
    registerJavaToQt("qt/gui/QWindowsStyle", "QWindowsStyle");
    registerQtToJava("QWizard", "qt/gui/QWizard");
    registerJavaToQt("qt/gui/QWizard", "QWizard");
    registerQtToJava("QWizardPage", "qt/gui/QWizardPage");
    registerJavaToQt("qt/gui/QWizardPage", "QWizardPage");
    registerQtToJava("QWorkspace", "qt/gui/QWorkspace");
    registerJavaToQt("qt/gui/QWorkspace", "QWorkspace");
    qtjambi_register_polymorphic_id("Lqt_core_QEvent_2",polymorphichandler_Lqt_core_QEvent_2);
    qtjambi_register_polymorphic_id("Lqt_gui_QGradient_2",polymorphichandler_Lqt_gui_QGradient_2);
    qtjambi_register_polymorphic_id("Lqt_gui_QStyleOption_2",polymorphichandler_Lqt_gui_QStyleOption_2);
}

