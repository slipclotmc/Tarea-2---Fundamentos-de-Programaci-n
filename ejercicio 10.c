/*Velázquez Domínguez Ricardo
Tarea 2 - Ejercicio 10*/

#include <stdio.h>
/* NOTA: El enunciado pide "números naturales" pero luego 
   pide contar negativos y nulos. Asumo que se refiere a 
   "números enteros" por la contradicción. */
int main()
{
    int N, cont, negativos = 0, nulos = 0, positivos = 0;
    
    printf("Ingresar 100 numeros enteros:\n");

    for(cont = 1; cont <= 100; cont++ ) 
    {
        printf("Número %d: ", cont);
        scanf("%d", &N);
        
        if (N == 0) {
            nulos = nulos + 1;
        } else {
            if (N < 0) { 
                negativos = negativos + 1;
            } else {
                positivos = positivos + 1;
            }
        }
    }
    
    printf("\n-- Resultados --\n");
    printf("Cantidad de números nulos: %d\n", nulos);
    printf("Cantidad de números positivos: %d\n", positivos);
    printf("Cantidad de números negativoss: %d\n", negativos);
    
    return 0;
}
