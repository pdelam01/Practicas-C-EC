#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define tam 100


void invierte (char *cadenaOrigen, char *cadenaDestino){
	char tamanyo=strlen(cadenaOrigen);
	int k= tamanyo-1;
	for(int i=0; i<tamanyo; i++){
		cadenaDestino[i]=(char)cadenaOrigen[k];
		k--;
	}
}




int main(){
	char *cadenaOrigen;
	char *cadenaDestino;

	cadenaOrigen=(char*)malloc(sizeof(char)*tam);
	cadenaDestino=(char*)malloc(sizeof(char)*tam);

	printf("Introduzca una cadena de caracteres: ");
	fgets(cadenaOrigen,tam,stdin);

	invierte(cadenaOrigen,cadenaDestino);
	printf("La cadena invertida resulta: %s \n", cadenaDestino);

free(cadenaOrigen);
free(cadenaDestino);
return 0;
}