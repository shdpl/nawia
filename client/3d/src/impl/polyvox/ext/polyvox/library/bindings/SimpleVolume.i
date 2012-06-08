%module SimpleVolume
%{
#include "Material.h"
#include "Density.h"
#include "SimpleVolume.h"
%}

%include "Material.h"
%include "Density.h"
%include "SimpleVolume.h"

%template(SimpleVolumeMaterial8) PolyVox::SimpleVolume<PolyVox::Material8>;
%template(SimpleVolumeDensity8) PolyVox::SimpleVolume<PolyVox::Density8>;
%template(SimpleVolumeMaterialDensityPair44) PolyVox::SimpleVolume<PolyVox::MaterialDensityPair44>;
%template(SimpleVolumeMaterialDensityPair1616) PolyVox::SimpleVolume<PolyVox::MaterialDensityPair< uint32_t, 16, 16 > >;
