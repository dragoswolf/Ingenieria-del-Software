#include "paciente.h"

Paciente::Paciente(const std::string & dni, const std::string & nusha, const std::string &nombre, const std::string  & apellidos, const std::string & fechaDeNacimiento, const std::string & email, const std::string & telefono) {
    activo_ = true;
    this -> setDni(dni);
    this -> setNombre(nombre);
    this -> setApellidos(apellidos);
    this -> setFechaDeNacimiento(fechaDeNacimiento);
    this -> setEmail(email);
    this -> setTelefono(telefono);
    this -> setNusha(nusha);
  }
