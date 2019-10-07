## Insertar paciente

**ID:** 001

**Breve descripción:** Permite insertar un nuevo paciente.

**Actores principales:** Secretario (usuario).  
**Actores secundarios:** Paciente.

**Precondiciones:**

1. Debe haber espacio en el sistema.
2. El paciente no debe estar previamente registrado en el sistema.

**Flujo Principal:**

1. El caso de uso empieza cuando el usuario desea añadir un nuevo paciente al sistema.
2. El sistema recoge y almacena los datos introducidos por el usuario.

**Postcondiciones:**

* El sistema debe contener los datos previamente introducidos.

**Flujo alternativo:**

* Si no se introducen los campos obligatorios (DNI, nombre, apellios y fecha de nacimiento), el sistema muestra un error y pide que se introduzcan.
* Si no hay espacio en el sistema se mostrará un error y se vuelve al menú.
* Si el paciente ya existe en el sistema se mostrará un error y se vuelve al menú.
