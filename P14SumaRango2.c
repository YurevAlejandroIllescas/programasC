/*
	Programa: P14.1SumaRango.c
	Autor: Yurev Illescas
	Objetivo:
	Fecha: 05/04/2019
*/

#include <stdio.h>

int main(){
	
	int eSuma = 0, eNumero, eContador = 2;
	
	printf("Programa que sume los valores del 2 al n%cmero ingresado\n", 163);
	
	printf("Ingrese el l%cmite del rango: ", 161);
	scanf("%d", &eNumero);
	
	
	if (eNumero > 2){
		
		while (eContador <= eNumero){
		
			eSuma += eContador;
			eContador ++;
		}
	}else{
		
		while (eContador >= eNumero){
			
		eSuma += eContador;
		eContador --;
		
		}
	}
	
	printf ("La suma entre 2 y %d es: %d", eNumero, eSuma);
	
	getchar();
	return 0;
}
