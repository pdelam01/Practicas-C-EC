#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define tam 3


//AQUI INICIAMOS LA FUNCION DIRECTAMENTE, CON LOS RANDOM
void inicio (int matriz[tam][tam]){
	int i,j;
	int numAle;
	srand(time(NULL));
	for(int i=0;i<=tam;i++){
		for(int j=0;j<tam;j++){
			matriz[i][j]=1+rand()%10-1+1;
		}
	}
}


//AQUI PRINTEAMOS LA FUNCION YA INICIALIZADA ARRIBA
void printeamesta (int matriz[tam][tam]){
	for (int i=0; i<tam; i++){
		for(int j=0; j<tam; j++){
			printf("%d \t ",matriz[i][j]);
		}
		printf("\n");
	}
}

void  multiplicacion (int matrizA[tam][tam], int matrizB[tam][tam], int matrizC[tam][tam]){
	for (int i=0; i<tam;i++){
		for (int j=0;j<tam;j++){
			matrizC[i][j]=0;
			for (int k=0;k<tam;k++){
				matrizC[i][j]=(matrizC[i][j] + (matrizB[i][k] * matrizA[k][j]));
			}
		}
	}
}


int main (){
	int matrizA[tam][tam];
	int matrizB[tam][tam];
	int matrizC[tam][tam];
	inicio(matrizA);
	inicio(matrizB);
	printf("\nLa matriz A resulta: \n\n");
	printeamesta(matrizA);
	printf("\n");
	printf("\nLa matriz B resulta: \n\n");
	printeamesta(matrizB);
	printf("\n");
	printf("\nLa matriz C, que resulta de la multiplicación entre las dos anteriores es: \n\n");
	multiplicacion(matrizA,matrizB,matrizC);
	printeamesta(matrizC);
return 0;
}
