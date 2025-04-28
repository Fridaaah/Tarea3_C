//5. Crea un arreglo dinámico de estructuras Libro usando Malloc. (1.5 pts.)
//Velasco Avila Cristopher

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int anio;
    char titulo[50];
    char autor[50];
    char editorial[50];
} Libro;


int main (){    
    Libro *ptr; // Apuntador a una  estructura Libro
    int n;

    printf("Indique el numero de libros: "); // Creamos variable que indica la cantidad de libros
    scanf("%d",&n);
    ptr = (Libro *) malloc (n * sizeof(Libro)); // Creamos el arreglo dinamico de libros segun n
 
    if (ptr == NULL) {
        printf("No se guardo la memoria dinamica\n"); // Error de memoria asignada
    }

    free(ptr);
    return 0;
}
