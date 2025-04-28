//4. Crea una estructura Departamento que contenga un arreglo de Empleado dinámico
//Velasco Avila Cristopher

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char apellidoP[20];
    char apellidoM[20];
    char nombre[20];
    int edad;
} Employee;

typedef struct {
    int nEmployees;
    Employee* employees; // Cada Departamente va a apuntar a un arreglo de Empleados
} Departamento;

int main (){    
    Departamento sales;

    printf("Indique el numero de empleados: ");
    scanf("%d",&sales.nEmployees);
    sales.employees = (Employee*)malloc(sales.nEmployees * sizeof(Employee)); // Creamos el arreglo de empleados segun el nEmpleados del departamento
    
    if (sales.employees == NULL) {
        printf("No se guardo la memoria dinamica\n");
    }

    // Función para agregar los datos por cada empleado
    for (int i=0;i<sales.nEmployees;i++){
        printf("\n\nIngrese el apellido paterno del empleado %d: ",(i+1));
        scanf("%s",(sales.employees+i)->apellidoP);

        printf("\nIngrese el apellido materno del empleado %d: ",(i+1));
        scanf("%s",(sales.employees+i)->apellidoM);

        printf("\nIngrese el nombre del empleado %d: ",(i+1));
        scanf("%s",(sales.employees+i)->nombre);

        printf("\nIngrese la edad del empleado %d: ",(i+1));
        scanf("%d",&(sales.employees+i)->edad);
    }

    // Función para imprimir los datos de cada uno de los empleados:
    for (int i=0;i<sales.nEmployees;i++){
        printf("\n\nEmpleado %d:\n%s %s %s, %d años"
            ,i+1
            ,(sales.employees+i)->apellidoP
            ,(sales.employees+i)->apellidoM
            ,(sales.employees+i)->nombre
            ,(sales.employees+i)->edad);
    }

    free(sales.employees); // Liberamos memoria para evitar problemas
    return 0;
}
