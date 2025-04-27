#include <stdio.h>
#include <string.h>

// Hernández Rodríguez Frida

// Definir la estructura Coche
typedef struct {
    int year;
    int numAsientos; 
    char modelo[20];
    char marca[20];
} Coche;

int main() {
    Coche miCoche;
    Coche *ptrCoche;

    // Inicializar los valores 
    miCoche.year = 2005;
    miCoche.numAsientos = 5;
    strcpy(miCoche.modelo, "Prius");
    strcpy(miCoche.marca, "Accord");

    // Mostrar los datos iniciales
    printf("Datos iniciales del coche:\n");
    printf("Año: %d\nModelo: %s\nMarca: %s\nNúmero de asientos: %d\n\n", miCoche.year, miCoche.modelo, miCoche.marca, miCoche.numAsientos);

    // Puntero
    ptrCoche = &miCoche;

    ptrCoche->year = 2023;
    ptrCoche->numAsientos = 4;
    strcpy(ptrCoche->modelo, "Fiesta");
    strcpy(ptrCoche->marca, "Accord");

    // Mostrar datos modificados
    printf("Datos modificados del coche con puntero:\n");
    printf("Año: %d\nModelo: %s\nMarca: %s\nNúmero de asientos: %d\n", ptrCoche->year, ptrCoche->modelo, ptrCoche->marca, ptrCoche->numAsientos);

    return 0;
}