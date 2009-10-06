[[FX]]

// Samplers
sampler albedoMap;

// Contexts
context OVERLAY
{
	VertexShader = compile GLSL VS_OVERLAY;
	PixelShader = compile GLSL FS_OVERLAY;
	
	ZWriteEnable = false;
	BlendMode = Blend;
}

[[VS_OVERLAY]]

varying vec2 texCoords;

void main( void )
{
	texCoords = vec2( gl_MultiTexCoord0.s, -gl_MultiTexCoord0.t ); 
	gl_Position = gl_ProjectionMatrix * gl_Vertex;
}


[[FS_OVERLAY]]

uniform vec4 olayColor;
uniform sampler2D albedoMap;
varying vec2 texCoords;

void main( void )
{
	vec4 albedo = texture2D( albedoMap, texCoords );
	
	gl_FragColor = albedo * olayColor;
}