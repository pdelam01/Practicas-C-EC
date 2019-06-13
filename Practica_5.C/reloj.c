#include<stdio.h>
int main (){
	int seg,min,hora,dias;
	printf("Algoritmo calcula a partir, de una cantidad de segundos, los días, horas, minutos y segundos correspondientes \n");
	printf("Introduzca una cantidad de segundos determinada: ");
	scanf("%d",&seg);
	dias= seg/86400;
	seg= seg%86400;
	hora= seg/3600;
	seg= seg%3600;
	min= seg/60;
	seg= seg%60;
	
	printf("Días: %d  Horas: %d  Minutos: %d  Segundos: %d \n", dias, hora, min, seg);
return 0;
}  
	
	
	
