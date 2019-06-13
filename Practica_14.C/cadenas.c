/*
	argumentos lineas de comandos: 
		int main( int argc, char *argv[])
		argv[0]="suma"
		[]
		[]
		if(argc<3){
			printf("exit");
			exit=-1;
			return exit;
		}


	#include <stdlib.h>
		int num atoi(argv)

	if(strstr(frase , argv[0])==NULL
		no contenida
	else
		contenida

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define tam 100


int main(int argc, char *argv[]){

	if(argc<3){
			printf("ERROR*/**//*/ \n");
			int exit=-1;
			return exit;
		}

	char frase[tam];
	printf("Introduzca una cadena de caracteres: ");
	fgets(frase,tam,stdin);
	//imprimimos longitud
	printf("La longitud de la cadena es: %ld \n",strlen(frase));

	//concatenamos la cadena
	strcat(frase," Cadena añadida");
	for(int i=0;i<strlen(frase);i++){
		if(frase[i]!='\n'){
			printf("%c",frase[i]);
		}
	}
	printf("\n");

	

	//comprobamos si el argv[0] está contenido en la cadena introducida
	//busca una subcadena dentro de una cadena
	if(strstr(frase, argv[1])==NULL){
		printf("La cadena introducida no está contenida en: '%s' \n",frase);
	}else{
		printf("La cadena introducida está contenida en: '%s' \n",frase);
	}

	//
	int pos= atoi(argv[2]);
	printf("La posicion que ocupa la letra es: %c \n",argv[1][pos-1] );


return 0;
}


