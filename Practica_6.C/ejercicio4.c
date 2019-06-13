#include<stdio.h>
#include<math.h>
int potencia (int base, int exponente);

int potencia (int base, int exponente){
	int resultado;
	resultado= pow(base,exponente);
	return(resultado);
}


int main(){
	int a,b,resultado;
	printf("~Programa que calcula potencias~ \n");
	do{
		printf("Introduzca la base: ");
		scanf("%d",&a);
		printf("Introduzca el exponente: ");
		scanf("%d",&b);
		if((a>=1) && (b>=1)){
			resultado=potencia(a,b);
			printf("La potencia calculada es: %d \n",resultado);
		}else{
			if((a<0) || (b<0)){
			printf("ERROR! Por favor, introduzca dos números positivos \n\n");
			}else{
				if((a==0) && (b>=1)){
				printf("El resultado de la potencia es: 0 \n");
				}else{
					if((a>=1) && (b==0)){
					printf("El resultado de la potencia es: 1 \n");
					}else{
						if((a==0) && (b==0)){
						printf("INDETERMINACIÓN \n\n");
						}
					}
				}
			}
		}
	}
	while((a<0) || (b<0) || ((a==0) && (b==0)));

return 0;
}