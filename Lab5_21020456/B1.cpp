#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

float random(float min,float max){
	return min+ rand()/(float) RAND_MAX * (max-min);
}

int main(){
	srand(time(NULL));
	printf("nhap so luong sinh vien cua lop: ");
	int n; scanf("%d",&n);
	
	float point[n];
	for(int i=0;i<n;i++){
		printf("\ndiem cua sinh vien thu %d la: ",i+1);
		point[i]=random(0,10);
		printf("%f",point[i]);
	}
	
//	lam tron diem den 2 so thap phan
	for(int i=0;i<n;i++)
		point[i]=round(point[i]*100)/100;
		
//	tim min,max
	float max=point[0],min=point[0];
	for(int i=0;i<n;i++){
		if(point[i]>max) max=point[i];
		if(point[i]<min) min=point[i];
	}
	
//	diem max,min
	printf("\nDiem lon nhat la: %.2f",max);
	printf("\nDiem nho nhat la: %.2f",min);
	
//	tinh diem tren C+ ~ >=6.5
	float sum=0;
	for(int i=0;i<n;i++)
		if(point[i]>=6.5) sum+=point[i];
	printf("\nTong diem tren C+ la: %.2f",sum);	
	
//	tim so luong diem A+
	int count=0;
	for(int i=0;i<n;i++)
		if(point[i]>=9) count++;
	printf("\nSo luong diem A+ la: %d",count);
	
	return 0;
}
