#include<iostream>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<windows.h>

#define ScreenWidth getmaxx()
#define ScreenHeight getmaxy()
#define GroundY ScreenHeight*0.62

using namespace std;
void rain(int);
main()
{
     int i,gd=DETECT,gm,x=0;
     initgraph(&gd,&gm," ");
                    for(i=0;i<600;i++)
                     {
setcolor(WHITE);
rain(x);
                       //TEXT ON OUTPUT SCREEN
                       setcolor(CYAN);
                       outtextxy(240,390," MOVING VEHCILE  ");

                      //COLOUR FOR VEHCILE PARTS
                       setcolor(GREEN);

                       //VEHCILE_HEADLIGHT
                       arc(225+i,249,90,270,10);

                       //VEHCILE_BACKLIGHTS
                       line(20+i,243,33+i,243);
                       line(33+i,243,33+i,270);
                       line(20+i,252,33+i,252);
                       line(20+i,261,33+i,261);

                       //BODY OF THE VEHCILE
                       line(20+i,270,50+i,270);
                       line(20+i,270,20+i,190);
                       line(20+i,190,160+i,190);
                       line(200+i,270,225+i,270);
                       line(225+i,270,225+i,235);
                       line(225+i,235,160+i,190);
                       line(90+i,270,160+i,270);

                       //VEHCILE WINDOWS
                       line(25+i,195,25+i,230);
                       line(25+i,195,110+i,195);
                       line(110+i,195,110+i,230);
                       line(25+i,230,110+i,230);
                       line(122+i,195,122+i,230);
                       line(122+i,195,153+i,195);
                       line(152+i,195,207+i,230);
                       line(122+i,230,207+i,230);

                      //SPACE FOR LEFT TYRE
                      arc(70+i,270,0,180,20);

                      //LEFT TYRE OF VEHCILE
                       circle(70+i,273,18);
                       circle(70+i,273,13);

                       //SPACE FOR RIGHT TYRE
                        arc(180+i,270,0,180,20);

                        // RIGHT TYRE OF VEHCILE
                        circle(180+i,273,18);
                        circle(180+i,273,13);
                       delay(10);
                      cleardevice();

                      //COLOUR FOR ROAD
                      setcolor(BROWN);
                      line(0,292,900,292);

                     x=(x+4)%ScreenWidth;
                    }
                      getch();
                     closegraph();
}
void rain(int x)
{
int i,rx,ry;
for(i=0;i<100;i++){
rx=rand() % ScreenWidth;
ry=rand() % ScreenHeight;
if(ry<GroundY-4)
{
if(ry<GroundY-120 || (ry>GroundY-120 && (rx<x-20 || rx>x+60)))
   line(rx,ry,rx+0.5,ry+4);
}}}
