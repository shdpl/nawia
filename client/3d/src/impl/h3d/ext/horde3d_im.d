/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.4
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

module horde3d_im;

static import std.conv;

static import std.conv;
static import std.string;


private {
  version(linux) {
    version = Nix;
  } else version(darwin) {
    version = Nix;
  } else version(OSX) {
    version = Nix;
  } else version(FreeBSD) {
    version = Nix;
    version = freebsd;
  } else version(freebsd) {
    version = Nix;
  } else version(Unix) {
    version = Nix;
  } else version(Posix) {
    version = Nix;
  }

  version(Tango) {
    static import tango.stdc.string;
    static import tango.stdc.stringz;

    version (PhobosCompatibility) {
    } else {
      alias char[] string;
      alias wchar[] wstring;
      alias dchar[] dstring;
    }
  } else {
    version(D_Version2) {
      static import std.conv;
    }
    static import std.string;
    static import std.c.string;
  }

  version(D_Version2) {
    mixin("alias const(char)* CCPTR;");
  } else {
    alias char* CCPTR;
  }

  CCPTR swigToCString(string str) {
    version(Tango) {
      return tango.stdc.stringz.toStringz(str);
    } else {
      return std.string.toStringz(str);
    }
  }

  string swigToDString(CCPTR cstr) {
    version(Tango) {
      return tango.stdc.stringz.fromStringz(cstr);
    } else {
      version(D_Version2) {
        mixin("return std.conv.to!string(cstr);");
      } else {
        return std.c.string.toString(cstr);
      }
    }
  }
}

class SwigSwigSharedLibLoadException : Exception {
  this(in string[] libNames, in string[] reasons) {
    string msg = "Failed to load one or more shared libraries:";
    foreach(i, n; libNames) {
      msg ~= "\n\t" ~ n ~ " - ";
      if(i < reasons.length)
        msg ~= reasons[i];
      else
        msg ~= "Unknown";
    }
    super(msg);
  }
}

class SwigSymbolLoadException : Exception {
  this(string SwigSharedLibName, string symbolName) {
    super("Failed to load symbol " ~ symbolName ~ " from shared library " ~ SwigSharedLibName);
    _symbolName = symbolName;
  }

  string symbolName() {
    return _symbolName;
  }

private:
  string _symbolName;
}

private {
  version(Nix) {
    version(freebsd) {
      // the dl* functions are in libc on FreeBSD
    }
    else {
      pragma(lib, "dl");
    }

    version(Tango) {
      import tango.sys.Common;
    } else version(linux) {
      import std.c.linux.linux;
    } else {
      extern(C) {
        const RTLD_NOW = 2;

        void *dlopen(CCPTR file, int mode);
        int dlclose(void* handle);
        void *dlsym(void* handle, CCPTR name);
        CCPTR dlerror();
      }
    }

    alias void* SwigSharedLibHandle;

    SwigSharedLibHandle swigLoadSharedLib(string libName) {
      return dlopen(swigToCString(libName), RTLD_NOW);
    }

    void swigUnloadSharedLib(SwigSharedLibHandle hlib) {
      dlclose(hlib);
    }

    void* swigGetSymbol(SwigSharedLibHandle hlib, string symbolName) {
      return dlsym(hlib, swigToCString(symbolName));
    }

    string swigGetErrorStr() {
      CCPTR err = dlerror();
      if (err is null) {
        return "Unknown Error";
      }
      return swigToDString(err);
    }
  } else version(Windows) {
    alias ushort WORD;
    alias uint DWORD;
    alias CCPTR LPCSTR;
    alias void* HMODULE;
    alias void* HLOCAL;
    alias int function() FARPROC;
    struct VA_LIST {}

    extern (Windows) {
      HMODULE LoadLibraryA(LPCSTR);
      FARPROC GetProcAddress(HMODULE, LPCSTR);
      void FreeLibrary(HMODULE);
      DWORD GetLastError();
      DWORD FormatMessageA(DWORD, in void*, DWORD, DWORD, LPCSTR, DWORD, VA_LIST*);
      HLOCAL LocalFree(HLOCAL);
    }

    DWORD MAKELANGID(WORD p, WORD s) {
      return (((cast(WORD)s) << 10) | cast(WORD)p);
    }

    enum {
      LANG_NEUTRAL                    = 0,
      SUBLANG_DEFAULT                 = 1,
      FORMAT_MESSAGE_ALLOCATE_BUFFER  = 256,
      FORMAT_MESSAGE_IGNORE_INSERTS   = 512,
      FORMAT_MESSAGE_FROM_SYSTEM      = 4096
    }

    alias HMODULE SwigSharedLibHandle;

    SwigSharedLibHandle swigLoadSharedLib(string libName) {
      return LoadLibraryA(swigToCString(libName));
    }

    void swigUnloadSharedLib(SwigSharedLibHandle hlib) {
      FreeLibrary(hlib);
    }

    void* swigGetSymbol(SwigSharedLibHandle hlib, string symbolName) {
      return GetProcAddress(hlib, swigToCString(symbolName));
    }

    string swigGetErrorStr() {
      DWORD errcode = GetLastError();

      LPCSTR msgBuf;
      DWORD i = FormatMessageA(
        FORMAT_MESSAGE_ALLOCATE_BUFFER |
        FORMAT_MESSAGE_FROM_SYSTEM |
        FORMAT_MESSAGE_IGNORE_INSERTS,
        null,
        errcode,
        MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
        cast(LPCSTR)&msgBuf,
        0,
        null);

      string text = swigToDString(msgBuf);
      LocalFree(cast(HLOCAL)msgBuf);

      if (i >= 2) {
        i -= 2;
      }
      return text[0 .. i];
    }
  } else {
    static assert(0, "Operating system not supported by the wrapper loading code.");
  }

  final class SwigSharedLib {
    void load(string[] names) {
      if (_hlib !is null) return;

      string[] failedLibs;
      string[] reasons;

      foreach(n; names) {
        _hlib = swigLoadSharedLib(n);
        if (_hlib is null) {
          failedLibs ~= n;
          reasons ~= swigGetErrorStr();
          continue;
        }
        _name = n;
        break;
      }

      if (_hlib is null) {
        throw new SwigSwigSharedLibLoadException(failedLibs, reasons);
      }
    }

    void* loadSymbol(string symbolName, bool doThrow = true) {
      void* sym = swigGetSymbol(_hlib, symbolName);
      if(doThrow && (sym is null)) {
        throw new SwigSymbolLoadException(_name, symbolName);
      }
      return sym;
    }

    void unload() {
      if(_hlib !is null) {
        swigUnloadSharedLib(_hlib);
        _hlib = null;
      }
    }

  private:
    string _name;
    SwigSharedLibHandle _hlib;
  }
}

static this() {
  string[] possibleFileNames;
  version (Posix) {
    version (OSX) {
      possibleFileNames ~= ["libhorde3d_wrap.dylib", "libhorde3d_wrap.bundle"];
    }
    possibleFileNames ~= ["libhorde3d_wrap.so"];
  } else version (Windows) {
    possibleFileNames ~= ["horde3d_wrap.dll", "libhorde3d_wrap.so"];
  } else {
    static assert(false, "Operating system not supported by the wrapper loading code.");
  }

  auto library = new SwigSharedLib;
  library.load(possibleFileNames);

  string bindCode(string functionPointer, string symbol) {
    return functionPointer ~ " = cast(typeof(" ~ functionPointer ~
      "))library.loadSymbol(`" ~ symbol ~ "`);";
  }

  //#if !defined(SWIG_D_NO_EXCEPTION_HELPER)
  mixin(bindCode("swigRegisterExceptionCallbacks_horde3d", "SWIGRegisterExceptionCallbacks_horde3d"));
  //#endif // SWIG_D_NO_EXCEPTION_HELPER
  //#if !defined(SWIG_D_NO_STRING_HELPER)
  mixin(bindCode("swigRegisterStringCallback_horde3d", "SWIGRegisterStringCallback_horde3d"));
  //#endif // SWIG_D_NO_STRING_HELPER
  
  mixin(bindCode("H3DRootNode_get", "D_H3DRootNode_get"));
  mixin(bindCode("new_H3DOptions", "D_new_H3DOptions"));
  mixin(bindCode("delete_H3DOptions", "D_delete_H3DOptions"));
  mixin(bindCode("new_H3DStats", "D_new_H3DStats"));
  mixin(bindCode("delete_H3DStats", "D_delete_H3DStats"));
  mixin(bindCode("new_H3DResTypes", "D_new_H3DResTypes"));
  mixin(bindCode("delete_H3DResTypes", "D_delete_H3DResTypes"));
  mixin(bindCode("new_H3DResFlags", "D_new_H3DResFlags"));
  mixin(bindCode("delete_H3DResFlags", "D_delete_H3DResFlags"));
  mixin(bindCode("new_H3DFormats", "D_new_H3DFormats"));
  mixin(bindCode("delete_H3DFormats", "D_delete_H3DFormats"));
  mixin(bindCode("new_H3DGeoRes", "D_new_H3DGeoRes"));
  mixin(bindCode("delete_H3DGeoRes", "D_delete_H3DGeoRes"));
  mixin(bindCode("new_H3DAnimRes", "D_new_H3DAnimRes"));
  mixin(bindCode("delete_H3DAnimRes", "D_delete_H3DAnimRes"));
  mixin(bindCode("new_H3DMatRes", "D_new_H3DMatRes"));
  mixin(bindCode("delete_H3DMatRes", "D_delete_H3DMatRes"));
  mixin(bindCode("new_H3DShaderRes", "D_new_H3DShaderRes"));
  mixin(bindCode("delete_H3DShaderRes", "D_delete_H3DShaderRes"));
  mixin(bindCode("new_H3DTexRes", "D_new_H3DTexRes"));
  mixin(bindCode("delete_H3DTexRes", "D_delete_H3DTexRes"));
  mixin(bindCode("new_H3DPartEffRes", "D_new_H3DPartEffRes"));
  mixin(bindCode("delete_H3DPartEffRes", "D_delete_H3DPartEffRes"));
  mixin(bindCode("new_H3DPipeRes", "D_new_H3DPipeRes"));
  mixin(bindCode("delete_H3DPipeRes", "D_delete_H3DPipeRes"));
  mixin(bindCode("new_H3DNodeTypes", "D_new_H3DNodeTypes"));
  mixin(bindCode("delete_H3DNodeTypes", "D_delete_H3DNodeTypes"));
  mixin(bindCode("new_H3DNodeFlags", "D_new_H3DNodeFlags"));
  mixin(bindCode("delete_H3DNodeFlags", "D_delete_H3DNodeFlags"));
  mixin(bindCode("new_H3DNodeParams", "D_new_H3DNodeParams"));
  mixin(bindCode("delete_H3DNodeParams", "D_delete_H3DNodeParams"));
  mixin(bindCode("new_H3DModel", "D_new_H3DModel"));
  mixin(bindCode("delete_H3DModel", "D_delete_H3DModel"));
  mixin(bindCode("new_H3DMesh", "D_new_H3DMesh"));
  mixin(bindCode("delete_H3DMesh", "D_delete_H3DMesh"));
  mixin(bindCode("new_H3DJoint", "D_new_H3DJoint"));
  mixin(bindCode("delete_H3DJoint", "D_delete_H3DJoint"));
  mixin(bindCode("new_H3DLight", "D_new_H3DLight"));
  mixin(bindCode("delete_H3DLight", "D_delete_H3DLight"));
  mixin(bindCode("new_H3DCamera", "D_new_H3DCamera"));
  mixin(bindCode("delete_H3DCamera", "D_delete_H3DCamera"));
  mixin(bindCode("new_H3DEmitter", "D_new_H3DEmitter"));
  mixin(bindCode("delete_H3DEmitter", "D_delete_H3DEmitter"));
  mixin(bindCode("h3dGetVersionString", "D_h3dGetVersionString"));
  mixin(bindCode("h3dCheckExtension", "D_h3dCheckExtension"));
  mixin(bindCode("h3dGetError", "D_h3dGetError"));
  mixin(bindCode("h3dInit", "D_h3dInit"));
  mixin(bindCode("h3dRelease", "D_h3dRelease"));
  mixin(bindCode("h3dRender", "D_h3dRender"));
  mixin(bindCode("h3dFinalizeFrame", "D_h3dFinalizeFrame"));
  mixin(bindCode("h3dClear", "D_h3dClear"));
  mixin(bindCode("h3dGetMessage", "D_h3dGetMessage"));
  mixin(bindCode("h3dGetOption", "D_h3dGetOption"));
  mixin(bindCode("h3dSetOption", "D_h3dSetOption"));
  mixin(bindCode("h3dGetStat", "D_h3dGetStat"));
  mixin(bindCode("h3dShowOverlays", "D_h3dShowOverlays"));
  mixin(bindCode("h3dClearOverlays", "D_h3dClearOverlays"));
  mixin(bindCode("h3dGetResType", "D_h3dGetResType"));
  mixin(bindCode("h3dGetResName", "D_h3dGetResName"));
  mixin(bindCode("h3dGetNextResource", "D_h3dGetNextResource"));
  mixin(bindCode("h3dFindResource", "D_h3dFindResource"));
  mixin(bindCode("h3dAddResource", "D_h3dAddResource"));
  mixin(bindCode("h3dCloneResource", "D_h3dCloneResource"));
  mixin(bindCode("h3dRemoveResource", "D_h3dRemoveResource"));
  mixin(bindCode("h3dIsResLoaded", "D_h3dIsResLoaded"));
  mixin(bindCode("h3dLoadResource", "D_h3dLoadResource"));
  mixin(bindCode("h3dUnloadResource", "D_h3dUnloadResource"));
  mixin(bindCode("h3dGetResElemCount", "D_h3dGetResElemCount"));
  mixin(bindCode("h3dFindResElem", "D_h3dFindResElem"));
  mixin(bindCode("h3dGetResParamI", "D_h3dGetResParamI"));
  mixin(bindCode("h3dSetResParamI", "D_h3dSetResParamI"));
  mixin(bindCode("h3dGetResParamF", "D_h3dGetResParamF"));
  mixin(bindCode("h3dSetResParamF", "D_h3dSetResParamF"));
  mixin(bindCode("h3dGetResParamStr", "D_h3dGetResParamStr"));
  mixin(bindCode("h3dSetResParamStr", "D_h3dSetResParamStr"));
  mixin(bindCode("h3dMapResStream", "D_h3dMapResStream"));
  mixin(bindCode("h3dUnmapResStream", "D_h3dUnmapResStream"));
  mixin(bindCode("h3dQueryUnloadedResource", "D_h3dQueryUnloadedResource"));
  mixin(bindCode("h3dReleaseUnusedResources", "D_h3dReleaseUnusedResources"));
  mixin(bindCode("h3dCreateTexture", "D_h3dCreateTexture"));
  mixin(bindCode("h3dSetShaderPreambles", "D_h3dSetShaderPreambles"));
  mixin(bindCode("h3dSetMaterialUniform", "D_h3dSetMaterialUniform"));
  mixin(bindCode("h3dResizePipelineBuffers", "D_h3dResizePipelineBuffers"));
  mixin(bindCode("h3dGetRenderTargetData", "D_h3dGetRenderTargetData"));
  mixin(bindCode("h3dGetNodeType", "D_h3dGetNodeType"));
  mixin(bindCode("h3dGetNodeParent", "D_h3dGetNodeParent"));
  mixin(bindCode("h3dSetNodeParent", "D_h3dSetNodeParent"));
  mixin(bindCode("h3dGetNodeChild", "D_h3dGetNodeChild"));
  mixin(bindCode("h3dAddNodes", "D_h3dAddNodes"));
  mixin(bindCode("h3dRemoveNode", "D_h3dRemoveNode"));
  mixin(bindCode("h3dCheckNodeTransFlag", "D_h3dCheckNodeTransFlag"));
  mixin(bindCode("h3dGetNodeTransform", "D_h3dGetNodeTransform"));
  mixin(bindCode("h3dSetNodeTransform", "D_h3dSetNodeTransform"));
  mixin(bindCode("h3dGetNodeTransMats", "D_h3dGetNodeTransMats"));
  mixin(bindCode("h3dSetNodeTransMat", "D_h3dSetNodeTransMat"));
  mixin(bindCode("h3dGetNodeParamI", "D_h3dGetNodeParamI"));
  mixin(bindCode("h3dSetNodeParamI", "D_h3dSetNodeParamI"));
  mixin(bindCode("h3dGetNodeParamF", "D_h3dGetNodeParamF"));
  mixin(bindCode("h3dSetNodeParamF", "D_h3dSetNodeParamF"));
  mixin(bindCode("h3dGetNodeParamStr", "D_h3dGetNodeParamStr"));
  mixin(bindCode("h3dSetNodeParamStr", "D_h3dSetNodeParamStr"));
  mixin(bindCode("h3dGetNodeFlags", "D_h3dGetNodeFlags"));
  mixin(bindCode("h3dSetNodeFlags", "D_h3dSetNodeFlags"));
  mixin(bindCode("h3dGetNodeAABB", "D_h3dGetNodeAABB"));
  mixin(bindCode("h3dFindNodes", "D_h3dFindNodes"));
  mixin(bindCode("h3dGetNodeFindResult", "D_h3dGetNodeFindResult"));
  mixin(bindCode("h3dCastRay", "D_h3dCastRay"));
  mixin(bindCode("h3dGetCastRayResult", "D_h3dGetCastRayResult"));
  mixin(bindCode("h3dCheckNodeVisibility", "D_h3dCheckNodeVisibility"));
  mixin(bindCode("h3dAddGroupNode", "D_h3dAddGroupNode"));
  mixin(bindCode("h3dAddModelNode", "D_h3dAddModelNode"));
  mixin(bindCode("h3dSetupModelAnimStage", "D_h3dSetupModelAnimStage"));
  mixin(bindCode("h3dSetModelAnimParams", "D_h3dSetModelAnimParams"));
  mixin(bindCode("h3dSetModelMorpher", "D_h3dSetModelMorpher"));
  mixin(bindCode("h3dAddMeshNode", "D_h3dAddMeshNode"));
  mixin(bindCode("h3dAddJointNode", "D_h3dAddJointNode"));
  mixin(bindCode("h3dAddLightNode", "D_h3dAddLightNode"));
  mixin(bindCode("h3dAddCameraNode", "D_h3dAddCameraNode"));
  mixin(bindCode("h3dSetupCameraView", "D_h3dSetupCameraView"));
  mixin(bindCode("h3dGetCameraProjMat", "D_h3dGetCameraProjMat"));
  mixin(bindCode("h3dAddEmitterNode", "D_h3dAddEmitterNode"));
  mixin(bindCode("h3dAdvanceEmitterTime", "D_h3dAdvanceEmitterTime"));
  mixin(bindCode("h3dHasEmitterFinished", "D_h3dHasEmitterFinished"));
}

//#if !defined(SWIG_D_NO_EXCEPTION_HELPER)
extern(C) void function(
  SwigExceptionCallback exceptionCallback,
  SwigExceptionCallback illegalArgumentCallback,
  SwigExceptionCallback illegalElementCallback,
  SwigExceptionCallback ioCallback,
  SwigExceptionCallback noSuchElementCallback) swigRegisterExceptionCallbacks_horde3d;
//#endif // SWIG_D_NO_EXCEPTION_HELPER

//#if !defined(SWIG_D_NO_STRING_HELPER)
extern(C) void function(SwigStringCallback callback) swigRegisterStringCallback_horde3d;
//#endif // SWIG_D_NO_STRING_HELPER


mixin template SwigOperatorDefinitions() {
  public override bool opEquals(Object o) {
    if (auto rhs = cast(typeof(this))o) {
      if (swigCPtr == rhs.swigCPtr) return true;
      static if (is(typeof(swigOpEquals(rhs)))) {
        return swigOpEquals(rhs);
      } else {
        return false; 
      }
    }
    return super.opEquals(o);
  }

  
  public override int opCmp(Object o) {
    static if (__traits(compiles, swigOpLt(typeof(this).init) &&
        swigOpEquals(typeof(this).init))) {
      if (auto rhs = cast(typeof(this))o) {
        if (swigOpLt(rhs)) {
          return -1;
        } else if (swigOpEquals(rhs)) {
          return 0;
        } else {
          return 1;
        }
      }
    }
    return super.opCmp(o);
  }

  private template swigOpBinary(string operator, string name) {
    enum swigOpBinary = `public void opOpAssign(string op, T)(T rhs) if (op == "` ~ operator ~
      `" && __traits(compiles, swigOp` ~ name ~ `Assign(rhs))) { swigOp` ~ name ~ `Assign(rhs);}` ~
      `public auto opBinary(string op, T)(T rhs) if (op == "` ~ operator ~
      `" && __traits(compiles, swigOp` ~ name ~ `(rhs))) { return swigOp` ~ name ~ `(rhs);}`;
  }
  mixin(swigOpBinary!("+", "Add"));
  mixin(swigOpBinary!("-", "Sub"));
  mixin(swigOpBinary!("*", "Mul"));
  mixin(swigOpBinary!("/", "Div"));
  mixin(swigOpBinary!("%", "Mod"));
  mixin(swigOpBinary!("&", "And"));
  mixin(swigOpBinary!("|", "Or"));
  mixin(swigOpBinary!("^", "Xor"));
  mixin(swigOpBinary!("<<", "Shl"));
  mixin(swigOpBinary!(">>", "Shr"));
  
  private template swigOpUnary(string operator, string name) {
    enum swigOpUnary = `public auto opUnary(string op)() if (op == "` ~ operator ~
      `" && __traits(compiles, swigOp` ~ name ~ `())) { return swigOp` ~ name ~ `();}`;   
  }
  mixin(swigOpUnary!("+", "Pos"));
  mixin(swigOpUnary!("-", "Neg"));
  mixin(swigOpUnary!("~", "Com"));
  mixin(swigOpUnary!("++", "Inc"));
  mixin(swigOpUnary!("--", "Dec"));


}


private class SwigExceptionHelper {
  static this() {
	// The D1/Tango version maps C++ exceptions to multiple exception types.
    swigRegisterExceptionCallbacks_horde3d(
      &setException,
      &setException,
      &setException,
      &setException,
      &setException
    );
  }

  static void setException(char* message) {
    auto exception = new object.Exception(std.conv.to!string(message).idup);
    exception.next = SwigPendingException.retrieve();
    SwigPendingException.set(exception);
  }
}

package struct SwigPendingException {
public:
  static this() {
    m_sPendingCount = 0;
    m_sPendingException = null;
  }

  static bool isPending() {
    bool pending = false;
    if (m_sPendingCount > 0) {
      if (m_sPendingException !is null) {
        pending = true;
      }
    }
    return pending;
  }

  static void set(object.Exception e) {
    if (m_sPendingException !is null) {
      throw new object.Exception("FATAL: An earlier pending exception from C/C++ code " ~
        "was missed and thus not thrown (" ~ m_sPendingException.classinfo.name ~
        ": " ~ m_sPendingException.msg ~ ")!", e);
    }

    m_sPendingException = e;
    synchronized {
      ++m_sPendingCount;
    }
  }

  static object.Exception retrieve() {
    object.Exception e = null;
    if (m_sPendingCount > 0) {
      if (m_sPendingException !is null) {
        e = m_sPendingException;
        m_sPendingException = null;
        synchronized {
          --m_sPendingCount;
        }
      }
    }
    return e;
  }

private:
  // The pending exception counter is stored thread-global.
  static shared int m_sPendingCount;

  // The reference to the pending exception (if any) is stored thread-local.
  static object.Exception m_sPendingException;
}
alias void function(const char* message) SwigExceptionCallback;


private class SwigStringHelper {
  static this() {
    swigRegisterStringCallback_horde3d(&createString);
  }

  static const(char)* createString(const(char*) cString) {
    // We are effectively dup'ing the string here.
    // TODO: Is this also correct for D2/Phobos?
    return std.string.toStringz(std.conv.to!string(cString));
  }
}
alias const(char)* function(const(char*) cString) SwigStringCallback;

extern(C) int function() H3DRootNode_get;
extern(C) void* function() new_H3DOptions;
extern(C) void function(void* jarg1) delete_H3DOptions;
extern(C) void* function() new_H3DStats;
extern(C) void function(void* jarg1) delete_H3DStats;
extern(C) void* function() new_H3DResTypes;
extern(C) void function(void* jarg1) delete_H3DResTypes;
extern(C) void* function() new_H3DResFlags;
extern(C) void function(void* jarg1) delete_H3DResFlags;
extern(C) void* function() new_H3DFormats;
extern(C) void function(void* jarg1) delete_H3DFormats;
extern(C) void* function() new_H3DGeoRes;
extern(C) void function(void* jarg1) delete_H3DGeoRes;
extern(C) void* function() new_H3DAnimRes;
extern(C) void function(void* jarg1) delete_H3DAnimRes;
extern(C) void* function() new_H3DMatRes;
extern(C) void function(void* jarg1) delete_H3DMatRes;
extern(C) void* function() new_H3DShaderRes;
extern(C) void function(void* jarg1) delete_H3DShaderRes;
extern(C) void* function() new_H3DTexRes;
extern(C) void function(void* jarg1) delete_H3DTexRes;
extern(C) void* function() new_H3DPartEffRes;
extern(C) void function(void* jarg1) delete_H3DPartEffRes;
extern(C) void* function() new_H3DPipeRes;
extern(C) void function(void* jarg1) delete_H3DPipeRes;
extern(C) void* function() new_H3DNodeTypes;
extern(C) void function(void* jarg1) delete_H3DNodeTypes;
extern(C) void* function() new_H3DNodeFlags;
extern(C) void function(void* jarg1) delete_H3DNodeFlags;
extern(C) void* function() new_H3DNodeParams;
extern(C) void function(void* jarg1) delete_H3DNodeParams;
extern(C) void* function() new_H3DModel;
extern(C) void function(void* jarg1) delete_H3DModel;
extern(C) void* function() new_H3DMesh;
extern(C) void function(void* jarg1) delete_H3DMesh;
extern(C) void* function() new_H3DJoint;
extern(C) void function(void* jarg1) delete_H3DJoint;
extern(C) void* function() new_H3DLight;
extern(C) void function(void* jarg1) delete_H3DLight;
extern(C) void* function() new_H3DCamera;
extern(C) void function(void* jarg1) delete_H3DCamera;
extern(C) void* function() new_H3DEmitter;
extern(C) void function(void* jarg1) delete_H3DEmitter;
extern(C) const(char)* function() h3dGetVersionString;
extern(C) uint function(const(char)* jarg1) h3dCheckExtension;
extern(C) uint function() h3dGetError;
extern(C) uint function() h3dInit;
extern(C) void function() h3dRelease;
extern(C) void function(int jarg1) h3dRender;
extern(C) void function() h3dFinalizeFrame;
extern(C) void function() h3dClear;
extern(C) const(char)* function(void* jarg1, void* jarg2) h3dGetMessage;
extern(C) float function(int jarg1) h3dGetOption;
extern(C) uint function(int jarg1, float jarg2) h3dSetOption;
extern(C) float function(int jarg1, uint jarg2) h3dGetStat;
extern(C) void function(void* jarg1, int jarg2, float jarg3, float jarg4, float jarg5, float jarg6, int jarg7, int jarg8) h3dShowOverlays;
extern(C) void function() h3dClearOverlays;
extern(C) int function(int jarg1) h3dGetResType;
extern(C) const(char)* function(int jarg1) h3dGetResName;
extern(C) int function(int jarg1, int jarg2) h3dGetNextResource;
extern(C) int function(int jarg1, const(char)* jarg2) h3dFindResource;
extern(C) int function(int jarg1, const(char)* jarg2, int jarg3) h3dAddResource;
extern(C) int function(int jarg1, const(char)* jarg2) h3dCloneResource;
extern(C) int function(int jarg1) h3dRemoveResource;
extern(C) uint function(int jarg1) h3dIsResLoaded;
extern(C) uint function(int jarg1, const(char)* jarg2, int jarg3) h3dLoadResource;
extern(C) void function(int jarg1) h3dUnloadResource;
extern(C) int function(int jarg1, int jarg2) h3dGetResElemCount;
extern(C) int function(int jarg1, int jarg2, int jarg3, const(char)* jarg4) h3dFindResElem;
extern(C) int function(int jarg1, int jarg2, int jarg3, int jarg4) h3dGetResParamI;
extern(C) void function(int jarg1, int jarg2, int jarg3, int jarg4, int jarg5) h3dSetResParamI;
extern(C) float function(int jarg1, int jarg2, int jarg3, int jarg4, int jarg5) h3dGetResParamF;
extern(C) void function(int jarg1, int jarg2, int jarg3, int jarg4, int jarg5, float jarg6) h3dSetResParamF;
extern(C) const(char)* function(int jarg1, int jarg2, int jarg3, int jarg4) h3dGetResParamStr;
extern(C) void function(int jarg1, int jarg2, int jarg3, int jarg4, const(char)* jarg5) h3dSetResParamStr;
extern(C) void* function(int jarg1, int jarg2, int jarg3, int jarg4, uint jarg5, uint jarg6) h3dMapResStream;
extern(C) void function(int jarg1) h3dUnmapResStream;
extern(C) int function(int jarg1) h3dQueryUnloadedResource;
extern(C) void function() h3dReleaseUnusedResources;
extern(C) int function(const(char)* jarg1, int jarg2, int jarg3, int jarg4, int jarg5) h3dCreateTexture;
extern(C) void function(const(char)* jarg1, const(char)* jarg2) h3dSetShaderPreambles;
extern(C) uint function(int jarg1, const(char)* jarg2, float jarg3, float jarg4, float jarg5, float jarg6) h3dSetMaterialUniform;
extern(C) void function(int jarg1, int jarg2, int jarg3) h3dResizePipelineBuffers;
extern(C) uint function(int jarg1, const(char)* jarg2, int jarg3, void* jarg4, void* jarg5, void* jarg6, void* jarg7, int jarg8) h3dGetRenderTargetData;
extern(C) int function(int jarg1) h3dGetNodeType;
extern(C) int function(int jarg1) h3dGetNodeParent;
extern(C) uint function(int jarg1, int jarg2) h3dSetNodeParent;
extern(C) int function(int jarg1, int jarg2) h3dGetNodeChild;
extern(C) int function(int jarg1, int jarg2) h3dAddNodes;
extern(C) void function(int jarg1) h3dRemoveNode;
extern(C) uint function(int jarg1, uint jarg2) h3dCheckNodeTransFlag;
extern(C) void function(int jarg1, void* jarg2, void* jarg3, void* jarg4, void* jarg5, void* jarg6, void* jarg7, void* jarg8, void* jarg9, void* jarg10) h3dGetNodeTransform;
extern(C) void function(int jarg1, float jarg2, float jarg3, float jarg4, float jarg5, float jarg6, float jarg7, float jarg8, float jarg9, float jarg10) h3dSetNodeTransform;
extern(C) void function(int jarg1, void* jarg2, void* jarg3) h3dGetNodeTransMats;
extern(C) void function(int jarg1, void* jarg2) h3dSetNodeTransMat;
extern(C) int function(int jarg1, int jarg2) h3dGetNodeParamI;
extern(C) void function(int jarg1, int jarg2, int jarg3) h3dSetNodeParamI;
extern(C) float function(int jarg1, int jarg2, int jarg3) h3dGetNodeParamF;
extern(C) void function(int jarg1, int jarg2, int jarg3, float jarg4) h3dSetNodeParamF;
extern(C) const(char)* function(int jarg1, int jarg2) h3dGetNodeParamStr;
extern(C) void function(int jarg1, int jarg2, const(char)* jarg3) h3dSetNodeParamStr;
extern(C) int function(int jarg1) h3dGetNodeFlags;
extern(C) void function(int jarg1, int jarg2, uint jarg3) h3dSetNodeFlags;
extern(C) void function(int jarg1, void* jarg2, void* jarg3, void* jarg4, void* jarg5, void* jarg6, void* jarg7) h3dGetNodeAABB;
extern(C) int function(int jarg1, const(char)* jarg2, int jarg3) h3dFindNodes;
extern(C) int function(int jarg1) h3dGetNodeFindResult;
extern(C) int function(int jarg1, float jarg2, float jarg3, float jarg4, float jarg5, float jarg6, float jarg7, int jarg8) h3dCastRay;
extern(C) uint function(int jarg1, void* jarg2, void* jarg3, void* jarg4) h3dGetCastRayResult;
extern(C) int function(int jarg1, int jarg2, uint jarg3, uint jarg4) h3dCheckNodeVisibility;
extern(C) int function(int jarg1, const(char)* jarg2) h3dAddGroupNode;
extern(C) int function(int jarg1, const(char)* jarg2, int jarg3) h3dAddModelNode;
extern(C) void function(int jarg1, int jarg2, int jarg3, int jarg4, const(char)* jarg5, uint jarg6) h3dSetupModelAnimStage;
extern(C) void function(int jarg1, int jarg2, float jarg3, float jarg4) h3dSetModelAnimParams;
extern(C) uint function(int jarg1, const(char)* jarg2, float jarg3) h3dSetModelMorpher;
extern(C) int function(int jarg1, const(char)* jarg2, int jarg3, int jarg4, int jarg5, int jarg6, int jarg7) h3dAddMeshNode;
extern(C) int function(int jarg1, const(char)* jarg2, int jarg3) h3dAddJointNode;
extern(C) int function(int jarg1, const(char)* jarg2, int jarg3, const(char)* jarg4, const(char)* jarg5) h3dAddLightNode;
extern(C) int function(int jarg1, const(char)* jarg2, int jarg3) h3dAddCameraNode;
extern(C) void function(int jarg1, float jarg2, float jarg3, float jarg4, float jarg5) h3dSetupCameraView;
extern(C) void function(int jarg1, void* jarg2) h3dGetCameraProjMat;
extern(C) int function(int jarg1, const(char)* jarg2, int jarg3, int jarg4, int jarg5, int jarg6) h3dAddEmitterNode;
extern(C) void function(int jarg1, float jarg2) h3dAdvanceEmitterTime;
extern(C) uint function(int jarg1) h3dHasEmitterFinished;
