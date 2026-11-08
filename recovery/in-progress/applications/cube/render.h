/* Pooka's Free Software License. Recovered 3D demo interfaces. */
#pragma once
#include <stdint.h>
typedef struct { int32_t x,y,depth; } CubeVertex;
typedef struct { uint8_t indices[3],reserved; uint32_t rgba; int32_t depth; } CubeFace;
extern uint32_t gCubeWindowWidth,gCubeWindowHeight;
void cube_project(uint32_t frame,CubeVertex vertices[8]);
void cube_faces(const CubeVertex vertices[8],CubeFace faces[12]);
void drawCubeCpu(uint8_t *pixels,const CubeVertex vertices[8],const CubeFace faces[12]);
void cube_edges(uint8_t *pixels,const CubeVertex vertices[8]);
