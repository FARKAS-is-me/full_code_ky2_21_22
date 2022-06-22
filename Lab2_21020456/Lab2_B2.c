#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int i=0,a=0;
	printf("nhap so nhi phan bat ky=");
	scanf("%d",&n);
	while(n>0){
		a+= (n%10)* pow(2,i);
		i++;
		n/=10;
	}
	printf("so thap phan can tim la= %d",a);
}