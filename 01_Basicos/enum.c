#include <stdio.h>
/*  An enum (enumeration) 
    in C is a user-defined data type used to assign meaningful names to a set of related integer constants, 
    making the code more readable and maintainable. Internally, enum constants are treated as int values. 
*/

// 1. DEFINICIÓN DEL ENUM
// Creamos un tipo de dato nuevo llamado 'EstadoRobot'.
// Por defecto, el compilador asigna números secuenciales:
// REPOSO = 0, AVANZANDO = 1, GIRANDO = 2, ALARMA = 3
enum EstadoRobot {
    REPOSO,
    AVANZANDO,
    GIRANDO,
    ALARMA
};

int main() {
    // 2. DECLARACIÓN
    // Creamos una variable que SOLO puede tener valores de nuestra lista.
    enum EstadoRobot estadoActual = REPOSO;

    // Simulamos una entrada de sensor (ej. detectó pared)
    int sensor_pared = 1; 

    // 3. LA MÁQUINA DE ESTADOS (Switch-Case)
    // Fíjate qué fácil es leer esto en español en lugar de usar números.
    switch (estadoActual) {
        case REPOSO:
            printf("Robot detenido. Esperando orden...\n");
            if (sensor_pared == 0) {
                estadoActual = AVANZANDO; // Transición de estado
            }
            break;

        case AVANZANDO:
            printf("Motores al 100%%. Avanzando...\n");
            if (sensor_pared == 1) {
                printf("¡Pared detectada! Cambiando estado.\n");
                estadoActual = GIRANDO; // Transición
            }
            break;

        case GIRANDO:
            printf("Girando 90 grados...\n");
            estadoActual = REPOSO;
            break;
            
        case ALARMA:
            printf("ERROR CRÍTICO. Luces rojas.\n");
            break;
    }

    // En el fondo, siguen siendo números enteros.
    printf("\n--- Debugging ---\n");
    printf("El valor numérico interno del estado actual es: %d\n", estadoActual);

    return 0;
}