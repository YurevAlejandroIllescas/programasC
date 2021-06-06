

#include <stdio.h>

int main(){
	
	int eDia, eMes, eAno;
	
	printf("Programa que calcula el dia sguiente de una fecha dada\n");
	
	printf("Ingrese el dia: ");
	scanf("%d",&eDia);
	
	printf("Ingrese el mes: ");
	scanf("%d",&eMes);
	
	printf("Ingrese el año: ");
	scanf("%d",&eAno);
	
	switch (eMes){
		
		case 1: 
			if (eDia < 31){
					
					eDia ++;
					printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
				} else if (eDia != 31){
					
						printf("El dia no puede ser mayor de 31");
						
				} else{
					
					eMes ++;
						eDia = 1;
						printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
					}
				
				break;
		case 2: 
			if (eDia < 28){
					
					eDia ++;
					printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
				} else if (eDia != 28){
					
						printf("El dia no puede ser mayor de 28");
						
				} else{
					
					  	eMes ++;
						eDia = 1;
						printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
					}
				
				break;
				
		case 3:
			if (eDia < 31){
					
					eDia ++;
					printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
				} else if (eDia != 31){
					
						printf("El dia no puede ser mayor de 31");
						
				} else{
					
					eMes ++;
						eDia = 1;
						printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
					}
				
				break;
		case 4:
			if (eDia < 30){
					
					eDia ++;
					printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
				} else if (eDia != 30){
					
						printf("El dia no puede ser mayor de 30");
						
				} else{
					
					eMes ++;
						eDia = 1;
						printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
					}
				
				break;
		case 5:
			if (eDia < 30){
					
					eDia ++;
					printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
				} else if (eDia != 30){
					
						printf("El dia no puede ser mayor de 30");
						
				} else{
					
					eMes ++;
						eDia = 1;
						printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
					}
				
				break;
		case 6:
			if (eDia < 31){
					
					eDia ++;
					printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
				} else if (eDia != 31){
					
						printf("El dia no puede ser mayor de 31");
						
				} else{
					
					eMes ++;
						eDia = 1;
						printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
					}
				
				break;
		case 7:
			if (eDia < 30){
					
					eDia ++;
					printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
				} else if (eDia != 30){
					
						printf("El dia no puede ser mayor de 30");
						
				} else{
					
					eMes ++;
						eDia = 1;
						printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
					}
				
				break;
		case 8:
			if (eDia < 31){
					
					eDia ++;
					printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
				} else if (eDia != 31){
					
						printf("El dia no puede ser mayor de 31");
						
				} else{
					
					eMes ++;
						eDia = 1;
						printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
					}
				
				break;
		case 9:
			if (eDia < 30){
					
					eDia ++;
					printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
				} else if (eDia != 30){
					
						printf("El dia no puede ser mayor de 30");
						
				} else{
					
					eMes ++;
						eDia = 1;
						printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
					}
				
				break;
		case 10:
			if (eDia < 31){
					
					eDia ++;
					printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
				} else if (eDia != 31){
					
						printf("El dia no puede ser mayor de 31");
						
				} else{
					
					eMes ++;
						eDia = 1;
						printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
					}
				
				break;
		case 11: 
			if (eDia < 30){
					
					eDia ++;
					printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
				} else if (eDia != 30){
					
						printf("El dia no puede ser mayor de 30");
						
				} else{
					
					eMes ++;
						eDia = 1;
						printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
					}
				
				break;
		case 12:
			if (eDia < 31){
					
					eDia ++;
					printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
				} else if (eDia != 31){
					
						printf("El dia no puede ser mayor de 31");
						
				} else{
					
					eMes ++;
					eAno ++;
					eDia = 1;
					printf("El dia siguiente es: %d / %d / %d", eDia, eMes, eAno);
					
					}
				
				break;
		default:
			printf("Error en el mes ingresado.");
	}
	
 
	getchar ();
	return 0;
}
