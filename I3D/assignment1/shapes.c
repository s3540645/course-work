#include "shapes.h"

void drawAxis(float length)
{
	glBegin(GL_LINES);
	// x line - red
	glColor3f(1.0,0.0,0.0);
	glVertex3f(0.0,0.0,0.0);
	glVertex3f(length,0.0,0.0);
	
	// y line - green
	glColor3f(0.0,1.0,0.0);
	glVertex3f(0.0,0.0,0.0);
	glVertex3f(0.0,length,0.0);
	
	// z line - blue
	glColor3f(0.0,0.0,1.0);
	glVertex3f(0.0,0.0,0.0);
	glVertex3f(0,0,length);
	glEnd();
}

void drawRect(vec2f startPos, vec2f size, vec3f color)
{
	glColor3f(color.x,color.y,color.z);
	glBegin(GL_QUADS);
	glVertex2f(startPos.x, startPos.y);
	glVertex2f(startPos.x+size.x, startPos.y);
	glVertex2f(startPos.x+size.x, startPos.y+size.y);
	glVertex2f(startPos.x, startPos.y+size.y);
	glEnd();
}
void drawWireRect(vec2f startPos, vec2f size, vec3f color)
{
	glColor3f(color.x,color.y,color.z);
	glBegin(GL_LINE_LOOP);
	glVertex2f(startPos.x, startPos.y);
	glVertex2f(startPos.x+size.x, startPos.y);
	glVertex2f(startPos.x+size.x, startPos.y+size.y);
	glVertex2f(startPos.x, startPos.y+size.y);
	glEnd();
}

void drawLine(vec2f startPos, vec2f endPos, vec3f color)
{
	glColor3f(color.x,color.y,color.z);
	glBegin(GL_LINES);
	glVertex2f(startPos.x,startPos.y);
	glVertex2f(endPos.x,endPos.y);
	glEnd();
}

void drawWireCircle(float startX, float startY, float size, vec3f color)
{
	glColor3f(color.x,color.y,color.z);
	glBegin(GL_LINE_LOOP);
	for(int i =0; i <= 300; i++){
		float angle = 2 * M_PI * i / 300;
	    float x = size * cos(angle);
	   	float y = size * sin(angle);
	    glVertex3f(startX+x,startY+y,0.0);
	}
	glEnd();
}

void drawCircle(float startX, float startY, float size, vec3f color)
{
	glColor3f(color.x,color.y,color.z);
	glBegin(GL_TRIANGLE_FAN);
	for(int i =0; i <= 300; i++){
		float angle = 2 * M_PI * i / 300;
	    float x = size * cos(angle);
	   	float y = size * sin(angle);
	    glVertex3f(startX+x,startY+y,0.0);
	}
	glEnd();
}