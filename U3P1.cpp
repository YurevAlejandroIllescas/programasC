
/*
	Programa: U3P1.c
	Autor: Yurev Illescas
	Fecha: 29/03/2019
	Objetivo: Programa que muestra un menú para hacer las 4 operaciones aritméticas.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int eNumero1, eNumero2, eOpcion;
	
	
	do{
		system ("cls");
		printf("Programa que realiza las 4 operaciones aritm%cticas.\n", 130);
		printf ("1) Suma\n2) Resta\n3) Divide\n4) Multiplica\n5) Salir\n");
		printf ("Selecciona una opci%cn: ", 162);
		scanf ("%d", &eOpcion);
	
	if (eOpcion > 0 && eOpcion < 5){
		
			
			printf("Ingresa el primer n%cmero: ", 163);
			scanf("%d", &eNumero1);
			
			printf("Ingresa el segundo n%cmero: ", 163);
			scanf("%d", &eNumero2);
		}
		
		switch (eOpcion ){
		
			case 1:
				printf("\n%d + %d = %d\n", eNumero1, eNumero2, eNumero1 + eNumero2);
				break;
				
			case 2:
				printf("\n%d - %d = %d\n", eNumero1, eNumero2, eNumero1 - eNumero2);
				break;
		
			case 3:
				if (eNumero2 == 0){
				
					printf("Error, no se puede dividir entre 0\n");
					
				}else{
					
				printf("\n%d / %d = %d\n", eNumero1, eNumero2, eNumero1 / eNumero2);
				break;
				
				}
			case 4:
				printf("\n%d * %d = %d\n", eNumero1, eNumero2, eNumero1 * eNumero2);
				break;
				
			case 5:
				printf("\nHasta luego\n");
				break;
				
			default:
				printf ("Error en la selecci%cn.", 162);
				break;
		}
	
	} while (eOpcion != 5);
	
	

	getchar ();
	return 0;
}
