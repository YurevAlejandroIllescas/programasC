

#include <stdio.h>

float PrimerIncremento (float);
float SegundoIncremento (float);
float TercerIncremento (float);

int main(){
	
	float fSalario;
	int eNumeroEmpleadosT = 0, eNumeroP = 0, eNumeroS = 0, eNumeroT = 0;

	printf("Programa que calcula el incremento de sueldo de n trabajadores ingresados por el usuario\n");
		
	printf("Ingrese el salario de un trabajador, ingrese 0 para terminar: ");	scanf("%f", &fSalario);
	
	while (fSalario != 0){
		
		eNumeroEmpleadosT += 1;
		
		if (fSalario <= 950){
			
			eNumeroP += 1;
			printf ("%c %.3f m%cs el 15%c es: %c %.3f\n", 36, fSalario, 160, 37, 36, PrimerIncremento(fSalario));			
		
		}else if (fSalario <= 2200){
			
				eNumeroS += 1;
				printf ("%c %.3f m%cs el 10%c es: %c %.3f\n", 36, fSalario, 160, 37, 36, SegundoIncremento(fSalario));
			
			}else if(fSalario <= 3000){
				
					eNumeroT += 1;
						printf ("%c %.3f m%cs el 08%c es: %c %.3f\n", 36, fSalario, 160, 37, 36, TercerIncremento(fSalario));
				
			}
		
		printf ("Ingrese el salario de un trabajador: Ingrese 0 para terminar: ");
		scanf ("%f", &fSalario);	
	}
	
	printf ("Total de empleados ingreasados: %d\n", eNumeroEmpleadosT);
	printf ("Total de empleados con incremento del 15%c: %d\n", 37, eNumeroP);
	printf ("Total de empleados con incremento del 10%c: %d\n", 37, eNumeroS);
	printf ("Total de empleados con incremento del 08%c: %d\n", 37, eNumeroT);
	
	getchar();
	return 0;
}

float PrimerIncremento (float fValor1){
	
	return (fValor1 * .15) + fValor1;
}

float SegundoIncremento (float fValor1){
	
	return (fValor1 * .10) + fValor1;
}

float TercerIncremento (float fValor1){
	
	return (fValor1 * .08) + fValor1;
} 
