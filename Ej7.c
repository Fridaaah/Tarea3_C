#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Paciente {
    char nombre[50];
    int edad;
    char diagnostico[100];
    int prioridad;
    struct Paciente* siguiente;
} Paciente;

// Función para crear paciente con todo y argumentos
// Se usa const char para que no se modifique la cadena
Paciente* crearPaciente(const char* nombre, int edad, const char* diagnostico, int prioridad) {
    Paciente* nuevoPaciente = (Paciente*)malloc(sizeof(Paciente));
    if (!nuevoPaciente) { // Error en caso de no agregar la memoria nueva
        printf("No se alojó la memoria!\n");
        exit(1);
    }
    strcpy(nuevoPaciente->nombre, nombre);
    nuevoPaciente->edad = edad;
    strcpy(nuevoPaciente->diagnostico, diagnostico);
    nuevoPaciente->prioridad = prioridad;
    nuevoPaciente->siguiente = NULL;
    return nuevoPaciente;
}

//Función para creatr al paciente desde cero, se recibe un doble apuntador y los parametros para la creacion
void agregarPaciente(Paciente** head, const char* nombre, int edad, const char* diagnostico, int prioridad) {
    Paciente* nuevoPaciente = crearPaciente(nombre, edad, diagnostico, prioridad); // Se crea el paciente como si de un objeto se tratase
    nuevoPaciente->siguiente = *head; // Logica para manejar el orden de cada nodo
    *head = nuevoPaciente;
    printf("Paciente agregado!: %s\n", nombre); // Confirmación
}

void borrarPaciente(Paciente** head, const char* nombre) {
    Paciente* actual = *head; // Apuntador actual para seleccionar el nodo principal "head"
    Paciente* anterior = NULL; // Apuntador para el nodo anterior

    while (actual != NULL && strcmp(actual->nombre, nombre) != 0) { // Mientras el actual sea diferente de nulo y la busqueda de cadena sea diferente de cero, paciente encontrado
        anterior = actual;
        actual = actual->siguiente;
    }
    if (actual == NULL) { //Si el paciente es nulo, entonces el paciente no ha sido encontrado
        printf("Paciente no encontrado!\n");
        return;
    }
    if (anterior == NULL) {
        *head = actual->siguiente;
    } else {
        anterior->siguiente = actual->siguiente;
    }
    printf("Paciente eliminado: %s\n", nombre);
    free(actual);
}

void imprimir(Paciente* head) { //Impresión con while, se imprimen detalles hasta que el que se va a imprimir es nulo.
    if (head == NULL) {
        printf("Error! no hay pacientes\n");
        return;
    }

    printf("\nLista de pacientes:\n");
    Paciente* actual = head;
    while (actual != NULL) {
        printf("Nombre: %s\nEdad: %d\nDiagnostico: %s\nPrioridad: %d\n\n", 
               actual->nombre, actual->edad, actual->diagnostico, actual->prioridad);
        actual = actual->siguiente;
    }
    printf("\n");
}

void libera_memoria(Paciente** head) { // Para liberar la memoria usamos el recorrido de cada nodo y se libera uno por uno
    Paciente* actual = *head;
    while (actual != NULL) {
        Paciente* temp = actual;
        actual = actual->siguiente;
        free(temp);
    }
    *head = NULL;
}

int main() {
    Paciente* head = NULL;

    agregarPaciente(&head, "Juan Aldama", 24, "Ataque  al corazon", 1);
    agregarPaciente(&head, "Martin Segundo", 60, "Neumonia", 1);
    agregarPaciente(&head, "Crizzz Velasco", 53, "Tos", 3);
    agregarPaciente(&head, "Antonio Perez", 24, "Gripa", 3);
    agregarPaciente(&head, "Jennifer Guzmán", 18, "COVID-19", 1);
    agregarPaciente(&head, "Maria Hernandez", 34, "Dolor muscular", 1);
    agregarPaciente(&head, "Wendy Valdez", 27, "Diabetes", 2);
    agregarPaciente(&head, "Marco Santiago", 30, "Hemorragia nasal", 2);
    agregarPaciente(&head, "David Rodriguez", 19, "Desmayo", 2);
    agregarPaciente(&head, "Luis Fernandez", 24, "Tos", 3);
    agregarPaciente(&head, "Juan Mosqueda", 24, "Tos", 3);


    imprimir(head);

    borrarPaciente(&head, "Marco Santiago");
    borrarPaciente(&head, "Antonio Perez");

    imprimir(head);

    libera_memoria(&head);

    return 0;
}