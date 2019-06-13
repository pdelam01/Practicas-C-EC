#include<stdio.h>
#include<stdlib.h>
#define tam 11

void fibonacciPares (int vector[tam]){
	int i;
	vector[1]=1;
	vector[2]=1;
	printf("\nNumeros pares: ");
	for(i=3;i<tam;i++){
		vector[i]=vector[i-1]+vector[i-2];
		if(vector[i]%2==0){
			printf("%d ",vector[i]);
		}
	}
	printf("\n");
}

void fibonacciSucesion(int vector[tam]){
	int i;
	vector[1]=1;
	vector[2]=1;
	printf("La sucesion de Fibonacci es: %d",vector[1]);
	printf(" %d ",vector[2]);
	for(i=3;i<tam;i++){
		vector[i]=vector[i-1]+vector[i-2];
		printf("%d ",vector[i]);
	}
	printf("...");
}

int main(){
	int vector[tam];
	fibonacciSucesion(vector);
	fibonacciPares(vector);

return 0;
}












