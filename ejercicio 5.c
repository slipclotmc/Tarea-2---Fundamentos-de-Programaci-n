/*Velázquez Domínguez Ricardo
Tarea 2 - Ejercicio 5*/

#include <stdio.h>

int main()
{
    double compra, costo;
    printf("Ingresar el monto de la compra: ");
    scanf("%lf", &compra);
    
    if (compra > 2500)
    {
        costo = compra * 92 / 100;
    }   else {
        
        costo = compra;
    }   
    
    printf("--Resultados--\n");
    printf("Total a pagar: %.2f", costo);
    
    return 0;
}
