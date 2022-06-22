/* 
graphics in Dev-C++ - nguyenvanquan7826 
*/

#include <winbgim.h> 

int main(int argc, char *argv[])
{
	// now, you can run project
	initwindow(800, 800);			// init window graphics
	setbkcolor(0);					// set background
   	cleardevice();

	
	setfillstyle(1,3);
//	ellipse(400,300,0,360,300,150);	
	fillellipse(400,300,300,150);
	
	setfillstyle(1,4);
	bar(250,200,550,400);

	setfillstyle(1,2);				// setup color
	circle(400,300,100);
	floodfill(400,300,15);			// tạo vùng chọn cho màu
	
	
	while(!kbhit()) delay(1);		// pause screen	
	return 0;
}