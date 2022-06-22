#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

float random(float min,float max){
	return min + (max-min) * rand()/(float)RAND_MAX;
}
int main(){
	srand(time(NULL));
	
	int n;
	scanf("%d",&n);
	int a[n]; //mang chua so da lam tron
	for(int i=0;i<n;i++){
		float r=random(0,10);
		a[i]=round(r);
	}
	
	for(int i=0;i<n;i++)	printf("%d\n",a[i]);
	
	int b[10000];
	int c=0,j=0;
	for(c=0;c<n;c++){
		j=8*c+7;
		while(a[c]>0){
			b[j]=a[c]%2;
			a[c]=a[c]/2;
			j--;
		}
	}
	
//	for(int i=0;i<n;i++){
//		for(j=0;j<8;j++){
//			printf("%d",b[8*i+j]);
//		} printf("\n");
//	}
	
	int count1=0,count0=0;
	for(int i=0;i<8*n;i++){
		if(b[i]) count1++;
		else count0++;
	}
	printf("\nSo bit 1: %d",count1);
	printf("\nSo bit 0: %d",count0);
	
	float scale1=(float)count1*100/count0;
	printf("\nTi le bit 1 tren bit 0: %.2f",scale1);
	float scaleAll=(float)count1*100/(8*n);
	printf("\nTi le bit 1 tren tong so bit: %.2f",scaleAll);
	
	int b0[1000];
	int b1[1000];
	int chiSo1 = 0, chiSo2 = 0;
	for (int i = 0; i < 8*n; i++) {
		if (b[i] == 0) {
			b0[chiSo1] = 0;
			chiSo1++;
		}
		if (b[i] == 1) {
			b1[chiSo2] = 1;
			chiSo2++;
		}
	}
	
	printf("\nMang chua bit 0:");
	for (int i = 0; i < chiSo1; i++) {
		printf("%d ", b0[i]);
	}
	printf("\nMang chua bit 1:");
	for (int i = 0; i < chiSo2; i++) {
		printf("%d ", b1[i]);
	}
	
	return 0;
}
