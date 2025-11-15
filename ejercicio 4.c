/*Velázquez Domínguez Ricardo
Tarea 2 - Ejercicio 4*/

#include <stdio.h>

int main()
{
    double a, b, tasa;
    printf("Ingrese la tasa de interés mensual: ");
    scanf("%lf", &tasa);
    printf("Ingrese la cantidad inicial de dinero: ");
    scanf("%lf", &a);
    
    b = a * tasa / 100 + a;
    
    printf("Monto después de un mes: %.2f", b);
    
    return 0;
}
