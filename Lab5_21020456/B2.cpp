#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

float random(float min,float max){
	return min + (max-min) * rand()/(float)RAND_MAX;
}
int main(){
	srand(time(NULL));
	float amount[12];
	for(int i=0;i<12;i++){
		printf("\nLuong mua trong thang %d la:\t",i+1);
		amount[i]=random(0,500);
		printf("%f",amount[i]);
	}
	
//	luong mua trung binh
	float sum=0;
	for(int i=0;i<12;i++)	sum+=amount[i];
	printf("\nLuong mua trung binh la:\t%f",sum/12);
	
	float PhuongSai;
	for(int i=0;i<12;i++)	PhuongSai+= (amount[i]-sum/12)*(amount[i]-sum/12)/12;
	float doLechChuan= sqrt(PhuongSai);
	printf("\nDo lech chuan la:\t\t%f",doLechChuan);
	return 0;
}
