#include<stdio.h>
#include<stdlib.h>

void Nhap(double *arr,int n){
	for(int i=0;i<n;i++)
		scanf("%lf",arr+i);
}
void Xuat(double *arr,int n){
	for(int i=0;i<n;i++)
		printf("%.2lf ",*(arr+i));
}
void *Max(double *arr,int n){
	for(int i=0;i<n;i++)
		scanf("%.2lf",arr+i);
}
void swap(double a,double b){
	double t=a;
	a=b;
	b=t;
}
void SapXep1(double *arr,int n){
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-i-1;j++)
			if(*(arr+i)>*(arr+j)) swap(*(arr+i),*(arr+j));
	printf("\nSap xep noi bot tang dan: ");
	Xuat(arr,n);
}
void SapXep2(double *arr,int n){
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(*(arr+i)<*(arr+j)) swap(*(arr+i),*(arr+j));
	printf("\nSap xep chon giam dan: ");
	Xuat(arr,n);
}
void Xoa(double *a,int *n,int x){
	int count = 0;
    for(int i = x; i < n-1; i++) {
        a[i] = a[i+1];
    }
    
	for(int i=0;i<n-1;i++)
		printf("%.2lf ",*(a+i));
}
void Chen();
void XoaTrung();
int main(){
	int n;
	scanf("%d",&n);
	double*arr=(double*)malloc(n*sizeof(double));
	Nhap(arr,n);
	printf("\nCac phan tu cua mang la:\n");
	Xuat(arr,n);
	
	SapXep1(arr,n);
	SapXep2(arr,n);
	Xoa(arr,n,2);
	return 0;
}
