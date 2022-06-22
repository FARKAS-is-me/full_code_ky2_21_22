#include<stdio.h>
#include<stdlib.h>

#define N 256

FILE *In=fopen("SinhVien.txt","r");
FILE *Out=fopen("SinhVienCopy.txt","w+");

int main(){
	//chuyen tu SinhVien.txt sang SinhVienCopy.txt
	char strIn[N];
	if(In == NULL) {
        fprintf(Out,"file not open!");
        return -1;
    }
 
    while(fgets(strIn, N, In) != NULL) {
        fprintf(Out,"%s",strIn);
    }
    
	//chuyen tu SinhVienCopy.txt ra man hinh
	char strOut[N];
	if(Out == NULL) {
        printf("file not open!");
        return -1;
    }
 
    while(fgets(strOut, N, Out) != NULL) {
        printf("%s",strOut);
    }
 
	
	fclose(In);
	fclose(Out);
	return 0;
}
