#include <GL/glut.h>
#include <stdio.h>

void inicializa()
{
	 glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glClearColor(0.62,0.81,0.73,0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,1000,0,1000);
}

void pintaNube1(){
	
	
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glClear(GL_COLOR_BUFFER_BIT);	
	glLineWidth(3.0);
	glBegin(GL_TRIANGLES);
	
	//1
	glColor3f(0.96,0.88,0.65);
	glVertex2i(67,801);
	glVertex2i(104,817);
	glVertex2i(136,801);
	//2
	glColor3f(0.93,0.79,0.58);

	
	glVertex2i(149,782);
	glVertex2i(161,795);
	glVertex2i(136,801);
	//3
	glColor3f(0.93,0.79,0.58);
	glVertex2i(104,817);
	glVertex2i(136,801);
	glVertex2i(134,831);
	//4
	glColor3f(0.97,0.91,0.69);
	glVertex2i(134,831);
	glVertex2i(136,801);
	glVertex2i(188,823);
	//5
	glColor3f(0.96,0.88,0.65);
	glVertex2i(149,782);
	glVertex2i(207,785);
	glVertex2i(161,795);
	//6

	glColor3f(0.96,0.88,0.65);
	glVertex2i(136,801);
	glVertex2i(207,785);
	glVertex2i(188,823);
	//7
	glColor3f(0.97,0.91,0.69);
	glVertex2i(207,785);
	glVertex2i(245,780);
	glVertex2i(253,790);
	//8
	glVertex2i(253,790);
	glVertex2i(245,780);
	glVertex2i(265,791);
	//9
	glColor3f(0.96,0.88,0.65);
	glVertex2i(207,785);
	glVertex2i(265,791);
	glVertex2i(242,809);
	//10
	glColor3f(0.97,0.91,0.69);
	glVertex2i(207,785);
	glVertex2i(188,823);
	glVertex2i(242,809);
	//11
	glColor3f(0.93,0.79,0.58);
	glVertex2i(164,827);
	glVertex2i(205,850);
	glVertex2i(188,823);
	//12
	glVertex2i(205,850);
	glVertex2i(188,823);
	glVertex2i(242,809);
	//13
	glVertex2i(222,832);
	glVertex2i(242,809);
	glVertex2i(243,838);
	//14
	glColor3f(0.97,0.91,0.69);
	glVertex2i(242,809);
	glVertex2i(265,791);
	glVertex2i(267,820);
	//15
	glColor3f(0.97,0.91,0.69);
	glVertex2i(242,809);
	glVertex2i(243,838);
	glVertex2i(267,820);
	//16
	glColor3f(0.96,0.88,0.65);
	glVertex2i(267,820);
	glVertex2i(265,791);
	glVertex2i(313,799);
	//17
	
	glColor3f(0.97,0.91,0.69);
	glVertex2i(265,791);
	glVertex2i(318,780);
	glVertex2i(313,799);
	//18
	glColor3f(0.97,0.91,0.69);
	glVertex2i(318,780);
	glVertex2i(313,799);
	glVertex2i(393,789);
	//19
	glColor3f(0.96,0.88,0.65);

	glVertex2i(313,799);
	glVertex2i(393,789);
	glVertex2i(345,830);
	//20

	glColor3f(0.97,0.91,0.69);
	


	glVertex2i(267,820);
	glVertex2i(313,799);
	glVertex2i(345,830);
	//21
	glVertex2i(267,820);
	glVertex2i(311,826);
	glVertex2i(291,842);
	//22
	glColor3f(0.93,0.79,0.58);
	glVertex2i(291,842);
	glVertex2i(311,826);
	glVertex2i(345,830);
	
	
	
	//nube 2
	glColor3f(0.97,0.91,0.69);
	
	//1
	glVertex2i(551,850);
	glVertex2i(618,851);
	glVertex2i(617,880);

//2
	glColor3f(0.97,0.91,0.69);
	glVertex2i(618,851);
	glVertex2i(617,880);
	glVertex2i(649,875);
//3
	glColor3f(0.97,0.91,0.69);
	glVertex2i(618,851);
	glVertex2i(632,831);
	glVertex2i(686,834);
//4
	glColor3f(0.96, 0.88, 0.63);
	glVertex2i(649,875);
	glVertex2i(686,834);
	glVertex2i(618,851);
//5
	glColor3f(0.97,0.91,0.69);
	glVertex2i(649,875);
	glVertex2i(686,834);
	glVertex2i(722,858);
//6
	glColor3f(0.96, 0.88, 0.63);
	glVertex2i(649,875);
	glVertex2i(722,858);
	glVertex2i(687,898);
//7
	glColor3f(0.96, 0.88, 0.63);
	glVertex2i(686,834);
	glVertex2i(726,828);
	glVertex2i(746,840);
//8
	glColor3f(0.96, 0.88, 0.63);
	glVertex2i(686,834);
	glVertex2i(722,858);
	glVertex2i(746,840);
//9
	glColor3f(0.83, 0.68, 0.51);
	glVertex2i(702,879);
	glVertex2i(724,886);
	glVertex2i(722,858);
//10
	glColor3f(0.96, 0.88, 0.63);
	glVertex2i(724,886);
	glVertex2i(722,858);
	glVertex2i(747,868);
//11
	glColor3f(0.96, 0.88, 0.63);
	glVertex2i(722,858);
	glVertex2i(747,868);
	glVertex2i(746,840);
//12
	glColor3f(0.97,0.91,0.69);
	glVertex2i(726,828);
	glVertex2i(771,810);
	glVertex2i(798,830);
//13
	glColor3f(0.96, 0.88, 0.63);
	glVertex2i(726,828);
	glVertex2i(746,840);
	glVertex2i(798,830);
//14
	glColor3f(0.96, 0.88, 0.63);
	glVertex2i(746,840);
	glVertex2i(798,830);
	glVertex2i(793,848);
//15
	glColor3f(0.83, 0.68, 0.51);
	glVertex2i(746,840);
	glVertex2i(793,848);
	glVertex2i(747,868);
//16
	glColor3f(0.96, 0.88, 0.63);
	glVertex2i(747,868);
	glVertex2i(771,890);
	glVertex2i(825,879);
//17
	glColor3f(0.97,0.91,0.69);
	glVertex2i(747,868);
	glVertex2i(793,848);
	glVertex2i(825,879);
//18
	glColor3f(0.83, 0.68, 0.51);
	glVertex2i(771,810);
	glVertex2i(845,811);
	glVertex2i(798,830);
//19
	glColor3f(0.96, 0.88, 0.63);
	glVertex2i(798,830);
	glVertex2i(845,811);
	glVertex2i(872,837);
//20
	glColor3f(0.96, 0.88, 0.63);
	glVertex2i(798,830);
	glVertex2i(793,848);
	glVertex2i(872,837);
//21
	glColor3f(0.96, 0.88, 0.63);
	glVertex2i(793,848);
	glVertex2i(872,837);
	glVertex2i(825,879);
//22
	glColor3f(0.96, 0.88, 0.63);
	glVertex2i(845,811);
	glVertex2i(872,837);
	glVertex2i(908,812);
//23
	glColor3f(0.96, 0.88, 0.63);
	glVertex2i(908,812);
	glVertex2i(872,837);
	glVertex2i(928,855);
//24
	glColor3f(0.97,0.91,0.69);
	glVertex2i(825,879);
	glVertex2i(872,837);
	glVertex2i(880,892);
//25
	glColor3f(0.97,0.91,0.69);
	glVertex2i(825,879);
	glVertex2i(855,900);
	glVertex2i(880,892);
//26
	glVertex2i(872,837);
	glVertex2i(880,892);
	glVertex2i(928,855);
//27
	glColor3f(0.96, 0.88, 0.63);
	glVertex2i(908,812);
	glVertex2i(986,834);
	glVertex2i(928,855);




	///pasto

	//1
	glColor3f(0.56, 0.66, 0.1);
	glVertex2i(0,52);
	glVertex2i(339,122);
	glVertex2i(156,0);
//2
	glVertex2i(0,52);
	glVertex2i(0,0);
	glVertex2i(156,0);
//3
glColor3f(0.46, 0.65, 0.07);
	glVertex2i(156,0);
	glVertex2i(339,122);
	glVertex2i(661,0);
//4
	glVertex2i(661,0);
	glVertex2i(900,0);
	glVertex2i(765,139);
//5
glColor3f(0.84, 0.81, 0.24);
	glVertex2i(900,0);
	glVertex2i(1000,113);
	glVertex2i(765,139);
//6
	glVertex2i(900,0);
	glVertex2i(1000,113);
	glVertex2i(1000,0);
//7
	glVertex2i(666,252);
	glVertex2i(765,139);
	glVertex2i(936,154);
//8
	glVertex2i(666,252);
	glVertex2i(690,309);
	glVertex2i(557,354);
//9
	glVertex2i(932,228);
	glVertex2i(824,334);
	glVertex2i(1000,285);
//10
	glVertex2i(339,122);
	glVertex2i(661,0);
	glVertex2i(474,153);
//11
	glVertex2i(661,0);
	glVertex2i(568,185);
	glVertex2i(474,153);

//12
	glVertex2i(474,153);
	glVertex2i(568,185);
	glVertex2i(386,245);
//13
	glVertex2i(386,245);
	glVertex2i(375,334);
	glVertex2i(280,356);
//14	
glColor3f(0.46, 0.65, 0.07);
	glVertex2i(568,185);
	glVertex2i(386,245);
	glVertex2i(666,252);
//15
	glVertex2i(386,245);
	glVertex2i(666,252);
	glVertex2i(464,315);
//16
	glVertex2i(1000,113);
	glVertex2i(765,139);
	glVertex2i(936,154);
//17
	glVertex2i(936,154);
	glVertex2i(932,228);
	glVertex2i(1000,183);
//18
	glVertex2i(932,228);
	glVertex2i(1000,183);
	glVertex2i(1000,226);
//19
	glVertex2i(932,228);
	glVertex2i(1000,253);
	glVertex2i(1000,285);
//20
	glVertex2i(163,227);
	glVertex2i(177,341);
	glVertex2i(0,300);
//21

	glColor3f(0.24, 0.31, 0.02);
	glVertex2i(0,52);
	glVertex2i(163,227);
	glVertex2i(0,300);
//22
	glVertex2i(163,227);
	glVertex2i(474,153);
	glVertex2i(170,285);
//23
	glVertex2i(170,285);
	glVertex2i(177,341);
	glVertex2i(198,350);
//24
	glVertex2i(0,300);
	glVertex2i(144,358);
	glVertex2i(51,361);
//25
	glVertex2i(51,361);
	glVertex2i(0,336);
	glVertex2i(42,364);
//26
	glVertex2i(386,245);
	glVertex2i(464,315);
	glVertex2i(375,334);
//27
	glVertex2i(936,154);
	glVertex2i(1000,113);
	glVertex2i(1000,183);
//28
	glVertex2i(824,334);
	glVertex2i(861,382);
	glVertex2i(948,364);
//29
	glVertex2i(948,364);
	glVertex2i(1000,352);
		glVertex2i(908,314);

//30
glVertex2i(666,252);
glVertex2i(698,324);
glVertex2i(726,332);



glColor3f(0.62, 0.72, 0.13);
//1
glVertex2i(0,50);
glVertex2i(474,153);
glVertex2i(163,229);

//2
glVertex2i(474,153);
glVertex2i(277,356);
glVertex2i(172,285);
//3
glVertex2i(661,0);//fine
glVertex2i(765,139);//fine
glVertex2i(568,185);

glVertex2i(666,252);
glVertex2i(464,315);
glVertex2i(557,359);

glVertex2i(666,252);
glVertex2i(936,154);
glVertex2i(824,334);

glVertex2i(277,356);
glVertex2i(172,285);
	glVertex2i(198,350);

	glVertex2i(177,341);
	glVertex2i(144,358);
		glVertex2i(0,300);

		glVertex2i(1000,226);
	glVertex2i(1000,253);
glVertex2i(932,228);


glColor3f(0.45, 0.55, 0.07);

glVertex2i(568,185);//
glVertex2i(765,139);//
glVertex2i(666,252);

	glVertex2i(948,364);
			glVertex2i(908,314);
glVertex2i(824,334);

glVertex2i(1000,352);
glVertex2i(908,314);
glVertex2i(1000,285);

glVertex2i(824,334);
glVertex2i(936,154);
glVertex2i(932,228);

glVertex2i(824,334);
	glVertex2i(666,252);
glVertex2i(726,332);


glVertex2i(0,300);
	glVertex2i(51,361);
	glVertex2i(0,336);


	glVertex2i(0,336);
		glVertex2i(42,364);
			glVertex2i(0,365);
/*


edcedcedcedccedcedcedcedcedcedcedcedcedcedcedcedccedc


*/


			//montañas
//1
glColor3f(0.71, 0.59, 0.57);
glVertex2i(0,365);
glVertex2i(42,364);
glVertex2i(50,448);
//2
//CAMBIAR COLOR
glColor3f(0.96, 0.85, 0.65);
glVertex2i(42,364);
glVertex2i(50,448);
glVertex2i(59,359);
glColor3f(1.0, 0.91, 0.74);
glVertex2i(59,359);
glVertex2i(50,448);
glVertex2i(77,427);

glColor3f(0.71, 0.59, 0.57);
glVertex2i(50,448);
glVertex2i(77,427);
glVertex2i(70,472);

glColor3f(1.0, 0.91, 0.74);
glVertex2i(77,427);
glVertex2i(59,359);
glVertex2i(101,359);
glColor3f(0.86, 0.74, 0.58);
glVertex2i(77,427);
glVertex2i(70,472);	
glVertex2i(91,483);
glColor3f(0.71, 0.59, 0.57);
glVertex2i(77,427);
glVertex2i(91,483);
glVertex2i(94,381);
glColor3f(0.96, 0.85, 0.65);
glVertex2i(94,381);
glVertex2i(101,359);
glVertex2i(123,379);
glColor3f(0.96, 0.85, 0.65);
glVertex2i(94,381);
	glVertex2i(91,483);
	glVertex2i(102,506);
glColor3f(1.0, 0.91, 0.74);
	glVertex2i(94,381);
	glVertex2i(102,506);
	glVertex2i(123,379);
glColor3f(1.0, 0.91, 0.74);
	glVertex2i(101,359);
	glVertex2i(123,379);
glVertex2i(144,358);

glVertex2i(123,379);
glVertex2i(102,506);
glVertex2i(134,439);
glColor3f(0.86, 0.74, 0.58);
glVertex2i(123,379);
glVertex2i(144,358);
glVertex2i(150,533);
glColor3f(0.71, 0.59, 0.57);
glVertex2i(134,439);
glVertex2i(119,472);
glVertex2i(150,533);
glColor3f(0.96, 0.85, 0.65);
glVertex2i(144,358);
glVertex2i(177,341);
glVertex2i(229,367);
glColor3f(0.71, 0.59, 0.57);
glVertex2i(144,358);
glVertex2i(188,363);
glVertex2i(150,533);

glColor3f(0.71, 0.59, 0.57);
glVertex2i(188,363);
glVertex2i(175,486);
glVertex2i(160,484);
glColor3f(1.0, 0.91, 0.74);
glVertex2i(175,486);
glVertex2i(160,484);
glVertex2i(155,513);
glColor3f(0.86, 0.74, 0.58);
glVertex2i(155,513);
glVertex2i(175,486);
glVertex2i(157,549);
glColor3f(0.71, 0.59, 0.57);
glVertex2i(188,363);
glVertex2i(175,486);
glVertex2i(193,507);
glColor3f(1.0, 0.91, 0.74);
glVertex2i(175,486);
glVertex2i(193,507);
glVertex2i(175,539);
glColor3f(0.96, 0.85, 0.65);
glVertex2i(175,486);
glVertex2i(157,549);
glVertex2i(175,530);
glColor3f(1.0, 0.91, 0.74);
glVertex2i(175,530);
glVertex2i(157,549);
glVertex2i(174,573);
glColor3f(0.71, 0.59, 0.57);
glVertex2i(229,367);
glVertex2i(278,354);
glVertex2i(197,350);
glColor3f(0.86, 0.74, 0.58);
glVertex2i(193,507);
glVertex2i(188,363);
glVertex2i(270,373);
glColor3f(1.0, 0.91, 0.74);
glVertex2i(270,373);
glVertex2i(229,367);
glVertex2i(321,348);
glColor3f(0.71, 0.59, 0.57);
glVertex2i(270,373);
glVertex2i(278,520);
glVertex2i(235,433);
glColor3f(0.96, 0.85, 0.65);
glVertex2i(278,520);
glVertex2i(235,433);
glVertex2i(217,464);

glColor3f(1.0, 0.91, 0.74);
glVertex2i(217,464);
glVertex2i(278,520);
glVertex2i(210,475);

glVertex2i(278,520);
	glVertex2i(270,373);
glVertex2i(343,366);

glColor3f(0.96, 0.85, 0.65);
glVertex2i(343,366);
glVertex2i(321,348);
glVertex2i(270,373);

glColor3f(1.0, 0.91, 0.74);
glVertex2i(321,348);
glVertex2i(343,366);
glVertex2i(376,337);
glColor3f(0.86, 0.74, 0.58);
glVertex2i(343,366);
glVertex2i(376,337);
glVertex2i(446,392);
glColor3f(0.71, 0.59, 0.57);
glVertex2i(446,392);
glVertex2i(343,366);
glVertex2i(380,444);
glColor3f(0.96, 0.85, 0.65);
glVertex2i(380,444);
glVertex2i(343,366);
glVertex2i(329,396);
glColor3f(1.0, 0.91, 0.74);
glVertex2i(329,396);
glVertex2i(380,444);
glVertex2i(278,520);

glVertex2i(278,520);
glVertex2i(380,444);
glVertex2i(371,520);
glColor3f(0.86, 0.74, 0.58);
glVertex2i(371,520);
glVertex2i(314,520);
glVertex2i(341,568);
glColor3f(0.71, 0.59, 0.57);
glVertex2i(341,568);
glVertex2i(322,564);
glVertex2i(314,520);
glColor3f(0.96, 0.85, 0.65);
glVertex2i(322,564);
glVertex2i(314,520);
glVertex2i(278,520);
glColor3f(1.0, 0.91, 0.74);
glVertex2i(376,337);
glVertex2i(463,317);
glVertex2i(446,392);
glColor3f(1.0, 0.91, 0.74);
glVertex2i(446,392);
glVertex2i(427,407);
glVertex2i(528,513);
glColor3f(0.86, 0.74, 0.58);
glVertex2i(528,513);
glVertex2i(427,407);
glVertex2i(380,444);
glColor3f(0.71, 0.59, 0.57);
glVertex2i(528,513);
glVertex2i(380,444);
glVertex2i(371,520);
glColor3f(0.96, 0.85, 0.65);
glVertex2i(528,513);
glVertex2i(528,694);
glVertex2i(446,517);
glColor3f(1.0, 0.91, 0.74);
glVertex2i(446,517);
glVertex2i(518,673);
glVertex2i(455,624);
glColor3f(0.86, 0.74, 0.58);
glVertex2i(455,624);
glVertex2i(446,517);
glVertex2i(371,520);
glColor3f(0.71, 0.59, 0.57);
glVertex2i(371,520);
glVertex2i(455,624);
glVertex2i(341,568);
glColor3f(1.0, 0.91, 0.74);
glVertex2i(446,392);
glVertex2i(528,513);
glVertex2i(535,386);
glColor3f(0.96, 0.85, 0.65);
glVertex2i(528,513);
glVertex2i(535,386);
glVertex2i(603,380);

glVertex2i(463,317);
glVertex2i(446,392);
glVertex2i(603,380);
glColor3f(1.0, 0.91, 0.74);

glVertex2i(557,357);
glVertex2i(690,309);
glVertex2i(603,380);
glColor3f(0.96, 0.85, 0.65);
glVertex2i(690,309);
glVertex2i(603,380);
glVertex2i(719,375);
glColor3f(0.71, 0.59, 0.57);
glVertex2i(603,380);
glVertex2i(528,513);
glVertex2i(586,536);
glColor3f(0.86, 0.74, 0.58);
glVertex2i(586,536);
glVertex2i(621,551);
glVertex2i(603,380);

glColor3f(0.71, 0.59, 0.57);
glVertex2i(528,513);
glVertex2i(621,551);
glVertex2i(528,694);

glColor3f(1.0, 0.91, 0.74);
glVertex2i(603,380);
glVertex2i(664,374);
glVertex2i(654,615);
glColor3f(0.86, 0.74, 0.58);
glVertex2i(654,615);
glVertex2i(692,403);
glVertex2i(665,374);
glColor3f(0.71, 0.59, 0.57);
glVertex2i(647,585);
glVertex2i(603,380);
glVertex2i(621,551);
glColor3f(0.96, 0.85, 0.65);
glVertex2i(692,403);
glVertex2i(665,374);
glVertex2i(719,375);
glColor3f(1.0, 0.91, 0.74);
glVertex2i(719,375);
glVertex2i(726,332);
glVertex2i(698,324);
glColor3f(0.86, 0.74, 0.58);
glVertex2i(719,375);
glVertex2i(726,332);
glVertex2i(780,376);

glColor3f(0.71, 0.59, 0.57);
glVertex2i(719,375);
glVertex2i(780,376);
glVertex2i(726,332);
glColor3f(1.0, 0.91, 0.74);

glVertex2i(692,403);
glVertex2i(678,484);
glVertex2i(720,578);

glColor3f(0.96, 0.85, 0.65);
glVertex2i(678,484);
glVertex2i(654,615);
glVertex2i(700,532);
glColor3f(1.0, 0.91, 0.74);
glVertex2i(731,404);
glVertex2i(719,375);
glVertex2i(692,403);
glColor3f(1.0, 0.91, 0.74);
glVertex2i(692,403);
glVertex2i(692,403);
glVertex2i(720,578);
glColor3f(0.86, 0.74, 0.58);
glVertex2i(731,404);
glVertex2i(720,578);
glVertex2i(735,548);
glColor3f(0.71, 0.59, 0.57);
glVertex2i(735,548);
glVertex2i(731,404);
glVertex2i(756,465);
glColor3f(1.0, 0.91, 0.74);
glColor3f(0.96, 0.85, 0.65);
glVertex2i(719,375);
glVertex2i(756,465);
glVertex2i(780,376);
glColor3f(1.0, 0.91, 0.74);
glVertex2i(731,404);
glVertex2i(692,403);
glVertex2i(720,578);
glColor3f(1.0, 0.91, 0.74);
glVertex2i(726,332);
glVertex2i(820,337);
glVertex2i(780,376);
glColor3f(1.0, 0.91, 0.74);

glVertex2i(780,376);
glVertex2i(756,465);
glVertex2i(791,500);
glColor3f(1.0, 0.91, 0.74);
glVertex2i(791,500);
glVertex2i(756,465);
glVertex2i(766,351);
glColor3f(0.96, 0.85, 0.65);

glVertex2i(756,465);
glVertex2i(766,351);
glVertex2i(735,548);
glColor3f(0.71, 0.59, 0.57);
glVertex2i(780,376);
glVertex2i(804,382);
glVertex2i(791,500);

glColor3f(0.86, 0.74, 0.58);
glVertex2i(791,500);
glVertex2i(861,466);
glVertex2i(829,439);
glColor3f(1.0, 0.91, 0.74);
glVertex2i(791,500);
glVertex2i(804,382);
glVertex2i(861,382);
glColor3f(0.96, 0.85, 0.65);
glVertex2i(804,382);
glVertex2i(780,376);
glVertex2i(791,500);
glColor3f(1.0, 0.91, 0.74);
glVertex2i(804,382);
glVertex2i(780,376);
glVertex2i(807,348);

glColor3f(0.96, 0.85, 0.65);
glVertex2i(807,348);
glVertex2i(804,382);
glVertex2i(861,382);

glColor3f(0.71, 0.59, 0.57);
glVertex2i(861,382);
glVertex2i(807,348);
glVertex2i(824,334);
glColor3f(0.86, 0.74, 0.58);
glVertex2i(861,382);
glVertex2i(829,439);
glVertex2i(863,467);
glColor3f(0.96, 0.85, 0.65);
glVertex2i(861,382);
glVertex2i(866,497);
glVertex2i(1000,351);
glColor3f(0.71, 0.59, 0.57);

glVertex2i(866,497);
glVertex2i(1000,351);
glVertex2i(1000,424);


///aqui vamos a dibujar nuestro armadillo
glColor3f(0.76, 0.97, 0.75);
glVertex2i(80,126);
glVertex2i(48,125);
glVertex2i(40,141);


glVertex2i(80,126);
glVertex2i(44,162);
glVertex2i(69,171);

glVertex2i(80,126);
glVertex2i(89,167);
glVertex2i(111,155);

glVertex2i(80,126);
glVertex2i(126,129);
glVertex2i(130,115);


glVertex2i(130,115);
glVertex2i(104,110);
glVertex2i(139,108);

glVertex2i(139,108);
glVertex2i(148,119);
glVertex2i(153,117);

glColor3f(0.43, 0.93, 0.4);

glVertex2i(154,131);
glVertex2i(153,117);
glVertex2i(148,119);

glVertex2i(148,119);
glVertex2i(130,115);
glVertex2i(139,108);



glVertex2i(130,115);
glVertex2i(104,110);
glVertex2i(80,126);

glVertex2i(80,126);
glVertex2i(126,129);
glVertex2i(111,155);

glVertex2i(80,126);
glVertex2i(89,167);
glVertex2i(69,171);


glVertex2i(44,162);
glVertex2i(80,126);
glVertex2i(40,141);

	glEnd();
	glFlush();



	//pierna 1 armadillo

	glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.95, 0.71, 0.36);
	glVertex2i(80,126);
	
	glVertex2i(86,106);

	glVertex2i(81,98);
	glVertex2i(71,91);
	glVertex2i(90,91);
	glVertex2i(89,98);
	glVertex2i(93,105);

	glVertex2i(104,110);

	



	glEnd();
	glFlush();
//pierna 2
	glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.95, 0.71, 0.36);
	glVertex2i(70,125);
	glVertex2i(78,109);
	glVertex2i(71,102);
	glVertex2i(61,102);
	glVertex2i(61,97);
	glVertex2i(81,98);
	glVertex2i(86,105);
	glVertex2i(80,126);


	glEnd();
	glFlush();


	glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.95, 0.71, 0.36);
			glVertex2i(47,125);
				glVertex2i(40,120);
					glVertex2i(36,108);
						glVertex2i(46,114);
							glVertex2i(54,124);
								//glVertex2i(48,124);








	glEnd();
	glFlush();




	glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.95, 0.71, 0.36);

	glVertex2i(40,141);
	glVertex2i(26,134);
	glVertex2i(16,125);
	glVertex2i(7,131);
	glVertex2i(14,135);
	glVertex2i(21,151);		
	glVertex2i(35,165);
	glVertex2i(44,161);			







	glEnd();
	glFlush();




	glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.43, 0.93, 0.4);

	glVertex2i(14,135);
	glVertex2i(20,156);
	glVertex2i(27,163);
	glVertex2i(29,175);
	glVertex2i(40,179);
	glVertex2i(35,165);
	glVertex2i(21,151);							


	glEnd();
	glFlush();


glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.43, 0.93, 0.4);

	glVertex2i(23,159);
	glVertex2i(22,174);
	glVertex2i(33,182);
	glVertex2i(29,175);
	glVertex2i(27,165);
								


	glEnd();
	glFlush();


glBegin(GL_TRIANGLES);
	
glColor3f(0.0, 0.0, 0.0);

	glVertex2i(27,153);
	glVertex2i(22,146);
	glVertex2i(22,153);
	
								


	glEnd();
	glFlush();



	///Aqui vamos a dibujar a un pavoreal

glBegin(GL_TRIANGLES);
	
	
	glColor3f(1.0, 0.85, 0.3);

	glVertex2i(271,247);
	glVertex2i(284,235);
	glVertex2i(284,201);



	glVertex2i(284,201);
	glVertex2i(276,192);
	glVertex2i(268,201);



	glVertex2i(319,235);
	glVertex2i(332,248);
	glVertex2i(319,201);

	glVertex2i(319,201);
	glVertex2i(327,192);
	glVertex2i(335,200);

	glEnd();
	glFlush();


	//aqui acaban las dos piernas


	/////////poligonos exteriores del pavoreal
	glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.55, 0.8, 0.33);

	glVertex2i(561,310);
	glVertex2i(493,345);
	glVertex2i(457,328);
	glVertex2i(434,284);
	glVertex2i(471,252);
	glVertex2i(512,251);

	glEnd();
	glFlush();

glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.55, 0.8, 0.33);
glVertex2i(493,345);
glVertex2i(457,328);
glVertex2i(410,340);
glVertex2i(410,391);
glVertex2i(435,421);
glVertex2i(511,419);


	glEnd();

	glFlush();



	glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.55, 0.8, 0.33);
	glVertex2i(361,381);
	
	glVertex2i(410,391);//
	glVertex2i(435,421);//
	glVertex2i(417,495);
	glVertex2i(348,463);
	glVertex2i(341,430);


	glEnd();
	glFlush();

	glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.55, 0.8, 0.33);
	
	glVertex2i(348,463);
	glVertex2i(340,427);
	glVertex2i(300,396);
	glVertex2i(262,427);
	glVertex2i(253,464);
	glVertex2i(300,523);

	glEnd();
	glFlush();



	glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.55, 0.8, 0.33);
	
	glVertex2i(262,427);
	glVertex2i(253,464);
	glVertex2i(182,495);
	glVertex2i(166,422);
	glVertex2i(191,391);
	glVertex2i(241,378);

	glEnd();
	glFlush();

	glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.55, 0.8, 0.33);
	
	
	glVertex2i(166,422);
	glVertex2i(191,391);
	glVertex2i(191,343);
	glVertex2i(145,329);
	glVertex2i(107,345);
	glVertex2i(89,419);

	glEnd();
	glFlush();

	glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.55, 0.8, 0.33);
	
	
	
	glVertex2i(145,329);
	glVertex2i(107,345);
	glVertex2i(40,309);
	glVertex2i(88,250);
		glVertex2i(130,253);
			glVertex2i(165,285);




	glEnd();
	glFlush();

///////////poligonos interiores













	glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.27, 0.75, 0.38);
	//punto maestro 298, 258
	glVertex2i(298,258);
	glVertex2i(434,221);
	glVertex2i(475,251);
	glVertex2i(437,284);//

	glEnd();
	glFlush();


	glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.27, 0.75, 0.38);
	//punto maestro 298, 258
	glVertex2i(298,258);
	glVertex2i(437,284);
	glVertex2i(461,330);
	glVertex2i(410,341);//






	glEnd();
	glFlush();

	glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.27, 0.75, 0.38);
	//punto maestro 298, 258
	glVertex2i(298,258);
	glVertex2i(410,341);//
	glVertex2i(411,391);
	glVertex2i(361,381);

	



	glEnd();
	glFlush();



	glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.27, 0.75, 0.38);
	//punto maestro 298, 258
	glVertex2i(298,258);
	glVertex2i(361,381);
	glVertex2i(341,430);
	glVertex2i(300,396);

	



	glEnd();
	glFlush();



	glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.27, 0.75, 0.38);
	//punto maestro 298, 258
	glVertex2i(298,258);
	glVertex2i(300,396);
	glVertex2i(261,430);
	glVertex2i(239,382);


	glEnd();
	glFlush();


		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.27, 0.75, 0.38);
	//punto maestro 298, 258
	glVertex2i(298,258);
	glVertex2i(239,382);
	glVertex2i(188,393);
	glVertex2i(188,344);


	glEnd();
	glFlush();


		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.27, 0.75, 0.38);
	//punto maestro 298, 258
	glVertex2i(298,258);
	glVertex2i(188,344);
	glVertex2i(140,329);
	glVertex2i(161,284);



	glEnd();
	glFlush();


		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.27, 0.75, 0.38);
	//punto maestro 298, 258
	glVertex2i(298,258);
	glVertex2i(161,284);
	glVertex2i(126,252);
	glVertex2i(165,222);




	glEnd();
	glFlush();




	///aqui terminan los poligonos interiores del pavo


		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(1.0, 0.95, 0.0);
	//punto maestro 298, 258
		glVertex2i(471,262);
		glVertex2i(511,261);
		glVertex2i(548,307);
		glVertex2i(495,334);	
		glVertex2i(460,318);



	glEnd();
	glFlush();


		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(1.0, 0.95, 0.0);
	//punto maestro 298, 258
		glVertex2i(451,338);
		glVertex2i(487,353);
		glVertex2i(501,411);
		glVertex2i(441,414);	
		glVertex2i(417,383);



	glEnd();
	glFlush();



		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(1.0, 0.95, 0.0);
	//punto maestro 298, 258
		glVertex2i(400,395);
		glVertex2i(425,426);
		glVertex2i(412,484);
		glVertex2i(358,459);	
		glVertex2i(349,421);



	glEnd();
	glFlush();



		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(1.0, 0.95, 0.0);
	//punto maestro 298, 258
		glVertex2i(272,426);
		glVertex2i(329,425);
		glVertex2i(338,464);
		glVertex2i(300,510);	
		glVertex2i(263,464);



	glEnd();
	glFlush();



		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(1.0, 0.95, 0.0);
	//punto maestro 298, 258
		glVertex2i(201,396);
		glVertex2i(251,420);
		glVertex2i(243,458);
		glVertex2i(188,484);	
		glVertex2i(175,426);



	glEnd();
	glFlush();



		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(1.0, 0.95, 0.0);
	//punto maestro 298, 258
		glVertex2i(150,337);
		glVertex2i(184,382);
		glVertex2i(160,413);
		glVertex2i(99,412);	
		glVertex2i(113,353);



	glEnd();
	glFlush();

	
								

		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(1.0, 0.95, 0.0);
	//punto maestro 298, 258
		glVertex2i(129,263);
		glVertex2i(140,318);
		glVertex2i(105,335);
		glVertex2i(51,307);	
		glVertex2i(90,261);



	glEnd();
	glFlush();


	//aqui acaban los amarillos de adentro y comienzan los de la capa interna

		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(1.0, 0.95, 0.0);
	//punto maestro 298, 258
		glVertex2i(410,235);
		glVertex2i(435,229);
		glVertex2i(466,251);
		glVertex2i(437,277);	
		glVertex2i(409,272);



	glEnd();
	glFlush();


		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(1.0, 0.95, 0.0);
	//punto maestro 298, 258
		glVertex2i(408,286);
		glVertex2i(434,290);
		glVertex2i(451,325);
		glVertex2i(413,335);	
		glVertex2i(393,319);



	glEnd();
	glFlush();



		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(1.0, 0.95, 0.0);
	//punto maestro 298, 258
		glVertex2i(385,330);
		glVertex2i(405,345);
		glVertex2i(406,385);
		glVertex2i(367,377);	
		glVertex2i(356,353);



	glEnd();
	glFlush();

	
		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(1.0, 0.95, 0.0);
	//punto maestro 298, 258
		glVertex2i(307,369);
		glVertex2i(343,360);
		glVertex2i(355,383);
		glVertex2i(338,418);	
		glVertex2i(307,395);



	glEnd();
	glFlush();


		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(1.0, 0.95, 0.0);
	//punto maestro 298, 258
		glVertex2i(257,360);
		glVertex2i(294,369);
		glVertex2i(294,395);
		glVertex2i(263,419);	
		glVertex2i(246,383);



	glEnd();
	glFlush();


		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(1.0, 0.95, 0.0);
	//punto maestro 298, 258
		glVertex2i(216,331);
		glVertex2i(245,354);
		glVertex2i(234,378);
		glVertex2i(195,386);	
		glVertex2i(195,347);



	glEnd();
	glFlush();



		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(1.0, 0.95, 0.0);
	//punto maestro 298, 258
		glVertex2i(192,286);
		glVertex2i(207,319);
		glVertex2i(187,336);
		glVertex2i(149,327);	
		glVertex2i(166,291);



	glEnd();
	glFlush();


		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(1.0, 0.95, 0.0);
	//punto maestro 298, 258
		glVertex2i(165,229);
		glVertex2i(190,235);
		glVertex2i(189,273);
		glVertex2i(164,278);	
		glVertex2i(134,253);



	glEnd();
	glFlush();



	////aqui se terminan todos los poligonos amarillos


		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.0, 0.64, 0.69);
	//punto maestro 298, 258
		glVertex2i(480,272);
		glVertex2i(508,272);
		glVertex2i(534,305);
		glVertex2i(498,324);	
		glVertex2i(472,312);



	glEnd();
	glFlush();


		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.0, 0.64, 0.69);
	//punto maestro 298, 258
		glVertex2i(454,350);
		glVertex2i(481,362);
		glVertex2i(490,403);
		glVertex2i(448,404);	
		glVertex2i(430,382);



	glEnd();
	glFlush();


			glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.0, 0.64, 0.69);
	//punto maestro 298, 258
		glVertex2i(397,409);
		glVertex2i(415,430);
		glVertex2i(406,472);
		glVertex2i(367,455);	
		glVertex2i(361,427);



	glEnd();
	glFlush();


	glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.0, 0.64, 0.69);
	//punto maestro 298, 258
		glVertex2i(280,437);
		glVertex2i(320,437);
		glVertex2i(327,463);
		glVertex2i(300,495);	
		glVertex2i(273,463);



	glEnd();
	glFlush();


		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.0, 0.64, 0.69);
	//punto maestro 298, 258
		glVertex2i(203,409);
		glVertex2i(238,426);
		glVertex2i(233,453);
		glVertex2i(195,471);	
		glVertex2i(186,431);



	glEnd();
	glFlush();


		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.0, 0.64, 0.69);
	//punto maestro 298, 258
		glVertex2i(145,351);
		glVertex2i(170,382);
		glVertex2i(152,404);
		glVertex2i(111,403);	
		glVertex2i(120,362);



	glEnd();
	glFlush();



		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.0, 0.64, 0.69);
	//punto maestro 298, 258
		glVertex2i(92,272);
		glVertex2i(120,272);
		glVertex2i(129,312);
		glVertex2i(103,324);	
		glVertex2i(66,304);



	glEnd();
	glFlush();



		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.0, 0.64, 0.69);
	//punto maestro 298, 258
		glVertex2i(418,240);
		glVertex2i(435,235);
		glVertex2i(456,252);
		glVertex2i(436,270);	
		glVertex2i(418,265);



	glEnd();
	glFlush();


		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.0, 0.64, 0.69);
	//punto maestro 298, 258
		glVertex2i(413,294);
		glVertex2i(431,296);
		glVertex2i(443,321);
		glVertex2i(417,328);	
		glVertex2i(402,316);



	glEnd();
	glFlush();


		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.0, 0.64, 0.69);
	//punto maestro 298, 258
		glVertex2i(385,340);
		glVertex2i(400,351);
		glVertex2i(400,378);
		glVertex2i(373,373);	
		glVertex2i(366,356);



	glEnd();
	glFlush();



		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.0, 0.64, 0.69);
	//punto maestro 298, 258
		glVertex2i(315,375);
		glVertex2i(340,369);
		glVertex2i(348,385);
		glVertex2i(336,409);	
		glVertex2i(315,393);



	glEnd();
	glFlush();


		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.0, 0.64, 0.69);
	//punto maestro 298, 258
		glVertex2i(261,369);
		glVertex2i(287,375);
		glVertex2i(288,393);
		glVertex2i(265,409);	
		glVertex2i(254,385);



	glEnd();
	glFlush();


		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.0, 0.64, 0.69);
	//punto maestro 298, 258
		glVertex2i(216,341);
		glVertex2i(236,356);
		glVertex2i(229,373);
		glVertex2i(202,378);	
		glVertex2i(202,351);



	glEnd();
	glFlush();


	glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.0, 0.64, 0.69);
	//punto maestro 298, 258
		glVertex2i(188,295);
		glVertex2i(199,318);
		glVertex2i(184,330);
		glVertex2i(158,322);	
		glVertex2i(170,298);



	glEnd();
	glFlush();


		glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.0, 0.64, 0.69);
	//punto maestro 298, 258
		glVertex2i(165,237);
		glVertex2i(182,241);
		glVertex2i(181,267);
		glVertex2i(164,271);	
		glVertex2i(144,253);



	glEnd();
	glFlush();


	


//aqui comenzamos a pintar en azul marino 
	glBegin(GL_POLYGON);
		glPolygonMode(GL_FRONT,GL_FILL);
		glColor3f(0.25, 0.26, 0.65);
		//punto maestro 298, 258
		glVertex2i(489,282);
		glVertex2i(506,282);
		glVertex2i(522,302);
		glVertex2i(500,314);	
		glVertex2i(484,307);



	glEnd();
	glFlush();


		glBegin(GL_POLYGON);
		glPolygonMode(GL_FRONT,GL_FILL);
		glColor3f(0.25, 0.26, 0.65);
		//punto maestro 298, 258
		glVertex2i(458,364);
		glVertex2i(474,371);
		glVertex2i(480,394);
		glVertex2i(455,396);	
		glVertex2i(444,383);



	glEnd();
	glFlush();


glBegin(GL_POLYGON);
		glPolygonMode(GL_FRONT,GL_FILL);
		glColor3f(0.25, 0.26, 0.65);
		//punto maestro 298, 258
		glVertex2i(373,432);
		glVertex2i(395,422);
		glVertex2i(406,436);
		glVertex2i(401,460);	
		glVertex2i(377,450);



	glEnd();
	glFlush();


	glBegin(GL_POLYGON);
		glPolygonMode(GL_FRONT,GL_FILL);
		glColor3f(0.25, 0.26, 0.65);
		//punto maestro 298, 258
		glVertex2i(288,447);
		glVertex2i(312,446);
		glVertex2i(317,463);
		glVertex2i(301,484);	
		glVertex2i(284,464);



	glEnd();
	glFlush();



	glBegin(GL_POLYGON);
		glPolygonMode(GL_FRONT,GL_FILL);
		glColor3f(0.25, 0.26, 0.65);
		//punto maestro 298, 258
		glVertex2i(206,422);
		glVertex2i(227,432);
		glVertex2i(224,449);
		glVertex2i(200,460);	
		glVertex2i(195,434);



	glEnd();
	glFlush();



	glBegin(GL_POLYGON);
		glPolygonMode(GL_FRONT,GL_FILL);
		glColor3f(0.25, 0.26, 0.65);
		//punto maestro 298, 258
		glVertex2i(143,364);
		glVertex2i(157,383);
		glVertex2i(147,396);
		glVertex2i(121,395);	
		glVertex2i(127,370);



	glEnd();
	glFlush();


	glBegin(GL_POLYGON);
		glPolygonMode(GL_FRONT,GL_FILL);
		glColor3f(0.25, 0.26, 0.65);
		//punto maestro 298, 258
		glVertex2i(94,282);
		glVertex2i(112,281);
		glVertex2i(116,306);
		glVertex2i(101,314);	
		glVertex2i(78,302);



	glEnd();
	glFlush();



	//aqui terminan los azules marinos de afura
	//aqui comienzan los azules marinos de adentro 


	glBegin(GL_POLYGON);
		glPolygonMode(GL_FRONT,GL_FILL);
		glColor3f(0.25, 0.26, 0.65);
		//punto maestro 298, 258
		glVertex2i(425,245);
		glVertex2i(435,242);
		glVertex2i(448,252);
		glVertex2i(437,262);	
		glVertex2i(424,261);



	glEnd();
	glFlush();


	glBegin(GL_POLYGON);
		glPolygonMode(GL_FRONT,GL_FILL);
		glColor3f(0.25, 0.26, 0.65);
		//punto maestro 298, 258
		glVertex2i(417,301);
		glVertex2i(427,303);
		glVertex2i(435,317);
		glVertex2i(420,322);	
		glVertex2i(411,315);



	glEnd();
	glFlush();


	glBegin(GL_POLYGON);
		glPolygonMode(GL_FRONT,GL_FILL);
		glColor3f(0.25, 0.26, 0.65);
		//punto maestro 298, 258
		glVertex2i(385,349);
		glVertex2i(395,355);
		glVertex2i(394,370);
		glVertex2i(379,368);	
		glVertex2i(374,358);



	glEnd();
	glFlush();


	glBegin(GL_POLYGON);
		glPolygonMode(GL_FRONT,GL_FILL);
		glColor3f(0.25, 0.26, 0.65);
		//punto maestro 298, 258
		glVertex2i(321,380);
		glVertex2i(337,377);
		glVertex2i(342,386);
		glVertex2i(334,401);	
		glVertex2i(321,391);



	glEnd();
	glFlush();



	glBegin(GL_POLYGON);
		glPolygonMode(GL_FRONT,GL_FILL);
		glColor3f(0.25, 0.26, 0.65);
		//punto maestro 298, 258
		glVertex2i(264,377);
		glVertex2i(281,380);
		glVertex2i(280,391);
		glVertex2i(267,401);	
		glVertex2i(260,386);



	glEnd();
	glFlush();


		glBegin(GL_POLYGON);
		glPolygonMode(GL_FRONT,GL_FILL);
		glColor3f(0.25, 0.26, 0.65);
		//punto maestro 298, 258
		glVertex2i(216,349);
		glVertex2i(228,359);
		glVertex2i(223,368);
		glVertex2i(207,372);	
		glVertex2i(206,355);



	glEnd();
	glFlush();


		glBegin(GL_POLYGON);
		glPolygonMode(GL_FRONT,GL_FILL);
		glColor3f(0.25, 0.26, 0.65);
		//punto maestro 298, 258
		glVertex2i(173,305);
		glVertex2i(183,302);
		glVertex2i(190,316);
		glVertex2i(182,323);	
		glVertex2i(166,319);



	glEnd();
	glFlush();



		glBegin(GL_POLYGON);
		glPolygonMode(GL_FRONT,GL_FILL);
		glColor3f(0.25, 0.26, 0.65);
		//punto maestro 298, 258
		glVertex2i(165,244);
		glVertex2i(176,246);
		glVertex2i(175,261);
		glVertex2i(164,264);	
		glVertex2i(153,253);



	glEnd();
	glFlush();


	//aqui termina el plumaje y comienza el cuerpo

	glBegin(GL_TRIANGLES);
		
		glColor3f(0.25, 0.26, 0.65);

	glVertex2i(284,235);
	glVertex2i(271,247);
	glVertex2i(295,350);



	glVertex2i(306,350);
	glVertex2i(319,235);//
glVertex2i(332,248);//



	glEnd();
	glFlush();



		glBegin(GL_POLYGON);
		glPolygonMode(GL_FRONT,GL_FILL);
		glColor3f(0.0, 0.56, 0.67);
		glVertex2i(284,235);
		glVertex2i(319,235);//
	
		glVertex2i(306,350);
	glVertex2i(295,350);

	glEnd();
	glFlush();


	glEnd();
	glFlush();



		glBegin(GL_POLYGON);
		glPolygonMode(GL_FRONT,GL_FILL);
glColor3f(0.0, 0.56, 0.67);
		glVertex2i(295,350);
		glVertex2i(306,350);
		glVertex2i(311,362);
		glVertex2i(306,375);
		glVertex2i(296,374);
		glVertex2i(291,361);
	
		
		

	glEnd();
	glFlush();


	glBegin(GL_TRIANGLES);
	glColor3f(1, 1, 1);
	glVertex2i(298,364);
	glVertex2i(303,363);
	glVertex2i(300,352);


	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glColor3f(1, 1, 1);
	glVertex2i(295,361);
	glVertex2i(290,362);
	glVertex2i(304,361);
	glVertex2i(311,361);
	glVertex2i(301,374);
	glVertex2i(301,383);



	glEnd();
	glFlush();

	glBegin(GL_POINTS);
	glVertex2i(295,365);
	glVertex2i(307,365);

	glColor3f(0.0, 0.56, 0.67);
	glVertex2i(302,386);
	glEnd();
	glFlush();



	//aqui vamos a dibujar un arbol XD
	glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);
	glColor3f(0.56, 0.76, 0.13);
	glVertex2i(908,685);
	glVertex2i(930,653);
	glVertex2i(964,602);
	glVertex2i(981,534);
	glVertex2i(996,472);
	glVertex2i(993,405);
	glVertex2i(954,362);

	glVertex2i(891,355);
	glVertex2i(833,372);
	glVertex2i(797,446);
	glVertex2i(804,512);
	glVertex2i(835,586);
	glVertex2i(858,649);


	


	glEnd();
	glFlush();

	glBegin(GL_TRIANGLES);
	glColor3f(0.37, 0.57, 0.06);

	//1
	glVertex2i(833,373);
	glVertex2i(888,356);
	glVertex2i(835,404);
//2
	glColor3f(0.27, 0.43, 0.35);
	glVertex2i(835,404);
	glVertex2i(798,447);
	glVertex2i(849,470);
//3
	glColor3f(0.68, 0.88, 0.11);
	glVertex2i(835,404);
	glVertex2i(894,391);
	glVertex2i(909,439);
//4
	glColor3f(0.27, 0.43, 0.35);
	glVertex2i(894,391);
	glVertex2i(888,356);
	glVertex2i(954,396);
//5
	glColor3f(0.56, 0.76, 0.11);
glVertex2i(954,396);
glVertex2i(993,405);
glVertex2i(972,434);
//6
glColor3f(0.27, 0.43, 0.35);
glVertex2i(972,434);
glVertex2i(909,439);
glVertex2i(944,491);
//7
glColor3f(0.65, 0.81, 0.15);

glVertex2i(944,491);
glVertex2i(998,470);
glVertex2i(982,529);
//8
glColor3f(0.39, 0.52, 0.35);
glVertex2i(982,529);
glVertex2i(947,569);
glVertex2i(964,598);
//9
glColor3f(0.68, 0.88, 0.11);
glVertex2i(964,598);
glVertex2i(916,615);
glVertex2i(930,651);
//10
glColor3f(0.27, 0.43, 0.35);
glVertex2i(930,651);
glVertex2i(907,685);
glVertex2i(860,651);
//11
glColor3f(0.27, 0.4, 0.02);
glVertex2i(860,651);
glVertex2i(861,599);
glVertex2i(836,588);
//12
glColor3f(0.56, 0.76, 0.11);
glVertex2i(836,588);
glVertex2i(841,547);
glVertex2i(804,514);
//13
glColor3f(0.68, 0.88, 0.11);
glVertex2i(804,514);
glVertex2i(799,452);
glVertex2i(844,471);
//14
glColor3f(0.27, 0.43, 0.18);
glVertex2i(844,471);
glVertex2i(882,509);
glVertex2i(804,514);
//15
glColor3f(0.56, 0.76, 0.11);
glVertex2i(804,514);
glVertex2i(841,547);
glVertex2i(882,509);
//16
glColor3f(0.68, 0.88, 0.11);
glVertex2i(841,547);
glVertex2i(882,509);
glVertex2i(909,560);
//17
glColor3f(0.65, 0.81, 0.15);
glVertex2i(909,560);
glVertex2i(841,547);
glVertex2i(861,599);
//18
glColor3f(0.27, 0.43, 0.18);

glVertex2i(861,599);
glVertex2i(909,560);
glVertex2i(916,615);
//19
glColor3f(0.65, 0.81, 0.15);
glVertex2i(909,560);
glVertex2i(944,491);
glVertex2i(947,569);
//20
glColor3f(0.39, 0.52, 0.35);

glVertex2i(944,491);
glVertex2i(882,509);
glVertex2i(909,439);
//21

glColor3f(0.27, 0.4, 0.02);
glVertex2i(909,439);
glVertex2i(954,396);
glVertex2i(972,434);
//22
glColor3f(0.35, 0.52, 0.02);
glVertex2i(954,396);
glVertex2i(953,363);
glVertex2i(993,405);
//23
glColor3f(0.27, 0.43, 0.18);
glVertex2i(930,651);
glVertex2i(916,615);
glVertex2i(860,651);
//24
glColor3f(0.27, 0.4, 0.02);
glVertex2i(916,615);
glVertex2i(860,651);
glVertex2i(861,599);

//25
glColor3f(0.39, 0.52, 0.35);
glVertex2i(916,615);
glVertex2i(909,560);
glVertex2i(947,569);

//26
glColor3f(0.35, 0.52, 0.02);
glVertex2i(947,569);
glVertex2i(916,615);
glVertex2i(964,598);

//27
glColor3f(0.27, 0.4, 0.02);
glVertex2i(947,569);
glVertex2i(982,529);
glVertex2i(944,491);

//28
glColor3f(0.35, 0.63, 0.02);
glVertex2i(944,491);
glVertex2i(882,509);
glVertex2i(909,560);

//29
glColor3f(0.27, 0.43, 0.18);
glVertex2i(954,396);
glVertex2i(894,392);
glVertex2i(909,439);
//30
glColor3f(0.65, 0.81, 0.15);
glVertex2i(882,509);
glVertex2i(849,471);
glVertex2i(835,407);

//31
glColor3f(0.35, 0.63, 0.02);
glVertex2i(887,357);
glVertex2i(834,405);
glVertex2i(894,391);
//32
glColor3f(0.39, 0.52, 0.35);
glVertex2i(833,372);
glVertex2i(833,405);
glVertex2i(799,444);


//33
glColor3f(0.39, 0.52, 0.35);
glVertex2i(970,435);
glVertex2i(944,491);
glVertex2i(996,468);

//34
glColor3f(0.35, 0.52, 0.02);
glVertex2i(909,440);
glVertex2i(833,406);
glVertex2i(849,470);




















	glEnd();
	glFlush();











glBegin(GL_POLYGON);
	glPolygonMode(GL_FRONT,GL_FILL);

	glColor3f(0.56, 0.42, 0.24);
	glVertex2i(895,357);
	glVertex2i(906,358);
glVertex2i(913,255);
glVertex2i(886,248);

	
	

	glEnd();
	glFlush();


	glBegin(GL_TRIANGLES);
	glColor3f(0.4, 0.27, 0.09);
	glVertex2i(895,357);
	glVertex2i(906,358);
	glVertex2i(886,246);
	glEnd();
	glFlush();


	glBegin(GL_TRIANGLES);
	glColor3f(0.4, 0.27, 0.09);
	glVertex2i(919,261);
	glVertex2i(926,241);
	glVertex2i(872,244);
	glEnd();
	glFlush();
	
	
	
	


}





int main(int argc, char **argv){

	glutInit(&argc, argv);
	glutInitWindowSize(700,700);
	glutCreateWindow("paisaje");
	inicializa();
	
	
	

	glutDisplayFunc(pintaNube1);

	glutMainLoop();
	return 0;
}
