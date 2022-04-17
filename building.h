#include <GL/gl.h>
#include <GL/glut.h>
#include<cstdio>
#include <windows.h>
#include<math.h>
# define PI 3.14159265358979323846
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void mainbuilding()
{

    glBegin(GL_POLYGON);
	glColor3ub(196,202,206);
	glVertex2f(0.4f, 0.3f);
	glVertex2f(-0.4f, 0.3f);
	glVertex2f(-0.4f, 0.48f);
	glVertex2f(-0.2f, 0.51f);
	glVertex2f(0.2f, 0.51f);
	glVertex2f(0.4f, 0.48f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-0.4f, 0.3f);
	glVertex2f(-0.4f, 0.48f);

	glColor3ub(0,0,0);
	glVertex2f(0.4f, 0.3f);
	glVertex2f(0.4f, 0.48f);

	glColor3ub(0,0,0);
	glVertex2f(-0.4f, 0.48f);
	glVertex2f(-0.2f, 0.51f);

	glColor3ub(0,0,0);
	glVertex2f(0.4f, 0.48f);
	glVertex2f(0.2f, 0.51f);

	glColor3ub(0,0,0);
	glVertex2f(-0.2f, 0.51f);
	glVertex2f(0.2f, 0.51f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(0.25f, 0.4f);
	glVertex2f(-0.25f, 0.4f);
	glVertex2f(-0.25f, 0.46f);
	glVertex2f(0.25f, 0.46f);
	glEnd();




    glBegin(GL_POLYGON);
	glColor3ub(196,202,206);
	glVertex2f(-0.1f, -0.5f);
	glVertex2f(0.1f, -0.5f);
	glVertex2f(0.1, .4f);
	glVertex2f(-0.1f, .4f);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(-0.08f, -0.5f);
	glVertex2f(0.08f, -0.5f);
	glVertex2f(0.08, -0.35f);
	glVertex2f(-0.08f, -0.35f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(196,202,206);
	glVertex2f(-0.1f, -0.5f);
	glVertex2f(-0.3f, -0.5f);
	glVertex2f(-0.3, .43f);
	glVertex2f(-0.1f, .4f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(-0.11f, -0.5f);
	glVertex2f(-0.12f, -0.5f);
	glVertex2f(-0.12, .4f);
	glVertex2f(-0.11f, .4f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(196,202,206);
	glVertex2f(0.1f, -0.5f);
	glVertex2f(0.3f, -0.5f);
	glVertex2f(0.3, .43f);
	glVertex2f(0.1f, .4f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(0.11f, -0.5f);
	glVertex2f(0.12f, -0.5f);
	glVertex2f(0.12, .4f);
	glVertex2f(0.11f, .4f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(196,202,206);
	glVertex2f(-0.3f, -0.5f);
	glVertex2f(-0.3f, 0.33f);
	glVertex2f(-0.45f, 0.36f);
	glVertex2f(-0.60f, 0.33f);
	glVertex2f(-0.60f, -0.5f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-0.45f, -0.5f);
	glVertex2f(-0.45f, 0.36f);

	glColor3ub(0,0,0);
	glVertex2f(-0.3f, -0.5f);
	glVertex2f(-0.3f, 0.43f);

    glEnd();

     glBegin(GL_POLYGON);
	glColor3ub(196,202,206);
	glVertex2f(0.3f, -0.5f);
	glVertex2f(0.3f, 0.33f);
	glVertex2f(0.45f, 0.36f);
	glVertex2f(0.60f, 0.33f);
	glVertex2f(0.60f, -0.5f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(0.45f, -0.5f);
	glVertex2f(0.45f, 0.36f);

	glColor3ub(0,0,0);
	glVertex2f(0.3f, -0.5f);
	glVertex2f(0.3f, 0.43f);

    glEnd();

     glBegin(GL_POLYGON);
	glColor3ub(196,202,206);
	glVertex2f(-0.6f, -0.5f);
	glVertex2f(-0.8f, -0.5f);
	glVertex2f(-0.8f, 0.29f);
	glVertex2f(-0.60f, 0.33f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(-0.65f, -0.5f);
	glVertex2f(-0.66f, -0.5f);
	glVertex2f(-0.66f, 0.31f);
	glVertex2f(-0.65f, 0.316f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-0.8f, -0.5f);
	glVertex2f(-0.8f, 0.29f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(0.8f, -0.5f);
	glVertex2f(0.8f, 0.29f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(196,202,206);
	glVertex2f(0.6f, -0.5f);
	glVertex2f(0.8f, -0.5f);
	glVertex2f(0.8f, 0.29f);
	glVertex2f(0.60f, 0.33f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(0.65f, -0.5f);
	glVertex2f(0.66f, -0.5f);
	glVertex2f(0.66f, 0.31f);
	glVertex2f(0.65f, 0.316f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2f(0.48f, -0.3f);
	glVertex2f(0.63f, -0.31f);
	glVertex2f(0.57f, 0.28f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2f(-0.48f, -0.3f);
	glVertex2f(-0.63f, -0.31f);
	glVertex2f(-0.57f, 0.28f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(0.48f, -0.5f);
	glVertex2f(0.63f, -0.5f);
	glVertex2f(0.63f, -0.35f);
	glVertex2f(0.48f, -0.34f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(-0.48f, -0.5f);
	glVertex2f(-0.63f, -0.5f);
	glVertex2f(-0.63f, -0.35f);
	glVertex2f(-0.48f, -0.34f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(-0.05f, -0.3f);
	glVertex2f(0.05f, -0.3f);
	glVertex2f(0.05f, -0.25f);
	glVertex2f(-0.05f, -0.25f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-0.11f, 0.4f);
	glVertex2f(0.11f, 0.4f);

	glColor3ub(0,0,0);
	glVertex2f(-0.3f, 0.43f);
	glVertex2f(-0.1f, 0.4f);

	glColor3ub(0,0,0);
	glVertex2f(0.3f, 0.43f);
	glVertex2f(0.1f, 0.4f);

	glColor3ub(0,0,0);
	glVertex2f(-0.3f, 0.33f);
	glVertex2f(-0.45f, 0.36f);

	glColor3ub(0,0,0);
	glVertex2f(0.3f, 0.33f);
	glVertex2f(0.45f, 0.36f);

	glColor3ub(0,0,0);
	glVertex2f(0.45f, 0.36f);
	glVertex2f(0.80f, 0.29f);

	glColor3ub(0,0,0);
	glVertex2f(-0.45f, 0.36f);
	glVertex2f(-0.80f, 0.29f);
	glEnd();

	GLfloat x=.370f; GLfloat y=-0.2f; GLfloat radius =.057f;
	int triangleAmount = 100;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}


    x=-.370f;  y=-0.2f;  radius =.057f;
	 triangleAmount = 100;
	 twicePi = 2.0f * PI;


	glEnd();
		glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0, 0, 0);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

void stairs()
{
    glBegin(GL_POLYGON);
	glColor3ub(150,40,27);
	glVertex2f(-1.0f, -0.7f);
	glVertex2f(1.0f, -.7f);
	glVertex2f(1.0f, -.5f);
	glVertex2f(-1.0f, -.5f);

	glEnd();


	 glBegin(GL_LINES);
	 glLineWidth(8);
	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.533f);
	glVertex2f(1.0f, -.533f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.566f);
	glVertex2f(1.0f, -.566f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.6f);
	glVertex2f(1.0f, -.6f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.633f);
	glVertex2f(1.0f, -.633f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.666f);
	glVertex2f(1.0f, -.666f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.7f);
	glVertex2f(1.0f, -.7f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.5f);
	glVertex2f(1.0f, -.5f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2f(-.50f, -0.5f);
	glVertex2f(-.53f, -.5f);
	glVertex2f(-.63f, -.7f);
	glVertex2f(-.60f, -.7f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2f(.50f, -0.5f);
	glVertex2f(.53f, -.5f);
	glVertex2f(.63f, -.7f);
	glVertex2f(.60f, -.7f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2f(.01f, -0.5f);
	glVertex2f(-.01f, -.5f);
	glVertex2f(-.035f, -.7f);
	glVertex2f(.035f, -.7f);

	glEnd();


}
