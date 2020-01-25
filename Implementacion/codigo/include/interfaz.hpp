#ifndef _INTERFAZ_H_
#define _INTERFAZ_H_
#include "paciente.hpp"
#include "cita.hpp"
#include "tratamiento.hpp"
#include <iostream>
#include <string>

class Interfaz{
private:
public:
    Paciente & createPaciente();
    Paciente & readPaciente();
    Paciente & updatePaciente();
    bool deletePaciente();
    void listarPacientes();

    Paciente & createCita();
    Paciente & readCita();
    Paciente & updateCita();
    bool deleteCita();
    void listarCitas();
};

#endif
