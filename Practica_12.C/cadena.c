#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define tam 100

void quitaespacio(char *cadena, char *cadenasin){
   	int i=0,j=0;
   	//bucle for nos recorra toda la longitud de la cadena introducida
 	for (i=0;i<strlen(cadena);i++){
 		if((cadena[i]!=' ') && (cadena[i]!='\n')){
 			cadenasin[j]=(char)cadena[i];
 			++j;
 		}
 	}
 }




int main (){
	int num;
	printf("Introduzca el numero de caracteres que quiere introducir: ");
	scanf("%d",&num);

	//declaramos cadena y cadenasin, como punteros
	char* cadena;
	char* cadenasin;
	cadena= (char*)malloc(sizeof(char)*num);
	cadenasin= (char*)malloc(sizeof(char)*num);

	printf("Introduzca una cadena de caracteres: ");
	fgets(cadena,num,stdin);
	fgets(cadena,100,stdin);
	quitaespacio(cadena,cadenasin);
	printf("La cadena sin espacios resulta: %s \n",cadenasin);

free(cadenasin);
free(cadena);

return 0;
}




