/*Velázquez Domínguez Ricardo
Tarea 2 - Ejercicio 4*/

#include <stdio.h>

int main()
{
    double a, b;
    printf("La tasa de interés es del 10%\n");
    printf("Ingrese la cantidad inicial de dinero: ");
    scanf("%lf", &a);
    
    b = a * 10 / 100 + a;
    
    printf("Monto después de un mes: %.2f", b);
    
    return 0;
}
