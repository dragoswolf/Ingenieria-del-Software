#include "interfaz.hpp"

void Interfaz::mostraPacientes() {
    std::list<Paciente>::iterator it;
    for(it = pacientesList_.begin(); it != pacientesList_.end(); it++) {
        std::cout << "Nombre: " << it->getNombre() << std::endl;
        std::cout << "Apellidos: " << it->getApellidos() << std::endl;
        std::cout << "Fecha de Nacimiento: " << it->getFechaDeNacimiento() << std::endl;
        std::cout << "Email: " << it->getEmail() << std::endl;
        std::cout << "Tipo: " << it->getTipo() << std::endl;
        std::cout << "Telefono: " << it->getTelefono() << std::endl;
        std::cout << "NUSHA: " << it->getNusha() << std::endl;
        std::cout << "DNI: " << it->getDni() << std::endl;
        std::cout << "Estado: " << it->getEstado() << std::endl;
    }
}
