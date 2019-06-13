/*
int num[10]
char frase[10]
char*frase

scanf("%s",frase)----- no incluye espacios
fgets(frase,100,stdin)--------incluye espacios (100 es el tamanyo max que puede haber)

strcmp(cad1,cad2)---- =0, <0, >0 (no se incluye la longitud), =, 1<2, 1>2.
strcpy(cad1,cad2)----- copia cad1 en cad2 (para if usar el anterior)
strcat(cad1,cad2)----- concatenar
strlen(cad1)----- longitud de la cadenada (casa--5, se incluye el \0)

liberar buffer del teclado:
	while(letra=getchar()!="\n")
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define tam 100

int main(){
	char frase[tam];
	printf("Introduzca una cadena de caracteres: ");
	fgets(frase,tam,stdin);
	//Pedimos la longitud de la cadena escrita
	printf("La longitud de la cadena es: %ld \n",strlen(frase));

	//Comparamos la cadena introducida con la cadena 'compara'
	if((strcmp(frase,"compara\n"))==0){
		printf("Ambas cadenas tienen la misma longitud: %d \n",strcmp(frase,"compara\n"));
	}else{
		if((strcmp(frase,"compara\n"))<0){
			printf("La cadena introducida es menor que la cadena 'compara' \n");
		}else{
			printf("La cadena introducida es mayor que la cadena 'compara' \n");
		}
	}

	//Concatenacion
	strcat(frase," añadida");
	for(int i=0;i<strlen(frase);i++){
		if(frase[i]!='\n'){
			printf("%c",frase[i]);
		}

	}
	printf("\n");
return 0;
}
