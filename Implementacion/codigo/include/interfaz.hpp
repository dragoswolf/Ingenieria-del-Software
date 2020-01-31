#ifndef _INTERFAZ_H_
#define _INTERFAZ_H_
#include "paciente.hpp"
#include "cita.hpp"
#include "tratamiento.hpp"
#include <iostream>
#include <string>
#include "database.hpp"
class Interfaz{
private:
    std::list<Paciente> pacienteList_;
    std::list<Cita> citasList_;
    Database db_ = Database(".");
public:
    Interfaz(const std::string & folder);
    Paciente createPaciente();
    void readPaciente(Paciente & paciente);
    Paciente & updatePaciente(Paciente & paciente);
    bool deletePaciente(Paciente & paciente);
    void listarPacientes();

    Cita & createCita();
    Cita & readCita(Paciente & paciente);
    Cita & updateCita();
    bool eliminarCita();
    void mostrarCitas();
    void exportarPacientes();

    Tratamiento createTratamiento();
    void readTratamiento(Tratamiento & tratamiento);

    Paciente  buscarPaciente(std::string pacienteDni);

};

#endif
