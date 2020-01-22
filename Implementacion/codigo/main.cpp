#include "cita.hpp"
//#include "interfaz.hpp"
#include "paciente.hpp"
#include "tratamiento.hpp"

int main() {

    Paciente nuevoPaciente("dni", "nusha", "nombre", "apellidos", "fechaDeNacimiento", "email", "telefono");

    // Probar con una fecha menor que la de hoy y despues probar con una fecha mayor que la de hoy
    Cita nuevaCita("dni", "04/12/2020", "motivo");
    std::cout << nuevaCita.getFecha() << std::endl << std::endl;

    //Podeis probar a hacer perrerias con los tratamientos
    Tratamiento nuevoTratamiento("medicacion", "12/12/2020", "15/12/2024");
    std::cout << nuevoTratamiento.getFechaInicio() << std::endl;
    std::cout << nuevoTratamiento.getFechaFin() << std::endl << std::endl;

    return 0;
}