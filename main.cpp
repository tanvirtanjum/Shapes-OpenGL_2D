#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);
    glColor3f(1,0,0);
    glVertex2f(0.0f,1.0f);
    glVertex2f(0.0f,-1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 153);
    glColor3f(.2,.1,0);
    glVertex2f(1.0f,0.0f);
    glVertex2f(-1.0f,0.0f);
    glEnd();

	glPointSize(4);
	glBegin(GL_POINTS);
	///glPointSize(6);
    glColor3f(0,1,0);
    glVertex2f(0.0f,0.0f);
    glEnd();

    ///SQUARE
    glBegin(GL_LINES);
    //glColor3f(1,0,0);
    glColor3ub(204, 204, 0);
    glVertex2f(-0.1f,0.1f);
    glVertex2f(-0.1f,0.6f);
    glEnd();
    glBegin(GL_LINES);
    //glColor3f(1,0,0);
    glColor3ub(204, 204, 0);
    glVertex2f(-0.1f,0.6f);
    glVertex2f(-0.6f,0.6f);
    glEnd();
    glBegin(GL_LINES);
    //glColor3f(1,0,0);
    glColor3ub(204, 204, 0);
    glVertex2f(-0.6f,0.6f);
    glVertex2f(-0.6f,0.1f);
    glEnd();
    glBegin(GL_LINES);
    //glColor3f(1,0,0);
    glColor3ub(204, 204, 0);
    glVertex2f(-0.6f,0.1f);
    glVertex2f(-0.1f,0.1f);
    glEnd();

    ///TRIANGLE
    glBegin(GL_TRIANGLES);
    //glColor3f(1,0,0);
    glColor3ub(255, 0, 102);
    glVertex2f(0.1f,0.1f);
    glVertex2f(0.6f,0.1f);
    glVertex2f(0.3f,0.6f);
    glEnd();

    ///REVERSE TRIANGLE
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.1f,-0.1f);
    glVertex2f(-0.6f,-0.1f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.6f,-0.1f);
    glVertex2f(-0.33f,-0.33f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.1f,-0.1f);
    glVertex2f(-0.33f,-0.33f);
    glEnd();

    ///POLYGON
    glBegin(GL_POLYGON);
    glColor3ub(0,0,255);
    glVertex2f(0.4, -0.1);
    glVertex2f(0.3, -0.1);
    glVertex2f(0.2, -0.2);
    glVertex2f(0.2, -0.3);
    glVertex2f(0.3, -0.4);
    glVertex2f(0.4, -0.4);
    glVertex2f(0.5, -0.3);
    glVertex2f(0.5, -0.2);

    glEnd();



	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("PERFORMANCE 1");
	glutInitWindowSize(640, 640);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
