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
    std::list<Cita> citasList_;
public:
    Paciente createPaciente();
    void readPaciente(Paciente & paciente);
    Paciente & updatePaciente();
    bool deletePaciente();
    void listarPacientes();

    Cita & createCita();
    Cita & readCita();
    Cita & updateCita();
    bool eliminarCita();
    void mostrarCitas();
};

#endif
