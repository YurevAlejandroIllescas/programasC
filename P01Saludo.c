/*
	Programa: P01Saludo
	Autor: Yurev Illescas 
	Fecha:
	Objetivo:

*/

#include <stdio.h>

int main(){
	
	char cNombre[80] ;
	
	printf("Programa que saluda por tu nombre\n");
	
	printf("Ingrese un nombre: ");
	gets(cNombre);
	
	printf("Hola, %s", cNombre);
	
	fflush (stdin);
	getchar ();
	return 0;
}
