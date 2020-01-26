#ifndef _INTERFAZ_H_
#define _INTERFAZ_H_
#include "paciente.hpp"
#include "cita.hpp"
#include "tratamiento.hpp"
#include <iostream>
#include <string>

class Interfaz{
private:
    std::list<Paciente> pacienteList_;
public:
    Paciente createPaciente();
    void readPaciente();
    Paciente & updatePaciente();
    bool deletePaciente();
    void listarPacientes();

    Paciente & createCita();
    Paciente & readCita();
    Paciente & updateCita();
    bool eliminarCita();
    void mostrarCitas();
};

#endif
