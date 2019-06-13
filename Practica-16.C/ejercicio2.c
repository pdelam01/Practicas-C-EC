#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define tam 100


void inicializa (int filas, int col, int *mat){
	int i,j;
	srand(time(NULL));
	for(i=0;i<filas;i++){
		for(j=0;j<col;j++){
			*(mat+i*filas+j)=(3)+rand()%(7-3+1);
		}
	}
}

float media(int filas, int col, int *mat){
	int i,j;
	int suma=0;
	float media;
	int aux;
	for (i=0;i<filas;i++){
		for (j=0;j<col;j++){
			aux=*(mat+i*filas+j);
			suma=suma + aux;
		}
	}

	printf("La suma es: %d \n", suma);
	media=(float)suma/(filas*col);
	
	return media;
}

char sacaletra (int argc, char *argv[]){
	char frase[tam];
	printf("Introduzca una cadena de caracteres: ");
	fgets(frase,tam,stdin);

	int pos= atoi(argv[2]);
	printf("La posicion que ocupa la letra es: %c \n",argv[1][pos-1] );
}



int main(int argc, char *argv[]){
	int filas, col, *mat;
	float mediaMat;

	int arg1 = atoi(argv[1]);
	int arg2 = atoi(argv[2]);
	
	if(argc!=3){
		printf("ERROR*/**//*/ \n");
		int exit=-1;
		return exit;
	}else{
		if(arg1>0 && arg2>0){
			sacaletra(argc, argv);
		}
	}

	printf("Introduzca el numero de filas que desea: ");
	scanf("%d",&filas);
	printf("Introduzca el numero de columnas que desea: ");
	scanf("%d",&col);
	mat=(int*)malloc(sizeof(int)*filas*col);

	inicializa(filas,col,mat);

	mediaMat=media(filas,col,mat);
	printf("La media es: %f \n",mediaMat);

return 0;
}









