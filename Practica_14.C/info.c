/*

	ficheros:
		FILE *pf
		pf=fopen("archivo.txt","")

		if(pf==NULL){
			printf error
			exit = -1
			return exit
		}

		fclose(pf)

		putc(letra)
		fputc(letra,pf)
		putsc(cadena)
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define lineas 5
#define col 100

//NO UTILIZAMOS EL GUARDAR, SI LO GUARDAMOS CON W DESAPARECE


/*void guardarArchivo(char m[lineas][col], FILE *parchivo){
	parchivo= fopen("info.txt", "w");

	if(parchivo!=NULL){
		fprintf(parchivo, "%d",m[lineas][col]);
	}
	fclose(parchivo);
}
*/


void leerArchivo(char m[lineas][col], FILE *parchivo){
	int i=0;
	char *cadena=NULL;
	size_t tam=0;
	size_t bytes;
	parchivo= fopen("info.txt", "r");

	if(parchivo==NULL){
		fprintf(stderr, "Error al leer el archivo");
		exit(EXIT_FAILURE); 	
	}

	do{
		bytes=getline(&cadena,&tam,parchivo);
		if(bytes!=-1){
			strncpy(m[i],cadena, bytes -1);
			m[i][bytes-1]='\0';
			i++;
		}
	}while(bytes!=-1);
	fclose(parchivo);
}

void buscarletras (char m[lineas][col], char letra){
	int i;
	for(i=0;i<5;i++){
		if(m[i][0]==letra){
			printf("%s \n",m[i]);
		}
	}
}

void imprimir(char m[lineas][col]){
	int i;
	for(i=0;i<5;i++){
		printf("%s \n",m[i]);
	}
}


int main(){
	char m[lineas][col];
	char letra;
	FILE *parchivo;
	printf("Introduzca la letra que desea buscar: ");
	scanf("%c",&letra);
	printf("\n");
	leerArchivo(m,parchivo);
	buscarletras(m,letra);
	printf("\n");
	imprimir(m);
	

return EXIT_SUCCESS;
}