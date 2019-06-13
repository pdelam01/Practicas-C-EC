#include<stdio.h>
int main (){
	int a,b,i,op,salir;
	printf("Algoritmo que calcula la suma del intervalo de dos números \n");
	do{
	printf("Introduzca el primer número: ");
	scanf("%d",&a);
	printf("Introduzca el segundo número: ");
	scanf("%d",&b);
	if(a>b){
		op=0;
		for(i=a;i>=b;i--){
		op=op+i;
		}
		printf("La suma total del intervalo es: %d \n\n", op);
		salir=1;
	}else{
		printf("Los números introducidos no son válidos! \n\n");
		salir=0;
		}
	}
	while (!salir);
return 0;
}
