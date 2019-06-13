#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define fila 5
#define col 5

void inicio (int matriz[fila][col]){
	int i,j;
	printf("~Programa muestra una matriz de 5x5 compuesta por números al azar entre el 3 y el 15~ \n");
	for (i=0; i<fila; i++){
		for(j=0; j<col; j++){
			matriz[i][j]=0;
		}
	}
}

void matrix (int matriz[fila][col]){
	int i,j;
	int numAle;
	srand(time(NULL));
	for (i=0; i<fila; i++){
		printf("\n");
		for(j=0; j<col; j++){
			matriz[i][j]=3+rand()%15-3+1;
			//el resto (numero aleatorio) entre el 3 y el 15
			printf("%d ",matriz[i][j]);
		}
	}
	printf("\n");
}

int main (){
	int matriz[fila][col];
	inicio(matriz);
	matrix(matriz);
	return 0;
}