#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void printea(int filas, int col, int matriz[filas][col]);
void inicializa (int filas, int col, int matriz[filas][col]);

int main (int argc, char *argv[]){
	srand(time(NULL));

	if(argc!=3){
		printf("ERROR! Ha de introducir 3 elementos como argumentos! \n");
		int exit=-1;
		return exit;
	}

	int filas = atoi(argv[1]);
	int col = atoi(argv[2]);

	int matriz[filas][col];

	if(filas!=col){
		printf("La matriz ha de ser cuadrada! \n");
	}else{
		inicializa(filas, col, matriz);
		printea(filas, col, matriz);
	}
	
return 0;
}

void inicializa (int filas, int col, int matriz[filas][col]){
	int i,j;
	for(i=0;i<filas;i++){
		for(j=0;j<col;j++){
			matriz[i][j]=(5)+rand()%(10-5+1);
			if(i==j){
				matriz[i][j]=1;
			}
			if(i==col-j-1){			//i=col-j-1 --> 0=5-4-1...      (si ponemos -2, los 0 crecen a la izq. Si +0, estos decrecen a la der)
				matriz[i][j]=0;
			}
		}
	}
}


void printea(int filas, int col, int matriz[filas][col]){
	int i,j;
	for(i=0;i<filas;i++){
		for(j=0;j<col;j++){
			printf("%d \t ",matriz[i][j]);
		}
		printf("\n");
	}
}
