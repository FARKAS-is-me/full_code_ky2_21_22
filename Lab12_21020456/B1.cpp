 #include<stdio.h>
#include<stdlib.h>
#include<math.h>

FILE *fp=fopen("Lab12_1.txt","w");

typedef struct fraction{
	int tu;
	int mau;	
		
}phanso;

void nhap(phanso *p){
	printf("Nhap vao tu so: ");
	scanf("%d",&p->tu);
	fprintf(fp,"\nNhap vao tu so: %d",p->tu);
	do
	{
		printf("Nhap vao mau so: ");
		scanf("%d",&p->mau);
		fprintf(fp,"\nNhap vao mau so: %d",p->mau);
		if(p->mau==0)
			printf("Mau phai =0, Vui long kiem tra lai\n");
	}while(p->mau==0);
}

void xuat(phanso p){
	printf("%d/%d\n",p.tu,p.mau);
	fprintf(fp,"%d/%d\n",p.tu,p.mau);
}

int ULCN(int a, int b);
void rutgon(phanso &ps);
phanso tong(phanso x,phanso y);
phanso hieu(phanso a,phanso b);
phanso tich(phanso a,phanso b);
phanso thuong(phanso a,phanso b);


int main(){

	
	
	phanso *a=(phanso*)malloc(sizeof(phanso));
	phanso *b=(phanso*)malloc(sizeof(phanso));
	
	printf("Nhap phan so a\n");
	nhap(a);
	printf("\nNhap phan so b\n");
	nhap(b);
	
	printf("\Phan so a: ");fprintf(fp,"\Phan so a: ");
	xuat(*a);
	printf("\Phan so b: ");fprintf(fp,"\Phan so b: ");	
	xuat(*b);
	
	phanso sum=tong(*a,*b);
	printf("\nTong phan so: ");fprintf(fp,"\nTong phan so: ");
	xuat(sum);
	
	phanso sub=hieu(*a,*b);
	printf("\nHieu phan so: ");fprintf(fp,"\nHieu phan so: ");
	xuat(sub);
	
	phanso mul=tich(*a,*b);
	printf("\nTich phan so: ");fprintf(fp,"\nTich phan so: ");
	xuat(mul);
	
	phanso div=thuong(*a,*b);
	printf("\nThuong phan so: ");fprintf(fp,"\nThuong phan so: ");
	xuat(div);
	
	
	fclose(fp);
	return 0;
}

int UCLN(int a, int b){
	a=abs(a);
	b=abs(b);
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a;
}

void rutgon(phanso &ps){
	int c=UCLN(ps.tu,ps.mau);
	ps.tu=ps.tu/c;
	ps.mau=ps.mau/c;
}

phanso tong(phanso a,phanso b){
	phanso tong;
	tong.tu=a.tu*b.mau+b.tu*a.mau;
    tong.mau=a.mau*b.mau;
	rutgon(tong);
	return tong;
}

phanso hieu(phanso a,phanso b){
	phanso h;
	h.tu=a.tu*b.mau-b.tu*a.mau;
    h.mau=a.mau*b.mau;
	rutgon(h);
	return h;
}

phanso tich(phanso a,phanso b){
	phanso tich;
	tich.tu=a.tu*b.tu;
	tich.mau=a.mau*b.mau;
	rutgon(tich);
	return tich;
}


phanso thuong(phanso a,phanso b){
	phanso thuong;
	thuong.tu=a.tu*b.mau;
	thuong.mau=a.mau*b.tu;
	rutgon(thuong);
	return thuong;
}