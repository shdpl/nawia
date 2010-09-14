// *************************************************************************************************
// Horde3D Shader Utility Library
// --------------------------------------
//		- Lighting functions -
//
// Copyright (C) 2006-2011 Nicolas Schulz
//
// You may use the following code in projects based on the Horde3D graphics engine.
//
// *************************************************************************************************

uniform 	vec3 viewerPos;
uniform 	vec4 lightPos;
uniform 	vec4 lightDir;
uniform 	vec3 lightColor;
uniform 	sampler2DShadow shadowMap;
uniform 	vec4 shadowSplitDists;
uniform 	mat4 shadowMats[4];
uniform 	float shadowMapSize;


float PCF( const vec4 projShadow )
{
	// 5-tap PCF with a 30° rotated grid
	
	float offset = 1.0 / shadowMapSize;
	
	vec4 shadow = shadow2D( shadowMap, projShadow.xyz );
	shadow += shadow2D( shadowMap, projShadow.xyz + vec3( -0.866 * offset,  0.5 * offset, 0.0 ) );
	shadow += shadow2D( shadowMap, projShadow.xyz + vec3( -0.866 * offset, -0.5 * offset, 0.0 ) );
	shadow += shadow2D( shadowMap, projShadow.xyz + vec3(  0.866 * offset, -0.5 * offset, 0.0 ) );
	shadow += shadow2D( shadowMap, projShadow.xyz + vec3(  0.866 * offset,  0.5 * offset, 0.0 ) );
	
	return shadow.r / 5.0;
}


vec3 calcPhongSpotLight( const vec3 pos, const vec3 normal, const vec3 albedo, const float specMask,
						 const float specExp, const float viewDist, const float ambientIntensity )
{
	vec3 light = lightPos.xyz - pos;
	float lightLen = length( light );
	light /= lightLen;
	
	// Distance attenuation
	float lightDepth = lightLen / lightPos.w;
	float att = max( 1.0 - lightDepth * lightDepth, 0.0 );
	
	// Spotlight falloff
	float angle = dot( lightDir.xyz, -light );
	att *= clamp( (angle - lightDir.w) / 0.2, 0.0, 1.0 );
		
	// Lambert diffuse contribution
	float diffuse = max( dot( normal, light ), 0.0 );
	
	// Diffuse color
	vec3 col = albedo * lightColor * diffuse;
	
	// Shadow
	if( diffuse * att > 0.0 )
	{	
		float shadowTerm = 1.0;
		if( shadowMapSize > 4.0 )  // No shadow mapping if default shadow map is bound
		{
			vec4 projShadow = shadowMats[3] * vec4( pos, 1.0 );
			if( viewDist < shadowSplitDists.x ) projShadow = shadowMats[0] * vec4( pos, 1.0 );
			else if( viewDist < shadowSplitDists.y ) projShadow = shadowMats[1] * vec4( pos, 1.0 );
			else if( viewDist < shadowSplitDists.z ) projShadow = shadowMats[2] * vec4( pos, 1.0 );
			
			projShadow.z = lightDepth;
			projShadow.xy /= projShadow.w;
			
			shadowTerm = PCF( projShadow );
		}
		
		// Specular contribution
		vec3 eye = normalize( viewerPos - pos );
		vec3 refl = reflect( -light, normal );
		float spec = pow( clamp( dot( refl, eye ), 0.0, 1.0 ), specExp ) * specMask;
		col += lightColor * spec * shadowTerm;
		
		col *= max( shadowTerm, ambientIntensity );
	}
	
	return col * att;
}