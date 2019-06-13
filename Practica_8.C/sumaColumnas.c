#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define fila 3
#define col 6

void inicio (int matriz[fila][col]){
	int i,j;
	printf("~Programa suma columnas y filas de una matriz 3x6~ \n");
	for (i=0; i<fila; i++){
		for(j=0; j<col; j++){
			matriz[i][j]=0;
		}
	}
}

void matrix (int matriz[fila][col]){
	int i,j;
	int numAle,suma;
	suma=0;
	srand(time(NULL));
	for (i=0; i<fila; i++){
		printf("\n");
		for(j=0; j<col; j++){
			matriz[i][j]=1+rand()%10-1+1;
			printf("%d ",matriz[i][j]);
		}
	}
	printf("\n");
}

void sumaColumnas (int matriz[fila][col]){
	int i,j;
	int suma,suma2;	
	for (j=0; j<col; j++){
		suma=0;
		for(i=0;i<fila;i++){
			suma=suma+matriz[i][j];
		}
		printf("\nLa suma total de las columnas es: %d",suma);
	}
	printf("\n\n");
	for (i=0;i<fila;i++){
		suma2=0;
		for(j=0;j<col;j++){
			suma2=suma2+matriz[i][j];
		}printf("La suma total de las filas es: %d \n",suma2);
	}
	printf("\n");
}


int main (){
	int matriz[fila][col];
	inicio(matriz);
	matrix(matriz);
	sumaColumnas(matriz);
	return 0;
}