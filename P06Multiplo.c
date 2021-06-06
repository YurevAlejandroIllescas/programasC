/*
	Programa:P06Multiplo
	Autor: Yurev Illescas
	Fecha:
	Objetivo: Programa que indique si un número es múltiplo de otro
*/

#include <stdio.h>

int main(){
	
	int eNum1, eNum2, eResiduo;
	
	printf("Programa que indica si un n%cmero es m%cltiplo de otro\n", 163, 163);
	
	printf("Ingrese el primer n%cmero: ", 163);
	scanf("%d", &eNum1);
	
	printf("Ingrese el segundo n%cmero: ", 163);
	scanf("%d", &eNum2);
	
	eResiduo = eNum1 % eNum2;
	
	if (eResiduo == 0){
		
		printf("%d es m%cltiplo de: %d", eNum1, 163, eNum2);
		
	} else {
		
		printf("%d no es m%cltiplo de: %d", eNum1, 163, eNum2);
	}
	
	fflush(stdin);
	getchar();
	return 0;
}
