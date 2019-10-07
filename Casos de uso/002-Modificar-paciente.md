## Modificar paciente

**ID:** 002

**Breve descripción:** Permite modificar un paciente ya existente en el sistema.

**Actores principales:** Secretario (usuario).  
**Actores secundarios:** Paciente.

**Precondiciones:**

1. El paciente debe estar previamente registrado en el sistema.
2. Los datos identificadores del paciente que se quiere modificar han de ser introducidos con éxito.

**Flujo Principal:**

1. El caso de uso empieza cuando el usuario desea modificar un paciente ya existente en el sistema.
2. El sistema pregunta al usuario los datos identificadores del paciente que se quiere modificar.
3. El usuario especifíca qué dato desea modificar.
4. El usuario introduce los nuevos datos del paciente que se está modificando.
5. El sistema pregunta si se desean modificar más datos.
6. En caso afirmativo se vuelve al flujo no. 3.

**Postcondiciones:**

* El sistema debe haber actualizado los datos previamente introducidos.

**Flujo alternativo:**

* Si el paciente no existe en el sistema se mostrará un error y se vuelve al menú.
