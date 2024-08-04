#pragma once

#include "../math/mat4.h"

#include "mesh.h"
#include "renderable.h"
#include "material.h"

typedef struct Object {
    Mesh * mesh;
    Mat4 transform;
    Material * material;
    // uint16_t * tex_indices; // From mesh.h not working yet
    // Vec2f * textCoord;      // From mesh.h
} Object;

Renderable object_as_renderable(Object * object);

