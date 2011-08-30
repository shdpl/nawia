%module MaterialDensityPair
%{
#include "MaterialDensityPair.h"
%}

%include "MaterialDensityPair.h"

%template (MaterialDensityPair44) PolyVox::MaterialDensityPair<uint8_t, 4, 4>;
