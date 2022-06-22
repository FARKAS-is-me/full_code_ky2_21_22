/* 
graphics in Dev-C++ - nguyenvanquan7826 
*/


#include<iostream>
#include <winbgim.h>

using namespace std;

void perpendicular_line(float x1,float y1,float x2,float y2,int color){
	float a,b;
	for(int i=300; i<=500; i+=40) {

		if(x2!=x1) {
			if(y1!=y2) {
				a = (x1-x2)/(y2-y1);
				for(float x=0; x<=800; x+=0.5)
					putpixel(x,a*x+i,color);
			} else {
				for(float x=0; x<=800; x+=0.5)
					putpixel(i,x,color);
			}
		} else {
			for(float x=0; x<=800; x+=0.5)
				putpixel(x,x1+i,color);
		}
	}
}


void parallel_lines(float x1,float y1,float x2,float y2,int color){
	float a,b;
	for(int i=10; i<=100; i+=40) {

		if(x2!=x1) {

			a = (y2-y1)/(x2-x1);
			b = y1-a*x1;
			y1+=10;
			y2+=10;
			for(float x=0; x<=800; x+=0.5)
				putpixel(x,a*x+b,color);
		} else {
			for(float x=0; x<=800; x+=0.5)
				putpixel(x1+i,x,color);
		}
	}
}


int main(int argc, char *argv[])
{
	// now, you can run project
	initwindow(800, 800);			// init window graphics
	setbkcolor(0);					// set background
   	cleardevice();
	
	
	float x1,x2,y1,y2;
	cin>>x1>>x2>>y1>>y2;

	setcolor(15);					// set text color
	line(x1,x2,y1,y2);			// use the line function to draw a line d
	
	perpendicular_line(x1,x2,y1,y2,5);	// duong thang vuong goc can tim
	
	parallel_lines(x1,x2,y1,y2,6);		// nhung duong thang song song voi duong thang d
	
	while(!kbhit()) delay(1);		// pause screen	
	return 0;
}