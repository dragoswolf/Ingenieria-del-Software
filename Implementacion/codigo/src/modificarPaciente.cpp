#include "interfaz.hpp"

Paciente interfaz::updatePaciente(Paciente currentPaciente) {

    std::cout << "Inserte el nuevo (si no desea modificarlo, solamente pulse intro)" << std::endl << std::endl;

    std::string nuevoValor;

    std::cout << "Nombre: " << std::endl;
    std::getline(std::cin,nuevoValor);
    if (nuevoValor != "\n") {
        currentPaciente.setNombre(nuevoValor);
    }
    
    std::cout << "Apellidos: " << std::endl;
    std::getline(std::cin,nuevoValor);
    if (nuevoValor != "\n") {
        currentPaciente.setApellidos(nuevoValor);
    }

    std::cout << "Fecha de naciemiento (dd/mm/aaaa): " << std::endl;
    std::getline(std::cin,nuevoValor);
    if (nuevoValor != "\n") {
        currentPaciente.setFechaNacimiento(nuevoValor);
    }

    std::cout << "Email: " << std::endl;
    std::getline(std::cin,nuevoValor);
    if (nuevoValor != "\n") {
        currentPaciente.setEmail(nuevoValor);
    }

    std::cout << "Telefono: " << std::endl;
    std::getline(std::cin,nuevoValor);
    if (nuevoValor != "\n") {
        currentPaciente.setTelefono(nuevoValor);
    }

    std::cout << "Tipo (*FORMATO*): " << std::endl;
    std::getline(std::cin,nuevoValor);
    if (nuevoValor != "\n") {
        currentPaciente.setTipo(nuevoValor);
    }

    std::cout << "NUSHA: " << std::endl;
    std::getline(std::cin,nuevoValor);
    if (nuevoValor != "\n") {
        currentPaciente.setNusha(nuevoValor);
    }

    std::cout << "DNI: " << std::endl;
    std::getline(std::cin,nuevoValor);
    if (nuevoValor != "\n") {
        currentPaciente.setDni(nuevoValor);
    }

    std::cout << "Activo (s/n): " << std::endl;
    std::getline(std::cin,nuevoValor);
    if (nuevoValor != "\n") {
        if (nuevoValor == "s") {
            currentPaciente.setEstado(true);
        }
        if (nuevoValor == "n") {
            currentPaciente.setEstado(false);
        }
        else {
            std::cout << "El valor insertado no es válido" << std::endl << std::endl;
        }
    }

    return currentPaciente;

}