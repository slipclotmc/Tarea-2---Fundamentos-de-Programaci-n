/*Velázquez Domínguez Ricardo 
Tarea 2 - Ejercicio 1*/

#include <stdio.h>

int main()
{
    int primer_número, segundo_número, Suma, Resta, Producto;  // leer valores del usuario
    printf("Ingresar primer número: ");
    scanf("%d", &primer_número);
    
    printf("Ingresar segundo número: ");
    scanf("%d", &segundo_número);
    
    // calcular operaciones
    Suma = primer_número + segundo_número;
    Resta = primer_número - segundo_número;
    Producto = primer_número * segundo_número;
    
    // mostrar resultados
    printf("Suma: %d\n", Suma);
    printf("Resta: %d\n", Resta);
    printf("Producto: %d\n", Producto);
   
   return 0;
}
