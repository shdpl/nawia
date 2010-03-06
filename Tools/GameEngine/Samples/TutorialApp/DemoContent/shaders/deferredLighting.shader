[[FX]]

// Samplers
sampler2D depthBuf = sampler_state
{
	Address = Clamp;
};

sampler2D buf0 = sampler_state
{
	Address = Clamp;
};

sampler2D buf1 = sampler_state
{
	Address = Clamp;
};

sampler2D buf2 = sampler_state
{
	Address = Clamp;
};

samplerCube ambientMap = sampler_state
{
	Address = Clamp;
	Filter = Bilinear;
	MaxAnisotropy = 1;
};

// Contexts
context AMBIENT
{
	VertexShader = compile GLSL VS_FSQUAD;
	PixelShader = compile GLSL FS_AMBIENT;
	
	ZWriteEnable = false;
	BlendMode = Replace;
}

context LIGHTING
{
	VertexShader = compile GLSL VS_VOLUME;
	PixelShader = compile GLSL FS_LIGHTING;
	
	ZWriteEnable = false;
	BlendMode = Add;
}

context COPY_DEPTH
{
	VertexShader = compile GLSL VS_FSQUAD;
	PixelShader = compile GLSL FS_COPY_DEPTH;
}


[[VS_FSQUAD]]

attribute vec3 vertPos;
varying vec2 texCoords;
				
void main( void )
{
	texCoords = vertPos.xy; 
	gl_Position = gl_ProjectionMatrix * vec4( vertPos, 1 );
}


[[VS_VOLUME]]

attribute vec3 vertPos;
varying vec2 fragCoord;
				
void main( void )
{
	gl_Position = gl_ProjectionMatrix * vec4( vertPos, 1 );
	fragCoord = gl_Position.xy * 0.5 + 0.5;
}


[[FS_AMBIENT]]

#include "shaders/utilityLib/fragDeferredRead.glsl"

uniform samplerCube ambientMap;
varying vec2 texCoords;

void main( void )
{
	if( getMatID( texCoords ) == 0.0 )	// Background
	{
		gl_FragColor.rgb = vec3( 0, 0, 0 );
	}
	else if( getMatID( texCoords ) == 2.0 )	// Sky
	{
		gl_FragColor.rgb = getAlbedo( texCoords );
	}
	else
	{
		gl_FragColor.rgb = getAlbedo( texCoords ) * textureCube( ambientMap, getNormal( texCoords ) ).rgb;
	}
}


[[FS_LIGHTING]]

#include "shaders/utilityLib/fragLighting.glsl"
#include "shaders/utilityLib/fragDeferredRead.glsl"

varying vec2 fragCoord;

void main( void )
{
	if( getMatID( fragCoord ) == 1.0 )	// Standard phong material
	{
		float vsPos = (gl_ModelViewMatrix * vec4( getPos( fragCoord ), 1.0 )).z;
		
		gl_FragColor.rgb =
			calcPhongSpotLight( getPos( fragCoord ), getNormal( fragCoord ),
								getAlbedo( fragCoord ), getSpecMask( fragCoord ), 16.0, -vsPos, 0.3 );
	}
	else discard;
}


[[FS_COPY_DEPTH]]

uniform sampler2D depthBuf;
varying vec2 texCoords;

void main( void )
{
	gl_FragDepth = texture2D( depthBuf, texCoords ).r;
}
