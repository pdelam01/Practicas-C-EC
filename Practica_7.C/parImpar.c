#include<stdio.h>
#define tam 15
#define Tam 2

void inicio (int vector[tam]){
	int i;
	printf("~Programa calcula cuántos números pares e impares han sido introducidos~\n");
	for (i=0; i<tam; i++){
		printf("Introduzca un número: ");
		//Ha de leer i, no tam, si no lee siempre el 10 (tam).
		scanf("%d",&vector[i]);
	}
}

void parImpar (int vector[tam], int vector2[Tam]){
	int i,impar,par;
	par=0;
	impar=0;
	for(int i=0;i<tam;i++){
		if (vector[i]%2==0){
			par=par+1;
		}else{
			impar=impar+1;
		}
	}
	vector2[0]=par;
	vector2[1]=impar;
}


int main(){
	int vector[tam];
	int vector2[Tam];
	inicio(vector);
	parImpar (vector,vector2);
	printf("\nEl total de números pares introducidos es: %d \n",vector2[0]);
	printf("El total de números impares introducidos es: %d \n",vector2[1]);
return 0;
}