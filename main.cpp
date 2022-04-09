#include<cstdio>
#include <windows.h>
#include<math.h>
# define PI 3.14159265358979323846
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Cosinus_table[361];
float Sinus_table[361];

#define M_PI 3.14159265358979323846

#define STEPS 1000

#include <GL/gl.h>
#include <GL/glut.h>
GLfloat q=0.0f;
GLfloat position = 0.0f;
GLfloat speed = 0.01f;
int r=0;

void update(int value) {

    if(position > 1.0)
        position = -1.0f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void bird()
{
  glBegin(GL_LINES);
  glColor3ub(255,255,255);
  glVertex2f(0.2f,0.8f);
  glVertex2f(0.18f,0.77f);

  glColor3ub(255,255,255);
  glVertex2f(0.18f,0.77f);
  glVertex2f(0.15f,0.79f);

  glColor3ub(255,255,255);
  glVertex2f(0.13f,0.8f);
  glVertex2f(0.11f,0.77f);

  glColor3ub(255,255,255);
  glVertex2f(0.11f,0.77f);
  glVertex2f(0.08f,0.79f);

  glEnd();

}
void sky1()
{
    // glLoadIdentity();
    int i;

	GLfloat x=.5f; GLfloat y=.8f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=.55f; GLfloat b=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=.6f; GLfloat h=.77f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

void sky2()
{
    // glLoadIdentity();
    int i;

	GLfloat x=-.5f; GLfloat y=.8f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=-.55f; GLfloat b=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=-.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=-.6f; GLfloat h=.77f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

void fullsky()
{
     glLoadIdentity();
    glBegin(GL_POLYGON);

    glColor3ub(30,144,255);
        glVertex2f(-1.0f, 1.0f);
        glVertex2f(1.0f, 1.0f);
    glColor3ub(135,206,235);
        glVertex2f(1.0f, -0.5f);
	glColor3ub(135,206,235);
        glVertex2f(-1.0f, -0.5f);

	glEnd();
}

void nightsky()
{
     glLoadIdentity();
    glBegin(GL_POLYGON);

    glColor3ub(25,25,112);
        glVertex2f(-1.0f, 1.0f);
        glVertex2f(1.0f, 1.0f);

    glColor3ub(100,149,237);
        glVertex2f(1.0f, -0.5f);
	glColor3ub(100,149,237);
        glVertex2f(-1.0f, -0.5f);

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


void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    fullsky();
    grass();
    stairs();
    mainbuilding();
     flags();

    glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
    sky1();
    sky2();
     bird();
glPopMatrix();

    glFlush();
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1080, 720);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("National Parliament House,");
    glutDisplayFunc(display);
 glutTimerFunc(10, update, 0);
    glutMainLoop();
    return 0;
}

