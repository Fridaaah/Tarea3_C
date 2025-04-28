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
