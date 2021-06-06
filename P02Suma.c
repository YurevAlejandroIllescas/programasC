/*
	Programa:P02Suma.c
	Autor: Yurev Illescas
	Fecha:
	Objetivo: Hacer un algoritmo/programa 
			sume 2 valores enteros y escriba la suma de ambos.
*/

#include <stdio.h>

int main(){
	
	int eNum1, eNum2, eSuma;
	
	printf("Programa que obtiene la suma de dos n%cmeros\n", 163);
	
	printf("Ingrese el primer n%cmero: ", 163);
	scanf("%d", &eNum1);
	
	printf("Ingrese el segundo n%cmero: ", 163);
	scanf("%d", &eNum2);
	
	eSuma = eNum1 + eNum2;
	
	printf("%d + %d = %d", eNum1, eNum2, eSuma);
	
	fflush(stdin);
	getchar();
	return 0;
}
