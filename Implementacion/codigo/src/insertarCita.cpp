#include <cita.hpp>

void insertarCita() {
    // Creo un nuevo objeto cita y rellenamos los campos
    cita nuevaCita;
    std::string dni;
    std::cout << "Inserte el DNI del paciente alque se le va a asignar la cita: ";
    fgets(dni, 9, stdin);
    //nuevaCita.setDni(dni);
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