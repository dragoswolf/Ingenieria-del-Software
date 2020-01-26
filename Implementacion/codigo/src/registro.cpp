#include "registro.hpp"

Registro::Registro(std::vector<std::string> databaseRegister){
    this->fecha_ = databaseRegister[1];
    this->motivo_ = databaseRegister[2];
}

Registro::Registro(){
    this->motivo_ = "NULL";
    this->fecha_ = "NULL";
}