#include "interfaz.hpp"

void interfaz::mostrarCitas() {
    std::list<Cita>::iterator it;
    for(it = citasList_.begin(); it != citasList_.end(); it++) {
        std::cout << it->getFecha() << std::endl;
        std::cout << it->getMotivo() << std::endl;
        std::cout << it->getDni() << std::endl << endl;
    }
}
