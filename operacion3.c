#include <stdio.h>



int main(){
	
	char cOperacion;
	float fNum1, fNum2;
	
	printf (" Programa que calcula alguna de las 4 operaciones b%csicas, muestra los resultados parciales y termina al ingresar el s%cmbolo =", 160, 161);
	
	printf ("\nIngrese un n%cmero: ", 163);
	scanf("%f", &fNum1);
	
	printf ("\nIngrese una operaci%cn b%csica. + para suma, - para resta, * para multiplicaci%cn, / para divisi%cn", 162, 160, 162, 162);

	printf ("\nIngrese la operaci%cn: ", 162);
    cOperacion = getchar();
    
    printf ("\nHola");

	
	getchar();
	return 0;
}
