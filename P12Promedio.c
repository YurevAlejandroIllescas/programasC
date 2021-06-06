/*
	Programa: P12Promedio.c
	Autor: Yurev Illescas
	Objetivo:
	Fecha:
*/

#include <stdio.h>

int main (){
	
	float fPromedio, fCalificacion, fSumaCal = 0;
	int eContadorCal;
	
	printf("Programa que muestre el promedio de un alumno ingresando 5 calificaciones\nG");
	
	for (eContadorCal = 1; eContadorCal <= 5; eContadorCal ++ ){
		
		do{
			
			printf("Ingrese la calificaci%cn: ", 162);
			scanf("%f", &fCalificacion);
		
			if (fCalificacion >= 0 && fCalificacion <= 10){
			
				fSumaCal += fCalificacion;
			}else {
				
				printf("Calificaci%cn incorrecta, debe ser en un rango de 0 a 10", 162);
				
			}
			
		} while (fCalificacion < 0.0f || fCalificacion > 10.0f);
		
	
		
	}
	
	fPromedio = fSumaCal / 5;
	
	printf("El primedio de las calificaciones es: %.2f", fPromedio);
	
	getchar();
	return 0;
}
