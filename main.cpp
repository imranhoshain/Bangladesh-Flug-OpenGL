#include<Windows.h>
#include<GL\glut.h>

void display(void) {
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0, 0.3, 0);
  glBegin(GL_POLYGON);
  glVertex2f(-15, 30);
  glVertex2f(-15, 10); //left & down
  glVertex2f(15, 10); //right & down
  glVertex2f(15, 30); //right & up
  glEnd();

  // red circle
  glPushMatrix();
  glColor3f(1, 0, 0);
  glTranslatef(-1, 20, 10);
  glutSolidSphere(5, 50, 50);
  glPopMatrix();

  //bamboo
  glColor3f(0.3, 0, 0);
  glBegin(GL_POLYGON);
  glVertex2f(-16, 30);
  glVertex2f(-16, -20);
  glVertex2f(-15, -20);
  glVertex2f(-15, 30);
  glEnd();
  glBegin(GL_TRIANGLES);
  glColor3f(0.3, 0, 0);
  glVertex2f(-16.0, 31.0);
  glVertex2f(-16.0, 30.0);
  glVertex2f(-15, 30);
  glEnd();

   //siri 1
  glColor3f(0.8, 0.5, 0.1);
  glBegin(GL_POLYGON);
  glVertex2f(-20, -20);
  glVertex2f(-20, -21.5);
  glVertex2f(-10, -21.5);
  glVertex2f(-10, -20);
  glEnd();
  //siri 2
  glColor3f(0.3, 0, 0);
  glBegin(GL_POLYGON);
  glVertex2f(-21, -21.5);
  glVertex2f(-21, -23);
  glVertex2f(-9, -23);
  glVertex2f(-9, -21.5);
  glEnd();
  //siri 3
  glColor3f(0.8, 0.5, 0.1);
  glBegin(GL_POLYGON);
  glVertex2f(-22, -23);
  glVertex2f(-22, -24.5);
  glVertex2f(-8, -24.5);
  glVertex2f(-8, -23);
  glEnd();
  glFlush();
}

void init(void) {
  glClearColor(0, 1, 1, 0.0);
  glOrtho(-50, 50, -40, 40, -50, 50);
}
int main(int argc, char ** argv) {
  glutInit( & argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(1170, 620);
  glutInitWindowPosition(50, 50);
  glutCreateWindow("Flag of Bangladesh");
  init();
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}
