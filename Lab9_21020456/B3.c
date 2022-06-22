#include<stdio.h>
#include<stdlib.h>

void nhapMatrix(float **arr,int m,int n){
	printf("\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Nhap phan tu Arr[%d][%d]: ",i+1,j+1);
			scanf("%f",&arr[i][j]);
		}
	}
}

void xuatMatrix(float **arr,int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			printf("%d %d %.3f ",i+1,j+1,arr[i][j]);
		printf("\n");
	}		
}

int main(){
	int m,n;
	printf("Nhap gia tri cua m(dong): ");
	scanf("%d",&m);
	
	printf("Nhap gia tri cua n(cot): ");
	scanf("%d",&n);
	
	float **p=(float**)malloc(m*sizeof(float*));
	for(int i=0;i<n;i++)
		*(p+i)=(float*)malloc(n*sizeof(float));
		
	nhapMatrix(p,m,n);
	xuatMatrix(p,m,m);
	
	
	return 0;
}
