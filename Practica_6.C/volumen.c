#include<stdio.h>
#include<math.h>
#define PI 3.1415
float volumen_cono (float radio, float altura);
float volumen_ortoedro (float lado1, float lado2, float altura1);



float volumen_cono (float radio, float altura){
	float resultado;
	resultado =  PI * pow(radio,2) * altura*1/3;
	return (resultado);
}

float volumen_ortoedro (float lado1, float lado2, float altura1){
	float resultado1=lado1*lado2*altura1;
	return(resultado1);
}


int main (){
	int a;
	float resultado,alt,rat,l1,l2,alt1,resultado1;
	printf("~Programa que calcula el volumen de un cono y de un ortoedro~ \n");
	do{
		printf("Pulse (1) si quiere calcular el volumen de un cono  \n"); 
		printf("Pulse (2) si quiere calcular el volumen de un ortoedro \n");
		printf("Pulse (3) si quiere salir \n");
		scanf("%d",&a);
		if (a==1){
			printf("\nIntroduzca la altura del cono: ");
			scanf("%f",&alt);
			printf("Introduzca el radio del cono: ");
			scanf("%f",&rat);
			resultado=volumen_cono (alt,rat);
			printf("El volumen del cono es: %f \n\n", resultado);
		}else{
			if(a==2){
				printf("\nIntroduzca cuánto mide el lado1: ");
				scanf("%f",&l1);
				printf("Introduzca cuánto mide el lado2: ");
				scanf("%f",&l2);
				printf("Introduzca la altura del ortoedro: ");
				scanf("%f",&alt1);
				resultado1=volumen_ortoedro(l1,l2,alt1);
				printf("El volumen del ortoedro es: %f \n\n", resultado1);
			}else{
				if((a!=1) && (a!=2) && (a!=3)){
					printf("\nERROR! El número introducido no es válido! \n\n");
				}
			}	
		}
	}
	while(a!=3);
	
	if (a==3){
		printf("\nHas elegido salir. Adiós! \n");
	}

return 0;
}