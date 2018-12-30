/**
 *	Title 		:	Traffic Signal Animation Using C Graphics
 *	Author		:	Shadab Shaikh
 *	Date		:	29-12-2018
 *	Version		:	1.0
 *	Availability:	https://github.com/shadabsk
 *
 */
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void open0()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	setbkcolor(YELLOW);
	setcolor(13);
	settextstyle(8,HORIZ_DIR,2);
	outtextxy(150,200,"");
	outtextxy(0,110,"********************************************************************************");
	outtextxy(0,300,"********************************************************************************");
	setcolor(GREEN);
	settextstyle(1,HORIZ_DIR,7);
	outtextxy(200,180,"Welcome");
	delay(3500);
	cleardevice();

}

void open2()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	setbkcolor(GREEN);
	setcolor(1);
	settextstyle(8,HORIZ_DIR,2);
	outtextxy(150,200,"");
	outtextxy(0,100,"********************************************************************************");
	outtextxy(0,300,"********************************************************************************");
	setcolor(YELLOW);
	settextstyle(1,HORIZ_DIR,4);
	outtextxy(145,180,"Trafic Signal Animation");
	setcolor(RED);
	settextstyle(1,HORIZ_DIR,4);
	outtextxy(135,220,"Using Computer Graphics");
	delay(6000);
	cleardevice();

}
void exit()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	setbkcolor(RED);
	setcolor(14);
	settextstyle(8,HORIZ_DIR,2);
	outtextxy(150,200,"");
	outtextxy(0,110,"********************************************************************************");
	outtextxy(0,300,"********************************************************************************");
	setcolor(GREEN);
	settextstyle(7,HORIZ_DIR,7);
	outtextxy(150,180,"Thank You");
	delay(3000);
	cleardevice();
}
void main()
{
open0();
open2();
int gd=DETECT,gm;
initgraph(&gd,&gm,"..\\bgi");
setcolor(WHITE);
char a[5];
int n;


for(int i=-54;i<650;i=i+60)
{
delay(400);
cleardevice();
//left line
line(1,180,270,180);
line(1,300,270,300);


//left zebra
line(1,242,20,242);
line(40,242,60,242);
line(80,242,100,242);
line(120,242,140,242);
line(160,242,180,242);
line(200,242,220,242);
line(240,242,260,242);



//right line
line(400,180,638,180);
line(400,300,638,300);


//truck
setfillstyle(1,1);
line(50+i,190,70+i,190);
line(70+i,190,80+i,210);
line(80+i,210,80+i,230);
line(80+i,230,70+i,230);
circle(64+i,230,5);
line(22+i,230,60+i,230);
circle(16+i,230,5);
line(2+i,230,10+i,230);
line(2+i,230,2+i,212);
line(2+i,212,50+i,212);
line(50+i,212,50+i,190);
line(58+i,210,58+i,200);
line(58+i,210,64+i,210);
line(64+i,210,64+i,200);
line(58+i,200,64+i,200);
floodfill(51+i,191,WHITE);



//car
setfillstyle(1,BROWN);
line(120+i,200,154+i,200);
line(112+i,216,120+i,200);
line(162+i,216,154+i,200);
line(112+i,216,100+i,216);
line(100+i,216,100+i,230);
line(162+i,216,174+i,216);
line(174+i,216,174+i,230);
line(158+i,230,174+i,230);
circle(154+i,230,5);
line(120+i,230,150+i,230);
circle(114+i,230,5);
line(100+i,230,110+i,230);
line(140+i,204,150+i,204);
line(154+i,216,150+i,204);
line(140+i,216,154+i,216);
line(140+i,216,140+i,204);

line(134+i,216,134+i,204);
line(124+i,204,134+i,204);
line(120+i,216,134+i,216);
line(120+i,216,124+i,204);
floodfill(121+i,201,WHITE);


//right zebra
line(600,242,620,242);
line(560,242,580,242);
line(520,242,540,242);
line(480,242,500,242);
line(440,242,460,242);
line(404,242,420,242);



//car2
setfillstyle(1,YELLOW);
line(560,250,600,250);
line(600,250,610,270);
line(560,250,550,270);
line(530,270,620,270);
line(620,270,620,290);
line(600,290,620,290);
circle(594,290,5);
line(556,290,588,290);
circle(550,290,5);
line(530,290,544,290);
line(530,290,530,270);

line(584,254,594,254);
line(584,264,594,264);
line(584,254,584,264);
line(594,254,594,264);

line(564,254,574,254);
line(564,264,574,264);
line(564,254,564,264);
line(574,254,574,264);
floodfill(561,251,WHITE);
setfillstyle(1,BROWN);
floodfill(531,271,WHITE);



//car3
setfillstyle(1,CYAN);
line(440,250,480,250);
line(440,250,430,270);
line(480,250,490,270);
line(410,270,512,270);
line(480,290,512,290);
circle(474,290,5);
circle(434,290,5);
line(440,290,468,290);
line(410,290,428,290);
line(410,270,410,290);
line(512,270,512,290);
line(450,250,450,270);
line(470,250,470,270);
floodfill(441,251,WHITE);
floodfill(471,251,WHITE);
setfillstyle(1,RED);
floodfill(441,271,WHITE);
setfillstyle(1,1);
floodfill(451,251,WHITE);




//top line
line(270,1,270,180);
line(400,1,400,180);


//top zebra
line(336,1,336,20);
line(336,40,336,60);
line(336,80,336,100);
line(336,120,336,140);
line(336,160,336,180);



//bottom line
line(270,300,270,500);
line(400,300,400,500);


//bottom zebra
line(336,300,336,320);
line(336,340,336,360);
line(336,380,336,400);
line(336,420,336,440);
line(336,460,336,480);





//carvertical1
setfillstyle(1,YELLOW);
rectangle(290,10,320,60);
floodfill(291,11,WHITE);
setfillstyle(1,BLUE);
rectangle(290,50,320,60);
floodfill(291,51,WHITE);
setfillstyle(1,YELLOW);
rectangle(290,30,320,50);
floodfill(291,31,WHITE);
setfillstyle(1,BLUE);
rectangle(290,20,320,30);
floodfill(291,21,WHITE);
setfillstyle(1,YELLOW);
rectangle(290,60,320,70);
floodfill(291,61,WHITE);



//carvertical2
setfillstyle(1,RED);
rectangle(290,80,320,90);
floodfill(291,81,WHITE);
setfillstyle(6,BLUE);
rectangle(290,90,320,100);
floodfill(291,91,WHITE);
setfillstyle(1,RED);
rectangle(290,100,320,120);
floodfill(291,101,WHITE);
setfillstyle(6,BLUE);
rectangle(290,120,320,130);
floodfill(291,121,WHITE);
setfillstyle(1,RED);
rectangle(290,130,320,140);
floodfill(291,131,WHITE);



//car bottom
setfillstyle(1,GREEN);
rectangle(360,410,390,420);
floodfill(361,411,WHITE);
setfillstyle(6,BLUE);
rectangle(360,420,390,430);
floodfill(361,421,WHITE);
setfillstyle(1,GREEN);
rectangle(360,430,390,450);
floodfill(361,431,WHITE);
setfillstyle(6,BLUE);
rectangle(360,450,390,460);
floodfill(361,451,WHITE);
setfillstyle(1,GREEN);
rectangle(360,460,390,470);
floodfill(361,461,WHITE);



//car bottom 2
setfillstyle(1,LIGHTRED);
rectangle(360,330,390,340);
floodfill(361,331,WHITE);
setfillstyle(6,BLUE);
rectangle(360,340,390,350);
floodfill(361,341,WHITE);
setfillstyle(1,LIGHTRED);
rectangle(360,350,390,370);
floodfill(361,351,WHITE);
setfillstyle(6,BLUE);
rectangle(360,370,390,380);
floodfill(361,371,WHITE);
setfillstyle(1,LIGHTRED);
rectangle(360,380,390,390);
floodfill(361,381,WHITE);




//top left signal
rectangle(250,10,200,100);
rectangle(216,140,234,100);
rectangle(200,140,250,154);
rectangle(190,154,260,174);


setfillstyle(SOLID_FILL,RED);
circle(225,24,10);
floodfill(225,24,WHITE);


//setfillstyle(SOLID_FILL,6);
circle(225,54,10);
//floodfill(225,54,WHITE);


//setfillstyle(SOLID_FILL,GREEN);
circle(225,84,10);
//floodfill(225,84,WHITE);


//top right signal
rectangle(420,10,470,100);
rectangle(436,140,454,100);
rectangle(420,140,470,154);
rectangle(410,154,480,174);


//setfillstyle(SOLID_FILL,RED);
circle(445,24,10);
//floodfill(445,24,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,54,10);
//floodfill(445,54,WHITE);

setfillstyle(SOLID_FILL,GREEN);
circle(445,84,10);
floodfill(445,84,WHITE);


//bottom right signal
rectangle(420,310,470,400);
rectangle(436,400,454,440);
rectangle(420,440,470,454);
rectangle(410,454,480,474);


setfillstyle(SOLID_FILL,RED);
circle(445,324,10);
floodfill(445,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,354,10);
//floodfill(445,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,384,10);
//floodfill(445,384,WHITE);


//bottom left signal
rectangle(250,310,200,400);
rectangle(216,400,234,440);
rectangle(200,440,250,454);
rectangle(190,454,260,474);


setfillstyle(SOLID_FILL,RED);
circle(225,324,10);
floodfill(225,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(225,354,10);
//floodfill(225,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(225,384,10);
//floodfill(225,384,WHITE);



n=5-i/150;
//if(n>=0)
{
sprintf(a,"%d",n);
outtextxy(222,19,a);
outtextxy(442,79,a);
outtextxy(442,319,a);
outtextxy(222,319,a);
}

}

//delay(1000);
//cleardevice();



for(int j=-100;j<100;j=j+38)
{
delay(400);
cleardevice();
//left line
line(1,180,270,180);
line(1,300,270,300);


//left zebra
line(1,242,20,242);
line(40,242,60,242);
line(80,242,100,242);
line(120,242,140,242);
line(160,242,180,242);
line(200,242,220,242);
line(240,242,260,242);



/*truck
line(50,190,70,190);
line(70,190,80,210);
line(80,210,80,230);
line(80,230,70,230);
circle(64,230,5);
line(22,230,60,230);
circle(16,230,5);
line(2,230,10,230);
line(2,230,2,212);
line(2,212,50,212);
line(50,212,50,190);
line(58,210,58,200);
line(58,210,64,210);
line(64,210,64,200);
line(58,200,64,200);



//car
line(120,200,154,200);
line(112,216,120,200);
line(162,216,154,200);
line(112,216,100,216);
line(100,216,100,230);
line(162,216,174,216);
line(174,216,174,230);
line(158,230,174,230);
circle(154,230,5);
line(120,230,150,230);
circle(114,230,5);
line(100,230,110,230);
line(140,204,150,204);
line(154,216,150,204);
line(140,216,154,216);
line(140,216,140,204);

line(134,216,134,204);
line(124,204,134,204);
line(120,216,134,216);
line(120,216,124,204);*/


//right line
line(400,180,638,180);
line(400,300,638,300);


//right zebra
line(600,242,620,242);
line(560,242,580,242);
line(520,242,540,242);
line(480,242,500,242);
line(440,242,460,242);
line(404,242,420,242);



//car2
setfillstyle(1,YELLOW);
line(560,250,600,250);
line(600,250,610,270);
line(560,250,550,270);
line(530,270,620,270);
line(620,270,620,290);
line(600,290,620,290);
circle(594,290,5);
line(556,290,588,290);
circle(550,290,5);
line(530,290,544,290);
line(530,290,530,270);

line(584,254,594,254);
line(584,264,594,264);
line(584,254,584,264);
line(594,254,594,264);

line(564,254,574,254);
line(564,264,574,264);
line(564,254,564,264);
line(574,254,574,264);
floodfill(561,251,WHITE);
setfillstyle(1,BROWN);
floodfill(531,271,WHITE);



//car3
setfillstyle(1,CYAN);
line(440,250,480,250);
line(440,250,430,270);
line(480,250,490,270);
line(410,270,512,270);
line(480,290,512,290);
circle(474,290,5);
circle(434,290,5);
line(440,290,468,290);
line(410,290,428,290);
line(410,270,410,290);
line(512,270,512,290);
line(450,250,450,270);
line(470,250,470,270);
floodfill(441,251,WHITE);
floodfill(471,251,WHITE);
setfillstyle(1,RED);
floodfill(441,271,WHITE);
setfillstyle(1,1);
floodfill(451,251,WHITE);



//top line
line(270,1,270,180);
line(400,1,400,180);


//top zebra
line(336,1,336,20);
line(336,40,336,60);
line(336,80,336,100);
line(336,120,336,140);
line(336,160,336,180);



//bottom line
line(270,300,270,500);
line(400,300,400,500);


//bottom zebra
line(336,300,336,320);
line(336,340,336,360);
line(336,380,336,400);
line(336,420,336,440);
line(336,460,336,480);




//carvertical1
setfillstyle(1,YELLOW);
rectangle(290,10,320,60);
floodfill(291,11,WHITE);
setfillstyle(1,BLUE);
rectangle(290,50,320,60);
floodfill(291,51,WHITE);
setfillstyle(1,YELLOW);
rectangle(290,30,320,50);
floodfill(291,31,WHITE);
setfillstyle(1,BLUE);
rectangle(290,20,320,30);
floodfill(291,21,WHITE);
setfillstyle(1,YELLOW);
rectangle(290,60,320,70);
floodfill(291,61,WHITE);



//carvertical2
setfillstyle(1,RED);
rectangle(290,80,320,90);
floodfill(291,81,WHITE);
setfillstyle(6,BLUE);
rectangle(290,90,320,100);
floodfill(291,91,WHITE);
setfillstyle(1,RED);
rectangle(290,100,320,120);
floodfill(291,101,WHITE);
setfillstyle(6,BLUE);
rectangle(290,120,320,130);
floodfill(291,121,WHITE);
setfillstyle(1,RED);
rectangle(290,130,320,140);
floodfill(291,131,WHITE);


//car bottom
setfillstyle(1,GREEN);
rectangle(360,410,390,420);
floodfill(361,411,WHITE);
setfillstyle(6,BLUE);
rectangle(360,420,390,430);
floodfill(361,421,WHITE);
setfillstyle(1,GREEN);
rectangle(360,430,390,450);
floodfill(361,431,WHITE);
setfillstyle(6,BLUE);
rectangle(360,450,390,460);
floodfill(361,451,WHITE);
setfillstyle(1,GREEN);
rectangle(360,460,390,470);
floodfill(361,461,WHITE);



//car bottom 2
setfillstyle(1,LIGHTRED);
rectangle(360,330,390,340);
floodfill(361,331,WHITE);
setfillstyle(6,BLUE);
rectangle(360,340,390,350);
floodfill(361,341,WHITE);
setfillstyle(1,LIGHTRED);
rectangle(360,350,390,370);
floodfill(361,351,WHITE);
setfillstyle(6,BLUE);
rectangle(360,370,390,380);
floodfill(361,371,WHITE);
setfillstyle(1,LIGHTRED);
rectangle(360,380,390,390);
floodfill(361,381,WHITE);




//carconstant
setfillstyle(1,BROWN);
line(120+j,200,154+j,200);
line(112+j,216,120+j,200);
line(162+j,216,154+j,200);
line(112+j,216,100+j,216);
line(100+j,216,100+j,230);
line(162+j,216,174+j,216);
line(174+j,216,174+j,230);
line(158+j,230,174+j,230);
circle(154+j,230,5);
line(120+j,230,150+j,230);
circle(114+j,230,5);
line(100+j,230,110+j,230);
line(140+j,204,150+j,204);
line(154+j,216,150+j,204);
line(140+j,216,154+j,216);
line(140+j,216,140+j,204);

line(134+j,216,134+j,204);
line(124+j,204,134+j,204);
line(120+j,216,134+j,216);
line(120+j,216,124+j,204);
floodfill(121+j,201,WHITE);


//top left signal
rectangle(250,10,200,100);
rectangle(216,140,234,100);
rectangle(200,140,250,154);
rectangle(190,154,260,174);


setfillstyle(SOLID_FILL,RED);
circle(225,24,10);
floodfill(225,24,WHITE);


//setfillstyle(SOLID_FILL,6);
circle(225,54,10);
//floodfill(225,54,WHITE);


//setfillstyle(SOLID_FILL,GREEN);
circle(225,84,10);
//floodfill(225,84,WHITE);




//top right signal
rectangle(420,10,470,100);
rectangle(436,140,454,100);
rectangle(420,140,470,154);
rectangle(410,154,480,174);


//setfillstyle(SOLID_FILL,RED);
circle(445,24,10);
//floodfill(445,24,WHITE);

setfillstyle(SOLID_FILL,6);
circle(445,54,10);
floodfill(445,54,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,84,10);
//floodfill(445,84,WHITE);


//bottom right signal
rectangle(420,310,470,400);
rectangle(436,400,454,440);
rectangle(420,440,470,454);
rectangle(410,454,480,474);


setfillstyle(SOLID_FILL,RED);
circle(445,324,10);
floodfill(445,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,354,10);
//floodfill(445,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,384,10);
//floodfill(445,384,WHITE);


//bottom left signal
rectangle(250,310,200,400);
rectangle(216,400,234,440);
rectangle(200,440,250,454);
rectangle(190,454,260,474);


//setfillstyle(SOLID_FILL,RED);
circle(225,324,10);
//floodfill(225,324,WHITE);

setfillstyle(SOLID_FILL,6);
circle(225,354,10);
floodfill(225,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(225,384,10);
//floodfill(225,384,WHITE);



n=2-j/60;
//if(n>=0)
{
sprintf(a,"%d",n);
outtextxy(222,19,a);
outtextxy(442,49,a);
outtextxy(442,319,a);
outtextxy(222,349,a);
}


}

//delay(5);


for(int k=0;k<630;k=k+60)
{
delay(400);
cleardevice();
//left line
line(1,180,270,180);
line(1,300,270,300);


//left zebra
line(1,242,20,242);
line(40,242,60,242);
line(80,242,100,242);
line(120,242,140,242);
line(160,242,180,242);
line(200,242,220,242);
line(240,242,260,242);




/*truck
line(50,190,70,190);
line(70,190,80,210);
line(80,210,80,230);
line(80,230,70,230);
circle(64,230,5);
line(22,230,60,230);
circle(16,230,5);
line(2,230,10,230);
line(2,230,2,212);
line(2,212,50,212);
line(50,212,50,190);
line(58,210,58,200);
line(58,210,64,210);
line(64,210,64,200);
line(58,200,64,200);



//car
line(120,200,154,200);
line(112,216,120,200);
line(162,216,154,200);
line(112,216,100,216);
line(100,216,100,230);
line(162,216,174,216);
line(174,216,174,230);
line(158,230,174,230);
circle(154,230,5);
line(120,230,150,230);
circle(114,230,5);
line(100,230,110,230);
line(140,204,150,204);
line(154,216,150,204);
line(140,216,154,216);
line(140,216,140,204);

line(134,216,134,204);
line(124,204,134,204);
line(120,216,134,216);
line(120,216,124,204); */


//right line
line(400,180,638,180);
line(400,300,638,300);


//right zebra
line(600,242,620,242);
line(560,242,580,242);
line(520,242,540,242);
line(480,242,500,242);
line(440,242,460,242);
line(404,242,420,242);



//carconstant
setfillstyle(1,BROWN);
int k2=80;
line(120+k2,200,154+k2,200);
line(112+k2,216,120+k2,200);
line(162+k2,216,154+k2,200);
line(112+k2,216,100+k2,216);
line(100+k2,216,100+k2,230);
line(162+k2,216,174+k2,216);
line(174+k2,216,174+k2,230);
line(158+k2,230,174+k2,230);
circle(154+k2,230,5);
line(120+k2,230,150+k2,230);
circle(114+k2,230,5);
line(100+k2,230,110+k2,230);
line(140+k2,204,150+k2,204);
line(154+k2,216,150+k2,204);
line(140+k2,216,154+k2,216);
line(140+k2,216,140+k2,204);

line(134+k2,216,134+k2,204);
line(124+k2,204,134+k2,204);
line(120+k2,216,134+k2,216);
line(120+k2,216,124+k2,204);
floodfill(121+k2,201,WHITE);




//car2
setfillstyle(1,YELLOW);
line(560-k,250,610-k,250);
line(600-k,250,610-k,270);
line(560-k,250,550-k,270);
line(530-k,270,620-k,270);
line(620-k,270,620-k,290);
line(600-k,290,620-k,290);
circle(594-k,290,5);
line(556-k,290,588-k,290);
circle(550-k,290,5);
line(530-k,290,544-k,290);
line(530-k,290,530-k,270);

line(584-k,254,594-k,254);
line(584-k,264,594-k,264);
line(584-k,254,584-k,264);
line(594-k,254,594-k,264);

line(564-k,254,574-k,254);
line(564-k,264,574-k,264);
line(564-k,254,564-k,264);
line(574-k,254,574-k,264);
floodfill(561-k,251,WHITE);
setfillstyle(1,BROWN);
floodfill(531-k,271,WHITE);



//car3
setfillstyle(1,CYAN);
line(440-k,250,480-k,250);
line(440-k,250,430-k,270);
line(480-k,250,490-k,270);
line(410-k,270,512-k,270);
line(480-k,290,512-k,290);
circle(474-k,290,5);
circle(434-k,290,5);
line(440-k,290,468-k,290);
line(410-k,290,428-k,290);
line(410-k,270,410-k,290);
line(512-k,270,512-k,290);
line(450-k,250,450-k,270);
line(470-k,250,470-k,270);
floodfill(441-k,251,WHITE);
floodfill(471-k,251,WHITE);
setfillstyle(1,RED);
floodfill(441-k,271,WHITE);
setfillstyle(1,1);
floodfill(451-k,251,WHITE);



//top line
line(270,1,270,180);
line(400,1,400,180);


//top zebra
line(336,1,336,20);
line(336,40,336,60);
line(336,80,336,100);
line(336,120,336,140);
line(336,160,336,180);



//bottom line
line(270,300,270,500);
line(400,300,400,500);


//bottom zebra
line(336,300,336,320);
line(336,340,336,360);
line(336,380,336,400);
line(336,420,336,440);
line(336,460,336,480);



//carvertical1
setfillstyle(1,YELLOW);
rectangle(290,10,320,60);
floodfill(291,11,WHITE);
setfillstyle(1,BLUE);
rectangle(290,50,320,60);
floodfill(291,51,WHITE);
setfillstyle(1,YELLOW);
rectangle(290,30,320,50);
floodfill(291,31,WHITE);
setfillstyle(1,BLUE);
rectangle(290,20,320,30);
floodfill(291,21,WHITE);
setfillstyle(1,YELLOW);
rectangle(290,60,320,70);
floodfill(291,61,WHITE);



//carvertical2
setfillstyle(1,RED);
rectangle(290,80,320,90);
floodfill(291,81,WHITE);
setfillstyle(6,BLUE);
rectangle(290,90,320,100);
floodfill(291,91,WHITE);
setfillstyle(1,RED);
rectangle(290,100,320,120);
floodfill(291,101,WHITE);
setfillstyle(6,BLUE);
rectangle(290,120,320,130);
floodfill(291,121,WHITE);
setfillstyle(1,RED);
rectangle(290,130,320,140);
floodfill(291,131,WHITE);




//car bottom
setfillstyle(1,GREEN);
rectangle(360,410,390,420);
floodfill(361,411,WHITE);
setfillstyle(6,BLUE);
rectangle(360,420,390,430);
floodfill(361,421,WHITE);
setfillstyle(1,GREEN);
rectangle(360,430,390,450);
floodfill(361,431,WHITE);
setfillstyle(6,BLUE);
rectangle(360,450,390,460);
floodfill(361,451,WHITE);
setfillstyle(1,GREEN);
rectangle(360,460,390,470);
floodfill(361,461,WHITE);



//car bottom 2
setfillstyle(1,LIGHTRED);
rectangle(360,330,390,340);
floodfill(361,331,WHITE);
setfillstyle(6,BLUE);
rectangle(360,340,390,350);
floodfill(361,341,WHITE);
setfillstyle(1,LIGHTRED);
rectangle(360,350,390,370);
floodfill(361,351,WHITE);
setfillstyle(6,BLUE);
rectangle(360,370,390,380);
floodfill(361,371,WHITE);
setfillstyle(1,LIGHTRED);
rectangle(360,380,390,390);
floodfill(361,381,WHITE);



//top left signal
rectangle(250,10,200,100);
rectangle(216,140,234,100);
rectangle(200,140,250,154);
rectangle(190,154,260,174);


setfillstyle(SOLID_FILL,RED);
circle(225,24,10);
floodfill(225,24,WHITE);


//setfillstyle(SOLID_FILL,6);
circle(225,54,10);
//floodfill(225,54,WHITE);


//setfillstyle(SOLID_FILL,GREEN);
circle(225,84,10);
//floodfill(225,84,WHITE);




//top right signal
rectangle(420,10,470,100);
rectangle(436,140,454,100);
rectangle(420,140,470,154);
rectangle(410,154,480,174);


setfillstyle(SOLID_FILL,RED);
circle(445,24,10);
floodfill(445,24,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,54,10);
//floodfill(445,54,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,84,10);
//floodfill(445,84,WHITE);


//bottom right signal
rectangle(420,310,470,400);
rectangle(436,400,454,440);
rectangle(420,440,470,454);
rectangle(410,454,480,474);


setfillstyle(SOLID_FILL,RED);
circle(445,324,10);
floodfill(445,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,354,10);
//floodfill(445,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,384,10);
//floodfill(445,384,WHITE);

//bottom left signal
rectangle(250,310,200,400);
rectangle(216,400,234,440);
rectangle(200,440,250,454);
rectangle(190,454,260,474);


//setfillstyle(SOLID_FILL,RED);
circle(225,324,10);
//floodfill(225,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(225,354,10);
//floodfill(225,354,WHITE);

setfillstyle(SOLID_FILL,GREEN);
circle(225,384,10);
floodfill(225,384,WHITE);




n=5-k/150;
//if(n>=0)
{
sprintf(a,"%d",n);
outtextxy(222,19,a);
outtextxy(442,19,a);
outtextxy(442,319,a);
outtextxy(222,379,a);
}

}


for(int p=-100;p<120;p=p+38)
{
delay(400);
cleardevice();
//left line
line(1,180,270,180);
line(1,300,270,300);


//left zebra
line(1,242,20,242);
line(40,242,60,242);
line(80,242,100,242);
line(120,242,140,242);
line(160,242,180,242);
line(200,242,220,242);
line(240,242,260,242);



/*truck
line(50,190,70,190);
line(70,190,80,210);
line(80,210,80,230);
line(80,230,70,230);
circle(64,230,5);
line(22,230,60,230);
circle(16,230,5);
line(2,230,10,230);
line(2,230,2,212);
line(2,212,50,212);
line(50,212,50,190);
line(58,210,58,200);
line(58,210,64,210);
line(64,210,64,200);
line(58,200,64,200);



//car
line(120,200,154,200);
line(112,216,120,200);
line(162,216,154,200);
line(112,216,100,216);
line(100,216,100,230);
line(162,216,174,216);
line(174,216,174,230);
line(158,230,174,230);
circle(154,230,5);
line(120,230,150,230);
circle(114,230,5);
line(100,230,110,230);
line(140,204,150,204);
line(154,216,150,204);
line(140,216,154,216);
line(140,216,140,204);

line(134,216,134,204);
line(124,204,134,204);
line(120,216,134,216);
line(120,216,124,204);*/





//carconstant
setfillstyle(1,BROWN);
int k2=80;
line(120+k2,200,154+k2,200);
line(112+k2,216,120+k2,200);
line(162+k2,216,154+k2,200);
line(112+k2,216,100+k2,216);
line(100+k2,216,100+k2,230);
line(162+k2,216,174+k2,216);
line(174+k2,216,174+k2,230);
line(158+k2,230,174+k2,230);
circle(154+k2,230,5);
line(120+k2,230,150+k2,230);
circle(114+k2,230,5);
line(100+k2,230,110+k2,230);
line(140+k2,204,150+k2,204);
line(154+k2,216,150+k2,204);
line(140+k2,216,154+k2,216);
line(140+k2,216,140+k2,204);

line(134+k2,216,134+k2,204);
line(124+k2,204,134+k2,204);
line(120+k2,216,134+k2,216);
line(120+k2,216,124+k2,204);
floodfill(121+k2,201,WHITE);


//right line
line(400,180,638,180);
line(400,300,638,300);


//right zebra
line(600,242,620,242);
line(560,242,580,242);
line(520,242,540,242);
line(480,242,500,242);
line(440,242,460,242);
line(404,242,420,242);

/*
//car2
line(560,250,600,250);
line(600,250,610,270);
line(560,250,550,270);
line(530,270,620,270);
line(620,270,620,290);
line(600,290,620,290);
circle(594,290,5);
line(556,290,588,290);
circle(550,290,5);
line(530,290,544,290);
line(530,290,530,270);

line(584,254,594,254);
line(584,264,594,264);
line(584,254,584,264);
line(594,254,594,264);

line(564,254,574,254);
line(564,264,574,264);
line(564,254,564,264);
line(574,254,574,264);



//car3
line(440,250,480,250);
line(440,250,430,270);
line(480,250,490,270);
line(410,270,512,270);
line(480,290,512,290);
circle(474,290,5);
circle(434,290,5);
line(440,290,468,290);
line(410,290,428,290);
line(410,270,410,290);
line(512,270,512,290);
line(450,250,450,270);
line(470,250,470,270);
  */


//top line
line(270,1,270,180);
line(400,1,400,180);


//top zebra
line(336,1,336,20);
line(336,40,336,60);
line(336,80,336,100);
line(336,120,336,140);
line(336,160,336,180);



//bottom line
line(270,300,270,500);
line(400,300,400,500);


//bottom zebra
line(336,300,336,320);
line(336,340,336,360);
line(336,380,336,400);
line(336,420,336,440);
line(336,460,336,480);




//car 3
setfillstyle(1,YELLOW);
line(560-p,250,600-p,250);
line(600-p,250,610-p,270);
line(560-p,250,550-p,270);
line(530-p,270,620-p,270);
line(620-p,270,620-p,290);
line(600-p,290,620-p,290);
circle(594-p,290,5);
line(556-p,290,588-p,290);
circle(550-p,290,5);
line(530-p,290,544-p,290);
line(530-p,290,530-p,270);

line(584-p,254,594-p,254);
line(584-p,264,594-p,264);
line(584-p,254,584-p,264);
line(594-p,254,594-p,264);

line(564-p,254,574-p,254);
line(564-p,264,574-p,264);
line(564-p,254,564-p,264);
line(574-p,254,574-p,264);
floodfill(561-p,251,WHITE);
setfillstyle(1,BROWN);
floodfill(531-p,271,WHITE);



//carvertical1
setfillstyle(1,YELLOW);
rectangle(290,10,320,60);
floodfill(291,11,WHITE);
setfillstyle(1,BLUE);
rectangle(290,50,320,60);
floodfill(291,51,WHITE);
setfillstyle(1,YELLOW);
rectangle(290,30,320,50);
floodfill(291,31,WHITE);
setfillstyle(1,BLUE);
rectangle(290,20,320,30);
floodfill(291,21,WHITE);
setfillstyle(1,YELLOW);
rectangle(290,60,320,70);
floodfill(291,61,WHITE);



//carvertical2
setfillstyle(1,RED);
rectangle(290,80,320,90);
floodfill(291,81,WHITE);
setfillstyle(6,BLUE);
rectangle(290,90,320,100);
floodfill(291,91,WHITE);
setfillstyle(1,RED);
rectangle(290,100,320,120);
floodfill(291,101,WHITE);
setfillstyle(6,BLUE);
rectangle(290,120,320,130);
floodfill(291,121,WHITE);
setfillstyle(1,RED);
rectangle(290,130,320,140);
floodfill(291,131,WHITE);



//car bottom
setfillstyle(1,GREEN);
rectangle(360,410,390,420);
floodfill(361,411,WHITE);
setfillstyle(6,BLUE);
rectangle(360,420,390,430);
floodfill(361,421,WHITE);
setfillstyle(1,GREEN);
rectangle(360,430,390,450);
floodfill(361,431,WHITE);
setfillstyle(6,BLUE);
rectangle(360,450,390,460);
floodfill(361,451,WHITE);
setfillstyle(1,GREEN);
rectangle(360,460,390,470);
floodfill(361,461,WHITE);



//car bottom 2
setfillstyle(1,LIGHTRED);
rectangle(360,330,390,340);
floodfill(361,331,WHITE);
setfillstyle(6,BLUE);
rectangle(360,340,390,350);
floodfill(361,341,WHITE);
setfillstyle(1,LIGHTRED);
rectangle(360,350,390,370);
floodfill(361,351,WHITE);
setfillstyle(6,BLUE);
rectangle(360,370,390,380);
floodfill(361,371,WHITE);
setfillstyle(1,LIGHTRED);
rectangle(360,380,390,390);
floodfill(361,381,WHITE);




//top left signal
rectangle(250,10,200,100);
rectangle(216,140,234,100);
rectangle(200,140,250,154);
rectangle(190,154,260,174);


setfillstyle(SOLID_FILL,RED);
circle(225,24,10);
floodfill(225,24,WHITE);


//setfillstyle(SOLID_FILL,6);
circle(225,54,10);
//floodfill(225,54,WHITE);


//setfillstyle(SOLID_FILL,GREEN);
circle(225,84,10);
//floodfill(225,84,WHITE);




//top right signal
rectangle(420,10,470,100);
rectangle(436,140,454,100);
rectangle(420,140,470,154);
rectangle(410,154,480,174);


setfillstyle(SOLID_FILL,RED);
circle(445,24,10);
floodfill(445,24,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,54,10);
//floodfill(445,54,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,84,10);
//floodfill(445,84,WHITE);


//bottom right signal
rectangle(420,310,470,400);
rectangle(436,400,454,440);
rectangle(420,440,470,454);
rectangle(410,454,480,474);


//setfillstyle(SOLID_FILL,RED);
circle(445,324,10);
//floodfill(445,324,WHITE);

setfillstyle(SOLID_FILL,6);
circle(445,354,10);
floodfill(445,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,384,10);
//floodfill(445,384,WHITE);


//bottom left signal
rectangle(250,310,200,400);
rectangle(216,400,234,440);
rectangle(200,440,250,454);
rectangle(190,454,260,474);


//setfillstyle(SOLID_FILL,RED);
circle(225,324,10);
//floodfill(225,324,WHITE);

setfillstyle(SOLID_FILL,6);
circle(225,354,10);
floodfill(225,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(225,384,10);
//floodfill(225,384,WHITE);


n=2-p/60;
//if(n>=0)
{
sprintf(a,"%d",n);
outtextxy(222,19,a);
outtextxy(442,19,a);
outtextxy(442,349,a);
outtextxy(222,349,a);
}

}
//delay(1000);
//cleardevice();


for(int l=0;l<630;l=l+60)
{
delay(400);
cleardevice();
//left line
line(1,180,270,180);
line(1,300,270,300);


//left zebra
line(1,242,20,242);
line(40,242,60,242);
line(80,242,100,242);
line(120,242,140,242);
line(160,242,180,242);
line(200,242,220,242);
line(240,242,260,242);



/*
//truck
line(50,190,70,190);
line(70,190,80,210);
line(80,210,80,230);
line(80,230,70,230);
circle(64,230,5);
line(22,230,60,230);
circle(16,230,5);
line(2,230,10,230);
line(2,230,2,212);
line(2,212,50,212);
line(50,212,50,190);
line(58,210,58,200);
line(58,210,64,210);
line(64,210,64,200);
line(58,200,64,200);



//car
line(120,200,154,200);
line(112,216,120,200);
line(162,216,154,200);
line(112,216,100,216);
line(100,216,100,230);
line(162,216,174,216);
line(174,216,174,230);
line(158,230,174,230);
circle(154,230,5);
line(120,230,150,230);
circle(114,230,5);
line(100,230,110,230);
line(140,204,150,204);
line(154,216,150,204);
line(140,216,154,216);
line(140,216,140,204);

line(134,216,134,204);
line(124,204,134,204);
line(120,216,134,216);
line(120,216,124,204);
		      */



//carconstant
setfillstyle(1,BROWN);
int k3=80;
line(120+k3,200,154+k3,200);
line(112+k3,216,120+k3,200);
line(162+k3,216,154+k3,200);
line(112+k3,216,100+k3,216);
line(100+k3,216,100+k3,230);
line(162+k3,216,174+k3,216);
line(174+k3,216,174+k3,230);
line(158+k3,230,174+k3,230);
circle(154+k3,230,5);
line(120+k3,230,150+k3,230);
circle(114+k3,230,5);
line(100+k3,230,110+k3,230);
line(140+k3,204,150+k3,204);
line(154+k3,216,150+k3,204);
line(140+k3,216,154+k3,216);
line(140+k3,216,140+k3,204);

line(134+k3,216,134+k3,204);
line(124+k3,204,134+k3,204);
line(120+k3,216,134+k3,216);
line(120+k3,216,124+k3,204);
floodfill(121+k3,201,WHITE);


//carconstant 3
int k6=140;
setfillstyle(1,YELLOW);
line(560-k6,250,600-k6,250);
line(600-k6,250,610-k6,270);
line(560-k6,250,550-k6,270);
line(530-k6,270,620-k6,270);
line(620-k6,270,620-k6,290);
line(600-k6,290,620-k6,290);
circle(594-k6,290,5);
line(556-k6,290,588-k6,290);
circle(550-k6,290,5);
line(530-k6,290,544-k6,290);
line(530-k6,290,530-k6,270);

line(584-k6,254,594-k6,254);
line(584-k6,264,594-k6,264);
line(584-k6,254,584-k6,264);
line(594-k6,254,594-k6,264);

line(564-k6,254,574-k6,254);
line(564-k6,264,574-k6,264);
line(564-k6,254,564-k6,264);
line(574-k6,254,574-k6,264);
floodfill(561-k6,251,WHITE);
setfillstyle(1,BROWN);
floodfill(531-k6,271,WHITE);


//right line
line(400,180,638,180);
line(400,300,638,300);

//right zebra
line(600,242,620,242);
line(560,242,580,242);
line(520,242,540,242);
line(480,242,500,242);
line(440,242,460,242);
line(404,242,420,242);


    /*
//car2
line(560,250,600,250);
line(600,250,610,270);
line(560,250,550,270);
line(530,270,620,270);
line(620,270,620,290);
line(600,290,620,290);
circle(594,290,5);
line(556,290,588,290);
circle(550,290,5);
line(530,290,544,290);
line(530,290,530,270);

line(584,254,594,254);
line(584,264,594,264);
line(584,254,584,264);
line(594,254,594,264);

line(564,254,574,254);
line(564,264,574,264);
line(564,254,564,264);
line(574,254,574,264);



//car3
line(440,250,480,250);
line(440,250,430,270);
line(480,250,490,270);
line(410,270,512,270);
line(480,290,512,290);
circle(474,290,5);
circle(434,290,5);
line(440,290,468,290);
line(410,290,428,290);
line(410,270,410,290);
line(512,270,512,290);
line(450,250,450,270);
line(470,250,470,270);
      */

//top line
line(270,1,270,180);
line(400,1,400,180);


//top zebra
line(336,1,336,20);
line(336,40,336,60);
line(336,80,336,100);
line(336,120,336,140);
line(336,160,336,180);



//bottom line
line(270,300,270,500);
line(400,300,400,500);


//bottom zebra
line(336,300,336,320);
line(336,340,336,360);
line(336,380,336,400);
line(336,420,336,440);
line(336,460,336,480);


//carvertical1
setfillstyle(1,YELLOW);
rectangle(290,10+l,320,60+l);
floodfill(291,11+l,WHITE);
setfillstyle(1,BLUE);
rectangle(290,50+l,320,60+l);
floodfill(291,51+l,WHITE);
setfillstyle(1,YELLOW);
rectangle(290,30+l,320,50+l);
floodfill(291,31+l,WHITE);
setfillstyle(1,BLUE);
rectangle(290,20+l,320,30+l);
floodfill(291,21+l,WHITE);
setfillstyle(1,YELLOW);
rectangle(290,60+l,320,70+l);
floodfill(291,61+l,WHITE);



//carvertical2
setfillstyle(1,RED);
rectangle(290,80+l,320,90+l);
floodfill(291,81+l,WHITE);
setfillstyle(6,BLUE);
rectangle(290,90+l,320,100+l);
floodfill(291,91+l,WHITE);
setfillstyle(1,RED);
rectangle(290,100+l,320,120+l);
floodfill(291,101+l,WHITE);
setfillstyle(6,BLUE);
rectangle(290,120+l,320,130+l);
floodfill(291,121+l,WHITE);
setfillstyle(1,RED);
rectangle(290,130+l,320,140+l);
floodfill(291,131+l,WHITE);




//car bottom
setfillstyle(1,GREEN);
rectangle(360,410,390,420);
floodfill(361,411,WHITE);
setfillstyle(6,BLUE);
rectangle(360,420,390,430);
floodfill(361,421,WHITE);
setfillstyle(1,GREEN);
rectangle(360,430,390,450);
floodfill(361,431,WHITE);
setfillstyle(6,BLUE);
rectangle(360,450,390,460);
floodfill(361,451,WHITE);
setfillstyle(1,GREEN);
rectangle(360,460,390,470);
floodfill(361,461,WHITE);



//car bottom 2
setfillstyle(1,LIGHTRED);
rectangle(360,330,390,340);
floodfill(361,331,WHITE);
setfillstyle(6,BLUE);
rectangle(360,340,390,350);
floodfill(361,341,WHITE);
setfillstyle(1,LIGHTRED);
rectangle(360,350,390,370);
floodfill(361,351,WHITE);
setfillstyle(6,BLUE);
rectangle(360,370,390,380);
floodfill(361,371,WHITE);
setfillstyle(1,LIGHTRED);
rectangle(360,380,390,390);
floodfill(361,381,WHITE);



//top left signal
rectangle(250,10,200,100);
rectangle(216,140,234,100);
rectangle(200,140,250,154);
rectangle(190,154,260,174);


setfillstyle(SOLID_FILL,RED);
circle(225,24,10);
floodfill(225,24,WHITE);


//setfillstyle(SOLID_FILL,6);
circle(225,54,10);
//floodfill(225,54,WHITE);


//setfillstyle(SOLID_FILL,GREEN);
circle(225,84,10);
//floodfill(225,84,WHITE);




//top right signal
rectangle(420,10,470,100);
rectangle(436,140,454,100);
rectangle(420,140,470,154);
rectangle(410,154,480,174);


setfillstyle(SOLID_FILL,RED);
circle(445,24,10);
floodfill(445,24,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,54,10);
//floodfill(445,54,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,84,10);
//floodfill(445,84,WHITE);


//bottom right signal
rectangle(420,310,470,400);
rectangle(436,400,454,440);
rectangle(420,440,470,454);
rectangle(410,454,480,474);


//setfillstyle(SOLID_FILL,RED);
circle(445,324,10);
//floodfill(445,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,354,10);
//floodfill(445,354,WHITE);

setfillstyle(SOLID_FILL,GREEN);
circle(445,384,10);
floodfill(445,384,WHITE);


//bottom left signal
rectangle(250,310,200,400);
rectangle(216,400,234,440);
rectangle(200,440,250,454);
rectangle(190,454,260,474);


setfillstyle(SOLID_FILL,RED);
circle(225,324,10);
floodfill(225,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(225,354,10);
//floodfill(225,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(225,384,10);
//floodfill(225,384,WHITE);



n=5-l/150;
//if(n>=0)
{
sprintf(a,"%d",n);
outtextxy(222,19,a);
outtextxy(442,19,a);
outtextxy(442,379,a);
outtextxy(222,319,a);
}

}



for(int q=-100;q<100;q=q+38)

{
delay(400);
cleardevice();

//left line
line(1,180,270,180);
line(1,300,270,300);


//left zebra
line(1,242,20,242);
line(40,242,60,242);
line(80,242,100,242);
line(120,242,140,242);
line(160,242,180,242);
line(200,242,220,242);
line(240,242,260,242);



/*truck
line(50,190,70,190);
line(70,190,80,210);
line(80,210,80,230);
line(80,230,70,230);
circle(64,230,5);
line(22,230,60,230);
circle(16,230,5);
line(2,230,10,230);
line(2,230,2,212);
line(2,212,50,212);
line(50,212,50,190);
line(58,210,58,200);
line(58,210,64,210);
line(64,210,64,200);
line(58,200,64,200);



//car
line(120,200,154,200);
line(112,216,120,200);
line(162,216,154,200);
line(112,216,100,216);
line(100,216,100,230);
line(162,216,174,216);
line(174,216,174,230);
line(158,230,174,230);
circle(154,230,5);
line(120,230,150,230);
circle(114,230,5);
line(100,230,110,230);
line(140,204,150,204);
line(154,216,150,204);
line(140,216,154,216);
line(140,216,140,204);

line(134,216,134,204);
line(124,204,134,204);
line(120,216,134,216);
line(120,216,124,204);
*/



//carconstant
setfillstyle(1,BROWN);
int k4=80;
line(120+k4,200,154+k4,200);
line(112+k4,216,120+k4,200);
line(162+k4,216,154+k4,200);
line(112+k4,216,100+k4,216);
line(100+k4,216,100+k4,230);
line(162+k4,216,174+k4,216);
line(174+k4,216,174+k4,230);
line(158+k4,230,174+k4,230);
circle(154+k4,230,5);
line(120+k4,230,150+k4,230);
circle(114+k4,230,5);
line(100+k4,230,110+k4,230);
line(140+k4,204,150+k4,204);
line(154+k4,216,150+k4,204);
line(140+k4,216,154+k4,216);
line(140+k4,216,140+k4,204);

line(134+k4,216,134+k4,204);
line(124+k4,204,134+k4,204);
line(120+k4,216,134+k4,216);
line(120+k4,216,124+k4,204);
floodfill(121+k4,201,WHITE);



//carconstant 3
int k7=140;
setfillstyle(1,YELLOW);
line(560-k7,250,600-k7,250);
line(600-k7,250,610-k7,270);
line(560-k7,250,550-k7,270);
line(530-k7,270,620-k7,270);
line(620-k7,270,620-k7,290);
line(600-k7,290,620-k7,290);
circle(594-k7,290,5);
line(556-k7,290,588-k7,290);
circle(550-k7,290,5);
line(530-k7,290,544-k7,290);
line(530-k7,290,530-k7,270);

line(584-k7,254,594-k7,254);
line(584-k7,264,594-k7,264);
line(584-k7,254,584-k7,264);
line(594-k7,254,594-k7,264);

line(564-k7,254,574-k7,254);
line(564-k7,264,574-k7,264);
line(564-k7,254,564-k7,264);
line(574-k7,254,574-k7,264);
floodfill(561-k7,251,WHITE);
setfillstyle(1,BROWN);
floodfill(531-k7,271,WHITE);


//right line
line(400,180,638,180);
line(400,300,638,300);


//right zebra
line(600,242,620,242);
line(560,242,580,242);
line(520,242,540,242);
line(480,242,500,242);
line(440,242,460,242);
line(404,242,420,242);


	/*
//car2
line(560,250,600,250);
line(600,250,610,270);
line(560,250,550,270);
line(530,270,620,270);
line(620,270,620,290);
line(600,290,620,290);
circle(594,290,5);
line(556,290,588,290);
circle(550,290,5);
line(530,290,544,290);
line(530,290,530,270);

line(584,254,594,254);
line(584,264,594,264);
line(584,254,584,264);
line(594,254,594,264);

line(564,254,574,254);
line(564,264,574,264);
line(564,254,564,264);
line(574,254,574,264);



//car3
line(440,250,480,250);
line(440,250,430,270);
line(480,250,490,270);
line(410,270,512,270);
line(480,290,512,290);
circle(474,290,5);
circle(434,290,5);
line(440,290,468,290);
line(410,290,428,290);
line(410,270,410,290);
line(512,270,512,290);
line(450,250,450,270);
line(470,250,470,270);
	  */

//top line
line(270,1,270,180);
line(400,1,400,180);


//top zebra
line(336,1,336,20);
line(336,40,336,60);
line(336,80,336,100);
line(336,120,336,140);
line(336,160,336,180);



//bottom line
line(270,300,270,500);
line(400,300,400,500);


//bottom zebra
line(336,300,336,320);
line(336,340,336,360);
line(336,380,336,400);
line(336,420,336,440);
line(336,460,336,480);


  /*
//carvertical1
setfillstyle(1,YELLOW);
rectangle(290,10,320,60);
floodfill(291,11,WHITE);
setfillstyle(1,BLUE);
rectangle(290,50,320,60);
floodfill(291,51,WHITE);
setfillstyle(1,YELLOW);
rectangle(290,30,320,50);
floodfill(291,31,WHITE);
setfillstyle(1,BLUE);
rectangle(290,20,320,30);
floodfill(291,21,WHITE);
setfillstyle(1,YELLOW);
rectangle(290,60,320,70);
floodfill(291,61,WHITE);



//carvertical2
setfillstyle(1,RED);
rectangle(290,80,320,90);
floodfill(291,81,WHITE);
setfillstyle(6,BLUE);
rectangle(290,90,320,100);
floodfill(291,91,WHITE);
setfillstyle(1,RED);
rectangle(290,100,320,120);
floodfill(291,101,WHITE);
setfillstyle(6,BLUE);
rectangle(290,120,320,130);
floodfill(291,121,WHITE);
setfillstyle(1,RED);
rectangle(290,130,320,140);
floodfill(291,131,WHITE);

    */



//car constant 4
setfillstyle(1,DARKGRAY);
rectangle(290,10+q,320,60+q);
floodfill(291,11+q,WHITE);
setfillstyle(1,BLUE);
rectangle(290,50+q,320,60+q);
floodfill(291,51+q,WHITE);
setfillstyle(1,DARKGRAY);
rectangle(290,30+q,320,50+q);
floodfill(291,31+q,WHITE);
setfillstyle(1,BLUE);
rectangle(290,20+q,320,30+q);
floodfill(291,21+q,WHITE);
setfillstyle(1,DARKGRAY);
rectangle(290,60+q,320,70+q);
floodfill(291,61+q,WHITE);



//car bottom
setfillstyle(1,GREEN);
rectangle(360,410,390,420);
floodfill(361,411,WHITE);
setfillstyle(6,BLUE);
rectangle(360,420,390,430);
floodfill(361,421,WHITE);
setfillstyle(1,GREEN);
rectangle(360,430,390,450);
floodfill(361,431,WHITE);
setfillstyle(6,BLUE);
rectangle(360,450,390,460);
floodfill(361,451,WHITE);
setfillstyle(1,GREEN);
rectangle(360,460,390,470);
floodfill(361,461,WHITE);



//car bottom 2
setfillstyle(1,LIGHTRED);
rectangle(360,330,390,340);
floodfill(361,331,WHITE);
setfillstyle(6,BLUE);
rectangle(360,340,390,350);
floodfill(361,341,WHITE);
setfillstyle(1,LIGHTRED);
rectangle(360,350,390,370);
floodfill(361,351,WHITE);
setfillstyle(6,BLUE);
rectangle(360,370,390,380);
floodfill(361,371,WHITE);
setfillstyle(1,LIGHTRED);
rectangle(360,380,390,390);
floodfill(361,381,WHITE);


//top left signal
rectangle(250,10,200,100);
rectangle(216,140,234,100);
rectangle(200,140,250,154);
rectangle(190,154,260,174);


//setfillstyle(SOLID_FILL,RED);
circle(225,24,10);
//floodfill(225,24,WHITE);


setfillstyle(SOLID_FILL,6);
circle(225,54,10);
floodfill(225,54,WHITE);


//setfillstyle(SOLID_FILL,GREEN);
circle(225,84,10);
//floodfill(225,84,WHITE);


//top right signal
rectangle(420,10,470,100);
rectangle(436,140,454,100);
rectangle(420,140,470,154);
rectangle(410,154,480,174);


setfillstyle(SOLID_FILL,RED);
circle(445,24,10);
floodfill(445,24,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,54,10);
//floodfill(445,54,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,84,10);
//floodfill(445,84,WHITE);


//bottom right signal
rectangle(420,310,470,400);
rectangle(436,400,454,440);
rectangle(420,440,470,454);
rectangle(410,454,480,474);


//setfillstyle(SOLID_FILL,RED);
circle(445,324,10);
//floodfill(445,324,WHITE);

setfillstyle(SOLID_FILL,6);
circle(445,354,10);
floodfill(445,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,384,10);
//floodfill(445,384,WHITE);


//bottom left signal
rectangle(250,310,200,400);
rectangle(216,400,234,440);
rectangle(200,440,250,454);
rectangle(190,454,260,474);


setfillstyle(SOLID_FILL,RED);
circle(225,324,10);
floodfill(225,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(225,354,10);
//floodfill(225,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(225,384,10);
//floodfill(225,384,WHITE);



n=2-q/60;
//if(n>=0)
{
sprintf(a,"%d",n);
outtextxy(222,49,a);
outtextxy(442,19,a);
outtextxy(442,349,a);
outtextxy(222,319,a);
}
}

for(int m=0;m<490;m=m+60)
{
delay(400);
cleardevice();
//left line
line(1,180,270,180);
line(1,300,270,300);


//left zebra
line(1,242,20,242);
line(40,242,60,242);
line(80,242,100,242);
line(120,242,140,242);
line(160,242,180,242);
line(200,242,220,242);
line(240,242,260,242);



/*truck
line(50,190,70,190);
line(70,190,80,210);
line(80,210,80,230);
line(80,230,70,230);
circle(64,230,5);
line(22,230,60,230);
circle(16,230,5);
line(2,230,10,230);
line(2,230,2,212);
line(2,212,50,212);
line(50,212,50,190);
line(58,210,58,200);
line(58,210,64,210);
line(64,210,64,200);
line(58,200,64,200);



//car
line(120,200,154,200);
line(112,216,120,200);
line(162,216,154,200);
line(112,216,100,216);
line(100,216,100,230);
line(162,216,174,216);
line(174,216,174,230);
line(158,230,174,230);
circle(154,230,5);
line(120,230,150,230);
circle(114,230,5);
line(100,230,110,230);
line(140,204,150,204);
line(154,216,150,204);
line(140,216,154,216);
line(140,216,140,204);

line(134,216,134,204);
line(124,204,134,204);
line(120,216,134,216);
line(120,216,124,204);
  */



//carconstant
setfillstyle(1,BROWN);
int k5=80;
line(120+k5,200,154+k5,200);
line(112+k5,216,120+k5,200);
line(162+k5,216,154+k5,200);
line(112+k5,216,100+k5,216);
line(100+k5,216,100+k5,230);
line(162+k5,216,174+k5,216);
line(174+k5,216,174+k5,230);
line(158+k5,230,174+k5,230);
circle(154+k5,230,5);
line(120+k5,230,150+k5,230);
circle(114+k5,230,5);
line(100+k5,230,110+k5,230);
line(140+k5,204,150+k5,204);
line(154+k5,216,150+k5,204);
line(140+k5,216,154+k5,216);
line(140+k5,216,140+k5,204);

line(134+k5,216,134+k5,204);
line(124+k5,204,134+k5,204);
line(120+k5,216,134+k5,216);
line(120+k5,216,124+k5,204);
floodfill(121+k5,201,WHITE);

//carconstant 3
int k8=120;
setfillstyle(1,YELLOW);
line(560-k8,250,600-k8,250);
line(600-k8,250,610-k8,270);
line(560-k8,250,550-k8,270);
line(530-k8,270,620-k8,270);
line(620-k8,270,620-k8,290);
line(600-k8,290,620-k8,290);
circle(594-k8,290,5);
line(556-k8,290,588-k8,290);
circle(550-k8,290,5);
line(530-k8,290,544-k8,290);
line(530-k8,290,530-k8,270);

line(584-k8,254,594-k8,254);
line(584-k8,264,594-k8,264);
line(584-k8,254,584-k8,264);
line(594-k8,254,594-k8,264);

line(564-k8,254,574-k8,254);
line(564-k8,264,574-k8,264);
line(564-k8,254,564-k8,264);
line(574-k8,254,574-k8,264);
floodfill(561-k8,251,WHITE);
setfillstyle(1,BROWN);
floodfill(531-k8,271,WHITE);


//car constant 4
int k9=90;
setfillstyle(1,DARKGRAY);
rectangle(290,10+k9,320,60+k9);
floodfill(291,11+k9,WHITE);
setfillstyle(1,BLUE);
rectangle(290,50+k9,320,60+k9);
floodfill(291,51+k9,WHITE);
setfillstyle(1,DARKGRAY);
rectangle(290,30+k9,320,50+k9);
floodfill(291,31+k9,WHITE);
setfillstyle(1,BLUE);
rectangle(290,20+k9,320,30+k9);
floodfill(291,21+k9,WHITE);
setfillstyle(1,DARKGRAY);
rectangle(290,60+k9,320,70+k9);
floodfill(291,61+k9,WHITE);




//right line
line(400,180,638,180);
line(400,300,638,300);


//right zebra
line(600,242,620,242);
line(560,242,580,242);
line(520,242,540,242);
line(480,242,500,242);
line(440,242,460,242);
line(404,242,420,242);

	    /*

//car2
line(560,250,600,250);
line(600,250,610,270);
line(560,250,550,270);
line(530,270,620,270);
line(620,270,620,290);
line(600,290,620,290);
circle(594,290,5);
line(556,290,588,290);
circle(550,290,5);
line(530,290,544,290);
line(530,290,530,270);

line(584,254,594,254);
line(584,264,594,264);
line(584,254,584,264);
line(594,254,594,264);

line(564,254,574,254);
line(564,264,574,264);
line(564,254,564,264);
line(574,254,574,264);



//car3
line(440,250,480,250);
line(440,250,430,270);
line(480,250,490,270);
line(410,270,512,270);
line(480,290,512,290);
circle(474,290,5);
circle(434,290,5);
line(440,290,468,290);
line(410,290,428,290);
line(410,270,410,290);
line(512,270,512,290);
line(450,250,450,270);
line(470,250,470,270);
	      */




//top line
line(270,1,270,180);
line(400,1,400,180);


//top zebra
line(336,1,336,20);
line(336,40,336,60);
line(336,80,336,100);
line(336,120,336,140);
line(336,160,336,180);



//bottom line
line(270,300,270,500);
line(400,300,400,500);


//bottom zebra
line(336,300,336,320);
line(336,340,336,360);
line(336,380,336,400);
line(336,420,336,440);
line(336,460,336,480);



      /*
//carvertical1
setfillstyle(1,YELLOW);
rectangle(290,10,320,60);
floodfill(291,11,WHITE);
setfillstyle(1,BLUE);
rectangle(290,50,320,60);
floodfill(291,51,WHITE);
setfillstyle(1,YELLOW);
rectangle(290,30,320,50);
floodfill(291,31,WHITE);
setfillstyle(1,BLUE);
rectangle(290,20,320,30);
floodfill(291,21,WHITE);
setfillstyle(1,YELLOW);
rectangle(290,60,320,70);
floodfill(291,61,WHITE);



//carvertical2
setfillstyle(1,RED);
rectangle(290,80,320,90);
floodfill(291,81,WHITE);
setfillstyle(6,BLUE);
rectangle(290,90,320,100);
floodfill(291,91,WHITE);
setfillstyle(1,RED);
rectangle(290,100,320,120);
floodfill(291,101,WHITE);
setfillstyle(6,BLUE);
rectangle(290,120,320,130);
floodfill(291,121,WHITE);
setfillstyle(1,RED);
rectangle(290,130,320,140);
floodfill(291,131,WHITE);
	*/




//car bottom
setfillstyle(1,GREEN);
rectangle(360,410-m,390,420-m);
floodfill(361,411-m,WHITE);
setfillstyle(6,BLUE);
rectangle(360,420-m,390,430-m);
floodfill(361,421-m,WHITE);
setfillstyle(1,GREEN);
rectangle(360,430-m,390,450-m);
floodfill(361,431-m,WHITE);
setfillstyle(6,BLUE);
rectangle(360,450-m,390,460-m);
floodfill(361,451-m,WHITE);
setfillstyle(1,GREEN);
rectangle(360,460-m,390,470-m);
floodfill(361,461-m,WHITE);



//car bottom 2
setfillstyle(1,LIGHTRED);
rectangle(360,330-m,390,340-m);
floodfill(361,331-m,WHITE);
setfillstyle(6,BLUE);
rectangle(360,340-m,390,350-m);
floodfill(361,341-m,WHITE);
setfillstyle(1,LIGHTRED);
rectangle(360,350-m,390,370-m);
floodfill(361,351-m,WHITE);
setfillstyle(6,BLUE);
rectangle(360,370-m,390,380-m);
floodfill(361,371-m,WHITE);
setfillstyle(1,LIGHTRED);
rectangle(360,380-m,390,390-m);
floodfill(361,381-m,WHITE);


//top left signal
rectangle(250,10,200,100);
rectangle(216,140,234,100);
rectangle(200,140,250,154);
rectangle(190,154,260,174);


//setfillstyle(SOLID_FILL,RED);
circle(225,24,10);
//floodfill(225,24,WHITE);


//setfillstyle(SOLID_FILL,6);
circle(225,54,10);
//floodfill(225,54,WHITE);


setfillstyle(SOLID_FILL,GREEN);
circle(225,84,10);
floodfill(225,84,WHITE);


//top right signal
rectangle(420,10,470,100);
rectangle(436,140,454,100);
rectangle(420,140,470,154);
rectangle(410,154,480,174);


setfillstyle(SOLID_FILL,RED);
circle(445,24,10);
floodfill(445,24,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,54,10);
//floodfill(445,54,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,84,10);
//floodfill(445,84,WHITE);


//bottom right signal
rectangle(420,310,470,400);
rectangle(436,400,454,440);
rectangle(420,440,470,454);
rectangle(410,454,480,474);


setfillstyle(SOLID_FILL,RED);
circle(445,324,10);
floodfill(445,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,354,10);
//floodfill(445,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,384,10);
//floodfill(445,384,WHITE);


//bottom left signal
rectangle(250,310,200,400);
rectangle(216,400,234,440);
rectangle(200,440,250,454);
rectangle(190,454,260,474);


setfillstyle(SOLID_FILL,RED);
circle(225,324,10);
floodfill(225,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(225,354,10);
//floodfill(225,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(225,384,10);
//floodfill(225,384,WHITE);


n=5-m/120;
//if(n>=0)
{
sprintf(a,"%d",n);
outtextxy(222,79,a);
outtextxy(442,19,a);
outtextxy(442,319,a);
outtextxy(222,319,a);
}
}


for(int r=-100;r<100;r=r+38)
{
delay(400);
cleardevice();
//left line
line(1,180,270,180);
line(1,300,270,300);


//left zebra
line(1,242,20,242);
line(40,242,60,242);
line(80,242,100,242);
line(120,242,140,242);
line(160,242,180,242);
line(200,242,220,242);
line(240,242,260,242);



//right line
line(400,180,638,180);
line(400,300,638,300);


//right zebra
line(600,242,620,242);
line(560,242,580,242);
line(520,242,540,242);
line(480,242,500,242);
line(440,242,460,242);
line(404,242,420,242);



//top line
line(270,1,270,180);
line(400,1,400,180);


//top zebra
line(336,1,336,20);
line(336,40,336,60);
line(336,80,336,100);
line(336,120,336,140);
line(336,160,336,180);



//bottom line
line(270,300,270,500);
line(400,300,400,500);


//bottom zebra
line(336,300,336,320);
line(336,340,336,360);
line(336,380,336,400);
line(336,420,336,440);
line(336,460,336,480);



//carconstant
setfillstyle(1,BROWN);
int k5=80;
line(120+k5,200,154+k5,200);
line(112+k5,216,120+k5,200);
line(162+k5,216,154+k5,200);
line(112+k5,216,100+k5,216);
line(100+k5,216,100+k5,230);
line(162+k5,216,174+k5,216);
line(174+k5,216,174+k5,230);
line(158+k5,230,174+k5,230);
circle(154+k5,230,5);
line(120+k5,230,150+k5,230);
circle(114+k5,230,5);
line(100+k5,230,110+k5,230);
line(140+k5,204,150+k5,204);
line(154+k5,216,150+k5,204);
line(140+k5,216,154+k5,216);
line(140+k5,216,140+k5,204);

line(134+k5,216,134+k5,204);
line(124+k5,204,134+k5,204);
line(120+k5,216,134+k5,216);
line(120+k5,216,124+k5,204);
floodfill(121+k5,201,WHITE);

//carconstant 3
int k8=120;
setfillstyle(1,YELLOW);
line(560-k8,250,600-k8,250);
line(600-k8,250,610-k8,270);
line(560-k8,250,550-k8,270);
line(530-k8,270,620-k8,270);
line(620-k8,270,620-k8,290);
line(600-k8,290,620-k8,290);
circle(594-k8,290,5);
line(556-k8,290,588-k8,290);
circle(550-k8,290,5);
line(530-k8,290,544-k8,290);
line(530-k8,290,530-k8,270);

line(584-k8,254,594-k8,254);
line(584-k8,264,594-k8,264);
line(584-k8,254,584-k8,264);
line(594-k8,254,594-k8,264);

line(564-k8,254,574-k8,254);
line(564-k8,264,574-k8,264);
line(564-k8,254,564-k8,264);
line(574-k8,254,574-k8,264);
floodfill(561-k8,251,WHITE);
setfillstyle(1,BROWN);
floodfill(531-k8,271,WHITE);


//car constant 4
int k9=90;
setfillstyle(1,DARKGRAY);
rectangle(290,10+k9,320,60+k9);
floodfill(291,11+k9,WHITE);
setfillstyle(1,BLUE);
rectangle(290,50+k9,320,60+k9);
floodfill(291,51+k9,WHITE);
setfillstyle(1,DARKGRAY);
rectangle(290,30+k9,320,50+k9);
floodfill(291,31+k9,WHITE);
setfillstyle(1,BLUE);
rectangle(290,20+k9,320,30+k9);
floodfill(291,21+k9,WHITE);
setfillstyle(1,DARKGRAY);
rectangle(290,60+k9,320,70+k9);
floodfill(291,61+k9,WHITE);

//car constant last
setfillstyle(1,BLUE);
rectangle(290,410-r,320,460-r);
floodfill(291,411-r,WHITE);
setfillstyle(1,BLACK);
rectangle(290,450-r,320,460-r);
floodfill(291,451-r,WHITE);
setfillstyle(1,BLUE);
rectangle(290,430-r,320,450-r);
floodfill(291,431-r,WHITE);
setfillstyle(1,BLACK);
rectangle(290,420-r,320,430-r);
floodfill(291,421-r,WHITE);
setfillstyle(1,BLUE);
rectangle(290,460-r,320,470-r);
floodfill(291,461-r,WHITE);



//top left signal
rectangle(250,10,200,100);
rectangle(216,140,234,100);
rectangle(200,140,250,154);
rectangle(190,154,260,174);


//setfillstyle(SOLID_FILL,RED);
circle(225,24,10);
//floodfill(225,24,WHITE);


setfillstyle(SOLID_FILL,6);
circle(225,54,10);
floodfill(225,54,WHITE);


//setfillstyle(SOLID_FILL,GREEN);
circle(225,84,10);
//floodfill(225,84,WHITE);


//top right signal
rectangle(420,10,470,100);
rectangle(436,140,454,100);
rectangle(420,140,470,154);
rectangle(410,154,480,174);


//setfillstyle(SOLID_FILL,RED);
circle(445,24,10);
//floodfill(445,24,WHITE);

setfillstyle(SOLID_FILL,6);
circle(445,54,10);
floodfill(445,54,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,84,10);
//floodfill(445,84,WHITE);


//bottom right signal
rectangle(420,310,470,400);
rectangle(436,400,454,440);
rectangle(420,440,470,454);
rectangle(410,454,480,474);


setfillstyle(SOLID_FILL,RED);
circle(445,324,10);
floodfill(445,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,354,10);
//floodfill(445,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,384,10);
//floodfill(445,384,WHITE);


//bottom left signal
rectangle(250,310,200,400);
rectangle(216,400,234,440);
rectangle(200,440,250,454);
rectangle(190,454,260,474);


setfillstyle(SOLID_FILL,RED);
circle(225,324,10);
floodfill(225,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(225,354,10);
//floodfill(225,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(225,384,10);
//floodfill(225,384,WHITE);



n=2-r/60;
//if(n>=0)
{
sprintf(a,"%d",n);
outtextxy(222,49,a);
outtextxy(442,49,a);
outtextxy(442,319,a);
outtextxy(222,319,a);
}
}


for(int s=80;s<650;s=s+60)
{
delay(400);
cleardevice();
//left line
line(1,180,270,180);
line(1,300,270,300);


//left zebra
line(1,242,20,242);
line(40,242,60,242);
line(80,242,100,242);
line(120,242,140,242);
line(160,242,180,242);
line(200,242,220,242);
line(240,242,260,242);



//right line
line(400,180,638,180);
line(400,300,638,300);


//right zebra
line(600,242,620,242);
line(560,242,580,242);
line(520,242,540,242);
line(480,242,500,242);
line(440,242,460,242);
line(404,242,420,242);



//top line
line(270,1,270,180);
line(400,1,400,180);


//top zebra
line(336,1,336,20);
line(336,40,336,60);
line(336,80,336,100);
line(336,120,336,140);
line(336,160,336,180);



//bottom line
line(270,300,270,500);
line(400,300,400,500);


//bottom zebra
line(336,300,336,320);
line(336,340,336,360);
line(336,380,336,400);
line(336,420,336,440);
line(336,460,336,480);




//carconstant   moved 1
setfillstyle(1,BROWN);
line(120+s,200,154+s,200);
line(112+s,216,120+s,200);
line(162+s,216,154+s,200);
line(112+s,216,100+s,216);
line(100+s,216,100+s,230);
line(162+s,216,174+s,216);
line(174+s,216,174+s,230);
line(158+s,230,174+s,230);
circle(154+s,230,5);
line(120+s,230,150+s,230);
circle(114+s,230,5);
line(100+s,230,110+s,230);
line(140+s,204,150+s,204);
line(154+s,216,150+s,204);
line(140+s,216,154+s,216);
line(140+s,216,140+s,204);

line(134+s,216,134+s,204);
line(124+s,204,134+s,204);
line(120+s,216,134+s,216);
line(120+s,216,124+s,204);
floodfill(121+s,201,WHITE);

//carconstant 3
int k8=120;
setfillstyle(1,YELLOW);
line(560-k8,250,600-k8,250);
line(600-k8,250,610-k8,270);
line(560-k8,250,550-k8,270);
line(530-k8,270,620-k8,270);
line(620-k8,270,620-k8,290);
line(600-k8,290,620-k8,290);
circle(594-k8,290,5);
line(556-k8,290,588-k8,290);
circle(550-k8,290,5);
line(530-k8,290,544-k8,290);
line(530-k8,290,530-k8,270);

line(584-k8,254,594-k8,254);
line(584-k8,264,594-k8,264);
line(584-k8,254,584-k8,264);
line(594-k8,254,594-k8,264);

line(564-k8,254,574-k8,254);
line(564-k8,264,574-k8,264);
line(564-k8,254,564-k8,264);
line(574-k8,254,574-k8,264);
floodfill(561-k8,251,WHITE);
setfillstyle(1,BROWN);
floodfill(531-k8,271,WHITE);


//car constant 4
int k9=90;
setfillstyle(1,DARKGRAY);
rectangle(290,10+k9,320,60+k9);
floodfill(291,11+k9,WHITE);
setfillstyle(1,BLUE);
rectangle(290,50+k9,320,60+k9);
floodfill(291,51+k9,WHITE);
setfillstyle(1,DARKGRAY);
rectangle(290,30+k9,320,50+k9);
floodfill(291,31+k9,WHITE);
setfillstyle(1,BLUE);
rectangle(290,20+k9,320,30+k9);
floodfill(291,21+k9,WHITE);
setfillstyle(1,DARKGRAY);
rectangle(290,60+k9,320,70+k9);
floodfill(291,61+k9,WHITE);

//car constant last
int k12=90;
setfillstyle(1,BLUE);
rectangle(290,410-k12,320,460-k12);
floodfill(291,411-k12,WHITE);
setfillstyle(1,BLACK);
rectangle(290,450-k12,320,460-k12);
floodfill(291,451-k12,WHITE);
setfillstyle(1,BLUE);
rectangle(290,430-k12,320,450-k12);
floodfill(291,431-k12,WHITE);
setfillstyle(1,BLACK);
rectangle(290,420-k12,320,430-k12);
floodfill(291,421-k12,WHITE);
setfillstyle(1,BLUE);
rectangle(290,460-k12,320,470-k12);
floodfill(291,461-k12,WHITE);



//top left signal
rectangle(250,10,200,100);
rectangle(216,140,234,100);
rectangle(200,140,250,154);
rectangle(190,154,260,174);


setfillstyle(SOLID_FILL,RED);
circle(225,24,10);
floodfill(225,24,WHITE);


//setfillstyle(SOLID_FILL,6);
circle(225,54,10);
//floodfill(225,54,WHITE);


//setfillstyle(SOLID_FILL,GREEN);
circle(225,84,10);
//floodfill(225,84,WHITE);


//top right signal
rectangle(420,10,470,100);
rectangle(436,140,454,100);
rectangle(420,140,470,154);
rectangle(410,154,480,174);


//setfillstyle(SOLID_FILL,RED);
circle(445,24,10);
//floodfill(445,24,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,54,10);
//floodfill(445,54,WHITE);

setfillstyle(SOLID_FILL,GREEN);
circle(445,84,10);
floodfill(445,84,WHITE);


//bottom right signal
rectangle(420,310,470,400);
rectangle(436,400,454,440);
rectangle(420,440,470,454);
rectangle(410,454,480,474);


setfillstyle(SOLID_FILL,RED);
circle(445,324,10);
floodfill(445,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,354,10);
//floodfill(445,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,384,10);
//floodfill(445,384,WHITE);


//bottom left signal
rectangle(250,310,200,400);
rectangle(216,400,234,440);
rectangle(200,440,250,454);
rectangle(190,454,260,474);


setfillstyle(SOLID_FILL,RED);
circle(225,324,10);
floodfill(225,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(225,354,10);
//floodfill(225,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(225,384,10);
//floodfill(225,384,WHITE);



n=5-s/150;
//if(n>=0)
{
sprintf(a,"%d",n);
outtextxy(222,19,a);
outtextxy(442,79,a);
outtextxy(442,319,a);
outtextxy(222,319,a);
}
}
for(int t=-100;t<100;t=t+38)
{
delay(400);
cleardevice();
//left line
line(1,180,270,180);
line(1,300,270,300);


//left zebra
line(1,242,20,242);
line(40,242,60,242);
line(80,242,100,242);
line(120,242,140,242);
line(160,242,180,242);
line(200,242,220,242);
line(240,242,260,242);


//right line
line(400,180,638,180);
line(400,300,638,300);


//right zebra
line(600,242,620,242);
line(560,242,580,242);
line(520,242,540,242);
line(480,242,500,242);
line(440,242,460,242);
line(404,242,420,242);



//top line
line(270,1,270,180);
line(400,1,400,180);


//top zebra
line(336,1,336,20);
line(336,40,336,60);
line(336,80,336,100);
line(336,120,336,140);
line(336,160,336,180);



//bottom line
line(270,300,270,500);
line(400,300,400,500);


//bottom zebra
line(336,300,336,320);
line(336,340,336,360);
line(336,380,336,400);
line(336,420,336,440);
line(336,460,336,480);



//carconstant 3
int k8=120;
setfillstyle(1,YELLOW);
line(560-k8,250,600-k8,250);
line(600-k8,250,610-k8,270);
line(560-k8,250,550-k8,270);
line(530-k8,270,620-k8,270);
line(620-k8,270,620-k8,290);
line(600-k8,290,620-k8,290);
circle(594-k8,290,5);
line(556-k8,290,588-k8,290);
circle(550-k8,290,5);
line(530-k8,290,544-k8,290);
line(530-k8,290,530-k8,270);

line(584-k8,254,594-k8,254);
line(584-k8,264,594-k8,264);
line(584-k8,254,584-k8,264);
line(594-k8,254,594-k8,264);

line(564-k8,254,574-k8,254);
line(564-k8,264,574-k8,264);
line(564-k8,254,564-k8,264);
line(574-k8,254,574-k8,264);
floodfill(561-k8,251,WHITE);
setfillstyle(1,BROWN);
floodfill(531-k8,271,WHITE);


//car constant 4
int k9=90;
setfillstyle(1,DARKGRAY);
rectangle(290,10+k9,320,60+k9);
floodfill(291,11+k9,WHITE);
setfillstyle(1,BLUE);
rectangle(290,50+k9,320,60+k9);
floodfill(291,51+k9,WHITE);
setfillstyle(1,DARKGRAY);
rectangle(290,30+k9,320,50+k9);
floodfill(291,31+k9,WHITE);
setfillstyle(1,BLUE);
rectangle(290,20+k9,320,30+k9);
floodfill(291,21+k9,WHITE);
setfillstyle(1,DARKGRAY);
rectangle(290,60+k9,320,70+k9);
floodfill(291,61+k9,WHITE);

//car constant last
int k12=90;
setfillstyle(1,BLUE);
rectangle(290,410-k12,320,460-k12);
floodfill(291,411-k12,WHITE);
setfillstyle(1,BLACK);
rectangle(290,450-k12,320,460-k12);
floodfill(291,451-k12,WHITE);
setfillstyle(1,BLUE);
rectangle(290,430-k12,320,450-k12);
floodfill(291,431-k12,WHITE);
setfillstyle(1,BLACK);
rectangle(290,420-k12,320,430-k12);
floodfill(291,421-k12,WHITE);
setfillstyle(1,BLUE);
rectangle(290,460-k12,320,470-k12);
floodfill(291,461-k12,WHITE);


//top left signal
rectangle(250,10,200,100);
rectangle(216,140,234,100);
rectangle(200,140,250,154);
rectangle(190,154,260,174);


setfillstyle(SOLID_FILL,RED);
circle(225,24,10);
floodfill(225,24,WHITE);


//setfillstyle(SOLID_FILL,6);
circle(225,54,10);
//floodfill(225,54,WHITE);


//setfillstyle(SOLID_FILL,GREEN);
circle(225,84,10);
//floodfill(225,84,WHITE);




//top right signal
rectangle(420,10,470,100);
rectangle(436,140,454,100);
rectangle(420,140,470,154);
rectangle(410,154,480,174);


//setfillstyle(SOLID_FILL,RED);
circle(445,24,10);
//floodfill(445,24,WHITE);

setfillstyle(SOLID_FILL,6);
circle(445,54,10);
floodfill(445,54,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,84,10);
//floodfill(445,84,WHITE);


//bottom right signal
rectangle(420,310,470,400);
rectangle(436,400,454,440);
rectangle(420,440,470,454);
rectangle(410,454,480,474);


setfillstyle(SOLID_FILL,RED);
circle(445,324,10);
floodfill(445,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,354,10);
//floodfill(445,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,384,10);
//floodfill(445,384,WHITE);


//bottom left signal
rectangle(250,310,200,400);
rectangle(216,400,234,440);
rectangle(200,440,250,454);
rectangle(190,454,260,474);


//setfillstyle(SOLID_FILL,RED);
circle(225,324,10);
//floodfill(225,324,WHITE);

setfillstyle(SOLID_FILL,6);
circle(225,354,10);
floodfill(225,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(225,384,10);
//floodfill(225,384,WHITE);



n=2-t/60;
//if(n>=0)
{
sprintf(a,"%d",n);
outtextxy(222,19,a);
outtextxy(442,49,a);
outtextxy(442,319,a);
outtextxy(222,349,a);
}
}

for(int u=90;u<650;u=u+60)
{
delay(400);
cleardevice();
//left line
line(1,180,270,180);
line(1,300,270,300);


//left zebra
line(1,242,20,242);
line(40,242,60,242);
line(80,242,100,242);
line(120,242,140,242);
line(160,242,180,242);
line(200,242,220,242);
line(240,242,260,242);


//right line
line(400,180,638,180);
line(400,300,638,300);


//right zebra
line(600,242,620,242);
line(560,242,580,242);
line(520,242,540,242);
line(480,242,500,242);
line(440,242,460,242);
line(404,242,420,242);


//top line
line(270,1,270,180);
line(400,1,400,180);


//top zebra
line(336,1,336,20);
line(336,40,336,60);
line(336,80,336,100);
line(336,120,336,140);
line(336,160,336,180);



//bottom line
line(270,300,270,500);
line(400,300,400,500);


//bottom zebra
line(336,300,336,320);
line(336,340,336,360);
line(336,380,336,400);
line(336,420,336,440);
line(336,460,336,480);


//carconstant 3 moved
setfillstyle(1,YELLOW);
line(560-u,250,600-u,250);
line(600-u,250,610-u,270);
line(560-u,250,550-u,270);
line(530-u,270,620-u,270);
line(620-u,270,620-u,290);
line(600-u,290,620-u,290);
circle(594-u,290,5);
line(556-u,290,588-u,290);
circle(550-u,290,5);
line(530-u,290,544-u,290);
line(530-u,290,530-u,270);

line(584-u,254,594-u,254);
line(584-u,264,594-u,264);
line(584-u,254,584-u,264);
line(594-u,254,594-u,264);

line(564-u,254,574-u,254);
line(564-u,264,574-u,264);
line(564-u,254,564-u,264);
line(574-u,254,574-u,264);
floodfill(561-u,251,WHITE);
setfillstyle(1,BROWN);
floodfill(531-u,271,WHITE);


//car constant 4
int k9=90;
setfillstyle(1,DARKGRAY);
rectangle(290,10+k9,320,60+k9);
floodfill(291,11+k9,WHITE);
setfillstyle(1,BLUE);
rectangle(290,50+k9,320,60+k9);
floodfill(291,51+k9,WHITE);
setfillstyle(1,DARKGRAY);
rectangle(290,30+k9,320,50+k9);
floodfill(291,31+k9,WHITE);
setfillstyle(1,BLUE);
rectangle(290,20+k9,320,30+k9);
floodfill(291,21+k9,WHITE);
setfillstyle(1,DARKGRAY);
rectangle(290,60+k9,320,70+k9);
floodfill(291,61+k9,WHITE);

//car constant last
int k12=90;
setfillstyle(1,BLUE);
rectangle(290,410-k12,320,460-k12);
floodfill(291,411-k12,WHITE);
setfillstyle(1,BLACK);
rectangle(290,450-k12,320,460-k12);
floodfill(291,451-k12,WHITE);
setfillstyle(1,BLUE);
rectangle(290,430-k12,320,450-k12);
floodfill(291,431-k12,WHITE);
setfillstyle(1,BLACK);
rectangle(290,420-k12,320,430-k12);
floodfill(291,421-k12,WHITE);
setfillstyle(1,BLUE);
rectangle(290,460-k12,320,470-k12);
floodfill(291,461-k12,WHITE);



//top left signal
rectangle(250,10,200,100);
rectangle(216,140,234,100);
rectangle(200,140,250,154);
rectangle(190,154,260,174);


setfillstyle(SOLID_FILL,RED);
circle(225,24,10);
floodfill(225,24,WHITE);


//setfillstyle(SOLID_FILL,6);
circle(225,54,10);
//floodfill(225,54,WHITE);


//setfillstyle(SOLID_FILL,GREEN);
circle(225,84,10);
//floodfill(225,84,WHITE);




//top right signal
rectangle(420,10,470,100);
rectangle(436,140,454,100);
rectangle(420,140,470,154);
rectangle(410,154,480,174);


setfillstyle(SOLID_FILL,RED);
circle(445,24,10);
floodfill(445,24,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,54,10);
//floodfill(445,54,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,84,10);
//floodfill(445,84,WHITE);


//bottom right signal
rectangle(420,310,470,400);
rectangle(436,400,454,440);
rectangle(420,440,470,454);
rectangle(410,454,480,474);


setfillstyle(SOLID_FILL,RED);
circle(445,324,10);
floodfill(445,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,354,10);
//floodfill(445,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,384,10);
//floodfill(445,384,WHITE);

//bottom left signal
rectangle(250,310,200,400);
rectangle(216,400,234,440);
rectangle(200,440,250,454);
rectangle(190,454,260,474);


//setfillstyle(SOLID_FILL,RED);
circle(225,324,10);
//floodfill(225,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(225,354,10);
//floodfill(225,354,WHITE);

setfillstyle(SOLID_FILL,GREEN);
circle(225,384,10);
floodfill(225,384,WHITE);




n=5-u/150;
//if(n>=0)
{
sprintf(a,"%d",n);
outtextxy(222,19,a);
outtextxy(442,19,a);
outtextxy(442,319,a);
outtextxy(222,379,a);
}
}



for(int v=-100+40;v<110;v=v+38)
{
delay(400);
cleardevice();
//left line
line(1,180,270,180);
line(1,300,270,300);


//left zebra
line(1,242,20,242);
line(40,242,60,242);
line(80,242,100,242);
line(120,242,140,242);
line(160,242,180,242);
line(200,242,220,242);
line(240,242,260,242);


//right line
line(400,180,638,180);
line(400,300,638,300);


//right zebra
line(600,242,620,242);
line(560,242,580,242);
line(520,242,540,242);
line(480,242,500,242);
line(440,242,460,242);
line(404,242,420,242);



//top line
line(270,1,270,180);
line(400,1,400,180);


//top zebra
line(336,1,336,20);
line(336,40,336,60);
line(336,80,336,100);
line(336,120,336,140);
line(336,160,336,180);



//bottom line
line(270,300,270,500);
line(400,300,400,500);


//bottom zebra
line(336,300,336,320);
line(336,340,336,360);
line(336,380,336,400);
line(336,420,336,440);
line(336,460,336,480);

/*
//car constant 4
int k9=90;
setfillstyle(1,DARKGRAY);
rectangle(290,10+k9,320,60+k9);
floodfill(291,11+k9,WHITE);
setfillstyle(1,BLUE);
rectangle(290,50+k9,320,60+k9);
floodfill(291,51+k9,WHITE);
setfillstyle(1,DARKGRAY);
rectangle(290,30+k9,320,50+k9);
floodfill(291,31+k9,WHITE);
setfillstyle(1,BLUE);
rectangle(290,20+k9,320,30+k9);
floodfill(291,21+k9,WHITE);
setfillstyle(1,DARKGRAY);
rectangle(290,60+k9,320,70+k9);
floodfill(291,61+k9,WHITE);
*/

setfillstyle(1,DARKGRAY);
rectangle(290,10+v+130,320,60+v+130);
floodfill(291,11+v+130,WHITE);
setfillstyle(1,BLUE);
rectangle(290,50+v+130,320,60+v+130);
floodfill(291,51+v+130,WHITE);
setfillstyle(1,DARKGRAY);
rectangle(290,30+v+130,320,50+v+130);
floodfill(291,31+v+130,WHITE);
setfillstyle(1,BLUE);
rectangle(290,20+v+130,320,30+v+130);
floodfill(291,21+v+130,WHITE);
setfillstyle(1,DARKGRAY);
rectangle(290,60+v+130,320,70+v+130);
floodfill(291,61+v+130,WHITE);

//car constant last
int k12=90;
setfillstyle(1,BLUE);
rectangle(290,410-k12,320,460-k12);
floodfill(291,411-k12,WHITE);
setfillstyle(1,BLACK);
rectangle(290,450-k12,320,460-k12);
floodfill(291,451-k12,WHITE);
setfillstyle(1,BLUE);
rectangle(290,430-k12,320,450-k12);
floodfill(291,431-k12,WHITE);
setfillstyle(1,BLACK);
rectangle(290,420-k12,320,430-k12);
floodfill(291,421-k12,WHITE);
setfillstyle(1,BLUE);
rectangle(290,460-k12,320,470-k12);
floodfill(291,461-k12,WHITE);


//top left signal
rectangle(250,10,200,100);
rectangle(216,140,234,100);
rectangle(200,140,250,154);
rectangle(190,154,260,174);


setfillstyle(SOLID_FILL,RED);
circle(225,24,10);
floodfill(225,24,WHITE);


//setfillstyle(SOLID_FILL,6);
circle(225,54,10);
//floodfill(225,54,WHITE);


//setfillstyle(SOLID_FILL,GREEN);
circle(225,84,10);
//floodfill(225,84,WHITE);




//top right signal
rectangle(420,10,470,100);
rectangle(436,140,454,100);
rectangle(420,140,470,154);
rectangle(410,154,480,174);


setfillstyle(SOLID_FILL,RED);
circle(445,24,10);
floodfill(445,24,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,54,10);
//floodfill(445,54,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,84,10);
//floodfill(445,84,WHITE);


//bottom right signal
rectangle(420,310,470,400);
rectangle(436,400,454,440);
rectangle(420,440,470,454);
rectangle(410,454,480,474);


//setfillstyle(SOLID_FILL,RED);
circle(445,324,10);
//floodfill(445,324,WHITE);

setfillstyle(SOLID_FILL,6);
circle(445,354,10);
floodfill(445,354,WHITE);
//setfillstyle(SOLID_FILL,GREEN);
circle(445,384,10);
//floodfill(445,384,WHITE);


//bottom left signal
rectangle(250,310,200,400);
rectangle(216,400,234,440);
rectangle(200,440,250,454);
rectangle(190,454,260,474);


//setfillstyle(SOLID_FILL,RED);
circle(225,324,10);
//floodfill(225,324,WHITE);

setfillstyle(SOLID_FILL,6);
circle(225,354,10);
floodfill(225,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(225,384,10);
//floodfill(225,384,WHITE);


n=2-v/60;
//if(n>=0)
{
sprintf(a,"%d",n);
outtextxy(222,19,a);
outtextxy(442,19,a);
outtextxy(442,349,a);
outtextxy(222,349,a);
}

}

for(int w1=60;w1<70;w1=w1+14)
{
delay(200);
cleardevice();
//left line
line(1,180,270,180);
line(1,300,270,300);


//left zebra
line(1,242,20,242);
line(40,242,60,242);
line(80,242,100,242);
line(120,242,140,242);
line(160,242,180,242);
line(200,242,220,242);
line(240,242,260,242);


//right line
line(400,180,638,180);
line(400,300,638,300);


//right zebra
line(600,242,620,242);
line(560,242,580,242);
line(520,242,540,242);
line(480,242,500,242);
line(440,242,460,242);
line(404,242,420,242);



//top line
line(270,1,270,180);
line(400,1,400,180);


//top zebra
line(336,1,336,20);
line(336,40,336,60);
line(336,80,336,100);
line(336,120,336,140);
line(336,160,336,180);



//bottom line
line(270,300,270,500);
line(400,300,400,500);


//bottom zebra
line(336,300,336,320);
line(336,340,336,360);
line(336,380,336,400);
line(336,420,336,440);
line(336,460,336,480);


//car constant 4   moved
int wk=230;
setfillstyle(1,DARKGRAY);
rectangle(290+w1,10+wk,320+w1,60+wk);
floodfill(291+w1,11+wk,WHITE);
setfillstyle(1,BLUE);
rectangle(290+w1,50+wk,320+w1,60+wk);
floodfill(291+w1,51+wk,WHITE);
setfillstyle(1,DARKGRAY);
rectangle(290+w1,30+wk,320+w1,50+wk);
floodfill(291+w1,31+wk,WHITE);
setfillstyle(1,BLUE);
rectangle(290+w1,20+wk,320+w1,30+wk);
floodfill(291+w1,21+wk,WHITE);
setfillstyle(1,DARKGRAY);
rectangle(290+w1,60+wk,320+w1,70+wk);
floodfill(291+w1,61+wk,WHITE);

//car constant last
int k12=90;
setfillstyle(1,BLUE);
rectangle(290,410-k12,320,460-k12);
floodfill(291,411-k12,WHITE);
setfillstyle(1,BLACK);
rectangle(290,450-k12,320,460-k12);
floodfill(291,451-k12,WHITE);
setfillstyle(1,BLUE);
rectangle(290,430-k12,320,450-k12);
floodfill(291,431-k12,WHITE);
setfillstyle(1,BLACK);
rectangle(290,420-k12,320,430-k12);
floodfill(291,421-k12,WHITE);
setfillstyle(1,BLUE);
rectangle(290,460-k12,320,470-k12);
floodfill(291,461-k12,WHITE);


//top left signal
rectangle(250,10,200,100);
rectangle(216,140,234,100);
rectangle(200,140,250,154);
rectangle(190,154,260,174);


setfillstyle(SOLID_FILL,RED);
circle(225,24,10);
floodfill(225,24,WHITE);


//setfillstyle(SOLID_FILL,6);
circle(225,54,10);
//floodfill(225,54,WHITE);


//setfillstyle(SOLID_FILL,GREEN);
circle(225,84,10);
//floodfill(225,84,WHITE);




//top right signal
rectangle(420,10,470,100);
rectangle(436,140,454,100);
rectangle(420,140,470,154);
rectangle(410,154,480,174);


setfillstyle(SOLID_FILL,RED);
circle(445,24,10);
floodfill(445,24,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,54,10);
//floodfill(445,54,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,84,10);
//floodfill(445,84,WHITE);


//bottom right signal
rectangle(420,310,470,400);
rectangle(436,400,454,440);
rectangle(420,440,470,454);
rectangle(410,454,480,474);


//setfillstyle(SOLID_FILL,RED);
circle(445,324,10);
//floodfill(445,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,354,10);
//floodfill(445,354,WHITE);

setfillstyle(SOLID_FILL,GREEN);
circle(445,384,10);
floodfill(445,384,WHITE);


//bottom left signal
rectangle(250,310,200,400);
rectangle(216,400,234,440);
rectangle(200,440,250,454);
rectangle(190,454,260,474);


setfillstyle(SOLID_FILL,RED);
circle(225,324,10);
floodfill(225,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(225,354,10);
//floodfill(225,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(225,384,10);
//floodfill(225,384,WHITE);



n=5;
//if(n>=0)
{
sprintf(a,"%d",n);
outtextxy(222,19,a);
outtextxy(442,19,a);
outtextxy(442,379,a);
outtextxy(222,319,a);
}
}




for(int w2=230;w2<800;w2=w2+40)
{
int wk2=60;
delay(400);
cleardevice();
//left line
line(1,180,270,180);
line(1,300,270,300);


//left zebra
line(1,242,20,242);
line(40,242,60,242);
line(80,242,100,242);
line(120,242,140,242);
line(160,242,180,242);
line(200,242,220,242);
line(240,242,260,242);


//right line
line(400,180,638,180);
line(400,300,638,300);


//right zebra
line(600,242,620,242);
line(560,242,580,242);
line(520,242,540,242);
line(480,242,500,242);
line(440,242,460,242);
line(404,242,420,242);



//top line
line(270,1,270,180);
line(400,1,400,180);


//top zebra
line(336,1,336,20);
line(336,40,336,60);
line(336,80,336,100);
line(336,120,336,140);
line(336,160,336,180);



//bottom line
line(270,300,270,500);
line(400,300,400,500);


//bottom zebra
line(336,300,336,320);
line(336,340,336,360);
line(336,380,336,400);
line(336,420,336,440);
line(336,460,336,480);


//car constant 4   moved
setfillstyle(1,DARKGRAY);
rectangle(290+wk2,10+w2,320+wk2,60+w2);
floodfill(291+wk2,11+w2,WHITE);
setfillstyle(1,BLUE);
rectangle(290+wk2,50+w2,320+wk2,60+w2);
floodfill(291+wk2,51+w2,WHITE);
setfillstyle(1,DARKGRAY);
rectangle(290+wk2,30+w2,320+wk2,50+w2);
floodfill(291+wk2,31+w2,WHITE);
setfillstyle(1,BLUE);
rectangle(290+wk2,20+w2,320+wk2,30+w2);
floodfill(291+wk2,21+w2,WHITE);
setfillstyle(1,DARKGRAY);
rectangle(290+wk2,60+w2,320+wk2,70+w2);
floodfill(291+wk2,61+w2,WHITE);

//car constant last
int k12=90;
setfillstyle(1,BLUE);
rectangle(290,410-k12,320,460-k12);
floodfill(291,411-k12,WHITE);
setfillstyle(1,BLACK);
rectangle(290,450-k12,320,460-k12);
floodfill(291,451-k12,WHITE);
setfillstyle(1,BLUE);
rectangle(290,430-k12,320,450-k12);
floodfill(291,431-k12,WHITE);
setfillstyle(1,BLACK);
rectangle(290,420-k12,320,430-k12);
floodfill(291,421-k12,WHITE);
setfillstyle(1,BLUE);
rectangle(290,460-k12,320,470-k12);
floodfill(291,461-k12,WHITE);


//top left signal
rectangle(250,10,200,100);
rectangle(216,140,234,100);
rectangle(200,140,250,154);
rectangle(190,154,260,174);


setfillstyle(SOLID_FILL,RED);
circle(225,24,10);
floodfill(225,24,WHITE);


//setfillstyle(SOLID_FILL,6);
circle(225,54,10);
//floodfill(225,54,WHITE);


//setfillstyle(SOLID_FILL,GREEN);
circle(225,84,10);
//floodfill(225,84,WHITE);




//top right signal
rectangle(420,10,470,100);
rectangle(436,140,454,100);
rectangle(420,140,470,154);
rectangle(410,154,480,174);


setfillstyle(SOLID_FILL,RED);
circle(445,24,10);
floodfill(445,24,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,54,10);
//floodfill(445,54,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,84,10);
//floodfill(445,84,WHITE);


//bottom right signal
rectangle(420,310,470,400);
rectangle(436,400,454,440);
rectangle(420,440,470,454);
rectangle(410,454,480,474);


//setfillstyle(SOLID_FILL,RED);
circle(445,324,10);
//floodfill(445,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,354,10);
//floodfill(445,354,WHITE);

setfillstyle(SOLID_FILL,GREEN);
circle(445,384,10);
floodfill(445,384,WHITE);


//bottom left signal
rectangle(250,310,200,400);
rectangle(216,400,234,440);
rectangle(200,440,250,454);
rectangle(190,454,260,474);


setfillstyle(SOLID_FILL,RED);
circle(225,324,10);
floodfill(225,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(225,354,10);
//floodfill(225,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(225,384,10);
//floodfill(225,384,WHITE);



n=6-w2/150;
//if(n>=0)
{
sprintf(a,"%d",n);
outtextxy(222,19,a);
outtextxy(442,19,a);
outtextxy(442,379,a);
outtextxy(222,319,a);
}
}





for(int x=-100;x<100;x=x+38)
{
delay(400);
cleardevice();
//left line
line(1,180,270,180);
line(1,300,270,300);


//left zebra
line(1,242,20,242);
line(40,242,60,242);
line(80,242,100,242);
line(120,242,140,242);
line(160,242,180,242);
line(200,242,220,242);
line(240,242,260,242);


//right line
line(400,180,638,180);
line(400,300,638,300);


//right zebra
line(600,242,620,242);
line(560,242,580,242);
line(520,242,540,242);
line(480,242,500,242);
line(440,242,460,242);
line(404,242,420,242);



//top line
line(270,1,270,180);
line(400,1,400,180);


//top zebra
line(336,1,336,20);
line(336,40,336,60);
line(336,80,336,100);
line(336,120,336,140);
line(336,160,336,180);



//bottom line
line(270,300,270,500);
line(400,300,400,500);


//bottom zebra
line(336,300,336,320);
line(336,340,336,360);
line(336,380,336,400);
line(336,420,336,440);
line(336,460,336,480);


//top left signal
rectangle(250,10,200,100);
rectangle(216,140,234,100);
rectangle(200,140,250,154);
rectangle(190,154,260,174);



int k12=90;
setfillstyle(1,BLUE);
rectangle(290,410-k12,320,460-k12);
floodfill(291,411-k12,WHITE);
setfillstyle(1,BLACK);
rectangle(290,450-k12,320,460-k12);
floodfill(291,451-k12,WHITE);
setfillstyle(1,BLUE);
rectangle(290,430-k12,320,450-k12);
floodfill(291,431-k12,WHITE);
setfillstyle(1,BLACK);
rectangle(290,420-k12,320,430-k12);
floodfill(291,421-k12,WHITE);
setfillstyle(1,BLUE);
rectangle(290,460-k12,320,470-k12);
floodfill(291,461-k12,WHITE);


//setfillstyle(SOLID_FILL,RED);
circle(225,24,10);
//floodfill(225,24,WHITE);


setfillstyle(SOLID_FILL,6);
circle(225,54,10);
floodfill(225,54,WHITE);


//setfillstyle(SOLID_FILL,GREEN);
circle(225,84,10);
//floodfill(225,84,WHITE);


//top right signal
rectangle(420,10,470,100);
rectangle(436,140,454,100);
rectangle(420,140,470,154);
rectangle(410,154,480,174);


setfillstyle(SOLID_FILL,RED);
circle(445,24,10);
floodfill(445,24,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,54,10);
//floodfill(445,54,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,84,10);
//floodfill(445,84,WHITE);


//bottom right signal
rectangle(420,310,470,400);
rectangle(436,400,454,440);
rectangle(420,440,470,454);
rectangle(410,454,480,474);


//setfillstyle(SOLID_FILL,RED);
circle(445,324,10);
//floodfill(445,324,WHITE);

setfillstyle(SOLID_FILL,6);
circle(445,354,10);
floodfill(445,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,384,10);
//floodfill(445,384,WHITE);


//bottom left signal
rectangle(250,310,200,400);
rectangle(216,400,234,440);
rectangle(200,440,250,454);
rectangle(190,454,260,474);


setfillstyle(SOLID_FILL,RED);
circle(225,324,10);
floodfill(225,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(225,354,10);
//floodfill(225,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(225,384,10);
//floodfill(225,384,WHITE);



n=2-x/60;
//if(n>=0)
{
sprintf(a,"%d",n);
outtextxy(222,49,a);
outtextxy(442,19,a);
outtextxy(442,349,a);
outtextxy(222,319,a);
}
}



for(int y=100;y<800;y=y+60)
{
delay(400);
cleardevice();
//left line
line(1,180,270,180);
line(1,300,270,300);


//left zebra
line(1,242,20,242);
line(40,242,60,242);
line(80,242,100,242);
line(120,242,140,242);
line(160,242,180,242);
line(200,242,220,242);
line(240,242,260,242);


//right line
line(400,180,638,180);
line(400,300,638,300);


//right zebra
line(600,242,620,242);
line(560,242,580,242);
line(520,242,540,242);
line(480,242,500,242);
line(440,242,460,242);
line(404,242,420,242);



//top line
line(270,1,270,180);
line(400,1,400,180);


//top zebra
line(336,1,336,20);
line(336,40,336,60);
line(336,80,336,100);
line(336,120,336,140);
line(336,160,336,180);



//bottom line
line(270,300,270,500);
line(400,300,400,500);


//bottom zebra
line(336,300,336,320);
line(336,340,336,360);
line(336,380,336,400);
line(336,420,336,440);
line(336,460,336,480);




setfillstyle(1,BLUE);
rectangle(290,410-y,320,460-y);
floodfill(291,411-y,WHITE);
setfillstyle(1,BLACK);
rectangle(290,450-y,320,460-y);
floodfill(291,451-y,WHITE);
setfillstyle(1,BLUE);
rectangle(290,430-y,320,450-y);
floodfill(291,431-y,WHITE);
setfillstyle(1,BLACK);
rectangle(290,420-y,320,430-y);
floodfill(291,421-y,WHITE);
setfillstyle(1,BLUE);
rectangle(290,460-y,320,470-y);
floodfill(291,461-y,WHITE);


//top left signal
rectangle(250,10,200,100);
rectangle(216,140,234,100);
rectangle(200,140,250,154);
rectangle(190,154,260,174);


//setfillstyle(SOLID_FILL,RED);
circle(225,24,10);
//floodfill(225,24,WHITE);


//setfillstyle(SOLID_FILL,6);
circle(225,54,10);
//floodfill(225,54,WHITE);


setfillstyle(SOLID_FILL,GREEN);
circle(225,84,10);
floodfill(225,84,WHITE);


//top right signal
rectangle(420,10,470,100);
rectangle(436,140,454,100);
rectangle(420,140,470,154);
rectangle(410,154,480,174);


setfillstyle(SOLID_FILL,RED);
circle(445,24,10);
floodfill(445,24,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,54,10);
//floodfill(445,54,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,84,10);
//floodfill(445,84,WHITE);


//bottom right signal
rectangle(420,310,470,400);
rectangle(436,400,454,440);
rectangle(420,440,470,454);
rectangle(410,454,480,474);


setfillstyle(SOLID_FILL,RED);
circle(445,324,10);
floodfill(445,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(445,354,10);
//floodfill(445,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(445,384,10);
//floodfill(445,384,WHITE);


//bottom left signal
rectangle(250,310,200,400);
rectangle(216,400,234,440);
rectangle(200,440,250,454);
rectangle(190,454,260,474);


setfillstyle(SOLID_FILL,RED);
circle(225,324,10);
floodfill(225,324,WHITE);

//setfillstyle(SOLID_FILL,6);
circle(225,354,10);
//floodfill(225,354,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(225,384,10);
//floodfill(225,384,WHITE);


n=5-y/150;
//if(n>=0)
{
sprintf(a,"%d",n);
outtextxy(222,79,a);
outtextxy(442,19,a);
outtextxy(442,319,a);
outtextxy(222,319,a);
}
}

exit();
}
