#include<stdio.h>
#include <stdlib.h>

/*Punteros--> memoria dinamica
  int p*
  p= (int *)malloc (numero elemntos que reserve)
  					     (num*sizeof(int))
  *(p+i)--> como hacemos con vector[i]

  Con matrices:
  	p=(int*)malloc(sizeof(int)*(m*n))
  	*(matriz+i*m+j)
  	scanf(..., &*(matriz*i))


  al final del programa free(v)*/

int calculamaximo(int *p, int cantidad){
	int i,big;
	big=0;
	for(i=0;i<cantidad;i++){
		if(*(p+i)>big){
			big=*(p+i);
		}
	}
	return big;
}



int main(){
	int cantidad,*p,mayor;
	printf("Introduzca la cantidad de números que quiere analizar: ");
	scanf("%d",&cantidad);
	p=(int*)malloc(cantidad*(sizeof(int)));
	for(int i=0;i<cantidad;i++){
		printf("Introduzca un número: ");
		scanf("%d",&*(p+i));
	}
	calculamaximo(p,cantidad);
	mayor=calculamaximo(p,cantidad);
	printf("El mayor numero es: %d \n",mayor);
return 0;
free(p);
}

/*Si hacemos void en Calculamaximo, se printea ahi directamente printf(,big)
	Si hacemos un int, return del ultimo valor y llamamos mayor al calculamaximo, que toma el valor del return (big)

