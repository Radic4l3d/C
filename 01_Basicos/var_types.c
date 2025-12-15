#include <stdio.h>  // Standard Input / Output

int main(){
    /*
    DECLARACION
    Guardamos la letra 'E', pero la máquina guarda el número 69 (ASCII).    */
    // Caracter 1 byte.
    char letra = 'E'; 
    
    // Short 2 bytes.
    short ojos = 2;

    // Entero 4 bytes.
    int edad = 24;
    
    // Flotante 4 bytes.
    float voltaje = 3.3;
    
    // Flotante de doble precision 8 bytes.
    double pi_preciso = 3.1415926535;

    // Constantes
    const double pi = 3.1415926535;
    
    // Mostrar el tamaño

    printf("Variable 'letra':\n");
    printf("  Valor visual: %c\n", letra);
    printf("  Valor numérico real (ASCII): %d\n", letra); // Truco: puedes ver el char como numero
    printf("  Tamaño físico: %lu byte (8 bits)\n\n", sizeof(letra));

    printf("Variable 'edad':\n");
    printf("  Valor: %d\n", edad);
    printf("  Tamaño físico: %lu bytes (32 bits)\n\n", sizeof(edad));

    printf("Variable 'voltaje':\n");
    printf("  Valor: %.2f volts\n", voltaje); // %.2f limita a 2 decimales
    printf("  Tamaño físico: %lu bytes (32 bits)\n\n", sizeof(voltaje));

    printf("Variable constante 'pi':\n");
    printf("  Valor: %.2f\n", pi);
    printf("  Tamaño físico: %lu bytes (32 bits)\n\n", sizeof(pi));

    return 0;
}