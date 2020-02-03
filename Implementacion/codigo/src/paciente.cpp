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

Paciente::Paciente(){
    this->setDni("NULL");
    this->setNusha("NULL");
    this->setNombre("NULL");
    this->setApellidos("NULL");
    this->setFechaDeNacimiento("NULL");
    this->setEmail("NULL");
    this->setTelefono("NULL");
    this->setEstado(1);

}

void Paciente::setValues( std::vector<std::string>  databaseRegister){
    this->setDni(databaseRegister[1]);
    this->setNusha(databaseRegister[2]);
    this->setNombre(databaseRegister[3]);
    this->setApellidos(databaseRegister[4]);
    this->setFechaDeNacimiento(databaseRegister[5]);
    this->setEmail(databaseRegister[6]);
    this->setTelefono(databaseRegister[7]);
    this->setEstado(1);
}