/* struct persona {
	int edad
	float nota
	(definimos tipos de datos)

	struct persona p (variable de tipo persona) // o meter un vector: struct persona p[10]  // punteros *p
	scanf("%d",&p.edad) (y demas para los demas datos metidos) // p[i].edad         // p->edad
}
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define tam 9

struct Punto{
	char coordenada[tam];	
};

struct Triangulo{
	int puntoA;
	int puntoB;
	int puntoC;
	float area;
	float perimetro;
};




int main(int argc, char *argv[]){
	if(argc<1){
			printf("ERROR*/**//*/ \n");
			int exit=-1;
			return exit;
		}

	struct Punto coordenadas[9];
	struct Triangulo puntos[3];

	//leemos los datos
	int i=0,j;
	for(i=0;i<9;i++){
		printf("La coordena es: %s \n",(i+j));
		gets(coordenadas[i].coordenada[i]);
		i++;
	}


return 0;
}