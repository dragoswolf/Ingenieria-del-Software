#ifndef _INTERFAZ_H_
#define _INTERFAZ_H_
#include <iostream>
#include <string>
#include "paciente.hpp"

class Cita{
private:
public:
    bool buscarPaciente();
    bool eliminarCita();
    Paciente updatePaciente(Paciente currentPaciente);
    void mostrarCitas();
    void mostrarPacientes();
};

#endif