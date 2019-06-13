//como argumento vector y su tamanyo y lo inicializa con enteros aleatorios no repetidos entre 1-50. No devuleve nada

#include<stdio.h>
#include<stdlib.h>
#include <time.h>


void inicializa(int *vector,int tam){
	int numAlea,repetido;
	for(int i=0;i<tam;i++){
		numAlea=1+rand()%50;
		repetido=0;
		for(int j=0;j<i;j++){
			if(vector[j]==numAlea){
				repetido=1;
				j=i;
			}
		}
		if(repetido==0){
			vector[i]=numAlea;
		}else{
			i--;
		}
	}
}

int main(){

srand(time(NULL));
	int tam;
	int *vector;
	printf("Introduzca un tamanyo: ");
	scanf("%d",&tam);
	vector=(int*)malloc(sizeof(int)*tam);
	inicializa(vector,tam);

return 0;
}