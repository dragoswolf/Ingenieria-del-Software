#include "interfaz.hpp"

bool Paciente::buscarPaciente() {
    std::string dni;
    std::cout << "Inserte el DNI del paciente que esta buscando: ";
    fgets(dni, 9, stdin);
    std::list<Paciente> iterator it;
    for(it = pacienteList_.begin(); it != pacienteList_.end(); it++) {
        if (dni == pacienteList_.getDni())
        {
            return true;
        }
    }
    return false;
}