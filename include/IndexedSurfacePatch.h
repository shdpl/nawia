#ifndef __PolyVox_IndexedSurfacePatch_H__
#define __PolyVox_IndexedSurfacePatch_H__

#include <vector>

#include "boost/cstdint.hpp"

#include "Constants.h"
#include "PolyVoxForwardDeclarations.h"
#include "SurfaceVertex.h"
#include "TypeDef.h"

namespace PolyVox
{
	class POLYVOX_API IndexedSurfacePatch
	{
	public:
	   IndexedSurfacePatch(bool allowDuplicateVertices);
	   ~IndexedSurfacePatch();	   

	   void addTriangle(const SurfaceVertex& v0,const SurfaceVertex& v1,const SurfaceVertex& v2);
	   void fillVertexAndIndexData(std::vector<SurfaceVertex>& vecVertices, std::vector<boost::uint16_t>& vecIndices);
	
	//private:		
		std::vector<boost::uint16_t> m_vecTriangleIndices;
		std::vector<SurfaceVertex> m_vecVertices;

		static long int vertexIndices[POLYVOX_REGION_SIDE_LENGTH*2+1][POLYVOX_REGION_SIDE_LENGTH*2+1][POLYVOX_REGION_SIDE_LENGTH*2+1];

		static long int noOfVerticesSubmitted;
		static long int noOfVerticesAccepted;
		static long int noOfTrianglesSubmitted;

		long int getSizeInBytes(void);

	private:
		bool m_AllowDuplicateVertices;
	};	
}

#endif /* __IndexedSurfacePatch_H__ */
