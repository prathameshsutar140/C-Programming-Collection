#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm,i;
	int x1,y1,x2,y2;
	int dx,dy,step,xinc,yinc;
	int x,y;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	printf("Eneter x co-ordinate i.e x1,x2:");
	scanf("%d %d",&x1,&x2);
	printf("Enter a Y co-ordinate i.e Y1,Y2:");
	scanf("%d %d",&y1,&y2);
	dx=x2-x1;
	dy=y2-y1;
	if(dx>dy)
	{
		step=dx;
	}
	else
	{
		step=dy;
	}
	xinc=dx/step;
	yinc=dy/step;
	putpixel(x1,y1,RED);
	x=x1,y=y1;
	for(i=0;i<step;i++)
	{
		x=x+xinc;
		y=y+yinc;
		putpixel(x,y,WHITE);
	}
	getch();
	closegraph();
}