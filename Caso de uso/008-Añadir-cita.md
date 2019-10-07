## Añadir cita

**ID:**08
**Actores principales:**Secretario
**Actores secundarions:**Paciente

**Precondiciones**
    
    1. El usuario tiene que existir en al base de datos.
    2. No exista una cita asignada a esa hora.
    3. La cita sea asignada en horario laboral.

**Flujo principal**
    
    1. El caso comienza cuando el usuario selecciona en el menú la opción agregar cita
    2. El usuario seleccionará la fecha deseada para seleccionar la cita
    3. El usuario buscará el paciente al que asignar la cita
    4. El sistema compreuba que no exista una cita en esa fecha y asigna la cita al paciente

    
**Flujo alternativo**

    1. Si existe una cita en esa fecha se mostrará un mensaje de error y se cancelará el proceso.
    
    2. Si el usuario buscado no existe en base de datos, mostrará un mensaje de error y permitirá buscar otro.

    3. Si el paciente tiene una cita próxima se le informará al usuario con un mensaje por pantalla y se necesitará confirmación para agrear la nueva.