**ID**: 011	

**Descripción**: Nos permite crear un archivo donde guardar los datos del diagnóstico.

**Actores Principales**: Secretario	

**Actores Secundarios**: Paciente

**Precondiciones**:

- Que el paciente tenga un diagnóstico asignado.
- Que el paciente esté registrado en el sistema.

**Flujo principal**:

1. El secretario desea consultar el diagnóstico de un paciente.
2. El secretario accede a la información de un paciente en concreto mediante la funcionalidad de busqueda de paciente.
3. Accede a la opción de visualizar diagnóstico.
4. Se accede a la opción "guardar" que nos permite guardar el diagnóstico en un fichero.
5. Una vez guardado, se vuelve al menú principal.

**Postcondiciones**:

- Ninguna.

**Flujo alternativo**:

- Si el paciente no tiene diagnóstico, se mostrará un mensaje de error.
