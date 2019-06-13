#include<stdio.h>
int main (){
	int num1,num2,i,suma;
	printf("Algoritmo que calcula la multiplicación de N términos, sumando N veces el número dado\n");
	printf("Introduzca el número que quiere multiplicar: ");
	scanf("%d",&num1);
	printf("Introduzca el segundo número a multiplicar: ");
	scanf("%d",&num2);
	suma=0;
	i=num1;
	if((num1>=1) && (num2>=1)){ 
		do {
			suma=suma+i;
			num2--;
		}
		while(num2>=1);
		printf("El resultado final es: %d \n",suma);

	}else{
		if((num1==0) || (num2==0)){
			printf("Los números han de ser distintos de 0 (el producto final es 0) \n");
		
		}else{
			printf("Los números han de ser positivos \n");
		}
	}
return 0;
}
