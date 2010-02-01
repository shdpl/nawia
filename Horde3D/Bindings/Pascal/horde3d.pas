// *************************************************************************************************
//
// Horde3D
//   Next-Generation Graphics Engine
// --------------------------------------
// Copyright (C) 2006-2009 Nicolas Schulz
//
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// *************************************************************************************************

unit horde3d;
{$MINENUMSIZE 4}

{
  Title: Horde3D API
}

{
  Topic: Conventions
    Some conventions for the API.

  Horde3D uses a right-handed coordinate system, where y is the up-axis and the positive z-axis is
  pointing out of the screen. The rotations are specified in degrees and rotation direction is
  counter-clockwise when looking down the axis from the the positive end towards the origin. View
  vectors like the camera or light direction are always pointing along the negative z-axis when no
  transformation is applied. Matrices in Horde are stored in a column-major memory layout. When
  Euler angles are used, the rotation order is YXZ [*vec], so the z-rotation is applied first.
}

interface

// *************************************************************************************************
// Core Library
// *************************************************************************************************

const
  Horde3DLib = 'Horde3D.dll';

{
  Group: Typedefs and constants
}

{
  Constants: Typedefs
  H3DRes   - handle to resource (type: int32)
  H3DNode  - handle to scene node (type: int32)
}
type
  H3DRes = Integer;
  PH3DRes = ^H3DRes;
  H3DNode = Integer;
  PH3DNode = ^H3DNode;
  PPSingle = ^PSingle;

{
  Constants: Predefined constants
  H3DRootNode  - Scene root node handle
}
const
  H3DRootNode: H3DNode = 1;

{
  Group: Enumerations
}

type
  H3DOptions = (
  {
    Enum: H3DOptions
      The available engine option parameters.

    MaxLogLevel         - Defines the maximum log level; only messages which are smaller or equal to this value
                          (hence more important) are published in the message queue. (Default: 4)
    MaxNumMessages      - Defines the maximum number of messages that can be stored in the message queue (Default: 512)
    TrilinearFiltering  - Enables or disables trilinear filtering for textures. (Values: 0, 1; Default: 1)
    MaxAnisotropy       - Sets the maximum quality for anisotropic filtering. (Values: 1, 2, 4, 8; Default: 1)
    TexCompression      - Enables or disables texture compression; only affects textures that are
                          loaded after setting the option. (Values: 0, 1; Default: 0)
    SRGBLinearization   - Eanbles or disables gamma-to-linear-space conversion of input textures that are tagged as sRGB (Values: 0, 1; Default: 0)
    LoadTextures        - Enables or disables loading of texture images; option can be used to
                          minimize loading times for testing. (Values: 0, 1; Default: 1)
    FastAnimation       - Disables or enables inter-frame interpolation for animations. (Values: 0, 1; Default: 1)
    ShadowMapSize       - Sets the size of the shadow map buffer (Values: 128, 256, 512, 1024, 2048; Default: 1024)
    SampleCount         - Maximum number of samples used for multisampled render targets; only affects pipelines
                          that are loaded after setting the option. (Values: 0, 2, 4, 8, 16; Default: 0)
    WireframeMode       - Enables or disables wireframe rendering
    DebugViewMode       - Enables or disables debug view where geometry is rendered in wireframe without shaders and
                          lights are visualized using their screen space bounding box. (Values: 0, 1; Default: 0)
    DumpFailedShaders   - Enables or disables storing of shader code that failed to compile in a text file; this can be
                          useful in combination with the line numbers given back by the shader compiler. (Values: 0, 1; Default: 0)
    GatherTimeStats     - Enables or disables gathering of time stats that are useful for profiling (Values: 0, 1; Default: 1)
  }
    H3DOptions_MaxLogLevel = 1,
    H3DOptions_MaxNumMessages,
    H3DOptions_TrilinearFiltering,
    H3DOptions_MaxAnisotropy,
    H3DOptions_TexCompression,
    H3DOptions_SRGBLinearization,
    H3DOptions_LoadTextures,
    H3DOptions_FastAnimation,
    H3DOptions_ShadowMapSize,
    H3DOptions_SampleCount,
    H3DOptions_WireframeMode,
    H3DOptions_DebugViewMode,
    H3DOptions_DumpFailedShaders,
    H3DOptions_GatherTimeStats
  );

type
  H3DStats = (
  {
    Enum: H3DStats
      The available engine statistic parameters.

    TriCount        - Number of triangles that were pushed to the renderer
    BatchCount      - Number of batches (draw calls)
    LightPassCount  - Number of lighting passes
    FrameTime       - Time in ms between two h3dFinalizeFrame calls
    AnimationTime   - CPU time in ms spent for animation
    CustomTime      - Value of custom timer (useful for profiling engine functions)
    TextureVMem     - Estimated amount of video memory used by textures (in Mb)
    GeometryVMem    - Estimated amount of video memory used by geometry (in Mb)
  }
    H3DStats_TriCount = 100,
    H3DStats_BatchCount,
    H3DStats_LightPassCount,
    H3DStats_FrameTime,
    H3DStats_AnimationTime,
    H3DStats_CustomTime,
    H3DStats_TextureVMem,
    H3DStats_GeometryVMem
  );

type
  H3DResTypes = (
  {
    Enum: H3DResTypes
      The available resource types.

    Undefined       - An undefined resource, returned by getResourceType in case of error
    SceneGraph      - Scene graph subtree stored in XML format
    Geometry        - Geometrical data containing bones, vertices and triangles
    Animation       - Animation data
    Material        - Material script
    Code            - Text block containing shader source code
    Shader          - Shader program
    Texture         - Texture map
    ParticleEffect  - Particle configuration
    Pipeline        - Rendering pipeline
  }
    H3DResTypes_Undefined = 0,
    H3DResTypes_SceneGraph,
    H3DResTypes_Geometry,
    H3DResTypes_Animation,
    H3DResTypes_Material,
    H3DResTypes_Code,
    H3DResTypes_Shader,
    H3DResTypes_Texture,
    H3DResTypes_ParticleEffect,
    H3DResTypes_Pipeline
  );

const
  {
    Enum: H3DResFlags
      The available flags used when adding a resource.

    NoQuery           - Excludes resource from being listed by queryUnloadedResource function.
    NoTexCompression  - Disables texture compression for Texture resource.
    NoTexMipmaps      - Disables generation of mipmaps for Texture resource.
    TexCubemap        - Sets Texture resource to be a cubemap.
    TexDynamic        - Enables more efficient updates of Texture resource streams.
    TexRenderable     - Makes Texture resource usable as render target.
    TexSRGB           - Indicates that Texture resource is in sRGB color space and should be converted
                        to linear space when being sampled.
  }
  H3DResFlags_NoQuery: Integer = 1;
  H3DResFlags_NoTexCompression: Integer = 2;
  H3DResFlags_NoTexMipmaps: Integer = 4;
  H3DResFlags_TexCubemap: Integer = 8;
  H3DResFlags_TexDynamic: Integer = 16;
  H3DResFlags_TexRenderable: Integer = 32;
  H3DResFlags_TexSRGB: Integer = 64;

type
  H3DFormats = (
  {
    Enum: H3DFormats
      The available resource stream formats.

    Unknown      - Unknown format
    TEX_BGRA8    - 8-bit BGRA texture
    TEX_DXT1     - DXT1 compressed texture
    TEX_DXT3     - DXT3 compressed texture
    TEX_DXT5     - DXT5 compressed texture
    TEX_RGBA16F  - Half float RGBA texture
    TEX_RGBA32F  - Float RGBA texture
  }
    H3DFormats_Unknown = 0,
    H3DFormats_TEX_BGRA8,
    H3DFormats_TEX_DXT1,
    H3DFormats_TEX_DXT3,
    H3DFormats_TEX_DXT5,
    H3DFormats_TEX_RGBA16F,
    H3DFormats_TEX_RGBA32F
  );

type
  H3DResourceParams = (
  {
    Enum: H3DGeoRes
      The available Geometry resource accessors.

    GeometryElem         - Base element
    GeoIndexCountI       - Number of indices [read-only]
    GeoVertexCountI      - Number of vertices [read-only]
    GeoIndices16I        - Flag indicating whether index data is 16 or 32 bit [read-only]
    GeoIndexStream       - Triangle index data (uint16 or uint32, depending on flag)
    GeoVertPosStream     - Vertex position data (float x, y, z)
    GeoVertTanStream     - Vertex tangent frame (TBN) data
                           (float tx, ty, tz, bx, by, bz, nx, ny, nz)
    GeoVertStaticStream  - Vertex static attribute data (float u0, v0,
                           float4 jointIndices, float4 jointWeights, float u1, v1)
  }
    H3DGeoRes_GeometryElem = 200,
    H3DGeoRes_GeoIndexCountI,
    H3DGeoRes_GeoVertexCountI,
    H3DGeoRes_GeoIndices16I,
    H3DGeoRes_GeoIndexStream,
    H3DGeoRes_GeoVertPosStream,
    H3DGeoRes_GeoVertTanStream,
    H3DGeoRes_GeoVertStaticStream,

  {
    Enum: H3DAnimRes
      The available Animation resource accessors.

    EntityElem      - Stored animation entities (joints and meshes)
    EntFrameCountI  - Number of frames stored for a specific entity [read-only]
  }
    H3DAnimRes_EntityElem = 300,
    H3DAnimRes_EntFrameCountI,

  {
    Enum: H3DMatRes
      The available Material resource accessors.

    MaterialElem  - Base element
    SamplerElem   - Sampler element
    UniformElem   - Uniform element
    MatClassStr   - Material class
    MatLinkI      - Material resource that is linked to this material
    MatShaderI    - Shader resource
    SampNameStr   - Name of sampler [read-only]
    SampTexResI   - Texture resource bound to sampler
    UnifNameStr   - Name of uniform [read-only]
    UnifValueF4   - Value of uniform (a, b, c, d)
  }
    H3DMatRes_MaterialElem = 400,
    H3DMatRes_SamplerElem,
    H3DMatRes_UniformElem,
    H3DMatRes_MatClassStr,
    H3DMatRes_MatLinkI,
    H3DMatRes_MatShaderI,
    H3DMatRes_SampNameStr,
    H3DMatRes_SampTexResI,
    H3DMatRes_UnifNameStr,
    H3DMatRes_UnifValueF4,

  {
    Enum: H3DShaderRes
      The available Shader resource accessors.

    ContextElem     - Context element
    SamplerElem     - Sampler element
    UniformElem     - Uniform element
    ContNameStr     - Name of context [read-only]
    SampNameStr     - Name of sampler [read-only]
    UnifNameStr     - Name of uniform [read-only]
    UnifSizeI       - Size (number of components) of uniform [read-only]
    UnifDefValueF4  - Default value of uniform (a, b, c, d)
  }
    H3DShaderRes_ContextElem = 600,
    H3DShaderRes_SamplerElem,
    H3DShaderRes_UniformElem,
    H3DShaderRes_ContNameStr,
    H3DShaderRes_SampNameStr,
    H3DShaderRes_UnifNameStr,
    H3DShaderRes_UnifSizeI,
    H3DShaderRes_UnifDefValueF4,

  {
    Enum: H3DTexRes
      The available Texture resource accessors.

    TextureElem     - Base element
    ImageElem       - Subresources of the texture. A texture consists, depending on the type,
                      of a number of equally sized slices which again can have a fixed number
                      of mipmaps. Each image element represents the base image of a slice or
                      a single mipmap level of the corresponding slice.
    TexFormatI      - Texture format [read-only]
    TexSliceCountI  - Number of slices (1 for 2D texture and 6 for cubemap) [read-only]
    ImgWidthI       - Image width [read-only]
    ImgHeightI      - Image height [read-only]
    ImgPixelStream  - Pixel data of an image. The data layout matches the layout specified
                      by the texture format with the exception that half-float is converted
                      to float. The first element in the data array corresponds to the lower
                      left corner.
  }
    H3DTexRes_TextureElem = 700,
    H3DTexRes_ImageElem,
    H3DTexRes_TexFormatI,
    H3DTexRes_TexSliceCountI,
    H3DTexRes_ImgWidthI,
    H3DTexRes_ImgHeightI,
    H3DTexRes_ImgPixelStream,

  {
    Enum: H3DPartEffRes
      The available ParticleEffect resource accessors.

    ParticleElem     - General particle configuration
    ChanMoveVelElem  - Velocity channel
    ChanRotVelElem   - Angular velocity channel
    ChanSizeElem     - Size channel
    ChanColRElem     - Red color component channel
    ChanColGElem     - Green color component channel
    ChanColBElem     - Blue color component channel
    ChanColAElem     - Alpha channel
    PartLifeMinF     - Minimum value of random life time (in seconds)
    PartLifeMaxF     - Maximum value of random life time (in seconds)
    ChanStartMinF    - Minimum for selecting initial random value of channel
    ChanStartMaxF    - Maximum for selecting initial random value of channel
    ChanEndRateF     - Remaining percentage of initial value when particle is dying
  }
    H3DPartEffRes_ParticleElem = 800,
    H3DPartEffRes_ChanMoveVelElem,
    H3DPartEffRes_ChanRotVelElem,
    H3DPartEffRes_ChanSizeElem,
    H3DPartEffRes_ChanColRElem,
    H3DPartEffRes_ChanColGElem,
    H3DPartEffRes_ChanColBElem,
    H3DPartEffRes_ChanColAElem,
    H3DPartEffRes_PartLifeMinF,
    H3DPartEffRes_PartLifeMaxF,
    H3DPartEffRes_ChanStartMinF,
    H3DPartEffRes_ChanStartMaxF,
    H3DPartEffRes_ChanEndRateF,

  {
    Enum: H3DPipeRes
      The available Pipeline resource accessors.

    StageElem         - Pipeline stage
    StageNameStr      - Name of stage [read-only]
    StageActivationI  - Flag indicating whether stage is active
  }
    H3DPipeRes_StageElem = 900,
    H3DPipeRes_StageNameStr,
    H3DPipeRes_StageActivationI
  );

type
  H3DNodeTypes = (
  {
    Enum: H3DNodeTypes
      The available scene node types.

    Undefined  - An undefined node type, returned by getNodeType in case of error
    Group      - Group of different scene nodes
    Model      - 3D model with optional skeleton
    Mesh       - Subgroup of a model with triangles of one material
    Joint      - Joint for skeletal animation
    Light      - Light source
    Camera     - Camera giving view on scene
    Emitter    - Particle system emitter
  }
    H3DNodeTypes_Undefined = 0,
    H3DNodeTypes_Group,
    H3DNodeTypes_Model,
    H3DNodeTypes_Mesh,
    H3DNodeTypes_Joint,
    H3DNodeTypes_Light,
    H3DNodeTypes_Camera,
    H3DNodeTypes_Emitter
  );

type
  H3DNodeParams = (
  {
    Enum: H3DNodeParams
      The available scene node parameters.

    NameStr        - Name of the scene node
    AttachmentStr  - Optional application-specific meta data for a node encapsulated
                     in an 'Attachment' XML string
  }
    H3DNodeParams_NameStr = 1,
    H3DNodeParams_AttachmentStr,

  {
    Enum: H3DModel
      The available Model node parameters

    GeoResI      - Geometry resource used for the model
    SWSkinningI  - Enables or disables software skinning (default: 0)
    LodDist1F    - Distance to camera from which on LOD1 is used (default: infinite)
                   (must be a positive value larger than 0.0)
    LodDist2F    - Distance to camera from which on LOD2 is used
                   (may not be smaller than LodDist1) (default: infinite)
    LodDist3F    - Distance to camera from which on LOD3 is used
                   (may not be smaller than LodDist2) (default: infinite)
    LodDist4F    - Distance to camera from which on LOD4 is used
                   (may not be smaller than LodDist3) (default: infinite)
  }
    H3DModel_GeoResI = 200,
    H3DModel_SWSkinningI,
    H3DModel_LodDist1F,
    H3DModel_LodDist2F,
    H3DModel_LodDist3F,
    H3DModel_LodDist4F,

  {
    Enum: H3DMesh
      The available Mesh node parameters.

    MatResI      - Material resource used for the mesh
    BatchStartI  - First triangle index of mesh in Geometry resource of parent Model node [read-only]
    BatchCountI  - Number of triangle indices used for drawing mesh [read-only]
    VertRStartI  - First vertex in Geometry resource of parent Model node [read-only]
    VertREndI    - Last vertex in Geometry resource of parent Model node [read-only]
    LodLevelI    - LOD level of Mesh; the mesh is only rendered if its LOD level corresponds to
                   the model's current LOD level which is calculated based on the LOD distances (default: 0)
  }
    H3DMesh_MatResI = 300,
    H3DMesh_BatchStartI,
    H3DMesh_BatchCountI,
    H3DMesh_VertRStartI,
    H3DMesh_VertREndI,
    H3DMesh_LodLevelI,

  {
    Enum: H3DJoint
      The available Joint node parameters.

    JointIndexI  - Index of joint in Geometry resource of parent Model node [read-only]
  }
    H3DJoint_JointIndexI = 400,

  {
    Enum: H3DLight
      The available Light node parameters.

    MatResI             - Material resource used for the light
    RadiusF             - Radius of influence (default: 100.0)
    FovF                - Field of view (FOV) angle (default: 90.0)
    ColorF3             - Diffuse color RGB (default: 1.0, 1.0, 1.0)
    ShadowMapCountI     - Number of shadow maps used for light source (values: 0, 1, 2, 3, 4; default: 0)]
    ShadowSplitLambdaF  - Constant determining segmentation of view frustum for Parallel Split Shadow Maps (default: 0.5)
    ShadowMapBiasF      - Bias value for shadow mapping to reduce shadow acne (default: 0.005)
    LightingContextStr  - Name of shader context used for computing lighting
    ShadowContextStr    - Name of shader context used for generating shadow map
  }
    H3DLight_MatResI = 500,
    H3DLight_RadiusF,
    H3DLight_FovF,
    H3DLight_ColorF3,
    H3DLight_ShadowMapCountI,
    H3DLight_ShadowSplitLambdaF,
    H3DLight_ShadowMapBiasF,
    H3DLight_LightingContextStr,
    H3DLight_ShadowContextStr,

  {
    Enum: H3DCamera
      The available Camera node parameters.

    PipeResI      - Pipeline resource used for rendering
    OutTexResI    - 2D Texture resource used as output buffer (can be 0 to use main framebuffer) (default: 0)
    OutBufIndexI  - Index of the output buffer for stereo rendering (values: 0 for left eye, 1 for right eye) (default: 0)
    LeftPlaneF    - Coordinate of left plane relative to near plane center (default: -0.055228457)
    RightPlaneF   - Coordinate of right plane relative to near plane center (default: 0.055228457)
    BottomPlaneF  - Coordinate of bottom plane relative to near plane center (default: -0.041421354f)
    TopPlaneF     - Coordinate of top plane relative to near plane center (default: 0.041421354f)
    NearPlaneF    - Distance of near clipping plane (default: 0.1)
    FarPlaneF     - Distance of far clipping plane (default: 1000)
    OrthoI        - Flag for setting up an orthographic frustum instead of a perspective one (default: 0)
    OccCullingI   - Flag for enabling occlusion culling (default: 0)
  }
    H3DCamera_PipeResI = 600,
    H3DCamera_OutTexResI,
    H3DCamera_OutBufIndexI,
    H3DCamera_LeftPlaneF,
    H3DCamera_RightPlaneF,
    H3DCamera_BottomPlaneF,
    H3DCamera_TopPlaneF,
    H3DCamera_NearPlaneF,
    H3DCamera_FarPlaneF,
    H3DCamera_OrthoI,
    H3DCamera_OccCullingI,

  {
    Enum: H3DEmitter
      The available Emitter node parameters.

    MatResI        - Material resource used for rendering
    PartEffResI    - ParticleEffect resource which configures particle properties
    MaxCountI      - Maximal number of particles living at the same time
    RespawnCountI  - Number of times a single particle is recreated after dying (-1 for infinite)
    DelayF         - Time in seconds before emitter begins creating particles (default: 0.0)
    EmissionRateF  - Maximal number of particles to be created per second (default: 0.0)
    SpreadAngleF   - Angle of cone for random emission direction (default: 0.0)
    ForceF3        - Force vector XYZ applied to particles (default: 0.0, 0.0, 0.0)
  }
    H3DEmitter_MatResI = 700,
    H3DEmitter_PartEffResI,
    H3DEmitter_MaxCountI,
    H3DEmitter_RespawnCountI,
    H3DEmitter_DelayF,
    H3DEmitter_EmissionRateF,
    H3DEmitter_SpreadAngleF,
    H3DEmitter_ForceF3
  );

{
  Group: Basic functions
}

{
  Function: h3dGetVersionString
    Returns the engine version string.

  Details:
    This function returns a pointer to a string containing the current version of Horde3D.

  Parameters:
    none

  Returns:
    pointer to the version string
}
function h3dGetVersionString: PAnsiChar; cdecl; external Horde3DLib;

{
  Function: h3dCheckExtension
    Checks if an extension is part of the engine library.

  Details:
    This function checks if a specified extension is contained in the DLL/shared object of the engine.

  Parameters:
    extensionName  - name of the extension

  Returns:
    true if extension is implemented, otherwise false
}
function h3dCheckExtension(extensionName: PAnsiChar): Boolean; cdecl;
  external Horde3DLib;

{
  Function: h3dGetError
    Checks if an error occured.

  Details:
    This function checks if an error occured in a previous API function call. If an error
    flag is set, the function resets the flag and returns true. The function will solely
    report errors that originate from a violated precondition, like an invalid parameter
    that is passed to an API function. Errors that happen during the execution of a function,
    for example failure of initializing the engine due to a missing hardware feature, can
    be catched by checking the return value of the corresponding API function.
    More information about the error can be retrieved by checking the message queue,
    provided that the message level is set accordingly.

  Parameters:
    none

  Returns:
    true in there was an error, otherwise false
}
function h3dGetError: Boolean; cdecl; external Horde3DLib;

{
  Function: h3dInit
    Initializes the engine.

  Details:
    This function initializes the graphics engine and makes it ready for use. It has to be the
    first call to the engine except for getVersionString. In order to successfully initialize
    the engine the calling application must provide a valid OpenGL context. The function can be
    called several times on different rendering contexts in order to initialize them.

  Parameters:
    none

  Returns:
    true in case of success, otherwise false
}
function h3dInit: Boolean; cdecl; external Horde3DLib;

{
  Function: h3dRelease
    Releases the engine.

  Details:
    This function releases the engine and frees all objects and associated memory. It should be
    called when the application is destroyed.

  Parameters:
    none

  Returns:
    nothing
}
procedure h3dRelease; cdecl; external Horde3DLib;

{
  Function: h3dSetupViewport
    Sets the location and size of the viewport.

  Details:
    This function sets the location and size of the viewport. It has to be called
    after engine initialization and whenever the size of the rendering context/window
    changes. The resizeBuffers parameter specifies whether render targets with a size
    relative to the viewport dimensions should be resized. This is usually desired
    after engine initialization and when the window is resized but not for just rendering
    to a part of the framebuffer.


  Parameters:
    x              - the x-position of the lower left corner of the viewport rectangle
    y              - the y-position of the lower left corner of the viewport rectangle
    width          - the width of the viewport
    height         - the height of the viewport
    resizeBuffers  - specifies whether render targets should be adapted to new size

  Returns:
    nothing
}
procedure h3dSetupViewport(x, y, width, height: Integer;
  resizeBuffers: Boolean); cdecl; external Horde3DLib;

{
  Function: h3dRender
    Main rendering function.

  Details:
    This is the main function of the engine. It executes all the rendering, animation and other
    tasks. The function can be called several times per frame, for example in order to write to different
    output buffers.

  Parameters:
    cameraNode  - camera node used for rendering scene

  Returns:
    nothing
}
procedure h3dRender(cameraNode: H3DNode); cdecl; external Horde3DLib;

{
  Function: h3dFinalizeFrame
    Marker for end of frame.

  Details:
    This function tells the engine that the current frame is finished and that all
    subsequent rendering operations will be for the next frame.

  Parameters:
    none

  Returns:
    nothing
}
procedure h3dFinalizeFrame; cdecl; external Horde3DLib;

{
  Function: h3dClear
    Removes all resources and scene nodes.

  Details:
    This function removes all nodes from the scene graph except the root node and releases all resources.

    *Warning: All resource and node IDs are invalid after calling this function*

  Parameters:
    none

  Returns:
    nothing
}
procedure h3dClear; cdecl; external Horde3DLib;

// --- General functions ---

{ Function: h3dGetMessage
    Gets the next message from the message queue.

  Details:
    This function returns the next message string from the message queue and writes additional information
    to the specified variables. If no message is left over in the queue an empty string is returned.

  Parameters:
    level  - pointer to variable for storing message level indicating importance (can be NULL)
    time   - pointer to variable for storing time when message was added (can be NULL)

  Returns:
    message string or empty string if no message is in queue
}
function h3dGetMessage(level: PInteger; time: PSingle): PAnsiChar; cdecl;
  external Horde3DLib;

{ Function: h3dGetOption
    Gets an option parameter of the engine.

  Details:
    This function gets a specified option parameter and returns its value.

  Parameters:
    param  - option parameter

  Returns:
    current value of the specified option parameter
}
function h3dGetOption(param: H3DOptions): Single; cdecl; external Horde3DLib;

{
  Function: h3dSetOption
    Sets an option parameter for the engine.

  Details:
    This function sets a specified option parameter to a specified value.

  Parameters:
    param  - option parameter
    value  - value of the option parameter

  Returns:
    true if the option could be set to the specified value, otherwise false
}
function h3dSetOption(param: H3DOptions; value: Single): Boolean; cdecl;
  external Horde3DLib;

{
  Function: h3dGetStat
    Gets a statistic value of the engine.

  Details:
    This function returns the value of the specified statistic. The reset flag makes it possible
    to reset the statistic value after reading.

  Parameters:
    param  - statistic parameter
    reset  - flag specifying whether statistic value should be reset

  Returns:
    current value of the specified statistic parameter
}
function h3dGetStat(param: H3DStats; reset: Boolean): Single; cdecl;
  external Horde3DLib;

{
  Function: h3dShowOverlay
    Shows an overlay on the screen.

  Details:
    This function displays an overlay with a specified material at a specified position on the screen.
    An overlay is a 2D image that can be used to render 2D GUI elements. The coordinate system
    used has its origin (0, 0) at the top-left corner of the screen and its maximum (1, 1) at
    the bottom-right corner. Texture coordinates are using a system where the coordinates (0, 0)
    correspond to the lower left corner of the image.
    Overlays can have different layers which describe the order in which they are drawn. Overlays with
    smaller layer numbers are drawn before overlays with higher layer numbers.
    Note that the overlays have to be removed manually using the function clearOverlays.

  Parameters:
    x_tl, y_tl, u_tl, v_tl  - position and texture coordinates of the top-left corner
    x_bl, y_bl, u_bl, v_bl  - position and texture coordinates of the bottom-left corner
    x_br, y_br, u_br, v_br  - position and texture coordinates of the bottom-right corner
    x_tr, y_tr, u_tr, v_tr  - position and texture coordinates of the top-right corner
    colR, colG, colB, colA  - color of the overlay that is set for the material's shader
    materialRes             - material resource used for rendering
    layer                   - layer index of the overlay (Values: from 0 to 7)

  Returns:
    nothing
}
procedure h3dShowOverlay(x_tl, y_tl, u_tl, v_tl, x_bl, y_bl, u_bl, v_bl, x_br,
  y_br, u_br, v_br, x_tr, y_tr, u_tr, v_tr, colR, colG, colB, colA: Single;
  materialRes: H3DRes; layer: Integer); cdecl; external Horde3DLib;

{
  Function: h3dClearOverlays
    Removes all overlays.

  Details:
    This function removes all overlays that were added usig showOverlay.

  Parameters:
    none

  Returns:
    nothing
}
procedure h3dClearOverlays; cdecl; external Horde3DLib;

{
  Group: General resource management functions
}

{
  Function: h3dGetResType
    Returns the type of a resource.

  Details:
    This function returns the type of a specified resource. If the resource handle is invalid,
    the function returns the resource type 'Unknown'.

  Parameters:
    res  - handle to the resource

  Returns:
    type of the resource
}
function h3dGetResType(res: H3DRes): H3DResTypes; cdecl; external Horde3DLib;

{
  Function: h3dGetResName
    Returns the name of a resource.

  Details:
    This function returns a pointer to the name of a specified resource. If the resource handle
    is invalid, the function returns an empty string.

    *Important Note: The pointer is const and allows only read access to the data. Do never try to modify the
    data of the pointer since that can corrupt the engine's internal states!*

  Parameters:
    res  - handle to the resource

  Returns:
    name of the resource or empty string in case of failure
}
function h3dGetResName(res: H3DRes): PAnsiChar; cdecl; external Horde3DLib;

{
  Function: h3dGetNextResource
    Returns the next resource of the specified type.

  Details:
    This function searches the next resource of the specified type and returns its handle.
    The search begins after the specified start handle. If a further resource of the queried type
    does not exist, a zero handle is returned. The function can be used to iterate over all
    resources of a given type by using as start the return value of the previous iteration step.
    The first iteration step should start at 0 and iteration can be ended when the function returns 0.

  Parameters:
    type   - type of resource to be searched (H3DResTypes::Undefined for all types)
    start  - resource handle after which the search begins (can be 0 for beginning of resource list)

  Returns:
    handle to the found resource or 0 if it does not exist
}
function h3dGetNextResource(type_: H3DResTypes; start: H3DRes): H3DRes; cdecl;
  external Horde3DLib;

{
  Function: h3dFindResource
    Finds a resource and returns its handle.

  Details:
    This function searches the resource of the specified type and name and returns its handle. If
    the resource is not available in the resource manager a zero handle is returned.

  Parameters:
    type  - type of the resource
    name  - name of the resource

  Returns:
    handle to the resource or 0 if not found
}
function h3dFindResource(type_: H3DResTypes; name: PAnsiChar): H3DRes; cdecl;
  external Horde3DLib;

{
  Function: h3dAddResource
    Adds a resource.

  Details:
    This function tries to add a resource of a specified type and name to the resource manager. If
    a resource of the same type and name is already existing, the handle to the existing resource is returned
    instead of creating a new one and the user reference count of the resource is increased.

    *Note: The name string may not contain a colon character (:)*

  Parameters:
    type   - type of the resource
    name   - name of the resource
    flags  - flags used for creating the resource

  Returns:
    handle to the resource to be added or 0 in case of failure
}
function h3dAddResource(type_: H3DResTypes; name: PAnsiChar;
  flags: Integer): H3DRes; cdecl; external Horde3DLib;

{
  Function: h3dCloneResource
    Duplicates a resource.

  Details:
    This function duplicates a specified resource. In the cloning process a new resource with the
    specified name is added to the resource manager and filled with the data of the specified source
    resource. If the specified name for the new resource is already in use, the function fails and
    returns 0. If the name string is empty, a unique name for the resource is generated automatically.

    *Note: The name string may not contain a colon character (:)*

  Parameters:
    sourceRes  - handle to resource to be cloned
    name       - name of new resource (can be empty for auto-naming)

  Returns:
    handle to the cloned resource or 0 in case of failure
}
function h3dCloneResource(sourceRes: H3DRes; name: PAnsiChar): H3DRes; cdecl;
  external Horde3DLib;

{
  Function: h3dRemoveResource
    Removes a resource.

  Details:
    This function decreases the user reference count of a specified resource. When the user reference
    count is zero and there are no internal references, the resource can be released and removed using
    the API fuction releaseUnusedResources.

  Parameters:
    res  - handle to the resource to be removed

  Returns:
    the number of references that the application is still holding after removal or -1 in case of an error
}
function h3dRemoveResource(res: H3DRes): Integer; cdecl; external Horde3DLib;

{
  Function: h3dIsResLoaded
    Checks if a resource is loaded.

  Details:
    This function checks if the specified resource has been successfully loaded.

  Parameters:
    res  - handle to the resource to be checked

  Returns:
    true if resource is loaded, otherwise or in case of failure false
}
function h3dIsResLoaded(res: H3DRes): Boolean; cdecl; external Horde3DLib;

{
  Function: h3dLoadResource
    Loads a resource.

  Details:
    This function loads data for a resource that was previously added to the resource manager.
    If data is a NULL-pointer the resource manager is told that the resource doesn't have any data
    (e.g. the corresponding file was not found). In this case, the resource remains in the unloaded state
    but is no more returned when querying unloaded resources. When the specified resource is already loaded,
    the function returns false.

    *Important Note: XML-data must be NULL-terminated*

  Parameters:
    res   - handle to the resource for which data will be loaded
    data  - pointer to the data to be loaded
    size  - size of the data block

  Returns:
    true in case of success, otherwise false
}
function h3dLoadResource(res: H3DRes; data: PAnsiChar; size: Integer): Boolean;
  cdecl; external Horde3DLib;

{
  Function: h3dUnloadResource
    Unloads a resource.

  Details:
    This function unloads a previously loaded resource and restores the default values
    it had before loading. The state is set back to unloaded which makes it possible to load
    the resource again.

  Parameters:
    res  - handle to resource to be unloaded

  Returns:
    nothing
}
procedure h3dUnloadResource(res: H3DRes); cdecl; external Horde3DLib;

{
  Function: h3dGetResElemCount
    Gets the number of elements in a resource.

  Details:
    This function returns how many elements of the specified element type a specified
    resource has.

  Parameters:
    res      - handle to the resource to be accessed
    elem     - element type

  Returns:
    number of elements
}
function h3dGetResElemCount(res: H3DRes; elem: H3DResourceParams): Integer;
  cdecl; external Horde3DLib;

{
  Function: h3dFindResElem
    Finds a resource element with the specified property value.

  Details:
    This function searches in a specified resource for the first element of the specified
    type that has the property with the specified name set to the specified search value.
    If such element is found, its index is returned, otherwise the function returns -1. All
    string comparisons done for the search are case-sensitive.

  Parameters:
    res      - handle to the resource to be accessed
    elem     - element type
    param    - parameter name
    value    - parameter value to be searched for

  Returns:
    index of element or -1 if element not found
}
function h3dFindResElem(res: H3DRes; elem, param: H3DResourceParams;
  value: PAnsiChar): Integer; cdecl; external Horde3DLib;

{
  Function: h3dGetResParamI
    Gets an integer property of a resource element.

  Details:
    This function returns a specified property of the specified resource element.
    The property must be of the type int.

  Parameters:
    res      - handle to the resource to be accessed
    elem     - element type
    elemIdx  - index of element
    param    - parameter to be accessed

  Returns:
    value of the parameter
}
function h3dGetResParamI(res: H3DRes; elem: H3DResourceParams; elemIdx: Integer;
  param: H3DResourceParams): Integer; cdecl; external Horde3DLib;

{
  Function: h3dSetResParamI
    Sets an integer property of a resource element.

  Details:
    This function sets a specified property of the specified resource element to the
    specified value. The property must be of the type int.

  Parameters:
    res      - handle to the resource to be modified
    elem     - element type
    elemIdx  - index of element
    param    - parameter to be modified
    value    - new value for the specified parameter

  Returns:
     nothing
}
procedure h3dSetResParamI(res: H3DRes; elem: H3DResourceParams;
  elemIdx: Integer; param: H3DResourceParams; value: Integer); cdecl;
  external Horde3DLib;

{
  Function: h3dGetResParamF
    Gets a float property of a resource element.

  Details:
    This function returns the specified component of the specified resource element property.
    The property must be of the type float. Float properties can have several indexed components,
    for example the x, y and z components of a vector.

  Parameters:
    res      - handle to the resource to be accessed
    elem     - element type
    elemIdx  - index of element
    param    - parameter to be accessed
    compIdx  - component of the parameter to be accessed

  Returns:
    value of the parameter
}
function h3dGetResParamF(res: H3DRes; elem: H3DResourceParams; elemIdx: Integer;
  param: H3DResourceParams; compIdx: Integer): Single; cdecl;
  external Horde3DLib;

{
  Function: h3dSetResParamF
    Sets a float property of a resource element.

  Details:
    This function sets the specified component of the specified resource element property to the
    specified value. The property must be of the type float.

  Parameters:
    res      - handle to the resource to be modified
    elem     - element type
    elemIdx  - index of element
    param    - parameter to be modified
    compIdx  - component of the parameter to be modified
    value    - new value for the specified parameter

  Returns:
    nothing
}
procedure h3dSetResParamF(res: H3DRes; elem: H3DResourceParams;
  elemIdx: Integer; param: H3DResourceParams; compIdx: Integer; value: Single);
  cdecl; external Horde3DLib;

{
  Function: h3dGetResParamStr
    Gets a string property of a resource element.

  Details:
    This function returns a specified property of the specified resource element.
    The property must be of the type string (const char * ).

    *Important Note: The pointer is const and allows only read access to the data. Do never try to modify the
    data of the pointer since that can corrupt the engine's internal states!*

  Parameters:
    res      - handle to the resource to be accessed
    elem     - element type
    elemIdx  - index of element
    param    - parameter to be accessed

  Returns:
    value of the property or empty string if no such property exists
}
function h3dGetResParamStr(res: H3DRes; elem: H3DResourceParams;
  elemIdx: Integer; param: H3DResourceParams): PAnsiChar; cdecl;
  external Horde3DLib;

{
  Function: h3dSetResParamStr
    Sets a string property of a resource element.

  Details:
    This function sets a specified property of the specified resource element to the
    specified value. The property must be of the type string (const char * ).

  Parameters:
    res      - handle to the resource to be modified
    elem     - element type
    elemIdx  - index of element
    param    - parameter to be modified
    value    - new value for the specified parameter

  Returns:
    nothing
}
procedure h3dSetResParamStr(res: H3DRes; elem: H3DResourceParams;
  elemIdx: Integer; param: H3DResourceParams; value: PAnsiChar); cdecl;
  external Horde3DLib;

{
  Function: h3dMapResStream
    Maps the stream of a resource element.

  Details:
    This function maps the specified stream of a specified resource element and returns a
    pointer to the stream data. The required access to the data can be specified with the read
    write parameters. If read is false, the pointer will usually not contain meaningful data.
    Not all resource streams can be mapped with both read and write access. If it is not
    possible to map the stream, the function will return a NULL pointer. A mapped stream should
    be unmapped again as soon as possible but always before subsequent API calls are made. It
    is only possible to map one stream per resource at a time.

  Parameters:
    res      - handle to the resource to be mapped
    elem     - element type
    elemIdx  - index of element
    stream   - stream to be mapped
    read     - flag indicating whether read access is required
    write    - flag indicating whether write access is required

  Returns:
    pointer to stream data or NULL if stream cannot be mapped
}
function h3dMapResStream(res: H3DRes; elem: H3DResourceParams; elemIdx: Integer;
  stream: H3DResourceParams; read, write: Boolean): Pointer; cdecl;
  external Horde3DLib;

{
  Function: h3dUnmapResStream
    Unmaps a previously mapped resource stream.

  Details:
    This function unmaps a resource stream that has been mapped before.

  Parameters:
    res  - handle to the resource to be unmapped

  Returns:
    nothing
}
procedure h3dUnmapResStream(res: H3DRes); cdecl; external Horde3DLib;

{
  Function: h3dQueryUnloadedResource
    Returns handle to an unloaded resource.

  Details:
    This function looks for a resource that is not yet loaded and returns its handle.
    If there are no unloaded resources or the zero based index specified is greater than the number
    of the currently unloaded resources, 0 is returned.

  Parameters:
    index  - index of unloaded resource within the internal list of unloaded resources (starting with 0)

  Returns:
    handle to an unloaded resource or 0
}
function h3dQueryUnloadedResource(index: Integer): H3DRes; cdecl;
  external Horde3DLib;

{
  Function: h3dReleaseUnusedResources
    Frees resources that are no longer used.

  Details:
    This function releases resources that are no longer used. Unused resources were either told
    to be released by the user calling removeResource or are no more referenced by any other
    engine objects.

  Parameters:
    none

  Returns:
    nothing
}
procedure h3dReleaseUnusedResources; cdecl; external Horde3DLib;

{
  Group: Specific resource management functions
}

{
  Function: h3dCreateTexture
    Creates a Texture resource.

  Details:
    This function tries to create and add a Texture resource with the specified name to the resource
    manager. If a Texture resource with the same name is already existing, the function fails. The
    texture is initialized with the specified dimensions and the resource is declared as loaded. This
    function is especially useful to create dynamic textures (e.g. for displaying videos) or output buffers
    for render-to-texture.

  *Note: The name string may not contain a colon character (:)*

  Parameters:
    name        - name of the resource
    width       - width of the texture image
    height      - height of the texture image
    fmt         - texture format (see stream formats)
    flags       - flags used for creating the resource

  Returns:
    handle to the created resource or 0 in case of failure
}
function h3dCreateTexture(name: PAnsiChar; width, height: Integer;
  fmt: H3DFormats; flags: Integer): H3DRes; cdecl; external Horde3DLib;

{
  Function: h3dSetShaderPreambles
    Sets preambles of all Shader resources.

  Details:
    This function defines a header that is inserted at the beginning of all shaders. The preamble
    is used when a shader is compiled, so changing it will not affect any shaders that are already
    compiled. The preamble is useful for setting platform-specific defines that can be employed for
    creating several shader code paths, e.g. for supporting different hardware capabilities.

  Parameters:
    vertPreamble  - preamble text of vertex shaders (default: empty string)
    fragPreamble  - preamble text of fragment shaders (default: empty string)

  Returns:
    nothing
}
procedure h3dSetShaderPreambles(vertPreamble, fragPreamble: PAnsiChar); cdecl;
  external Horde3DLib;

{
  Function: h3dSetMaterialUniform
    Sets a shader uniform of a Material resource.

  Details:
    This function sets the specified shader uniform of the specified material to the specified values.

  Parameters:
    materialRes  - handle to the Material resource to be accessed
    name         - name of the uniform as defined in Material resource
    a, b, c, d   - values of the four components

  Returns:
    true if uniform was found, otherwise false
}
function h3dSetMaterialUniform(materialRes: H3DRes; name: PAnsiChar;
  a, b, c, d: Single): Boolean; cdecl; external Horde3DLib;

{
  Function: h3dGetPipelineRenderTargetData
    Reads the pixel data of a pipeline render target buffer.

  Details:
    This function reads the pixels of the specified buffer of the specified render target from the specified
    pipeline resource and stores it in the specified float array. To calculate the size required for the array this
    function can be called with a NULL pointer for dataBuffer and pointers to variables where the width,
    height and number of (color) components (e.g. 4 for RGBA or 1 for depth) will be stored.
    The function is not intended to be used for real-time scene rendering but rather as a tool for debugging.
    For more information about the render buffers please refer to the Pipeline documentation.

  Parameters:
    pipelineRes  - handle to pipeline resource
    targetName   - unique name of render target to access
    bufIndex     - index of buffer to be accessed
    width        - pointer to variable where the width of the buffer will be stored (can be NULL)
    height       - pointer to variable where the height of the buffer will be stored (can be NULL)
    compCount    - pointer to variable where the number of components will be stored (can be NULL)
    dataBuffer   - pointer to float array where the pixel data will be stored (can be NULL)
    bufferSize   - size of dataBuffer array in bytes

  Returns:
    true if render target could be found, otherwise false
}
function h3dGetPipelineRenderTargetData(pipelineRes: H3DRes;
  targetName: PAnsiChar; bufIndex: Integer; width, height, compCount: PInteger;
  dataBuffer: PSingle; bufferSize: Integer): Boolean; cdecl;
  external Horde3DLib;

{
  Group: General scene graph functions
}

{
  Function: h3dGetNodeType
    Returns the type of a scene node.

  Details:
    This function returns the type of a specified scene node. If the node handle is invalid,
    the function returns the node type 'Unknown'.

  Parameters:
    node  - handle to the scene node

  Returns:
    type of the scene node
}
function h3dGetNodeType(node: H3DNode): H3DNodeTypes; cdecl;
  external Horde3DLib;

{
  Function: h3dGetNodeParent
    Returns the parent of a scene node.

  Details:
    This function returns the handle to the parent node of a specified scene node. If the specified
    node handle is invalid or the root node, 0 is returned.

  Parameters:
    node  - handle to the scene node

  Returns:
    handle to parent node or 0 in case of failure
}
function h3dGetNodeParent(node: H3DNode): H3DNode; cdecl; external Horde3DLib;

{
  Function: h3dSetNodeParent
    Relocates a node in the scene graph.

  Details:
    This function relocates a scene node. It detaches the node from its current parent and attaches
    it to the specified new parent node. If the attachment to the new parent is not possible, the
    function returns false. Relocation is not possible for the H3DRootNode.

  Parameters:
    node    - handle to the scene node to be relocated
    parent  - handle to the new parent node

  Returns:
    true if node could be relocated, otherwise false
}
function h3dSetNodeParent(node, parent: H3DNode): Boolean; cdecl;
  external Horde3DLib;

{
  Function: h3dGetNodeChild
    Returns the handle to a child node.

  Details:
    This function looks for the n-th (index) child node of a specified node and returns its handle. If the child
    doesn't exist, the function returns 0.

  Parameters:
    node   - handle to the parent node
    index  - index of the child node

  Returns:
    handle to the child node or 0 if child doesn't exist
}
function h3dGetNodeChild(node: H3DNode; index: Integer): H3DNode; cdecl;
  external Horde3DLib;

{
  Function: h3dAddNodes
    Adds nodes from a SceneGraph resource to the scene.

  Details:
    This function creates several new nodes as described in a SceneGraph resource and
    attaches them to a specified parent node. If an invalid scenegraph resource is specified
    or the scenegraph resource is unloaded, the function returns 0.

  Parameters:
    parent         - handle to parent node to which the root of the new nodes will be attached
    sceneGraphRes  - handle to loaded SceneGraph resource

  Returns:
    handle to the root of the created nodes or 0 in case of failure
}
function h3dAddNodes(parent: H3DNode; sceneGraphRes: H3DRes): H3DNode; cdecl;
  external Horde3DLib;

{
  Function: h3dRemoveNode
    Removes a node from the scene.

  Details:
    This function removes the specified node and all of it's children from the scene.

  Parameters:
    node  - handle to the node to be removed

  Returns:
    nothing
}
procedure h3dRemoveNode(node: H3DNode); cdecl; external Horde3DLib;

{
  Function: h3dSetNodeActivation
    Sets the activation (visibility) state of a node.

  Details:
    This function sets the activation state of the specified node to active or inactive. Inactive
    nodes with all their children are excluded from rendering.

  Parameters:
    node    - handle to the node to be modified
    active  - boolean value indicating whether node shall be active or inactive

  Returns:
    nothing
}
procedure h3dSetNodeActivation(node: H3DNode; active: Boolean); cdecl;
  external Horde3DLib;

{
  Function: h3dCheckNodeTransFlag
    Checks if a scene node has been transformed by the engine.

  Details:
    This function checks if a scene node has been transformed by the engine since the last
    time the transformation flag was reset. Therefore, it stores a flag that is set to true when a
    setTransformation function is called explicitely by the application or when the node transformation
    has been updated by the animation system. The function also makes it possible to reset the
    transformation flag.

  Parameters:
    node   - handle to the node to be accessed
    reset  - flag indicating whether transformation flag shall be reset

  Returns:
    true if node has been transformed, otherwise false
}
function h3dCheckNodeTransFlag(node: H3DNode; reset: Boolean): Boolean; cdecl;
  external Horde3DLib;

{
  Function: h3dGetNodeTransform
    Gets the relative transformation of a node.

  Details:
    This function gets the translation, rotation and scale of a specified scene node object. The
    coordinates are in local space and contain the transformation of the node relative to its parent.

  Parameters:
    node        - handle to the node which will be accessed
    tx, ty, tz  - pointers to variables where translation of the node will be stored (can be NULL)
    rx, ry, rz  - pointers to variables where rotation of the node in Euler angles
                  will be stored (can be NULL)
    sx, sy, sz  - pointers to variables where scale of the node will be stored (can be NULL)

  Returns:
    nothing
}
procedure h3dGetNodeTransform(node: H3DNode;
  tx, ty, tz, rx, ry, rz, sx, sy, sz: PSingle); cdecl; external Horde3DLib;

{
  Function: h3dSetNodeTransform
    Sets the relative transformation of a node.

  Details:
    This function sets the relative translation, rotation and scale of a specified scene node object.
    The coordinates are in local space and contain the transformation of the node relative to its parent.

  Parameters:
    node        - handle to the node which will be modified
    tx, ty, tz  - translation of the node
    rx, ry, rz  - rotation of the node in Euler angles
    sx, sy, sz  - scale of the node

  Returns:
    nothing
}
procedure h3dSetNodeTransform(node: H3DNode;
  tx, ty, tz, rx, ry, rz, sx, sy, sz: Single); cdecl; external Horde3DLib;

{
  Function: h3dGetNodeTransMats
    Returns the transformation matrices of a node.

  Details:
    This function stores a pointer to the relative and absolute transformation matrices
    of the specified node in the specified pointer varaibles.

  Parameters:
    node    - handle to the scene node to be accessed
    relMat  - pointer to a variable where the address of the relative transformation matrix will be stored
              (can be NULL if matrix is not required)
    absMat  - pointer to a variable where the address of the absolute transformation matrix will be stored
              (can be NULL if matrix is not required)


  Returns:
    nothing
}
procedure h3dGetNodeTransMats(node: H3DNode; relMat, absMat: PPSingle); cdecl;
  external Horde3DLib;

{
  Function: h3dSetNodeTransMat
    Sets the relative transformation matrix of a node.

  Details:
    This function sets the relative transformation matrix of the specified scene node. It is basically the
    same as setNodeTransform but takes directly a matrix instead of individual transformation parameters.

  Parameters:
    node    - handle to the node which will be modified
    mat4x4  - pointer to a 4x4 matrix in column major order

  Returns:
    nothing
}
procedure h3dSetNodeTransMat(node: H3DNode; mat4x5: PSingle); cdecl;
  external Horde3DLib;

{
  Function: h3dGetNodeParamI
    Gets a property of a scene node.

  Details:
    This function returns a specified property of the specified node.
    The property must be of the type int or H3DRes.

  Parameters:
    node   - handle to the node to be accessed
    param  - parameter to be accessed

  Returns:
    value of the parameter
}
function h3dGetNodeParamI(node: H3DNode; param: H3DNodeParams): Integer; cdecl;
  external Horde3DLib;

{
  Function: h3dSetNodeParamI
    Sets a property of a scene node.

  Details:
    This function sets a specified property of the specified node to a specified value.
    The property must be of the type int or H3DRes.

  Parameters:
    node   - handle to the node to be modified
    param  - parameter to be modified
    value  - new value for the specified parameter

  Returns:
    nothing
}
procedure h3dSetNodeParamI(node: H3DNode; param: H3DNodeParams; value: Integer);
  cdecl; external Horde3DLib;

{
  Function: h3dGetNodeParamF
    Gets a property of a scene node.

  Details:
    This function returns a specified property of the specified node. Float properties can have
    several indexed components, for example the x, y and z components of a vector.
    The property must be of the type float.

  Parameters:
    node     - handle to the node to be accessed
    param    - parameter to be accessed
    compIdx  - component of the parameter to be accessed

  Returns:
    value of the parameter
}
function h3dGetNodeParamF(node: H3DNode; param: H3DNodeParams;
  compIdx: Integer): Single; cdecl; external Horde3DLib;

{
  Function: h3dSetNodeParamF
    Sets a property of a scene node.

  Details:
    This function sets a specified property of the specified node to a specified value.
    The property must be of the type float.

  Parameters:
    node     - handle to the node to be modified
    param    - parameter to be modified
    compIdx  - component of the parameter to be modified
    value    - new value for the specified parameter

  Returns:
    nothing
}
procedure h3dSetNodeParamF(node: H3DNode; param: H3DNodeParams;
  compIdx: Integer; value: Single); cdecl; external Horde3DLib;

{
  Function: h3dGetNodeParamStr
    Gets a property of a scene node.

  Details:
    This function returns a specified property of the specified node.
    The property must be of the type string (const char * ).

    *Important Note: The pointer is const and allows only read access to the data. Do never try to modify the
    data of the pointer since that can corrupt the engine's internal states!*

  Parameters:
    node   - handle to the node to be accessed
    param  - parameter to be accessed

  Returns:
    value of the property or empty string if no such property exists
}
function h3dGetNodeParamStr(node: H3DNode; param: H3DNodeParams): PAnsiChar;
  cdecl; external Horde3DLib;

{
  Function: h3dSetNodeParamStr
    Sets a property of a scene node.

  Details:
    This function sets a specified property of the specified node to a specified value.
    The property must be of the type string (const char * ).

  Parameters:
    node   - handle to the node to be modified
    param  - parameter to be modified
    value  - new value for the specified parameter

  Returns:
    nothing
}
procedure h3dSetNodeParamStr(node: H3DNode; param: H3DNodeParams;
  value: PAnsiChar); cdecl; external Horde3DLib;

{
  Function: h3dGetNodeAABB
    Gets the bounding box of a scene node.

  Details:
    This function stores the world coordinates of the axis aligned bounding box of a specified node in
    the specified variables. The bounding box is represented using the minimum and maximum coordinates
    on all three axes.

  Parameters:
    node              - handle to the node which will be accessed
    minX, minY, minZ  - pointers to variables where minimum coordinates will be stored
    maxX, maxY, maxZ  - pointers to variables where maximum coordinates will be stored

  Returns:
    nothing
}
procedure h3dGetNodeAABB(node: H3DNode;
  minX, minY, minZ, maxX, maxY, maxZ: PSingle); cdecl; external Horde3DLib;

{
  Function: h3dFindNodes
    Finds scene nodes with the specified properties.

  Details:
    This function loops recursively over all children of startNode and adds them to an internal list
    of results if they match the specified name and type. The result list is cleared each time this
    function is called. The function returns the number of nodes which were found and added to the list.

  Parameters:
    startNode  - handle to the node where the search begins
    name       - name of nodes to be searched (empty string for all nodes)
    type       - type of nodes to be searched (H3DNodeTypes::Undefined for all types)

  Returns:
    number of search results
}
function h3dFindNodes(startNode: H3DNode; name: PAnsiChar;
  type_: H3DNodeTypes): Integer; cdecl; external Horde3DLib;

{
  Function: h3dGetNodeFindResult
    Gets a result from the findNodes query.

  Details:
    This function returns the n-th (index) result of a previous findNodes query. The result is the handle
    to a scene node with the poperties specified at the findNodes query. If the index doesn't exist in the
    result list the function returns 0.

  Parameters:
    index  - index of search result

  Returns:
    handle to scene node from findNodes query or 0 if result doesn't exist
}
function h3dGetNodeFindResult(index: Integer): H3DNode; cdecl;
  external Horde3DLib;

{
  Function: h3dCastRay
    Performs a recursive ray collision query.

  Details:
    This function checks recursively if the specified ray intersects the specified node or one of its children.
    The function finds intersections relative to the ray origin and returns the number of intersecting scene
    nodes. The ray is a line segment and is specified by a starting point (the origin) and a finite direction
    vector which also defines its length. Currently this function is limited to returning intersections with Meshes.
    For Meshes, the base LOD (LOD0) is always used for performing the ray-triangle intersection tests.

  Parameters:
    node        - node at which intersection check is beginning
    ox, oy, oz  - ray origin
    dx, dy, dz  - ray direction vector also specifying ray length
    numNearest  - maximum number of intersection points to be stored (0 for all)

  Returns:
    number of intersections
}
function h3dCastRay(node: H3DNode; ox, oy, oz, dx, dy, dz: Single;
  numNearest: Integer): Integer; cdecl; external Horde3DLib;

{
  Function: h3dGetCastRayResult
    Returns a result of a previous castRay query.

  Details:
    This functions is used to access the results of a previous castRay query. The index is used to access
    a specific result. The intersection data is copied to the specified variables.

  Parameters:
    index         - index of result to be accessed (range: 0 to number of results returned by castRay)
    node          - handle of intersected node
    distance      - distance from ray origin to intersection point
    intersection  - coordinates of intersection point (float[3] array)

  Returns:
    true if index was valid and data could be copied, otherwise false
}
function h3dGetCastRayResult(index: Integer; node: PH3DNode;
  distance, intersection: PSingle): Boolean; cdecl; external Horde3DLib;

{
  Function: h3dCheckNodeVisibility
    Checks if a node is visible.

  Details:
    This function checks if a specified node is visible from the perspective of a specified
    camera. The function always checks if the node is in the camera's frustum. If checkOcclusion
    is true, the function will take into account the occlusion culling information from the previous
    frame (if occlusion culling is disabled the flag is ignored). The flag calcLod determines whether the
    detail level for the node should be returned in case it is visible. The function returns -1 if the node
    is not visible, otherwise 0 (base LOD level) or the computed LOD level.

  Parameters:
    node            - node to be checked for visibility
    cameraNode      - camera node from which the visibility test is done
    checkOcclusion  - specifies if occlusion info from previous frame should be taken into account
    calcLod         - specifies if LOD level should be computed

  Returns:
    computed LOD level or -1 if node is not visible
}
function h3dCheckNodeVisibility(node, cameraNode: H3DNode;
  checkOcclusion, calcLod: Boolean): Integer; cdecl; external Horde3DLib;

{
  Group: Group-specific scene graph functions
}

{
  Function: h3dAddGroupNode
    Adds a Group node to the scene.

  Details:
    This function creates a new Group node and attaches it to the specified parent node.

  Parameters:
    parent  - handle to parent node to which the new node will be attached
    name    - name of the node

  Returns:
    handle to the created node or 0 in case of failure
}
function h3dAddGroupNode(parent: H3DNode; name: PAnsiChar): H3DNode; cdecl;
  external Horde3DLib;

{
  Group: Model-specific scene graph functions
}

{
  Function: h3dAddModelNode
    Adds a Model node to the scene.

  Details:
    This function creates a new Model node and attaches it to the specified parent node.

  Parameters:
    parent       - handle to parent node to which the new node will be attached
    name         - name of the node
    geometryRes  - Geometry resource used by Model node

  Returns:
    handle to the created node or 0 in case of failure
}
function h3dAddModelNode(parent: H3DNode; name: PAnsiChar;
  geometryRes: H3DRes): H3DNode; cdecl; external Horde3DLib;

{
  Function: h3dSetupModelAnimStage
    Configures an animation stage of a Model node.

  Details:
    This function is used to setup the specified animation stage/slot of the specified Model node.

    The function can be used for animation blending and mixing. There is a fixed number of stages
    (by default 16) on which different animations can be played. The start node determines the first node
    (Joint or Mesh) to which the animation is recursively applied. If the start node is an empty string, the
    animation affects all animatable nodes (Joints and Meshes) of the model. If a NULL-handle is used for
    animationRes, the stage is cleared and the currently set animation is removed.

    The layer determines the priority of the animation and how the weights are distributed. See
    h3dSetModelAnimParams for more information.

    A simple way to do animation mixing is using additive animations. If a stage is configured to be
    additive, the engine calculates the difference between the current frame and the first frame in the
    animation and adds this delta to the current transformation of the joints or meshes. Additive animations
    ignore the weight and layer settings. They are only applied by the engine if a non-additive animation
    is assigned to the model as well.

  Parameters:
    modelNode     - handle to the Model node to be modified
    stage         - index of the animation stage to be configured
    animationRes  - handle to Animation resource (can be 0)
    layer         - layer id
    startNode     - name of first node to which animation shall be applied (or empty string)
    additive      - flag indicating whether stage is additive

  Returns:
    nothing
}
procedure h3dSetupModelAnimStage(modelNode: H3DNode; stage: Integer;
  animationRes: H3DRes; layer: Integer; startNode: PAnsiChar;
  additive: Boolean); cdecl; external Horde3DLib;

{
  Function: h3dSetModelAnimParams
    Sets the animation stage parameters of a Model node.

  Details:
    This function sets the current animation time and weight for a specified stage of the
    specified model. The time corresponds to the frames of the animation and the animation is
    looped if the time is higher than the maximum number of frames in the Animation resource.
    The weight is used for animation blending and determines how much influence the stage has compared
    to the other active stages. All weights of stages that are on the same layer are normalized.
    Stages with a higher layer id are animated before stages with lower layers. The blend weight
    is distributed across the layers. If the weight sum of a layer is smaller than 1.0, the remaining
    weight is propagated to the next lower layer. So if a layer uses a weight of 100%, the lower layers
    will not get any weight and consequently not contribute to the overall animation.

  Parameters:
    modelNode  - handle to the Model node to be modified
    stage      - index of the animation stage to be modified
    time       - new animation time/frame
    weight     - new blend weight

  Returns:
    nothing
}
procedure h3dSetModelAnimParams(modelNode: H3DNode; stage: Integer;
  time, weight: Single); cdecl; external Horde3DLib;

{
  Function: h3dSetModelMorpher
    Sets the weight of a morph target.

  Details:
    This function sets the weight of a specified morph target. If the target parameter
    is an empty string the weight of all morph targets in the specified Model node is modified.
    If the specified morph target is not found the function returns false.

  Parameters:
    modelNode  - handle to the Model node to be modified
    target     - name of morph target
    weight     - new weight for morph target

  Returns:
    true if morph target was found, otherwise false
}
function h3dSetModelMorpher(modelNode: H3DNode; target: PAnsiChar;
  weight: Single): Boolean; cdecl; external Horde3DLib;

{
  Group: Mesh-specific scene graph functions
}

{
  Function: h3dAddMeshNode
    Adds a Mesh node to the scene.

  Details:
    This function creates a new Mesh node and attaches it to the specified parent node.

  Parameters:
    parent       - handle to parent node to which the new node will be attached
    name         - name of the node
    materialRes  - material resource used by Mesh node
    batchStart   - first triangle index of mesh in Geometry resource of parent Model node
    batchCount   - number of triangle indices used for drawing mesh
    vertRStart   - first vertex in Geometry resource of parent Model node
    vertREnd     - last vertex in Geometry resource of parent Model node

  Returns:
    handle to the created node or 0 in case of failure
}
function h3dAddMeshNode(parent: H3DNode; name: PAnsiChar; materialRes: H3DRes;
  batchStart, batchCount, vertRStart, vertREnd: Integer): H3DNode; cdecl;
  external Horde3DLib;

{
  Group: Joint-specific scene graph functions
}

{
  Function: h3dAddJointNode
    Adds a Joint node to the scene.

  Details:
    This function creates a new Joint node and attaches it to the specified parent node.

  Parameters:
    parent      - handle to parent node to which the new node will be attached
    name        - name of the node
    jointIndex  - index of joint in Geometry resource of parent Model node

  Returns:
    handle to the created node or 0 in case of failure
}
function h3dAddJointNode(parent: H3DNode; name: PAnsiChar;
  jointIndex: Integer): H3DNode; cdecl; external Horde3DLib;

{
  Group: Light-specific scene graph functions
}

{
  Function: h3dAddLightNode
    Adds a Light node to the scene.

  Details:
    This function creates a new Light node and attaches it to the specified parent node.
    The direction vector of the untransformed light node is pointing along the the negative
    z-axis. The specified material resource can define uniforms and projective textures.
    Furthermore it can contain a shader for doing lighting calculations if deferred shading
    is used. If no material is required the parameter can be zero. The context names
    define which shader contexts are used when rendering shadow maps or doing light calculations for
    forward rendering configurations.

  Parameters:
    parent           - handle to parent node to which the new node will be attached
    name             - name of the node
    materialRes      - material resource for light configuration or 0 if not used
    lightingContext  - name of the shader context used for doing light calculations
    shadowContext    - name of the shader context used for doing shadow map rendering

  Returns:
    handle to the created node or 0 in case of failure
}
function h3dAddLightNode(parent: H3DNode; name: PAnsiChar; materialRes: H3DRes;
  lightingContext, shadowContext: PAnsiChar): H3DNode; cdecl;
  external Horde3DLib;

{
  Group: Camera-specific scene graph functions
}

{
  Function: h3dAddCameraNode
    Adds a Camera node to the scene.

  Details:
    This function creates a new Camera node and attaches it to the specified parent node.

  Parameters:
    parent       - handle to parent node to which the new node will be attached
    name         - name of the node
    pipelineRes  - pipeline resource used for rendering

  Returns:
    handle to the created node or 0 in case of failure
}
function h3dAddCameraNode(parent: H3DNode; name: PAnsiChar;
  pipelineRes: H3DRes): H3DNode; cdecl; external Horde3DLib;

{
  Function: h3dSetupCameraView
    Sets the planes of a camera viewing frustum.

  Details:
    This function calculates the view frustum planes of the specified camera node using the specified view
    parameters.

  Parameters:
    cameraNode  - handle to the Camera node which will be modified
    fov         - field of view (FOV) angle
    aspect      - aspect ratio
    nearDist    - distance of near clipping plane
    farDist     - distance of far clipping plane

  Returns:
    nothing
}
procedure h3dSetupCameraView(cameraNode: H3DNode;
  fov, aspect, nearDist, farDist: Single); cdecl; external Horde3DLib;

{
  Function: h3dGetCameraProjMat
    Gets the camera projection matrix.

  Details:
    This function gets the camera projection matrix used for bringing the geometry to
    screen space and copies it to the specified array.

  Parameters:
    cameraNode  - handle to Camera node
    projMat     - pointer to float array with 16 elements

  Returns:
    nothing
}
procedure h3dGetCameraProjMat(cameraNode: H3DNode; projMat: PSingle); cdecl;
  external Horde3DLib;

{
  Group: Emitter-specific scene graph functions
}

{
  Function: h3dAddEmitterNode
    Adds a Emitter node to the scene.

  Details:
    This function creates a new Emitter node and attaches it to the specified parent node.

  Parameters:
    parent             - handle to parent node to which the new node will be attached
    name               - name of the node
    materialRes        - handle to Material resource used for rendering
    particleEffectRes  - handle to ParticleEffect resource used for configuring particle properties
    maxParticleCount   - maximal number of particles living at the same time
    respawnCount       - number of times a single particle is recreated after dying (-1 for infinite)


  Returns:
    handle to the created node or 0 in case of failure
}
function h3dAddEmitterNode(parent: H3DNode; name: PAnsiChar;
  materialRes, particleEffectRes: H3DRes;
  maxParticleCount, respawnCount: Integer): H3DNode; cdecl; external Horde3DLib;

{
  Function: h3dAdvanceEmitterTime
    Advances the time value of an Emitter node.

  Details:
    This function advances the simulation time of a particle system and continues the particle simulation
    with timeDelta being the time elapsed since the last call of this function. The specified
    node must be an Emitter node.

  Parameters:
    emitterNode  - handle to the Emitter node which will be modified
    timeDelta    - time delta in seconds

  Returns:
    nothing
}
procedure h3dAdvanceEmitterTime(emitterNode: H3DNode; timeDelta: Single); cdecl;
  external Horde3DLib;

{
  Function: h3dHasEmitterFinished
    Checks if an Emitter node is still alive.

  Details:
    This function checks if a particle system is still active and has living particles or
    will spawn new particles. The specified node must be an Emitter node. The function can be
    used to check when a not infinitely running emitter for an effect like an explosion can be
    removed from the scene.

  Parameters:
    emitterNode  - handle to the Emitter node which is checked

  Returns:
    true if Emitter will no more emit any particles, otherwise or in case of failure false
}
function h3dHasEmitterFinished(emitterNode: H3DNode): Boolean; cdecl;
  external Horde3DLib;

implementation

var
  OldMask: Byte;
  CtlWord: Word;

initialization
  CtlWord := Get8087CW;
  Set8087CW((CtlWord and $FFC0) or 63);
  OldMask := CtlWord and $3F;

finalization
  CtlWord := Get8087CW;
  Set8087CW((CtlWord and $FFC0) or OldMask);

end.
