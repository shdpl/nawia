%module MaterialDensityPair
%{
#include "MaterialDensityPair.h"
%}

%include "MaterialDensityPair.h"

%template (MaterialDensityPair44) PolyVox::MaterialDensityPair<uint8_t, 4, 4>;
%template (MaterialDensityPair1616) PolyVox::MaterialDensityPair<uint32_t, 16, 16>;
