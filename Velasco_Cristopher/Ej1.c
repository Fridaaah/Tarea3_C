//1. Usa un apuntador para modificar los datos de una estructura Coche. (0.5 pts.)
//Velasco Avila Cristopher

#include <stdio.h>
#include <string.h>


typedef struct {
    int year;
    int numeroLlantasxd;
    char modelo [20];
    char marca [20];
} Car;

int main (){

    Car coche1;
    Car *ptr; // Apuntador a coche

    //Creación de valores
    //Asignamos los valores directamente sin preguntar al usuario
    coche1.year=1997;
    coche1.numeroLlantasxd=4;
    strcpy(coche1.modelo, "a8");
    strcpy(coche1.marca, "audi");

    printf("\nAnio: %d\nModelo: %s\nMarca: %s\nNumero de llantas: %d\n\n", coche1.year, coche1.modelo, coche1.marca, coche1.numeroLlantasxd);

    //Modificación por apuntador
    //Asignamos a la dirección que apunta ptr la del coche que hemos creado

    ptr = &coche1;

    ptr->year=2012;
    ptr->numeroLlantasxd=2;
    strcpy(ptr->modelo,"a7");
    strcpy(ptr->marca,"Audi");

    printf("Anio: %d\nModelo: %s\nMarca: %s\nNumero de llantas: %d", ptr->year, ptr->modelo, ptr->marca, ptr->numeroLlantasxd); //Imprimimos los datos del coche
    
    return 0;
}
