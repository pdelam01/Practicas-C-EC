#include <stdio.h>
int main()
	{
	float km,millas,yardas,pies;
	printf("Introduzca los km a convertir \n");
	scanf("%f",&km);
	millas=km/1.60;
	yardas=km*100000/91.44;
	pies=km*100000/30.48;
	printf("Millas: %.3f \n", millas);
	printf("Yardas: %.3f \n", yardas);
	printf("Pies: %.3f \n", pies);

return 0;
}
