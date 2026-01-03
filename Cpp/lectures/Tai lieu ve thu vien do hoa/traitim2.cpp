#include <graphics.h>
#include <conio.h>
#include <math.h>
#define PI 3.14159265

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:\\tc\\bgi");
	initwindow(1000,1000);
    float x,y,t;
    float x1,y1,x2,y2;
//	line(0, 300, 800, 300);
//    line(400, 0, 400, 600);
	// Ve troi sao
	int i=2000;
	while (i--)  {
		int x1=rand()%1000;
		int y1=rand()%1000;
		int mau=rand()%15;

		for(t=0;t<=60;t+=0.01)
	    {
	        x=-0.01*(-t*t+40*t+1200)*sin(PI*t/180);
	        y=-0.01*(-t*t+40*t+1200)*cos(PI*t/180);
	        putpixel(int(x1+10*x),int(y1+10*y),mau);
	        putpixel(int(x1+10*(-x)),int(y1+10*y),mau);
//	        putpixel(int(x1+20*x),int(y1+20*y),mau);
//	        putpixel(int(x1+20*(-x)),int(y1+20*y),mau);
	    }
	    if(i%10==0) cleardevice();
  	}
	//ve trai tim rong	
    

	getch();
    closegraph();
    
    return 0;
}
