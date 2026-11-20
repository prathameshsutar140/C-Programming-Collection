#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
    int gd = DETECT, gm, i;
    int x1, y1, x2, y2;
    int dx, dy, p, x, y;
    initgraph(&gd, &gm, "C:\\TC\\BGI");


    printf("Enter x co-ordinates (x1, x2): ");
    scanf("%d %d", &x1, &x2);
    printf("Enter y co-ordinates (y1, y2): ");
    scanf("%d %d", &y1, &y2);

    dx = x2 - x1;
    dy = y2 - y1;


    p = 2 * dy - dx;

    x = x1;
    y = y1;


    putpixel(x, y, WHITE);


    for (i = 0; i < dx; i++)
    {
	if (p < 0)
	{
	    x = x + 1;
	    p = p + 2 * dy;
	}
	else
	{
	    x = x + 1;
	    y = y + 1;
	    p = p + 2 * dy - 2 * dx;
	}
	putpixel(x, y, WHITE);
    }

    getch();
    closegraph();
}