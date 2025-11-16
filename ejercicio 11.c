/*Velázquez Domínguez Ricardo
Tarea 2 - Ejercicio 11*/

#include <stdio.h>

int main()
{
    int cont = 10, suma = 0;
    
    while(cont <= 50) {
        if (cont % 2 == 0) {
            suma = suma + cont;
        } 
    cont++;  
    }
    
    printf(" --Resultados--\n ");
    printf("Suma = %d", suma);
    
    return 0;
}
