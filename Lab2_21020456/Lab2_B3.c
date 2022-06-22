#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand((int)time(0));
	for(int i=0;i<5;i++)
		printf("%d\t",rand());	
}