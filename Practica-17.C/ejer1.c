#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void cuenta(char cad[100], int *vector, char *letras, int num);

int main(){
	int num,*vector,i;
	char c[100], *letras;

	printf("Introduzca una cadena de caracteres: ");
	fgets(c,100,stdin);
	printf("\n");

	do{
		printf("Introduzca cuantas letras quiere contar: ");
		scanf("%d",&num);
		printf("\n");
		if(num<=0)
			printf("Ha de ser un número positivo! \n");
	}while(num<=0);

	letras=(char*)malloc(sizeof(char)*num);
	vector=(int*)malloc(sizeof(int)*num);

	printf("Introduzca %d letras: ",num);
	while(getchar()!='\n');

	for(i=0;i<num;i++){
			scanf("%c",letras+i);
			while(getchar()!='\n');
	}

	cuenta(c,vector,letras, num);
	printf("El numero de letras es: \n");
	for(int i=0; i<num; i++){
		printf("Hay %d letras %c \n", vector[i], letras[i]);
	}

free(letras);
free(vector);
return 0;	
}

void cuenta(char cad[100], int *vector, char *letras, int num){
	int i,j=0;
	for(i=0; i<num;i++){
		j=0;
		vector[i]=0;
		while(cad[j]!='\0'){
			if(cad[j]==letras[i])
				vector[i]++;
			j++;
		}
	}
	return;
}