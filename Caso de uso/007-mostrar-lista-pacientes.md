## Mostrar lista de pacientes

**ID:**07
**Actores principales:**Secretario
**Actores secundarions:**Paciente

**Precondiciones**
    1. La base de datos debe de contener usuarios

**Flujo principal**

    1. El caso comienza cuando el usuario entra al programa y selecciona en el menú la opción mostrar usuarios.
    2. El sistema muestra un listado de los pacientes ordenados por las citas más proximas.

**Postcondiciones**

    * Tras mostrar la lista de pacientes, poder mostrar la información de uno de ellos.

**Flujo alternativo**
    * Si no existen pacientes en la base de datos, se muestra un mensaje de error
