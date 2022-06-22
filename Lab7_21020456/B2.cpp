#include<stdio.h>
#include<stdlib.h>

void input(int **a,int m,int n){
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}
void output(int **a,int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}	
}
int max(int a, int b){
    if (a < b)
        return b;
    return a;
}
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int **a,int dong,int cot) {
	int n = dong * cot;
	for(int i = 0; i < n - 1; i++) {
		for(int j = i + 1; j < n; j++)	{
			if(a[i / cot][i % cot] > a[j / cot][j % cot]) {
				int temp = a[i / cot][i % cot];
				a[i / cot][i % cot] = a[j / cot][j % cot];
				a[j / cot][j % cot] = temp;
			}
		}
	}
}
void funcFree(int **arr,int n){
	for(int i=0;i<n;i++)
        free(arr[i]);
    free(arr);
}

int main(){
	int m,n;
	printf("Nhap kich thuoc cua ma tran m x n: ");
	scanf("%d%d",&m,&n);
	
	int **a=(int**)malloc(m*sizeof(int*));
	for (int i=0;i<m;i++)
        a[i] = (int*)malloc(n*sizeof(int));
	printf("Nhap ma tran A: \n");
	input(a,m,n);
	printf("\nXuat ma tran A: \n");
	output(a,m,n);
	
	//a
	int **b=(int**)malloc(m*sizeof(int*));
	for (int i=0;i<m;i++)
        b[i] = (int*)malloc(n*sizeof(int));
        
    for(int i=0;i<m;i++){
    	for(int j=0;j<n;j++){
    		int s=0;
            for (int k=0;k<=j;k++)
                s += a[i][k];
            b[i][j] = s;
		}
	}
	printf("\nMa tran B la: \n");
	output(b,m,n);
	
	//b
	int Max = b[0][0];
    for (int i = 0; i < m; i++)
        for (int j=0;j<n;j++)
            Max = max(Max, b[i][j]);

    printf("\nPhan tu lon nhat trong B: %d\n", Max);
		
		
	//c
	int **c=(int**)malloc(n*sizeof(int*));
	for (int i=0;i<n;i++)
        c[i] = (int*)malloc(m*sizeof(int));
    for (int i = 0; i < n; i++)
        for (int j=0;j<m;j++)
        	c[i][j]=b[j][i];
    printf("\nMa tran C la chuyen vi cua B:\n");
	output(c,n,m);
    
    
    //d
    selectionSort(c,n,m);
	printf("\nMa tran C sau khi sap xep :\n");
	output(c,n,m);
	
	funcFree(a,n);
	funcFree(b,n);
	funcFree(c,m);
	return 0;
}
