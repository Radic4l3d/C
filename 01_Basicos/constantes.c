#include <stdio.h>

#define pizzaCost 1.5         // Constante definida
const char NEWLINE = '\n';  // Caracter constante, variable global

int main(){
    float costoPizzas;
    float numberOfSlices = 3;
    costoPizzas = pizzaCost * numberOfSlices;

    printf("Total bill: $%.2f", costoPizzas);
    printf("%c", NEWLINE);
    return 0;
}