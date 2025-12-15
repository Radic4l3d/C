# 04_Algoritmos - Algoritmos Fundamentales

Este directorio contiene implementaciones de algoritmos clásicos.

## Temas cubiertos:

### Algoritmos de Ordenamiento:
- **Bubble Sort**: O(n²)
- **Selection Sort**: O(n²)
- **Insertion Sort**: O(n²)
- **Merge Sort**: O(n log n)
- **Quick Sort**: O(n log n) promedio
- **Heap Sort**: O(n log n)

### Algoritmos de Búsqueda:
- **Búsqueda lineal**: O(n)
- **Búsqueda binaria**: O(log n)
- **Búsqueda en profundidad (DFS)**: para grafos/árboles
- **Búsqueda en amplitud (BFS)**: para grafos/árboles

### Otros algoritmos:
- **Algoritmos de recursión**
- **Programación dinámica**
- **Algoritmos voraces (Greedy)**
- **Divide y conquista**

## Estructura sugerida:

```
04_Algoritmos/
├── ordenamiento.c          # Todos los algoritmos de ordenamiento
├── busqueda.c              # Algoritmos de búsqueda
├── recursion.c             # Ejemplos de recursión
├── dinamica.c              # Programación dinámica
└── grafos_algoritmos.c     # DFS, BFS, Dijkstra
```

## Compilación con optimización:

```bash
gcc -O2 -Wall nombre_archivo.c -o nombre_programa
./nombre_programa
```
