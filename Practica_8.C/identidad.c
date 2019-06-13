#include<stdio.h>
#include<stdlib.h>
#define fila 9
#define col 9

void inicio (int matriz[fila][col]){
	int i,j;
	printf("~Programa muestra la matriz identidad 9x9~ \n");
	for (i=0; i<fila; i++){
		for(j=0; j<col; j++){
			matriz[i][j]=0;
		}
	}
}

void matrix (int matriz[fila][col]){
	int i,j;
	for (i=0; i<fila; i++){
		printf("\n");
		for(j=0; j<col; j++){
			if(i==j){
				matriz[i][j]=1;
				printf("%d ",matriz[i][j]);
			}else{
				matriz[i][j]=0;
				printf("%d ",matriz[i][j]);
			}
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














