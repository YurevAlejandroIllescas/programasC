

#include <stdio.h>


int main (){
	
	 int eContador, eSegundosF, eSegundos , fMinutos, fHoras;
	
	printf("Programa que calcula los segundos, minutos y horas, segun los segundos dados\n");
	
	do{
	
		printf("Ingrese los segundos: ");
		scanf("%d", &eSegundosF);
	
	}while (eSegundosF < 0);
	
	
	if (eSegundosF <> 0){
	
		for (int eContador = 0; eContador == eSegundosF; eContador ++){
		
			eSegundos ++;
			
			if (eSegundos == 60){
				
				eMinutos ++;
				
				if (eMinutos == 60){
					
					eHoras ++;
				}
			}
		
		}
	
	}
	
	printf ("\nHan transcurrido: %d segundos, %d minutos y %d horas", eSegundos, eMinutos, eHoras);
	
	getchar();
	return 0;
}
