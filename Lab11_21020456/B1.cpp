#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct sinhvien{
	int MSSV;
	char name[50];
	int old;
	double point;
}SV;

SV nhap1SV(){
	SV a;
	printf("\nNhap MSSV: ");
	scanf("%d",&a.MSSV);
	printf("Nhap Ho va Ten: ");
	fflush(stdin);
	gets(a.name);
	printf("Nhap tuoi: ");
	scanf("%d",&a.old);
	printf("Nhap diem thi: ");
	scanf("%lf",&a.point);
	
	return a;
}

void nhapIn4(SV svien[]){
	for(int i=0;i<10;i++){
		printf("Thong tin sinh vien thu %d",i+1);
		svien[i]=nhap1SV();
		printf("\n");
	}
}

void pointMax(SV svien[]){
	double max = svien[0].point;
	int local=0;
	for(int i=0;i<10;i++){
		if(svien[i].point>max){
			max=svien[i].point;
			local=i;
		}
	}
	printf("\nSinh vien co diem cao nhat la: %s",svien[local].name);
}

void stringNameMax(SV svien[]){
	int max= strlen(svien[0].name);
	int local=0;
	for(int i=0;i<10;i++){
		if(strlen(svien[i].name)>max){
			max=strlen(svien[i].name);
			local=i;
		}
	}
	printf("\nSinh vien co ho ten dai nhat la: %s",svien[local].name);
}

void averagePoint(SV svien[]){
	double sum=0;
	for(int i=0;i<10;i++){
		sum+=svien[i].point;
	}
	printf("\nDiem trung binh cua 10 sinh vien la: %.3lf",sum/10);
}
int main(){
	SV svien[10];
	
	nhapIn4(svien);
	
	pointMax(svien);
	stringNameMax(svien);
	averagePoint(svien);
	return 0;
}
