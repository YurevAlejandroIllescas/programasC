/*
	Programa: P15Fibonacci.c
	Autor: Yurev Illescas
	Fecha: 29/03/2019
	Objetivo:Programa que calcula los primeros 20 numeros de la serie fibonacci
*/

#include <stdio.h>

int main(){
	
	int eAnterior = 0, eSiguiente = 1, eSerie, eContador;
	
	printf("Programa que calcula los primeros 20 n%cmeros de la serie fibonacci\n", 163);
	
	
	for (eContador = 3; eContador <= 20; eContador ++){
		
		eSerie = eAnterior + eSerie;
		
		printf ("\n%d", eSerie);
		
		eAnterior = eSiguiente;
		eSiguiente = eSerie;
	}
	
	
	getchar ();
	return 0;
}
