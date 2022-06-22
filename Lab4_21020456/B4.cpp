#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int random(int a,int b){
	return a + rand()%(b-a+1);
}

int main(){
	int arr[10],k=0,i;
	srand(time(NULL));
	int r=random(1,10);
	arr[0]=random(1,10);
	
	printf("San pham tot\tSan pham hong\n");
	printf("%d\n",arr[0]);
	for(i=1;i<=10;i++){
		arr[i]=arr[i-1]+r;
		printf("%d\n",arr[i]);
	}
	
	for(i=1;i<=100;i++){
		if(i==arr[k]){
			k++;
			continue;
		}
		printf("\t\t\t%d\n",i);
	}
}
