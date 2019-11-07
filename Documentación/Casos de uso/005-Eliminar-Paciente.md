## Eliminar Paciente

**ID:** 05


**Breve descripción:** Eliminar un paciente determinado


**Actores principales:** Secretario (usuario)


**Actores secundarions:** Paciente


**Precondiciones:**

1. El paciente debe de existir.

**Flujo Principal**

1. El caso comienza cuando el usuario desea eliminar un paciente en el menu que aparece tras el proceso de buscar paciente y seleccionar paciente.

2. El sistema pide una confirmación del borrado del paciente seleccionado.

3. El sistema modifica la ficha de usuario para dejarlo desactivado

**Postcondiciones:**

* El paciente seleccionado es borrado del sistema

**Flujo alternativo**
 
* Si el paciente no existe, el sistema mostrará un error.

* Si el usuario rechaza la confirmación de borrado se cancelará el proceso de borrado.
