#include <stdio.h>
#include <stdlib.h>

// Hernández Rodríguez Frida

// Definir la extructura Libro
typedef struct {
    char titulo[50];
    char autor[50];
    int anioPublicacion;
    float precio;
} Libro;

//Puntero
int main() {
    int nLibros; 
    Libro* libros; 

    printf("Ingresa el número de libros: ");
    scanf("%d", &nLibros);

    // Asignar memoria dinámica
    libros = (Libro*)malloc(nLibros * sizeof(Libro));
    if (libros == NULL) {
        printf("No se pudo asignar memoria dinámica.\n");
        return 1; 
    }

    // Info de cada libro
    for (int i = 0; i < nLibros; i++) {
        printf("\nIngrese los datos del libro %d:\n", i + 1);

        printf("Título: ");
        scanf(" %[^\n]s", libros[i].titulo); 

        printf("Autor: ");
        scanf(" %[^\n]s", libros[i].autor);

        printf("Año de publicación: ");
        scanf("%d", &libros[i].anioPublicacion);

        printf("Precio: ");
        scanf("%f", &libros[i].precio);
    }

    // Mostrar info de los libros
    printf("\n--- Lista de Libros ---\n");
    for (int i = 0; i < nLibros; i++) {
        printf("\nLibro %d:\n", i + 1);
        printf("Título: %s\n", libros[i].titulo);
        printf("Autor: %s\n", libros[i].autor);
        printf("Año de publicación: %d\n", libros[i].anioPublicacion);
        printf("Precio: $%.2f\n", libros[i].precio);
    }

    // Liberar la memoria
    free(libros);

    return 0;
}