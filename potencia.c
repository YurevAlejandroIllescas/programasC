/*
  Programa: Potencia
  Autor:
  Fcha: 03/05/2019
  Objetivo: Obtener potencia de ab de dos números recibidos como parámetros 
  			en una función en una función usando ciclos
  */

#include <stdio.h>

int Potencia (int, int);

int main(){
	
	int eAcomulador, eBase, ePotencia, eContador;
	
	printf("Programa que obtirnr la potencia dada de un n%cmero ingtresado\n", 163);
	
	printf("Ingrese la base de la potencia: ");
	scanf("%d", &eBase);
	
	do{
		
		printf("Ingrese la potencia: ");
		scanf("%d", &ePotencia);
		
	}while(ePotencia < 0);
	
	eAcomulador = eBase;
	
	if (ePotencia != 0){
	
		for (eContador = 2; eContador <= ePotencia; eContador + 1){
			
			eAcomulador = Potencia(eAcomulador, eBase);
			
		}
	
		printf("\n%d elevado a: %d es: %d", eBase, ePotencia, eAcomulador);
	
	}else{
		
		printf("\n%d elevado a: %d es: 1", eBase, ePotencia);
		
	}
		
	getchar ();
	return 0;
}


int Potencia(int eAcomulador, int eBase){
	
	return eAcomulador * eBase;
	
}
