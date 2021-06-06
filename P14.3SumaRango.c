/*
	Programa: P14.3SumaRango.c
	Autor: Yurev Illescas
	Objetivo:
	Fecha: 05/04/2019
*/

#include <stdio.h>

int main(){
	
	int eSuma = 0, eNum1, eContador = 2;
	
	printf("Programa que suma el rango de valores entre 2 y el n%cmero \n");
	
	printf("Ingrese el l%cmite de la suma: ", 161);
	scanf("%d", &eNum1);
	
	if (eNum1 > 2){
		
		do{
		
		eSuma += eContador;
		eContador ++;
		
		}while (eContador <= eNum1);
		
	}else{
		
		do{
			
			eSuma += eContador;
			eContador --;
			
		} while (eContador >= eNum1);
		
	}
	
	printf("La suma entre 2 y %d es: %d", eNum1, eSuma);
	
	getchar();
	return 0;	
}


