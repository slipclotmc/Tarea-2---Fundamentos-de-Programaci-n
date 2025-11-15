/*Velázquez Domínguez Ricardo
Tarea 2 - Ejercicio 7*/

#include <stdio.h>

int main()
{
    double distancia, tiempo, costo;
    printf("Ingresar la distancia de ida en km: ");
    scanf("%lf", &distancia);
    
    printf("Número de días de su estancia: ");
    scanf("%lf", &tiempo);
    
    if (tiempo > 7 && 2 * distancia > 800)
    {
        costo = (2 * distancia * 0.23) * 70 / 100;
    }   else {
        
        costo = 2 * distancia * 0.23;
    }   
    
    printf("\n-- Resultados --\n");
    printf("costo: %.2f\n", costo);
    
    return 0;
}
