#include<stdio.h>
#include<stdlib.h>

typedef struct {
	char name[50];
	double average_income;
	int population;
	int covid;
}QG;

QG nhap1QG(){
	QG a;
	printf("Nhap ten Quoc Gia: ");
	fflush(stdin);
	gets(a.name);
	printf("Nhap muc thu nhap binh quan dau nguoi ($): ");
	scanf("%d",&a.average_income);
	printf("Nhap so luong dan so: ");
	scanf("%lf",&a.population);
	printf("Nhap so ca mac CORONA(covid-19): ");
	scanf("%lf",&a.covid);
	return a;
}

void nhapIn4(QG check[],int n){
	for(int i=0;i<n;i++){
		printf("Thong tin Quoc Gia thu %d\n",i+1);
		check[i]=nhap1QG();
		printf("\n");
	}
}

void lowerAIncome(QG check[],int n){
	double min = check[0].average_income;
	int local=0;
	for(int i=0;i<n;i++){
		if(min>check[i].average_income){
			min=check[i].average_income;
			local=i;
		}
	}
	printf("\nQuoc gia co thu nhap binh quan dau nguoi thap nhat la: %s",check[local].name);
}

void covidPerPerson_MAX(QG check[],int n){
	double max = (double)check[0].covid/check[0].population;
	int local=0;
	for(int i=0;i<n;i++){
		if((double)check[i].covid/check[i].population>max){
			max=(double)check[i].covid/check[i].population;
			local=i;
		}
	}
	printf("\nQuoc gia co ti le mac COVID cao nhat la la: %s",check[local].name);
}
int main(){
	int n;
	printf("Nhap so Quoc Gia thu nhap: ");
	scanf("%d",&n);
	QG check[n];
	
	nhapIn4(check,n);
	
	lowerAIncome(check,n);
	covidPerPerson_MAX(check,n);
	return 0;
}
