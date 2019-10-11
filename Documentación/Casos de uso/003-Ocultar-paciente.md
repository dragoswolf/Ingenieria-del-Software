## Ocultar paciente

**ID:** 003

**Breve descripción:** Permite ocultar un paciente ya existente en el sistema.

**Actores principales:** Secretario (usuario).  
**Actores secundarios:** Paciente.

**Precondiciones:**

1. El paciente debe estar previamente registrado en el sistema.
2. Los datos identificadores del paciente que se quiere ocultar han de ser introducidos con éxito.

**Flujo Principal:**

1. El caso de uso empieza cuando el usuario desea ocultar un paciente ya existente en el sistema.
2. El sistema pregunta al usuario los datos identificadores del paciente que se quiere ocultar.
3. La ficha del paciente se modifica especificando que es un paciente oculto.

**Postcondiciones:**

* La ficha del paciente especifica que es un paciente oculto.

**Flujo alternativo:**

* Si el paciente no existe en el sistema se mostrará un error y se vuelve al menú.
