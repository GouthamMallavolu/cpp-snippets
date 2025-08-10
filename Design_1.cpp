#include<iostream>
#include<graphics.h>
#include<dos.h>
using namespace std;
int main()
{
int i;
int gd=DETECT,gm;
initgraph(&gd,&gm," ");
for(i=0;i<700;i++){
delay(5);
setcolor(rand());
arc(270,245,0,90,20);
circle(270,246+i,40+i);
setcolor(rand());
arc(270,245,180,270,20);
circle(270+i,245,40+i);
setcolor(rand());
arc(270,245,90,180,20);
circle(270-i,245,40+i);
setcolor(rand());
arc(270,245,270,0,20);
circle(270,245-i,40+i);
}
getch();
closegraph();
return 0;
}
