#include<stdio.h>
	int main(){
	int a,op,i;
	printf("Algoritmo que calcula el factorial de un número \n");
	printf("Introduzca un número: ");
	scanf("%d",&a);
	op=1;
	if (a>=1){
		for (i=1;i<=a;i++){
		op=op*i;
		}
	printf("El factorial del número introducido es: %d \n\n",op);
	}else{

		if (a==0){
		printf("El factorial del 0 es: 1 \n\n");

		}else{
		printf("Intoduzca un número positivo! \n\n");
		}
	}
return 0;
}
