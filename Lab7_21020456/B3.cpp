#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

char *standardize(char *s){							//cau a
	if(s[0]==' ')
		for(int i = 0; i<strlen(s); i++)
			s[i]=s[i+1];
	return s;
}

char *deleteSpace(char *s){							//cau b
	for(int i=0; i<strlen(s); i++)
		if(s[i]==' '&&s[i+1]==' '){
			for(int j=i; j<strlen(s); j++)
				s[j] = s[j+1];
			i--;
		}
	return s;
}

char *deleteSpaceEnd(char *s){						//cau c
	int end = 0;
	for(int i = strlen(s)-1; i>=0; i--){
		if(s[i]==' ') end++;
		else break;
	}
	s[strlen(s)-end] = '\0';
	return s;
}

char *Upper(char *s) {                                   // cau e
	for(int i=0; i<strlen(s); i++)
		if( (i==0||s[i-1]==' ' )&&s[i]>='a'&&s[i]<='z' )
			s[i] -= 32;
	return s;
}

int main(){
	char s[MAX];
	scanf("%[^\n]s",s);
	printf("Chuoi ban dau la: %s",s);
	
	printf("\nDo dai ban dau cua chuoi la: %d",strlen(s));
	printf("\nChuoi sau khi da duoc chuan hoa: %s",standardize(deleteSpace(deleteSpaceEnd(s))));
	printf("\nDo dai cua chuoi sau khi da duoc chuan hoa: %d",strlen(s));
	printf("\n%s",Upper(s));
	strcat(s," Toi yeu UET");                        
	printf ("\nChuoi sau khi them: %s",s);              //cau f
	
	return 0;
}
