#include <stdio.h>

int main(){
    
    float fGanancia, fPago, fAdicional;
    int eHoras, eHoras2;
    
    printf("Programa que calcula el pago que se le dar%c a un empleado a la quincena\n dependiendo de las horas trabajadas por semana\n", 161);
    printf("Ingrese las horas de trabajo de la primer semana: ");
    scanf("%d", &eHoras);
    printf("Ingrese las horas de trabajo de la segunda semana: ");
    scanf("%d", &eHoras2);
    printf("Ingrese cuanto se le paga al empleado el pago por hora: ");
    scanf("%f", &fPago);
    
    if (eHoras > 40){
               
                fAdicional = (float) (fPago + ((10 * fPago) / 100)) * (eHoras - 40);
                fGanancia = (float) (eHoras * fPago) + fAdicional;
                
                printf("El pago correspondiete de la primer semana es de:\n", fGanancia);
                
    } else {
           
            fGanancia = (float) eHoras * fPago;
            
            printf("El pago correspondiente de la primer semana es de:\n", fGanancia);
            
    }
    
    
    if (eHoras2 > 40){
                
              fAdicional = (float) (fPago + 10 * fPago / 100) * (eHoras2 - 40);
              fGanancia = (float) eHoras2 * fPago + fAdicional;
                
              printf("El pago correspondiete de la segunda semana es de:", fGanancia);
                
    } else {
           
            fGanancia = (float) eHoras2 * fPago;
            
            printf("El pago correspondiente de la segunda semana es de:", fGanancia); 
            
    }
    fflush(stdin);   
    getchar();
    return 0;
}
