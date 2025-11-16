/*Velázquez Domínguez Ricardo
Tarea 2 - Ejercicio 15*/

#include <stdio.h>

int main() {
    int n, i, positivos=0, negativos=0, nulos=0;
    
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);
    
    int arreglo[n];
    
    printf("\nIngrese %d números:\n", n);
    
    for(i = 0; i < n; i++) {
        printf("arreglo[%d] = ", i);
        scanf("%d", &arreglo[i]);
    }
    
    for(i = 0; i < n; i++) {
        if(arreglo[i] == 0) {
            nulos++;
        } else {
            if(arreglo[i] > 0) {
                positivos++;
            } else {
                negativos++;
            }
        }
    }
    printf("Cantidad de números positivos: %d\n", positivos);
    printf("Cantidad de números negativos: %d\n", negativos);
    printf("Cantidad de números nulos: %d\n", nulos);
    return 0;
}
