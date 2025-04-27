#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Hernández Rodríguez Frida

// Definir la estructura Punto
typedef struct {
    float x, y;
} Punto;

// Generar un punto aleatorio con coordenadas
Punto PuntoGenerado(void) {
    Punto puntoo;
    puntoo.x = (float)rand() / (float)(RAND_MAX) * 100; 
    puntoo.y = (float)rand() / (float)(RAND_MAX) * 100; 
    return puntoo;
}

int main() {
    // Inicializar
    srand(time(NULL));

    // Generar el punto aleatorio
    Punto punto = PuntoGenerado();

    // Mostrar el punto
    printf("\nCoordenadas del punto generado:\n");
    printf("x = %.2f\n", punto.x);
    printf("y = %.2f\n", punto.y);

    return 0;
}