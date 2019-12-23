//#include "CLASE.hpp"

bool CLASE::eliminarCita(fecha, dni) {
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