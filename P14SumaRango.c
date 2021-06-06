/*
	Programa: P14SumaRango.c
	Autor: Yurev Illescas
	Objetivo:
	Fecha: 05/04/2019
*/

#include <stdio.h>

int main(){
	
	int eSuma = 0, eContador, eNumero;
	
	printf("Ingrese el limite del rango");
	scanf("%d", &eSuma);
	
	if (eNumero > 2){
		
		for (eContador == 2; eContador >= eNumero; eContador ++){
			
			eSuma += eContador;
			
		}
		
	}else{
		
		for (eContador == 2; eContador >= eNumero; eContador ++){
			
			eSuma -= eContador;
			
		}
		
	}
	getchar();
	return 0;
}


