/*
	Programa: U3P2.c
	Autor: Yurev Illescas
	Fecha: 29/03/2019
	Objetivo: 
*/

#include <stdio.h>

int main(){
	
	int eContador, eSuma = 0;
	
	printf("Programa que suma los valores entre 5 y 30\n");
	
	for(eContador = 5; eContador <= 30; eContador ++){
		
		eSuma += eContador;
		
	}
	
	printf ("La suma de los valores entre 5 y 30 es: %d", eSuma);
	
	
	getchar ();
	return 0; 
}
