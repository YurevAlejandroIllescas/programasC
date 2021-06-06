/*
	Programa: U3P4
	Autor: Yurev Illescas
	Fecha: 05/04/2019
	Objetivo:
*/

int main(){
	
	int eNumero, eContador = 1, eMayor;
	
	printf("Programa que leer un conjunto de valores ingresados por el usuario hasta que ingrese 0 y muestre cu%cntos n%cmeros ingres%c, e indica cu%cl es el mayor de todos\n", 160, 163, 162, 160);
	
	printf("Ingrese un n%cmero: ", 163);
	scanf("%d", &eNumero);
	
	eMayor= eNumero;
	
	while (eNumero != 0){
	
		
		printf("Ingrese un n%cmero: ", 163);
		scanf("%d", &eNumero);
		
		if (eNumero != 0){
			
			eContador ++;
			
			if (eNumero > eMayor){
				
				eMayor = eNumero;
				
			}
			
		}
		
	}
	
	printf("\nTotal de n%cmeros ingresados es: %d y el mayor es: %d", 163, eContador, eMayor);
	
	getchar();
	return 0;
}
