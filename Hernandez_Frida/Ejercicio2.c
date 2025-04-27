#include <stdio.h>
#include <string.h>

//Hernández Rodríguez Frida

// Definir la estructura Producto
typedef struct {
    char nombre[30];
    float precio;
    int cantidad;
} Producto;

int main() {
    int n;
    float valorTotal = 0;

    // Pedir al usuario que ingrese número de productos
    printf("Número de productos: ");
    scanf("%d", &n);

    Producto productos[n]; 

    // Capturar los datos de cada producto
    for (int i = 0; i < n; i++) {
        printf("\nProducto %d:\n", i + 1);

        printf("Ingresa el nombre del producto<3: ");
        scanf("%s", productos[i].nombre);

        printf("Ingresa su precio mxn: ");
        scanf("%f", &productos[i].precio);

        printf("Ingresa la cantidad del mismo: ");
        scanf("%d", &productos[i].cantidad);
    }

    // Formatito de tabla lindo 
    printf("\n%-20s %-10s %-10s %-15s\n", "Producto", "Precio", "Cantidad", "Valor Total");
    printf("-------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        float valorProducto = productos[i].precio * productos[i].cantidad;
        valorTotal += valorProducto;

        printf("%-20s $%-9.2f %-10d $%-14.2f\n", productos[i].nombre, productos[i].precio, productos[i].cantidad, valorProducto);
    }

    printf("-------------------------------------------------------------\n");
    printf("%-20s %-10s %-10s $%-14.2f\n", "TOTAL", "", "", valorTotal);

    return 0;
}