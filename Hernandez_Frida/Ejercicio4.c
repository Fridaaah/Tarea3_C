#include <stdio.h>
#include <stdlib.h>

//Hernández Rodríguez Frida

// Definir estructuras
typedef struct {
    char apellidoP[20];
    char apellidoM[20];
    char nombre[20];
    int edad;
} Employee;

typedef struct {
    int nEmployees;
    Employee* employees; 
} Depa;

int main() {
    Depa sales;

    printf("Ingresa el número de empleados: ");
    scanf("%d", &sales.nEmployees);

    // Asignar memoria dinámica
    sales.employees = (Employee*)malloc(sales.nEmployees * sizeof(Employee));

    if (sales.employees == NULL) {
        printf("No se pudo asignar memoria dinámica.\n");
        return 1; 
    }

    // Datos de cada empleado
    for (int i = 0; i < sales.nEmployees; i++) {
        printf("\n\nIngresa los datos del empleado %d:\n", i + 1);

        printf("Apellido paterno: ");
        scanf("%s", (sales.employees + i)->apellidoP);

        printf("Apellido materno: ");
        scanf("%s", (sales.employees + i)->apellidoM);

        printf("Nombre: ");
        scanf("%s", (sales.employees + i)->nombre);

        printf("Edad: ");
        scanf("%d", &(sales.employees + i)->edad);
    }

    // Mostrar datos de los empleados
    printf("\n\n--- Lista de Empleados ---\n");
    for (int i = 0; i < sales.nEmployees; i++) {
        printf("\nEmpleado %d:\n", i + 1);
        printf("Nombre completo: %s %s %s\n", 
            (sales.employees + i)->apellidoP, 
            (sales.employees + i)->apellidoM, 
            (sales.employees + i)->nombre);
        printf("Edad: %d años\n", (sales.employees + i)->edad);
    }

    // Liberar la memoria 
    free(sales.employees);

    return 0;
}