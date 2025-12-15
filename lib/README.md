# lib - Librerías Reutilizables

Este directorio contiene librerías propias que pueden ser reutilizadas en diferentes proyectos.

## Propósito:

Las librerías aquí contenidas son módulos independientes que implementan funcionalidades comunes y pueden ser enlazadas con varios programas.

## Estructura sugerida:

```
lib/
├── utils/
│   ├── utils.h             # Utilidades generales
│   └── utils.c
├── data_structures/
│   ├── list.h              # Lista enlazada genérica
│   ├── list.c
│   ├── stack.h             # Pila genérica
│   ├── stack.c
│   ├── queue.h             # Cola genérica
│   └── queue.c
├── algorithms/
│   ├── sort.h              # Algoritmos de ordenamiento
│   ├── sort.c
│   ├── search.h            # Algoritmos de búsqueda
│   └── search.c
└── io/
    ├── file_io.h           # Entrada/salida de archivos
    └── file_io.c
```

## Cómo usar las librerías:

### 1. Incluir el header en tu código:
```c
#include "../lib/utils/utils.h"
```

### 2. Compilar enlazando la librería:
```bash
gcc main.c lib/utils/utils.c -o programa
```

### 3. O compilar como librería estática:
```bash
gcc -c lib/utils/utils.c -o lib/utils/utils.o
ar rcs lib/libutils.a lib/utils/utils.o
gcc main.c -L./lib -lutils -o programa
```

## Buenas prácticas:

- Cada módulo debe tener su archivo `.h` (header) y `.c` (implementación)
- Usar guardas de inclusión en los headers (#ifndef, #define, #endif)
- Documentar todas las funciones públicas
- Mantener la cohesión: cada módulo debe tener una responsabilidad clara
- Minimizar el acoplamiento entre módulos
