#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


typedef struct {
	short KHAC,khac[8];
	char ipnguon[15],ipdich[15];
	int ip_nguon[32];
	int ip_dich[32];
	char data[1000];
	
	void nhap1Pack(){
		printf("Nhap gia tri Khac: ");
		scanf("%d",&KHAC);
		printf("Nhap Tong chieu dai goi tin: ");
		scanf("%s",&ipnguon);
		printf("Nhap Dia chi nguon,dia chi dich: ");
		scanf("%s",&ipdich);
		printf("Nhap Du lieu: ");
		fflush(stdin);
		gets(data);
	}
	
	void chuyendoi_KHAC() {
		int c=7;
		while(c>=0) {
			khac[c]=KHAC%2;
			KHAC/=2;
			c--;
		}
	}

	void chuyendoi_Nguon() {
		int a[4];
		int j=1,l2=strlen(ipnguon);
		a[0]=atoi(ipnguon);
		for(int i=0;i<l2;i++) {
			if(ipnguon[i]=='.') {
				for(int k=0;k<l2-i-1;k++)
					ipnguon[k]=ipnguon[k+i+1];
				l2 = l2-i-1;
				ipnguon[l2] = '\0';
				a[j++] = atoi(ipnguon);
				i = 0;
			}
		}

		for(int i=0;i<4;i++) {
			int c = 7;
			while(c >= 0) {
				ip_nguon[8*i+c] = a[i]%2;
				a[i] /= 2;
				c--;
			}
		}
	}

	void chuyendoi_Dich() {
		int a[4];
		int j = 1,l2 = strlen(ipdich);
		a[0] = atoi(ipdich);
		for(int i=0;i<l2;i++) {
			if(ipdich[i]=='.') {
				for(int k=0;k<l2-i-1;k++)
					ipdich[k] = ipdich[k+i+1];
				l2 = l2 - i - 1;
				ipdich[l2] = '\0';
				a[j++] = atoi(ipdich);
				i = 0;
			}
		}

		for(int i=0;i<4;i++) {
			int c = 7;
			while(c >= 0) {
				ip_dich[8*i+c] = a[i]%2;
				a[i] /= 2;
				c--;
			}
		}
	}
}IP;

int Error(int x) {
	if(x == 0)
		return 1;
	return 0;
}


int main(){
	IP check;
	check.nhap1Pack();
	check.chuyendoi_KHAC();
	check.chuyendoi_Nguon();
	check.chuyendoi_Dich();
	
	printf("\nIP Nguon: ");
	for(int i=0;i<32;i++){
		if(i%8==0) printf(" ");
		printf("%d",check.ip_nguon[i]);
	}
	
	printf("\nIP Dich: ");
	for(int i=0;i<32;i++) {
		if(i%8==0)printf(" ");
		printf("%d",check.ip_dich[i]);
	}

	int x = sizeof(check.khac)+sizeof(check.ip_dich)+sizeof(check.ip_nguon)+sizeof(check.data)+16;
	printf("\nTong do dai goi tin da gui: %d",x);

	printf("\nThoi gian di tu PC1 den PC2: %lf (s)\n",(double)x/64000);

	check.ip_nguon[0] = Error(check.ip_nguon[0]);
	check.ip_nguon[31] = Error(check.ip_nguon[31]);

	printf("\nIP Nguon bi loi: ");
	for(int i=0;i<32;i++) {
		if(i%8==0) printf(" ");
		printf("%d",check.ip_nguon[i]);
	}

	int pos[4];
	for(int i=0;i<4;i++) {
		int  c = 7;
		pos[i] = 0;
		for(int j=0;j<8;j++) {
			pos[i] += pow(2,c)*check.ip_nguon[8*i+j];
			c--;
		}
	}
	
	printf("\nIP Nguon display: ");
	for(int i = 0; i < 4; i++) {
		if(i<3)
			printf("%d.",pos[i]);
		else printf("%d",pos[i]);
	}
	return 0;
}
