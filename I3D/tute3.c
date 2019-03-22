#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#if _WIN32
#   include <Windows.h>
#endif
#if __APPLE__
#   include <OpenGL/gl.h>
#   include <OpenGL/glu.h>
#   include <GLUT/glut.h>
#else
#   include <GL/gl.h>
#   include <GL/glu.h>
#   include <GL/glut.h>
#endif
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

void drawCircle()
{
	float theta;
	float x, y;

	glLineWidth(2.0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i <= n; i++) {
  	theta = i / (float)n * 2.0 * M_PI;
  	x = r * cosf(theta);
  	y = r * sinf(theta);
  	glVertex2f(x, y);
	}
	glEnd();
}	

void tute3codeNotes (){
	// velocity; //(x,y)
	// speed;
	// angle;
	// position //(x,y)
	// gravity;
	
	// float t, dx, dv, dt;
	// static float tlast = 0.0;
	// t = glutGet(GLUT_ELAPSED_TIME);
	// t /= 1000.0;
	// dt = t - tLast;
	
	
	// v.y -= g * dt;
	// p.x += v.x * dt;
	// p.y += v.y * dt
	// if(p.y )
	
	// tLast = t;
	
	//sin(x + t);
}

void display()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glEnable(GL_DEPTH_TEST);

  /* Put drawing code here */
  
  drawAxis(1.0);
  drawCircle();
  
  /*glBegin(GL_LINES);
	glVertex3f(-0.5,-0.5,-0.5);
	glVertex3f(0.5,-0.5,-0.5);
	glVertex3f(0.5,0.5,-0.5);
	glVertex3f(-0.5,0.5,-0.5);
  glEnd();*/
  
  /* Always check for errors! */
  int err;
  while ((err = glGetError()) != GL_NO_ERROR)
    printf("display: %s\n", gluErrorString(err));

  glutSwapBuffers();
}

/* You can ignore this for now, it just lets you exit when you press 'q' or ESC */
void keyboard(unsigned char key, int x, int y)
{
  switch (key)
  {
  case 27:
  case 'q':
    exit(EXIT_SUCCESS);
    break;
  default:
    break;
  }
}

void init()
{
  /* In this program these OpenGL calls only need to be done once,
    but normally they would go elsewhere, e.g. display */

  glMatrixMode(GL_PROJECTION);
  glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
  glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
  glutCreateWindow("Tutorial 1");

  init();

  glutDisplayFunc(display);
  glutKeyboardFunc(keyboard);
  glutMainLoop();

  return EXIT_SUCCESS;
}
