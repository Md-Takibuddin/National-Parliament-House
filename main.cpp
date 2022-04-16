#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include<math.h>
# define PI 3.14159265358979323846
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;


#include "sky.h"



#define STEPS 1000


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




void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    fullsky();

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
