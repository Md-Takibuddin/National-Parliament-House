#include <GL/gl.h>
#include <GL/glut.h>
#include<cstdio>
#include <windows.h>
#include<math.h>
# define PI 3.14159265358979323846
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void tree(){

/////circle tree 1

    glPushMatrix();
    glTranslatef(200, 450, 0);


    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();



    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(210, 438, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(190, 438, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();




    glColor3f(0.4, 0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(198, 380);
    glVertex2i(198, 425);
	glVertex2i(203, 425);
	glVertex2i(203, 380);
	glEnd();




/////circle tree 2

    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(250, 50, 0);


    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(200, 450, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(210, 438, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();



    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(190, 438, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();




    glColor3f(0.4, 0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(198, 380);
    glVertex2i(198, 425);
	glVertex2i(203, 425);
	glVertex2i(203, 380);
	glEnd();


    glPopMatrix();


///circle tree 3

    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(350, 50, 0);


    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(200, 450, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(210, 438, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();



    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(190, 438, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();




    glColor3f(0.4, 0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(198, 380);
    glVertex2i(198, 425);
	glVertex2i(203, 425);
	glVertex2i(203, 380);
	glEnd();


    glPopMatrix();


///near tree circle tree 4

    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(250, 35, 0);


    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(200, 450, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();



    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(210, 438, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



        glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(190, 438, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();




//glColor3f(0.4, 0, 0.5);
  //  glBegin(GL_QUADS);
    //glVertex2i(198, 380);
    //glVertex2i(198, 425);
	//glVertex2i(203, 425);
	//glVertex2i(203, 380);
	//glEnd();


    glPopMatrix();


///circle tree 4

glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(350, 47, 0);


glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(200, 450, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(210, 438, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(190, 438, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();




glColor3f(0.4, 0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(198, 380);
    glVertex2i(198, 425);
	glVertex2i(203, 425);
	glVertex2i(203, 380);
	glEnd();


 glPopMatrix();





///circle tree 5

glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(756, 80, 0);


glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(200, 450, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(210, 438, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(190, 438, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();




glColor3f(0.4, 0, 0.5);
   glBegin(GL_QUADS);
    glVertex2i(198, 395);
    glVertex2i(198, 425);
	glVertex2i(203, 425);
	glVertex2i(203, 395);
	glEnd();


 glPopMatrix();



///circle tree 7

glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(650, 40, 0);


glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(200, 450, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(210, 438, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(190, 438, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();




glColor3f(0.4, 0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(198, 380);
    glVertex2i(198, 425);
	glVertex2i(203, 425);
	glVertex2i(203, 380);
	glEnd();


 glPopMatrix();


///circle tree 6 near tree

glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(50, 34, 0);


glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(200, 450, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(210, 438, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(190, 438, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();




glColor3f(0.4, 0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(198, 380);
    glVertex2i(198, 425);
	glVertex2i(203, 425);
	glVertex2i(203, 380);
	glEnd();


 glPopMatrix();

}
