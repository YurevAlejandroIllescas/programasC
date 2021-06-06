

#include <stdio.h>

#define MAX_RENG  3
#define MAX_COLU  3

typedef int TaMatriz[MAX_RENG][MAX_COLU];


int main(void){
	
	TaMatriz aMatriz, aMatrizT;
	int eRenglon, eColumna, eRenglonT = 0, eColumnaT = 0, eSimetrico = 0;
	
	for ( eRenglon = 0; eRenglon < MAX_RENG ; eRenglon ++){
		
		for ( eColumna = 0; eColumna < MAX_COLU; eColumna ++){
		
	
			printf("Ingrese la matriz (%d)(%d):", eRenglon, eColumna);
			scanf("%d", &aMatriz[eRenglon][eColumna] );
		}
	}
	
	printf("\nMatriz original\n");
	for ( eRenglon = 0; eRenglon < MAX_RENG ; eRenglon ++){
		
		for ( eColumna = 0; eColumna < MAX_COLU; eColumna ++){
		
			printf("%d ", aMatriz[eRenglon][eColumna]);
		
		}
		printf("\n");
	}
		
	printf("\nMatriz Transpuesta\n");
	for (eRenglon = 0; eRenglon < MAX_RENG; eRenglon ++){
		eRenglonT += 1;
		
		for (eColumna = 0; eColumna < MAX_COLU; eColumna++){
		
			eColumnaT += 1;
			
			 aMatrizT[eRenglonT][eColumnaT] = aMatriz[eColumna][eRenglon];
		
			printf("%d ", aMatrizT [eRenglonT][eColumnaT]);
		}
		printf("\n");
	}	
	
	printf("\nMatriz Simetrica\n");
	for (eRenglon = 0; eRenglon < MAX_RENG; eRenglon ++){
		for (eColumna = 0; eColumna < MAX_COLU; eColumna ++){
			if(aMatriz[eRenglon][eColumna] == aMatrizT[eRenglon][eColumna]){
				eSimetrico = 1;
			}
		}
	}
	
	if (eSimetrico == 1){
		printf("Si es simetrica :)");
	}else{
		printf("No es simetrica :(");
	}
		
	getchar();
	return 0;
}


