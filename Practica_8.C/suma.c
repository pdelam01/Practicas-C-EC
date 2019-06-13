#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define fila 6
#define col 6

void inicio (int matriz[fila][col]){
	int i,j;
	printf("~Programa suma el total de todos los elentos de una matriz 6x6~ \n");
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
			//el resto (numero aleatorio) entre el 3 y el 15
			printf("%d ",matriz[i][j]);
		}
	}
	printf("\n");
	for (i=0; i<fila; i++){
		for(j=0; j<col; j++){
			suma=suma+matriz[i][j];
		}
	}
	printf("\nLa suma total es: %d\n",suma);
}


int main (){
	int matriz[fila][col];
	inicio(matriz);
	matrix(matriz);
	return 0;
}
















