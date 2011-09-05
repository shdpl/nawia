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

class Shader : Resource, IShader {
	_Contexts contexts;
	_Samplers samplers;
	_Uniforms uniforms;
	
	this(string name) {
		super(name);
		init();
	}
	this(H3DRes id) {
		super(id);
		init();
	}
	
	override ResourceType type() @property {
		return ResourceType.Shader;
	}
	

	private:
	void init() {
		contexts = new _Contexts;
		samplers = new _Samplers;
		uniforms = new _Uniforms;
	}
	
	public:
	class _Contexts {
		class _Context {
			private uint id;
			this(uint id) {
				this.id = id;
			}
			
			string name() @property {
				return getElemParam!string(Elements.ContextElem, id, Elements.ContNameStr);
			}
		}
		
		uint length() @property {
			return elementCount(Elements.ContextElem);
		}
		
		_Context opIndex(uint i) {
			return new _Context(i);
		}
	}
	
	class _Samplers {
		class _Sampler {
			private uint id;
			this(uint id) {
				this.id = id;
			}
			
			string name() @property {
				return getElemParam!string(Elements.SamplerElem, id, Elements.SampNameStr);
			}
		}
		
		uint length() @property {
			return elementCount(Elements.SamplerElem);
		}
		
		_Sampler opIndex(uint i) {
			return new _Sampler(i);
		}
	}
	
	class _Uniforms {
		uint length() @property {
			return elementCount(Elements.UniformElem);
		}
		_Uniform opIndex(uint i) {
			return new _Uniform(i);
		}
		
		class _Uniform {
			private uint id;
			this(uint id) {
				this.id = id;
			}
			
			string name() @property {
				return getElemParam!string(Elements.UniformElem, id, Elements.UnifNameStr);
			}
			
			/// Amount of uniform components
			uint length() @property {
				return getElemParam!int(Elements.UniformElem, id, Elements.UnifSizeI);
			}

			_UniformComponent opIndex(uint i) {
				return new _UniformComponent(i);
			}
			
			class _UniformComponent {
				private uint id;
				this(uint id) {
					this.id = id;
				}
				@property {
					///gets shader *default* uniform value.
					float value() @property {
						return getElemParam!float(Elements.UniformElem, id, Elements.UnifDefValueF4);
					}
					///sets shader *default* uniform value.
					void value(float value) @property {
						return setElemParam!float(value, Elements.UniformElem, id, Elements.UnifDefValueF4);
					}
				}
			}
		}
	}
	
	private:
	alias H3DShaderRes.List Elements;
}
