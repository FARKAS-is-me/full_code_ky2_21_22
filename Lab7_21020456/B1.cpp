#include<stdio.h>
#include<stdlib.h>
#include<time.h>

float random(float min,float max){
	return min+(max-min)*(float)rand()/RAND_MAX;
}

float out(float arr[],int n){
	for(int i=0;i<n;i++)	
		printf("%f ",arr[i]);
}
void addArr(float arr[],int n,float a,float b){
	for(int i=0;i<n;i++)
		arr[i]=random(a,b);
}

void swap(float arr[],int n){
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(arr[i]>arr[j]){
				float temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
	out(arr,n);
	printf("\n");
}

void mix1(float A[],int nA,float B[],int nB){
	float C[nA+nB];
	int k=0;
	for(int i=0;i<nA;i++){
		C[k]=A[i];
		k++;
	}
	k=nA;
	for(int i=0;i<nB;i++){
		C[k]=B[i];
		k++;
	}
	swap(C,nA+nB);
}

void mix2(float A[],int nA,float B[],int nB){
	float C[nA+nB];
	for(int i=0,iA=0,iB=0;i<nA+nB;i++){
		if(iA<nA && A[iA]<B[iB]) C[i]=A[iA++];
		else C[i]=B[iB++];
	}
	out(C,nA+nB);
}

void outINT(int arr[],int n){
	for(int i=0;i<n;i++)	
		printf("%d ",arr[i]);
}

int main(){
	srand(time(NULL));
	
	int n1,n2;
	printf("Nhap kich thuoc mang 1: ");
	scanf("%d",&n1);
	printf("Nhap kich thuoc mang 2: ");
	scanf("%d",&n2);
	
	float arrA[n1],arrB[n2];
	
	float a,b;
	printf("Nhap gia tri cua a va b: ");
	scanf("%f%f",&a,&b);
	
	addArr(arrA,n1,a,b);
	addArr(arrB,n2,a,b);
	
	
	//a
	swap(arrA,n1);
	swap(arrB,n2);
	
	
	//b
	printf("In ra kieu tron mang 1: ");
	mix1(arrA,n1,arrB,n2);
//	printf("In ra kieu tron mang 2: ");
//	mix2(arrA,n1,arrB,n2);
	
	
	
	//c (dung mix2 de add mang C vao de lam i c)
	float arrC[n1+n2];
	for(int i=0,iA=0,iB=0;i<n1+n2;i++){
		if(iA<n1 && arrA[iA]<arrB[iB]) arrC[i]=arrA[iA++];
		else arrC[i]=arrB[iB++];
	}
	
	//mang D chua cac so chan, mang E chua cac so le
	int arrD[1000],arrE[1000];
    int  x = 0,y = 0;
    for (int i = 0;i<n1+n2; i++)
    {
        if ((int)arrC[i] % 2 == 0)
            arrD[x++] = (int)arrC[i];
        else
            arrE[y++] = (int)arrC[i];
    }
    printf("\nMang chua phan tu chan: ");
    outINT(arrD, x);
    printf("\nMang chua phan tu le: ");
    outINT(arrE, y);
	return 0;
}
