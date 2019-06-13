#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define tam 5


void inicio (int matriz[tam][tam]){
	int i,j;
	srand(time(NULL));
	for(int i=0;i<=tam;i++){
		for(int j=0;j<tam;j++){
			matriz[i][j]=4+rand()%(9-4+1);
		}
	}
}

void printeamesta (int matriz[tam][tam]){
	for (int i=0; i<tam; i++){
		for(int j=0; j<tam; j++){
			printf("%d \t ",matriz[i][j]);
		}
		printf("\n");
	}
}

int maximo (int matriz[tam][tam]){
	int i,j,big;
	big=0;
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			if(matriz[i][j]>big){
				big=matriz[i][j];
			}
		}
	}
	return big; 
}

int main(){
	int matriz[tam][tam];
	int mayor;
	inicio(matriz);
	printf("La matriz es: \n");
	printeamesta(matriz);
	maximo(matriz);
	mayor = maximo(matriz);
	printf("El mayor de los números es: %d \n",mayor);
return 0;
}

