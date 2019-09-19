

#include<GL/glut.h>
#include<stdio.h>
#include<string.h>

float x1 = 342.5, y1 = 10.0, x2 = 361.5, y2 = 10.0, x3 = 361.5, y3 = 60.0, x4 = 342.5, y4 = 60.0;
void displayText(float x, float y, int r, int g, int b, const char* string);
void displayText1(float x, float y, int r, int g, int b, const char* string);
void display1();
void classroom();
void display();
void manual();
void text1();
void opendoor();
void screen();
void menu(int);

void k1(unsigned char k, int x, int y)
{
	switch (k)
	{
	case 'm': manual();
		break;

	case 'd': display1();
		break;

	case 'b': display();
		break;

	case 'o': opendoor();
		break;

	case 'e': exit(0);
	}


}

void displayText(float x, float y, int r, int g, int b, const char* string) {
	int j = strlen(string);

	glColor3f(r, g, b);
	glRasterPos2f(x, y);
	for (int i = 0; i < j; i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);
	}
}



void displayText1(float x, float y, int r, int g, int b, const char* string) {
	int j = strlen(string);

	glColor3f(r, g, b);
	glRasterPos2f(x, y);
	for (int i = 0; i < j; i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, string[i]);
	}
}
void manual()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	displayText(150.0, 310.0, 1, 0, 1, "CONTENTS");
	displayText(150.0, 260.0, 1, 0, 0, "press 'b' back to title page");
	displayText(150.0, 230.0, 1, 0, 0, "press 'd' for the demonstration of project");
	displayText(150.0, 200.0, 1, 0, 0, "press 'o' to open the door and enter into classroom");
	displayText(150.0, 170.0, 1, 0, 0, "press 'e' to exit");
	glFlush();
}
void display()
{
	glClearColor(0.258824, 0.258824, 0.435294, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	displayText(195, 450, 1, 1, 1, "PROJECT TITLE");
	displayText(200, 400, 1, 0, 1, "E-LEARNING");
	displayText(40, 350, 1, 1, 1, "TEAM MEMBERS:");
	displayText(300, 350, 1, 1, 1, "USN:");
	displayText(40, 285, 0, 1, 0, "VARSHINI.N");
	displayText(300, 285, 0, 1, 0, "1CG16CS112");
	
	displayText(160.0, 200.0, 1, 1, 1, "UNDER THE GUIDANCE OF");
	displayText(100.0, 150.0, 1, 1, 0, "Lohiteshkumar N");
	displayText1(100.0, 140.0, 1, 1, 0, "Assistant Professor, Dept of CSE");
	displayText1(100.0, 130, 1, 1, 0, "CIT, Gubbi");
	
	displayText(250.0, 150.0, 1, 1, 0, "Dharaneshkumar M L");
	displayText1(250.0, 140.0, 1, 1, 0, "Assistant Professor, Dept of CSE");
	displayText1(250.0, 130, 1, 1, 0, "CIT, Gubbi");
	displayText(150, 80, 0, 1, 0, "PRESS 'm' FOR MANUAL PAGE");
	glFlush();

}

void classroom()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(100.0, 60.0);
	glVertex2f(100.0, 260.0);
	glVertex2f(235.0, 320.0);
	glVertex2f(380.0, 260.0);
	glVertex2f(380.0, 60.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex2f(0.0, 0.0);
	glVertex2f(0.0, 480.0);
	glVertex2f(100.0, 260.0);
	glVertex2f(100.0, 60.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex2f(500.0, 0.0);
	glVertex2f(380.0, 60.0);
	glVertex2f(380.0, 260.0);
	glVertex2f(500.0, 390.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.57, 0.37, 0.36);
	glVertex2f(0.0, 0.0);
	glVertex2f(100.0, 60.0);
	glVertex2f(380.0, 60.0);
	glVertex2f(500.0, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.647059, 0.164706, 0.164706);
	glVertex2f(10.0, 445.0);
	glVertex2f(10.0, 457.0);
	glVertex2f(275.0, 494.0);
	glVertex2f(495.0, 387.0);
	glVertex2f(495.0, 375.0);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(15.0, 450.0);
	glVertex2f(15.0, 452.0);
	glVertex2f(275.0, 485.0);
	glVertex2f(490.0, 385.0);
	glVertex2f(490.0, 383.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.647059, 0.164706, 0.164706);
	glVertex2f(44.0, 368.0);
	glVertex2f(44.0, 380.0);
	glVertex2f(260.0, 408.0);
	glVertex2f(450.0, 335.0);
	glVertex2f(450.0, 323.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(50.0, 374.0);
	glVertex2f(50.0, 376.0);
	glVertex2f(260.0, 402.0);
	glVertex2f(444.0, 332.0);
	glVertex2f(444.0, 330.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.647059, 0.164706, 0.164706);
	glVertex2f(315.0, 407.0);
	glVertex2f(315.0, 469.0);
	glVertex2f(320.0, 469.0);
	glVertex2f(320.0, 405.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.647059, 0.164706, 0.164706);
	glVertex2f(380.0, 398.0);
	glVertex2f(380.0, 438.0);
	glVertex2f(385.0, 437.0);
	glVertex2f(385.0, 397.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.647059, 0.164706, 0.164706);
	glVertex2f(435.0, 385.0);
	glVertex2f(435.0, 411.0);
	glVertex2f(440.0, 409.0);
	glVertex2f(440.0, 386.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.647059, 0.164706, 0.164706);
	glVertex2f(230.0, 418.0);
	glVertex2f(230.0, 479.0);
	glVertex2f(235.0, 480.0);
	glVertex2f(235.0, 418.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.647059, 0.164706, 0.164706);
	glVertex2f(150.0, 431.0);
	glVertex2f(150.0, 469.0);
	glVertex2f(155.0, 470.0);
	glVertex2f(155.0, 430.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.647059, 0.164706, 0.164706);
	glVertex2f(75.0, 441.0);
	glVertex2f(75.0, 460.0);
	glVertex2f(80.0, 461.0);
	glVertex2f(80.0, 440.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.647059, 0.164706, 0.164706);
	glVertex2f(85.0, 370.0);
	glVertex2f(85.0, 381.0);
	glVertex2f(90.0, 381.0);
	glVertex2f(90.0, 369.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.647059, 0.164706, 0.164706);
	glVertex2f(150.0, 362.0);
	glVertex2f(150.0, 389.0);
	glVertex2f(155.0, 390.0);
	glVertex2f(155.0, 362.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.647059, 0.164706, 0.164706);
	glVertex2f(220.0, 355.0);
	glVertex2f(220.0, 397.0);
	glVertex2f(225.0, 398.0);
	glVertex2f(225.0, 354.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.647059, 0.164706, 0.164706);
	glVertex2f(300.0, 344.0);
	glVertex2f(300.0, 387.0);
	glVertex2f(305.0, 385.0);
	glVertex2f(305.0, 344.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.647059, 0.164706, 0.164706);
	glVertex2f(360.0, 339.0);
	glVertex2f(360.0, 365.0);
	glVertex2f(365.0, 365.0);
	glVertex2f(365.0, 339.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.647059, 0.164706, 0.164706);
	glVertex2f(405.0, 334.0);
	glVertex2f(405.0, 347.0);
	glVertex2f(410.0, 347.0);
	glVertex2f(410.0, 334.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(140.0, 278.0);
	glVertex2f(115.0, 500.0);
	glVertex2f(145.0, 280.0);
	glVertex2f(120.0, 500.0);
	glVertex2f(185.0, 298.0);
	glVertex2f(185.0, 500.0);
	glVertex2f(190.0, 300.0);
	glVertex2f(190.0, 500.0);
	glVertex2f(236.0, 320.0);
	glVertex2f(277.0, 500.0);
	glVertex2f(230.0, 317.0);
	glVertex2f(272.0, 500.0);
	glVertex2f(240.0, 317.0);
	glVertex2f(282.0, 500.0);
	glVertex2f(280.0, 300.0);
	glVertex2f(365.0, 500.0);
	glVertex2f(285.0, 300.0);
	glVertex2f(370.0, 500.0);
	glVertex2f(327.0, 281.0);
	glVertex2f(445.0, 500.0);
	glVertex2f(332.0, 280.0);
	glVertex2f(450.0, 500.0);
	glEnd();

	screen();
	glFlush();

}

void screen()
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(180.0, 130.0);
	glVertex2f(180.0, 240.0);
	glVertex2f(300.0, 240.0);
	glVertex2f(300.0, 130.0);
	glEnd();
	displayText(220.0, 260, 0, 0, 0, "DISPLAY");
	glFlush();
}

void window()
{
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(10.0, 410.0);
	glVertex2f(20.0, 410.0);
	glVertex2f(20.0, 430.0);
	glVertex2f(10.0, 430.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(40.0, 410.0);
	glVertex2f(50.0, 410.0);
	glVertex2f(50.0, 430.0);
	glVertex2f(40.0, 430.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(25.0, 350.0);
	glVertex2f(35.0, 350.0);
	glVertex2f(35.0, 370.0);
	glVertex2f(25.0, 370.0);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(10.0, 300.0);
	glVertex2f(20.0, 300.0);
	glVertex2f(20.0, 320.0);
	glVertex2f(10.0, 320.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(40.0, 300.0);
	glVertex2f(50.0, 300.0);
	glVertex2f(50.0, 320.0);
	glVertex2f(40.0, 320.0);
	glEnd();

	//windows of building 2

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(75.0, 430.0);
	glVertex2f(85.0, 430.0);
	glVertex2f(85.0, 450.0);
	glVertex2f(75.0, 450.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(100.0, 430.0);
	glVertex2f(110.0, 430.0);
	glVertex2f(110.0, 450.0);
	glVertex2f(100.0, 450.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(75.0, 320.0);
	glVertex2f(85.0, 320.0);
	glVertex2f(85.0, 340.0);
	glVertex2f(75.0, 340.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(100.0, 320.0);
	glVertex2f(110.0, 320.0);
	glVertex2f(110.0, 340.0);
	glVertex2f(100.0, 340.0);
	glEnd();

	//windows for building 3

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(140.0, 410.0);
	glVertex2f(150.0, 410.0);
	glVertex2f(150.0, 430.0);
	glVertex2f(140.0, 430.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(155.0, 350.0);
	glVertex2f(165.0, 350.0);
	glVertex2f(165.0, 370.0);
	glVertex2f(155.0, 370.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(140.0, 290.0);
	glVertex2f(150.0, 290.0);
	glVertex2f(150.0, 310.0);
	glVertex2f(140.0, 310.0);
	glEnd();
}

void building()
{

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(0.0, 260.0);
	glVertex2f(60.0, 260.0);
	glVertex2f(60.0, 450.0);
	glVertex2f(0.0, 450.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0, 0.0);
	glVertex2f(65.0, 270.0);
	glVertex2f(120.0, 270.0);
	glVertex2f(120.0, 470.0);
	glVertex2f(65.0, 470.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(125.0, 260.0);
	glVertex2f(180.0, 260.0);
	glVertex2f(180.0, 450.0);
	glVertex2f(125.0, 450.0);
	glEnd();
	window();
	glFlush();
}

void server()
{
	glBegin(GL_QUADS);
	glColor3f(0.80, 0.80, 0.80);
	glVertex2f(300.0, 260.0);
	glVertex2f(430.0, 260.0);
	glVertex2f(430.0, 360.0);
	glVertex2f(300.0, 360.0);
	glEnd();

	displayText(350, 310, 0, 0, 0, "SERVER");

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(355.0, 360.0);
	glVertex2f(375.0, 360.0);
	glVertex2f(375.0, 370.0);
	glVertex2f(355.0, 370.0);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(360.0, 370.0);
	glVertex2f(370.0, 360.0);
	glVertex2f(360.0, 390.0);
	glVertex2f(355.0, 385.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(355.0, 385.0);
	glVertex2f(360.0, 390.0);
	glVertex2f(370.0, 430.0);
	glVertex2f(350.0, 410.0);
	glVertex2f(330.0, 410.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(330.0, 410.0);
	glVertex2f(345.0, 425.0);
	glVertex2f(370.0, 430.0);
	glVertex2f(350.0, 410.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(346.0, 410.0);
	glVertex2f(355.0, 416.0);
	glVertex2f(342.0, 450.0);
	glEnd();
}

void school()
{
	glBegin(GL_QUADS);
	glColor3f(0.858824, 0.439216, 0.858824);
	glVertex2f(300.0, 10.0);
	glVertex2f(400.0, 10.0);
	glVertex2f(400.0, 120.0);
	glVertex2f(300.0, 120.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.4, 0.16, 0.14);
	glVertex2f(300.0, 120.0);
	glVertex2f(400.0, 120.0);
	glVertex2f(350.0, 180.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.647059, 0.164706, 0.164706);
	glVertex2f(300.0, 120.0);
	glVertex2f(350.0, 180.0);
	glVertex2f(190.0, 200.0);
	glVertex2f(200.0, 140.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.16, 0.54, 0.89);
	glVertex2f(300.0, 120.0);
	glVertex2f(200.0, 140.0);
	glVertex2f(200.0, 30.0);
	glVertex2f(300.0, 10.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.59, 0.165417, 0.2365149);
	glVertex2f(190.0, 200.0);
	glVertex2f(90.0, 180.0);
	glVertex2f(120.0, 120.0);
	glVertex2f(200.0, 140.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.89145, 0.768451, 0.231546);
	glVertex2f(200.0, 140.0);
	glVertex2f(120.0, 120.0);
	glVertex2f(120.0, 10.0);
	glVertex2f(200.0, 30.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.858824, 0.439216, 0.858824);
	glVertex2f(120.0, 120.0);
	glVertex2f(60.0, 120.0);
	glVertex2f(60.0, 10.0);
	glVertex2f(120.0, 10.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.4, 0.16, 0.14);
	glVertex2f(60.0, 120.0);
	glVertex2f(120.0, 120.0);
	glVertex2f(90.0, 180.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(240.0, 60.0);
	glVertex2f(260.0, 56.0);
	glVertex2f(260.0, 85.0);
	glVertex2f(240.0, 88.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(250.0, 58.0);
	glVertex2f(250.0, 86.0);
	glVertex2f(240.0, 74.0);
	glVertex2f(260.0, 71.8);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(145.0, 56.0);
	glVertex2f(160.0, 60.0);
	glVertex2f(160.0, 88.0);
	glVertex2f(145.0, 85.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(152.0, 58.0);
	glVertex2f(152.0, 86.0);
	glVertex2f(145.0, 71.0);
	glVertex2f(160.0, 74.3);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.52, 0.37, 0.26);
	glVertex2f(342.5, 10.0);
	glVertex2f(362.5, 10.0);
	glVertex2f(362.5, 60.0);
	glVertex2f(342.5, 60.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.52, 0.37, 0.26);
	glVertex2f(80.0, 10.0);
	glVertex2f(100.0, 10.0);
	glVertex2f(100.0, 60.0);
	glVertex2f(80.0, 60.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(255.0, 135.0);
	glVertex2f(275.0, 136.0);
	glVertex2f(275.0, 147.0);
	glVertex2f(255.0, 146.0);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(262.0, 146.0);
	glVertex2f(267.0, 146.0);
	glVertex2f(265.0, 161.0);
	glVertex2f(260.0, 160.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(260.0, 160.0);
	glVertex2f(265.0, 161.0);
	glVertex2f(278.0, 195.0);
	glVertex2f(260.0, 183.0);
	glVertex2f(242.0, 185.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(278.0, 195.0);
	glVertex2f(260.0, 183.0);
	glVertex2f(241.0, 185.0);
	glVertex2f(257.0, 200.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(256, 183);
	glVertex2f(264, 185);
	glVertex2f(256, 220);
	glEnd();

	displayText(335, 100, 0, 0, 0, "SCHOOL");

}

void signals(float x1, float y1, float x2, float y2)
{
	int i;
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glEnd();
	for (i = 0; i < 500; i++)
	{
		glFlush();
	}
}

void edgedetect(float x1, float y1, float x2, float y2, int* le, int* re)
{
	float mx, temp, x;
	int i;

	if ((y2 - y1) < 0)
	{
		temp = y2; y2 = y1; y1 = temp;
		temp = x2; x2 = x1; x1 = temp;
	}
	if ((y2 - y1) != 0)
		mx = (x2 - x1) / (y2 - y1);
	else
		mx = x2 - x1;
	x = x1;

	for (i = y1; i <= y2; i++)
	{
		if (x < (float)le[i])
			le[i] = (int)x;
		if (x > (float)re[i])
			re[i] = (int)x;

		x += mx;
	}
}

void drawpixel(float x, float y)
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POINTS);
	glVertex2f(x, y);
	glEnd();
	glFlush();
}

void scanfil(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)
{
	int le[500], re[500];
	int i, j;
	for (i = 0; i < 500; i++)
	{
		le[i] = 500;
		re[i] = 0;
	}
	edgedetect(y1, x1, y2, x2, le, re);
	edgedetect(y2, x2, y3, x3, le, re);
	edgedetect(y3, x3, y4, x4, le, re);
	edgedetect(y4, x4, y1, x1, le, re);

	for (i = 0; i < 500; i++)
		if (le[i] <= re[i])
			for (j = le[i]; j < re[i]; j++)
				drawpixel(i, j);
}
void opendoor()
{
	glColor3f(0.52, 0.37, 0.26);
	glBegin(GL_LINE_LOOP);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glVertex2f(x3, y3);
	glVertex2f(x4, y4);
	glEnd();
	scanfil(x1, y1, x2, y2, x3, y3, x4, y4);
	glFlush();
	classroom();
	glFlush();
}


void display1()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glColor3f(0.329412, 0.329412, 0.329412);
	glVertex2f(0.0, 0.0);
	glVertex2f(500.0, 0.0);
	glVertex2f(500.0, 250.0);
	glVertex2f(0.0, 250.0);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(0.89, 0.47, 0.20);
	glVertex2f(500.0, 250.0);
	glVertex2f(500.0, 500.0);
	glVertex2f(0.0, 500.0);
	glVertex2f(0.0, 250.0);
	glEnd();

	displayText(430.0, 480.0, 0, 0, 0, "URBAN");
	displayText(430.0, 230.0, 0, 0, 0, "RURAL");
	displayText(405.0, 180.0, 0, 0, 0, "press 'o' to open the");
	displayText(405.0, 160, 0, 0, 0, "door and enter into");
	displayText(405.0, 140.0, 0, 0, 0, "the class room.");
	displayText(405.0, 115.0, 0, 0, 0, "press 'e' to exit.");
	displayText(220.0, 370.0, 0, 0, 0, "Data");
	displayText(200.0, 355.0, 0, 0, 0, "communication");

	building();
	server();
	school();
	signals(332.0, 443.0, 338.0, 448.0);
	signals(322.0, 435.0, 327.0, 440.0);
	signals(313.0, 424.0, 318.0, 430.0);
	signals(304.0, 412.0, 309.0, 418.0);
	signals(294.0, 399.0, 300.0, 407.0);
	signals(285.0, 385.0, 290.0, 393.0);
	signals(277.0, 368.0, 281.0, 377.0);
	signals(271.0, 350.0, 274.0, 360.0);
	signals(267.0, 330.0, 269.0, 340.0);
	signals(264.0, 310.0, 265.0, 320.0);
	signals(261.0, 290.0, 262.0, 300.0);
	signals(259.0, 270.0, 260.0, 280.0);
	signals(257.0, 250.0, 258.0, 260.0);
	signals(256.0, 230.0, 256.0, 240.0);
	glFlush();


}

void numbers()
{
	screen();
	displayText(210.0, 220.0, 1, 1, 1, "NUMBERS");
	displayText(195.0, 205.0, 1, 1, 1, "1-ONE");
	displayText(195.0, 190.0, 1, 1, 1, "2-TWO");
	displayText(195.0, 175.0, 1, 1, 1, "3-THREE");
	displayText(195.0, 160.0, 1, 1, 1, "4-FOUR");
	glFlush();

}

void alphabets()
{
	screen();
	displayText(210.0, 220.0, 1, 1, 1, "ALPHABETS");
	displayText(195.0, 200.0, 1, 1, 1, "A-APPLE");
	displayText(195.0, 185.0, 1, 1, 1, "B-BALL");
	glFlush();
}

void createmenu()
{
	int p0, p1;
	p0 = glutCreateMenu(menu);
	glutAddMenuEntry("alphabets", 2);
	glutAddMenuEntry("numbers", 3);

	p1 = glutCreateMenu(menu);
	glutAddMenuEntry("clear screen", 1);
	glutAddSubMenu("subject", p0);
	glutAddMenuEntry("quit", 4);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
}

void menu(int value)
{
	switch (value)
	{
	case 1:screen();
		break;

	case 2:alphabets();
		break;

	case 3:numbers();
		break;

	case 4:exit(0);
	}

}

void myinit()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	glPointSize(5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 500.0, 0.0, 500.0);

}

void main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1200, 800);
	glutCreateWindow("E-LEARNING");
	glutDisplayFunc(display);
	glutKeyboardFunc(k1);
	createmenu();
	myinit();
	glutMainLoop();

}
