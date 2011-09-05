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

module impl.h3d.ge.res.texture;

private import impl.h3d.ge.res.resource,
	ge.res.texture,
	ex.ge.res.add;

public import impl.h3d.h3d,
	type.cuda.types,
	type.buffer.pixel;

class Texture : Resource, ITexture {
	public:
	_Images images;
	
	private:
	alias H3DTexRes.List Elements;
	immutable ELEM = Elements.TextureElem;
	
	
	public:
	this(string name) {
		super(name);	
		this.init;
	}
	this(H3DRes id) {
		super(id);
		this.init;
	}
	this(string name, int2 size, TextureFormat fmt) {
		//FIXME: size as specialized type
		id = h3dCreateTexture(name, size.x, size.y, fmt, 0);
		enforceEx!ExResAdd(id, text(name, size, fmt));
	}
	
	override ResourceType type() @property {
		return ResourceType.Texture;
	}
	
	override BufferPixel data() @property {
		return BufferPixel();
	}
	
	override void data(BufferPixel) @property {
		
	}
	
	override uint slicesNo() @property {
		return getElemParam!int(ELEM, 0, Elements.TexSliceCountI);
	}
	
	@property {
		override TextureFormat format() {
			return cast(TextureFormat)
				getElemParam!int(ELEM, 0, Elements.TexFormatI);
		}
		override void format(TextureFormat value) {
			setElemParam!int(value, ELEM, 0, Elements.TexFormatI);
		}
	}
	
	private:
	void init() {
		this.images = new _Images;
	}
	
	private:
	class _Images {
		uint count() @property {
			return h3dGetResElemCount(id, Elements.ImageElem);
		}
		
		_Image opIndex(int i) {
			return new _Image(i);
		}
		class _Image {
			private immutable ELEM = Elements.ImageElem;
			uint id;
			
			this(uint id) {
				this.id = id;
			}
			
			uint width() @property {
				return getElemParam!int(ELEM, id, Elements.ImgWidthI);
			}
			
			uint height() @property {
				return getElemParam!int(ELEM, id, Elements.ImgHeightI);
			}

//			Stream mapPixels(AccessRights access) {
//				return mapResource(Elements.ImageElem, Elements.ImgPixelStream, access,
//					/*restore size*/, id);
//			}
		}
	}
}
