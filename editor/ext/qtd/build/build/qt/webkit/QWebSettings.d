module qt.webkit.QWebSettings;

public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QIcon;
public import qt.gui.QPixmap;
public import qt.core.QUrl;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public final class QWebSettings : QtdObject
{
    public enum FontSize {
        MinimumFontSize = 0,
        MinimumLogicalFontSize = 1,
        DefaultFontSize = 2,
        DefaultFixedFontSize = 3
    }

    alias FontSize.MinimumFontSize MinimumFontSize;
    alias FontSize.MinimumLogicalFontSize MinimumLogicalFontSize;
    alias FontSize.DefaultFontSize DefaultFontSize;
    alias FontSize.DefaultFixedFontSize DefaultFixedFontSize;

    public enum WebGraphic {
        MissingImageGraphic = 0,
        MissingPluginGraphic = 1,
        DefaultFrameIconGraphic = 2,
        TextAreaSizeGripCornerGraphic = 3,
        DeleteButtonGraphic = 4
    }

    alias WebGraphic.MissingImageGraphic MissingImageGraphic;
    alias WebGraphic.MissingPluginGraphic MissingPluginGraphic;
    alias WebGraphic.DefaultFrameIconGraphic DefaultFrameIconGraphic;
    alias WebGraphic.TextAreaSizeGripCornerGraphic TextAreaSizeGripCornerGraphic;
    alias WebGraphic.DeleteButtonGraphic DeleteButtonGraphic;

    public enum FontFamily {
        StandardFont = 0,
        FixedFont = 1,
        SerifFont = 2,
        SansSerifFont = 3,
        CursiveFont = 4,
        FantasyFont = 5
    }

    alias FontFamily.StandardFont StandardFont;
    alias FontFamily.FixedFont FixedFont;
    alias FontFamily.SerifFont SerifFont;
    alias FontFamily.SansSerifFont SansSerifFont;
    alias FontFamily.CursiveFont CursiveFont;
    alias FontFamily.FantasyFont FantasyFont;

    public enum WebAttribute {
        AutoLoadImages = 0,
        JavascriptEnabled = 1,
        JavaEnabled = 2,
        PluginsEnabled = 3,
        PrivateBrowsingEnabled = 4,
        JavascriptCanOpenWindows = 5,
        JavascriptCanAccessClipboard = 6,
        DeveloperExtrasEnabled = 7,
        LinksIncludedInFocusChain = 8,
        ZoomTextOnly = 9,
        PrintElementBackgrounds = 10,
        OfflineStorageDatabaseEnabled = 11,
        OfflineWebApplicationCacheEnabled = 12,
        LocalStorageEnabled = 13,
        LocalStorageDatabaseEnabled = 13,
        LocalContentCanAccessRemoteUrls = 14,
        DnsPrefetchEnabled = 15,
        XSSAuditingEnabled = 16,
        AcceleratedCompositingEnabled = 17,
        SpatialNavigationEnabled = 18,
        LocalContentCanAccessFileUrls = 19,
        TiledBackingStoreEnabled = 20,
        FrameFlatteningEnabled = 21,
        SiteSpecificQuirksEnabled = 22
    }

    alias WebAttribute.AutoLoadImages AutoLoadImages;
    alias WebAttribute.JavascriptEnabled JavascriptEnabled;
    alias WebAttribute.JavaEnabled JavaEnabled;
    alias WebAttribute.PluginsEnabled PluginsEnabled;
    alias WebAttribute.PrivateBrowsingEnabled PrivateBrowsingEnabled;
    alias WebAttribute.JavascriptCanOpenWindows JavascriptCanOpenWindows;
    alias WebAttribute.JavascriptCanAccessClipboard JavascriptCanAccessClipboard;
    alias WebAttribute.DeveloperExtrasEnabled DeveloperExtrasEnabled;
    alias WebAttribute.LinksIncludedInFocusChain LinksIncludedInFocusChain;
    alias WebAttribute.ZoomTextOnly ZoomTextOnly;
    alias WebAttribute.PrintElementBackgrounds PrintElementBackgrounds;
    alias WebAttribute.OfflineStorageDatabaseEnabled OfflineStorageDatabaseEnabled;
    alias WebAttribute.OfflineWebApplicationCacheEnabled OfflineWebApplicationCacheEnabled;
    alias WebAttribute.LocalStorageEnabled LocalStorageEnabled;
    alias WebAttribute.LocalStorageDatabaseEnabled LocalStorageDatabaseEnabled;
    alias WebAttribute.LocalContentCanAccessRemoteUrls LocalContentCanAccessRemoteUrls;
    alias WebAttribute.DnsPrefetchEnabled DnsPrefetchEnabled;
    alias WebAttribute.XSSAuditingEnabled XSSAuditingEnabled;
    alias WebAttribute.AcceleratedCompositingEnabled AcceleratedCompositingEnabled;
    alias WebAttribute.SpatialNavigationEnabled SpatialNavigationEnabled;
    alias WebAttribute.LocalContentCanAccessFileUrls LocalContentCanAccessFileUrls;
    alias WebAttribute.TiledBackingStoreEnabled TiledBackingStoreEnabled;
    alias WebAttribute.FrameFlatteningEnabled FrameFlatteningEnabled;
    alias WebAttribute.SiteSpecificQuirksEnabled SiteSpecificQuirksEnabled;


// Functions

    public final string defaultTextEncoding() const {
        string res;
        qtd_QWebSettings_defaultTextEncoding_const(qtdNativeId, &res);
        return res;
    }

    public final string fontFamily(QWebSettings.FontFamily which) const {
        string res;
        qtd_QWebSettings_fontFamily_FontFamily_const(qtdNativeId, &res, which);
        return res;
    }

    public final int fontSize(QWebSettings.FontSize type) const {
        return qtd_QWebSettings_fontSize_FontSize_const(qtdNativeId, type);
    }

    public final string localStoragePath() const {
        string res;
        qtd_QWebSettings_localStoragePath_const(qtdNativeId, &res);
        return res;
    }

    public final void resetAttribute(QWebSettings.WebAttribute attr) {
        qtd_QWebSettings_resetAttribute_WebAttribute(qtdNativeId, attr);
    }

    public final void resetFontFamily(QWebSettings.FontFamily which) {
        qtd_QWebSettings_resetFontFamily_FontFamily(qtdNativeId, which);
    }

    public final void resetFontSize(QWebSettings.FontSize type) {
        qtd_QWebSettings_resetFontSize_FontSize(qtdNativeId, type);
    }

    public final void setAttribute(QWebSettings.WebAttribute attr, bool on) {
        qtd_QWebSettings_setAttribute_WebAttribute_bool(qtdNativeId, attr, on);
    }

    public final void setDefaultTextEncoding(string encoding) {
        qtd_QWebSettings_setDefaultTextEncoding_string(qtdNativeId, encoding);
    }

    public final void setFontFamily(QWebSettings.FontFamily which, string family) {
        qtd_QWebSettings_setFontFamily_FontFamily_string(qtdNativeId, which, family);
    }

    public final void setFontSize(QWebSettings.FontSize type, int size) {
        qtd_QWebSettings_setFontSize_FontSize_int(qtdNativeId, type, size);
    }

    public final void setLocalStoragePath(string path) {
        qtd_QWebSettings_setLocalStoragePath_string(qtdNativeId, path);
    }

    public final void setUserStyleSheetUrl(const(QUrl) location) {
        qtd_QWebSettings_setUserStyleSheetUrl_QUrl(qtdNativeId, location is null ? null : (cast(QUrl)location).qtdNativeId);
    }

    public final bool testAttribute(QWebSettings.WebAttribute attr) const {
        return qtd_QWebSettings_testAttribute_WebAttribute_const(qtdNativeId, attr);
    }

    public final QUrl userStyleSheetUrl() const {
        void* ret = qtd_QWebSettings_userStyleSheetUrl_const(qtdNativeId);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }

    public static void clearIconDatabase() {
        qtd_QWebSettings_clearIconDatabase();
    }

    public static void clearMemoryCaches() {
        qtd_QWebSettings_clearMemoryCaches();
    }

    public static void enablePersistentStorage(string path = "") {
        qtd_QWebSettings_enablePersistentStorage_string(path);
    }

    public static QWebSettings globalSettings() {
        void* ret = qtd_QWebSettings_globalSettings();
        QWebSettings __d_return_value = qtd_QWebSettings_from_ptr(ret);

        return __d_return_value;
    }

    public static string iconDatabasePath() {
        string res;
        qtd_QWebSettings_iconDatabasePath(&res);
        return res;
    }

    public static QIcon iconForUrl(const(QUrl) url) {
        void* ret = qtd_QWebSettings_iconForUrl_QUrl(url is null ? null : (cast(QUrl)url).qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public static int maximumPagesInCache() {
        return qtd_QWebSettings_maximumPagesInCache();
    }

    public static long offlineStorageDefaultQuota() {
        return qtd_QWebSettings_offlineStorageDefaultQuota();
    }

    public static string offlineStoragePath() {
        string res;
        qtd_QWebSettings_offlineStoragePath(&res);
        return res;
    }

    public static string offlineWebApplicationCachePath() {
        string res;
        qtd_QWebSettings_offlineWebApplicationCachePath(&res);
        return res;
    }

    public static long offlineWebApplicationCacheQuota() {
        return qtd_QWebSettings_offlineWebApplicationCacheQuota();
    }

    public static void setIconDatabasePath(string location) {
        qtd_QWebSettings_setIconDatabasePath_string(location);
    }

    public static void setMaximumPagesInCache(int pages) {
        qtd_QWebSettings_setMaximumPagesInCache_int(pages);
    }

    public static void setObjectCacheCapacities(int cacheMinDeadCapacity, int cacheMaxDead, int totalCapacity) {
        qtd_QWebSettings_setObjectCacheCapacities_int_int_int(cacheMinDeadCapacity, cacheMaxDead, totalCapacity);
    }

    public static void setOfflineStorageDefaultQuota(long maximumSize) {
        qtd_QWebSettings_setOfflineStorageDefaultQuota_long(maximumSize);
    }

    public static void setOfflineStoragePath(string path) {
        qtd_QWebSettings_setOfflineStoragePath_string(path);
    }

    public static void setOfflineWebApplicationCachePath(string path) {
        qtd_QWebSettings_setOfflineWebApplicationCachePath_string(path);
    }

    public static void setOfflineWebApplicationCacheQuota(long maximumSize) {
        qtd_QWebSettings_setOfflineWebApplicationCacheQuota_long(maximumSize);
    }

    public static void setWebGraphic(QWebSettings.WebGraphic type, const(QPixmap) graphic) {
        qtd_QWebSettings_setWebGraphic_WebGraphic_QPixmap(type, graphic is null ? null : (cast(QPixmap)graphic).qtdNativeId);
    }

    public static QPixmap webGraphic(QWebSettings.WebGraphic type) {
        void* ret = qtd_QWebSettings_webGraphic_WebGraphic(type);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }
// Field accessors
    static QWebSettings __getObject(void* nativeId) {
        return qtd_QWebSettings_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QWebSettings;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QWebSettings qtd_QWebSettings_from_ptr(void* ret) {
    auto return_value = new QWebSettings(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void  qtd_QWebSettings_defaultTextEncoding_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QWebSettings_fontFamily_FontFamily_const(void* __this_nativeId,
 void* __d_return_value,
 int which0);
private extern(C) int  qtd_QWebSettings_fontSize_FontSize_const(void* __this_nativeId,
 int type0);
private extern(C) void  qtd_QWebSettings_localStoragePath_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QWebSettings_resetAttribute_WebAttribute(void* __this_nativeId,
 int attr0);
private extern(C) void  qtd_QWebSettings_resetFontFamily_FontFamily(void* __this_nativeId,
 int which0);
private extern(C) void  qtd_QWebSettings_resetFontSize_FontSize(void* __this_nativeId,
 int type0);
private extern(C) void  qtd_QWebSettings_setAttribute_WebAttribute_bool(void* __this_nativeId,
 int attr0,
 bool on1);
private extern(C) void  qtd_QWebSettings_setDefaultTextEncoding_string(void* __this_nativeId,
 string encoding0);
private extern(C) void  qtd_QWebSettings_setFontFamily_FontFamily_string(void* __this_nativeId,
 int which0,
 string family1);
private extern(C) void  qtd_QWebSettings_setFontSize_FontSize_int(void* __this_nativeId,
 int type0,
 int size1);
private extern(C) void  qtd_QWebSettings_setLocalStoragePath_string(void* __this_nativeId,
 string path0);
private extern(C) void  qtd_QWebSettings_setUserStyleSheetUrl_QUrl(void* __this_nativeId,
 void* location0);
private extern(C) bool  qtd_QWebSettings_testAttribute_WebAttribute_const(void* __this_nativeId,
 int attr0);
private extern(C) void*  qtd_QWebSettings_userStyleSheetUrl_const(void* __this_nativeId);
private extern(C) void  qtd_QWebSettings_clearIconDatabase();
private extern(C) void  qtd_QWebSettings_clearMemoryCaches();
private extern(C) void  qtd_QWebSettings_enablePersistentStorage_string(string path0);
private extern(C) void*  qtd_QWebSettings_globalSettings();
private extern(C) void  qtd_QWebSettings_iconDatabasePath(void* __d_return_value);
private extern(C) void*  qtd_QWebSettings_iconForUrl_QUrl(void* url0);
private extern(C) int  qtd_QWebSettings_maximumPagesInCache();
private extern(C) long  qtd_QWebSettings_offlineStorageDefaultQuota();
private extern(C) void  qtd_QWebSettings_offlineStoragePath(void* __d_return_value);
private extern(C) void  qtd_QWebSettings_offlineWebApplicationCachePath(void* __d_return_value);
private extern(C) long  qtd_QWebSettings_offlineWebApplicationCacheQuota();
private extern(C) void  qtd_QWebSettings_setIconDatabasePath_string(string location0);
private extern(C) void  qtd_QWebSettings_setMaximumPagesInCache_int(int pages0);
private extern(C) void  qtd_QWebSettings_setObjectCacheCapacities_int_int_int(int cacheMinDeadCapacity0,
 int cacheMaxDead1,
 int totalCapacity2);
private extern(C) void  qtd_QWebSettings_setOfflineStorageDefaultQuota_long(long maximumSize0);
private extern(C) void  qtd_QWebSettings_setOfflineStoragePath_string(string path0);
private extern(C) void  qtd_QWebSettings_setOfflineWebApplicationCachePath_string(string path0);
private extern(C) void  qtd_QWebSettings_setOfflineWebApplicationCacheQuota_long(long maximumSize0);
private extern(C) void  qtd_QWebSettings_setWebGraphic_WebGraphic_QPixmap(int type0,
 void* graphic1);
private extern(C) void*  qtd_QWebSettings_webGraphic_WebGraphic(int type0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

