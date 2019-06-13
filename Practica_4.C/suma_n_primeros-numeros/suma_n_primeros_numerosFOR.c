#include<stdio.h>
int main (){
	int num,i,suma;
	printf("Algoritmo que calcula la suma de N términos \n");
	printf("Introduzca cuántos números quiere sumar: \n");
	scanf("%d",&num);
	suma=0;
	
	if(num<1){ 
		printf("No se admiten números negativos o el 0 \n");
	}

	else{

		for(i=1;i<=num;i++){
			suma=suma+i;
		}
	printf("La suma total de los números anteriores al introducido más este es: %d \n",suma);
	}
return 0;
}
