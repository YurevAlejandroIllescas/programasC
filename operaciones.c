
#include <stdio.h>

float Suma (float, float);
float Resta (float, float);
float Multiplicacion (float, float);
float Division (float, float);


int main(){
	
	char cCaracter;
	float fNum1, fNum2;
	
	printf("Ingrese un n%cmero: ", 163);
	scanf("%f", &fNum1);
	
		printf ("\nIngrese una operaci%cn b%csica: + para suma, - para resta, * para multiplicaci%cn, / para divisi%cn\n", 162, 160, 162, 162);
	
	do{
	
		do{
		
			printf("\nIngrese una operaci%cn: ", 162);
			cCaracter = getchar();
	
		}while (cCaracter != '+' && cCaracter != '-' && cCaracter != '*' && cCaracter != '/' && cCaracter != '=');
		
		printf ("\nIngrese otro n%cmero: ", 163);
		scanf ("%f", &fNum2);
		
		switch (cCaracter){
		
			case '+':
					printf ("%.2f %c %.2f = %.2f\n", fNum1, cCaracter, fNum2, Suma(fNum1, fNum2));
					fNum1 = Suma (fNum1, fNum2);
					break;
			case '-':
					printf ("%.2f %c %.2f = %.2f", fNum1, cCaracter, fNum2, Resta(fNum1, fNum2));
					fNum1 = Resta (fNum1, fNum2);
					break;
			
			case '*':
					printf ("%.2f %c %.2f = %.2f", fNum1, cCaracter, fNum2, Multiplicacion(fNum1, fNum2));
					fNum1 = Multiplicacion (fNum1, fNum2);
					break;
		
			case '/':
					if (fNum2 != 0){
						printf ("%f %c %f = %.2f", fNum1, cCaracter, fNum2, Division (fNum1, fNum2));
						fNum1 = Division (fNum1, fNum2);
					}else{
						printf ("No se puede dividir entre 0.");
					}
					break;
			default:
					printf ("Hasta luego :)");
					break;
					
		}
		
		
	}while (cCaracter != '=' && fNum2 != 61);
	
	return 0;
}



float Suma (float fNum1, float fNum2){
	
	return fNum1 + fNum2;
}

float Resta (float fNum1, float fNum2){
	
	return fNum1 - fNum2;
}

float Multiplicacion (float fNum1, float fNum2){
	
	return fNum1 * fNum2;
}

float Division (float fNum1, float fNum2){
	
	return fNum1 / fNum2;
}
