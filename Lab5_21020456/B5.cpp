#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);

	printf("\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	int b[n][n]; // ma tran chuyen vi
	for(int  i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			b[i][j] = a[j][i];		
	printf("\n");
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
	
	int dem = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] == b[i][j])
				dem++;
		}
	}
	if(dem == n*n) printf("Ma tran doi xung");
	else printf("Ma tran khong doi xung");
	
	int tongCheochinh = 0, tongCheophu = 0;
	for(int i = 0; i < n; i++) {
		tongCheochinh += a[i][i];
		tongCheophu += a[i][n-1-i];
	}
	printf("\nTong cheo chinh: %d", tongCheochinh);
	printf("\nTong cheo phu: %d", tongCheophu);
	
	return 0;
}
