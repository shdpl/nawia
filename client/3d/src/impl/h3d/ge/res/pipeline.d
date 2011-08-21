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
	impl.h3d.ge.res.resource;

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
	//float2[2] size() @property { return SmallVec!(float,2)[2LU] = 0;}
	//void size(float2[2]) @property {}
	
	this(string name) {
		super(name);	
	}
	
	BufferPixel getRenderTarget(string name, uint bufId) {
		//h3dGetRenderTargetData
		return BufferPixel();
	}
	
	private:
	override ResourceType type() @property {
		return ResourceType.Material;
	}
	
	private:
	alias H3DPipeRes.List Elements;
	
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
		
	}
	
	class Stages {
		uint count() @property {
			return h3dGetResElemCount(id, Elements.StageElem);
		}
		
		Stage opIndex(uint i) {
			return new Stage(i);
		}
	}
}
