#include<stdio.h>
#include<math.h>
void pares (int num1, int num2);


void pares (int num1, int num2){
	int i,resultado;
	for(i=num1;i<=num2;i++){
		resultado= i%2;
		if(resultado==0){ 
			printf("\nUno de los números pares del intervalo es el: %d \n",i);
		}
	}
}

int main (){
int a,b;
printf("~Programa que muestra los números pares dentro de un intervalo dado~ \n");
do{
	printf("\nIntroduzca el primer número del intervalo: ");
	scanf("%d",&a);
	printf("Introduzca el segundo número del intervalo: ");
	scanf("%d",&b);
	if (a>b){
		printf("ERROR! El primer número ha de ser menor que el segundo \n");
	}else{
		if(a<b){
			pares(a,b);
		}
	}
} 
while (a>=b);

return 0;
}