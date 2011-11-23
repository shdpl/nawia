module impl.h3d.ge.res.material;

private import
	ge.res.material,
	ex.ge.res.element.missing;

private import
	impl.h3d.ge.res.resource,
	impl.h3d.ge.res.texture,
	impl.h3d.ge.res.shader;

class Material : Resource, IMaterial {
	public:
	_Samplers samplers;
	_Material materials;
	_Uniforms uniforms;
	
	public:
	this(string name) {
		super(name);	
	}
	this(H3DRes id) {
		super(id);	
	}
	
	override ResourceType type() @property {
		return ResourceType.Material;
	}
	

	uint length() @property {
		return elementCount(Elements.MaterialElem);
	}
		
	_Material opIndex(uint i) {
		return new _Material(i);
	}	
	
	private:
	class _Samplers {
		class _Sampler {
			private uint id;
			this(uint id) {
				this.id = id;
			}
			
			@property {
				Texture texture() {
					return new Texture(getElemParam!int(
							Elements.SamplerElem, id, Elements.SampTexResI));
				}
				void texture(Texture value) {
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
		
		_Sampler opIndex(uint i) {
			return new _Sampler(i);
		}
	}
	
	class _Uniforms {
		Material parent;
		public:
		this(Material mat) {this.parent = mat;}
		uint length() @property {
			return elementCount(Elements.UniformElem);
		}
		_Uniform opIndex(uint i) {
			return new _Uniform(i);
		}
		void opIndexAssign(float[4] value, string name) {
			enforceEx!ExResElementMissing(h3dSetMaterialUniform(
					this.parent.id, name, value[0], value[1], value[2], value[3]),
				text(name));
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
				return 4;
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
	
	class _Material {
		private uint id;
		this(uint id) {
			this.id = id;
		}
		
		@property {
			Material linkedMaterial() {
				return new Material(getElemParam!int(
						Elements.MaterialElem, id, Elements.MatLinkI));
			}
			void linkedMaterial(Material value) {
				setElemParam!int(value.id,
					Elements.MaterialElem, id, Elements.MatLinkI);
			}
		}
		@property {
			Shader shader() @property {
				return new Shader(getElemParam!int(
					Elements.MaterialElem, id, Elements.MatShaderI));
			}
			void shader(Shader value) @property {
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