# Ejercicio6.c | Sistema de Gestión de Catálogo de Libros

Este programa permite gestionar un catálogo de libros en una biblioteca, agregando o eliminando libros dinámicamente durante la ejecución.

## ¿Qué hace este programa?

1. **Agregar libros:** Puedes agregar libros con título, autor, año de publicación y disponibilidad.
2. **Eliminar libros:** Puedes eliminar libros específicos del catálogo por su título.
3. **Mostrar el catálogo:** Puedes ver todos los libros almacenados en el catálogo.

## ¿Cómo usarlo?

1. **Compila el programa:**
   Asegúrate de tener instalado un compilador de C como `gcc`. Luego, en tu terminal, ejecuta:
   ```bash
   gcc Ejercicio6.c -o Ej6Biblioteca
   ```

2. **Ejecuta el programa:**
   Una vez compilado, corre el programa con el siguiente comando:
   ```bash
   ./Ej6Biblioteca
   ```

3. **Interacción con el programa:**
   - El programa agregará 7 libros iniciales automáticamente.
   - Luego eliminará 3 libros específicos.
   - Finalmente, mostrará el catálogo actualizado con los libros restantes.

## Imagen que ejemplifica la ejecución del programa
<img width="338" alt="ej6" src="https://github.com/user-attachments/assets/d4101324-3243-4de3-ae08-992bcc87ac09" />

## Notas

- Asegúrate de ingresar correctamente los títulos al eliminar libros.
- El programa utiliza memoria dinámica, por lo que manejará eficientemente el crecimiento o reducción del catálogo.

# Ejercicio7.c | Sistema de Gestión de Catálogo de Libros

Este programa permite agregar y eliminar pacientes de un hospital con llamadas de función desde main

## ¿Qué hace este programa?

Para usar el programa, se deben de llamar a las respectivas funciones desde el archivo main y agregar o eliminar segun los parametros:

1. **agregarPaciente:** Tiene como parametros la direccion de head (que siempre es la misma llamada), nombre, edad, diagnostico y prioridad
2. **imprimir:** Imprime cada uno de los nodos paciente disponible
3. **borrarPaciente** Elimina uno de los pacientes por el nombre
4. **libera_memoria** Libera completamente la memoria de los pacientes

## ¿Cómo usarlo?

1. **Compila el programa:**
   Asegúrate de tener instalado un compilador de C como `gcc`. Luego, en tu terminal, ejecuta:
   ```bash
   gcc -o Ej7.out Ej7.c
   ```

2. **Ejecuta el programa:**
   Una vez compilado, corre el programa con el siguiente comando:
   ```bash
   ./Ej7.out
   ```

3. **Interacción con el programa:**
   - El programa agrega 10 pacientes con diferentes parametros
   - El programa imprime la lista de pacientes
   - Elimina dos pacientes por el nombre
   - Imprime la lista nuevamente
   - Libera memoria

## Imagen que ejemplifica la ejecución del programa
![Ejecución ejercicio 7](https://i.imgur.com/HxWxjN5.png)
![Ejecución ejercicio 7](https://i.imgur.com/DJXME8N.png)

## Notas

Al usar la función para agregar un paciente, el primer parametro siempre sera &head, pues apunta a la dirección el nodo head
Asegurate de escribir correctamente el numero de parametros adecuado

- Asegúrate de ingresar correctamente los títulos al eliminar libros.
- El programa utiliza memoria dinámica, por lo que manejará eficientemente el crecimiento o reducción del catálogo.
