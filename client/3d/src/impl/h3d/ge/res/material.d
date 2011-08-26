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

private import impl.h3d.h3d,
	ge.res.shader.shader,
	impl.h3d.ge.res.shader.shader,
	type.cuda.types,
	ex.ge.res.element.missing;
	
public import impl.h3d.ge.res.texture;	

class H3DMaterial : H3DResource, IMaterial {
	
	public:
	this(string name) {
		super(name);	
	}
	this(int id) {
		super(id);	
	}
	
	override ResourceType type() @property {
		return ResourceType.Material;
	}
	

	uint length() @property {
		return elementCount(Elements.MaterialElem);
	}
		
	Material_ opIndex(uint i) {
		return new Material_(i);
	}	
	
	public:
	class Samplers {
		class Sampler {
			private uint id;
			this(uint id) {
				this.id = id;
			}
			
			@property {
				H3DTexture texture() {
					return new H3DTexture(getElemParam!int(
							Elements.SamplerElem, id, Elements.SampTexResI));
				}
				void texture(H3DTexture value) {
					setElemParam!int(value.id, Elements.SamplerElem,
						id, Elements.SampTexResI);
				}
			}
			@property {
				string name() @property {
					return getElemParam!string(
						Elements.MaterialElem, id, Elements.SampNameStr);
				}
			}
		}
		
		uint length() @property {
			return elementCount(Elements.SamplerElem);
		}
		
		Sampler opIndex(uint i) {
			return new Sampler(i);
		}
	}
	
	class Uniforms {
		H3DMaterial parent;
		public:
		this(H3DMaterial mat) {this.parent = mat;}
		uint length() @property {
			return elementCount(Elements.UniformElem);
		}
		Uniform opIndex(uint i) {
			return new Uniform(i);
		}
		void opIndexAssign(float[4] value, string name) {
			enforceEx!ExResElementMissing(h3dSetMaterialUniform(
					this.parent.id, name, value[0], value[1], value[2], value[3]),
				text(name));
		}
		
		class Uniform {
			private uint id;
			this(uint id) {
				this.id = id;
			}
			
			string name() @property {
				return getElemParam!string(Elements.UniformElem, id, Elements.UnifNameStr);
			}
			
			/// Amount of uniform components
			uint length() @property {
				return 4;
			}

			UniformComponent opIndex(uint i) {
				return new UniformComponent(i);
			}
			
			class UniformComponent {
				private uint id;
				this(uint id) {
					this.id = id;
				}
				@property {
					///gets shader *default* uniform value.
					float value() @property {
						return getElemParam!float(Elements.UniformElem, id, Elements.UnifValueF4);
					}
					///sets shader *default* uniform value.
					void value(float value) @property {
						return setElemParam!float(value, Elements.UniformElem, id, Elements.UnifValueF4);
					}
				}
			}
		}
	}
	
	class Material_ {
		private uint id;
		this(uint id) {
			this.id = id;
		}
		
		@property {
			H3DMaterial linkedMaterial() {
				return new H3DMaterial(getElemParam!int(
						Elements.MaterialElem, id, Elements.MatLinkI));
			}
			void linkedMaterial(H3DMaterial value) {
				setElemParam!int(value.id,
					Elements.MaterialElem, id, Elements.MatLinkI);
			}
		}
		@property {
			H3DShader shader() @property {
				return new H3DShader(getElemParam!int(
					Elements.MaterialElem, id, Elements.MatShaderI));
			}
			void shader(H3DShader value) @property {
				setElemParam!int(value.id,
					Elements.MaterialElem, id, Elements.MatShaderI);
			}
		}
		@property {
			string className() @property {
				return getElemParam!string(
					Elements.MaterialElem, id, Elements.MatClassStr);
			}
			void className(string value) @property {
				setElemParam!string(value,
					Elements.MaterialElem, id, Elements.MatClassStr);
			}
		}
	}
	
	
	private:
	alias H3DMatRes.List Elements;
}
