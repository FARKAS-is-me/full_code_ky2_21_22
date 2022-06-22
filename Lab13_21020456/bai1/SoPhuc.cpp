#include"SoPhuc.h"

void Nhap(sophuc *a){
	printf("Nhap phan thuc cua so phuc: ");
	scanf("%lf",&a->phanThuc);
	printf("Nhap phan ao cua so phuc: ");
	scanf("%lf",&a->phanAo);
}

void Xuat(sophuc a){
	if(a.phanAo>=0)	printf("%.2lf +%.2lfi",a.phanThuc,a.phanAo);
	else printf("%.2lf %.2lfi",a.phanThuc,a.phanAo);
}

sophuc Tong(sophuc a,sophuc b){
	sophuc h;
	h.phanThuc=a.phanThuc+b.phanThuc;
	h.phanAo=a.phanAo+b.phanAo;
	return h; 
}

sophuc Hieu(sophuc a,sophuc b){
	sophuc h;
	h.phanThuc=a.phanThuc-b.phanThuc;
	h.phanAo=a.phanAo-b.phanAo;
	return h; 
}

sophuc Tich(sophuc a,sophuc b){
	sophuc h;
	h.phanThuc=a.phanThuc*b.phanThuc-a.phanAo*b.phanAo;
	h.phanAo=a.phanAo*b.phanThuc+a.phanThuc*b.phanAo;
	return h; 
}

sophuc Thuong(sophuc a,sophuc b){
	sophuc h;
	double x= a.phanThuc*b.phanThuc+a.phanAo*b.phanAo;
	h.phanThuc=(a.phanThuc*a.phanAo+b.phanThuc*b.phanAo)/x;
	h.phanAo=(a.phanAo*b.phanThuc-a.phanThuc*b.phanAo)/x;
	return h; 
}

double Argument(sophuc a){
	return acos(a.phanThuc/sqrt(a.phanThuc*a.phanThuc+a.phanAo*a.phanAo)); 
}

double Modul(sophuc a){
	return sqrt(a.phanThuc*a.phanThuc+a.phanAo*a.phanAo); 
}