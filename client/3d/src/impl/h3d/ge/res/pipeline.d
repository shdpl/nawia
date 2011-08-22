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

module impl.h3d.ge.res.pipeline;

private import ge.res.pipeline,
	impl.h3d.ge.res.resource,
	ex.ge.res.pipeline.buffer;

import impl.h3d.h3d,
	type.cuda.types,
	type.buffer.pixel;

class H3DPipeline : H3DResource, IPipeline {
	private:
	H3DNodeTypes _handle;
	public:
	Stages stages;
	
	public:
	/// Size of the render targets
	void size(int2 size) @property {
	//TODO: replace sizewith proper type
		h3dResizePipelineBuffers(this.id, size[0], size[1]);
	}
	
	this(string name) {
		super(name);	
	}
	
	/// Slow
	BufferPixel dumpBuffer(string name, uint bufId) {
		int x, y;
		BufferPixel ret;	//TODO: components
		enforceEx!ExResPipelineBuffer(
			h3dGetRenderTargetData(this.id, name, bufId, &x, &y,
				null, null, 0),
			text(this.id, name, bufId));
		enforceEx!ExResPipelineBuffer(
			h3dGetRenderTargetData(this.id, name, bufId, &ret.size.x, &ret.size.y,
				null, &ret.buffer, ret.memsize),
			text(this.id, name, bufId, x, y));
		return ret;
	}
	
	
	
	private:
	override ResourceType type() @property {
		return ResourceType.Material;
	}
	
	private:
	alias H3DPipeRes.List Elements;
	
	class Stages {
		uint count() @property {
			return h3dGetResElemCount(id, Elements.StageElem);
		}
		
		Stage opIndex(uint i) {
			return new Stage(i);
		}
		class Stage {
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
