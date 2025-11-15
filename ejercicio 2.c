/*Velázquez Domínguez Ricardo
Tarea 2 - Ejercicio 2*/

#include <stdio.h>
#include <math.h>

int main()
{
    double r, A, circunferencia;
    
    printf("Radio: ");
    scanf("%lf", &r);
    
    A = pow(r, 2) * M_PI;
    circunferencia = 2 * M_PI * r;
    
    printf("Área: %.2f\n", A);
    printf("Circunferencia: %.2f\n", circunferencia);
    
    return 0;
}
