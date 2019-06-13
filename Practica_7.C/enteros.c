#include<stdio.h>
#define tam 20
#define Tam 3

void inicio (int vector[tam]){
	int i;
	printf("~Programa calcula cuántos números positivos, negativos y ceros han sido introducidos~\n");
	for (i=0; i<tam; i++){
		printf("Introduzca un número: ");
		//Ha de leer i, no tam, si no lee siempre el 10 (tam).
		scanf("%d",&vector[i]);
	}
}

void enteros (int vector[tam], int vector2[Tam]){
	int i,pos,neg,cero;
	pos=0;
	neg=0;
	cero=0;
	for(int i=0;i<tam;i++){
		if (vector[i]>0){
			pos=pos+1;
		}else{
			if(vector[i]==0){
				cero=cero+1;
			}else{
				if(vector[i]<0){
					neg=neg+1;
				}
			}
		}
	}
	vector2[0]=pos;
	vector2[1]=neg;
	vector2[2]=cero;
}

int main (){
	int vector[tam];
	int vector2[Tam];
	inicio (vector);
	//llamamos a la funcion enteros, un void con dos vectores
	enteros(vector,vector2);
	printf("\nTotal de números enteros positivos es: %d \n",vector2[0]);
	printf("Total de ceros introducidos es: %d \n",vector2[2]);
	printf("Total de números enteros negativos es: %d \n",vector2[1]);
return 0;
}