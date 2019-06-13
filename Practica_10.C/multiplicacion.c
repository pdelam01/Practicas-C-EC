#include<stdio.h>
#include <stdlib.h>
#include<time.h>

void inicio(int filas, int col, int *mat){
	int i,j;
	for(i=0;i<filas;i++){
		for(j=0;j<col;j++){
			*(mat+i*filas+j)=1+rand()%(10-1+1);
		}
	}
}


void printea (int filas, int col, int *mat){
	int i,j;
	for (i=0; i<filas; i++){
		for(j=0; j<col; j++){
			printf("%d \t ",*(mat+i*filas+j));
		}
		printf("\n");
	}
}

void  multiplicacion (int filas, int col, int *matA, int *matB, int *matC){
	int i,j,k;
	for (i=0; i<filas;i++){
		for (j=0;j<col;j++){
			*(matC+i*filas+j)=0;
			for (k=0;k<filas;k++){
				*(matC+i*filas+j)=(*(matC+i*filas+j) + ((*(matA+i*filas+k)) * (*(matB+k*filas+j))));
			}
		}
	}
}

int main(){
	srand(time(NULL));
	int filas, col, *mat,*matA,*matB,*matC;
	printf("Introduzca el número de filas que desea: ");
	scanf("%d",&filas);
	printf("Introduzca el número de columnas que desea: ");
	scanf("%d",&col);
	matA=(int*)malloc(sizeof(int)*filas*col);
	matB=(int*)malloc(sizeof(int)*filas*col);
	matC=(int*)malloc(sizeof(int)*filas*col);

	inicio(filas,col,matA);
	inicio(filas,col,matB);

	printf("\nLa matriz A resulta: \n");
	printea(filas,col,matA);
	printf("\nLa matriz B resulta: \n");
	printea(filas,col,matB);

	printf("\nLa matriz C, que resulta de la multiplicación entre las dos anteriores es: \n");
	multiplicacion(filas,col,matA,matB,matC);
	printea(filas,col,matC);

return 0;
free(mat);
free(matA);
free(matB);
free(matC);
}



























