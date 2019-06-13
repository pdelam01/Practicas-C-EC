#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define tam 11
int cubo(int vector[tam]);

int main(){
	int vector[tam];
	cubo(vector);
return 0;
}

int cubo(int vector[tam]){
	printf("Numeros impares: \n");
	for(int i=0;i<tam;i++){
		vector[i]=pow(i,3);
		if(vector[i]%2!=0){
			printf("%d \n",vector[i]);
		}
	}
}