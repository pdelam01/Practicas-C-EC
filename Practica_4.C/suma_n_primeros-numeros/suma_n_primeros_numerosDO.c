#include<stdio.h>
int main (){
	int suma,num,i;
	printf("Algoritmo que se encarga de sumar los N números anteriores al introducido \n");
	printf("Introduzca un número por favor: \n");
	scanf("%d",&num);
	suma=0;
	i=1;
	if(num>=1){
		do{
			suma=suma+i;
			i=i+1;
		}
//i=i+1 o i++ o i+=1
		while(i<=num);
	printf("La suma total es: %d \n", suma);
	}
	else{
		printf("No se pueden sumar números negativos, inténtelo otra vez \n"); 
	}
return 0;
}
		
		
