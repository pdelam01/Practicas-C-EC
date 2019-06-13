#include<stdio.h>
int main (){
	int base,exp,i,pot;
	printf("Algoritmo que calcula la potencia de un número  \n");
	printf("Introduzca la base: ");
	scanf("%d",&base);
	printf("Introduzca el exponente: ");
	scanf("%d",&exp);
	pot=1;
	if ((base>=1) && (exp>=1)){
		for (i=1;i<=exp;i++){
			pot=pot*base;
		}
	printf("El resultado de la potencia es: %d \n", pot);
	}
	else {
		printf("La base y el exponente han de ser números naturales! \n");
	}
return 0;
}
