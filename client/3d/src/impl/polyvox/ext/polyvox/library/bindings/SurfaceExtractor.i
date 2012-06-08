%module SurfaceExtractor
%{
#include "SimpleVolume.h"
#include "SurfaceExtractor.h"
#include "PolyVoxCore/Material.h"

namespace PolyVox
{
	class SurfaceExtractorSimpleVolumeMaterialDensityPair1616 : public SurfaceExtractor <SimpleVolume, MaterialDensityPair<uint32_t, 16, 16> >
	{
		public:
			SurfaceExtractorSimpleVolumeMaterialDensityPair1616(SimpleVolume<MaterialDensityPair<uint32_t, 16, 16> >* volData, Region region, SurfaceMesh<PositionMaterialNormal>* result)
			: SurfaceExtractor<SimpleVolume, MaterialDensityPair<uint32_t, 16, 16> >(volData, region, result) {}
			void execute() { SurfaceExtractor<SimpleVolume, MaterialDensityPair<uint32_t, 16, 16> >::execute(); }
	};
};
%}

%include "SimpleVolume.h"
%include "SurfaceExtractor.h"
%include "PolyVoxCore/Material.h"

namespace PolyVox
{
	class SurfaceExtractorSimpleVolumeMaterialDensityPair1616 : public SurfaceExtractor <SimpleVolume, MaterialDensityPair<uint32_t, 16, 16> >
	{
		public:
			SurfaceExtractorSimpleVolumeMaterialDensityPair1616(SimpleVolume<MaterialDensityPair <uint32_t, 16, 16> >* volData, Region region, SurfaceMesh<PositionMaterialNormal>* result);
			void execute();
	};
};
