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

module impl.h3d.ge.res.material;

private import impl.h3d.ge.res.resource,
	ge.res.material;

import impl.h3d.h3d,
	ge.res.shader.shader,
	impl.h3d.ge.res.shader.shader,
	type.cuda.types;

class H3DMaterial : H3DResource, IMaterial {
	this(H3DRes id) {} //TODO:
	
	class Sampler /*: H3DResElement*/ {
//		override H3DElemType h3dElemType() @property {
//			return H3DMatRes.List.SamplerElem;
//		}
//		string opIndex(uint i) { //FIXME: samplers[i].texture by using H3DResElement
//			return h3dGetResParamI(id, H3DMatRes.List.SamplerElem, i, H3DMatRes.List.SampTexResI);
//		}
//		void opIndexAssign(uint i, H3DTexture tex) { //FIXME: samplers[i].texture by using H3DResElement
//			return h3dSetResParamI(id, H3DMatRes.List.SamplerElem, i, H3DMatRes.List.SampTexResI, tex);
//		}
//		string opIndex(uint i) { //FIXME: samplers[i].name by using H3DResElement
//			return h3dGetResParamStr(id, H3DMatRes.List.SamplerElem, i, H3DMatRes.List.SampNameStr);
//		}
	}
	
	class Uniform /*: H3DResElement*/ {
//		override H3DElemType h3dElemType() @property {
//			return H3DMatRes.List.UniformElem;
//		}
//		///retrieves shader *default* uniform value.
//		float opIndex(uint i, uint j) { //FIXME: uniforms[i].value[j] by using H3DResElement
//			return h3dGetResParamF(id, H3DMatRes.List.UniformElem, i, H3DMatRes.List.UnifValueF4, j);
//		}
//		///sets shader *default* uniform value.
//		float opIndexAssign(uint i, uint j, uint value) { //FIXME: uniforms[i].value[j] by using H3DResElement
//			return h3dSetResParamF(id, H3DMatRes.List.UniformElem, i, H3DMatRes.List.UnifValueF4, j, value);
//		}
//		string opIndex(uint i) { //FIXME: uniforms[i].name by using H3DResElement
//			return h3dGetResParamStr(id, H3DMatRes.List.UniformElem, i, H3DMatRes.List.UnifNameStr);
//		}
	}
	
	IMaterial linked() @property {
		return new H3DMaterial(getElemParam!int(Elements.MaterialElem, 0, Elements.MatLinkI));
	}
	
	void linked(H3DMaterial value) @property {
		setElemParam!int(value.id, Elements.MatLinkI, 0, Elements.MatLinkI);
	}
	
	IShader linked() @property {
		return new H3DShader(getElemParam!int(Elements.MaterialElem, 0, Elements.MatShaderI));
	}
	
	void linked(H3DShader value) @property {
		setElemParam!int(value.id, Elements.MaterialElem, 0, Elements.MatShaderI);
	}
	
	string name() @property {
		return getElemParam!string(Elements.MaterialElem, 0, Elements.MatClassStr);
	}
	
	void name(string value) @property {
		setElemParam!string(value, Elements.MaterialElem, 0, Elements.MatClassStr);
	}
	
	
	private:
	alias H3DMatRes.List Elements;
}
