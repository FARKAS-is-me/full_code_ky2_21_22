#include"SoPhuc.h"

int main(){
	sophuc *a = (sophuc*)malloc(sizeof(sophuc));
	sophuc *b = (sophuc*)malloc(sizeof(sophuc));
	
	printf("Nhap so phuc a:\n");
	Nhap(a);
	printf("Nhap so phuc b:\n");
	Nhap(b);
	
	printf("\nSo phuc a la: ");
	Xuat(*a);
	printf("\nSo phuc b la: ");
	Xuat(*b);
	
	printf("\nTong cua 2 so phuc la: ");
	Xuat(Tong(*a,*b));
	printf("\nHieu cua 2 so phuc la: ");
	Xuat(Hieu(*a,*b));
	printf("\nTich cua 2 so phuc la: ");
	Xuat(Tich(*a,*b));
	printf("\nThuong cua 2 so phuc la: ");
	Xuat(Thuong(*a,*b));
	printf("\nDoi so cua so phuc a la: %.2lf",Argument(*a));
	printf("\nMo dun cua so phuc a la: %.2lf",Modul(*a));
	
	return 0;
}
