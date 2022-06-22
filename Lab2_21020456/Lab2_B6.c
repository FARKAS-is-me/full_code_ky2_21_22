#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
float random( float min, float max )
{
    float scale = rand() / (float) RAND_MAX; 
    return min + scale * ( max - min ); 
}
int main(){
	int a,b;
	scanf("%d", &a);
	scanf("%d", &b);
	srand((int)time(0));
	float x = random(a,b);
	int luaChon;
	do{
		printf("\n1. Lam tron mot chu so sau dau phay.");
		printf("\n2. Lam tron hai chu so sau dau phay.");
		printf("\n3. In ket qua duoi dang dau phay dong co so mu.\n");
		printf("\nNhap lua chon cua ban: ");scanf("%d", &luaChon);
		switch(luaChon){
			case 1: {
				printf("So lam tron: %0.2f", round(x * 10) / 10);
				break;
			}
			case 2: {
				printf("So lam tron: %0.3f", round(x * 100) / 100);
				break;
			}
			case 3:{
				printf("ket qua: %e", x/1000000);
				break;
			}
	    }
	} while(luaChon != 0);
	return 0;
}
