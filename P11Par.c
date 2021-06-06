/*
	Programa: P11Par.c
	Autor: Yurev Illescas
	Fecha: 29/03/2019
	Objetivo:
*/

#include <stdio.h>

int main(){
	
	int eNum;
	
	printf("Bienvenido\n");
	printf("Programa que recibe un n%cmero entero positivo o negativo\n ", 163);
	
	printf("Ingrese un n%cmero: ", 163);
	scanf("%d", &eNum);
	
	if(eNum % 2 == 0){
		
		printf ("\n%d es un n%cmero par", eNum, 163);
		
	}else{
		
		printf("\n%d es un n%cmero impar", eNum, 163);
	}
	
	printf("\nHasta luego");
	
	
	getchar ();
	return 0;
}
