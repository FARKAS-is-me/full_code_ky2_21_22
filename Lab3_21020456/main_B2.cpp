/* 
graphics in Dev-C++ - nguyenvanquan7826 
*/
#include<iostream>
#include <winbgim.h> 

using namespace std;

void drawUsePutpixel(float x1,float y1,float x2,float y2,int color){
	float a,b;
	
	if(x1!=x2){
		if(y1!=y2){
			a=(y2-y1)/(x2-x1);
			b=y1-a*x1;
			cout<<a<<" "<<b;
			for(float i=x1;i<=x2;i+=0.5){
				putpixel(i,a*i+b,color);
			}
		}else{
			cout<<"DUONG THANG VUONG GOC VOI Oy";
			for(float i=x1;i<=x2;i+=0.5){
				putpixel(i,y1,color);
			}
		}
			
	}
	else{
		if(y1!=y2){
			cout<<"DUONG THANG VUONG GOC VOI Ox";
			for(float i=y1;i<=y2;i+=0.5){
				putpixel(x1,i,color);
			}
		}else{
			cout<<"2 TOA DO TRUNG NHAU";
			putpixel(x1,y1,color);
		}
	}	
	
}


int main(int argc, char *argv[]){
	// now, you can run project
	initwindow(500, 500);			// init window graphics
	setbkcolor(0);					// set background
   	cleardevice();
	setcolor(15);					// set text color
	
	drawUsePutpixel(100,120,200,50,14); 	//su dung ham void de ve
	
	
//	line(100,120,200,50);			// use const line
	
	while(!kbhit()) delay(1);		// pause screen	
	return 0;
}