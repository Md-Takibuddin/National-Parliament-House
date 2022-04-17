#include <GL/gl.h>
#include <GL/glut.h>
#include<cstdio>
#include <windows.h>
#include<math.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "building.h"
#include "sky.h"
#include "flag.h"
#include "plain.h"

float Cosinus_table[361];
float Sinus_table[361];


GLfloat q=0.0f;

GLfloat position = 0.0f;
GLfloat speed = 0.01f;

GLfloat position2 =0.0f;
GLfloat speed2 = 0.01f;



void update(int value) {

    if(position > 1.0)
        position = -1.0f;

    position += speed;
	glutPostRedisplay();
	glutTimerFunc(100, update, 0);
}

void update2(int value) {

    if(position2>1.0)
        position2=-1.0f;

    position2+= speed2;
    glutPostRedisplay();
    glutTimerFunc(100, update2,0);
}


void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color
    glClear(GL_COLOR_BUFFER_BIT);

    fullsky();
    sun();
    grass();
    stairs();
    mainbuilding();
    flags();
    plain();

    glLoadIdentity();
    glPushMatrix();
    glTranslatef(position,-0.1f, 0.0f);
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

