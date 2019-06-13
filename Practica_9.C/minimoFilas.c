#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define filas 8
#define col 5

void inicio (int matriz[filas][col]){
	srand(time(NULL));
	for (int i=0;i<filas;i++){
		for(int j=0;j<col;j++){
			matriz[i][j]=(-10)+rand()%(10-(-10)+1);
		}
	}
}

void printea (int matriz[filas][col]){
	for (int i=0; i<filas; i++){
		for(int j=0; j<col; j++){
			printf("%d \t ",matriz[i][j]);
		}
		printf("\n");
	}
}

void minimoFilas(int matriz[filas][col], int minimo[filas]){
	int j,i;
	for (i=0;i<filas;i++){
		//asumimos asi el primer numero es el minimo
		minimo[i]=matriz[i][0];
		for(j=0; j<col;j++){
			if(matriz[i][j]<minimo[i]){
				minimo[i]=matriz[i][j];
			}
		}
	}
}

int main (){
	int matriz[filas][col];
	int minimo[filas];
	int i;
	inicio(matriz);
	printea(matriz);
	minimoFilas(matriz,minimo);
	for (i=0;i<filas;i++){
				printf("El minimo de la fila %d es: %d \n",i,minimo[i]);
	}
return 0;
}










