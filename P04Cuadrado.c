/*
	Programa: P04Cuadrado
	Autor: Yurev Illescas
	Fecha:
	Objetivo: Programa que eleba al cuadrado un número dado por el usuario
*/

#include <stdio.h>

int main(){

	int eNum, eCuad;
	
	printf("Programa que calcula el cuadrado de un n%cmero entero\n", 163);	
	
	printf("Ingrese un n%cmero sin decimales: ", 163);
	scanf("%d", &eNum);
	
	eCuad = eNum * eNum;
	
	printf("El cuadrado de: %d es: %d", eNum, eCuad);
	
	fflush(stdin);
	getchar();
	return 0;
}
