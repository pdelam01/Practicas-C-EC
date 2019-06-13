#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define tam 26
#define Tam 8

void inicio (int vector[tam]){
	int i;
	for (i=0; i<tam; i++){
		vector[i]='a'+i;
	}
}

int main (){
	srand(time(NULL));
	int vector[tam];
	char vector2[Tam];
	int numAle;
	vector2[Tam]='\0';
	for (int i=0; i<Tam; i++){
		numAle= rand()%(26);
		vector2[i]='a'+numAle;
	}
printf("~Programa obtiene contraseñas de 8 letras al azar~\n");
printf("\nLa contraseña es: %s \n",vector2);	
return 0;
}

