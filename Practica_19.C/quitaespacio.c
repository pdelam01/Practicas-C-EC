#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void quitaespacios(char *cadena, char *cadenasin);


int main(){
	char *cadena;
	char *cadenasin;
	cadena=(char*)malloc(sizeof(char)*100);
	cadenasin=(char*)malloc(sizeof(char)*100);

	printf("Introduzca una cadena de caracteres: ");
	fgets(cadena,100,stdin);

	quitaespacios(cadena,cadenasin);
	printf("La cadena sin espacios resulta: %s \n",cadenasin);
}


void quitaespacios(char *cadena, char *cadenasin){
	int i,j;
	for(i=0; i<strlen(cadena); i++){
		if((cadena[i]!=' ') && (cadena[i]!='\n')){
			cadenasin[j]=(char)cadena[i];
			++j;
		}
	}
}


