/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* Para leer variables de texto se utiliza scanf, que lee solo una palabra. 
   Para leer una linea completa (es decir, incluyendo los espacios en blanco)
   se debe utilzar ges (ej, reemplazar scanf("%s",x) por gets(x)) pero 
   obliga a agregar un getchar() antes del gets si antes del mismo se leyó
   otra variable con scanf. */

// Declaraciones adelantadas de las funciones
float potencia(float evalor1, float evalor2);

float potencia(float evalor1, float evalor2) {
	float resultado;
	resultado = evalor1*evalor2;
	return resultado;
}

int main() {
	SIN_TIPO eacomulador;
	SIN_TIPO ebase;
	float econtador;
	float epotencia;
	printf("Ingrese la base de la potencia: \n");
	scanf("%s",ebase);
	do {
		printf("Ingrese la potencia: \n");
		scanf("%f",&epotencia);
	} while (epotencia<0);
	eacomulador = ebase;
	if (epotencia!=0) {
		for (econtador=2;econtador<=epotencia;econtador+=1) {
			eacomulador = potencia(eacomulador,ebase);
		}
		printf("%s   elevado a: %fes: %s\n",ebase,epotencia,eacomulador);
	} else {
		printf("%s elevado a: %fes: 1\n",ebase,epotencia);
	}
	return 0;
}


