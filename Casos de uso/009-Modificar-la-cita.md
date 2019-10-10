## Modificar la cita

**ID:** 09


**Breve descripción:** Permite modificar la cita de un paciente.


**Actores principales:** Secretario


**Actores secundarions:** Pacientes



**Precondiciones**

1. El usuario que tiene asignado la cita debe de existir.
2. La cita tiene que existir en la base de datos.
3. La cita tiene que tener fecha del mismo día o posterior.


**Flujo principal:**
    
1. El caso comienza cuando el usuario selecciona modificar dentro de una cita.
2. El sistema muestra los campos de la cita con los valores actuales para poder modificarlos.
3. El sistema guardará las modificaciones de la cita en la base de datos

**Postcondiciones**

* La cita queda guardada con la última modificación que realizamos


**Flujo alternativo:**

* Si los datos introducidos en la modificación no son correctos se mostrará un mensaje de error por pantalla y se devolverá a mostrar la información de la cita.



