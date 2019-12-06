#include "Paciente.hpp"
#include <iostream>

bool Paciente::modificarPaciente() {

    // Guardamos en oldPaciente el paciente antes de ser modificado
    Paciente *oldPaciente = *this;

    // Formulario de modificación del objeto Paciente
    std::cout << "Que parametro del paciente desea modificar?" << std::end << std::endl;
    std::cout << "1. Nombre" << std::endl;
    std::cout << "2. Apellidos" << std::endl;
    std::cout << "3. Fecha de naciemiento" << std::endl;
    std::cout << "4. Email" << std::endl;
    std::cout << "5. Tipo" << std::endl;
    std::cout << "6. NUSHA" << std::endl;
    std::cout << "7. DNI" << std::endl;
    std::cout << "8. Activo" << std::endl;

    int opcion = 0;
    std::string newNombre;
    std::string newApellidos;
    std::string newFechaNacimiento;
    std::string newEmail;
    std::string newTipo;
    std::string newNUSHA;
    std::string newDNI;
    bool newEstado;
    int newEstadoAux;

    switch(opcion) {
        case 1:
            std::cout << "Inserte el nuevo nombre: ";
            std::cin >> newNombre;
            this->setNombre(newNombre);
            break;
        case 2:
            std::cout << "Inserte los nuevos apellidos: ";
            std::cin >> newApellidos;
            this->setApellidos(newApellidos);
            break;
        case 3:
            std::cout << "Inserte la nueva fecha de nacimiento (DD/MM/AAAA): ";
            std::cin >> newFechaNacimiento;
            this->setFechaNaciemiento(newFechaNacimiento);
            break;
        case 4:
            std::cout << "Inserte el nuevo email: ";
            std::cin >> newEmail;
            this->setEmail(newEmail);
            break;
        case 5:
            std::cout << "Inserte el nuevo tipo: ";
            std::cin >> newTipo;
            this->setTipo(newTipo);
            break;
        case 6:
            std::cout << "Inserte el nuevo NUSHA: ";
            std::cin >> newNUSHA;
            this->setNUSHA(newNUSHA);
            break;
        case 7:
            std::cout << "Inserte el nuevo DNI: ";
            std::cin >> newDNI;
            this->setDNI(newDNI);
            break;
        case 8:
            std::cout << "Inserte el nuevo estado (1/0): ";
            std::cin >> newEstadoAux;
            if (newEstadoAux == 1)
                newEstado = true;
            else
                newEstado = false;
            this->setEstado(newEstado);
            break;
        default:
            std::cout << "La opcion seleccionada no existe" << std::endl;
            break;
    }

    while(opcion != 0) {
        switch(opcion) {
            case 0;
                break;
            case 1:
                std::cout << "Inserte el nuevo nombre: ";
                std::cin >> newNombre;
                this->setNombre(newNombre);
                break;
            case 2:
                std::cout << "Inserte los nuevos apellidos: ";
                std::cin >> newApellidos;
                this->setApellidos(newApellidos);
                break;
            case 3:
                std::cout << "Inserte la nueva fecha de nacimiento (DD/MM/AAAA): ";
                std::cin >> newFechaNacimiento;
                this->setFechaNaciemiento(newFechaNacimiento);
                break;
            case 4:
                std::cout << "Inserte el nuevo email: ";
                std::cin >> newEmail;
                this->setEmail(newEmail);
                break;
            case 5:
                std::cout << "Inserte el nuevo tipo: ";
                std::cin >> newTipo;
                this->setTipo(newTipo);
                break;
            case 6:
                std::cout << "Inserte el nuevo NUSHA: ";
                std::cin >> newNUSHA;
                this->setNUSHA(newNUSHA);
                break;
            case 7:
                std::cout << "Inserte el nuevo DNI: ";
                std::cin >> newDNI;
                this->setDNI(newDNI);
                break;
            case 8:
                std::cout << "Inserte el nuevo estado (1/0): ";
                std::cin >> newEstadoAux;
                if (newEstadoAux == 1)
                    newEstado = true;
                else
                    newEstado = false;
                this->setEstado(newEstado);
                break;
            default:
                std::cout << "La opcion seleccionada no existe" << std::endl;
                break;
        }
    }

    if (this->getPaciente != oldPaciente)
    {
        std::cout << "El paciente ha sido modificado con exito" << std::endl;
        return true;
    }
    else
    {
        std::cout << "Ha ocurrido un error al modificar el paciente o los datos introducidos son los mismos" << std::endl;
        return false;
    }

}