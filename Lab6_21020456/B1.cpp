#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int Bin2Dec(int n){
	int m=0,x=0;
	
	while(n>0){
		m+=(n%10)*pow(2,x);
		n/=10;
		x++;
	}
	return m;
}

int Dec2Bin(int n){
	int m=0,x=0;
	
	while(n>0){
		m+=(n%2)*pow(10,x);
		n/=2;
		x++;
	}
	return m;
}

int main(){
	
//	a
	int *arr=(int*)malloc(50*sizeof(int));
	for(int i=0,j=1;i<50;i+=5,j++){
		arr[i]=9;
		arr[i+1]='x';
		arr[i+2]=j;
		arr[i+3]='=';
		arr[i+4]=arr[i]*arr[i+2];
	}
	
	printf("Bang cuu chuong cua 9:\n");
	for(int i=0,j=1;i<50;i+=5,j++)
		printf("%d %c %d %c %d\n",arr[i],arr[i+1],arr[i+2],arr[i+3],arr[i+4]);
	
	
	printf("\nBang cuu chuong theo BIN:\n");
	for(int i=0,j=1;i<50;i+=5,j++)
		printf("%.8d %.8d %.8d %.8d %.8d\n",Dec2Bin(arr[i]),Dec2Bin((int)arr[i+1]),Dec2Bin(arr[i+2]),Dec2Bin((int)arr[i+3]),Dec2Bin(arr[i+4]));
		
	
//	b
	int sizeofArr=50;
	printf("Time tuyen 1= %.5lf (s)\n",(double)8*sizeofArr/(32*1000));
	printf("Time tuyen 2= %.5lf (s)\n",(double)8*sizeofArr/(64*1000));
	printf("Time tuyen 3= %.5lf (s)\n",(double)8*sizeofArr/(16*1000));
	
	
	
	arr[0]=10001001;
    arr[49]=01011011;
    printf("\nError\n");
	for(int i=0;i<50;i+=5)
        printf("%d\t%d\t%d\t%d\t%d\n",Bin2Dec(arr[i]),Bin2Dec(arr[i+1]),Bin2Dec(arr[i+2]),Bin2Dec(arr[i+3]),Bin2Dec(arr[i+4]));
		
 
	return 0;
}
