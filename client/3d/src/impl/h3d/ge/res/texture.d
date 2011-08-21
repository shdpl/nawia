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
	ge.res.texture;

import impl.h3d.h3d,
	type.cuda.types,
	type.buffer.pixel;

class H3DTexture : H3DResource, ITexture {
	public:
	//flags
	
	ITexture[] subtextures;
	ubyte slices;
	
	private:
	alias H3DTexRes.List Elements;
	immutable ELEM = Elements.TextureElem;
	
	
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
	//this(string name, int2 size, TextureFormat fmt) {
	//	id = h3dCreateTexture(name, size.x, size.y, fmt, 0);
	//}
	
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
			getElemParam!int(ELEM, 0, Elements.TexFormatI, value);
		}
	}
	
	private:
	
	class Images {
		uint count() @property {
			return h3dGetResElemCount(id, Elements.ImageElem);
		}
		
		Image opIndex(int i) {
			return new Image(i);
		}
	}
	
	class Image {
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
	}
	
//TODO	
//	void *TextureResource::mapStream( int elem, int elemIdx, int stream, bool read, bool write )
//{
//	if( (read || write) && mappedData == 0x0 )
//	{
//		if( elem == TextureResData::ImageElem && stream == TextureResData::ImgPixelStream &&
//		    elemIdx < getElemCount( elem ) )
//		{
//			mappedData = Modules::renderer().useScratchBuf(
//				gRDI->calcTextureSize( _texFormat, _width, _height, _depth ) );
//			
//			if( read )
//			{	
//				int slice = elemIdx / (getMipCount() + 1);
//				int mipLevel = elemIdx % (getMipCount() + 1);
//				gRDI->getTextureData( _texObject, slice, mipLevel, mappedData );
//			}
//
//			if( write )
//				mappedWriteImage = elemIdx;
//			else
//				mappedWriteImage = -1;
//
//			return mappedData;
//		}
//	}
//
//	return Resource::mapStream( elem, elemIdx, stream, read, write );
//}
//
//
//void TextureResource::unmapStream()
//{
//	if( mappedData != 0x0 )
//	{
//		if( mappedWriteImage >= 0 )
//		{
//			int slice = mappedWriteImage / (getMipCount() + 1);
//			int mipLevel = mappedWriteImage % (getMipCount() + 1);
//			gRDI->updateTextureData( _texObject, slice, mipLevel, mappedData );
//			mappedWriteImage = -1;
//		}
//		
//		mappedData = 0x0;
//		return;
//	}
//
//	Resource::unmapStream();
//}
}
