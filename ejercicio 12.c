/*Velázquez Domínguez Ricardo
Tarea 2 - Ejercicio 12*/

#include <stdio.h>
/* NOTA: Se considera al uno como el primer número natural. */

int main()
{
    int N, cont, prod;
        // N debe ser igual o mayor a 1
    do {
        printf("Ingresar la cantidad de numeros naturales: ");   
        scanf("%d", &N);
        
        if (N < 1) {
            printf("Error: Debe ingresar al menos 1 numero natural\n\n");
        }
    } while (N < 1);  // Repetir mientras N sea menor a 1
    
    cont = 1, prod = 1;

    while(cont <= N) 
    {
        prod = prod * cont;
        cont++;
    }
    
    printf("\n-- Resultados --\n");
    printf("Producto de los primeros %d numeros naturales: %d\n", N, prod);
 
    return 0;
}
