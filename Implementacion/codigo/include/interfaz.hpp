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
    bool updatePaciente(Paciente & paciente);
    bool deletePaciente(Paciente & paciente);
    void listarPacientes();

    Cita  createCita(const std::string  & dni);
    Cita & readCita(Paciente & paciente);
    Cita & updateCita(Paciente & paciente);
    bool eliminarCita(Paciente & paciente);
    void mostrarCitas(Paciente & paciente);
    void exportarPacientes();

    Tratamiento createTratamiento(const std::string  & dni);
    Tratamiento & readTratamiento(Paciente & paciente);
    Tratamiento & updateTratamiento(Paciente & paciente);
    bool eliminarTratamiento(Paciente & paciente);
    void mostrarTratamientos(Paciente & paciente);
   
    Paciente  buscarPaciente(std::string pacienteDni);

};

#endif
