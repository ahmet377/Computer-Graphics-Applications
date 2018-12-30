/**
 *	Title 		:	TicTacToe Implementation in C Graphics
 *	Author		:	Shadab Shaikh
 *	Date		:	29-12-2018
 *	Version		:	1.0
 *	Availability:	https://github.com/shadabsk
 *
 */

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
void main()
{
	textbackground(3);				//coloring text with CYAN color
	clrscr();
	textcolor(RED);                 			//coloring text with red color
	cprintf("\n\n\n\n\n\n\n\n\n\n  ***[It is Necessary to read this instruction or else u will be misguided]***");        						//printing statement in red color
	textcolor(BLACK);               			//coloringtext with black
	cprintf("\n                         ***[ Press Anykey to continue ]***");        
						//printing statement in BLACK color
	getch();                        //Holding output as well as waiting for next character so that it can be execute
	textbackground(0);              			//coloring background with black color
	clrscr();
	textcolor(CYAN);                			//coloring text with CYAN color
	cprintf("\n\n\n\n               ***[The X is made with the help of line function]***"); 
						//printing statemnt with CYAN color
	textcolor(MAGENTA);             			//coloring text with MAGENTA color
	cprintf("\n\n                           ***[The 0 is made with the help of circle function]***"); 
						//printing statement with MAGENTA color
	textcolor(LIGHTBLUE);           			//coloring text with lightblue color
	cprintf("\n\n                    ***[The program is formatted with the help of gotoxy function]***"); 
						//printing statement with lightblue color
	textcolor(LIGHTGREEN);          		//coloring text with lightgreen color
	cprintf("\n\n       [ The program is working as a loop with help of some labels and goto Statement ]"); 						//coloring statement with light green color
	textcolor(RED);                		 	//coloring text with red color
	cprintf("\n\n                       ***[ Press Anykey to continue ]***"); 
						//printing statement with red color
	getch();                        //Holding output as well as waiting for next character so that it can be execute
	textbackground(MAGENTA);        		//coloring background with MAGENTA color
	clrscr();
	textcolor(LIGHTGREEN);          		//coloring text with lightgreen color
	cprintf("\n\n\n\n\n\n\n  ***[Check arrows to find out where the cursor is pointing at that moment]***"); 						//printing statement with lightgreen color
	textcolor(YELLOW);              			//coloring text with yellow color
	cprintf("\n\n  [  Give input as those numbers which have been asked on the screen Accordingly ]"); 
						//printing statement with yellow color
	textcolor(WHITE);               			//coloring text with white color
	cprintf("\n\n                  ***[Press AnyKey to start Playing X AND 0]***"); 
						//printing statement with white color
	getch();                        //Holding output as well as waiting for next character so that it can be execute
	clrscr();
int gd=DETECT,gm,n,o,j,y,l,i,z;      			//declaring variales
initgraph(&gd,&gm,"..\\bgi");       			//initializing graphic mode and driver
xyz:                                				//label if program again started
do                                  				//Starting of do-while loop
{
	setfillstyle(9,CYAN);       			//giving the values for background color
	floodfill(1,1,WHITE);

	gotoxy(33,11.5);
	printf("7");                				//printing 7 with x and y position
	gotoxy(43,11.5);
	printf("8");                				//printing 8 with x and y position
	gotoxy(52,11.5);
	printf("9");                				//printing 9 with x and y position
	gotoxy(52,17.5);
	printf("6");                				//printing 6 with x and y position
	gotoxy(43,17.5);
	printf("5");                				//printing 5 with x and y position
	gotoxy(33,17.5);
	printf("4");                				//printing 4 with x and y position
	gotoxy(33,23.5);
	printf("1");                				//printing 1 with x and y position
	gotoxy(43,23.5);
	printf("2");                				//printing 2 with x and y position
	gotoxy(52,23.5);
	printf("3");                				//printing 7 with x and y position
	setcolor(WHITE);            			//giving the border color as white
	setfillstyle(1,6);          			
					//setting the filling style with solid_fill type and orange color
	rectangle(220,120,450,400); 		//making a rectangle object where x and 0 will be plotted
	floodfill(221,121,WHITE);   			//filling color with floodfill
	rectangle(220,220,450,400); 		//making a rectangle object where x and 0 will be plotted
	rectangle(220,320,450,400); 		//making a rectangle object where x and 0 will be plotted
	rectangle(374,120,450,400); 		//making a rectangle object where x and 0 will be plotted
	rectangle(300,120,450,400); 		//making a rectangle object where x and 0 will be plotted



draw:	gotoxy(2,9);               	//using label when 13 is pressed to work as a loop and continue plotting x
	setfillstyle(SOLID_FILL,BLACK); 		//setting filling type with solid_fill and black color
	rectangle(1,120,190,170);   		//making a rectangle object where value for x will be given
	floodfill(2,121,WHITE);     			//filling color inside the rectangle
	printf("Enter the number for X\n");
	gotoxy(12,10);
	scanf("%d",&n);              			//accepting value for x
if(n==1||n==2||n==3||n==4||n==5||n==6||n==7||n==8||n==9)           //if condition is true then the right arrow will be displayed
{
	setcolor(WHITE);
	gotoxy(2,20);
	setfillstyle(8,RED);
	rectangle(2,300,170,376);
	printf("The cursor is in");
	gotoxy(2,21);
	printf("         0 point");
	gotoxy(2,23);
	printf("Look at right arrow");
	floodfill(3,301,WHITE);	//making a rectngular box for cursor status where it is present at that time
	setfillstyle(8,MAGENTA);
	rectangle(455,300,636,376);                		//input validation at right
	gotoxy(64,20);
	printf("Wow! Great");
	gotoxy(64,21);
	printf("Really You");
	gotoxy(64,22);
	printf("Are a ");
	gotoxy(64,23);
	printf("Smartplayer");
	floodfill(456,301,WHITE);
}
if(n==1)
	{
	line(220,320,300,400);
	line(300,320,220,400);        			//plotting x at number 1
	}
else if(n==2)
	{
	line(374,320,300,400);        			//plotting x at number 2
	line(300,320,374,400);
	}
else if(n==3)
	{
	line(450,320,374,400);
	line(374,320,450,400);        			//plotting x at number 3
	}
else if(n==6)
	{
	line(450,320,375,220);
	line(374,320,450,220);        			//plotting x at number 6
	}
else if(n==5)
	{
	line(300,320,375,220);
	line(374,320,300,220);        			//plotting x at number 5
	}
else if(n==4)
	{
	line(220,320,300,220);
	line(300,320,220,220);        			//plotting x at number 4
	}
else if(n==7)
	{
	line(220,220,300,120);
	line(300,220,220,120);        			//plotting x at number 7
	}
else if(n==8)
	{
	line(374,220,300,120);
	line(300,220,374,120);        			//plotting x at number 8
	}
else if(n==9)
	{
	line(450,220,374,120);
	line(374,220,450,120);        			//plotting x at number 9
	}
if(n>=1&&n<=2)
	{
	line(474,180,474,200);
	line(474,180,464,190);
	line(474,180,484,190);        			//plotting arrow if condition satisfies
	}
else if(n>=3&&n<=4)
	{
	line(504,180,504,200);
	line(504,180,494,190);
	line(504,180,514,190);        			//plotting arrow if condition satisfies
	}
else if(n>=5&&n<=6)
	{
	line(534,180,534,200);
	line(534,180,524,190);
	line(534,180,544,190);        			//plotting arrow if condition satisfies
	}
else if(n>=7&&n<=8)
	{
	line(564,180,564,200);
	line(564,180,554,190);
	line(564,180,574,190);        			//plotting arrow if condition satisfies
	}
else if(n==9)
	{
	line(594,180,594,200);
	line(594,180,584,190);
	line(594,180,604,190);        			//plotting arrow if condition satisfies
	}
if(n>=10)
	{
	setfillstyle(9,RED);
	rectangle(455,300,636,376);
	gotoxy(64,20);
	printf("Huh! Wrong");
	gotoxy(64,21);
	printf("chocie  U");
	gotoxy(64,22);
	printf("Duffer");
	gotoxy(64,23);
	printf("Try again");
	floodfill(456,301,WHITE);
	goto draw;   										//at selection area if all the condition is false then these will be displayed program will jump to la label where again the value for selection will be accepted
	}

daw:	setfillstyle(1,BLACK);        			//setting fillinf style as solid_fill type and black color
	gotoxy(58.5,9);
	rectangle(455,120,638,170);    			//making a rectangle for insering value for plotting 0
	floodfill(456,121,WHITE);      			//filling color inside rectangle
	printf("Enter the number for 0");
	gotoxy(70,10);
	scanf("%d",&o);                			//accepting value for 0

if(o==1||o==2||o==3||o==4||o==5||o==6||o==7||o==8||o==9)
	{
	gotoxy(2,20);
	setfillstyle(8,MAGENTA);
	rectangle(2,300,170,376);
	printf("The cursor is in");
	gotoxy(2,21);
	printf(" Selection point");
	gotoxy(2,23);
	printf("Look at top arrow  ");
	floodfill(3,301,WHITE);
	setfillstyle(8,BROWN);
	gotoxy(64,20);
	printf("Wow! Great");
	gotoxy(64,21);
	printf("Really You");
	gotoxy(64,22);
	printf("Are a ");
	gotoxy(64,23);
	printf("Smartplayer");
	floodfill(456,301,WHITE);
	}                               		//if condition satisfies at bottom in status box these lines will be displayed
if(o>=1&&o<=9)                           			//for making the whole selection area rough
	{
	setcolor(WHITE);
	setfillstyle(8,GREEN);
	rectangle(20,20,600,112);
	gotoxy(20,4);
	printf("Press 12 if 0 has finished making pattern");
	gotoxy(20,3);
	printf("Press 14 if X has finished making pattern");
	gotoxy(20,5);
	printf("Press 21 if TIE and to restart the game");
	gotoxy(18,6);
	printf("Press 13 to continue Plotting and 15 to exit");
	floodfill(21,21,WHITE);
	}
if(o==9)
	{
	circle(413,170,30);              			//plotting 0 in 9 position
	}
else if(o==8)
	{
	circle(337,170,30);               			//plotting 0 in 8 position
	}
else if(o==7)
	{
	circle(260,170,30);               			//plotting 0 in 7 position
	}
else if(o==6)
	{
	circle(413,270,30);               			//plotting 0 in 6 position
	}
else if(o==5)
	{
	circle(337,270,30);               			//plotting 0 in 5 position
	}
else if(o==4)
	{
	circle(260,270,30);               			//plotting 0 in 4 position
	}
else if(o==3)
	{
	circle(413,360,30);               			//plotting 0 in 3 position
	}
else if(o==2)
	{
	circle(337,360,30);               			//plotting 0 in 2 position
	}
else if(o==1)
	{
	circle(260,360,30);               			//plotting 0 in 1 position
	}
if(o>=1&&o<=2)
	{
	line(50,38,70,38);
	line(60,30,70,38);
	line(60,50,70,38);
	}                                 			//Plotting arrow if confition satisfies
else if(o>=3&&o<=4)
	{
	line(50,68,70,68);
	line(60,60,70,68);
	line(60,80,70,68);                			//Plotting arrow if confition satisfies
	}
else if(o>=5&&o<=6)
	{
	line(50,98,70,98);
	line(60,90,70,98);
	line(60,110,70,98);               			//Plotting arrow if confition satisfies
	}
else if(o>=7&&o<=8)
	{
	line(500,38,520,38);
	line(500,38,510,30);
	line(500,38,510,48);              			//Plotting arrow if confition satisfies
	}
else if(o==9)
	{
	line(500,68,520,68);
	line(500,68,510,60);
	line(500,68,510,78);              			//Plotting arrow if confition satisfies
	}
if(o>=10)
	{
	setfillstyle(9,BROWN);
	rectangle(455,300,636,376);
	gotoxy(64,20);
	printf("Huh! Wrong");
	gotoxy(64,21);
	printf("chocie  U");
	gotoxy(64,22);
	printf("Duffer");
	gotoxy(64,23);
	printf("Try again");
	floodfill(456,301,WHITE);
	goto daw;
	}
x:	setcolor(WHITE);
	setfillstyle(8,BLUE);
	rectangle(20,20,600,112);         			//making a rectangle for selection area
	gotoxy(20,4);
	printf("Press 12 if 0 has finished making pattern");
	gotoxy(20,3);
	printf("Press 14 if X has finished making pattern");
	gotoxy(20,5);
	printf("Press 21 if TIE and to restart the game");
	gotoxy(18,6);
	printf("Press 13 to continue Plotting and 15 to exit");
la: 	gotoxy(43,7);
	floodfill(21,21,WHITE);
	scanf("%d",&j);                               		//accepting the value of selection
if(j==13&&o>=1&&o<=2)
	{
	line(174,180,174,200);
	line(174,180,164,190);
	line(174,180,184,190);                      		//plotting arrow if condition satisfies
	}
else if(j==13&&o>=3&&o<=4)
	{
	line(144,180,144,200);
	line(144,180,134,190);
	line(144,180,154,190);                      		//plotting arrow if condition satisfies
	}
else if(j==13&&o>=5&&o<=6)
	{
	line(114,180,114,200);
	line(114,180,104,190);
	line(114,180,124,190);                      		//plotting arrow if condition satisfies
	}
else if(j==13&&o>=7&&o<=8)
	{
	line(84,180,84,200);
	line(84,180,74,190);
	line(84,180,94,190);                        		//plotting arrow if condition satisfies
	}
else if(j==13&&o==9)
	{
	line(54,180,54,200);
	line(54,180,44,190);
	line(54,180,64,190);                        		//plotting arrow if condition satisfies
	}
if(j==13)
	{
	setfillstyle(8,BROWN);
	gotoxy(2,20);
	printf("The cursor is in");
	gotoxy(2,21);
	printf("         X point");
	gotoxy(2,23);
	printf("Look at left arrow ");             		//cursor status box at the bottom
	floodfill(3,301,WHITE);
la5:	setfillstyle(8,BLUE);
	rectangle(455,300,636,376);                		//input validation at right
	gotoxy(64,20);
	printf("Wow! Great");
	gotoxy(64,21);
	printf("Really You");
	gotoxy(64,22);
	printf("Are a ");
	gotoxy(64,23);
	printf("Smartplayer");
	floodfill(456,301,WHITE);
	}
if(j==12)
	{
	gotoxy(68,17);
	setfillstyle(8,BROWN);
	rectangle(500,250,600,280);
	printf("0 Won");
	floodfill(501,251,WHITE);
	getch();                              		//if at selection area the value is 12 then this will be displayed
	goto bb;                              	//jumping to bb label where program exit and restart option will be present
	}
if(j==14)
	{
	gotoxy(10,17);
	setfillstyle(8,BROWN);
	rectangle(50,250,150,280);
	printf("X Won");
	floodfill(51,251,WHITE);            //if at selection area the value is given as 14 then these will be displayed
	getch();
bb:
	cleardevice();                     			//clearing all the objects on the screen
la4:	setfillstyle(9,YELLOW);
	rectangle(7,7,7,7);
	floodfill(9,9,WHITE);
	gotoxy(25,15);
	setfillstyle(1,BLUE);
	rectangle(150,200,500,300);
	printf("Enter 13 to continue or 15 to exit");   							//giving condition as to the user wants to continue or to exit
	gotoxy(40,16);
	floodfill(151,201,WHITE);
	scanf("%d",&l);
if(l==13)
	{
	cleardevice();
	goto xyz;                            			//if condition satisfies the program will be restarted
	}
else if(l==15)
	goto bye;                             								//if condition satisfies the program will jump to bye lable where program will be terminated
else if(l>0)
	setfillstyle(8,BLUE);
	rectangle(455,300,636,376);
	gotoxy(64,20);
	printf("Huh! Wrong");
	gotoxy(64,21);
	printf("Chocie  U");
	gotoxy(64,22);
	printf("Duffer");
	gotoxy(64,23);
	printf("Try again");
	floodfill(456,301,WHITE);
	goto la4;                               		//if both the condition is not satisfied these line will be displayed
	}
if(j==13)
	{
	goto draw;                             									//if at selection area the value is given as 13 the cursor will move to x
	}
else if(j==15)
	{
bye:	cleardevice();
	setfillstyle(SOLID_FILL,CYAN);
	rectangle(2,2,2,2);
	floodfill(6,6,WHITE);
	gotoxy(30,15);
	setfillstyle(8,BROWN);
	rectangle(150,200,500,300);
	printf("Thanks for playing");
	floodfill(151,201,WHITE);
	getch();
	exit(0);               				//a function for exiting
	}                      			//if condition satisfies the program will be terminated or closed
if(j==21)
	{
	cleardevice();
la2:	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(8,8,8,8);
	floodfill(5,5,WHITE);
	gotoxy(30,15);
	setfillstyle(8,MAGENTA);
	rectangle(120,200,500,300);
	printf("Damn it was tie");
	gotoxy(20,16);
	printf("press 13 to continue or 15 to exit");
	gotoxy(40,17);
	floodfill(121,201,WHITE);
	scanf("%d",&z);                			//these are for the tie condition
if(z==13)
	{
	cleardevice();
	goto xyz;                      			//if 13 is provided the program will restart
	}
else if(z==15)
	{
	goto bye;                      //if 15 is provided program will jump to bye label where the program closing operation is written
	}
else  if(z>0)
	{
	setfillstyle(8,BLUE);
	rectangle(455,300,636,376);
	gotoxy(64,20);
	printf("Huh! Wrong");
	gotoxy(64,21);
	printf("chocie U");
	gotoxy(64,22);
	printf("Duffer");
	gotoxy(64,23);
	printf("Try again");
	floodfill(456,301,WHITE);
	goto la2;                     		//if both the condition is false then these lines will be displayed
	}
	}
else
	{
	setfillstyle(9,BLUE);
	rectangle(455,300,636,376);
	gotoxy(64,20);
	printf("Huh! Wrong");
	gotoxy(64,21);
	printf("chocie  U");
	gotoxy(64,22);
	printf("Duffer");
	gotoxy(64,23);
	printf("Try again");
	floodfill(456,301,WHITE);
	goto la;                          									//at selection area if all the condition is false then these will be displayed program will jump to la label where again the value for selection will be accepted
	}
}while(o!=10);                            			//Ending of do while loop
getch();
}
