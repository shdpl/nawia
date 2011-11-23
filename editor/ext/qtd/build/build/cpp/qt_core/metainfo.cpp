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

#include <qabstracteventdispatcher.h>
#include <qfactoryinterface.h>
#include <qabstractfileengine.h>
#include <qabstractfileengine.h>
#include <qabstractfileengine.h>
#include <qabstractfileengine.h>
#include <qabstractfileengine.h>
#include <qabstractfileengine.h>
#include <qabstractitemmodel.h>
#include <qabstractitemmodel.h>
#include <qbasictimer.h>
#include <qbitarray.h>
#include <qbuffer.h>
#include <qbytearray.h>
#include <qbytearraymatcher.h>
#include <qcoreevent.h>
#include <qcoreapplication.h>
#include <qcryptographichash.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdatetime.h>
#include <qdir.h>
#include <qdiriterator.h>
#include <qcoreevent.h>
#include <qcoreevent.h>
#include <qeventloop.h>
#include <qfsfileengine.h>
#include <qfile.h>
#include <qfileinfo.h>
#include <qfilesystemwatcher.h>
#include <qfuture.h>
#include <qfuture.h>
#include <qfuture.h>
#include <qfuture.h>
#include <qfuturesynchronizer.h>
#include <qfuturesynchronizer.h>
#include <qfuturewatcher.h>
#include <qfuturewatcher.h>
#include <qfuturewatcher.h>
#include <qiodevice.h>
#include <qlibraryinfo.h>
#include <qlocale.h>
#include <qmetatype.h>
#include <qmimedata.h>
#include <qmutex.h>
#include <qobject.h>
#include <qabstractitemmodel.h>
#include <qprocess.h>
#include <qreadwritelock.h>
#include <qregexp.h>
#include <qrunnable.h>
#include <qsemaphore.h>
#include <qsettings.h>
#include <qsignalmapper.h>
#include <qsocketnotifier.h>
#include <qstringmatcher.h>
#include <qlocale.h>
#include <qsystemsemaphore.h>
#include <qtemporaryfile.h>
#include <qtextboundaryfinder.h>
#include <qtextcodec.h>
#include <QTextCodec>
#include <qtextcodec.h>
#include <qtextcodec.h>
#include <qtextstream.h>
#include <qthreadpool.h>
#include <qdatetime.h>
#include <qtimeline.h>
#include <qtimer.h>
#include <qcoreevent.h>
#include <qtranslator.h>
#include <qurl.h>
#include <quuid.h>
#include <qvariant.h>
#include <qwaitcondition.h>
#include <qxmlstream.h>
#include <qnamespace.h>
#include <qtconcurrentexception.h>

void destructor_qt_core_QAbstractFactory_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QFactoryInterface *>(ptr);
}

void destructor_qt_core_QAbstractFileEngine(void *ptr)
{
    delete reinterpret_cast<QAbstractFileEngine *>(ptr);
}

void destructor_qt_core_QAbstractFileEngineHandler_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QAbstractFileEngineHandler *>(ptr);
}

void destructor_qt_core_QAbstractFileEngineIterator_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QAbstractFileEngineIterator *>(ptr);
}

void destructor_qt_core_QAbstractFileEngine_MapExtensionOption(void *ptr)
{
    delete reinterpret_cast<QAbstractFileEngine::MapExtensionOption *>(ptr);
}

void destructor_qt_core_QAbstractFileEngine_MapExtensionReturn(void *ptr)
{
    delete reinterpret_cast<QAbstractFileEngine::MapExtensionReturn *>(ptr);
}

void destructor_qt_core_QAbstractFileEngine_UnMapExtensionOption(void *ptr)
{
    delete reinterpret_cast<QAbstractFileEngine::UnMapExtensionOption *>(ptr);
}

void destructor_qt_core_QChildEvent(void *ptr)
{
    delete reinterpret_cast<QChildEvent *>(ptr);
}

void destructor_qt_core_QCryptographicHash(void *ptr)
{
    delete reinterpret_cast<QCryptographicHash *>(ptr);
}

void destructor_qt_core_QDataStream(void *ptr)
{
    delete reinterpret_cast<QDataStream *>(ptr);
}

void destructor_qt_core_QDirIterator(void *ptr)
{
    delete reinterpret_cast<QDirIterator *>(ptr);
}

void destructor_qt_core_QDynamicPropertyChangeEvent(void *ptr)
{
    delete reinterpret_cast<QDynamicPropertyChangeEvent *>(ptr);
}

void destructor_qt_core_QEvent(void *ptr)
{
    delete reinterpret_cast<QEvent *>(ptr);
}

void destructor_qt_core_QFSFileEngine(void *ptr)
{
    delete reinterpret_cast<QFSFileEngine *>(ptr);
}

void destructor_qt_core_QLibraryInfo(void *ptr)
{
    delete reinterpret_cast<QLibraryInfo *>(ptr);
}

void destructor_qt_core_QMutex(void *ptr)
{
    delete reinterpret_cast<QMutex *>(ptr);
}

void destructor_qt_core_QReadWriteLock(void *ptr)
{
    delete reinterpret_cast<QReadWriteLock *>(ptr);
}

void destructor_qt_core_QRunnable_ConcreteWrapper(void *ptr)
{
    delete reinterpret_cast<QRunnable *>(ptr);
}

void destructor_qt_core_QSemaphore(void *ptr)
{
    delete reinterpret_cast<QSemaphore *>(ptr);
}

void destructor_qt_core_QSystemLocale(void *ptr)
{
    delete reinterpret_cast<QSystemLocale *>(ptr);
}

void destructor_qt_core_QSystemSemaphore(void *ptr)
{
    delete reinterpret_cast<QSystemSemaphore *>(ptr);
}

void destructor_qt_core_QTextCodec_ConverterState(void *ptr)
{
    delete reinterpret_cast<QTextCodec::ConverterState *>(ptr);
}

void destructor_qt_core_QTextDecoder(void *ptr)
{
    delete reinterpret_cast<QTextDecoder *>(ptr);
}

void destructor_qt_core_QTextEncoder(void *ptr)
{
    delete reinterpret_cast<QTextEncoder *>(ptr);
}

void destructor_qt_core_QTextStream(void *ptr)
{
    delete reinterpret_cast<QTextStream *>(ptr);
}

void destructor_qt_core_QTimerEvent(void *ptr)
{
    delete reinterpret_cast<QTimerEvent *>(ptr);
}

void destructor_qt_core_QWaitCondition(void *ptr)
{
    delete reinterpret_cast<QWaitCondition *>(ptr);
}

void destructor_qt_core_QXmlStreamEntityResolver(void *ptr)
{
    delete reinterpret_cast<QXmlStreamEntityResolver *>(ptr);
}

static int sns_count = 75;
static const char *qtNames[] = {
    "QAbstractEventDispatcher::aboutToBlock()",
    "QAbstractEventDispatcher::awake()",
    "QAbstractItemModel::columnsAboutToBeInserted(QModelIndex,int,int)",
    "QAbstractItemModel::columnsAboutToBeRemoved(QModelIndex,int,int)",
    "QAbstractItemModel::columnsInserted(QModelIndex,int,int)",
    "QAbstractItemModel::columnsRemoved(QModelIndex,int,int)",
    "QAbstractItemModel::dataChanged(QModelIndex,QModelIndex)",
    "QAbstractItemModel::headerDataChanged(Qt::Orientation,int,int)",
    "QAbstractItemModel::layoutAboutToBeChanged()",
    "QAbstractItemModel::layoutChanged()",
    "QAbstractItemModel::modelAboutToBeReset()",
    "QAbstractItemModel::modelReset()",
    "QAbstractItemModel::revert()",
    "QAbstractItemModel::rowsAboutToBeInserted(QModelIndex,int,int)",
    "QAbstractItemModel::rowsAboutToBeRemoved(QModelIndex,int,int)",
    "QAbstractItemModel::rowsInserted(QModelIndex,int,int)",
    "QAbstractItemModel::rowsRemoved(QModelIndex,int,int)",
    "QAbstractItemModel::submit()",
    "QCoreApplication::aboutToQuit()",
    "QCoreApplication::quit()",
    "QCoreApplication::unixSignal(int)",
    "QEventLoop::quit()",
    "QFileSystemWatcher::directoryChanged(QString)",
    "QFileSystemWatcher::fileChanged(QString)",
    "QFutureWatcherBase::cancel()",
    "QFutureWatcherBase::canceled()",
    "QFutureWatcherBase::finished()",
    "QFutureWatcherBase::pause()",
    "QFutureWatcherBase::paused()",
    "QFutureWatcherBase::progressRangeChanged(int,int)",
    "QFutureWatcherBase::progressTextChanged(QString)",
    "QFutureWatcherBase::progressValueChanged(int)",
    "QFutureWatcherBase::resultReadyAt(int)",
    "QFutureWatcherBase::resultsReadyAt(int,int)",
    "QFutureWatcherBase::resume()",
    "QFutureWatcherBase::resumed()",
    "QFutureWatcherBase::setPaused(bool)",
    "QFutureWatcherBase::started()",
    "QFutureWatcherBase::togglePaused()",
    "QIODevice::aboutToClose()",
    "QIODevice::bytesWritten(qint64)",
    "QIODevice::readChannelFinished()",
    "QIODevice::readyRead()",
    "QObject::deleteLater()",
    "QProcess::error(QProcess::ProcessError)",
    "QProcess::finished(int)",
    "QProcess::finished(int,QProcess::ExitStatus)",
    "QProcess::kill()",
    "QProcess::readyReadStandardError()",
    "QProcess::readyReadStandardOutput()",
    "QProcess::started()",
    "QProcess::stateChanged(QProcess::ProcessState)",
    "QProcess::terminate()",
    "QSignalMapper::map()",
    "QSignalMapper::map(QObject*)",
    "QSignalMapper::mapped(QObject*)",
    "QSignalMapper::mapped(QWidget*)",
    "QSignalMapper::mapped(QString)",
    "QSignalMapper::mapped(int)",
    "QSocketNotifier::activated(int)",
    "QSocketNotifier::setEnabled(bool)",
    "QTimeLine::finished()",
    "QTimeLine::frameChanged(int)",
    "QTimeLine::resume()",
    "QTimeLine::setCurrentTime(int)",
    "QTimeLine::setPaused(bool)",
    "QTimeLine::start()",
    "QTimeLine::stateChanged(QTimeLine::State)",
    "QTimeLine::stop()",
    "QTimeLine::toggleDirection()",
    "QTimeLine::valueChanged(qreal)",
    "QTimer::start()",
    "QTimer::start(int)",
    "QTimer::stop()",
    "QTimer::timeout()",
};

static const char *javaFunctionNames[] = {
    "qt.core.QAbstractEventDispatcher.aboutToBlock()",
    "qt.core.QAbstractEventDispatcher.awake()",
    "qt.core.QAbstractItemModel.columnsAboutToBeInserted(const(QModelIndex), int, int)",
    "qt.core.QAbstractItemModel.columnsAboutToBeRemoved(const(QModelIndex), int, int)",
    "qt.core.QAbstractItemModel.columnsInserted(const(QModelIndex), int, int)",
    "qt.core.QAbstractItemModel.columnsRemoved(const(QModelIndex), int, int)",
    "qt.core.QAbstractItemModel.dataChanged(const(QModelIndex), const(QModelIndex))",
    "qt.core.QAbstractItemModel.headerDataChanged(Qt.Orientation, int, int)",
    "qt.core.QAbstractItemModel.layoutAboutToBeChanged()",
    "qt.core.QAbstractItemModel.layoutChanged()",
    "qt.core.QAbstractItemModel.modelAboutToBeReset()",
    "qt.core.QAbstractItemModel.modelReset()",
    "qt.core.QAbstractItemModel.revert()",
    "qt.core.QAbstractItemModel.rowsAboutToBeInserted(const(QModelIndex), int, int)",
    "qt.core.QAbstractItemModel.rowsAboutToBeRemoved(const(QModelIndex), int, int)",
    "qt.core.QAbstractItemModel.rowsInserted(const(QModelIndex), int, int)",
    "qt.core.QAbstractItemModel.rowsRemoved(const(QModelIndex), int, int)",
    "qt.core.QAbstractItemModel.submit()",
    "qt.core.QCoreApplication.aboutToQuit()",
    "qt.core.QCoreApplication.quit()",
    "qt.core.QCoreApplication.unixSignal(int)",
    "qt.core.QEventLoop.quit()",
    "qt.core.QFileSystemWatcher.directoryChanged(string)",
    "qt.core.QFileSystemWatcher.fileChanged(string)",
    "qt.core.QFutureWatcherBase.cancel()",
    "qt.core.QFutureWatcherBase.canceled()",
    "qt.core.QFutureWatcherBase.finished()",
    "qt.core.QFutureWatcherBase.pause()",
    "qt.core.QFutureWatcherBase.paused()",
    "qt.core.QFutureWatcherBase.progressRangeChanged(int, int)",
    "qt.core.QFutureWatcherBase.progressTextChanged(string)",
    "qt.core.QFutureWatcherBase.progressValueChanged(int)",
    "qt.core.QFutureWatcherBase.resultReadyAt(int)",
    "qt.core.QFutureWatcherBase.resultsReadyAt(int, int)",
    "qt.core.QFutureWatcherBase.resume()",
    "qt.core.QFutureWatcherBase.resumed()",
    "qt.core.QFutureWatcherBase.setPaused(bool)",
    "qt.core.QFutureWatcherBase.started()",
    "qt.core.QFutureWatcherBase.togglePaused()",
    "qt.core.QIODevice.aboutToClose()",
    "qt.core.QIODevice.bytesWritten(long)",
    "qt.core.QIODevice.readChannelFinished()",
    "qt.core.QIODevice.readyRead()",
    "qt.core.QObject.deleteLater()",
    "qt.core.QProcess.error(QProcess.ProcessError)",
    "qt.core.QProcess.finished(int)",
    "qt.core.QProcess.finished(int, QProcess.ExitStatus)",
    "qt.core.QProcess.kill()",
    "qt.core.QProcess.readyReadStandardError()",
    "qt.core.QProcess.readyReadStandardOutput()",
    "qt.core.QProcess.started()",
    "qt.core.QProcess.stateChanged(QProcess.ProcessState)",
    "qt.core.QProcess.terminate()",
    "qt.core.QSignalMapper.map()",
    "qt.core.QSignalMapper.map(QObject)",
    "qt.core.QSignalMapper.mapped(QObject)",
    "qt.core.QSignalMapper.mapped(QWidget)",
    "qt.core.QSignalMapper.mapped(string)",
    "qt.core.QSignalMapper.mapped(int)",
    "qt.core.QSocketNotifier.activated(int)",
    "qt.core.QSocketNotifier.setEnabled(bool)",
    "qt.core.QTimeLine.finished()",
    "qt.core.QTimeLine.frameChanged(int)",
    "qt.core.QTimeLine.resume()",
    "qt.core.QTimeLine.setCurrentTime(int)",
    "qt.core.QTimeLine.setPaused(bool)",
    "qt.core.QTimeLine.start()",
    "qt.core.QTimeLine.stateChanged(QTimeLine.State)",
    "qt.core.QTimeLine.stop()",
    "qt.core.QTimeLine.toggleDirection()",
    "qt.core.QTimeLine.valueChanged(double)",
    "qt.core.QTimer.start()",
    "qt.core.QTimer.start(int)",
    "qt.core.QTimer.stop()",
    "qt.core.QTimer.timeout()",
};

static const char *javaObjectNames[] = {
    "qt.core.QAbstractEventDispatcher.aboutToBlock",
    "qt.core.QAbstractEventDispatcher.awake",
    "qt.core.QAbstractItemModel.columnsAboutToBeInserted",
    "qt.core.QAbstractItemModel.columnsAboutToBeRemoved",
    "qt.core.QAbstractItemModel.columnsInserted",
    "qt.core.QAbstractItemModel.columnsRemoved",
    "qt.core.QAbstractItemModel.dataChanged",
    "qt.core.QAbstractItemModel.headerDataChanged",
    "qt.core.QAbstractItemModel.layoutAboutToBeChanged",
    "qt.core.QAbstractItemModel.layoutChanged",
    "qt.core.QAbstractItemModel.modelAboutToBeReset",
    "qt.core.QAbstractItemModel.modelReset",
    "qt.core.QAbstractItemModel.revert()",
    "qt.core.QAbstractItemModel.rowsAboutToBeInserted",
    "qt.core.QAbstractItemModel.rowsAboutToBeRemoved",
    "qt.core.QAbstractItemModel.rowsInserted",
    "qt.core.QAbstractItemModel.rowsRemoved",
    "qt.core.QAbstractItemModel.submit()",
    "qt.core.QCoreApplication.aboutToQuit",
    "qt.core.QCoreApplication.quit()",
    "qt.core.QCoreApplication.unixSignal",
    "qt.core.QEventLoop.quit()",
    "qt.core.QFileSystemWatcher.directoryChanged",
    "qt.core.QFileSystemWatcher.fileChanged",
    "qt.core.QFutureWatcherBase.cancel()",
    "qt.core.QFutureWatcherBase.canceled",
    "qt.core.QFutureWatcherBase.finished",
    "qt.core.QFutureWatcherBase.pause()",
    "qt.core.QFutureWatcherBase.paused",
    "qt.core.QFutureWatcherBase.progressRangeChanged",
    "qt.core.QFutureWatcherBase.progressTextChanged",
    "qt.core.QFutureWatcherBase.progressValueChanged",
    "qt.core.QFutureWatcherBase.resultReadyAt",
    "qt.core.QFutureWatcherBase.resultsReadyAt",
    "qt.core.QFutureWatcherBase.resume()",
    "qt.core.QFutureWatcherBase.resumed",
    "qt.core.QFutureWatcherBase.setPaused(bool)",
    "qt.core.QFutureWatcherBase.started",
    "qt.core.QFutureWatcherBase.togglePaused()",
    "qt.core.QIODevice.aboutToClose",
    "qt.core.QIODevice.bytesWritten",
    "qt.core.QIODevice.readChannelFinished",
    "qt.core.QIODevice.readyRead",
    "qt.core.QObject.deleteLater()",
    "qt.core.QProcess.error",
    "qt.core.QProcess.finished",
    "qt.core.QProcess.finished",
    "qt.core.QProcess.kill()",
    "qt.core.QProcess.readyReadStandardError",
    "qt.core.QProcess.readyReadStandardOutput",
    "qt.core.QProcess.started",
    "qt.core.QProcess.stateChanged",
    "qt.core.QProcess.terminate()",
    "qt.core.QSignalMapper.map()",
    "qt.core.QSignalMapper.map(QObject)",
    "qt.core.QSignalMapper.mapped",
    "qt.core.QSignalMapper.mapped",
    "qt.core.QSignalMapper.mapped",
    "qt.core.QSignalMapper.mapped",
    "qt.core.QSocketNotifier.activated",
    "qt.core.QSocketNotifier.setEnabled(bool)",
    "qt.core.QTimeLine.finished",
    "qt.core.QTimeLine.frameChanged",
    "qt.core.QTimeLine.resume()",
    "qt.core.QTimeLine.setCurrentTime(int)",
    "qt.core.QTimeLine.setPaused(bool)",
    "qt.core.QTimeLine.start()",
    "qt.core.QTimeLine.stateChanged",
    "qt.core.QTimeLine.stop()",
    "qt.core.QTimeLine.toggleDirection()",
    "qt.core.QTimeLine.valueChanged",
    "qt.core.QTimer.start()",
    "qt.core.QTimer.start(int)",
    "qt.core.QTimer.stop()",
    "qt.core.QTimer.timeout",
};

static const char *javaSignatures[] = {
    "()V",
    "()V",
    "(Lqt/core/QModelIndex;II)V",
    "(Lqt/core/QModelIndex;II)V",
    "(Lqt/core/QModelIndex;II)V",
    "(Lqt/core/QModelIndex;II)V",
    "(Lqt/core/QModelIndex;Lqt/core/QModelIndex;)V",
    "(Lqt/core/Qt$Orientation;II)V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "(Lqt/core/QModelIndex;II)V",
    "(Lqt/core/QModelIndex;II)V",
    "(Lqt/core/QModelIndex;II)V",
    "(Lqt/core/QModelIndex;II)V",
    "()Lbool;",
    "()V",
    "()V",
    "(I)V",
    "()V",
    "(Ljava/lang/string;)V",
    "(Ljava/lang/string;)V",
    "()V",
    "()V",
    "()V",
    "()V",
    "()V",
    "(II)V",
    "(Ljava/lang/string;)V",
    "(I)V",
    "(I)V",
    "(II)V",
    "()V",
    "()V",
    "(Lbool;)V",
    "()V",
    "()V",
    "()V",
    "(J)V",
    "()V",
    "()V",
    "()V",
    "(Lqt/core/QProcess$ProcessError;)V",
    "(I)V",
    "(ILqt/core/QProcess$ExitStatus;)V",
    "()V",
    "()V",
    "()V",
    "()V",
    "(Lqt/core/QProcess$ProcessState;)V",
    "()V",
    "()V",
    "(Lqt/core/QObject;)V",
    "(Lqt/core/QObject;)V",
    "(Lqt/gui/QWidget;)V",
    "(Ljava/lang/string;)V",
    "(I)V",
    "(I)V",
    "(Lbool;)V",
    "()V",
    "(I)V",
    "()V",
    "(I)V",
    "(Lbool;)V",
    "()V",
    "(Lqt/core/QTimeLine$State;)V",
    "()V",
    "()V",
    "(D)V",
    "()V",
    "(I)V",
    "()V",
    "()V"
};

static int enum_count = 146;
static const char *enumJavaNames[] = {
    "qt/core/QUrl$FormattingOption",
    "qt/core/Qt$ConnectionType",
    "qt/core/Qt$ToolBarAreaSizes",
    "qt/core/Qt$InputMethodQuery",
    "qt/core/Qt$ContextMenuPolicy",
    "qt/core/QTextBoundaryFinder$BoundaryReason",
    "qt/core/QProcess$ProcessState",
    "qt/core/QSettings$Scope",
    "qt/core/Qt$ItemSelectionMode",
    "qt/core/QMutex$RecursionMode",
    "qt/core/QRegExp$CaretMode",
    "qt/core/Qt$SizeMode",
    "qt/core/QSystemSemaphore$SystemSemaphoreError",
    "qt/core/Qt$MaskMode",
    "qt/core/QTextStream$NumberFlag",
    "qt/core/QAbstractFileEngine$Extension",
    "qt/core/Qt$GlobalColor",
    "qt/core/Qt$PenJoinStyle",
    "qt/core/QtConcurrent$ReduceOption",
    "qt/core/QUrl$ParsingMode",
    "qt/core/Qt$TextInteractionFlag",
    "qt/core/QSocketNotifier$Type",
    "qt/core/QAbstractFileEngine$FileFlag",
    "qt/core/Global$QtMsgType",
    "qt/core/Qt$TransformationMode",
    "qt/core/Qt$DayOfWeek",
    "qt/core/QTextStream$NumberFlag",
    "qt/core/Qt$BGMode",
    "qt/core/QCryptographicHash$Algorithm",
    "qt/core/QUuid$Version",
    "qt/core/QProcess$ProcessChannel",
    "qt/core/Qt$AlignmentFlag",
    "qt/core/Qt$KeyboardModifier",
    "qt/core/QLibraryInfo$LibraryLocation",
    "qt/core/QTextCodec$ConversionFlag",
    "qt/core/Qt$WindowType",
    "qt/core/Qt$LayoutDirection",
    "qt/core/QTextStream$FieldAlignment",
    "qt/core/QDataStream$Version",
    "qt/core/QTimeLine$Direction",
    "qt/core/QUuid$Variant",
    "qt/core/Qt$Modifier",
    "qt/core/QIODevice$OpenModeFlag",
    "qt/core/Qt$PenStyle",
    "qt/core/Qt$SizeHint",
    "qt/core/Qt$ShortcutContext",
    "qt/core/QAbstractFileEngine$FileFlag",
    "qt/core/Qt$MouseButton",
    "qt/core/QAbstractFileEngine$FileOwner",
    "qt/core/Qt$TimeSpec",
    "qt/core/Qt$CaseSensitivity",
    "qt/core/Qt$DateFormat",
    "qt/core/QRegExp$PatternSyntax",
    "qt/core/Qt$DockWidgetAreaSizes",
    "qt/core/QTextBoundaryFinder$BoundaryType",
    "qt/core/Qt$Axis",
    "qt/core/QTextBoundaryFinder$BoundaryReason",
    "qt/core/Qt$PenCapStyle",
    "qt/core/Qt$ApplicationAttribute",
    "qt/core/Qt$ItemFlag",
    "qt/core/QTimeLine$CurveShape",
    "qt/core/Qt$DropAction",
    "qt/core/Qt$ToolButtonStyle",
    "qt/core/Qt$CursorShape",
    "qt/core/QTextStream$RealNumberNotation",
    "qt/core/Qt$HitTestAccuracy",
    "qt/core/QLocale$Country",
    "qt/core/Qt$TextInteractionFlag",
    "qt/core/Qt$WindowState",
    "qt/core/Qt$ItemFlag",
    "qt/core/Qt$Corner",
    "qt/core/QDir$Filter",
    "qt/core/QEventLoop$ProcessEventsFlag",
    "qt/core/QSystemSemaphore$AccessMode",
    "qt/core/Qt$DropAction",
    "qt/core/Qt$ClipOperation",
    "qt/core/Qt$WindowType",
    "qt/core/Qt$AnchorAttribute",
    "qt/core/Qt$CheckState",
    "qt/core/QDir$SortFlag",
    "qt/core/Qt$AlignmentFlag",
    "qt/core/QtConcurrent$ThreadFunctionResult",
    "qt/core/QDataStream$Status",
    "qt/core/Qt$TextFormat",
    "qt/core/Qt$ArrowType",
    "qt/core/QUrl$FormattingOption",
    "qt/core/QSettings$Status",
    "qt/core/QTextStream$Status",
    "qt/core/Qt$Orientation",
    "qt/core/Qt$FocusReason",
    "qt/core/QFile$MemoryMapFlags",
    "qt/core/Qt$WindowModality",
    "qt/core/Qt$DockWidgetArea",
    "qt/core/QSettings$Format",
    "qt/core/QTextCodec$ConversionFlag",
    "qt/core/Qt$ItemDataRole",
    "qt/core/Qt$MouseButton",
    "qt/core/Qt$FillRule",
    "qt/core/QCoreApplication$Encoding",
    "qt/core/Qt$AspectRatioMode",
    "qt/core/Qt$TextFlag",
    "qt/core/QDirIterator$IteratorFlag",
    "qt/core/QIODevice$OpenModeFlag",
    "qt/core/QLocale$MeasurementSystem",
    "qt/core/QFile$Permission",
    "qt/core/QtConcurrent$ReduceOption",
    "qt/core/QLocale$FormatType",
    "qt/core/Qt$FocusPolicy",
    "qt/core/Qt$Key",
    "qt/core/QEvent$Type",
    "qt/core/Qt$WidgetAttribute",
    "qt/core/Qt$EventPriority",
    "qt/core/QDirIterator$IteratorFlag",
    "qt/core/QFile$Permission",
    "qt/core/QSystemLocale$QueryType",
    "qt/core/Qt$SortOrder",
    "qt/core/QLocale$NumberOption",
    "qt/core/QLocale$Language",
    "qt/core/QReadWriteLock$RecursionMode",
    "qt/core/QDir$Filter",
    "qt/core/QDir$SortFlag",
    "qt/core/QAbstractFileEngine$FileTime",
    "qt/core/QProcess$ProcessChannelMode",
    "qt/core/Qt$TextElideMode",
    "qt/core/QEventLoop$ProcessEventsFlag",
    "qt/core/QFile$FileError",
    "qt/core/Qt$UIEffect",
    "qt/core/Qt$WindowState",
    "qt/core/QAbstractFileEngine$FileName",
    "qt/core/Qt$MatchFlag",
    "qt/core/Qt$DockWidgetArea",
    "qt/core/Qt$BrushStyle",
    "qt/core/Qt$ImageConversionFlag",
    "qt/core/QTimeLine$State",
    "qt/core/QProcess$ProcessError",
    "qt/core/Qt$ToolBarArea",
    "qt/core/QProcess$ExitStatus",
    "qt/core/Qt$WhiteSpaceMode",
    "qt/core/Qt$MatchFlag",
    "qt/core/Qt$ImageConversionFlag",
    "qt/core/Qt$ToolBarArea",
    "qt/core/Qt$KeyboardModifier",
    "qt/core/Qt$ScrollBarPolicy",
    "qt/core/QLocale$NumberOption",
    "qt/core/Qt$Orientation",
    "qt/core/Qt$WindowFrameSection",
};

static const char *enumCppNames[] = {
    "QUrl::FormattingOption",
    "Qt::ConnectionType",
    "Qt::ToolBarAreaSizes",
    "Qt::InputMethodQuery",
    "Qt::ContextMenuPolicy",
    "QTextBoundaryFinder::BoundaryReason",
    "QProcess::ProcessState",
    "QSettings::Scope",
    "Qt::ItemSelectionMode",
    "QMutex::RecursionMode",
    "QRegExp::CaretMode",
    "Qt::SizeMode",
    "QSystemSemaphore::SystemSemaphoreError",
    "Qt::MaskMode",
    "QTextStream::NumberFlags",
    "QAbstractFileEngine::Extension",
    "Qt::GlobalColor",
    "Qt::PenJoinStyle",
    "QtConcurrent::ReduceOption",
    "QUrl::ParsingMode",
    "Qt::TextInteractionFlag",
    "QSocketNotifier::Type",
    "QAbstractFileEngine::FileFlags",
    "QtMsgType",
    "Qt::TransformationMode",
    "Qt::DayOfWeek",
    "QTextStream::NumberFlag",
    "Qt::BGMode",
    "QCryptographicHash::Algorithm",
    "QUuid::Version",
    "QProcess::ProcessChannel",
    "Qt::Alignment",
    "Qt::KeyboardModifiers",
    "QLibraryInfo::LibraryLocation",
    "QTextCodec::ConversionFlags",
    "Qt::WindowFlags",
    "Qt::LayoutDirection",
    "QTextStream::FieldAlignment",
    "QDataStream::Version",
    "QTimeLine::Direction",
    "QUuid::Variant",
    "Qt::Modifier",
    "QIODevice::OpenMode",
    "Qt::PenStyle",
    "Qt::SizeHint",
    "Qt::ShortcutContext",
    "QAbstractFileEngine::FileFlag",
    "Qt::MouseButton",
    "QAbstractFileEngine::FileOwner",
    "Qt::TimeSpec",
    "Qt::CaseSensitivity",
    "Qt::DateFormat",
    "QRegExp::PatternSyntax",
    "Qt::DockWidgetAreaSizes",
    "QTextBoundaryFinder::BoundaryType",
    "Qt::Axis",
    "QTextBoundaryFinder::BoundaryReasons",
    "Qt::PenCapStyle",
    "Qt::ApplicationAttribute",
    "Qt::ItemFlag",
    "QTimeLine::CurveShape",
    "Qt::DropAction",
    "Qt::ToolButtonStyle",
    "Qt::CursorShape",
    "QTextStream::RealNumberNotation",
    "Qt::HitTestAccuracy",
    "QLocale::Country",
    "Qt::TextInteractionFlags",
    "Qt::WindowStates",
    "Qt::ItemFlags",
    "Qt::Corner",
    "QDir::Filters",
    "QEventLoop::ProcessEventsFlag",
    "QSystemSemaphore::AccessMode",
    "Qt::DropActions",
    "Qt::ClipOperation",
    "Qt::WindowType",
    "Qt::AnchorAttribute",
    "Qt::CheckState",
    "QDir::SortFlag",
    "Qt::AlignmentFlag",
    "QtConcurrent::ThreadFunctionResult",
    "QDataStream::Status",
    "Qt::TextFormat",
    "Qt::ArrowType",
    "QUrl::FormattingOptions",
    "QSettings::Status",
    "QTextStream::Status",
    "Qt::Orientation",
    "Qt::FocusReason",
    "QFile::MemoryMapFlags",
    "Qt::WindowModality",
    "Qt::DockWidgetAreas",
    "QSettings::Format",
    "QTextCodec::ConversionFlag",
    "Qt::ItemDataRole",
    "Qt::MouseButtons",
    "Qt::FillRule",
    "QCoreApplication::Encoding",
    "Qt::AspectRatioMode",
    "Qt::TextFlag",
    "QDirIterator::IteratorFlag",
    "QIODevice::OpenModeFlag",
    "QLocale::MeasurementSystem",
    "QFile::Permission",
    "QtConcurrent::ReduceOptions",
    "QLocale::FormatType",
    "Qt::FocusPolicy",
    "Qt::Key",
    "QEvent::Type",
    "Qt::WidgetAttribute",
    "Qt::EventPriority",
    "QDirIterator::IteratorFlags",
    "QFile::Permissions",
    "QSystemLocale::QueryType",
    "Qt::SortOrder",
    "QLocale::NumberOption",
    "QLocale::Language",
    "QReadWriteLock::RecursionMode",
    "QDir::Filter",
    "QDir::SortFlags",
    "QAbstractFileEngine::FileTime",
    "QProcess::ProcessChannelMode",
    "Qt::TextElideMode",
    "QEventLoop::ProcessEventsFlags",
    "QFile::FileError",
    "Qt::UIEffect",
    "Qt::WindowState",
    "QAbstractFileEngine::FileName",
    "Qt::MatchFlags",
    "Qt::DockWidgetArea",
    "Qt::BrushStyle",
    "Qt::ImageConversionFlags",
    "QTimeLine::State",
    "QProcess::ProcessError",
    "Qt::ToolBarArea",
    "QProcess::ExitStatus",
    "Qt::WhiteSpaceMode",
    "Qt::MatchFlag",
    "Qt::ImageConversionFlag",
    "Qt::ToolBarAreas",
    "Qt::KeyboardModifier",
    "Qt::ScrollBarPolicy",
    "QLocale::NumberOptions",
    "Qt::Orientations",
    "Qt::WindowFrameSection"
};

static bool polymorphichandler_Lqt_core_QEvent_2(const void *ptr, char **class_name, char **package)
{
    Q_ASSERT(ptr != 0);
    QEvent *object = (QEvent *)ptr;
    if (object->type() == QEvent::ChildAdded || object->type() == QEvent::ChildPolished || object->type() == QEvent::ChildRemoved) {
        *class_name = "QChildEvent";
        *package    = "qt/core/";
        return true;
    }
    if (object->type() == QEvent::DynamicPropertyChange) {
        *class_name = "QDynamicPropertyChangeEvent";
        *package    = "qt/core/";
        return true;
    }
    if (object->type() == QEvent::None) {
        *class_name = "QEvent";
        *package    = "qt/core/";
        return true;
    }
    if (object->type() == QEvent::Timer) {
        *class_name = "QTimerEvent";
        *package    = "qt/core/";
        return true;
    }
    return false;
}
void __metainfo_init_qt_core()
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
    registerJavaToQt("qt/core/IQAbstractFactory", "QAbstractFactory");
    registerQtToJava("QAbstractEventDispatcher", "qt/core/QAbstractEventDispatcher_ConcreteWrapper");
    registerJavaToQt("qt/core/QAbstractEventDispatcher_ConcreteWrapper", "QAbstractEventDispatcher");
    registerQtToJava("QFactoryInterface", "qt/core/QAbstractFactory_ConcreteWrapper");
    registerJavaToQt("qt/core/QAbstractFactory_ConcreteWrapper", "QFactoryInterface");
    registerDestructor("qt/core/QAbstractFactory_ConcreteWrapper", destructor_qt_core_QAbstractFactory_ConcreteWrapper);
    registerQtToJava("QAbstractFileEngine", "qt/core/QAbstractFileEngine");
    registerJavaToQt("qt/core/QAbstractFileEngine", "QAbstractFileEngine");
    registerDestructor("qt/core/QAbstractFileEngine", destructor_qt_core_QAbstractFileEngine);
    registerQtToJava("QAbstractFileEngineHandler", "qt/core/QAbstractFileEngineHandler_ConcreteWrapper");
    registerJavaToQt("qt/core/QAbstractFileEngineHandler_ConcreteWrapper", "QAbstractFileEngineHandler");
    registerDestructor("qt/core/QAbstractFileEngineHandler_ConcreteWrapper", destructor_qt_core_QAbstractFileEngineHandler_ConcreteWrapper);
    registerQtToJava("QAbstractFileEngineIterator", "qt/core/QAbstractFileEngineIterator_ConcreteWrapper");
    registerJavaToQt("qt/core/QAbstractFileEngineIterator_ConcreteWrapper", "QAbstractFileEngineIterator");
    registerDestructor("qt/core/QAbstractFileEngineIterator_ConcreteWrapper", destructor_qt_core_QAbstractFileEngineIterator_ConcreteWrapper);
    registerQtToJava("QAbstractFileEngine::MapExtensionOption", "qt/core/QAbstractFileEngine_MapExtensionOption");
    registerJavaToQt("qt/core/QAbstractFileEngine_MapExtensionOption", "QAbstractFileEngine::MapExtensionOption");
    registerDestructor("qt/core/QAbstractFileEngine_MapExtensionOption", destructor_qt_core_QAbstractFileEngine_MapExtensionOption);
    registerQtToJava("QAbstractFileEngine::MapExtensionReturn", "qt/core/QAbstractFileEngine_MapExtensionReturn");
    registerJavaToQt("qt/core/QAbstractFileEngine_MapExtensionReturn", "QAbstractFileEngine::MapExtensionReturn");
    registerDestructor("qt/core/QAbstractFileEngine_MapExtensionReturn", destructor_qt_core_QAbstractFileEngine_MapExtensionReturn);
    registerQtToJava("QAbstractFileEngine::UnMapExtensionOption", "qt/core/QAbstractFileEngine_UnMapExtensionOption");
    registerJavaToQt("qt/core/QAbstractFileEngine_UnMapExtensionOption", "QAbstractFileEngine::UnMapExtensionOption");
    registerDestructor("qt/core/QAbstractFileEngine_UnMapExtensionOption", destructor_qt_core_QAbstractFileEngine_UnMapExtensionOption);
    registerQtToJava("QAbstractItemModel", "qt/core/QAbstractItemModel_ConcreteWrapper");
    registerJavaToQt("qt/core/QAbstractItemModel_ConcreteWrapper", "QAbstractItemModel");
    registerQtToJava("QAbstractListModel", "qt/core/QAbstractListModel_ConcreteWrapper");
    registerJavaToQt("qt/core/QAbstractListModel_ConcreteWrapper", "QAbstractListModel");
    registerQtToJava("QBasicTimer", "qt/core/QBasicTimer");
    registerJavaToQt("qt/core/QBasicTimer", "QBasicTimer");
    qRegisterMetaType<QBasicTimer>("QBasicTimer");
    registerQtToJava("QBitArray", "qt/core/QBitArray");
    registerJavaToQt("qt/core/QBitArray", "QBitArray");
    registerQtToJava("QBuffer", "qt/core/QBuffer");
    registerJavaToQt("qt/core/QBuffer", "QBuffer");
    registerQtToJava("QByteArray", "qt/core/QByteArray");
    registerJavaToQt("qt/core/QByteArray", "QByteArray");
    registerQtToJava("QByteArrayMatcher", "qt/core/QByteArrayMatcher");
    registerJavaToQt("qt/core/QByteArrayMatcher", "QByteArrayMatcher");
    qRegisterMetaType<QByteArrayMatcher>("QByteArrayMatcher");
    registerQtToJava("QChildEvent", "qt/core/QChildEvent");
    registerJavaToQt("qt/core/QChildEvent", "QChildEvent");
    registerDestructor("qt/core/QChildEvent", destructor_qt_core_QChildEvent);
    registerQtToJava("QCoreApplication", "qt/core/QCoreApplication");
    registerJavaToQt("qt/core/QCoreApplication", "QCoreApplication");
    registerQtToJava("QCryptographicHash", "qt/core/QCryptographicHash");
    registerJavaToQt("qt/core/QCryptographicHash", "QCryptographicHash");
    registerDestructor("qt/core/QCryptographicHash", destructor_qt_core_QCryptographicHash);
    registerQtToJava("QDataStream", "qt/core/QDataStream");
    registerJavaToQt("qt/core/QDataStream", "QDataStream");
    registerDestructor("qt/core/QDataStream", destructor_qt_core_QDataStream);
    registerQtToJava("QDate", "qt/core/QDate");
    registerJavaToQt("qt/core/QDate", "QDate");
    registerQtToJava("QDateTime", "qt/core/QDateTime");
    registerJavaToQt("qt/core/QDateTime", "QDateTime");
    registerQtToJava("QDir", "qt/core/QDir");
    registerJavaToQt("qt/core/QDir", "QDir");
    qRegisterMetaType<QDir>("QDir");
    registerQtToJava("QDirIterator", "qt/core/QDirIterator");
    registerJavaToQt("qt/core/QDirIterator", "QDirIterator");
    registerDestructor("qt/core/QDirIterator", destructor_qt_core_QDirIterator);
    registerQtToJava("QDynamicPropertyChangeEvent", "qt/core/QDynamicPropertyChangeEvent");
    registerJavaToQt("qt/core/QDynamicPropertyChangeEvent", "QDynamicPropertyChangeEvent");
    registerDestructor("qt/core/QDynamicPropertyChangeEvent", destructor_qt_core_QDynamicPropertyChangeEvent);
    registerQtToJava("QEvent", "qt/core/QEvent");
    registerJavaToQt("qt/core/QEvent", "QEvent");
    registerDestructor("qt/core/QEvent", destructor_qt_core_QEvent);
    registerQtToJava("QEventLoop", "qt/core/QEventLoop");
    registerJavaToQt("qt/core/QEventLoop", "QEventLoop");
    registerQtToJava("QFSFileEngine", "qt/core/QFSFileEngine");
    registerJavaToQt("qt/core/QFSFileEngine", "QFSFileEngine");
    registerDestructor("qt/core/QFSFileEngine", destructor_qt_core_QFSFileEngine);
    registerQtToJava("QFile", "qt/core/QFile");
    registerJavaToQt("qt/core/QFile", "QFile");
    registerQtToJava("QFileInfo", "qt/core/QFileInfo");
    registerJavaToQt("qt/core/QFileInfo", "QFileInfo");
    qRegisterMetaType<QFileInfo>("QFileInfo");
    registerQtToJava("QFileSystemWatcher", "qt/core/QFileSystemWatcher");
    registerJavaToQt("qt/core/QFileSystemWatcher", "QFileSystemWatcher");
    registerQtToJava("QFutureWatcherBase", "qt/core/QFutureWatcherBase");
    registerJavaToQt("qt/core/QFutureWatcherBase", "QFutureWatcherBase");
    registerQtToJava("QIODevice", "qt/core/QIODevice_ConcreteWrapper");
    registerJavaToQt("qt/core/QIODevice_ConcreteWrapper", "QIODevice");
    registerQtToJava("QLibraryInfo", "qt/core/QLibraryInfo");
    registerJavaToQt("qt/core/QLibraryInfo", "QLibraryInfo");
    registerDestructor("qt/core/QLibraryInfo", destructor_qt_core_QLibraryInfo);
    registerQtToJava("QLocale", "qt/core/QLocale");
    registerJavaToQt("qt/core/QLocale", "QLocale");
    registerQtToJava("QMetaType", "qt/core/QMetaType");
    registerJavaToQt("qt/core/QMetaType", "QMetaType");
    registerQtToJava("QMimeData", "qt/core/QMimeData");
    registerJavaToQt("qt/core/QMimeData", "QMimeData");
    registerQtToJava("QMutex", "qt/core/QMutex");
    registerJavaToQt("qt/core/QMutex", "QMutex");
    registerDestructor("qt/core/QMutex", destructor_qt_core_QMutex);
    registerQtToJava("QObject", "qt/core/QObject");
    registerJavaToQt("qt/core/QObject", "QObject");
    registerQtToJava("QPersistentModelIndex", "qt/core/QPersistentModelIndex");
    registerJavaToQt("qt/core/QPersistentModelIndex", "QPersistentModelIndex");
    qRegisterMetaType<QPersistentModelIndex>("QPersistentModelIndex");
    registerQtToJava("QProcess", "qt/core/QProcess");
    registerJavaToQt("qt/core/QProcess", "QProcess");
    registerQtToJava("QReadWriteLock", "qt/core/QReadWriteLock");
    registerJavaToQt("qt/core/QReadWriteLock", "QReadWriteLock");
    registerDestructor("qt/core/QReadWriteLock", destructor_qt_core_QReadWriteLock);
    registerQtToJava("QRegExp", "qt/core/QRegExp");
    registerJavaToQt("qt/core/QRegExp", "QRegExp");
    registerQtToJava("QRunnable", "qt/core/QRunnable_ConcreteWrapper");
    registerJavaToQt("qt/core/QRunnable_ConcreteWrapper", "QRunnable");
    registerDestructor("qt/core/QRunnable_ConcreteWrapper", destructor_qt_core_QRunnable_ConcreteWrapper);
    registerQtToJava("QSemaphore", "qt/core/QSemaphore");
    registerJavaToQt("qt/core/QSemaphore", "QSemaphore");
    registerDestructor("qt/core/QSemaphore", destructor_qt_core_QSemaphore);
    registerQtToJava("QSettings", "qt/core/QSettings");
    registerJavaToQt("qt/core/QSettings", "QSettings");
    registerQtToJava("QSignalMapper", "qt/core/QSignalMapper");
    registerJavaToQt("qt/core/QSignalMapper", "QSignalMapper");
    registerQtToJava("QSocketNotifier", "qt/core/QSocketNotifier");
    registerJavaToQt("qt/core/QSocketNotifier", "QSocketNotifier");
    registerQtToJava("QStringMatcher", "qt/core/QStringMatcher");
    registerJavaToQt("qt/core/QStringMatcher", "QStringMatcher");
    qRegisterMetaType<QStringMatcher>("QStringMatcher");
    registerQtToJava("QSystemLocale", "qt/core/QSystemLocale");
    registerJavaToQt("qt/core/QSystemLocale", "QSystemLocale");
    registerDestructor("qt/core/QSystemLocale", destructor_qt_core_QSystemLocale);
    registerQtToJava("QSystemSemaphore", "qt/core/QSystemSemaphore");
    registerJavaToQt("qt/core/QSystemSemaphore", "QSystemSemaphore");
    registerDestructor("qt/core/QSystemSemaphore", destructor_qt_core_QSystemSemaphore);
    registerQtToJava("QTemporaryFile", "qt/core/QTemporaryFile");
    registerJavaToQt("qt/core/QTemporaryFile", "QTemporaryFile");
    registerQtToJava("QTextBoundaryFinder", "qt/core/QTextBoundaryFinder");
    registerJavaToQt("qt/core/QTextBoundaryFinder", "QTextBoundaryFinder");
    qRegisterMetaType<QTextBoundaryFinder>("QTextBoundaryFinder");
    registerQtToJava("QTextCodec", "qt/core/QTextCodec_ConcreteWrapper");
    registerJavaToQt("qt/core/QTextCodec_ConcreteWrapper", "QTextCodec");
    registerQtToJava("QTextCodec::ConverterState", "qt/core/QTextCodec_ConverterState");
    registerJavaToQt("qt/core/QTextCodec_ConverterState", "QTextCodec::ConverterState");
    registerDestructor("qt/core/QTextCodec_ConverterState", destructor_qt_core_QTextCodec_ConverterState);
    registerQtToJava("QTextDecoder", "qt/core/QTextDecoder");
    registerJavaToQt("qt/core/QTextDecoder", "QTextDecoder");
    registerDestructor("qt/core/QTextDecoder", destructor_qt_core_QTextDecoder);
    registerQtToJava("QTextEncoder", "qt/core/QTextEncoder");
    registerJavaToQt("qt/core/QTextEncoder", "QTextEncoder");
    registerDestructor("qt/core/QTextEncoder", destructor_qt_core_QTextEncoder);
    registerQtToJava("QTextStream", "qt/core/QTextStream");
    registerJavaToQt("qt/core/QTextStream", "QTextStream");
    registerDestructor("qt/core/QTextStream", destructor_qt_core_QTextStream);
    registerQtToJava("QThreadPool", "qt/core/QThreadPool");
    registerJavaToQt("qt/core/QThreadPool", "QThreadPool");
    registerQtToJava("QTime", "qt/core/QTime");
    registerJavaToQt("qt/core/QTime", "QTime");
    registerQtToJava("QTimeLine", "qt/core/QTimeLine");
    registerJavaToQt("qt/core/QTimeLine", "QTimeLine");
    registerQtToJava("QTimer", "qt/core/QTimer");
    registerJavaToQt("qt/core/QTimer", "QTimer");
    registerQtToJava("QTimerEvent", "qt/core/QTimerEvent");
    registerJavaToQt("qt/core/QTimerEvent", "QTimerEvent");
    registerDestructor("qt/core/QTimerEvent", destructor_qt_core_QTimerEvent);
    registerQtToJava("QTranslator", "qt/core/QTranslator");
    registerJavaToQt("qt/core/QTranslator", "QTranslator");
    registerQtToJava("QUrl", "qt/core/QUrl");
    registerJavaToQt("qt/core/QUrl", "QUrl");
    registerQtToJava("QUuid", "qt/core/QUuid");
    registerJavaToQt("qt/core/QUuid", "QUuid");
    qRegisterMetaType<QUuid>("QUuid");
    registerQtToJava("QVariant", "qt/core/QVariant");
    registerJavaToQt("qt/core/QVariant", "QVariant");
    registerQtToJava("QWaitCondition", "qt/core/QWaitCondition");
    registerJavaToQt("qt/core/QWaitCondition", "QWaitCondition");
    registerDestructor("qt/core/QWaitCondition", destructor_qt_core_QWaitCondition);
    registerQtToJava("QXmlStreamEntityResolver", "qt/core/QXmlStreamEntityResolver");
    registerJavaToQt("qt/core/QXmlStreamEntityResolver", "QXmlStreamEntityResolver");
    registerDestructor("qt/core/QXmlStreamEntityResolver", destructor_qt_core_QXmlStreamEntityResolver);
    registerQtToJava("Qt", "qt/core/Qt");
    registerJavaToQt("qt/core/Qt", "Qt");
    registerQtToJava("QtConcurrent", "qt/core/QtConcurrent");
    registerJavaToQt("qt/core/QtConcurrent", "QtConcurrent");
    qtjambi_register_polymorphic_id("Lqt_core_QEvent_2",polymorphichandler_Lqt_core_QEvent_2);
}

