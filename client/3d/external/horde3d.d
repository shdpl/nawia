/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.3
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

module horde3d;

static import horde3d_im;

static import std.conv;
static import std.string;


int H3DRootNode() @property {
  auto ret = horde3d_im.H3DRootNode_get();
  return ret;
}

class H3DOptions {
  private void* swigCPtr;
  protected bool swigCMemOwn;

  public this(void* cObject, bool ownCObject) {
    swigCPtr = cObject;
    swigCMemOwn = ownCObject;
  }

  public static void* swigGetCPtr(H3DOptions obj) {
    return (obj is null) ? null : obj.swigCPtr;
  }

  mixin horde3d_im.SwigOperatorDefinitions;

  ~this() {
    dispose();
  }

  public void dispose() {
    synchronized(this) {
      if (swigCPtr !is null) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          horde3d_im.delete_H3DOptions(cast(void*)swigCPtr);
        }
        swigCPtr = null;
      }
    }
  }

  enum List {
    MaxLogLevel = 1,
    MaxNumMessages,
    TrilinearFiltering,
    MaxAnisotropy,
    TexCompression,
    SRGBLinearization,
    LoadTextures,
    FastAnimation,
    ShadowMapSize,
    SampleCount,
    WireframeMode,
    DebugViewMode,
    DumpFailedShaders,
    GatherTimeStats
  }

  public this() {
    this(horde3d_im.new_H3DOptions(), true);
  }
}

class H3DStats {
  private void* swigCPtr;
  protected bool swigCMemOwn;

  public this(void* cObject, bool ownCObject) {
    swigCPtr = cObject;
    swigCMemOwn = ownCObject;
  }

  public static void* swigGetCPtr(H3DStats obj) {
    return (obj is null) ? null : obj.swigCPtr;
  }

  mixin horde3d_im.SwigOperatorDefinitions;

  ~this() {
    dispose();
  }

  public void dispose() {
    synchronized(this) {
      if (swigCPtr !is null) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          horde3d_im.delete_H3DStats(cast(void*)swigCPtr);
        }
        swigCPtr = null;
      }
    }
  }

  enum List {
    TriCount = 100,
    BatchCount,
    LightPassCount,
    FrameTime,
    AnimationTime,
    GeoUpdateTime,
    ParticleSimTime,
    FwdLightsGPUTime,
    DefLightsGPUTime,
    ShadowsGPUTime,
    ParticleGPUTime,
    TextureVMem,
    GeometryVMem
  }

  public this() {
    this(horde3d_im.new_H3DStats(), true);
  }
}

class H3DResTypes {
  private void* swigCPtr;
  protected bool swigCMemOwn;

  public this(void* cObject, bool ownCObject) {
    swigCPtr = cObject;
    swigCMemOwn = ownCObject;
  }

  public static void* swigGetCPtr(H3DResTypes obj) {
    return (obj is null) ? null : obj.swigCPtr;
  }

  mixin horde3d_im.SwigOperatorDefinitions;

  ~this() {
    dispose();
  }

  public void dispose() {
    synchronized(this) {
      if (swigCPtr !is null) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          horde3d_im.delete_H3DResTypes(cast(void*)swigCPtr);
        }
        swigCPtr = null;
      }
    }
  }

  enum List {
    Undefined = 0,
    SceneGraph,
    Geometry,
    Animation,
    Material,
    Code,
    Shader,
    Texture,
    ParticleEffect,
    Pipeline
  }

  public this() {
    this(horde3d_im.new_H3DResTypes(), true);
  }
}

class H3DResFlags {
  private void* swigCPtr;
  protected bool swigCMemOwn;

  public this(void* cObject, bool ownCObject) {
    swigCPtr = cObject;
    swigCMemOwn = ownCObject;
  }

  public static void* swigGetCPtr(H3DResFlags obj) {
    return (obj is null) ? null : obj.swigCPtr;
  }

  mixin horde3d_im.SwigOperatorDefinitions;

  ~this() {
    dispose();
  }

  public void dispose() {
    synchronized(this) {
      if (swigCPtr !is null) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          horde3d_im.delete_H3DResFlags(cast(void*)swigCPtr);
        }
        swigCPtr = null;
      }
    }
  }

  enum Flags {
    NoQuery = 1,
    NoTexCompression = 2,
    NoTexMipmaps = 4,
    TexCubemap = 8,
    TexDynamic = 16,
    TexRenderable = 32,
    TexSRGB = 64
  }

  public this() {
    this(horde3d_im.new_H3DResFlags(), true);
  }
}

class H3DFormats {
  private void* swigCPtr;
  protected bool swigCMemOwn;

  public this(void* cObject, bool ownCObject) {
    swigCPtr = cObject;
    swigCMemOwn = ownCObject;
  }

  public static void* swigGetCPtr(H3DFormats obj) {
    return (obj is null) ? null : obj.swigCPtr;
  }

  mixin horde3d_im.SwigOperatorDefinitions;

  ~this() {
    dispose();
  }

  public void dispose() {
    synchronized(this) {
      if (swigCPtr !is null) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          horde3d_im.delete_H3DFormats(cast(void*)swigCPtr);
        }
        swigCPtr = null;
      }
    }
  }

  enum List {
    Unknown = 0,
    TEX_BGRA8,
    TEX_DXT1,
    TEX_DXT3,
    TEX_DXT5,
    TEX_RGBA16F,
    TEX_RGBA32F
  }

  public this() {
    this(horde3d_im.new_H3DFormats(), true);
  }
}

class H3DGeoRes {
  private void* swigCPtr;
  protected bool swigCMemOwn;

  public this(void* cObject, bool ownCObject) {
    swigCPtr = cObject;
    swigCMemOwn = ownCObject;
  }

  public static void* swigGetCPtr(H3DGeoRes obj) {
    return (obj is null) ? null : obj.swigCPtr;
  }

  mixin horde3d_im.SwigOperatorDefinitions;

  ~this() {
    dispose();
  }

  public void dispose() {
    synchronized(this) {
      if (swigCPtr !is null) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          horde3d_im.delete_H3DGeoRes(cast(void*)swigCPtr);
        }
        swigCPtr = null;
      }
    }
  }

  enum List {
    GeometryElem = 200,
    GeoIndexCountI,
    GeoVertexCountI,
    GeoIndices16I,
    GeoIndexStream,
    GeoVertPosStream,
    GeoVertTanStream,
    GeoVertStaticStream
  }

  public this() {
    this(horde3d_im.new_H3DGeoRes(), true);
  }
}

class H3DAnimRes {
  private void* swigCPtr;
  protected bool swigCMemOwn;

  public this(void* cObject, bool ownCObject) {
    swigCPtr = cObject;
    swigCMemOwn = ownCObject;
  }

  public static void* swigGetCPtr(H3DAnimRes obj) {
    return (obj is null) ? null : obj.swigCPtr;
  }

  mixin horde3d_im.SwigOperatorDefinitions;

  ~this() {
    dispose();
  }

  public void dispose() {
    synchronized(this) {
      if (swigCPtr !is null) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          horde3d_im.delete_H3DAnimRes(cast(void*)swigCPtr);
        }
        swigCPtr = null;
      }
    }
  }

  enum List {
    EntityElem = 300,
    EntFrameCountI
  }

  public this() {
    this(horde3d_im.new_H3DAnimRes(), true);
  }
}

class H3DMatRes {
  private void* swigCPtr;
  protected bool swigCMemOwn;

  public this(void* cObject, bool ownCObject) {
    swigCPtr = cObject;
    swigCMemOwn = ownCObject;
  }

  public static void* swigGetCPtr(H3DMatRes obj) {
    return (obj is null) ? null : obj.swigCPtr;
  }

  mixin horde3d_im.SwigOperatorDefinitions;

  ~this() {
    dispose();
  }

  public void dispose() {
    synchronized(this) {
      if (swigCPtr !is null) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          horde3d_im.delete_H3DMatRes(cast(void*)swigCPtr);
        }
        swigCPtr = null;
      }
    }
  }

  enum List {
    MaterialElem = 400,
    SamplerElem,
    UniformElem,
    MatClassStr,
    MatLinkI,
    MatShaderI,
    SampNameStr,
    SampTexResI,
    UnifNameStr,
    UnifValueF4
  }

  public this() {
    this(horde3d_im.new_H3DMatRes(), true);
  }
}

class H3DShaderRes {
  private void* swigCPtr;
  protected bool swigCMemOwn;

  public this(void* cObject, bool ownCObject) {
    swigCPtr = cObject;
    swigCMemOwn = ownCObject;
  }

  public static void* swigGetCPtr(H3DShaderRes obj) {
    return (obj is null) ? null : obj.swigCPtr;
  }

  mixin horde3d_im.SwigOperatorDefinitions;

  ~this() {
    dispose();
  }

  public void dispose() {
    synchronized(this) {
      if (swigCPtr !is null) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          horde3d_im.delete_H3DShaderRes(cast(void*)swigCPtr);
        }
        swigCPtr = null;
      }
    }
  }

  enum List {
    ContextElem = 600,
    SamplerElem,
    UniformElem,
    ContNameStr,
    SampNameStr,
    UnifNameStr,
    UnifSizeI,
    UnifDefValueF4
  }

  public this() {
    this(horde3d_im.new_H3DShaderRes(), true);
  }
}

class H3DTexRes {
  private void* swigCPtr;
  protected bool swigCMemOwn;

  public this(void* cObject, bool ownCObject) {
    swigCPtr = cObject;
    swigCMemOwn = ownCObject;
  }

  public static void* swigGetCPtr(H3DTexRes obj) {
    return (obj is null) ? null : obj.swigCPtr;
  }

  mixin horde3d_im.SwigOperatorDefinitions;

  ~this() {
    dispose();
  }

  public void dispose() {
    synchronized(this) {
      if (swigCPtr !is null) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          horde3d_im.delete_H3DTexRes(cast(void*)swigCPtr);
        }
        swigCPtr = null;
      }
    }
  }

  enum List {
    TextureElem = 700,
    ImageElem,
    TexFormatI,
    TexSliceCountI,
    ImgWidthI,
    ImgHeightI,
    ImgPixelStream
  }

  public this() {
    this(horde3d_im.new_H3DTexRes(), true);
  }
}

class H3DPartEffRes {
  private void* swigCPtr;
  protected bool swigCMemOwn;

  public this(void* cObject, bool ownCObject) {
    swigCPtr = cObject;
    swigCMemOwn = ownCObject;
  }

  public static void* swigGetCPtr(H3DPartEffRes obj) {
    return (obj is null) ? null : obj.swigCPtr;
  }

  mixin horde3d_im.SwigOperatorDefinitions;

  ~this() {
    dispose();
  }

  public void dispose() {
    synchronized(this) {
      if (swigCPtr !is null) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          horde3d_im.delete_H3DPartEffRes(cast(void*)swigCPtr);
        }
        swigCPtr = null;
      }
    }
  }

  enum List {
    ParticleElem = 800,
    ChanMoveVelElem,
    ChanRotVelElem,
    ChanSizeElem,
    ChanColRElem,
    ChanColGElem,
    ChanColBElem,
    ChanColAElem,
    PartLifeMinF,
    PartLifeMaxF,
    ChanStartMinF,
    ChanStartMaxF,
    ChanEndRateF,
    ChanDragElem
  }

  public this() {
    this(horde3d_im.new_H3DPartEffRes(), true);
  }
}

class H3DPipeRes {
  private void* swigCPtr;
  protected bool swigCMemOwn;

  public this(void* cObject, bool ownCObject) {
    swigCPtr = cObject;
    swigCMemOwn = ownCObject;
  }

  public static void* swigGetCPtr(H3DPipeRes obj) {
    return (obj is null) ? null : obj.swigCPtr;
  }

  mixin horde3d_im.SwigOperatorDefinitions;

  ~this() {
    dispose();
  }

  public void dispose() {
    synchronized(this) {
      if (swigCPtr !is null) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          horde3d_im.delete_H3DPipeRes(cast(void*)swigCPtr);
        }
        swigCPtr = null;
      }
    }
  }

  enum List {
    StageElem = 900,
    StageNameStr,
    StageActivationI
  }

  public this() {
    this(horde3d_im.new_H3DPipeRes(), true);
  }
}

class H3DNodeTypes {
  private void* swigCPtr;
  protected bool swigCMemOwn;

  public this(void* cObject, bool ownCObject) {
    swigCPtr = cObject;
    swigCMemOwn = ownCObject;
  }

  public static void* swigGetCPtr(H3DNodeTypes obj) {
    return (obj is null) ? null : obj.swigCPtr;
  }

  mixin horde3d_im.SwigOperatorDefinitions;

  ~this() {
    dispose();
  }

  public void dispose() {
    synchronized(this) {
      if (swigCPtr !is null) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          horde3d_im.delete_H3DNodeTypes(cast(void*)swigCPtr);
        }
        swigCPtr = null;
      }
    }
  }

  enum List {
    Undefined = 0,
    Group,
    Model,
    Mesh,
    Joint,
    Light,
    Camera,
    Emitter
  }

  public this() {
    this(horde3d_im.new_H3DNodeTypes(), true);
  }
}

class H3DNodeFlags {
  private void* swigCPtr;
  protected bool swigCMemOwn;

  public this(void* cObject, bool ownCObject) {
    swigCPtr = cObject;
    swigCMemOwn = ownCObject;
  }

  public static void* swigGetCPtr(H3DNodeFlags obj) {
    return (obj is null) ? null : obj.swigCPtr;
  }

  mixin horde3d_im.SwigOperatorDefinitions;

  ~this() {
    dispose();
  }

  public void dispose() {
    synchronized(this) {
      if (swigCPtr !is null) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          horde3d_im.delete_H3DNodeFlags(cast(void*)swigCPtr);
        }
        swigCPtr = null;
      }
    }
  }

  enum List {
    NoDraw = 1,
    NoCastShadow = 2,
    NoRayQuery = 4,
    Inactive = 7
  }

  public this() {
    this(horde3d_im.new_H3DNodeFlags(), true);
  }
}

class H3DNodeParams {
  private void* swigCPtr;
  protected bool swigCMemOwn;

  public this(void* cObject, bool ownCObject) {
    swigCPtr = cObject;
    swigCMemOwn = ownCObject;
  }

  public static void* swigGetCPtr(H3DNodeParams obj) {
    return (obj is null) ? null : obj.swigCPtr;
  }

  mixin horde3d_im.SwigOperatorDefinitions;

  ~this() {
    dispose();
  }

  public void dispose() {
    synchronized(this) {
      if (swigCPtr !is null) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          horde3d_im.delete_H3DNodeParams(cast(void*)swigCPtr);
        }
        swigCPtr = null;
      }
    }
  }

  enum List {
    NameStr = 1,
    AttachmentStr
  }

  public this() {
    this(horde3d_im.new_H3DNodeParams(), true);
  }
}

class H3DModel {
  private void* swigCPtr;
  protected bool swigCMemOwn;

  public this(void* cObject, bool ownCObject) {
    swigCPtr = cObject;
    swigCMemOwn = ownCObject;
  }

  public static void* swigGetCPtr(H3DModel obj) {
    return (obj is null) ? null : obj.swigCPtr;
  }

  mixin horde3d_im.SwigOperatorDefinitions;

  ~this() {
    dispose();
  }

  public void dispose() {
    synchronized(this) {
      if (swigCPtr !is null) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          horde3d_im.delete_H3DModel(cast(void*)swigCPtr);
        }
        swigCPtr = null;
      }
    }
  }

  enum List {
    GeoResI = 200,
    SWSkinningI,
    LodDist1F,
    LodDist2F,
    LodDist3F,
    LodDist4F
  }

  public this() {
    this(horde3d_im.new_H3DModel(), true);
  }
}

class H3DMesh {
  private void* swigCPtr;
  protected bool swigCMemOwn;

  public this(void* cObject, bool ownCObject) {
    swigCPtr = cObject;
    swigCMemOwn = ownCObject;
  }

  public static void* swigGetCPtr(H3DMesh obj) {
    return (obj is null) ? null : obj.swigCPtr;
  }

  mixin horde3d_im.SwigOperatorDefinitions;

  ~this() {
    dispose();
  }

  public void dispose() {
    synchronized(this) {
      if (swigCPtr !is null) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          horde3d_im.delete_H3DMesh(cast(void*)swigCPtr);
        }
        swigCPtr = null;
      }
    }
  }

  enum List {
    MatResI = 300,
    BatchStartI,
    BatchCountI,
    VertRStartI,
    VertREndI,
    LodLevelI
  }

  public this() {
    this(horde3d_im.new_H3DMesh(), true);
  }
}

class H3DJoint {
  private void* swigCPtr;
  protected bool swigCMemOwn;

  public this(void* cObject, bool ownCObject) {
    swigCPtr = cObject;
    swigCMemOwn = ownCObject;
  }

  public static void* swigGetCPtr(H3DJoint obj) {
    return (obj is null) ? null : obj.swigCPtr;
  }

  mixin horde3d_im.SwigOperatorDefinitions;

  ~this() {
    dispose();
  }

  public void dispose() {
    synchronized(this) {
      if (swigCPtr !is null) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          horde3d_im.delete_H3DJoint(cast(void*)swigCPtr);
        }
        swigCPtr = null;
      }
    }
  }

  enum List {
    JointIndexI = 400
  }

  public this() {
    this(horde3d_im.new_H3DJoint(), true);
  }
}

class H3DLight {
  private void* swigCPtr;
  protected bool swigCMemOwn;

  public this(void* cObject, bool ownCObject) {
    swigCPtr = cObject;
    swigCMemOwn = ownCObject;
  }

  public static void* swigGetCPtr(H3DLight obj) {
    return (obj is null) ? null : obj.swigCPtr;
  }

  mixin horde3d_im.SwigOperatorDefinitions;

  ~this() {
    dispose();
  }

  public void dispose() {
    synchronized(this) {
      if (swigCPtr !is null) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          horde3d_im.delete_H3DLight(cast(void*)swigCPtr);
        }
        swigCPtr = null;
      }
    }
  }

  enum List {
    MatResI = 500,
    RadiusF,
    FovF,
    ColorF3,
    ColorMultiplierF,
    ShadowMapCountI,
    ShadowSplitLambdaF,
    ShadowMapBiasF,
    LightingContextStr,
    ShadowContextStr
  }

  public this() {
    this(horde3d_im.new_H3DLight(), true);
  }
}

class H3DCamera {
  private void* swigCPtr;
  protected bool swigCMemOwn;

  public this(void* cObject, bool ownCObject) {
    swigCPtr = cObject;
    swigCMemOwn = ownCObject;
  }

  public static void* swigGetCPtr(H3DCamera obj) {
    return (obj is null) ? null : obj.swigCPtr;
  }

  mixin horde3d_im.SwigOperatorDefinitions;

  ~this() {
    dispose();
  }

  public void dispose() {
    synchronized(this) {
      if (swigCPtr !is null) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          horde3d_im.delete_H3DCamera(cast(void*)swigCPtr);
        }
        swigCPtr = null;
      }
    }
  }

  enum List {
    PipeResI = 600,
    OutTexResI,
    OutBufIndexI,
    LeftPlaneF,
    RightPlaneF,
    BottomPlaneF,
    TopPlaneF,
    NearPlaneF,
    FarPlaneF,
    ViewportXI,
    ViewportYI,
    ViewportWidthI,
    ViewportHeightI,
    OrthoI,
    OccCullingI
  }

  public this() {
    this(horde3d_im.new_H3DCamera(), true);
  }
}

class H3DEmitter {
  private void* swigCPtr;
  protected bool swigCMemOwn;

  public this(void* cObject, bool ownCObject) {
    swigCPtr = cObject;
    swigCMemOwn = ownCObject;
  }

  public static void* swigGetCPtr(H3DEmitter obj) {
    return (obj is null) ? null : obj.swigCPtr;
  }

  mixin horde3d_im.SwigOperatorDefinitions;

  ~this() {
    dispose();
  }

  public void dispose() {
    synchronized(this) {
      if (swigCPtr !is null) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          horde3d_im.delete_H3DEmitter(cast(void*)swigCPtr);
        }
        swigCPtr = null;
      }
    }
  }

  enum List {
    MatResI = 700,
    PartEffResI,
    MaxCountI,
    RespawnCountI,
    DelayF,
    EmissionRateF,
    SpreadAngleF,
    ForceF3
  }

  public this() {
    this(horde3d_im.new_H3DEmitter(), true);
  }
}

string h3dGetVersionString() {
  string ret = std.conv.to!string(horde3d_im.h3dGetVersionString());
  return ret;
}

bool h3dCheckExtension(string extensionName) {
  bool ret = horde3d_im.h3dCheckExtension((extensionName ? std.string.toStringz(extensionName) : null)) ? true : false;
  return ret;
}

bool h3dGetError() {
  bool ret = horde3d_im.h3dGetError() ? true : false;
  return ret;
}

bool h3dInit() {
  bool ret = horde3d_im.h3dInit() ? true : false;
  return ret;
}

void h3dRelease() {
  horde3d_im.h3dRelease();
}

void h3dRender(int cameraNode) {
  horde3d_im.h3dRender(cameraNode);
}

void h3dFinalizeFrame() {
  horde3d_im.h3dFinalizeFrame();
}

void h3dClear() {
  horde3d_im.h3dClear();
}

string h3dGetMessage(int* level, float* time) {
  string ret = std.conv.to!string(horde3d_im.h3dGetMessage(cast(void*)level, cast(void*)time));
  return ret;
}

float h3dGetOption(H3DOptions.List param) {
  auto ret = horde3d_im.h3dGetOption(cast(int)param);
  return ret;
}

bool h3dSetOption(H3DOptions.List param, float value) {
  bool ret = horde3d_im.h3dSetOption(cast(int)param, value) ? true : false;
  return ret;
}

float h3dGetStat(H3DStats.List param, bool reset) {
  auto ret = horde3d_im.h3dGetStat(cast(int)param, reset);
  return ret;
}

void h3dShowOverlays(float* verts, int vertCount, float colR, float colG, float colB, float colA, int materialRes, int flags) {
  horde3d_im.h3dShowOverlays(cast(void*)verts, vertCount, colR, colG, colB, colA, materialRes, flags);
}

void h3dClearOverlays() {
  horde3d_im.h3dClearOverlays();
}

int h3dGetResType(int res) {
  auto ret = horde3d_im.h3dGetResType(res);
  return ret;
}

string h3dGetResName(int res) {
  string ret = std.conv.to!string(horde3d_im.h3dGetResName(res));
  return ret;
}

int h3dGetNextResource(int type, int start) {
  auto ret = horde3d_im.h3dGetNextResource(type, start);
  return ret;
}

int h3dFindResource(int type, string name) {
  auto ret = horde3d_im.h3dFindResource(type, (name ? std.string.toStringz(name) : null));
  return ret;
}

int h3dAddResource(int type, string name, int flags) {
  auto ret = horde3d_im.h3dAddResource(type, (name ? std.string.toStringz(name) : null), flags);
  return ret;
}

int h3dCloneResource(int sourceRes, string name) {
  auto ret = horde3d_im.h3dCloneResource(sourceRes, (name ? std.string.toStringz(name) : null));
  return ret;
}

int h3dRemoveResource(int res) {
  auto ret = horde3d_im.h3dRemoveResource(res);
  return ret;
}

bool h3dIsResLoaded(int res) {
  bool ret = horde3d_im.h3dIsResLoaded(res) ? true : false;
  return ret;
}

bool h3dLoadResource(int res, string data, int size) {
  bool ret = horde3d_im.h3dLoadResource(res, (data ? std.string.toStringz(data) : null), size) ? true : false;
  return ret;
}

void h3dUnloadResource(int res) {
  horde3d_im.h3dUnloadResource(res);
}

int h3dGetResElemCount(int res, int elem) {
  auto ret = horde3d_im.h3dGetResElemCount(res, elem);
  return ret;
}

int h3dFindResElem(int res, int elem, int param, string value) {
  auto ret = horde3d_im.h3dFindResElem(res, elem, param, (value ? std.string.toStringz(value) : null));
  return ret;
}

int h3dGetResParamI(int res, int elem, int elemIdx, int param) {
  auto ret = horde3d_im.h3dGetResParamI(res, elem, elemIdx, param);
  return ret;
}

void h3dSetResParamI(int res, int elem, int elemIdx, int param, int value) {
  horde3d_im.h3dSetResParamI(res, elem, elemIdx, param, value);
}

float h3dGetResParamF(int res, int elem, int elemIdx, int param, int compIdx) {
  auto ret = horde3d_im.h3dGetResParamF(res, elem, elemIdx, param, compIdx);
  return ret;
}

void h3dSetResParamF(int res, int elem, int elemIdx, int param, int compIdx, float value) {
  horde3d_im.h3dSetResParamF(res, elem, elemIdx, param, compIdx, value);
}

string h3dGetResParamStr(int res, int elem, int elemIdx, int param) {
  string ret = std.conv.to!string(horde3d_im.h3dGetResParamStr(res, elem, elemIdx, param));
  return ret;
}

void h3dSetResParamStr(int res, int elem, int elemIdx, int param, string value) {
  horde3d_im.h3dSetResParamStr(res, elem, elemIdx, param, (value ? std.string.toStringz(value) : null));
}

void* h3dMapResStream(int res, int elem, int elemIdx, int stream, bool read, bool write) {
  auto ret = cast(void*)horde3d_im.h3dMapResStream(res, elem, elemIdx, stream, read, write);
  return ret;
}

void h3dUnmapResStream(int res) {
  horde3d_im.h3dUnmapResStream(res);
}

int h3dQueryUnloadedResource(int index) {
  auto ret = horde3d_im.h3dQueryUnloadedResource(index);
  return ret;
}

void h3dReleaseUnusedResources() {
  horde3d_im.h3dReleaseUnusedResources();
}

int h3dCreateTexture(string name, int width, int height, int fmt, int flags) {
  auto ret = horde3d_im.h3dCreateTexture((name ? std.string.toStringz(name) : null), width, height, fmt, flags);
  return ret;
}

void h3dSetShaderPreambles(string vertPreamble, string fragPreamble) {
  horde3d_im.h3dSetShaderPreambles((vertPreamble ? std.string.toStringz(vertPreamble) : null), (fragPreamble ? std.string.toStringz(fragPreamble) : null));
}

bool h3dSetMaterialUniform(int materialRes, string name, float a, float b, float c, float d) {
  bool ret = horde3d_im.h3dSetMaterialUniform(materialRes, (name ? std.string.toStringz(name) : null), a, b, c, d) ? true : false;
  return ret;
}

void h3dResizePipelineBuffers(int pipeRes, int width, int height) {
  horde3d_im.h3dResizePipelineBuffers(pipeRes, width, height);
}

bool h3dGetRenderTargetData(int pipelineRes, string targetName, int bufIndex, int* width, int* height, int* compCount, void* dataBuffer, int bufferSize) {
  bool ret = horde3d_im.h3dGetRenderTargetData(pipelineRes, (targetName ? std.string.toStringz(targetName) : null), bufIndex, cast(void*)width, cast(void*)height, cast(void*)compCount, cast(void*)dataBuffer, bufferSize) ? true : false;
  return ret;
}

int h3dGetNodeType(int node) {
  auto ret = horde3d_im.h3dGetNodeType(node);
  return ret;
}

int h3dGetNodeParent(int node) {
  auto ret = horde3d_im.h3dGetNodeParent(node);
  return ret;
}

bool h3dSetNodeParent(int node, int parent) {
  bool ret = horde3d_im.h3dSetNodeParent(node, parent) ? true : false;
  return ret;
}

int h3dGetNodeChild(int node, int index) {
  auto ret = horde3d_im.h3dGetNodeChild(node, index);
  return ret;
}

int h3dAddNodes(int parent, int sceneGraphRes) {
  auto ret = horde3d_im.h3dAddNodes(parent, sceneGraphRes);
  return ret;
}

void h3dRemoveNode(int node) {
  horde3d_im.h3dRemoveNode(node);
}

bool h3dCheckNodeTransFlag(int node, bool reset) {
  bool ret = horde3d_im.h3dCheckNodeTransFlag(node, reset) ? true : false;
  return ret;
}

void h3dGetNodeTransform(int node, float* tx, float* ty, float* tz, float* rx, float* ry, float* rz, float* sx, float* sy, float* sz) {
  horde3d_im.h3dGetNodeTransform(node, cast(void*)tx, cast(void*)ty, cast(void*)tz, cast(void*)rx, cast(void*)ry, cast(void*)rz, cast(void*)sx, cast(void*)sy, cast(void*)sz);
}

void h3dSetNodeTransform(int node, float tx, float ty, float tz, float rx, float ry, float rz, float sx, float sy, float sz) {
  horde3d_im.h3dSetNodeTransform(node, tx, ty, tz, rx, ry, rz, sx, sy, sz);
}

void h3dGetNodeTransMats(int node, float** relMat, float** absMat) {
  horde3d_im.h3dGetNodeTransMats(node, cast(void*)relMat, cast(void*)absMat);
}

void h3dSetNodeTransMat(int node, float* mat4x4) {
  horde3d_im.h3dSetNodeTransMat(node, cast(void*)mat4x4);
}

int h3dGetNodeParamI(int node, int param) {
  auto ret = horde3d_im.h3dGetNodeParamI(node, param);
  return ret;
}

void h3dSetNodeParamI(int node, int param, int value) {
  horde3d_im.h3dSetNodeParamI(node, param, value);
}

float h3dGetNodeParamF(int node, int param, int compIdx) {
  auto ret = horde3d_im.h3dGetNodeParamF(node, param, compIdx);
  return ret;
}

void h3dSetNodeParamF(int node, int param, int compIdx, float value) {
  horde3d_im.h3dSetNodeParamF(node, param, compIdx, value);
}

string h3dGetNodeParamStr(int node, int param) {
  string ret = std.conv.to!string(horde3d_im.h3dGetNodeParamStr(node, param));
  return ret;
}

void h3dSetNodeParamStr(int node, int param, string value) {
  horde3d_im.h3dSetNodeParamStr(node, param, (value ? std.string.toStringz(value) : null));
}

int h3dGetNodeFlags(int node) {
  auto ret = horde3d_im.h3dGetNodeFlags(node);
  return ret;
}

void h3dSetNodeFlags(int node, int flags, bool recursive) {
  horde3d_im.h3dSetNodeFlags(node, flags, recursive);
}

void h3dGetNodeAABB(int node, float* minX, float* minY, float* minZ, float* maxX, float* maxY, float* maxZ) {
  horde3d_im.h3dGetNodeAABB(node, cast(void*)minX, cast(void*)minY, cast(void*)minZ, cast(void*)maxX, cast(void*)maxY, cast(void*)maxZ);
}

int h3dFindNodes(int startNode, string name, int type) {
  auto ret = horde3d_im.h3dFindNodes(startNode, (name ? std.string.toStringz(name) : null), type);
  return ret;
}

int h3dGetNodeFindResult(int index) {
  auto ret = horde3d_im.h3dGetNodeFindResult(index);
  return ret;
}

int h3dCastRay(int node, float ox, float oy, float oz, float dx, float dy, float dz, int numNearest) {
  auto ret = horde3d_im.h3dCastRay(node, ox, oy, oz, dx, dy, dz, numNearest);
  return ret;
}

bool h3dGetCastRayResult(int index, int* node, float* distance, float* intersection) {
  bool ret = horde3d_im.h3dGetCastRayResult(index, cast(void*)node, cast(void*)distance, cast(void*)intersection) ? true : false;
  return ret;
}

int h3dCheckNodeVisibility(int node, int cameraNode, bool checkOcclusion, bool calcLod) {
  auto ret = horde3d_im.h3dCheckNodeVisibility(node, cameraNode, checkOcclusion, calcLod);
  return ret;
}

int h3dAddGroupNode(int parent, string name) {
  auto ret = horde3d_im.h3dAddGroupNode(parent, (name ? std.string.toStringz(name) : null));
  return ret;
}

int h3dAddModelNode(int parent, string name, int geometryRes) {
  auto ret = horde3d_im.h3dAddModelNode(parent, (name ? std.string.toStringz(name) : null), geometryRes);
  return ret;
}

void h3dSetupModelAnimStage(int modelNode, int stage, int animationRes, int layer, string startNode, bool additive) {
  horde3d_im.h3dSetupModelAnimStage(modelNode, stage, animationRes, layer, (startNode ? std.string.toStringz(startNode) : null), additive);
}

void h3dSetModelAnimParams(int modelNode, int stage, float time, float weight) {
  horde3d_im.h3dSetModelAnimParams(modelNode, stage, time, weight);
}

bool h3dSetModelMorpher(int modelNode, string target, float weight) {
  bool ret = horde3d_im.h3dSetModelMorpher(modelNode, (target ? std.string.toStringz(target) : null), weight) ? true : false;
  return ret;
}

int h3dAddMeshNode(int parent, string name, int materialRes, int batchStart, int batchCount, int vertRStart, int vertREnd) {
  auto ret = horde3d_im.h3dAddMeshNode(parent, (name ? std.string.toStringz(name) : null), materialRes, batchStart, batchCount, vertRStart, vertREnd);
  return ret;
}

int h3dAddJointNode(int parent, string name, int jointIndex) {
  auto ret = horde3d_im.h3dAddJointNode(parent, (name ? std.string.toStringz(name) : null), jointIndex);
  return ret;
}

int h3dAddLightNode(int parent, string name, int materialRes, string lightingContext, string shadowContext) {
  auto ret = horde3d_im.h3dAddLightNode(parent, (name ? std.string.toStringz(name) : null), materialRes, (lightingContext ? std.string.toStringz(lightingContext) : null), (shadowContext ? std.string.toStringz(shadowContext) : null));
  return ret;
}

int h3dAddCameraNode(int parent, string name, int pipelineRes) {
  auto ret = horde3d_im.h3dAddCameraNode(parent, (name ? std.string.toStringz(name) : null), pipelineRes);
  return ret;
}

void h3dSetupCameraView(int cameraNode, float fov, float aspect, float nearDist, float farDist) {
  horde3d_im.h3dSetupCameraView(cameraNode, fov, aspect, nearDist, farDist);
}

void h3dGetCameraProjMat(int cameraNode, float* projMat) {
  horde3d_im.h3dGetCameraProjMat(cameraNode, cast(void*)projMat);
}

int h3dAddEmitterNode(int parent, string name, int materialRes, int particleEffectRes, int maxParticleCount, int respawnCount) {
  auto ret = horde3d_im.h3dAddEmitterNode(parent, (name ? std.string.toStringz(name) : null), materialRes, particleEffectRes, maxParticleCount, respawnCount);
  return ret;
}

void h3dAdvanceEmitterTime(int emitterNode, float timeDelta) {
  horde3d_im.h3dAdvanceEmitterTime(emitterNode, timeDelta);
}

bool h3dHasEmitterFinished(int emitterNode) {
  bool ret = horde3d_im.h3dHasEmitterFinished(emitterNode) ? true : false;
  return ret;
}
