#include<stdio.h>
#include<stdlib.h>

void input(int **arr,int n){
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d ",&arr[i][j]);
}
void output(int **arr,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}		
}
void error(int **arr,int n){
	for(int i=0;i<n;i++)
		arr[i][i]=1;
	printf("\nCac phan tu tren duong cheo chinh bi loi:\n");
	output(arr,n);
}
void swap(int **arr,int n){
	for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++)
                for(int l=0;l<n;l++)
                    if(arr[i][j]<arr[k][l]){
                        int temp=arr[i][j];
                        arr[i][j]=arr[k][l];
                        arr[k][l]=temp;
                    }
	output(arr,n);
}
int BinarySearch(int *arr, int l, int r, int x) {
  	if (r >= l) {
    	int mid = l + (r - l) / 2;
 
    	if (arr[mid] == x)
      	return mid;
 
    	if (arr[mid] > x)
      		return BinarySearch(arr, l, mid - 1, x);
 
    	return BinarySearch(arr, mid + 1, r, x);
  	}
 
  	return -1;
}
void funcFree(int **arr,int n){
	for(int i=0;i<n;i++)
        free(arr[i]);
    free(arr);
}
int main(){
	int n;
	scanf("%d",&n);
	int **arr=(int**)malloc(n*sizeof(int*));
	for(int i=0;i<n;i++)
		arr[i]=(int*)malloc(n*sizeof(int));
	
	
	input(arr,n);
	output(arr,n);
	error(arr,n);
	swap(arr,n);
	
	int*x=(int*)malloc(n*sizeof(int));
    int c=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            x[c++]=arr[i][j];
    
	int s;
    printf("Tim kiem nhi phan: ");
    scanf("%d",&s);
    if(BinarySearch(x,n,n,s)==-1)
        printf("Not found\n");
    else
        printf("%d at %d\n",s,BinarySearch(x,n,n,s));
        
    printf("Thoi gian di theo tuyen 3 = %f",(float)n*n*8/(64000));
	
	
	funcFree(arr,n);
	return 0;
}
