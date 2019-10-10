## Búscar Usuario

**ID:** 05


**Breve descripción:** Permite buscar un paciente.


**Actores principales:** Secretario


**Actores secundarios:** Pacientes


**Precondiciones:**

1. El usuario debe de existir


**Flujo Principal:**

1. El caso empieza cuando el usuario selecciona la opción de búscar.

2. Se pregunta al usuario cúal es el campo por el que desea buscar:
        * Nombre 
        * Nombre y apellidos
        * DNI del paciente
    
3. Se sale de la búsqueda

**Postcondiciones:**

* El paciente búscado es seleccionado y se abre un menú para seleccionar las diferentes acciones disponibles

 **Flujo alternativo:**

* Si en alguna búsqueda no se encuentra el paciente indicado, mostrar un mensaje de error y dar la opciín de realizar una nueva búsqueda o salir.

