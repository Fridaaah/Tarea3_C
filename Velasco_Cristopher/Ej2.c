//2. Crea un arreglo de estructuras Producto (nombre, precio, cantidad) y calcula el valor total de inventario (0.5 pts.)
//Velasco Avila Cristopher

#include <stdio.h>

typedef struct {
    char nombre [20];
    float precio;
    int cantidad;
} Producto;

int main (){

    int n;
    float sumatotal=0;
    printf("Numero de productos: ");
    scanf("%d",&n);

    Producto productos[n]; // Arreglo de estructuras creado de la forma estandar
    //Creación de valores

    for (int i=0;i<n;i++){
        printf ("\nIngrese el nombre del producto %d: ",i+1); // Para asignar valores usamos la variable auxiliar i
        scanf("%s",productos[i].nombre);

        printf ("Ingrese el precio del producto %d: ",i+1);
        scanf("%f",&productos[i].precio);

        printf ("Ingrese la cantidad del producto %d: ",i+1);
        scanf("%d",&productos[i].cantidad);

    }

    printf("Productos ingresados:\n");

    for (int i=0;i<n;i++){ // Imprimimos los valores de cada elemento del arreglo.
        float temp = productos[i].cantidad*productos[i].precio;
        printf("\n\nProducto %d: %s",i+1,productos[i].nombre);
        printf("\nValor total del producto: %.2f",temp);
        sumatotal+=temp;
    }

    printf("\n\nValor total del inventario: %.2f",sumatotal); //El valor del inventario el la suma total de cada elemento



    return 0;
}
