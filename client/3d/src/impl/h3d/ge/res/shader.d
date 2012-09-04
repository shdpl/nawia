module impl.h3d.ge.res.shader;

private import
	ge.res.shader;

private import
	impl.h3d.ge.res.resource;

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
	alias H3DShaderRes Elements;
}