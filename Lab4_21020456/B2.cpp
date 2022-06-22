#include<stdio.h>
#include<math.h>

int cost(int bandwidth, int delay) {
	return 2*bandwidth+delay;
}

int sumCost(int cost,int max,int min,int choice) {
	if(choice==max)
		cost*=10;
	if(choice==min)
		cost*=20;
	return cost;	
}

int main() {
	int choice,a[3],x=0,y=0;
	a[0]=cost(4,3)+cost(2,5)+cost(3,6);
	a[1]=cost(4,7);
	a[2]=cost(5,2)+cost(3,3)+cost(1,4);

	int max = a[0],min = a[0];
	for(int i=0; i<3; i++) {
		if(max<a[i]) {
			max = a[i];
			x = i;
		}
		if(min>a[i]) {
			min = a[i];
			y = i;
		}
	}
	go_here:
	printf("Nhap lua chon: ");
	scanf("%d",&choice);
	switch(choice) {
		case 1:
			printf("Tuyen 1 = %d",sumCost(a[0],x+1,y+1,1));
			break;
		case 2:
			printf("Tuyen 2 = %d",sumCost(a[1],x+1,y+1,2));
			break;
		case 3:
			printf("Tuyen 3 = %d",sumCost(a[2],x+1,y+1,3));
			break;
		default:
			goto go_here;
	}


	printf("\nTuyen duong co cost min la %d (cost = %d)",y+1,min);
	printf("\nTuyen duong co cost max la %d (cost = %d)",x+1,max);
	return 0;
}