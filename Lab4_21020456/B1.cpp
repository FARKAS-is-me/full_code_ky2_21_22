#include<stdio.h>
#include<math.h>

int cost(int bandwidth, int delay) {
	return 2*bandwidth+delay;
}

int main() {
	int choice,a[5],x=0,y=0;
	a[0]=cost(4,3)+cost(2,5)+cost(3,6);
	a[1]=cost(4,3)+cost(3,7);
	a[2]=cost(4,7);
	a[3]=cost(5,2)+cost(2,6);
	a[4]=cost(5,2)+cost(3,3)+cost(1,4);

	scanf("%d",&choice);
	switch(choice) {
		case 1:
			printf("Tuyen 1 = %d",a[0]);
			break;
		case 2:
			printf("Tuyen 2 = %d",a[1]);
			break;
		case 3:
			printf("Tuyen 3 = %d",a[2]);
			break;
		case 4:
			printf("Tuyen 4 = %d",a[3]);
			break;
		case 5:
			printf("Tuyen 5 = %d",a[4]);
			break;
	}

	int max = a[0],min = a[0];
	for(int i=0; i<5; i++) {
		if(max<a[i]) {
			max = a[i];
			x = i;
		}
		if(min>a[i]) {
			min = a[i];
			y = i;
		}
	}
	printf("\nTuyen duong co cost min la %d (cost = %d)",y+1,min);
	printf("\nTuyen duong co cost max la %d (cost = %d)",x+1,max);
	return 0;
}