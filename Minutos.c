
#include <stdio.h>

int main(){
	
	int eSegundoF, eSegundo, eMinuto, eHora, eContador;
	
	do{

		printf ("Ingrese los segundo finales: ");
		scanf("%d", &eSegundoF);
	
	}while(eSegundoF < 0); 
	
	for (eContador = 0; eContador > eSegundoF; eContador + 1){
		
		eSegundo += 1;
		
	}
	
	printf("%d segundos", eSegundo);
	
	
	getchar ();
	return 0;
}
