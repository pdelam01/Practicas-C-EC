#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void inicio (int filas, int col, int *mat){
	int i,j;
	srand(time(NULL));
	for (i=0;i<filas;i++){
		for (j=0;j<col;j++){
			*(mat+i*filas+j)=(-10)+rand()%(10-(-10)+1);
		}
	}
}

void printea (int filas, int col, int *mat){
	int i,j;
	for (i=0; i<filas; i++){
		for(j=0; j<col; j++){
			printf("%d \t ",*(mat+i*filas+j));
		}
		printf("\n");
	}
}

void minimoFilas(int filas, int col, int *mat, int *p){
	int j,i;
	for (i=0;i<filas;i++){
		*(p+i)=*(mat+i*filas+0);
		for(j=0; j<col;j++){
			if(*(p+i)>*(mat+i*filas+j)){
				*(p+i)=*(mat+i*filas+j);
			}
		}
	}
}


int main(){
	int filas, col, *mat,*p,i;
	printf("Introduzca el número de filas que desea: ");
	scanf("%d",&filas);
	printf("Introduzca el número de columnas que desea: ");
	scanf("%d",&col);
	mat=(int*)malloc(sizeof(int)*filas*col);
	inicio(filas,col,mat);
	printea(filas,col,mat);
	minimoFilas(filas,col,mat,p);
	for(i=0;i<filas;i++){
		printf("El menor de la fila %d es: %d \n",i,*(p+i));
	}
return 0;
free(mat);
free(p);
}

