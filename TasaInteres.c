#include <stdio.h>

int main(){
	
	float fImporteFinal, fCapitalInicial, fTasaInteres, fImporte2, fImporte, fImporte3 ;
	
	printf("Programa que calcula si al t%crmino de 2 a%cos, un capital C y un inter%cs R, se duplica el capital\n", 130, 164, 130);
	
	printf("Ingrese el capital inicial: ");
	scanf("%f", &fCapitalInicial);
	
	printf("Ingrese la tasa de interes anual en porcentaje: ");
	scanf("%f", &fTasaInteres);
	
	fImporte = fTasaInteres * fCapitalInicial / 100;
	fImporte2 = fCapitalInicial + fImporte;
	
	fImporte3 = fImporte2 * fTasaInteres / 100;
	fImporteFinal = fImporte2 + fImporte3;
	
	
	fCapitalInicial *= 2;
	
	if (fImporteFinal != fCapitalInicial){
		
		printf("El capital no incrementa al doble al termino de 2 a%cos.", 164 );
		
	}else{
		
		printf("El capital si incrementa al doble al termino de 2 a%cos.", 164);
		
	}
	
	
	getchar();
	return 0;
}
