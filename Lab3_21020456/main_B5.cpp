/* 
graphics in Dev-C++ - nguyenvanquan7826 
*/
#include<iostream>
#include<math.h>
#include<winbgim.h> 


using namespace std;

int main(int argc, char *argv[])
{
	// now, you can run project
	initwindow(800, 800);			// init window graphics
	setbkcolor(0);					// set background
   	cleardevice();
//	setcolor(15);					// set text color
	
	
	//ve hinh sin	(1)
	for(float x=0;x<=720;x+=0.5){
		float y = 100* sin(x*3.14/180);
		cout<<x<<"\t"<<y<<endl;
		putpixel(x,y+300,4);
	}
	
	
	//dung hinh sin(1) theo phuong thang dung	(2)
	for(float x=0;x<=720;x+=0.5){
		float y = 100* sin(x*3.14/180);
		putpixel(y+350,x,4);
	}
	
	
	//dao nguoc phuong thang dung cua hinh sin(2)	(3)
	for(float x=0;x<=720;x+=0.5){
		float y = 100* sin(x*3.14/180);
		putpixel(-y+350,x,10);
	}
	
	while(!kbhit()) delay(1);		// pause screen	
	return 0;
}