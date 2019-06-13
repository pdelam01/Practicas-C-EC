#include<stdio.h>
#include<math.h>
#define tam 15
float media (int vector[tam]);
float varianza (int vector[tam]);
float desviaciontipica (int vector[tam]);


void inicio (int vector[tam]){
	int i;
	printf("~Programa que calcula la varianza, media aritmética y desviación típica de los 15 términos introducidos~ \n");
	for (i=0; i<tam; i++){
		printf("Introduzca un valor: ");
		scanf("%d",&vector[i]);
	}
}


float varianza (int vector[tam]){
	int i;
	float resta,pot,suma,div;
	suma=0;
	for (i=0; i<tam; i++){
		resta=(float)vector[i]-media(vector);
		pot= (float)pow(resta,2);
		suma=(float)suma+pot;
	}
div=(float)suma/tam;
return div;
}



float media (int vector[tam]){
	int suma,i;
	float med;
	suma=0;
	for (i=0; i<tam; i++){
		//se hace la media del vector, no podemos hacer de i solo, por que hacemos asi la media de 0-14 (7)
		suma=suma+vector[i];
	}
med=(float)suma/tam;
return med;
}


float desviaciontipica(int vector [tam]){
	float resultado;
	resultado=(float) sqrt (varianza(vector));
	return resultado;
}


int main(){
	int vector[tam];
	//inicio (vector): llamamos a la función inicio, que es un void.
	inicio (vector);
	float med = media(vector);
	printf("\nLa media es: %f \n",med);
	float div = varianza(vector);
	printf("La varianza es: %f \n",div);
	float resultado = desviaciontipica(vector);
	printf("La desviación típica es: %f\n",resultado);

return 0;	
}
