/*Velázquez Domínguez Ricardo
Tarea 2 - Ejercicio 3*/

#include <stdio.h>

int main()
{
    double a, conversión;
    printf("Ingrese la cantidad en dólares: ");
    scanf("%lf", &a);
    
    conversión = a * 11.96;
    
    printf("Conversión: %.2f", conversión);
    
    return 0;
}
