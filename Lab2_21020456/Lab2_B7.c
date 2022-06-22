#include<stdio.h>
#include<stdlib.h>
#include<time.h>

float random(int min,int max){
	float scale= rand()/(float)RAND_MAX;
	return min + scale*(max-min);
}
int main(){
	srand((int)time(NULL));
	float x= random(-3,3);
	float n=random(0,1);
	float y=x+n;
	printf("ket qua can tim la %.7f",round(x*100)/100);
}