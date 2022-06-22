#include<stdio.h>
#include<stdlib.h>


FILE *fp=fopen("Lab12_2.txt","w");


typedef struct SV{
	char name[20];
	char date[10];
	float pointCode;
	float pointMath;
	float pointEL;
	float pointAvg;
}sinhvien;

sinhvien in4SV(){
	sinhvien a;
	printf("Nhap ten: ");
	fflush(stdin);
	gets(a.name);
	printf("Nhap ngay sinh: ");
	fflush(stdin);
	gets(a.date);
	printf("Nhap diem lap trinh: ");
	scanf("%f",&a.pointCode);
	printf("Nhap diem toan: ");
	scanf("%f",&a.pointMath);
	printf("Nhap diem tieng anh: ");
	scanf("%f",&a.pointEL);
	return a;
}

void swap(sinhvien a,sinhvien b){
	sinhvien t=a;
	a=b;
	b=t;
}
void SapXep(sinhvien a[],int n){
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i].pointCode>a[j].pointCode)
				swap(a[i],a[j]);
}
void Nhap(sinhvien a[],int n);
void Xuat(sinhvien a[],int n);
void avg(sinhvien a[],int n);
sinhvien find(char *ht,sinhvien a[],int n);

int main(){
	int n;
	printf("Nhap so luong sinh vien: "),scanf("%d",&n);
	//fprintf("Nhap so luong sinh vien: %d",n);
	sinhvien check[n];
	
	Nhap(check,n);
	Xuat(check,n);
	
	fclose(fp);
	return 0;
}
void Nhap(sinhvien a[],int n){
	for(int i=0;i<n;i++){
		printf("\nNhap thong tin sinh vien thu %d\n",i+1);
		a[i]=in4SV();
	}
}
void Xuat(sinhvien a[],int n){
	avg(a,n);
	for(int i=0;i<n;i++){
		
	}
	printf("\n ------------ Thong tin sinh vien ------------ ");
	printf("\nHo ten\t\tNgay sinh\tTin\tToan\tAnh\tTrung binh\tXep loai");
	SapXep(a,n);
	for(int i=0;i<n;i++){
		printf("\n%s\t\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t\tGIOI\n",a[i].name,a[i].date,a[i].pointCode,a[i].pointMath,a[i].pointEL,a[i].pointAvg);
		//fprintf();
	}
}
void avg(sinhvien a[],int n){
	for(int i=0;i<n;i++)
		a[i].pointAvg = (a[i].pointCode + a[i].pointMath + a[i].pointEL)/3;
}