
/*
	Programa: P03Circulo
	Autor: Yurev Illescas
	Fecha: 
	Objetivo:
*/

#include <stdio.h>
#define PI = 3.1416;

int main(){
	
	float fRadio, fArea, fPerimetro;
	
	printf("Programa para que calcula el per%cmetro y el %crea de uncirculo\n", 161, 159);
	
	printf("Ingrese el radio del circulo: ");
	scanf("%f", &fRadio);
	
	fArea = PI * (fRadio * fRadio);
	
	fPerimetro = 2 * PI * fRadio;
	
	
	printf ("El %crea del circulo con un radio de: %.2f es igual a: %.2g\n", 159, fRadio, fArea);
	printf ("El per%cmetro de un circulo con radio de: %.2f es igual a: %.2f", 161, fRadio, fArea);
	
	fflush(stdin);
	getchar();
	return 0;
}

