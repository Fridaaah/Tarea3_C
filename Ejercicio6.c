#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Hernández Rodríguez Frida y Cristopher Velasco Avila

// Definir la estructura Libro
typedef struct {
    char titulo[50];
    char autor[50];
    int anio;
    bool disponible;
} Libro;

// Agregar un libro al catálogo
void agregarLibro(Libro** catalogo, int* nLibros, char* titulo, char* autor, int anio, bool disponible) {
    *catalogo = (Libro*)realloc(*catalogo, (*nLibros + 1) * sizeof(Libro));
    if (*catalogo == NULL) {
        printf("No se pudo asignar memoria.\n");
        exit(1);
    }
    strcpy((*catalogo)[*nLibros].titulo, titulo);
    strcpy((*catalogo)[*nLibros].autor, autor);
    (*catalogo)[*nLibros].anio = anio;
    (*catalogo)[*nLibros].disponible = disponible;
    (*nLibros)++;
}

// Eliminar un libro del catálogo por su título
void eliminarLibro(Libro** catalogo, int* nLibros, char* titulo) {
    for (int i = 0; i < *nLibros; i++) {
        if (strcmp((*catalogo)[i].titulo, titulo) == 0) {
            for (int j = i; j < (*nLibros) - 1; j++) {
                (*catalogo)[j] = (*catalogo)[j + 1];
            }
            *catalogo = (Libro*)realloc(*catalogo, (*nLibros - 1) * sizeof(Libro));
            if (*catalogo == NULL && *nLibros - 1 > 0) {
                printf("No se pudo reasignar memoria.\n");
                exit(1);
            }
            (*nLibros)--;
            printf("Libro \"%s\" ha sido eliminado del catálogo.\n", titulo);
            return;
        }
    }
    printf("Libro \"%s\" no se encuentra en el catálogo.\n", titulo);
}

// Mostrar el catálogo
void mostrarCatalogo(Libro* catalogo, int nLibros) {
    printf("\n--- Catálogo de Libros ---\n");
    for (int i = 0; i < nLibros; i++) {
        printf("Título: %s\n", catalogo[i].titulo);
        printf("Autor: %s\n", catalogo[i].autor);
        printf("Año: %d\n", catalogo[i].anio);
        printf("Disponible: %s\n\n", catalogo[i].disponible ? "Sí" : "No");
    }
}

//Se añaden 7 libros, se eliminan 3 y se actualiza el catalogo
int main() {
    Libro* catalogo = NULL; 
    int nLibros = 0; 

    agregarLibro(&catalogo, &nLibros, "Cien Años de Soledad", "Gabriel Garcia Marquez", 1967, true);
    agregarLibro(&catalogo, &nLibros, "El Principito", "Antoine de Saint-Exupéry", 1943, true);
    agregarLibro(&catalogo, &nLibros, "1984", "George Orwell", 1949, false);
    agregarLibro(&catalogo, &nLibros, "It Ends With Us", "Colleen Hoover", 2016, true);
    agregarLibro(&catalogo, &nLibros, "Poesia Completa", "Alejandra Pizarnik", 2001, true);
    agregarLibro(&catalogo, &nLibros, "Ulises", "James Joyce", 1922, false);
    agregarLibro(&catalogo, &nLibros, "La Odisea", "Homero", -800, true);

    eliminarLibro(&catalogo, &nLibros, "1984");
    eliminarLibro(&catalogo, &nLibros, "Ulises");
    eliminarLibro(&catalogo, &nLibros, "La Odisea");

    mostrarCatalogo(catalogo, nLibros);

    // Liberar la memoria
    free(catalogo);

    return 0;
}