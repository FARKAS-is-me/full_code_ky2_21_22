#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int random(int min,int max){
	return min+ rand()%(max-min+1);
}
int main(){
	srand(time(NULL));
	int a[8][8];
	for(int i=0;i<8;i++)
		for(int j=0;j<8;j++)
			a[i][j]=random(0,1);
	
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++)
			printf("%d",a[i][j]);
		printf("\n");
	}
		
	int b[8][8], c[8][8];
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			b[i][j] = 1;

	for (int i = 0; i < 8; i++) {
		for (int j = i; j < 8; j++) 
			c[i][j] = 1;
		for (int j = 0; j <i; j++) 
			c[i][j] = 0;
	}
	
	printf("\n\n");
	int d[8][8];
	for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            d[i][j]=0;
        	int k;
            for(k=0;k<8;k++)
                d[i][j]=d[i][j]+(a[i][k]*b[k][j]);
                       
        }
    }
    for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
		    d[i][j] = d[i][j] + c[j][j];
		    printf("%d ", d[i][j]);
		}
		printf("%\n");
	}
	
	printf("\n\n");
	printf("Duong cheo chinh\n");
	for (int i = 0; i < 8; i++)
		printf("%d ", d[i][i]);
	
	printf("\n\n");
	printf("Duong cheo phu\n");
	for (int i = 0; i < 8; i++)
		printf("%d ", d[i][8-1-i]);
	
	return 0;
}
