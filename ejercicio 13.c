/*Velázquez Domínguez Ricardo
Tarea 2 - Ejercicio 13*/

#include <stdio.h>

int main() {
    int n, i, suma = 0;
    
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);
    
    int arreglo[n];
    
    printf("\nIngrese %d números:\n", n);
    for(i = 0; i < n; i++) {
        printf("arreglo[%d] = ", i);
        scanf("%d", &arreglo[i]);
    }
    
    for(i = 0; i < n; i++) {
        suma += arreglo[i];
    }

    printf("Suma total: %d\n", suma);
    return 0;
}
