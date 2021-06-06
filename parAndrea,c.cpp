#include <stdio.h>

int CalcularPar (int);

int main(){
    
    int eNumero, ePar;
    
    printf("Programa que indica si un n%cmero es par\n", 163);
    printf("\nIngrese un n%cmero [0 = terminar]: ", 163);
    scanf("%d", &eNumero);
    
    while (eNumero != 0){
    
    	
    	ePar = CalcularPar (eNumero);
    
    	if (ePar == 0){
      
   	    	printf("%d es par", eNumero);
               
    	}else{
          
     	  printf("%d es impar", eNumero);
    	      
    	}
        
		printf("\nIngrese un n%cmero [0 = terminar]: ", 163);
    	scanf("%d", &eNumero);
	
	}
    
    fflush(stdin);
    getchar ();
    return 0;   
}

int CalcularPar (int eValor){
    eValor = eValor % 2;
    
    if (eValor != 0){
               
       return 1;
       
    }else {
             
       return 0;
    }
    
}

