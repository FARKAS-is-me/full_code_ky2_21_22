#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void nhap(char *s){
	printf("nhap chuoi: ");
	fgets(s,sizeof(s),stdin);
}

// ham bo dau xuong dong o cuoi 
void chuanHoa(char *s) {
	int l = strlen(s);
	s[l-1] = '\0'; 
} 

int ktdoixung(char *s) {
	int l = strlen(s);
	for (int i = 0; i < l-1; i++) {
		if (s[i] != s[l-2-i]) {
			return 0; 
		}
	} 
	return 1; 
} 

void inKiTu(char *s, char c) {
	int dem = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == c) {
			dem ++; 
		} 
	} 
	if (dem == 0) {
		printf("Khong co ki tu c"); 
	}  else printf("Ki tu c xuat hien %d lan", dem); 
} 

int main() {
	char s[1000];
	nhap(s);
	chuanHoa(s); 
	printf("%s\n", s); 
	
	// kiem tra doi xung 
    if ( ktdoixung(s) == 1) {
    	printf("chuoi doi xung");
	} else printf("chuoi khong doi xung");
	
	// tim ki tu trong chuoi 
	char c;
	printf("\nNhap ki tu c:");
	scanf("%c", &c); 
	inKiTu(s, c); 
	
	// cau c
	
	// loi kieu 1
	printf("\nIn ra loi kieu 1:\n");
	for (int i = strlen(s)-1; i >= 0; i--) {
		printf("%c", s[i]); 
	} 
	
	// loi kieu 2 
	printf("\nIn ra loi kieu 2:\n");
	int l1 = strlen(s) - 1;
	int l2 = l1;
	while(l1 >= 0) {
		while(s[l1-1] != ' ' && l1 != 0) {
			l1 --; 
		} 
		for (int i = l1; i <= l2; i++) {
			printf("%c", s[i]); 
		} 
		printf(" ");
		l1 -= 2;
		l2 = l1; 
	} 
	
	// tinh thoi gian chuyen bit
	printf("\nThoi gian chuyen file: %f", (float) (strlen(s)*sizeof(s[0])) / 32000);
    return 0;
}

