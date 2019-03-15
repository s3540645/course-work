#include "assignment1.h"

typedef struct Vec3f {
	float x;
	float y;
	float z;
} vec3f;

typedef struct Vec2f {
	float x;
	float y;
} vec2f;

typedef struct Object {
	vec2f startPos;
	vec2f size;
	vec3f color;
} car, mylog, road;

void drawAxis(float length);
void drawRect(vec2f startPos, vec2f size, vec3f color);
void drawWireRect(vec2f startPos, vec2f size, vec3f color);
void drawLine(vec2f startPos, vec2f endPos, vec3f color);
void drawWireCircle(float startX, float startY, float size, vec3f color);
void drawCircle(float startX, float startY, float size, vec3f color);