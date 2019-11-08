# Diagrama de clases

![][Diagrama de Clases.jpg]

## Definición de clases

* Persona: Clase que especifica todos los atributos básicos y los métodos para usarlos requeridos por cualquier persona.

* Secretario: Clase encargada de interactuar con el sistema.

* Paciente: Clase encargada de representar los pacientes y los métodos para asignar las citas y tratamientos.

* Cita: Clase encargada de almacenar los atributos de las citas y métodos para la comprobación de los mismos.

* Tratamiento: Clase encargada de almacenar los atributos de los tratamientos y métodos para la comprobación de los mismos.

* Historial médico: Clase encargada de obtener el historial médico ( conformado por los tratamientos y las citas) para cada uno de los pacientes.

* Sistema: Clase encargada de proveed interfaz gráfica (entrada por terminal) al secretario.

* Database: Clase encargada de almacenar la información en una base de datos (ficheros binarios) y de cargar la información en el sistema.
