**ID**: 011	

**Descripción**: Nos permite crear un tratamiento para un paciente.

**Actores Principales**: Secretario	

**Actores Secundarios**: Paciente

**Precondiciones**:

- Que el paciente tenga un tratamiento asignado.
- Que el paciente esté registrado en el sistema y esté activo.

**Flujo principal**:

1. El secretario desea consultar el tratamiento de un paciente.
2. El secretario accede a la información de un paciente en concreto mediante la funcionalidad de busqueda de paciente.
3. Accede a la opción de crear tratamiento médico.
4. Se accede a la opción "guardar" que nos permite guardar el tratamiento en un fichero.
5. Una vez guardado, se vuelve al menú principal.

**Postcondiciones**:

- Ninguna.

**Flujo alternativo**:

- Si el paciente no tiene tratamiento asignado, se mostrará un mensaje de error.
