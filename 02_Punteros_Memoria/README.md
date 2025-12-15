# 02_Punteros_Memoria - Gestión de Memoria y Punteros

Este directorio contiene ejercicios sobre punteros y gestión dinámica de memoria.

## Temas cubiertos:

- **Punteros básicos**: declaración, dereferencia, operador &
- **Aritmética de punteros**: incremento, decremento, operaciones
- **Punteros y arrays**: relación entre punteros y arreglos
- **Punteros a funciones**: callbacks
- **Gestión dinámica de memoria**:
  - malloc() - asignación de memoria
  - calloc() - asignación con inicialización
  - realloc() - redimensionamiento
  - free() - liberación de memoria
- **Errores comunes**: fugas de memoria, punteros colgantes

## Estructura sugerida:

```
02_Punteros_Memoria/
├── punteros_basicos.c      # Introducción a punteros
├── aritmetica_punteros.c   # Operaciones con punteros
├── punteros_arrays.c       # Punteros y arreglos
├── memoria_dinamica.c      # malloc, free, realloc
└── punteros_funciones.c    # Punteros a funciones
```

## Compilación con verificación de memoria:

```bash
gcc -g nombre_archivo.c -o nombre_programa
valgrind --leak-check=full ./nombre_programa
```
