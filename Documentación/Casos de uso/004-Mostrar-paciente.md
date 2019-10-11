## Mostrar paciente

**ID:** 004

**Breve descripción:** Permite visualizar un paciente ya existente en el sistema.

**Actores principales:** Secretario (usuario).  
**Actores secundarios:** Paciente.

**Precondiciones:**

1. El paciente debe estar previamente registrado en el sistema.
2. Los datos identificadores del paciente que se quiere visualizar han de ser introducidos con éxito.
3. El paciente debe ser un paciente visualizable (no oculto).

**Flujo Principal:**

1. El caso de uso empieza cuando el usuario desea visualizar un paciente ya existente en el sistema.
2. El sistema pregunta al usuario los datos identificadores del paciente que se quiere visualizar.
3. Se muestran los datos del paciente.

**Postcondiciones:**

* Los datos han debido de mostrarse por pantalla al usuario.

**Flujo alternativo:**

* Si el paciente no existe en el sistema o está oculto se mostrará un error y se vuelve al menú.
