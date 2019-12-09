#include "Database.hpp"
#include <iostream>

Paciente Database::updatePaciente(Paciente currentPaciente) {

    // Guardamos en currentPaciente el paciente antes de ser modificado
    Paciente oldPaciente = currentPaciente;

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
            currentPaciente.setNombre(newNombre);
            break;
        case 2:
            std::cout << "Inserte los nuevos apellidos: ";
            std::cin >> newApellidos;
            currentPaciente.setApellidos(newApellidos);
            break;
        case 3:
            std::cout << "Inserte la nueva fecha de nacimiento (DD/MM/AAAA): ";
            std::cin >> newFechaNacimiento;
            currentPaciente.setFechaDeNaciemiento(newFechaNacimiento);
            break;
        case 4:
            std::cout << "Inserte el nuevo email: ";
            std::cin >> newEmail;
            currentPaciente.setEmail(newEmail);
            break;
        case 5:
            std::cout << "Inserte el nuevo tipo: ";
            std::cin >> newTipo;
            currentPaciente.setTipo(newTipo);
            break;
        case 6:
            std::cout << "Inserte el nuevo NUSHA: ";
            std::cin >> newNUSHA;
            currentPaciente.setNUSHA(newNUSHA);
            break;
        case 7:
            std::cout << "Inserte el nuevo DNI: ";
            std::cin >> newDNI;
            currentPaciente.setDni(newDNI);
            break;
        case 8:
            std::cout << "Inserte el nuevo estado (1/0): ";
            std::cin >> newEstadoAux;
            if (newEstadoAux == 1)
                newEstado = true;
            else
                newEstado = false;
            currentPaciente.setEstado(newEstado);
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
                currentPaciente.setNombre(newNombre);
                break;
            case 2:
                std::cout << "Inserte los nuevos apellidos: ";
                std::cin >> newApellidos;
                currentPaciente.setApellidos(newApellidos);
                break;
            case 3:
                std::cout << "Inserte la nueva fecha de nacimiento (DD/MM/AAAA): ";
                std::cin >> newFechaNacimiento;
                currentPaciente.setFechaDeNaciemiento(newFechaNacimiento);
                break;
            case 4:
                std::cout << "Inserte el nuevo email: ";
                std::cin >> newEmail;
                currentPaciente.setEmail(newEmail);
                break;
            case 5:
                std::cout << "Inserte el nuevo tipo: ";
                std::cin >> newTipo;
                currentPaciente.setTipo(newTipo);
                break;
            case 6:
                std::cout << "Inserte el nuevo NUSHA: ";
                std::cin >> newNUSHA;
                currentPaciente.setNUSHA(newNUSHA);
                break;
            case 7:
                std::cout << "Inserte el nuevo DNI: ";
                std::cin >> newDNI;
                currentPaciente.setDni(newDNI);
                break;
            case 8:
                std::cout << "Inserte el nuevo estado (1/0): ";
                std::cin >> newEstadoAux;
                if (newEstadoAux == 1)
                    newEstado = true;
                else
                    newEstado = false;
                currentPaciente.setEstado(newEstado);
                break;
            default:
                std::cout << "La opcion seleccionada no existe" << std::endl;
                break;
        }
    }

    return currentPaciente;

    // Comprobacíon de que el objeto se ha modificado
    /*
    if (
        (currentPaciente.getNombre() != oldPaciente.getNombre()) ||
        (currentPaciente.getApellidos() != oldPaciente.Apellidos()) || 
        (currentPaciente.getFechaDeNacimiento() != oldPaciente.getFechaDeNacimiento()) ||
        (currentPaciente.getEmail() != oldPaciente.getEmail()) || 
        (currentPaciente.getTipo() != oldPaciente.getTipo()) ||
        (currentPaciente.getNusha() != oldPaciente.getNusha()) || 
        (currentPaciente.getDni() != oldPaciente.getDni()) ||
        (currentPaciente.getEstado() != oldPaciente.getEstado())
        )
    {
        std::cout << "El paciente ha sido modificado con exito" << std::endl;
        return 1;
    }
    else
    {
        std::cout << "Ha ocurrido un error al modificar el paciente o los datos introducidos son los mismos" << std::endl;
        return 0;
    }
    */

}

