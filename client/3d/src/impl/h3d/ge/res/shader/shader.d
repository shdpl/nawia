/*
 * Copyright (C) 2010 Mariusz 'shd' Gliwiński.
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

module impl.h3d.ge.res.shader.shader;

import type.cuda.types;

private import impl.h3d.ge.res.resource,
	ge.res.shader.shader,
	impl.h3d.h3d;

class H3DShader : H3DResource, IShader {
	Context contexts;
	Sampler samplers;
	Uniform uniforms;
	
	this(H3DRes id) {} //TODO:
	
	public:
	void preamble(string code) {} //FIXME:
	
	/* TODO: investigate */
	class Context /*: H3DResElement*/ {
//		override H3DElemType h3dElemType() @property {
//			return H3DShaderRes.List.ContextElem;
//		}
//		string opIndexAssign(uint i) { //FIXME: contexts[i].name by using H3DResElement
//			return h3dGetResParamStr(id, H3DShaderRes.List.ContextElem, i, H3DShaderRes.List.ContNameStr);
//		}
	}
	
	class Sampler /*: H3DResElement*/ {
//		override H3DElemType h3dElemType() @property {
//			return H3DShaderRes.List.SamplerElem;
//		}
//		string opIndexAssign(uint i) { //FIXME: uniforms[i].name by using H3DResElement
//			return h3dGetResParamStr(id, H3DShaderRes.List.SamplerElem, i, H3DShaderRes.List.SampNameStr);
//		}
	}
	
	class Uniform /*: H3DResElement*/ {
//		override H3DElemType h3dElemType() @property {
//			return H3DShaderRes.List.UniformElem;
//		}
//		int opIndex(uint i) { //FIXME: uniforms[i].size by using H3DResElement
//			return h3dGetResParamI(id, H3DShaderRes.List.UniformElem, i, H3DShaderRes.List.UnifSizeI);
//		}
//		///retrieves shader *default* uniform value.
//		float opIndex(uint i, uint j) { //FIXME: uniforms[i].value[j] by using H3DResElement
//			return h3dGetResParamF(id, H3DShaderRes.List.UniformElem, i, H3DShaderRes.List.UnifDefValueF4, j);
//		}
//		///sets shader *default* uniform value.
//		float opIndexAssign(uint i, uint j, uint value) { //FIXME: uniforms[i].value[j] by using H3DResElement
//			return h3dSetResParamF(id, H3DShaderRes.List.UniformElem, i, H3DShaderRes.List.UnifDefValueF4, j, value);
//		}
//		string opIndexAssign(uint i) { //FIXME: uniforms[i].name by using H3DResElement
//			return h3dGetResParamStr(id, H3DShaderRes.List.UniformElem, i, H3DShaderRes.List.UnifNameStr);
//		}
	}
}
