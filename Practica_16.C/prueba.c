#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int media(int filas, int col, int matriz[filas][col]);
void inicializa(int filas, int col, int matriz[filas][col]);
void printea(int filas, int col, int matriz[filas][col]);
char sacaletra(int num, char *cadena);


int main(int argc, char *argv[]){
	srand(time(NULL));
	float medias;

	if(argc!=3){
		printf("ERROR! \n");
		int exit=-1;
		return exit;
	}

	int filas= atoi(argv[1]);
	int col = atoi(argv[2]);

	int matriz[filas][col];

	inicializa(filas, col, matriz);
	printea(filas,col,matriz);
	medias=media(filas,col,matriz);
	printf("%f media \n",medias);

	char *cadena;
	cadena=(char*)malloc(sizeof(char)*100);
	int num,aux;
	printf("Introduzca una cadena: ");
	fgets(cadena, 100, stdin);
	printf("Introduzca un numero: ");
	scanf("%d",&num);
	do{
		if(num<1 || num>99){
			printf("Vuelva a introducir otro num \n");
			aux=0;
		}else{
			aux=1;
		}
	}while(aux==0);

	printf("La letra en la posicion %d es '%c'\n",num, sacaletra(num,cadena));

return 0;
}

char sacaletra(int num, char *cadena){
	char salida;
	num --;
	salida = *(cadena+num);

return salida;
}


void inicializa(int filas, int col, int matriz[filas][col]){
	for(int i=0;i<filas;i++){
		for(int j=0;j<col;j++){
			matriz[i][j]=(3)+rand()%(7-3+1);
		}
	}
}

void printea(int filas, int col, int matriz[filas][col]){
	for(int i=0;i<filas;i++){
		for(int j=0;j<col;j++){
			printf(" % d \t",matriz[i][j]);
		}
		printf("\n");
	}
}


int media(int filas, int col, int matriz[filas][col]){
	int suma=0;
	for(int i=0;i<filas;i++){
		for(int j=0;j<col;j++){
			suma=suma+matriz[i][j];
		}
	}
	float media;
	media=(float)suma/(filas*col);
	return (float)media;
}





