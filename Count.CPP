/**
 *	Title 		:	CountDown Timer Using C Graphics
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
void main()
{
int gd=DETECT,gm,i,n;
char a[5];
clrscr();
textcolor(RED);			//giving initial instructions
cprintf(" \n                 -------=======[Project On Countdown Timer]=======-------\n");
printf("\n  Press Any Key One By One\n");
getch();
cprintf("\n-----=====[Hardwork Behind this Project and working of this project]=====-----\n");
getch();
textcolor(BROWN);
cprintf("    \n-----=====[Shapes  Made with Line,Rectangle,circle function()]=====-----\n");
textcolor(WHITE);
cprintf("\n      -=[Colors filled in different shapes is with the help of floodfill function]=-\n");
textcolor(LIGHTRED);
cprintf("\n   ------========[CountdownTimer Works With the help of FOR LOOP]=======--------   \n");
printf("\nEnter the value of Count down Timer In Numbers Otherwise Counter Will not work\n");
scanf("%d",&n);			//accepting number
initgraph(&gd,&gm,"..\\bgi");
setbkcolor(GREEN);
settextjustify(CENTER_TEXT,CENTER_TEXT);
settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
setcolor(RED);
for(i=n;i>=0;i--)		//providing the number to loop
{
sprintf(a,"%d",i);		//a is the pointer, i is the looping value
setfillstyle(SOLID_FILL,YELLOW);
circle(320,240,90);
floodfill(320,240,RED);
setcolor(RED);
setfillstyle(SOLID_FILL,BLUE);
circle(320,240,70);
floodfill(320,240,RED);
setcolor(RED);
setfillstyle(SOLID_FILL,BLUE);
circle(225,150,40);
floodfill(225,150,RED);
setcolor(RED);
setfillstyle(SOLID_FILL,YELLOW);
circle(225,150,30);
floodfill(225,150,RED);
setcolor(RED);
setfillstyle(SOLID_FILL,BLUE);
circle(415,150,40);
floodfill(415,150,RED);
setcolor(RED);
setfillstyle(SOLID_FILL,YELLOW);
circle(415,150,30);
floodfill(415,150,RED);
setcolor(RED);
setfillstyle(SOLID_FILL,LIGHTBLUE);
rectangle(100,100,520,340);
floodfill(101,301,RED);
setcolor(RED);
setfillstyle(SOLID_FILL,LIGHTRED);
rectangle(90,90,530,350);
floodfill(91,91,RED);
setcolor(RED);
setfillstyle(SOLID_FILL,LIGHTGREEN);
rectangle(460,460,190,450);
floodfill(459,459,RED);
line(320,450,320,350);
line(325,450,325,350);
outtextxy(getmaxx()/2,getmaxy()/2,a);
delay(1000);

if(i==0)
break;

cleardevice();

}
cleardevice();
if(n>=0)
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t     Thank You\n\n                               Press any key to exit");
else
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t   Seems that u cant undertsand the instruction \n\n\t\t      Press any key to exit and start again");

getch();
}
