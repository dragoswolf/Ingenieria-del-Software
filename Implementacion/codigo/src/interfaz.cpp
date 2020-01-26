#include "interfaz.hpp"

Paciente & Interfaz::createPaciente() {
    std::string dni;
    std::cout << "DNI: ";
    std::getline(std::cin,dni);
    std::cout << std::endl;

    std::string nusha;
    std::cout << "NUSHA: ";
    std::getline(std::cin,nusha);
    std::cout << std::endl;

    std::string nombre;
    std::cout << "Nombre: ";
    std::getline(std::cin,nombre);
    std::cout << std::endl;

    std::string apellidos;
    std::cout << "Apellidos: ";
    std::getline(std::cin,apellidos);
    std::cout << std::endl;

    std::string fechaDeNacimiento;
    std::cout << "Fecha de naciemiento (dd/mm/aaaa): ";
    std::getline(std::cin,fechaDeNacimiento);
    std::cout << std::endl;

    std::string email;
    std::cout << "Email: ";
    std::getline(std::cin,email);
    std::cout << std::endl;

    std::string telefono;
    std::cout << "Telefono: ";
    std::getline(std::cin,telefono);
    std::cout << std::endl;

    Paciente *newPaciente = new Paciente(dni, nusha, nombre, apellidos, fechaDeNacimiento, email, telefono);
    std::list<Paciente> iterator it;
    it = citasList_.end();
    citasList_.insert(it, newPaciente);
    return *newPaciente;
    // Paciente newPaciente(dni, nusha, nombre, apellidos, fechaDeNacimiento, email, telefono);
    // return newPaciente;
}

Paciente & Interfaz::readPaciente() {
    std::string dni;
    std::cout << "Inserte el DNI del paciente que desee leer" << std::endl;
    std::cout << "DNI: ";
    std::getline(std::cin,dni);
    std::list<Paciente> iterator it;
    for(it = pacienteList_.begin(); it != pacienteList_.end(); it++) {
        if (dni == it->getDni()) {
            std::cout << "DNI: " << it->getDni() << std::endl;
            std::cout << "NUSHA: " << it->getNusha() << std::endl;
            std::cout << "Nombre: " << it->getNombre() << std::endl;
            std::cout << "Apellidos: " << it->getApellidos() << std::endl;
            std::cout << "Fecha de naciemiento (dd/mm/aaaa): " << it->getFechaDeNacimiento() << std::endl;
            std::cout << "Email: " << it->getEmail() << std::endl;
            std::cout << "Telefono: " << it->getTelefono() << std::endl;
            return *it;
        }
    }
    std::cout << "El DNI proporcionado no se encuentra en la base de datos" << std::endl;
}

Paciente & Interfaz::updatePaciente() {
    //
    std::cout << "Inserte el nuevo valor" << std::endl << "Si no desea modificarlo pulse intro" << std::endl;
    std::string nuevoValor;

    std::string dni;
    std::cout << "Inserte el DNI del paciente que desee actualizar" << std::endl;
    std::cout << "DNI: ";
    std::getline(std::cin,dni);
    std::list<Paciente> iterator it;
    for(it = pacienteList_.begin(); it != pacienteList_.end(); it++) {
        if (dni == it->getDni()) {

            std::cout << "DNI: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                it->setDni(nuevoValor);
            }

            std::cout << "NUSHA: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                it->setNusha(nuevoValor);
            }

            std::cout << "Nombre: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                it->setNombre(nuevoValor);
            }
            
            std::cout << "Apellidos: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                it->setApellidos(nuevoValor);
            }

            std::cout << "Fecha de naciemiento (dd/mm/aaaa): " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                it->setFechaNacimiento(nuevoValor);
            }

            std::cout << "Email: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                it->setEmail(nuevoValor);
            }

            std::cout << "Telefono: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                it->setTelefono(nuevoValor);
            }

            std::cout << "Activo (s/n): " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                if (nuevoValor == "s") {
                    it->setEstado(true);
                }
                if (nuevoValor == "n") {
                    it->setEstado(false);
                }
                else {
                    std::cout << "El valor insertado no es válido" << std::endl << std::endl;
                }
            }

            return *it;
        }
    }

    std::cout << "El DNI proporcionado no se encuentra en la base de datos" << std::endl;

}

bool Interfaz::deletePaciente() {
    std::string dni;
    std::cout << "Inserte el DNI del paciente que desee borrar" << std::endl;
    std::cout << "DNI: ";
    std::getline(std::cin,dni);
    std::list<Paciente> iterator it;
    for(it = pacienteList_.begin(); it != pacienteList_.end(); it++) {
        if (dni == it->getDni()) {
            it = it.erase();
            // it = pacienteList_.erase(it);
            return true;
        }
    }
    std::cout << "El DNI proporcionado no se encuentra en la base de datos" << std::endl;
}

void Interfaz::listarPacientes() {
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

Cita & Interfaz::insertarCita() {
    std::string dni;
    std::cout << "DNI: ";
    std::getline(std::cin,dni);
    std::cout << std::endl;

    std::string fecha;
    std::cout << "Fecha: ";
    std::getline(std::cin,fecha);
    std::cout << std::endl;

    std::string motivo;
    std::cout << "Motivo: ";
    std::getline(std::cin,motivo);
    std::cout << std::endl;

    Cita *newCita = new Cita(dni, fecha, motivo);
    std::list<Cita> iterator it;
    it = citasList_.end();
    citasList_.insert(it, newCita);
    return *newCita;
}

Cita & Interfaz::readCita() {
    std::string dni;
    std::cout << "Inserte el DNI del paciente del cual desea leer la cita" << std::endl;
    std::cout << "DNI: ";
    std::getline(std::cin,dni);

    std::string fecha;
    std::cout << "Inserte la fecha de la cita" << std::endl;
    std::cout << "Fecha: ";
    std::getline(std::cin,fecha);

    std::list<Cita> iterator it;
    for(it = citasList_.begin(); it != citasList_.end(); it++) {
        if (dni == it->getDni() && fecha == it->getFecha()) {
            std::cout << "DNI: " << it->getDni() << std::endl;
            std::cout << "Fecha (dd/mm/aaaa): " << it->getFecha() << std::endl;
            std::cout << "Motivo: " << it->getMotivo() << std::endl;
            return *it;
        }
    }
    std::cout << "El DNI/Fecha proporcionados no se encuentran en la base de datos" << std::endl;
}

Cita & Interfaz::updateCita() {
    //
    std::cout << "Inserte el nuevo valor" << std::endl << "Si no desea modificarlo pulse intro" << std::endl;
    std::string nuevoValor;

    std::string dni;
    std::cout << "Inserte el DNI del paciente del cual desea modificar" << std::endl;
    std::cout << "DNI: ";
    std::getline(std::cin,dni);

    std::string fecha;
    std::cout << "Inserte la fecha de la cita" << std::endl;
    std::cout << "Fecha: ";
    std::getline(std::cin,fecha);

    std::list<Cita> iterator it;
    for(it = citasList_.begin(); it != citasList_.end(); it++) {
        if (dni == it->getDni()) {

            std::cout << "DNI: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                it->setDni(nuevoValor);
            }

            std::cout << "Fecha: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                it->setDni(nuevoValor);
            }
            std::cout << "Motivo: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                it->setDni(nuevoValor);
            }

            return *it;
        }
    }

    std::cout << "El DNI/Fecha proporcionados no se encuentran en la base de datos" << std::endl;

}

bool Interfaz::eliminarCita() {
    std::string dni;
    std::cout << "Inserte el DNI del paciente del cual desea borrar la cita" << std::endl;
    std::cout << "DNI: ";
    std::getline(std::cin,dni);

    std::string fecha;
    std::cout << "Inserte la fecha de la cita que desee borrar" << std::endl;
    std::cout << "Fecha (dd/mm/aaaa): ";
    std::getline(std::cin,fecha);

    std::list<Cita> iterator it;
    for(it = citasList_.begin(); it != citasList_.end(); it++) {
        if (dni == it->getDni() && fecha == it->getFecha())
        {
            it = citasList_.erase(it);
            // it = it.erase(it);
            return true;
        }
    }
    std::cout << "No se han encontrado citas correspondientes a ese DNI/Fecha" << std::endl;
    return false;
}

void Interfaz::mostrarCitas() {
    std::list<Cita>::iterator it;
    for(it = citasList_.begin(); it != citasList_.end(); it++) {
        std::cout << it->getDni() << std::endl;
        std::cout << it->getFecha() << std::endl;
        std::cout << it->getMotivo() << std::endl << std::endl;
    }
}

