module impl.h3d.ge.res.geometry;

private import impl.h3d.ge.res.resource,
	ge.res.geometry,
	impl.h3d.h3d;

class H3DGeometry : H3DResource, IGeometry {
	
	uint indicesNo() @property {
		return getElemParam!int(Elements.GeometryElem,0,Elements.GeoIndexCountI);
	}
	
	enum IndicesFormat : bool {BIT16 = 1, BIT32 = 0};
	
	IndicesFormat indicesFmt() @property {
		return cast(IndicesFormat)(IndicesFormat.BIT16 ==
			getElemParam!int(Elements.GeometryElem, 0, Elements.GeoIndices16I));
	}
	
	uint verticesNo() @property {
		return getElemParam!int(Elements.GeometryElem, 0, Elements.GeoVertexCountI);
	}
	
	/* TODO:
	void *GeometryResource::mapStream( int elem, int elemIdx, int stream, bool read, bool write )
{
	if( read || write )
	{
		mappedWriteStream = -1;
		
		switch( elem )
		{
		case GeometryResData::GeometryElem:
			switch( stream )
			{
			case GeometryResData::GeoIndexStream:
				if( write ) mappedWriteStream = GeometryResData::GeoIndexStream;
				return _indexData;
			case GeometryResData::GeoVertPosStream:
				if( write ) mappedWriteStream = GeometryResData::GeoVertPosStream;
				return _vertPosData != 0x0 ? _vertPosData : 0x0;
			case GeometryResData::GeoVertTanStream:
				if( write ) mappedWriteStream = GeometryResData::GeoVertTanStream;
				return _vertTanData != 0x0 ? _vertTanData : 0x0;
			case GeometryResData::GeoVertStaticStream:
				if( write ) mappedWriteStream = GeometryResData::GeoVertStaticStream;
				return _vertStaticData != 0x0 ? _vertStaticData : 0x0;
			}
		}
	}

	return Resource::mapStream( elem, elemIdx, stream, read, write );
}


void GeometryResource::unmapStream()
{
	if( mappedWriteStream )
	{
		switch( mappedWriteStream )
		{
		case GeometryResData::GeoIndexStream:
			if( _indexData != 0x0 )
				gRDI->updateBufferData( _indexBuf, 0, _indexCount * (_16BitIndices ? 2 : 4), _indexData );
			break;
		case GeometryResData::GeoVertPosStream:
			if( _vertPosData != 0x0 )
				gRDI->updateBufferData( _posVBuf, 0, _vertCount * sizeof( Vec3f ), _vertPosData );
			break;
		case GeometryResData::GeoVertTanStream:
			if( _vertTanData != 0x0 )
				gRDI->updateBufferData( _tanVBuf, 0, _vertCount * sizeof( VertexDataTan ), _vertTanData );
			break;
		case GeometryResData::GeoVertStaticStream:
			if( _vertStaticData != 0x0 )
				gRDI->updateBufferData( _staticVBuf, 0, _vertCount * sizeof( VertexDataStatic ), _vertStaticData );
			break;
		}

		mappedWriteStream = -1;
	}
}
	*/
	
	private:
	alias H3DGeoRes.List Elements;
}