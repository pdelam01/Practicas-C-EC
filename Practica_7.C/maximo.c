#include<stdio.h>
#include<math.h>
#define tam 10


void inicializa (int vector[tam]){
	int i;
	printf("~Programa imprime el mayor de los 10 números introducidos~ \n");
	for (i=0; i<tam; i++){
		printf("Introduzca un número: ");
		//Ha de leer i, no tam, si no lee siempre el 10 (tam).
		scanf("%d",&vector[i]);
	}
}

int maximo(int vector[tam]){
	int i;
	int max=vector[0];
	//solo hace falta declarar las variables dentro del vector[] (solo max,i,tam...)
	for (i=0; i<tam;i++){
		if (vector[i]>max){
			max=vector[i];
		}
	}
return max;	
}



int main(){
	int vector[tam];
	inicializa (vector);
	int max = maximo (vector);
	printf("\nEl mayor número de los introducidos es: %d \n",max );

return 0;
}






