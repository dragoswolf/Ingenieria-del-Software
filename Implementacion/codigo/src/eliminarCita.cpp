#include "insterfaz.hpp.hpp"

bool interfaz::eliminarCita() {
    std::string dni;
    std::cout << "Inserte el DNI del paciente del cual desee eliminar la cita: ";
    fgets(dni, 9, stdin);
    std::string fecha;
    std::cout << "Inserte la fecha de la cita que desea eliminar: ";
    fgets(fecha, 10, stdin);
    std::list<Cita> iterator it;
    for(it = citasList_.begin(); it != citasList_.end(); it++) {
        if (dni == citasList_.getDni() && fecha == citasList_.getFecha())
        {
            citasList_.erase(it);
            return true;
        }
    }
    return false;
}