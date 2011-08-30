%module Density
%{
#include "Density.h"
%}

%include "Density.h"

%template(Density8) PolyVox::Density<uint8_t>;
%template(Density16) PolyVox::Density<uint16_t>;
%template(Density32) PolyVox::Density<uint32_t>;
