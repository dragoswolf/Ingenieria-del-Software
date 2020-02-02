#include "interfaz.hpp"
Interfaz::Interfaz(const std::string & folder){
    db_.setFolder(folder);
    db_.reloadFiles();
    db_.loadDatabase();
    pacienteList_ = db_.getPacientes();
}
Paciente Interfaz::createPaciente() {
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

    Paciente newPaciente = Paciente(dni, nusha, nombre, apellidos, fechaDeNacimiento, email, telefono);
    pacienteList_.push_back(newPaciente);
    db_.exportInformationToFile(newPaciente);
    return newPaciente;

}

Paciente Interfaz::buscarPaciente(std::string pacienteDni){
    std::list<Paciente>::iterator it = pacienteList_.begin();
    for(; it != pacienteList_.end(); it++){
        if (it->getDni() == pacienteDni){
            return *it;
        }
    }
    Paciente emptyPaciente = Paciente();
    return emptyPaciente;
}

void Interfaz::readPaciente(Paciente & paciente) {
    std::cout << "DNI: " << paciente.getDni() << std::endl;
    std::cout << "NUSHA: " << paciente.getNusha() << std::endl;
    std::cout << "Nombre: " << paciente.getNombre() << std::endl;
    std::cout << "Apellidos: " << paciente.getApellidos() << std::endl;
    std::cout << "Fecha de naciemiento (dd/mm/aaaa): " << paciente.getFechaDeNacimiento() << std::endl;
    std::cout << "Email: " << paciente.getEmail() << std::endl;
    std::cout << "Telefono: " << paciente.getTelefono() << std::endl;     
}

bool Interfaz::updatePaciente(Paciente & paciente) {
    
    std::cout << "Inserte el nuevo valor" << std::endl << "Si no desea modificarlo pulse intro" << std::endl;
    std::string nuevoValor;
    std::list<Paciente>::iterator it;
    for(it = pacienteList_.begin(); it != pacienteList_.end(); it++) {
        if (paciente.getDni() == it->getDni()) {
            Paciente paciente = *it;
            std::cout << "DNI: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                paciente.setDni(nuevoValor);
            }

            std::cout << "NUSHA: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                paciente.setNusha(nuevoValor);
            }

            std::cout << "Nombre: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                paciente.setNombre(nuevoValor);
            }
            
            std::cout << "Apellidos: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                paciente.setApellidos(nuevoValor);
            }

            std::cout << "Fecha de naciemiento (dd/mm/aaaa): " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                paciente.setFechaDeNacimiento(nuevoValor);
            }

            std::cout << "Email: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                paciente.setEmail(nuevoValor);
            }

            std::cout << "Telefono: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                paciente.setTelefono(nuevoValor);
            }

            (*it) = paciente;
            db_.exportInformationToFile(paciente);
            return true;
        }
    }

    std::cout << "El DNI proporcionado no se encuentra en la base de datos" << std::endl;
    return false;
}

bool Interfaz::deletePaciente(Paciente & paciente) {
    std::list<Paciente>::iterator it;
    for(it = pacienteList_.begin(); it != pacienteList_.end(); it++) {
        if (paciente.getDni() == it->getDni()) {
            std::cout<<"LDER:"<<db_.getFolder();
            db_.removeFile(it->getDni());
            it = pacienteList_.erase(it);
            return true;
        }
    }
    return false;
}

void Interfaz::listarPacientes() {
    std::list<Paciente>::iterator it;
    for(it = pacienteList_.begin(); it != pacienteList_.end(); it++) {
        std::cout << "Nombre: " << it->getNombre() << std::endl;
        std::cout << "Apellidos: " << it->getApellidos() << std::endl;
        std::cout << "Fecha de Nacimiento: " << it->getFechaDeNacimiento() << std::endl;
        std::cout << "Email: " << it->getEmail() << std::endl;
        std::cout << "Telefono: " << it->getTelefono() << std::endl;
        std::cout << "NUSHA: " << it->getNusha() << std::endl;
        std::cout << "DNI: " << it->getDni() << std::endl;
        std::cout << "Estado: " << it->getEstado() << std::endl;
    }
}

Cita  Interfaz::createCita(const std::string  & dni) {
    Cita newCita("00-00-0000", "NULL");
    std::list<Paciente>::iterator pit = pacienteList_.begin();
    std::string fecha;
    std::cout << "Fecha: ";
    std::getline(std::cin,fecha);
    std::cout << std::endl;

    std::string motivo;
    std::cout << "Motivo: ";
    std::getline(std::cin,motivo);
    std::cout << std::endl;

    newCita.setFecha(fecha);
    newCita.setMotivo(motivo);
    
    for (; pit != pacienteList_.end(); pit++){
        if (pit -> getDni() == dni){
            std::list<Cita> newCitas = pit -> getCitas();
            newCitas.push_back(newCita);
            pit -> setCitas(newCitas);
            db_.exportInformationToFile(*pit);
        }
    }
    db_.reloadFiles();
    return newCita;
}

Cita & Interfaz::readCita(Paciente & paciente) {

    std::string fecha;
    std::cout << "Inserte la fecha de la cita" << std::endl;
    std::cout << "Fecha: ";
    std::getline(std::cin,fecha);

    std::list<Cita>::iterator it;
    for(it = citasList_.begin(); it != citasList_.end(); it++) {
        if (fecha == it->getFecha()) {
            std::cout << "Fecha (dd/mm/aaaa): " << it->getFecha() << std::endl;
            std::cout << "Motivo: " << it->getMotivo() << std::endl;
            return *it;
        }
    }
    std::cout << "El DNI/Fecha proporcionados no se encuentran en la base de datos" << std::endl;
}

Cita & Interfaz::updateCita(Paciente & paciente) {
    //
    std::cout << "Inserte el nuevo valor" << std::endl << "Si no desea modificarlo pulse intro" << std::endl;
    std::string nuevoValor, fecha;
    std::cout << "Inserte la fecha de la cita" << std::endl;
    std::cout << "Fecha: ";
    std::getline(std::cin,fecha);

    std::list<Cita>::iterator it;
    std::list<Cita> citas = paciente.getCitas();
    for(it = citas.begin(); it != citas.end(); it++) {
        if (fecha == it->getFecha()) {
            paciente.deleteCita(*it);
            std::cout << "Fecha: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                it->setFecha(nuevoValor);
            }
            if (nuevoValor == "\n"){
                it->setFecha(it->getFecha());
            }
            std::cout << "Motivo: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                it->setMotivo(nuevoValor);
            }
            paciente.addCita(*it);
            db_.exportInformationToFile(paciente);
            db_.reloadFiles();
            return *it;
        }
    }

    std::cout << "El DNI/Fecha proporcionados no se encuentran en la base de datos" << std::endl;

}

bool Interfaz::eliminarCita(Paciente & paciente) {
    std::string fecha;
    std::cout << "Inserte la fecha de la cita que desee borrar" << std::endl;
    std::cout << "Fecha (dd/mm/aaaa): ";
    std::getline(std::cin,fecha);

    std::list<Cita>::iterator it;
    std::list<Paciente>::iterator pit;
    for (pit = pacienteList_.begin(); pit != pacienteList_.end();pit++){
            if ( pit->getDni() == paciente.getDni()){
                std::list<Cita> citas = pit -> getCitas();
                for(it = citas.begin(); it != citas.end(); it++) {
                    if ( fecha == it->getFecha()){
                        pit -> deleteCita(*it);
                        db_.exportInformationToFile(*pit);
                        db_.reloadFiles();
                        return true;
                    }
                }
            }
        }

    std::cout << "No se han encontrado citas correspondientes a esa Fecha" << std::endl;
    return false;
}

void Interfaz::mostrarCitas(Paciente & paciente) {
    std::list<Cita>::iterator it;
    std::list<Paciente>::iterator pit = pacienteList_.begin();
    for (; pit != pacienteList_.end(); pit++){
        if (paciente.getDni() == pit ->getDni()){
            std::list<Cita> citas = pit -> getCitas();
            for(it = citas.begin(); it != citas.end(); it++) {
                std::cout << it->getFecha() << std::endl;
                std::cout << it->getMotivo() << std::endl << std::endl;
            }
        }
    }
}


void Interfaz::exportarPacientes(){
    std::list<Paciente>::iterator it = pacienteList_.begin();
    for(; it != pacienteList_.end(); it++){
        db_.exportInformationToFile(*it);
    }
}


Tratamiento  Interfaz::createTratamiento(const std::string  & dni) {
    Tratamiento newTratamiento("NULL", "00/00/0000","00/00/0000");
    std::list<Paciente>::iterator pit = pacienteList_.begin();
    std::string fechaInicio, fechaFin;
    std::cout << "Fecha Inicio: ";
    std::getline(std::cin,fechaInicio);
    std::cout << std::endl;

    std::cout << "Fecha Fin: ";
    std::getline(std::cin,fechaFin);
    std::cout << std::endl;

    std::string tratamiento;
    std::cout << "Tratamiento: ";
    std::getline(std::cin,tratamiento);
    std::cout << std::endl;

    newTratamiento.setFechaInicio(fechaInicio);
    newTratamiento.setFechaFin(fechaFin);  
    newTratamiento.setMedicacion(tratamiento);

    for (; pit != pacienteList_.end(); pit++){
        if (pit -> getDni() == dni){
            std::list<Tratamiento> newTratamientos = pit -> getTratamientos();
            newTratamientos.push_back(newTratamiento);
            pit -> setTratamientos(newTratamientos);
            db_.exportInformationToFile(*pit);
        }
    }
    db_.reloadFiles();
    return newTratamiento;
}



Tratamiento & Interfaz::updateTratamiento(Paciente & paciente) {
    //
    std::cout << "Inserte el nuevo valor" << std::endl << "Si no desea modificarlo pulse intro" << std::endl;
    std::string nuevoValor, fecha;
    std::cout << "Inserte la fecha de inicio del tratamiento" << std::endl;
    std::cout << "Fecha: ";
    std::getline(std::cin,fecha);

    std::list<Tratamiento>::iterator it;
    std::list<Tratamiento> tratamientos = paciente.getTratamientos();
    for(it = tratamientos.begin(); it != tratamientos.end(); it++) {
        if (fecha == it->getFechaInicio()) {
            paciente.deleteTratamiento(*it);
            std::cout << "Fecha Inicio: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                it->setFechaInicio(nuevoValor);
            }
            if (nuevoValor == "\n"){
                it->setFechaInicio(it->getFechaInicio());
            }
             std::cout << "Fecha Fin: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                it->setFechaFin(nuevoValor);
            }
            if (nuevoValor == "\n"){
                it->setFechaFin(it->getFechaFin());
            }
            std::cout << "Tratamiento: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                it->setMedicacion(nuevoValor);
            }
            paciente.addTratamiento(*it);
            db_.exportInformationToFile(paciente);
            db_.reloadFiles();
            return *it;
        }
    }

    std::cout << "El DNI/Fecha proporcionados no se encuentran en la base de datos" << std::endl;

}

bool Interfaz::eliminarTratamiento(Paciente & paciente) {
    std::string fecha;
    std::cout << "Inserte la fecha de inicip del tratamientoque desee borrar" << std::endl;
    std::cout << "Fecha (dd/mm/aaaa): ";
    std::getline(std::cin,fecha);

    std::list<Tratamiento>::iterator it;
    std::list<Paciente>::iterator pit;
    for (pit = pacienteList_.begin(); pit != pacienteList_.end();pit++){
            if ( pit->getDni() == paciente.getDni()){
                std::list<Tratamiento> tratamientos = pit -> getTratamientos();
                for(it = tratamientos.begin(); it != tratamientos.end(); it++) {
                    if ( fecha == it->getFechaInicio()){
                        pit -> deleteTratamiento(*it);
                        db_.exportInformationToFile(*pit);
                        db_.reloadFiles();
                        return true;
                    }
                }
            }
        }

    std::cout << "No se han encontrado citas correspondientes a esa Fecha" << std::endl;
    return false;
}

void Interfaz::mostrarTratamientos(Paciente & paciente) {
    std::list<Tratamiento>::iterator it;
    std::list<Paciente>::iterator pit = pacienteList_.begin();
    for (; pit != pacienteList_.end(); pit++){
        if (paciente.getDni() == pit ->getDni()){
            std::list<Tratamiento> tratamientos = pit -> getTratamientos();
            for(it = tratamientos.begin(); it != tratamientos.end(); it++) {
                std::cout << it->getFechaInicio() << " -- " << it -> getFechaFin() << std::endl;
                std::cout << it->getMedicacion() << std::endl << std::endl;
            }
        }
    }
}