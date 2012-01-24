module impl.h3d.ge.res.pipeline;

private import
	ge.res.pipeline,
	gl3n.linalg,
	type.buffer.pixel,
	ex.ge.res.pipeline.buffer;

private import
	impl.h3d.ge.res.resource;

class Pipeline : Resource, IPipeline {
	private:
	H3DNodeTypes _handle;
	public:
	_Stages stages;
	
	public:
	/// Size of the render targets
	void size(vec2i size) @property {
	//TODO: replace sizewith proper type
		h3dResizePipelineBuffers(this.id, size.x, size.y);
	}
	
	this(string name) {
		super(name);
		init();
	}
	this(H3DRes id) {
		super(id);
		init();
	}
	
	/// Slow
	BufferPixel dumpBuffer(string name, uint bufId) {
		int x, y;
		BufferPixel ret;	//TODO: components
		enforceEx!ExResPipelineBuffer(
			h3dGetRenderTargetData(this.id, name, bufId, &x, &y,
				null, null, 0),
			text(this.id, name, bufId));
		ret = BufferPixel(x,y);
		enforceEx!ExResPipelineBuffer(
			h3dGetRenderTargetData(this.id, name, bufId, &x, &y,
				null, &ret.buffer, ret.memsize),
			text(this.id, name, bufId, x, y));
		return ret;
	}
	
	override ResourceType type() @property {
		return ResourceType.Pipeline;
	}
	
	private:
	void init() {
		stages = new _Stages();
	}
	
	private:
	alias H3DPipeRes.List Elements;
	
	class _Stages {
		uint count() @property {
			return h3dGetResElemCount(id, Elements.StageElem);
		}
		
		_Stage opIndex(uint i) {
			return new _Stage(i);
		}
		class _Stage {
			private uint _id;
			
			this(uint i) {
				_id = i;
			}
			
			@property {
				void active(bool value) {
					setElemParam!int(value, Elements.StageElem, _id,
						Elements.StageActivationI);
				}
				
				bool active() {
					return 1 == getElemParam!int(Elements.StageElem, _id,
						Elements.StageActivationI);
				}
			}
			string name() @property {
				return getElemParam!string(Elements.StageElem, _id,
					Elements.StageNameStr);
			}
		}
	}
}