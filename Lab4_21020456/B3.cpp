#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int random(int min,int max ){
    return min + rand() / (int) RAND_MAX * ( max - min ); 
}


int main(){
	int choice;
	int a[3];
	a[0]=3+5+6;
	a[1]=7;
	a[2]=2+3+4;
	go_here:
	printf("Nhap lua chon cua ban: ");
	scanf("%d",&choice);
	
	srand(time(NULL));
	int Flag= random(0,1) ;
	
	switch (choice){
		case 1:{
			if(Flag) printf("thanh cong => Tong do tre= %d",a[0]);
			else printf("khong thanh cong =>Tong do tre= %d",2*a[0]);
			break;
		}
		case 2:{
			if(Flag) printf("thanh cong => Tong do tre= %d",a[1]);
			else printf("khong thanh cong =>Tong do tre= %d",2*a[1]);
			break;
		}
		case 3:{
			if(Flag) printf("thanh cong => Tong do tre= %d",a[2]);
			else printf("khong thanh cong =>Tong do tre= %d",2*a[2]);
			break;
		}
		default:{
			goto go_here;
			break;
		}
	}
	
	
	return 0;	
}


// lệnh goto để code nhảy lên vị trí go_here để thực hiện lại đoạn code;
