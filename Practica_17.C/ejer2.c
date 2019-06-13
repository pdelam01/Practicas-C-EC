void funcion (int matriz[100][100], int num1, int num2){
	int t, aux;
	for(t=0; t<100; t++){
		aux=matriz[num1][t];
		matriz[num1][t]=matriz[num2][t];
		matriz[num2][t]=aux;
	}
	return;
}