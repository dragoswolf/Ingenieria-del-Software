#ifndef _PACIENTE_H_
#define _PACIENTE_H_
#include <iostream>
#include <string>

class Paciente{
private:
  std::string dni_;
  std::string nusha_;
  std::string nombre_;
  std::string apellidos_;
  std::string fechaDeNacimiento_;
  std::string email_;
  std::string telefono_;
  bool estado_;

public:
  Paciente(const std::string & dni, const std::string & nusha, const std::string & nombre,const  std::string & apellidos,const  std::string & fechaDeNacimiento, const std::string & email, const std::string & telefono);

  inline std::string getDni(){return dni_;};
  inline std::string getNusha(){return nusha_;};
  inline std::string getNombre(){return nombre_;};
  inline std::string getApellidos(){return apellidos_;};
  inline std::string getFechaDeNacimiento(){return fechaDeNacimiento_;};
  inline std::string getEmail(){return email_;};
  inline std::string getTelefono(){return telefono_;};
  inline bool getEstado(){return estado_;};

  inline void setDni(const std::string & dni){dni_=dni;};
  inline void setNusha(const std::string & nusha){nusha_=nusha;};
  inline void setNombre(const std::string & nombre){nombre_=nombre;};
  inline void setApellidos(const std::string & apellidos){apellidos_ = apellidos;};
  inline void setFechaDeNacimiento(const std::string & fechaDeNacimiento){fechaDeNacimiento_ = fechaDeNacimiento;};
  inline void setEmail(const std::string & email){email_ = email;};
  inline void setTelefono(const std::string & telefono){ telefono_ = telefono;};
  void setEstado(const int estado);

};

#endif
