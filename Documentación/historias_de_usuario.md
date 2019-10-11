# Historias de usuario

## Insertar Paciente

**ID:** 01

**Nombre:** Insertar nuevo paciente

**Prioridad:** 1

**Iteración:** 1

**Responsable:** Fernando Ramírez Baquerizo

**Descripción**

Como secretario quiero poder insertar un nuevo paciente al sistema.

**Validación**

* El paciente debe figurar en la base de datos

## Modificar Paciente

**ID:** 02

**Nombre:** Modificar paciente

**Prioridad:** 2

**Iteración:** 1

**Responsable:** Fernando Ramírez Baquerizo

**Descripción**

Como secretario quiero poder modificar los datos de un paciente ya registrado en el sistema.

**Validación**

* Los datos del paciente han de estar actualizados.

## Ocultar Paciente

**ID:** 03

**Nombre:** Ocultar paciente

**Prioridad:** 3

**Iteración:** 2

**Responsable:** Fernando Ramírez Baquerizo

**Descripción**

Como secretario quiero poder ocultar (dar de baja sin borrar) a un paciente ya registrado en el sistema.

**Validación**

* El paciente debe permanecer oculto a nivel de usuario pero seguir permaneciendo la base de datos.

## Mostrar Paciente

**ID:** 04

**Nombre:** Mostrar paciente

**Prioridad:** 1

**Iteración:** 1

**Responsable:** Fernando Ramírez Baquerizo

**Descripción**

Como secretario quiero poder mostrar la información relativa a un paciente.

**Validación**

* Los datos del paciente han de verse reflejados en la salida de datos.

## Búscar Usuario

**ID:** 05

**Nombre:** Búscar usuario por DNI

**Prioridad:** 5

**Iteración:** 2

**Responsable:** Dragos George Stan

**Descripción**

Como secretario quiero localizar la información de un usuario para poder consultar sus citas y poder realizar operaciones con las mismas

**Validación**

* Se debe de poder localizar a cualquier paciente.
* Los resultados unicamente pueden mostrar un resultado.
* Se deberán de mostrar los resultados en forma de lista con los datos identificativos del paciente.
* Cuando un usuario es localizado se mostrará la ficha de paciente con las respectivas citas asignadas.



## Eliminar Usuario

**ID:** 06

**Nombre:** Eliminar usuario del sistema

**Prioridad:** 3

**Iteración:** 1

**Responsable:** Héctor Romero López

**Descripción**

Como secretario quiero poder eliminar un paciente del sistema cuando este abandona la clínica.

**Validación**

* No se podrán eliminar el historial médico de los pacientes.
* Los pacientes no se eliminaran de la base de datos.
* Se cancelaran todas las citas próximas asociadas al paciente.
* Se deberá de mostrar una ventana de confirmación previa a la eliminacion del paciente.

## Mostrar lista de pacientes

**ID:** 07

**Nombre:** Listar lista de pacientes

**Prioridad:** 2

**Iteración:** 1

**Responsable:** Héctor Romero López

**Descripción**

Como secretario quiero poder listar los pacientes que esten registrados en la clínica.

**Validación**

* Se listarán todos los pacientes que existen en la clínica.
* La lista estará ordenada por los pacientes que tienen citas próximas.


## Agregar cita

**ID:** 08

**Nombre:** Agregar una cita al paciente

**Prioridad**: 4

**Iteración:** 1

**Responsable:** Fernando Ramirez Baquerizo

**Descripción**

Como secreatrio quiero poder agregar una cita a un paciente en concreto

**Validación**

* Se podrá agregar una cita a cualquier paciente.
* No será posible crear una cita si existe una con la misma fecha.
* No será posible crear una cita si existe otra cita de cualquier paciente en un rango de 10 minutos.
* Será necesario rellenar los campos de fecha, descripción de la cita.
* En el caso de que el usuario tenga una cita en la misma semana de la fecha establecida se mostrará una alerta

## Modificar la cita

**ID:** 09

**Nombre:** Modificar la cita existente de un paciente

**Prioridad**: 3

**Iteración:** 1

**Responsable:** Héctor Romero López

**Descripción**

Como secreatario quiero poder modificar la cita asignada de un paciente

**Validación**

* Se podrá modificar cualquier cita del paciente próxima al día actual.
* No será posible cambiar el campo de fecha a una anterior del dia posterior al actual.
* Se debera de comprobar si al cambiar la fecha de la cita no existe una el mismo día y a la misma hora.
