/*Velázquez Domínguez Ricardo
Tarea 2 - Ejercicio 14*/

#include <stdio.h>

int main() {
    int n, i, suma = 0, N;
    
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);
    
    int arreglo[n];
    
    printf("\nIngrese %d números:\n", n);
    for(i = 0; i < n; i++) {
        printf("arreglo[%d] = ", i);
        scanf("%d", &arreglo[i]);
    }
    
    printf("Ingresar el número a buscar: ");
    scanf("%d", &N);
    
    for(i = 0; i < n; i++) {
        if (arreglo[i] == N) {
            suma++;
        }
    }
    
    if (suma == 1) {
        printf("%d se encuentra %d vez en el arreglo", N, suma);
    } else { 
        printf("%d se encuentra %d veces en el arreglo", N, suma);
    }
    return 0;
}
