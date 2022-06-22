#include<stdio.h>

int main(){
	int n,a[16],i;
	printf("nhap so bat ky=");
	scanf("%d",&n);
	for(i=0;n>0;i++)  {  
		a[i]=n%2;  
		n=n/2;  
	}  
	printf("\nDang nhi phan cua so vua nhap la = ");  
	for(i=i-1;i>=0;i--)   
		printf("%d",a[i]);    
}