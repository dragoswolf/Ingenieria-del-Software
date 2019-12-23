#include "database.hpp"

bool Paciente::buscarPaciente(dni) {
    std::list<Paciente> iterator it;
    for(it = pacienteList_.begin(); it != pacienteList_.end(); it++) {
        if (dni == pacienteList_.getDni())
        {
            return true;
        }
    }
    return false;
}