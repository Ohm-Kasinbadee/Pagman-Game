#include <stdlib.h>
#include <gl/glut.h>
#include <math.h>
#include <iostream>
#define PI 3.1415926535898

int score = 0;
float num = 0;
float num2 = 0;
float size = 1.5;

double IDx1 = 45, IDy1 = 35;
double IDx2 = 50, IDy2 = 35;
double IDx3 = 55, IDy3 = 35;
double IDx4 = 60, IDy4 = 35;
double IDx5 = 65, IDy5 = 35;
double IDx6 = 65, IDy6 = 40;
double IDx7 = 65, IDy7 = 45;
double IDx8 = 65, IDy8 = 50;
double IDx9 = 65, IDy9 = 55;
double IDx10 = 70, IDy10 = 55;
double IDx11 = 75, IDy11 = 55;
double IDx12 = 80, IDy12 = 55;
double IDx13 = 90, IDy13 = 55;
double IDx14 = 95, IDy14 = 55;
double IDx15 = 85, IDy15 = 50;
double IDx16 = 85, IDy16 = 45;
double IDx17 = 85, IDy17 = 40;
double IDx18 = 85, IDy18 = 35;
double IDx19 = 90, IDy19 = 35;
double IDx20 = 95, IDy20 = 35;
double IDx21 = 115, IDy21 = 35;
double IDx22 = 120, IDy22 = 35;
double IDx23 = 125, IDy23 = 35;
double IDx24 = 125, IDy24 = 40;
double IDx25 = 125, IDy25 = 45;
double IDx26 = 125, IDy26 = 50;
double IDx27 = 125, IDy27 = 55;
double IDx28 = 120, IDy28 = 55;
double IDx29 = 115, IDy29 = 55;
double IDx30 = 125, IDy30 = 60;
double IDx31 = 125, IDy31 = 65;
double IDx32 = 125, IDy32 = 70;
double IDx33 = 125, IDy33 = 75;
double IDx34 = 130, IDy34 = 75;
double IDx35 = 135, IDy35 = 75;
double IDx36 = 140, IDy36 = 75;
double IDx37 = 145, IDy37 = 75;
double IDx38 = 150, IDy38 = 75;
double IDx39 = 155, IDy39 = 80;
double IDx40 = 155, IDy40 = 85;
double IDx41 = 155, IDy41 = 70;
double IDx42 = 155, IDy42 = 65;
double IDx43 = 155, IDy43 = 60;
double IDx44 = 155, IDy44 = 55;
double IDx45 = 150, IDy45 = 55;
double IDx46 = 145, IDy46 = 55;
double IDx47 = 145, IDy47 = 50;
double IDx48 = 145, IDy48 = 45;
double IDx49 = 145, IDy49 = 40;
double IDx50 = 145, IDy50 = 35;
double IDx51 = 150, IDy51 = 35;
double IDx52 = 155, IDy52 = 35;
double IDx53 = 160, IDy53 = 35;
double IDx54 = 165, IDy54 = 35;
double IDx55 = 175, IDy55 = 45;
double IDx56 = 175, IDy56 = 50;
double IDx57 = 175, IDy57 = 55;
double IDx58 = 175, IDy58 = 60;
double IDx59 = 175, IDy59 = 65;
double IDx60 = 175, IDy60 = 70;
double IDx61 = 175, IDy61 = 75;
double IDx62 = 170, IDy62 = 75;
double IDx63 = 165, IDy63 = 75;
double IDx64 = 160, IDy64 = 75;
double IDx65 = 175, IDy65 = 80;
double IDx66 = 175, IDy66 = 85;
double IDx67 = 175, IDy67 = 90;
double IDx68 = 175, IDy68 = 95;
double IDx69 = 175, IDy69 = 100;
double IDx70 = 175, IDy70 = 105;
double IDx71 = 175, IDy71 = 110;
double IDx72 = 175, IDy72 = 115;
double IDx73 = 170, IDy73 = 115;
double IDx74 = 165, IDy74 = 115;
double IDx75 = 160, IDy75 = 115;
double IDx76 = 155, IDy76 = 115;
double IDx77 = 150, IDy77 = 115;
double IDx78 = 145, IDy78 = 115;
double IDx79 = 145, IDy79 = 110;
double IDx80 = 145, IDy80 = 105;
double IDx81 = 125, IDy81 = 80;
double IDx82 = 125, IDy82 = 85;
double IDx83 = 125, IDy83 = 90;
double IDx84 = 125, IDy84 = 95;
double IDx85 = 125, IDy85 = 100;
double IDx86 = 125, IDy86 = 105;
double IDx87 = 125, IDy87 = 110;
double IDx88 = 125, IDy88 = 115;
double IDx89 = 120, IDy89 = 115;
double IDx90 = 115, IDy90 = 115;
double IDx91 = 110, IDy91 = 115;
double IDx92 = 105, IDy92 = 115;
double IDx93 = 100, IDy93 = 115;
double IDx94 = 95, IDy94 = 115;
double IDx95 = 90, IDy95 = 115;
double IDx96 = 85, IDy96 = 115;
double IDx97 = 85, IDy97 = 110;
double IDx98 = 85, IDy98 = 105;
double IDx99 = 85, IDy99 = 100;
double IDx100 = 85, IDy100 = 95;
double IDx101 = 90, IDy101 = 95;
double IDx102 = 95, IDy102 = 95;
double IDx103 = 100, IDy103 = 95;
double IDx104 = 105, IDy104 = 95;
double IDx105 = 110, IDy105 = 95;
double IDx106 = 115, IDy106 = 95;
double IDx107 = 120, IDy107 = 95;
double IDx108 = 80, IDy108 = 95;
double IDx109 = 75, IDy109 = 95;
double IDx110 = 85, IDy110 = 90;
double IDx111 = 85, IDy111 = 85;
double IDx112 = 85, IDy112 = 80;
double IDx113 = 85, IDy113 = 75;
double IDx114 = 80, IDy114 = 75;
double IDx115 = 75, IDy115 = 75;
double IDx116 = 70, IDy116 = 75;
double IDx117 = 65, IDy117 = 75;
double IDx118 = 60, IDy118 = 75;
double IDx119 = 55, IDy119 = 75;
double IDx120 = 55, IDy120 = 80;
double IDx121 = 55, IDy121 = 85;
double IDx122 = 50, IDy122 = 75;
double IDx123 = 45, IDy123 = 75;
double IDx124 = 40, IDy124 = 75;
double IDx125 = 35, IDy125 = 75;
double IDx126 = 35, IDy126 = 80;
double IDx127 = 35, IDy127 = 85;
double IDx128 = 35, IDy128 = 90;
double IDx129 = 35, IDy129 = 95;
double IDx130 = 35, IDy130 = 100;
double IDx131 = 35, IDy131 = 105;
double IDx132 = 35, IDy132 = 110;
double IDx133 = 35, IDy133 = 115;
double IDx134 = 40, IDy134 = 115;
double IDx135 = 45, IDy135 = 115;
double IDx136 = 50, IDy136 = 115;
double IDx137 = 55, IDy137 = 115;
double IDx138 = 60, IDy138 = 115;
double IDx139 = 65, IDy139 = 115;
double IDx140 = 65, IDy140 = 110;
double IDx141 = 35, IDy141 = 55;
double IDx142 = 35, IDy142 = 50;
double IDx143 = 35, IDy143 = 45;
double IDx144 = 85, IDy144 = 55;
double IDx145 = 155, IDy145 = 75;

int color1 = 1;
int color2 = 0;
int sum1 = 0;
int flagR = 0;
int flagUP = 0;
int flagD = 0;
void Star(){
	glPointSize(3);


	glBegin(GL_POINTS);
	glColor3f(color1, color1, color1);
	glVertex2f(5, 5);
	glVertex2f(15, 5);
	glVertex2f(25, 5);
	glVertex2f(35, 5);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(color2, color2, color2);
	glVertex2f(10, 5);
	glVertex2f(20, 5);
	glVertex2f(30, 5);
	glVertex2f(30, 5);
	glEnd();

	sum1 += 1;
	if (sum1 == 1)
	{
		color1 = 0;
		color2 = 1;
	}
	else{
		color1 = 1;
		color2 = 0;
		sum1 = 0;
	}

	glutPostRedisplay();

}

void MAP(void){
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(3);

	glBegin(GL_POLYGON);
	glColor3f(0.098, 0.098, 0.439);
	glVertex2f(0, 0);
	glVertex2f(0, 150);
	glColor3f(0.294, 0.000, 0.510);
	glVertex2f(210, 150);
	glVertex2f(210, 0);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(20, 20);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(20, 130);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(190, 130);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(190, 20);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(30, 30);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(30, 120);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(70, 120);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(70, 100);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(80, 100);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(80, 120);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(130, 120);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(130, 100);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(140, 100);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(140, 120);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(180, 120);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(180, 30);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(140, 30);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(140, 50);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(130, 50);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(130, 30);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(80, 30);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(80, 50);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(70, 50);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(70, 30);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(40, 80);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(40, 110);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(60, 110);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(60, 100);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(50, 100);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(50, 80);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(40, 80);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(40, 40);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(40, 70);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(50, 70);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(50, 50);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(60, 50);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(60, 40);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(40, 40);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(60, 60);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(60, 70);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(80, 70);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(80, 60);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(60, 80);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(60, 90);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(80, 90);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(80, 80);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(90, 100);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(90, 110);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(90, 110);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(120, 110);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(120, 110);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(120, 100);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(120, 100);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(90, 100);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(90, 40);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(90, 50);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(90, 50);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(120, 50);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(120, 50);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(120, 40);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(120, 40);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(90, 40);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(90, 60);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(90, 90);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(100, 90);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(100, 80);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(95, 80);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(95, 70);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(115, 70);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(115, 80);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(110, 80);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(110, 90);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(120, 90);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(120, 60);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(130, 80);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(130, 90);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(150, 90);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(150, 80);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(130, 60);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(130, 70);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(150, 70);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(150, 60);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(160, 80);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(160, 100);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(150, 100);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(150, 110);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(170, 110);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(170, 80);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(150, 40);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(150, 50);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(160, 50);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(160, 70);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(170, 70);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(170, 40);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.000, 0.271, 0.000);
	glVertex2f(101, 90);
	glVertex2f(101, 80);
	glVertex2f(109, 90);
	glVertex2f(109, 80);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.000, 0.271, 0.000);
	glVertex2f(31, 70);
	glVertex2f(31, 60);
	glVertex2f(39, 70);
	glVertex2f(39, 60);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.000, 0.271, 0.000);
	glVertex2f(51, 70);
	glVertex2f(51, 60);
	glVertex2f(59, 70);
	glVertex2f(59, 60);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.000, 0.271, 0.000);
	glVertex2f(81, 70);
	glVertex2f(81, 60);
	glVertex2f(89, 70);
	glVertex2f(89, 60);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.000, 0.271, 0.000);
	glVertex2f(101, 59);
	glVertex2f(101, 51);
	glVertex2f(109, 59);
	glVertex2f(109, 51);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.000, 0.271, 0.000);
	glVertex2f(151, 99);
	glVertex2f(151, 91);
	glVertex2f(159, 99);
	glVertex2f(159, 91);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.000, 0.271, 0.000);
	glVertex2f(131, 59);
	glVertex2f(131, 51);
	glVertex2f(139, 59);
	glVertex2f(139, 51);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.000, 0.271, 0.000);
	glVertex2f(131, 99);
	glVertex2f(131, 91);
	glVertex2f(139, 99);
	glVertex2f(139, 91);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.000, 0.271, 0.000);
	glVertex2f(60, 100);
	glVertex2f(60, 90);
	glVertex2f(70, 100);
	glVertex2f(70, 90);
	glEnd();

}

void MyCircle2f(GLfloat centerx, GLfloat centery, GLfloat radius)
{
	GLint i;
	GLdouble theta;
	GLint circle_points = 100;

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	for (i = 0; i < circle_points; i++)
	{
		theta = 2 * PI*i / circle_points; // angle in radians
		glVertex2f(centerx + radius*cos(theta), centery + radius*sin(theta));
	}
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for (i = 0; i < circle_points; i++)
	{
		theta = 2 * PI*i / circle_points; // angle in radians
		glVertex2f(centerx + radius*cos(theta), centery + radius*sin(theta));
	}
	glEnd();
}

void Semicircle(GLfloat centerx, GLfloat centery, GLfloat radius)
{
	GLint i;
	GLdouble theta;
	GLint circle_points = 100;

	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_POLYGON);
	for (i = 0; i < circle_points; i++)
	{
		theta = PI*i / circle_points; // angle in radians
		glVertex2f(centerx + radius*cos(theta), centery + radius*sin(theta));
	}
	glEnd();
}

void MyOval2f(GLfloat centerx, GLfloat centery, GLfloat radiusx, GLfloat radiusy)
{
	GLint i;
	GLdouble theta;
	GLint circle_points = 100;

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	for (i = 0; i < circle_points; i++)
	{
		theta = 2 * PI*i / circle_points; // angle in radians
		glVertex2f(centerx + radiusx*cos(theta), centery + radiusy*sin(theta));
	}
	glEnd();
	glColor3f(0.000, 0.502, 0.000);
	glBegin(GL_POLYGON);
	for (i = 0; i < circle_points; i++)
	{
		theta = 2 * PI*i / circle_points; // angle in radians
		glVertex2f(centerx + radiusx*cos(theta), centery + radiusy*sin(theta));
	}
	glEnd();
}

void MyOval1f(GLfloat centerx, GLfloat centery, GLfloat radiusx, GLfloat radiusy)
{
	GLint i;
	GLdouble theta;
	GLint circle_points = 100;

	glColor3f(1.000, 0.000, 0.000);
	glBegin(GL_POLYGON);
	for (i = 0; i < circle_points; i++)
	{
		theta =  PI*i / circle_points; // angle in radians
		glVertex2f(centerx + radiusx*cos(theta), centery + radiusy*sin(theta));
	}
	glEnd();
}

void Mon(){
	
	MyOval2f(35,65,3,4);
	MyOval1f(36, 66, 1, 1);
	MyOval1f(34, 66, 1, 1);
	
	MyOval1f(35, 63, 1, 2);
}

void Point(){
	MyCircle2f(IDx1, IDy1, size); //point ID 1
	MyCircle2f(IDx2, IDy2, size); //point ID 2
	MyCircle2f(IDx3, IDy3, size); //point ID 3
	MyCircle2f(IDx4, IDy4, size); //point ID 4
	MyCircle2f(IDx5, IDy5, size); //point ID 5

	MyCircle2f(IDx6, IDy6, size); //point ID 6
	MyCircle2f(IDx7, IDy7, size); //point ID 7
	MyCircle2f(IDx8, IDy8, size); //point ID 8
	MyCircle2f(IDx9, IDy9, size); //point ID 9

	MyCircle2f(IDx10, IDy10, size); //point ID 10
	MyCircle2f(IDx11, IDy11, size); //point ID 11
	MyCircle2f(IDx12, IDy12, size); //point ID 12
	MyCircle2f(IDx13, IDy13, size); //point ID 13
	MyCircle2f(IDx14, IDy14, size); //point ID 14

	MyCircle2f(IDx144, IDy144, size); //point ID 144
	MyCircle2f(IDx15, IDy15, size); //point ID 15
	MyCircle2f(IDx16, IDy16, size); //point ID 16
	MyCircle2f(IDx17, IDy17, size); //point ID 17

	MyCircle2f(IDx18, IDy18, size); //point ID 18
	MyCircle2f(IDx19, IDy19, size); //point ID 19
	MyCircle2f(IDx20, IDy20, size); //point ID 20
	MyCircle2f(IDx21, IDy21, size); //point ID 21
	MyCircle2f(IDx22, IDy22, size); //point ID 22
	MyCircle2f(IDx23, IDy23, size); //point ID 23

	MyCircle2f(IDx24, IDy24, size); //point ID 24
	MyCircle2f(IDx25, IDy25, size); //point ID 25
	MyCircle2f(IDx26, IDy26, size); //point ID 26
	MyCircle2f(IDx27, IDy27, size); //point ID 27

	MyCircle2f(IDx28, IDy28, size); //point ID 28
	MyCircle2f(IDx29, IDy29, size); //point ID 29

	MyCircle2f(IDx30, IDy30, size); //point ID 30
	MyCircle2f(IDx31, IDy31, size); //point ID 31
	MyCircle2f(IDx32, IDy32, size); //point ID 32

	MyCircle2f(IDx33, IDy33, size); //point ID 33
	MyCircle2f(IDx34, IDy34, size); //point ID 34
	MyCircle2f(IDx35, IDy35, size); //point ID 35
	MyCircle2f(IDx36, IDy36, size); //point ID 36
	MyCircle2f(IDx37, IDy37, size); //point ID 37
	MyCircle2f(IDx38, IDy38, size); //point ID 38

	MyCircle2f(IDx145, IDy145, size); //point ID 145
	MyCircle2f(IDx39, IDy39, size); //point ID 39
	MyCircle2f(IDx40, IDy40, size); //point ID 40

	MyCircle2f(IDx41, IDy41, size); //point ID 41
	MyCircle2f(IDx42, IDy42, size); //point ID 42
	MyCircle2f(IDx43, IDy43, size); //point ID 43

	MyCircle2f(IDx44, IDy44, size); //point ID 44
	MyCircle2f(IDx45, IDy45, size); //point ID 45

	MyCircle2f(IDx46, IDy46, size); //point ID 46
	MyCircle2f(IDx47, IDy47, size); //point ID 47
	MyCircle2f(IDx48, IDy48, size); //point ID 48
	MyCircle2f(IDx49, IDy49, size); //point ID 49

	MyCircle2f(IDx50, IDy50, size); //point ID 50
	MyCircle2f(IDx51, IDy51, size); //point ID 51
	MyCircle2f(IDx52, IDy52, size); //point ID 52
	MyCircle2f(IDx53, IDy53, size); //point ID 53
	MyCircle2f(IDx54, IDy54, size); //point ID 54

	MyCircle2f(IDx55, IDy55, size); //point ID 55
	MyCircle2f(IDx56, IDy56, size); //point ID 56
	MyCircle2f(IDx57, IDy57, size); //point ID 57
	MyCircle2f(IDx58, IDy58, size); //point ID 58
	MyCircle2f(IDx59, IDy59, size); //point ID 59
	MyCircle2f(IDx60, IDy60, size); //point ID 60

	MyCircle2f(IDx61, IDy61, size); //point ID 61
	MyCircle2f(IDx62, IDy62, size); //point ID 62
	MyCircle2f(IDx63, IDy63, size); //point ID 63
	MyCircle2f(IDx64, IDy64, size); //point ID 64

	MyCircle2f(IDx65, IDy65, size); //point ID 65
	MyCircle2f(IDx66, IDy66, size); //point ID 66
	MyCircle2f(IDx67, IDy67, size); //point ID 67
	MyCircle2f(IDx68, IDy68, size); //point ID 68
	MyCircle2f(IDx69, IDy69, size); //point ID 69
	MyCircle2f(IDx70, IDy70, size); //point ID 70
	MyCircle2f(IDx71, IDy71, size); //point ID 71

	MyCircle2f(IDx72, IDy72, size); //point ID 72
	MyCircle2f(IDx73, IDy73, size); //point ID 73
	MyCircle2f(IDx74, IDy74, size); //point ID 74
	MyCircle2f(IDx75, IDy75, size); //point ID 75
	MyCircle2f(IDx76, IDy76, size); //point ID 76
	MyCircle2f(IDx77, IDy77, size); //point ID 77

	MyCircle2f(IDx78, IDy78, size); //point ID 78
	MyCircle2f(IDx79, IDy79, size); //point ID 79
	MyCircle2f(IDx80, IDy80, size); //point ID 80

	MyCircle2f(IDx81, IDy81, size); //point ID 81
	MyCircle2f(IDx82, IDy82, size); //point ID 82
	MyCircle2f(IDx83, IDy83, size); //point ID 83
	MyCircle2f(IDx84, IDy84, size); //point ID 84
	MyCircle2f(IDx85, IDy85, size); //point ID 85
	MyCircle2f(IDx86, IDy86, size); //point ID 86
	MyCircle2f(IDx87, IDy87, size); //point ID 87

	MyCircle2f(IDx88, IDy88, size); //point ID 88
	MyCircle2f(IDx89, IDy89, size); //point ID 89
	MyCircle2f(IDx90, IDy90, size); //point ID 90
	MyCircle2f(IDx91, IDy91, size); //point ID 91
	MyCircle2f(IDx92, IDy92, size); //point ID 92
	MyCircle2f(IDx93, IDy93, size); //point ID 93
	MyCircle2f(IDx94, IDy94, size); //point ID 94
	MyCircle2f(IDx95, IDy95, size); //point ID 95

	MyCircle2f(IDx96, IDy96, size); //point ID 96
	MyCircle2f(IDx97, IDy97, size); //point ID 97
	MyCircle2f(IDx98, IDy98, size); //point ID 98
	MyCircle2f(IDx99, IDy99, size); //point ID 99

	MyCircle2f(IDx100, IDy100, size); //point ID 100
	MyCircle2f(IDx101, IDy101, size); //point ID 101
	MyCircle2f(IDx102, IDy102, size); //point ID 102
	MyCircle2f(IDx103, IDy103, size); //point ID 103
	MyCircle2f(IDx104, IDy104, size); //point ID 104
	MyCircle2f(IDx105, IDy105, size); //point ID 105
	MyCircle2f(IDx106, IDy106, size); //point ID 106
	MyCircle2f(IDx107, IDy107, size); //point ID 107

	MyCircle2f(IDx108, IDy108, size); //point ID 108
	MyCircle2f(IDx109, IDy109, size); //point ID 109

	MyCircle2f(IDx110, IDy110, size); //point ID 110
	MyCircle2f(IDx111, IDy111, size); //point ID 111
	MyCircle2f(IDx112, IDy112, size); //point ID 112

	MyCircle2f(IDx113, IDy113, size); //point ID 113
	MyCircle2f(IDx114, IDy114, size); //point ID 114
	MyCircle2f(IDx115, IDy115, size); //point ID 115
	MyCircle2f(IDx116, IDy116, size); //point ID 116
	MyCircle2f(IDx117, IDy117, size); //point ID 117
	MyCircle2f(IDx118, IDy118, size); //point ID 118

	MyCircle2f(IDx119, IDy119, size); //point ID 119
	MyCircle2f(IDx120, IDy120, size); //point ID 120
	MyCircle2f(IDx121, IDy121, size); //point ID 121

	MyCircle2f(IDx122, IDy122, size); //point ID 122
	MyCircle2f(IDx123, IDy123, size); //point ID 123
	MyCircle2f(IDx124, IDy124, size); //point ID 124

	MyCircle2f(IDx125, IDy125, size); //point ID 125
	MyCircle2f(IDx126, IDy126, size); //point ID 126
	MyCircle2f(IDx127, IDy127, size); //point ID 127
	MyCircle2f(IDx128, IDy128, size); //point ID 128
	MyCircle2f(IDx129, IDy129, size); //point ID 129
	MyCircle2f(IDx130, IDy130, size); //point ID 130
	MyCircle2f(IDx131, IDy131, size); //point ID 131
	MyCircle2f(IDx132, IDy132, size); //point ID 132

	MyCircle2f(IDx133, IDy133, size); //point ID 133
	MyCircle2f(IDx134, IDy134, size); //point ID 134
	MyCircle2f(IDx135, IDy135, size); //point ID 135
	MyCircle2f(IDx136, IDy136, size); //point ID 136
	MyCircle2f(IDx137, IDy137, size); //point ID 137
	MyCircle2f(IDx138, IDy138, size); //point ID 138

	MyCircle2f(IDx139, IDy139, size); //point ID 139
	MyCircle2f(IDx140, IDy140, size); //point ID 140

	MyCircle2f(IDx141, IDy141, size); //point ID 141
	MyCircle2f(IDx142, IDy142, size); //point ID 142
	MyCircle2f(IDx143, IDy143, size); //point ID 143
}

void PointEffect(){
	//ID1
	if (sqrt(((num + 35 - IDx1)*(num + 35 - IDx1)) + (((num2 + 35) - IDy1)*((num2 + 35) - IDy1))) < 0.3){
		score += 1;
		IDx1 = -1;
		IDy1 = -1;
	}
	//ID2
	if (sqrt(((num + 35 - IDx2)*(num + 35 - IDx2)) + (((num2 + 35) - IDy2)*((num2 + 35) - IDy2))) < 0.3){
		score += 1;
		IDx2 = -1;
		IDy2 = -1;
	}
	//ID3
	if (sqrt(((num + 35 - IDx3)*(num + 35 - IDx3)) + (((num2 + 35) - IDy3)*((num2 + 35) - IDy3))) < 0.3){
		score += 1;
		IDx3 = -1;
		IDy3 = -1;
	}
	//ID4
	if (sqrt(((num + 35 - IDx4)*(num + 35 - IDx4)) + (((num2 + 35) - IDy4)*((num2 + 35) - IDy4))) < 0.3){
		score += 1;
		IDx4 = -1;
		IDy4 = -1;
	}
	//ID5
	if (sqrt(((num + 35 - IDx5)*(num + 35 - IDx5)) + (((num2 + 35) - IDy5)*((num2 + 35) - IDy5))) < 0.3){
		score += 1;
		IDx5 = -1;
		IDy5 = -1;
	}
	//ID6
	if (sqrt(((num + 35 - IDx6)*(num + 35 - IDx6)) + (((num2 + 35) - IDy6)*((num2 + 35) - IDy6))) < 0.3){
		score += 1;
		IDx6 = -1;
		IDy6 = -1;
	}
	//ID7
	if (sqrt(((num + 35 - IDx7)*(num + 35 - IDx7)) + (((num2 + 35) - IDy7)*((num2 + 35) - IDy7))) < 0.3){
		score += 1;
		IDx7 = -1;
		IDy7 = -1;
	}
	//ID8
	if (sqrt(((num + 35 - IDx8)*(num + 35 - IDx8)) + (((num2 + 35) - IDy8)*((num2 + 35) - IDy8))) < 0.3){
		score += 1;
		IDx8 = -1;
		IDy8 = -1;
	}
	//ID9
	if (sqrt(((num + 35 - IDx9)*(num + 35 - IDx9)) + (((num2 + 35) - IDy9)*((num2 + 35) - IDy9))) < 0.3){
		score += 1;
		IDx9 = -1;
		IDy9 = -1;
	}
	//ID10
	if (sqrt(((num + 35 - IDx10)*(num + 35 - IDx10)) + (((num2 + 35) - IDy10)*((num2 + 35) - IDy10))) < 0.3){
		score += 1;
		IDx10 = -1;
		IDy10 = -1;
	}
	//ID11
	if (sqrt(((num + 35 - IDx11)*(num + 35 - IDx11)) + (((num2 + 35) - IDy11)*((num2 + 35) - IDy11))) < 0.3){
		score += 1;
		IDx11 = -1;
		IDy11 = -1;
	}
	//ID12
	if (sqrt(((num + 35 - IDx12)*(num + 35 - IDx12)) + (((num2 + 35) - IDy12)*((num2 + 35) - IDy12))) < 0.3){
		score += 1;
		IDx12 = -1;
		IDy12 = -1;
	}
	//ID13
	if (sqrt(((num + 35 - IDx13)*(num + 35 - IDx13)) + (((num2 + 35) - IDy13)*((num2 + 35) - IDy13))) < 0.3){
		score += 1;
		IDx13 = -1;
		IDy13 = -1;
	}
	//ID14
	if (sqrt(((num + 35 - IDx14)*(num + 35 - IDx14)) + (((num2 + 35) - IDy14)*((num2 + 35) - IDy14))) < 0.3){
		score += 1;
		IDx14 = -1;
		IDy14 = -1;
	}
	//ID15
	if (sqrt(((num + 35 - IDx15)*(num + 35 - IDx15)) + (((num2 + 35) - IDy15)*((num2 + 35) - IDy15))) < 0.3){
		score += 1;
		IDx15 = -1;
		IDy15 = -1;
	}
	//ID16
	if (sqrt(((num + 35 - IDx16)*(num + 35 - IDx16)) + (((num2 + 35) - IDy16)*((num2 + 35) - IDy16))) < 0.3){
		score += 1;
		IDx16 = -1;
		IDy16 = -1;
	}
	//ID17
	if (sqrt(((num + 35 - IDx17)*(num + 35 - IDx17)) + (((num2 + 35) - IDy17)*((num2 + 35) - IDy17))) < 0.3){
		score += 1;
		IDx17 = -1;
		IDy17 = -1;
	}
	//ID18
	if (sqrt(((num + 35 - IDx18)*(num + 35 - IDx18)) + (((num2 + 35) - IDy18)*((num2 + 35) - IDy18))) < 0.3){
		score += 1;
		IDx18 = -1;
		IDy18 = -1;
	}
	//ID19
	if (sqrt(((num + 35 - IDx19)*(num + 35 - IDx19)) + (((num2 + 35) - IDy19)*((num2 + 35) - IDy19))) < 0.3){
		score += 1;
		IDx19 = -1;
		IDy19 = -1;
	}
	//ID20
	if (sqrt(((num + 35 - IDx20)*(num + 35 - IDx20)) + (((num2 + 35) - IDy2)*((num2 + 35) - IDy20))) < 0.3){
		score += 1;
		IDx20 = -1;
		IDy20 = -1;
	}
	//ID21
	if (sqrt(((num + 35 - IDx21)*(num + 35 - IDx21)) + (((num2 + 35) - IDy21)*((num2 + 35) - IDy21))) < 0.3){
		score += 1;
		IDx21 = -1;
		IDy21 = -1;
	}
	//ID22
	if (sqrt(((num + 35 - IDx22)*(num + 35 - IDx22)) + (((num2 + 35) - IDy22)*((num2 + 35) - IDy22))) < 0.3){
		score += 1;
		IDx22 = -1;
		IDy22 = -1;
	}
	//ID23
	if (sqrt(((num + 35 - IDx23)*(num + 35 - IDx23)) + (((num2 + 35) - IDy23)*((num2 + 35) - IDy23))) < 0.3){
		score += 1;
		IDx23 = -1;
		IDy23 = -1;
	}
	//ID24
	if (sqrt(((num + 35 - IDx24)*(num + 35 - IDx24)) + (((num2 + 35) - IDy24)*((num2 + 35) - IDy24))) < 0.3){
		score += 1;
		IDx24 = -1;
		IDy24 = -1;
	}
	//ID25
	if (sqrt(((num + 35 - IDx25)*(num + 35 - IDx25)) + (((num2 + 35) - IDy25)*((num2 + 35) - IDy25))) < 0.3){
		score += 1;
		IDx25 = -1;
		IDy25 = -1;
	}
	//ID26
	if (sqrt(((num + 35 - IDx26)*(num + 35 - IDx26)) + (((num2 + 35) - IDy26)*((num2 + 35) - IDy26))) < 0.3){
		score += 1;
		IDx26 = -1;
		IDy26 = -1;
	}
	//ID27
	if (sqrt(((num + 35 - IDx27)*(num + 35 - IDx27)) + (((num2 + 35) - IDy27)*((num2 + 35) - IDy27))) < 0.3){
		score += 1;
		IDx27 = -1;
		IDy27 = -1;
	}
	//ID28
	if (sqrt(((num + 35 - IDx28)*(num + 35 - IDx28)) + (((num2 + 35) - IDy28)*((num2 + 35) - IDy28))) < 0.3){
		score += 1;
		IDx28 = -1;
		IDy28 = -1;
	}
	//ID29
	if (sqrt(((num + 35 - IDx29)*(num + 35 - IDx29)) + (((num2 + 35) - IDy29)*((num2 + 35) - IDy29))) < 0.3){
		score += 1;
		IDx29 = -1;
		IDy29 = -1;
	}
	//ID30
	if (sqrt(((num + 35 - IDx30)*(num + 35 - IDx30)) + (((num2 + 35) - IDy30)*((num2 + 35) - IDy30))) < 0.3){
		score += 1;
		IDx30 = -1;
		IDy30 = -1;
	}
	//ID31
	if (sqrt(((num + 35 - IDx31)*(num + 35 - IDx31)) + (((num2 + 35) - IDy31)*((num2 + 35) - IDy31))) < 0.3){
		score += 1;
		IDx31 = -1;
		IDy31 = -1;
	}
	//ID32
	if (sqrt(((num + 35 - IDx32)*(num + 35 - IDx32)) + (((num2 + 35) - IDy32)*((num2 + 35) - IDy32))) < 0.3){
		score += 1;
		IDx32 = -1;
		IDy32 = -1;
	}
	//ID33
	if (sqrt(((num + 35 - IDx33)*(num + 35 - IDx33)) + (((num2 + 35) - IDy33)*((num2 + 35) - IDy33))) < 0.3){
		score += 1;
		IDx33 = -1;
		IDy33 = -1;
	}
	//ID34
	if (sqrt(((num + 35 - IDx34)*(num + 35 - IDx34)) + (((num2 + 35) - IDy34)*((num2 + 35) - IDy34))) < 0.3){
		score += 1;
		IDx34 = -1;
		IDy34 = -1;
	}
	//ID35
	if (sqrt(((num + 35 - IDx35)*(num + 35 - IDx35)) + (((num2 + 35) - IDy35)*((num2 + 35) - IDy35))) < 0.3){
		score += 1;
		IDx35 = -1;
		IDy35 = -1;
	}
	//ID36
	if (sqrt(((num + 35 - IDx36)*(num + 35 - IDx36)) + (((num2 + 35) - IDy36)*((num2 + 35) - IDy36))) < 0.3){
		score += 1;
		IDx36 = -1;
		IDy36 = -1;
	}
	//ID37
	if (sqrt(((num + 35 - IDx37)*(num + 35 - IDx37)) + (((num2 + 35) - IDy37)*((num2 + 35) - IDy37))) < 0.3){
		score += 1;
		IDx37 = -1;
		IDy37 = -1;
	}
	//ID38
	if (sqrt(((num + 35 - IDx38)*(num + 35 - IDx38)) + (((num2 + 35) - IDy38)*((num2 + 35) - IDy38))) < 0.3){
		score += 1;
		IDx38 = -1;
		IDy38 = -1;
	}
	//ID39
	if (sqrt(((num + 35 - IDx39)*(num + 35 - IDx39)) + (((num2 + 35) - IDy39)*((num2 + 35) - IDy39))) < 0.3){
		score += 1;
		IDx39 = -1;
		IDy39 = -1;
	}
	//ID40
	if (sqrt(((num + 35 - IDx40)*(num + 35 - IDx40)) + (((num2 + 35) - IDy40)*((num2 + 35) - IDy40))) < 0.3){
		score += 1;
		IDx40 = -1;
		IDy40 = -1;
	}
	//ID41
	if (sqrt(((num + 35 - IDx41)*(num + 35 - IDx41)) + (((num2 + 35) - IDy41)*((num2 + 35) - IDy41))) < 0.3){
		score += 1;
		IDx41 = -1;
		IDy41 = -1;
	}
	//ID42
	if (sqrt(((num + 35 - IDx42)*(num + 35 - IDx42)) + (((num2 + 35) - IDy42)*((num2 + 35) - IDy42))) < 0.3){
		score += 1;
		IDx42 = -1;
		IDy42 = -1;
	}
	//ID43
	if (sqrt(((num + 35 - IDx43)*(num + 35 - IDx43)) + (((num2 + 35) - IDy43)*((num2 + 35) - IDy43))) < 0.3){
		score += 1;
		IDx43 = -1;
		IDy43 = -1;
	}
	//ID44
	if (sqrt(((num + 35 - IDx44)*(num + 35 - IDx44)) + (((num2 + 35) - IDy44)*((num2 + 35) - IDy44))) < 0.3){
		score += 1;
		IDx44 = -1;
		IDy44 = -1;
	}
	//ID45
	if (sqrt(((num + 35 - IDx45)*(num + 35 - IDx45)) + (((num2 + 35) - IDy45)*((num2 + 35) - IDy45))) < 0.3){
		score += 1;
		IDx45 = -1;
		IDy45 = -1;
	}
	//ID46
	if (sqrt(((num + 35 - IDx46)*(num + 35 - IDx46)) + (((num2 + 35) - IDy46)*((num2 + 35) - IDy46))) < 0.3){
		score += 1;
		IDx46 = -1;
		IDy46 = -1;
	}
	//ID47
	if (sqrt(((num + 35 - IDx47)*(num + 35 - IDx47)) + (((num2 + 35) - IDy47)*((num2 + 35) - IDy47))) < 0.3){
		score += 1;
		IDx47 = -1;
		IDy47 = -1;
	}
	//ID48
	if (sqrt(((num + 35 - IDx48)*(num + 35 - IDx48)) + (((num2 + 35) - IDy48)*((num2 + 35) - IDy48))) < 0.3){
		score += 1;
		IDx48 = -1;
		IDy48 = -1;
	}
	//ID49
	if (sqrt(((num + 35 - IDx49)*(num + 35 - IDx49)) + (((num2 + 35) - IDy49)*((num2 + 35) - IDy49))) < 0.3){
		score += 1;
		IDx49 = -1;
		IDy49 = -1;
	}
	//ID50
	if (sqrt(((num + 35 - IDx50)*(num + 35 - IDx50)) + (((num2 + 35) - IDy50)*((num2 + 35) - IDy50))) < 0.3){
		score += 1;
		IDx50 = -1;
		IDy50 = -1;
	}
	//ID51
	if (sqrt(((num + 35 - IDx51)*(num + 35 - IDx51)) + (((num2 + 35) - IDy51)*((num2 + 35) - IDy51))) < 0.3){
		score += 1;
		IDx51 = -1;
		IDy51 = -1;
	}
	//ID52
	if (sqrt(((num + 35 - IDx52)*(num + 35 - IDx52)) + (((num2 + 35) - IDy52)*((num2 + 35) - IDy52))) < 0.3){
		score += 1;
		IDx52 = -1;
		IDy52 = -1;
	}
	//ID53
	if (sqrt(((num + 35 - IDx53)*(num + 35 - IDx53)) + (((num2 + 35) - IDy53)*((num2 + 35) - IDy53))) < 0.3){
		score += 1;
		IDx53 = -1;
		IDy53 = -1;
	}
	//ID54
	if (sqrt(((num + 35 - IDx54)*(num + 35 - IDx54)) + (((num2 + 35) - IDy54)*((num2 + 35) - IDy54))) < 0.3){
		score += 1;
		IDx54 = -1;
		IDy54 = -1;
	}
	//ID55
	if (sqrt(((num + 35 - IDx55)*(num + 35 - IDx55)) + (((num2 + 35) - IDy55)*((num2 + 35) - IDy55))) < 0.3){
		score += 1;
		IDx55 = -1;
		IDy55 = -1;
	}
	//ID56
	if (sqrt(((num + 35 - IDx56)*(num + 35 - IDx56)) + (((num2 + 35) - IDy56)*((num2 + 35) - IDy56))) < 0.3){
		score += 1;
		IDx56 = -1;
		IDy56 = -1;
	}
	//ID57
	if (sqrt(((num + 35 - IDx57)*(num + 35 - IDx57)) + (((num2 + 35) - IDy57)*((num2 + 35) - IDy57))) < 0.3){
		score += 1;
		IDx57 = -1;
		IDy57 = -1;
	}
	//ID58
	if (sqrt(((num + 35 - IDx58)*(num + 35 - IDx58)) + (((num2 + 35) - IDy58)*((num2 + 35) - IDy58))) < 0.3){
		score += 1;
		IDx58 = -1;
		IDy58 = -1;
	}
	//ID59
	if (sqrt(((num + 35 - IDx59)*(num + 35 - IDx59)) + (((num2 + 35) - IDy59)*((num2 + 35) - IDy59))) < 0.3){
		score += 1;
		IDx59 = -1;
		IDy59 = -1;
	}
	//ID60
	if (sqrt(((num + 35 - IDx60)*(num + 35 - IDx60)) + (((num2 + 35) - IDy60)*((num2 + 35) - IDy60))) < 0.3){
		score += 1;
		IDx60 = -1;
		IDy60 = -1;
	}
	//ID61
	if (sqrt(((num + 35 - IDx61)*(num + 35 - IDx61)) + (((num2 + 35) - IDy61)*((num2 + 35) - IDy61))) < 0.3){
		score += 1;
		IDx61 = -1;
		IDy61 = -1;
	}
	//ID62
	if (sqrt(((num + 35 - IDx62)*(num + 35 - IDx62)) + (((num2 + 35) - IDy62)*((num2 + 35) - IDy62))) < 0.3){
		score += 1;
		IDx62 = -1;
		IDy62 = -1;
	}
	//ID63
	if (sqrt(((num + 35 - IDx63)*(num + 35 - IDx63)) + (((num2 + 35) - IDy63)*((num2 + 35) - IDy63))) < 0.3){
		score += 1;
		IDx63 = -1;
		IDy63 = -1;
	}
	//ID64
	if (sqrt(((num + 35 - IDx64)*(num + 35 - IDx64)) + (((num2 + 35) - IDy64)*((num2 + 35) - IDy64))) < 0.3){
		score += 1;
		IDx64 = -1;
		IDy64 = -1;
	}
	//ID65
	if (sqrt(((num + 35 - IDx65)*(num + 35 - IDx65)) + (((num2 + 35) - IDy65)*((num2 + 35) - IDy65))) < 0.3){
		score += 1;
		IDx65 = -1;
		IDy65 = -1;
	}
	//ID66
	if (sqrt(((num + 35 - IDx66)*(num + 35 - IDx66)) + (((num2 + 35) - IDy66)*((num2 + 35) - IDy66))) < 0.3){
		score += 1;
		IDx66 = -1;
		IDy66 = -1;
	}
	//ID67
	if (sqrt(((num + 35 - IDx67)*(num + 35 - IDx67)) + (((num2 + 35) - IDy67)*((num2 + 35) - IDy67))) < 0.3){
		score += 1;
		IDx67 = -1;
		IDy67 = -1;
	}
	//ID68
	if (sqrt(((num + 35 - IDx68)*(num + 35 - IDx68)) + (((num2 + 35) - IDy68)*((num2 + 35) - IDy68))) < 0.3){
		score += 1;
		IDx68 = -1;
		IDy68 = -1;
	}
	//ID69
	if (sqrt(((num + 35 - IDx69)*(num + 35 - IDx69)) + (((num2 + 35) - IDy69)*((num2 + 35) - IDy69))) < 0.3){
		score += 1;
		IDx69 = -1;
		IDy69 = -1;
	}
	//ID70
	if (sqrt(((num + 35 - IDx70)*(num + 35 - IDx70)) + (((num2 + 35) - IDy70)*((num2 + 35) - IDy70))) < 0.3){
		score += 1;
		IDx70 = -1;
		IDy70 = -1;
	}
	//ID71
	if (sqrt(((num + 35 - IDx71)*(num + 35 - IDx71)) + (((num2 + 35) - IDy71)*((num2 + 35) - IDy71))) < 0.3){
		score += 1;
		IDx71 = -1;
		IDy71 = -1;
	}
	//ID72
	if (sqrt(((num + 35 - IDx72)*(num + 35 - IDx72)) + (((num2 + 35) - IDy72)*((num2 + 35) - IDy72))) < 0.3){
		score += 1;
		IDx72 = -1;
		IDy72 = -1;
	}
	//ID73
	if (sqrt(((num + 35 - IDx73)*(num + 35 - IDx73)) + (((num2 + 35) - IDy73)*((num2 + 35) - IDy73))) < 0.3){
		score += 1;
		IDx73 = -1;
		IDy73 = -1;
	}
	//ID74
	if (sqrt(((num + 35 - IDx74)*(num + 35 - IDx74)) + (((num2 + 35) - IDy74)*((num2 + 35) - IDy74))) < 0.3){
		score += 1;
		IDx74 = -1;
		IDy74 = -1;
	}
	//ID75
	if (sqrt(((num + 35 - IDx75)*(num + 35 - IDx75)) + (((num2 + 35) - IDy75)*((num2 + 35) - IDy75))) < 0.3){
		score += 1;
		IDx75 = -1;
		IDy75 = -1;
	}
	//ID76
	if (sqrt(((num + 35 - IDx76)*(num + 35 - IDx76)) + (((num2 + 35) - IDy76)*((num2 + 35) - IDy76))) < 0.3){
		score += 1;
		IDx76 = -1;
		IDy76 = -1;
	}
	//ID77
	if (sqrt(((num + 35 - IDx77)*(num + 35 - IDx77)) + (((num2 + 35) - IDy77)*((num2 + 35) - IDy77))) < 0.3){
		score += 1;
		IDx77 = -1;
		IDy77 = -1;
	}
	//ID78
	if (sqrt(((num + 35 - IDx78)*(num + 35 - IDx78)) + (((num2 + 35) - IDy78)*((num2 + 35) - IDy78))) < 0.3){
		score += 1;
		IDx78 = -1;
		IDy78 = -1;
	}
	//ID79
	if (sqrt(((num + 35 - IDx79)*(num + 35 - IDx79)) + (((num2 + 35) - IDy79)*((num2 + 35) - IDy79))) < 0.3){
		score += 1;
		IDx79 = -1;
		IDy79 = -1;
	}
	//ID80
	if (sqrt(((num + 35 - IDx80)*(num + 35 - IDx80)) + (((num2 + 35) - IDy80)*((num2 + 35) - IDy80))) < 0.3){
		score += 1;
		IDx80 = -1;
		IDy80 = -1;
	}
	//ID81
	if (sqrt(((num + 35 - IDx81)*(num + 35 - IDx81)) + (((num2 + 35) - IDy81)*((num2 + 35) - IDy81))) < 0.3){
		score += 1;
		IDx81 = -1;
		IDy81 = -1;
	}
	//ID82
	if (sqrt(((num + 35 - IDx82)*(num + 35 - IDx82)) + (((num2 + 35) - IDy82)*((num2 + 35) - IDy82))) < 0.3){
		score += 1;
		IDx82 = -1;
		IDy82 = -1;
	}
	//ID83
	if (sqrt(((num + 35 - IDx83)*(num + 35 - IDx83)) + (((num2 + 35) - IDy83)*((num2 + 35) - IDy83))) < 0.3){
		score += 1;
		IDx83 = -1;
		IDy83 = -1;
	}
	//ID84
	if (sqrt(((num + 35 - IDx84)*(num + 35 - IDx84)) + (((num2 + 35) - IDy84)*((num2 + 35) - IDy84))) < 0.3){
		score += 1;
		IDx84 = -1;
		IDy84 = -1;
	}
	//ID85
	if (sqrt(((num + 35 - IDx85)*(num + 35 - IDx85)) + (((num2 + 35) - IDy85)*((num2 + 35) - IDy85))) < 0.3){
		score += 1;
		IDx85 = -1;
		IDy85 = -1;
	}
	//ID86
	if (sqrt(((num + 35 - IDx86)*(num + 35 - IDx86)) + (((num2 + 35) - IDy86)*((num2 + 35) - IDy86))) < 0.3){
		score += 1;
		IDx86 = -1;
		IDy86 = -1;
	}
	//ID87
	if (sqrt(((num + 35 - IDx87)*(num + 35 - IDx87)) + (((num2 + 35) - IDy87)*((num2 + 35) - IDy87))) < 0.3){
		score += 1;
		IDx87 = -1;
		IDy87 = -1;
	}
	//ID88
	if (sqrt(((num + 35 - IDx88)*(num + 35 - IDx88)) + (((num2 + 35) - IDy88)*((num2 + 35) - IDy88))) < 0.3){
		score += 1;
		IDx88 = -1;
		IDy88 = -1;
	}
	//ID89
	if (sqrt(((num + 35 - IDx89)*(num + 35 - IDx89)) + (((num2 + 35) - IDy89)*((num2 + 35) - IDy89))) < 0.3){
		score += 1;
		IDx89 = -1;
		IDy89 = -1;
	}
	//ID90
	if (sqrt(((num + 35 - IDx90)*(num + 35 - IDx90)) + (((num2 + 35) - IDy90)*((num2 + 35) - IDy90))) < 0.3){
		score += 1;
		IDx90 = -1;
		IDy90 = -1;
	}
	//ID91
	if (sqrt(((num + 35 - IDx91)*(num + 35 - IDx91)) + (((num2 + 35) - IDy91)*((num2 + 35) - IDy91))) < 0.3){
		score += 1;
		IDx91 = -1;
		IDy91 = -1;
	}
	//ID92
	if (sqrt(((num + 35 - IDx92)*(num + 35 - IDx92)) + (((num2 + 35) - IDy92)*((num2 + 35) - IDy92))) < 0.3){
		score += 1;
		IDx92 = -1;
		IDy92 = -1;
	}
	//ID93
	if (sqrt(((num + 35 - IDx93)*(num + 35 - IDx93)) + (((num2 + 35) - IDy93)*((num2 + 35) - IDy93))) < 0.3){
		score += 1;
		IDx93 = -1;
		IDy93 = -1;
	}
	//ID94
	if (sqrt(((num + 35 - IDx94)*(num + 35 - IDx94)) + (((num2 + 35) - IDy94)*((num2 + 35) - IDy94))) < 0.3){
		score += 1;
		IDx94 = -1;
		IDy94 = -1;
	}
	//ID95
	if (sqrt(((num + 35 - IDx95)*(num + 35 - IDx95)) + (((num2 + 35) - IDy95)*((num2 + 35) - IDy95))) < 0.3){
		score += 1;
		IDx95 = -1;
		IDy95 = -1;
	}
	//ID96
	if (sqrt(((num + 35 - IDx96)*(num + 35 - IDx96)) + (((num2 + 35) - IDy96)*((num2 + 35) - IDy96))) < 0.3){
		score += 1;
		IDx96 = -1;
		IDy96 = -1;
	}
	//ID97
	if (sqrt(((num + 35 - IDx97)*(num + 35 - IDx97)) + (((num2 + 35) - IDy97)*((num2 + 35) - IDy97))) < 0.3){
		score += 1;
		IDx97 = -1;
		IDy97 = -1;
	}
	//ID98
	if (sqrt(((num + 35 - IDx98)*(num + 35 - IDx98)) + (((num2 + 35) - IDy98)*((num2 + 35) - IDy98))) < 0.3){
		score += 1;
		IDx98 = -1;
		IDy98 = -1;
	}
	//ID99
	if (sqrt(((num + 35 - IDx99)*(num + 35 - IDx99)) + (((num2 + 35) - IDy99)*((num2 + 35) - IDy99))) < 0.3){
		score += 1;
		IDx99 = -1;
		IDy99 = -1;
	}
	//ID100
	if (sqrt(((num + 35 - IDx100)*(num + 35 - IDx100)) + (((num2 + 35) - IDy100)*((num2 + 35) - IDy100))) < 0.3){
		score += 1;
		IDx100 = -1;
		IDy100 = -1;
	}
	//ID101
	if (sqrt(((num + 35 - IDx101)*(num + 35 - IDx101)) + (((num2 + 35) - IDy101)*((num2 + 35) - IDy101))) < 0.3){
		score += 1;
		IDx101 = -1;
		IDy101 = -1;
	}
	//ID102
	if (sqrt(((num + 35 - IDx102)*(num + 35 - IDx102)) + (((num2 + 35) - IDy102)*((num2 + 35) - IDy102))) < 0.3){
		score += 1;
		IDx102 = -1;
		IDy102 = -1;
	}
	//ID103
	if (sqrt(((num + 35 - IDx103)*(num + 35 - IDx103)) + (((num2 + 35) - IDy103)*((num2 + 35) - IDy103))) < 0.3){
		score += 1;
		IDx103 = -1;
		IDy103 = -1;
	}
	//ID104
	if (sqrt(((num + 35 - IDx104)*(num + 35 - IDx104)) + (((num2 + 35) - IDy104)*((num2 + 35) - IDy104))) < 0.3){
		score += 1;
		IDx104 = -1;
		IDy104 = -1;
	}
	//ID105
	if (sqrt(((num + 35 - IDx105)*(num + 35 - IDx105)) + (((num2 + 35) - IDy105)*((num2 + 35) - IDy105))) < 0.3){
		score += 1;
		IDx105 = -1;
		IDy105 = -1;
	}
	//ID106
	if (sqrt(((num + 35 - IDx106)*(num + 35 - IDx106)) + (((num2 + 35) - IDy106)*((num2 + 35) - IDy106))) < 0.3){
		score += 1;
		IDx106 = -1;
		IDy106 = -1;
	}
	//ID107
	if (sqrt(((num + 35 - IDx107)*(num + 35 - IDx107)) + (((num2 + 35) - IDy107)*((num2 + 35) - IDy107))) < 0.3){
		score += 1;
		IDx107 = -1;
		IDy107 = -1;
	}
	//ID108
	if (sqrt(((num + 35 - IDx108)*(num + 35 - IDx108)) + (((num2 + 35) - IDy108)*((num2 + 35) - IDy108))) < 0.3){
		score += 1;
		IDx108 = -1;
		IDy108 = -1;
	}
	//ID109
	if (sqrt(((num + 35 - IDx109)*(num + 35 - IDx109)) + (((num2 + 35) - IDy109)*((num2 + 35) - IDy109))) < 0.3){
		score += 1;
		IDx109 = -1;
		IDy109 = -1;
	}
	//ID110
	if (sqrt(((num + 35 - IDx110)*(num + 35 - IDx110)) + (((num2 + 35) - IDy110)*((num2 + 35) - IDy110))) < 0.3){
		score += 1;
		IDx110 = -1;
		IDy110 = -1;
	}
	//ID111
	if (sqrt(((num + 35 - IDx111)*(num + 35 - IDx111)) + (((num2 + 35) - IDy111)*((num2 + 35) - IDy111))) < 0.3){
		score += 1;
		IDx111 = -1;
		IDy111 = -1;
	}
	//ID112
	if (sqrt(((num + 35 - IDx112)*(num + 35 - IDx112)) + (((num2 + 35) - IDy112)*((num2 + 35) - IDy112))) < 0.3){
		score += 1;
		IDx112 = -1;
		IDy112 = -1;
	}
	//ID113
	if (sqrt(((num + 35 - IDx113)*(num + 35 - IDx113)) + (((num2 + 35) - IDy113)*((num2 + 35) - IDy113))) < 0.3){
		score += 1;
		IDx113 = -1;
		IDy113 = -1;
	}
	//ID114
	if (sqrt(((num + 35 - IDx114)*(num + 35 - IDx114)) + (((num2 + 35) - IDy114)*((num2 + 35) - IDy114))) < 0.3){
		score += 1;
		IDx114 = -1;
		IDy114 = -1;
	}
	//ID115
	if (sqrt(((num + 35 - IDx115)*(num + 35 - IDx115)) + (((num2 + 35) - IDy115)*((num2 + 35) - IDy115))) < 0.3){
		score += 1;
		IDx115 = -1;
		IDy115 = -1;
	}
	//ID116
	if (sqrt(((num + 35 - IDx116)*(num + 35 - IDx116)) + (((num2 + 35) - IDy116)*((num2 + 35) - IDy116))) < 0.3){
		score += 1;
		IDx116 = -1;
		IDy116 = -1;
	}
	//ID117
	if (sqrt(((num + 35 - IDx117)*(num + 35 - IDx117)) + (((num2 + 35) - IDy117)*((num2 + 35) - IDy117))) < 0.3){
		score += 1;
		IDx117 = -1;
		IDy117 = -1;
	}
	//ID118
	if (sqrt(((num + 35 - IDx118)*(num + 35 - IDx118)) + (((num2 + 35) - IDy118)*((num2 + 35) - IDy118))) < 0.3){
		score += 1;
		IDx118 = -1;
		IDy118 = -1;
	}
	//ID119
	if (sqrt(((num + 35 - IDx119)*(num + 35 - IDx119)) + (((num2 + 35) - IDy119)*((num2 + 35) - IDy119))) < 0.3){
		score += 1;
		IDx119 = -1;
		IDy119 = -1;
	}
	//ID120
	if (sqrt(((num + 35 - IDx120)*(num + 35 - IDx120)) + (((num2 + 35) - IDy120)*((num2 + 35) - IDy120))) < 0.3){
		score += 1;
		IDx120 = -1;
		IDy120 = -1;
	}
	//ID121
	if (sqrt(((num + 35 - IDx121)*(num + 35 - IDx121)) + (((num2 + 35) - IDy121)*((num2 + 35) - IDy121))) < 0.3){
		score += 1;
		IDx121 = -1;
		IDy121 = -1;
	}
	//ID122
	if (sqrt(((num + 35 - IDx122)*(num + 35 - IDx122)) + (((num2 + 35) - IDy122)*((num2 + 35) - IDy122))) < 0.3){
		score += 1;
		IDx122 = -1;
		IDy122 = -1;
	}
	//ID123
	if (sqrt(((num + 35 - IDx123)*(num + 35 - IDx123)) + (((num2 + 35) - IDy123)*((num2 + 35) - IDy123))) < 0.3){
		score += 1;
		IDx123 = -1;
		IDy123 = -1;
	}
	//ID124
	if (sqrt(((num + 35 - IDx124)*(num + 35 - IDx124)) + (((num2 + 35) - IDy124)*((num2 + 35) - IDy124))) < 0.3){
		score += 1;
		IDx124 = -1;
		IDy124 = -1;
	}
	//ID125
	if (sqrt(((num + 35 - IDx125)*(num + 35 - IDx125)) + (((num2 + 35) - IDy125)*((num2 + 35) - IDy125))) < 0.3){
		score += 1;
		IDx125 = -1;
		IDy125 = -1;
	}
	//ID126
	if (sqrt(((num + 35 - IDx126)*(num + 35 - IDx126)) + (((num2 + 35) - IDy126)*((num2 + 35) - IDy126))) < 0.3){
		score += 1;
		IDx126 = -1;
		IDy126 = -1;
	}
	//ID127
	if (sqrt(((num + 35 - IDx127)*(num + 35 - IDx127)) + (((num2 + 35) - IDy127)*((num2 + 35) - IDy127))) < 0.3){
		score += 1;
		IDx127 = -1;
		IDy127 = -1;
	}
	//ID128
	if (sqrt(((num + 35 - IDx128)*(num + 35 - IDx128)) + (((num2 + 35) - IDy128)*((num2 + 35) - IDy128))) < 0.3){
		score += 1;
		IDx128 = -1;
		IDy128 = -1;
	}
	//ID129
	if (sqrt(((num + 35 - IDx129)*(num + 35 - IDx129)) + (((num2 + 35) - IDy129)*((num2 + 35) - IDy129))) < 0.3){
		score += 1;
		IDx129 = -1;
		IDy129 = -1;
	}
	//ID130
	if (sqrt(((num + 35 - IDx130)*(num + 35 - IDx130)) + (((num2 + 35) - IDy130)*((num2 + 35) - IDy130))) < 0.3){
		score += 1;
		IDx130 = -1;
		IDy130 = -1;
	}
	//ID131
	if (sqrt(((num + 35 - IDx131)*(num + 35 - IDx131)) + (((num2 + 35) - IDy131)*((num2 + 35) - IDy131))) < 0.3){
		score += 1;
		IDx131 = -1;
		IDy131 = -1;
	}
	//ID132
	if (sqrt(((num + 35 - IDx132)*(num + 35 - IDx132)) + (((num2 + 35) - IDy132)*((num2 + 35) - IDy132))) < 0.3){
		score += 1;
		IDx132 = -1;
		IDy132 = -1;
	}
	//ID133
	if (sqrt(((num + 35 - IDx133)*(num + 35 - IDx133)) + (((num2 + 35) - IDy133)*((num2 + 35) - IDy133))) < 0.3){
		score += 1;
		IDx133 = -1;
		IDy133 = -1;
	}
	//ID134
	if (sqrt(((num + 35 - IDx134)*(num + 35 - IDx134)) + (((num2 + 35) - IDy134)*((num2 + 35) - IDy134))) < 0.3){
		score += 1;
		IDx134 = -1;
		IDy134 = -1;
	}
	//ID135
	if (sqrt(((num + 35 - IDx135)*(num + 35 - IDx135)) + (((num2 + 35) - IDy135)*((num2 + 35) - IDy135))) < 0.3){
		score += 1;
		IDx135 = -1;
		IDy135 = -1;
	}
	//ID136
	if (sqrt(((num + 35 - IDx136)*(num + 35 - IDx136)) + (((num2 + 35) - IDy136)*((num2 + 35) - IDy136))) < 0.3){
		score += 1;
		IDx136 = -1;
		IDy136 = -1;
	}
	//ID137
	if (sqrt(((num + 35 - IDx137)*(num + 35 - IDx137)) + (((num2 + 35) - IDy137)*((num2 + 35) - IDy137))) < 0.3){
		score += 1;
		IDx137 = -1;
		IDy137 = -1;
	}
	//ID138
	if (sqrt(((num + 35 - IDx138)*(num + 35 - IDx138)) + (((num2 + 35) - IDy138)*((num2 + 35) - IDy138))) < 0.3){
		score += 1;
		IDx138 = -1;
		IDy138 = -1;
	}
	//ID139
	if (sqrt(((num + 35 - IDx139)*(num + 35 - IDx139)) + (((num2 + 35) - IDy139)*((num2 + 35) - IDy139))) < 0.3){
		score += 1;
		IDx139 = -1;
		IDy139 = -1;
	}
	//ID140
	if (sqrt(((num + 35 - IDx140)*(num + 35 - IDx140)) + (((num2 + 35) - IDy140)*((num2 + 35) - IDy140))) < 0.3){
		score += 1;
		IDx140 = -1;
		IDy140 = -1;
	}
	//ID141
	if (sqrt(((num + 35 - IDx141)*(num + 35 - IDx141)) + (((num2 + 35) - IDy141)*((num2 + 35) - IDy141))) < 0.3){
		score += 1;
		IDx141 = -1;
		IDy141 = -1;
	}
	//ID142
	if (sqrt(((num + 35 - IDx142)*(num + 35 - IDx142)) + (((num2 + 35) - IDy142)*((num2 + 35) - IDy142))) < 0.3){
		score += 1;
		IDx142 = -1;
		IDy142 = -1;
	}
	//ID143
	if (sqrt(((num + 35 - IDx143)*(num + 35 - IDx143)) + (((num2 + 35) - IDy143)*((num2 + 35) - IDy143))) < 0.3){
		score += 1;
		IDx143 = -1;
		IDy143 = -1;
	}
	//ID144
	if (sqrt(((num + 35 - IDx144)*(num + 35 - IDx144)) + (((num2 + 35) - IDy144)*((num2 + 35) - IDy144))) < 0.3){
		score += 1;
		IDx144 = -1;
		IDy144 = -1;
	}
	//ID145
	if (sqrt(((num + 35 - IDx145)*(num + 35 - IDx145)) + (((num2 + 35) - IDy145)*((num2 + 35) - IDy145))) < 0.3){
		score += 1;
		IDx145 = -1;
		IDy145 = -1;
	}

}

void Wall(){
	if (flagR == 0){
		for (int i = 35; i < 176; i++){
			if (sqrt(((num + 35 - i)*(num + 35 - i)) + (((num2 + 35) - 34)*((num2 + 35) - 34))) < 0.3 ){
				num2 += 1;
			}
		}
	}
	else{
		glutPostRedisplay();
	}



	if (flagUP == 0){
		for (int i = 35; i < 116; i++){
			if (sqrt(((num + 35 - 176)*(num + 35 - 176)) + (((num2 + 35) - i)*((num2 + 35) - i))) < 0.3){
				num -= 1;
			}
		}
	}
	else{
		glutPostRedisplay();
	}

	if (flagD == 0){
		for (int i = 115; i < 176; i++)
		{
			if (sqrt(((num + 35 - i)*(num + 35 - i)) + (((num2 + 35) - 116)*((num2 + 35) - 116))) < 0.3){
				num2 -= 1;
			}
		}
	}
	else{
		glutPostRedisplay();
	}

}
int degree1 = 45;
int degree2 = -225;
void Character(){

	glPushMatrix();
	glTranslatef(35, 35, 0);
	glRotatef(degree1, 0, 0, 1);
	glTranslatef(-35, -35, 0);
	Semicircle(35, 35, 4);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(35, 35, 0);
	glRotatef(degree2, 0, 0, 1);
	glTranslatef(-35, -35, 0);
	Semicircle(35, 35, 4);
	glPopMatrix();

}
int sum0 = 0;
void specialkey(int key, int x, int y)

{
	switch (key)
	{
	case GLUT_KEY_RIGHT:
		flagR = 1;
		flagUP = 0;
		flagD = 0;
		num += 1;
		sum0 += 1;
		if (sum0 == 1){
			degree1 = 45;
			degree2 = -225;
		}
		else
		{
			degree1 = 4;
			degree2 = -190;
			sum0 = 0;
		}
		break;
	case GLUT_KEY_LEFT:
		flagR = 0;
		flagUP = 0;
		flagD = 0;
		num -= 1;
		sum0 += 1;
		if (sum0 == 1){
			degree1 = -45;
			degree2 = 225;
		}
		else
		{
			degree1 = -4;
			degree2 = 180;
			sum0 = 0;
		}
		break;
	case GLUT_KEY_UP:
		flagR = 0;
		flagUP = 1;
		flagD = 0;
		num2 += 1;
		sum0 += 1;
		if (sum0 == 1){
			degree1 = -120;
			degree2 = -240;
		}
		else
		{
			degree1 = 95;
			degree2 = 270;
			sum0 = 0;
		}
		break;
	case GLUT_KEY_DOWN:
		flagR = 0;
		flagUP = 0;
		flagD = 1;
		num2 -= 1;
		sum0 += 1;
		if (sum0 == 1){
			degree1 = 60;
			degree2 = -45;
		}
		else
		{
			degree1 = 85;
			degree2 = -90;
			sum0 = 0;
		}
		break;

	}
	glutPostRedisplay();
}

void Scoretext(const char *text, int length, int x, int y){
	glMatrixMode(GL_PROJECTION);
	double *matrix = new double[16];
	glGetDoublev(GL_PROJECTION_MATRIX, matrix);
	glLoadIdentity();
	glOrtho(0, 210, 0, 150, 1, 1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glLoadIdentity();
	glRasterPos2i(x, y);
	for (int i = 0; i < length; i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, (int)text[i]);
	}
	glPopMatrix();
	glMatrixMode(GL_PROJECTION);
	glLoadMatrixd(matrix);
	glMatrixMode(GL_MODELVIEW);
}

void mainmenu(int value){
	switch (value){
	case 999: exit(0); break;
	}
}

void display(void){
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);

	MAP();
	Point();

	glPushMatrix();
	glTranslatef(num, num2, 0);
	Character();
	glPopMatrix();

	PointEffect();
	Star();
	Wall();
	Mon();

	/*std::string text;
	text = "Score : ";
	Scoretext(text.data(), text.size(), 0, 0);*/

	glutSwapBuffers();
}

int main(int argc, char** argv){
	//ทำไม่ทันครับแต่เสร็จไป50%  T_T
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1000, 700);
	glutInitWindowPosition(210, 150);
	glutCreateWindow("Pacman");
	gluOrtho2D(0, 210, 0, 150);
	glutDisplayFunc(display);
	glutCreateMenu(mainmenu);
	glutAddMenuEntry("Quit", 999);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutSpecialFunc(specialkey);
	glutMainLoop();
}
