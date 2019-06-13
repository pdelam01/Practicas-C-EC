#include<stdio.h>
#include<stdlib.h>

int main(){

	struct coche{
		float precio;
		char modelo[100];
		int anyo_matriculacion;
	};

	int numCoche=5;
	struct coche *c;

	for(int i=0; i<numCoche;i++){
		printf("Introduzca el modelo del coche %d: ",i+1);
		fgets((c+i)->modelo,100,stdin);

		printf("Introduzca el precio del coche %d: ",i+1);
		scanf("%f",&(c+i)->precio);

		printf("Introduzca el anyo de matriculacion del coche %d: ",i+1);
		scanf("%d",&(c+i)->anyo_matriculacion);
	}
}