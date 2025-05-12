//3. Crea una función que retorne una estructura Punto con coordenadas aleatorias. (1 pto.)
//Velasco Avila Cristopher

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    float x,y,z;
} Punto;

Punto genera_punto(void){ // Se realiza una división. Se obtiene un numero del 0 al 1 con random y el maximo que se puede generar aleatoriamente, y el numero se multiplica por 100
    Punto puntito;
    puntito.x = (float)rand() / (float)(RAND_MAX) * 100; // Se usa  casteo a float con (float)
    puntito.y = (float)rand() / (float)(RAND_MAX) * 100;
    puntito.z = (float)rand() / (float)(RAND_MAX) * 100;
    return puntito; // Retornamos la estructura obtenida
}

int main (){    
    srand(time(NULL));
    Punto punto;
    punto = genera_punto();
    printf("\nx=%.2f\ny=%.2f\nz=%.2f",punto.x,punto.y,punto.z); // Imprimimos el valor de los componentes del punto
    return 0;
}
