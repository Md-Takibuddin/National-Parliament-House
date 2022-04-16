
#include <GL/gl.h>
#include <GL/glut.h>
#include<cstdio>
#include <windows.h>
#include<math.h>
# define PI 3.14159265358979323846
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void flags()
{

    glBegin(GL_QUADS);
	glColor3ub(255, 255, 153);
	glVertex2f(-0.01f, -0.5f);
	glVertex2f(0.005f, -0.5f);
    glVertex2f(0.005f, 0.07f);
    glVertex2f(-0.01f, 0.07f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(545, 153, 51);
	glVertex2f(0.005f, 0.07f);
	glVertex2f(0.27f, 0.07f);
    glVertex2f(0.27f, -0.135f);
    glVertex2f(0.005f, -0.135f);
    glEnd();
      int i;

	GLfloat x=.13f; GLfloat y=-0.038f; GLfloat radius =.053f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 0, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}


void grass()
{
    glBegin(GL_POLYGON);
	glColor3ub(12,252,0);
	glVertex2f(-1.0f, -0.7f);
	glVertex2f(1.0f, -.7f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(-1.0f, -1.0f);

	glEnd();
}
