#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE *In1=fopen("Input1.txt","r");
FILE *In2=fopen("Input2.txt","r");
FILE *Out=fopen("Output.txt","w");

int main(){
	int matrixA[9];
	for(int i=0;i<9;i++)
		fscanf(In1,"%d",&matrixA[i]);

	for(int i=0;i<9;i++){
		if(i%3==2) fprintf(Out,"%d\n",matrixA[i]);
		else fprintf(Out,"%d ",matrixA[i]);
	}
		
		
		
	fprintf(Out,"\n");
	int matrixB[14];
	for(int i=0;i<14;i++)
		fscanf(In2,"%d",&matrixB[i]);

	for(int i=2;i<14;i++){
		if(i%matrixB[1]==(matrixB[0]-2)) fprintf(Out,"%d\n",matrixB[i]);
		else fprintf(Out,"%d ",matrixB[i]);
	}

	
	fclose(In1);
	fclose(In2);
	fclose(Out);
	return 0;
}
