#pragma once

#include <stdint.h>
#include "vectorial/vectorial.h"

// file

struct spatial {
    float pos[3], quat[3];
    spatial* parent;
};

/*struct spatial_with_scale {
    float pos[3], quat[3], scale[3];
    spatial* parent;
};*/

struct buffer {
    int32_t flags;
    int32_t size;
    uint8_t data[0];
};

struct batch {
    int32_t size;
    buffer* buf[0];
};

struct batch {
    int32_t size;
    buffer* buf[0];
};

// runtime

struct spatial {
    vectorial::vec4f pos, rotate, scale;
    vectorial::mat4f world;
    spatial* parent;
    uint64_t rev;
};
