/*
	Programa: P13Caracter
	Autor: Yurev Illescas
	Fecha: 29/03/2019
	Objetivo: Programa que lea una serie de caracteres hata ingresar el caracter 0
*/

#include <stdio.h>

int main(){
	
	char cCaracter;
	int eDigitos = 0, eCaracter = 0;
	
	printf("Programa que cuenta el n%cmero de d%cgitos y caracteres ingresados por el usuario\n", 163, 161);	
	
	do {
		
		printf("Escribir ingrese un caracter [0 = Termino]:\n");
		cCaracter = getchar ();
		
		if (cCaracter > 48 && cCaracter < 48) {
			
			eDigitos ++;
			
		} else if (cCaracter > 64 && cCaracter < 91 || cCaracter > 96 && cCaracter < 123){
		
			eCaracter ++;
		
		} 
			
			
		
		
		
	} while (cCaracter != '0');
	
	printf("Total de d%cgitos: %d \nTotal de cracteres es: %d", 161, eDigitos);
	

	getchar ();
	return 0;
}
