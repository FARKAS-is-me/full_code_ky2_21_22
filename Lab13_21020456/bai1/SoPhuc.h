#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


typedef struct{
	double phanThuc;
	double phanAo;
}sophuc;

void Nhap(sophuc *a);

void Xuat(sophuc a);

sophuc Tong(sophuc a,sophuc b);

sophuc Hieu(sophuc a,sophuc b);

sophuc Tich(sophuc a,sophuc b);

sophuc Thuong(sophuc a,sophuc b);

double Argument(sophuc a);

double Modul(sophuc a);
