%module CubicSurfaceExtractorWithNormals
%{
#include "SimpleVolume.h"
#include "CubicSurfaceExtractorWithNormals.h"
//#include "PolyVoxCore/Material.h"
#include "PolyVoxCore/MaterialDensityPair.h"

namespace PolyVox
{
        class CubicSurfaceExtractorWithNormalsSimpleVolumeMaterialDensityPair44 : public CubicSurfaceExtractorWithNormals<SimpleVolume, MaterialDensityPair44>
        {
                public:
                        CubicSurfaceExtractorWithNormalsSimpleVolumeMaterialDensityPair44(
                                SimpleVolume<MaterialDensityPair44>* volData, Region region, SurfaceMesh<PositionMaterialNormal>* result)
                                : CubicSurfaceExtractorWithNormals<SimpleVolume, MaterialDensityPair44>(volData, region, result) {}
                        void execute() { CubicSurfaceExtractorWithNormals<SimpleVolume, MaterialDensityPair44>::execute(); }
        };
};
%}

%include "SimpleVolume.h"
%include "CubicSurfaceExtractorWithNormals.h"
//%include "PolyVoxCore/Material.h"
%include "PolyVoxCore/MaterialDensityPair.h"

//%template(CubicSurfaceExtractorWithNormalsMaterial8) PolyVox::CubicSurfaceExtractorWithNormals<PolyVox::Material8>;
//%template(CubicSurfaceExtractorWithNormalsDensity8) PolyVox::CubicSurfaceExtractorWithNormals<PolyVox::Density8>;

namespace PolyVox
{
        class CubicSurfaceExtractorWithNormalsSimpleVolumeMaterialDensityPair44 : public CubicSurfaceExtractorWithNormals<SimpleVolume, MaterialDensityPair44>
        {
                public:
                        CubicSurfaceExtractorWithNormalsSimpleVolumeMaterialDensityPair44(SimpleVolume<MaterialDensityPair44>* volData, Region region, SurfaceMesh<PositionMaterialNormal>* result);
                        void execute();
        };
};
