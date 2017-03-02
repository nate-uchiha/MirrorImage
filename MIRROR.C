#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>

void main(void)
{
int gd =DETECT ,gm,j=0,i,size;
char str[20];

void *a[20];

initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
for(i=0;i<=0;i++)
{


printf("Enter text:\n");
scanf("%s",&str[i]);

}
setfillstyle(0,0);
floodfill(1,1,1);

setcolor(9);

settextstyle(1,0,4);
outtextxy(190,130,str);

for(i=0;i<639;i++)
  {
  circle(i,2,2);
  circle(i,477,2);
  }

for(i=0;i<480;i++)
  {
  circle(2,i,2);
  circle(637,i,2);
  }

setcolor(8);
for(i=4;i<475;i++)
 circle(275,i,2);
setcolor(14);
settextstyle(5,1,4);
outtextxy(245,110,"MIRROR");
settextstyle(5,0,2);
outtextxy(190,100,"Real");
for(i=190;i<=205;i++)
 {
 size=imagesize(i,98,i,250);
 a[j]=malloc(size);
 getimage(i,98,i,250,a[j]);
 j++;
 }
getch();
settextstyle(5,0,2);
outtextxy(450,100,"Inverted");
j=15;
for(i=450;i<=475;i++)
 {
 putimage(i,98,a[j],1);
 j--;
 }
getch();
closegraph();
}
