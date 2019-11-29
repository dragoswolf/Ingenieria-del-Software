#ifndef _PACIENTE_H_
#define _PACIENTE_H_
#include <iostream>

class Paciente{
private:
  std::string nombre_;
  std::string apellidos_;
  std::string fechaDeNacimiento_;
  std::string email_;
  std::string telefono_;
  std::string nusha_;
  std::string dni_;
  bool activo_;

public:
  Paciente(const std::string & dni, const std::string & nusha, const std::string &nombre, const std::string  & apellidos, \
    const std::string & fechaDeNacimiento, const std::string & email="", const std::string & telefono="");

  inline std::string getNombre(){return nombre_;}
  inline std::string getApellidos(){return apellidos_;}
  inline std::string getFechaDeNacimiento(){return fechaDeNacimiento_;}
  inline std::string getTelefono(){return telefono_;}
  inline std::string getNusha(){return nusha_;}
  inline std::string getDni(){return dni_;}

  inline void setNombre(const std::string & nombre){nombre_=nombre;}
  inline void setApellidos(const std::string & apellidos){apellidos_ = apellidos;}
  inline void setTelefono(const std::string & telefono){ telefono_ = telefono;}
};

#endif
