[[FX]]

// Samplers
sampler albedoMap = sampler_state
{
	Filter = Bilinear;
	MaxAnisotropy = 1;
};

// Contexts
/*context SHADOWMAP
{
	VertexShader = compile GLSL VS_SHADOWMAP;
	PixelShader = compile GLSL FS_SHADOWMAP;
}*/

context TRANSLUCENT
{
	VertexShader = compile GLSL VS_TRANSLUCENT;
	PixelShader = compile GLSL FS_TRANSLUCENT;
	
	ZWriteEnable = false;
	BlendMode = AddBlended;
}


[[VS_SHADOWMAP]]
// =================================================================================================

#include "shaders/utilityLib/vertParticle.glsl"

uniform vec4 lightPos;
varying float dist;

void main(void)
{
	vec4 vsPos = calcParticleViewPos();
	vec4 pos = gl_ModelViewMatrixInverse * vsPos;
	dist = length( lightPos.xyz - pos.xyz ) / lightPos.w;
	
	gl_Position = gl_ProjectionMatrix * vsPos;
}
				
				
[[FS_SHADOWMAP]]
// =================================================================================================

uniform float shadowBias;
varying float dist;

void main( void )
{
	gl_FragDepth = dist + shadowBias;
}


[[VS_TRANSLUCENT]]
// =================================================================================================

#include "shaders/utilityLib/vertParticle.glsl"

varying vec4 color;
varying vec2 texCoords;
attribute vec2 texCoords0;

void main(void)
{
	color = getParticleColor();
	texCoords = vec2( texCoords0.s, -texCoords0.t );
	gl_Position = gl_ProjectionMatrix * calcParticleViewPos();
}


[[FS_TRANSLUCENT]]
// =================================================================================================

uniform sampler2D albedoMap;
varying vec4 color;
varying vec2 texCoords;

void main( void )
{
	vec4 albedo = texture2D( albedoMap, texCoords );
	
	gl_FragColor = albedo * color;
}