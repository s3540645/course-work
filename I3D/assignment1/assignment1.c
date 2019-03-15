#include "assignment1.h"
#include "shapes.h"

void display()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glEnable(GL_DEPTH_TEST);
	
  /* Put drawing code here */
  drawAxis(1.0);
  
  vec3f yellow = {1.0,1.0,0.0};
  
  //glColor3f(1.0,1.0,0.0);
  drawCircle(0.0,0.0,0.1,yellow);
  //drawSquare(0.0,0.0,0.5,0.5);

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
