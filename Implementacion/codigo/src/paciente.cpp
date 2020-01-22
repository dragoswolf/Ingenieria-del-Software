#include "paciente.hpp"

void Paciente::setEstado(int estado) {
    if (estado == 1)
    {
        estado_ = true;
    }
    estado_ = false;
}

Paciente::Paciente(const std::string & dni, const std::string & nusha, const std::string & nombre, const std::string & apellidos, const std::string & fechaDeNacimiento, const std::string & email, const std::string & telefono){
    this->setDni(dni);
    this->setNusha(nusha);
    this->setNombre(nombre);
    this->setApellidos(apellidos);
    this->setFechaDeNacimiento(fechaDeNacimiento);
    this->setEmail(email);
    this->setTelefono(telefono);
    this->setEstado(1);
  }