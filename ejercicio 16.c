/*Velázquez Domínguez Ricardo
Tarea 2 - Ejercicio 16*/

#include <stdio.h>

int main() {
    int cont, i=0, arreglo[100];
    
    for(cont = 0; i<100; cont++) {
        if (cont % 2 == 0) {
            arreglo[i] = cont;
            i++;
        }
    }
    
    for(i=0; i<100; i++) {
        printf("arreglo[%d]: %d\n", i, arreglo [i]);
    }
    return 0;
