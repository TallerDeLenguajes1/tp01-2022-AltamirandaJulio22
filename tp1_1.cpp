#include <stdio.h>

int main(void){

    int *puntero;
    int numero  = 1;
        puntero = &numero;

    printf("El contenido del puntero: %d\n", *puntero);
    printf("La dirección de memoria almacenada por el puntero: %p\n", puntero);
    printf("La dirección de memoria de la variable: %p\n", puntero);
    printf("La dirección de memoria del puntero: %p\n", &puntero);
    printf("El tamaño de memoria utilizado por esa variable usando la función sizeof: %zd\n", sizeof(numero));
    
    
    printf("Hola mundo\n");
    
    return 0;
}