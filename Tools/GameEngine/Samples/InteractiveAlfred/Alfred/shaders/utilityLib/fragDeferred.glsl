// *************************************************************************************************
// Horde3D Shader Utility Library
// --------------------------------------
//		- Deferred shading functions -
//
// Copyright (C) 2006-2007 Nicolas Schulz
//
// You may use the following code in projects based on the Horde3D graphics engine.
//
// *************************************************************************************************

#extension GL_ARB_draw_buffers : enable

uniform 	sampler2D buf0;
uniform 	sampler2D buf1;
uniform 	sampler2D buf2;


float getMatID( const vec2 coord ) { return texture2D( buf0, coord ).a; }
vec3 getPos( const vec2 coord ) { return texture2D( buf0, coord ).rgb; }
vec3 getNormal( const vec2 coord ) { return texture2D( buf1, coord ).rgb; }
vec3 getAlbedo( const vec2 coord ) { return texture2D( buf2, coord ).rgb; }
float getSpecMask( const vec2 coord ) { return texture2D( buf2, coord ).a; }


void setMatID( const float id ) { gl_FragData[0].a = id; }
void setPos( const vec3 pos ) { gl_FragData[0].rgb = pos; }
void setNormal( const vec3 normal ) { gl_FragData[1].rgb = normal; }
void setAlbedo( const vec3 albedo ) { gl_FragData[2].rgb = albedo; }
void setSpecMask( const float alpha ) { gl_FragData[2].a = alpha; }