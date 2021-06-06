

#include <stdio.h>

int main(){
	
	int eTipo;
	float fPrecio, fMinutos;
	
	printf("Programa que calcula el precio de una llamada telef%cnica, seg%cn la duraci%cn, y el tipo de llamada que fue\n", 162, 163, 162);
	printf("Escriba el n%cmero dependiendo el tipo de llamada que realiz%c, donde:\n1 si es Nacional\n2 si es internacional EU\n3 si es internacional resto de America\n4 si es internacional Europa\n5 si es internacional Asia\n6 si es internacional %cfrica\n7 si es Por cobrar\n", 163, 162, 181);
	
	printf("Ingrese el tipo de llamada: ");
	scanf("%d", &eTipo);
	
	printf("Ingrese los minutos que dur%c su llamada: ", 162);
	scanf("%f", &fMinutos);
	
	switch(eTipo){
		case 1: 
			fPrecio = 1.5 * fMinutos;
			printf("El precio de la llamada es: %c %.2f", 36, fPrecio);
			break; 
			
		case 2: 
			fPrecio = 2.5 * fMinutos;
			printf("El precio de la llamada es: %c %.2f", 36, fPrecio);
			break;
			
		case 3: 
			fPrecio = 3.0 * fMinutos;
			printf("El precio de la llamada es: %c %.2f", 36, fPrecio);
			break;
			
		case 4: 
			fPrecio = 4.5 * fMinutos;
			printf("El precio de la llamada es: %c %.2f", 36, fPrecio);
			break;
			
		case 5: 
			fPrecio = 5.5 * fMinutos;
			printf("El precio de la llamada es: %c %.2f", 36, fPrecio);
			break;
			
		case 6: 
			fPrecio = 5.5 * fMinutos;
			printf("El precio de la llamada es: %c %.2f", 36, fPrecio);
			break;
			
		case 7: 
			fPrecio = 6.5 * fMinutos;
			printf("El precio de la llamada es: %c %.2f", 36, fPrecio);
			break;
			
		default:
			printf("Error en el tipo de llamada.");
	}	
	getchar ();
	return 0;
}
