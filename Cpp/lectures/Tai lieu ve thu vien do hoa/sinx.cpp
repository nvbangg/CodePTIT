#include <graphics.h>
#include <conio.h>
#include <math.h>
#define PI 3.14159265
int main()
{
	initwindow(800,600);
    float x,y;
	line(0, 300, 800, 300);
    line(400, 0, 400, 600);
    for(x=-4*PI;x<=4*PI;x=x+0.01)
    {
        y = 100*sin(x);
        putpixel(int(400+30*x),int(300+y),13);
        delay(1);
    }
    getch();
    closegraph();
    return 0;
}
