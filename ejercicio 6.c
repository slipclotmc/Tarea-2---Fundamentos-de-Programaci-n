/*Velázquez Domínguez Ricardo
Tarea 2 - Ejercicio 6*/

#include <stdio.h>

int main()
{
    double sueldo1, aumento, sueldo2;
    printf("Ingresar el sueldo actual: ");
    scanf("%lf", &sueldo1);
    
    if (sueldo1 < 1000)
    {
        aumento = sueldo1 * 15 / 100;
    }   else {
        
        aumento = sueldo1 * 12 / 100;
    }   
    
    sueldo2 = sueldo1 + aumento;
    
    printf("\n-- Resultados --\n");
    printf("Aumento: %.2f\n", aumento);
    printf("Nuevo sueldo: %.2f", sueldo2);
    
    return 0;
}
