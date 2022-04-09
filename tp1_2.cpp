#include <stdio.h>
#include <math.h>


int potenciaCuadrada(int base);
void potenciaCuadradaVoid(int base);
void direccionYContenido(int var);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main(void){

    int base, var, a, b;

    printf("Ingrese una base:\n");
    scanf("%d", &base);
    potenciaCuadradaVoid(base);
    printf("==============================================================\n");


    printf("Ingrese una variable para mostrar dirección y contenido:\n");
    scanf("%d", &var);
    direccionYContenido(var);
    printf("==============================================================\n");


    printf("Invertir valores\n");
    printf("Ingrese el primer valor:\n");
    scanf("%d", &a);
    printf("Ingrese el segundo valor:\n");
    scanf("%d", &b);
    printf("inicialmente a = %d | b = %d\n", a, b);
    invertir(&a, &b);
    printf("finalmente a = %d | b = %d\n", a, b);
    printf("==============================================================\n");


    printf("Ordenar valores\n");
    printf("Ingrese el primer valor:\n");
    scanf("%d", &a);
    printf("Ingrese el segundo valor:\n");
    scanf("%d", &b);
    orden(&a, &b);
    printf("ordenados de mayor a menor: a = %d | b = %d\n", a, b);
    

    return 0;
}

int potenciaCuadrada(int base){

    return pow(base, 2);
}

void potenciaCuadradaVoid(int base){

    int resultado = potenciaCuadrada(base);

    printf("%d elevado a la potencia 2 es: %d\n", base, resultado);
}

void direccionYContenido(int var){

    printf("La dirección de memoria de la variable es: %p\n", &var);
    printf("El contenido de la variable es: %d\n", var);
}

void invertir(int *a, int *b){

    int aux;

    aux = *a;
    *a = *b;
    *b = aux;   
}

void orden(int *a, int *b){

    if(*b<*a){
        invertir(a, b);
    }

}