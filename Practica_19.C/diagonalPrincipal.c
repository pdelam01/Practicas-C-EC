
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void printea (int filas, int col, int matriz[filas][col]);
void inicializa (int filas, int col, int matriz[filas][col]);

int main(int argc, char *argv[]){
	srand(time(NULL));

	if(argc!=3){
		printf("ERROR! Se han de introducir 3 elementos como argumento! \n");
		int exit=-1;
		return exit;
	}

	int filas= atoi (argv[1]);
	int col= atoi (argv[2]);

	int matriz[filas][col];

	inicializa(filas, col, matriz);
	printea(filas,col, matriz);

return 0;
}

void inicializa (int filas, int col, int matriz[filas][col]){
	int i,j;
	for(i=0;i<filas;i++){
		for(j=0;j<col;j++){
			matriz[i][j]=(5)+rand()%(10-5+1);
			if(i==j){
				matriz[i][j]=0;
			}
		}
	}
}

void printea (int filas, int col, int matriz[filas][col]){
	int i,j;
	for(i=0;i<filas;i++){
		for(j=0;j<col;j++){
			printf("%d \t ",matriz[i][j]);
		}
		printf("\n");
	}
}
