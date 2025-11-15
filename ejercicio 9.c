/*Velázquez Domínguez Ricardo
Tarea 2 - Ejercicio 9*/

#include <stdio.h>

int main()
{
    int N, cont;
    printf("Ingresar un número entero: ");
    scanf("%d", &N);
    
    printf("\n -- Resultados -- \n");
    
    for(cont = 1; cont <= 10; cont++ ) {
        printf("\n%d x %d = %d", N, cont, cont * N);
    }
    
    return 0;
}
