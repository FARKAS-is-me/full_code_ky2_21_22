#include<stdio.h>
#include<stdlib.h>
void Nhap(float *arr,int n){
	for(int i=0;i<n;i++)
		scanf("%f",arr+i);
}
void Xuat1(float *arr,int n){
	printf("\nXuat mang theo chieu xuoi:\n");
	for(int i=0;i<n;i++)
		printf("%.2f ",*(arr+i));
}
void Xuat2(float *arr,int n){
	printf("\nXuat mang theo chieu nguoc:\n");
	for(int i=n-1;i>=0;i--)
		printf("%.2f ",*(arr+i));
}
void DemLe(float *arr,int n){
	int count=0;
	for(int i=0;i<n;i++){
		if((int)*(arr+i)%2==1) count++;
	}
	printf("\nSo phan tu le cua mang: %d",count);
}
void TongChan(float *arr,int n){
	int sum=0;
	for(int i=0;i<n;i++){
		if((int)*(arr+i)%2==0) sum+=*(arr+i);
	}
	printf("\nTong cac phan tu chan cua mang: %d",sum);
}
int main(){
	int n;
	scanf("%d",&n);
	float *arr=(float*)malloc(n*sizeof(float));
	Nhap(arr,n);
	Xuat1(arr,n);
	Xuat2(arr,n);
	DemLe(arr,n);
	TongChan(arr,n);
	return 0;
}
