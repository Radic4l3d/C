# 05_Proyectos - Proyectos Prácticos

Este directorio contiene pequeñas herramientas y juegos de línea de comandos (CLI).

## Ideas de proyectos:

### Juegos:
- **Tres en raya (Tic-Tac-Toe)**: juego clásico de estrategia
- **Ahorcado**: juego de adivinanzas
- **Snake**: juego de la serpiente en terminal
- **Buscaminas**: versión CLI del clásico
- **Laberinto**: generador y solucionador de laberintos

### Herramientas:
- **Calculadora avanzada**: con operaciones complejas
- **Administrador de tareas**: TODO list en CLI
- **Encriptador/Desencriptador**: cifrado César, XOR, etc.
- **Compresor de archivos**: algoritmo simple de compresión
- **Editor de texto simple**: editor básico en terminal
- **Sistema de archivos simple**: simulación de filesystem

### Utilidades:
- **Conversor de unidades**: temperatura, longitud, peso, etc.
- **Analizador de texto**: conteo de palabras, frecuencias
- **Generador de contraseñas**: contraseñas seguras
- **Cliente/Servidor simple**: comunicación por sockets

## Estructura sugerida:

```
05_Proyectos/
├── tres_en_raya/
│   ├── main.c
│   └── README.md
├── calculadora/
│   ├── main.c
│   └── README.md
└── [otros_proyectos]/
    ├── main.c
    └── README.md
```

## Compilación típica:

```bash
gcc -Wall -Wextra main.c -o proyecto
./proyecto
```

Para proyectos con múltiples archivos, considera usar Makefile.
