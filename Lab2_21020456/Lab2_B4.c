#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void NhiPhan(int n){
	int a[1000],i;
    for(i=0;n>0;i++){
    	a[i]= n%2;
    	n/=2;
	}
	for(i= i-1;i>=0;i--)
	    printf("%d",a[i]);
	printf(" ");
}
int main(){
	srand(time(NULL));
	
	int a,b,c,i,byte=0;
	scanf("%d%d",&a,&b);
	for(i=0;i<100;i++){
		c = a + rand()%(b-a+1);  //in ra 100 so ngau nhien
		byte += sizeof(c);
		printf("%d ",c);
        //NhiPhan(a+rand()%(b-a+1));      //chuyen sang nhi phan
	}
	 printf("\nSo byte can dung : %d",byte);   
	 return 0;
}