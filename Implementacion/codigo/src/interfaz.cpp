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

bool Interfaz::eliminarCita() {
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

void Interfaz::insertarCita() {
    // Creo un nuevo objeto cita y rellenamos los campos
    cita nuevaCita;
    std::string dni;
    std::cout << "Inserte el DNI del paciente alque se le va a asignar la cita: ";
    fgets(dni, 9, stdin);
    nuevaCita.setDni(dni);
    std::string fecha;
    std::cout << "Inserte la fecha de la cita: ";
    fgets(fecha, 10, stdin);
    nuevaCita.setFecha(fecha);
    std::string motivo;
    std::cout << "Inserte el motivo de la cita: ";
    fgets(motivo, 100, stdin);
    nuevaCita.setMotivo(motivo);

    // Creo iterador y lo posiciono al final
    std::list<Cita> iterator it;
    it = citas_.end();

    // Inserto el objeto cita al final de la lista
    citas_.insert(it, nuevaCita);
    return true;
}

Paciente Interfaz::updatePaciente(Paciente currentPaciente) {

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

void Interfaz::mostrarCitas() {
    std::list<Cita>::iterator it;
    for(it = citasList_.begin(); it != citasList_.end(); it++) {
        std::cout << it->getFecha() << std::endl;
        std::cout << it->getMotivo() << std::endl;
        std::cout << it->getDni() << std::endl << endl;
    }
}

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