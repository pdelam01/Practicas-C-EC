#include<stdio.h>
#include <stdlib.h>
#include<time.h>

void inicializamatriz(int filas, int col, int *mat){
	int i,j;
	srand(time(NULL));
	for (i=0; i<filas; i++){
		for(j=0; j<col; j++){
			*(mat+i*filas+j)=1+rand()%10-1+1;
		}
	}
}

void printea(int filas, int col, int *mat){
	for (int i=0; i<filas; i++){
		for(int j=0; j<col; j++){
			printf("%d \t ",*(mat+i*filas+j));
		}
		printf("\n");
	}
}

int calculaminimo(int filas, int col, int *mat){
	int i,j;
	int min =3897;
	for(i=0;i<filas;i++){
		for(j=0;j<col;j++){
			if(*(mat+i*filas+j)<min){
				min=*(mat+i*filas+j);
			}
		}
	}
	return min;
}



int main(){
	int filas,col,*mat,minimo;
	printf("Introduzca número de filas que desea: ");
	scanf("%d",&filas);
	printf("Introduzca el número de columnas que desea: ");
	scanf("%d",&col);
	mat=(int*)malloc(sizeof(int)*filas*col);
	inicializamatriz(filas,col,mat);
	printf("La matriz generada es: \n");
	printea(filas,col,mat);
	calculaminimo(filas,col,mat);
	minimo=calculaminimo(filas,col,mat);
	printf("El menor numero es %d \n",minimo);
return 0;
free(mat);
}

















