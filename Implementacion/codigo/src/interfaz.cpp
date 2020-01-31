#include "interfaz.hpp"
Interfaz::Interfaz(const std::string & folder){
    db_.setFolder(folder);
    std::cout<<"UPDATED FOLDER"<<db_.getFolder()<<std::endl;
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

Paciente & Interfaz::updatePaciente(Paciente & paciente) {
    //
    std::cout << "Inserte el nuevo valor" << std::endl << "Si no desea modificarlo pulse intro" << std::endl;
    std::string nuevoValor;
    std::list<Paciente>::iterator it;
    for(it = pacienteList_.begin(); it != pacienteList_.end(); it++) {
        if (paciente.getDni() == it->getDni()) {

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
                it->setFechaDeNacimiento(nuevoValor);
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

            return *it;
        }
    }

    std::cout << "El DNI proporcionado no se encuentra en la base de datos" << std::endl;

}

bool Interfaz::deletePaciente(Paciente & paciente) {
    std::list<Paciente>::iterator it;
    for(it = pacienteList_.begin(); it != pacienteList_.end(); it++) {
        if (paciente.getDni() == it->getDni()) {
            std::cout<<"DB_FOLDER:"<<db_.getFolder();
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

Cita & Interfaz::createCita() {

    std::string fecha;
    std::cout << "Fecha: ";
    std::getline(std::cin,fecha);
    std::cout << std::endl;

    std::string motivo;
    std::cout << "Motivo: ";
    std::getline(std::cin,motivo);
    std::cout << std::endl;

    /*Cita newCita(fecha, motivo);
    return newCita;*/
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
            std::cout << "Motivo: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                it->setMotivo(nuevoValor);
            }
            paciente.addCita(*it);
            return *it;
        }
    }

    std::cout << "El DNI/Fecha proporcionados no se encuentran en la base de datos" << std::endl;

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
             std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                it->setFechaFin(nuevoValor);
            }
            std::cout << "Medicación: " << std::endl;
            std::getline(std::cin,nuevoValor);
            if (nuevoValor != "\n") {
                it->setMedicacion(nuevoValor);
            }
            paciente.deleteTratamiento(*it);
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
    std::list<Cita> citas = paciente.getCitas();
    for(it = citas.begin(); it != citas.end(); it++) {
        if ( fecha == it->getFecha())
        {
            paciente.deleteCita(*it);
            return true;
        }
    }
    std::cout << "No se han encontrado citas correspondientes a ese DNI/Fecha" << std::endl;
    return false;
}

bool Interfaz::eliminarTratamiento(Paciente & paciente) {
    std::string fecha;
    std::cout << "Inserte la fecha del tratamiento que desee borrar" << std::endl;
    std::cout << "Fecha (dd/mm/aaaa): ";
    std::getline(std::cin,fecha);

    std::list<Tratamiento>::iterator it;
    std::list<Tratamiento> tratamientos = paciente.getTratamientos();
    for(it = tratamientos.begin(); it != tratamientos.end(); it++) {
        if ( fecha == it->getFechaInicio())
        {
            paciente.deleteTratamiento(*it);
            return true;
        }
    }
    std::cout << "No se han encontrado citas correspondientes a ese DNI/Fecha" << std::endl;
    return false;
}

void Interfaz::mostrarCitas(Paciente & paciente) {
    std::list<Cita> citas = paciente.getCitas();
    std::list<Cita>::iterator it;
    for(it = citas.begin(); it != citas.end(); it++) {
        std::cout << it->getFecha() << std::endl;
        std::cout << it->getMotivo() << std::endl << std::endl;
    }
}
void Interfaz::mostrarTratamientos(Paciente & paciente) {
    std::list<Tratamiento> tratamientos = paciente.getTratamientos();
    std::list<Tratamiento>::iterator it;
    for(it = tratamientos.begin(); it != tratamientos.end(); it++) {
        std::cout << it->getFechaInicio() << std::endl;
        std::cout << it->getFechaFin() << std::endl;
        std::cout << it->getMedicacion() << std::endl << std::endl;
    }
}

void Interfaz::exportarPacientes(){
    std::list<Paciente>::iterator it = pacienteList_.begin();
    for(; it != pacienteList_.end(); it++){
        db_.exportInformationToFile(*it);
    }
}

Tratamiento Interfaz::createTratamiento() {
    std::string medicacion;
    std::cout << "Medicación: ";
    std::getline(std::cin,medicacion);
    std::cout << std::endl;

    std::string fechaInicio;
    std::cout << "Fecha de inicio del tratamiento (dd/mm/aaaa): ";
    std::getline(std::cin,fechaInicio);
    std::cout << std::endl;

    std::string fechaFin;
    std::cout << "Fecha de finalización del tratamiento (dd/mm/aaaa): ";
    std::getline(std::cin,fechaFin);
    std::cout << std::endl;

    Tratamiento newTratamiento = Tratamiento(medicacion, fechaInicio, fechaFin);
    return newTratamiento;

}

void Interfaz::readTratamiento(Tratamiento & tratamiento) {
    std::cout << "Medicación: " << tratamiento.getMedicacion() << std::endl;
    std::cout << "Fecha de inicio (dd/mm/aaaa): " << tratamiento.getFechaInicio() << std::endl;
    std::cout << "Fecha de finalización (dd/mm/aaaa): " << tratamiento.getFechaFin() << std::endl;
}

void Interfaz::citaMenu(Paciente & paciente){
    int menu = 0;
    Cita newCita("NULL","NULL");
    std::list<Cita> pacienteCitas;
    std::cout<<"1. Crear cita al paciente"<<std::endl;
    std::cout<<"2. Listar citas del paciente"<<std::endl;
    std::cout<<"3. Eliminar cita del paciente"<<std::endl;
    std::cout<<"4. Actualizar cita del paciente"<<std::endl;
    std::cout<<":>";
    std::cin>>menu;
    std::cin.get();
    switch (menu){
    case 1:
        newCita = createCita();
        paciente.addCita(newCita);
        break;
    case 2:
        mostrarCitas(paciente);
        break;
    case 3:
        if (eliminarCita(paciente)){
            std::cout<<"Cita eliminada correctamente"<<std::endl;
        }
        std::cout<<"Error al eliminar la cita"<<std::endl;
        break;
    case 4:
        updateCita(paciente);
        break;
    default:
        break;
    }
}

void Interfaz::tratamientoMenu(Paciente & paciente){
    int menu = 0;
    Tratamiento newTratamiento("NULL","NULL", "NULL");
    std::list<Cita> pacienteCitas;
    std::cout<<"1. Crear cita al paciente"<<std::endl;
    std::cout<<"2. Listar citas del paciente"<<std::endl;
    std::cout<<"3. Eliminar cita del paciente"<<std::endl;
    std::cout<<"4. Actualizar cita del paciente"<<std::endl;
    std::cout<<":>";
    std::cin>>menu;
    std::cin.get();
    switch (menu){
    case 1:
        newTratamiento = createTratamiento();
        paciente.addTratamiento(newTratamiento);
        break;
    case 2:
        mostrarTratamientos(paciente);
        break;
    case 3:
        if (eliminarTratamiento(paciente)){
            std::cout<<"Tratamiento eliminado correctamente"<<std::endl;
        }
        std::cout<<"Error al eliminar el tratamiento"<<std::endl;
        break;
    case 4:
        updateTratamiento(paciente);
        break;
    default:
        break;
    }
}