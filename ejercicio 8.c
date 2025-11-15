/*Velázquez Domínguez Ricardo
Tarea 2 - Ejercicio 8*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Ingresar el primer número: ");
    scanf("%d", &a);
    
    do {
        printf("Ingresar el segundo número: ");
        scanf("%d", &b);
    
        if (b == 0) { 
              printf("No es posible dividir entre cero.\n");
        }
    } while (b == 0);
    
    if (a % b == 0) {
         printf("\n-- Resultados --\n");
         printf("%d es divisible entre %d", a, b);
    }  else {
        printf("\n-- Resultados --\n");
        printf("%d no divisible entre %d", a, b);
    }   
    
    return 0;
}
