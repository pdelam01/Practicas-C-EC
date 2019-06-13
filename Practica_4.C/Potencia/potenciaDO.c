#include<stdio.h>
int main (){
	printf("Programa que calcula potencias de un número \n");
	int base,exp,pot;
	printf("Introduzca la base: ");
	scanf("%d",&base);
	printf("Introduzca el exponente: ");
	scanf("%d",&exp);
	pot=1;
	if ((base>=1) && (exp>=1)){
		do{
			pot=pot*exp;
			exp--;
		}
		while (exp>=1);
		printf("El resultado de la potencia introducida es: %d \n", pot);
	}else{
		printf("Debe introducir dos números positivos, pruebe otra vez de nuevo \n");
	}
return 0;
}
	
