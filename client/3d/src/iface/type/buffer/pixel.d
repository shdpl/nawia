module type.buffer.pixel;

import type.cuda.types,
	type.color.rgba;

struct BufferPixel {
	float2 size;
	ColorRGBA!float buffer;
}