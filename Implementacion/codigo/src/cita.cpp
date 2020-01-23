#include "cita.hpp"

Cita::Cita(const std::string & dni, const std::string & fecha, const std::string & motivo) {
    this->setDni(dni);
    this->setFecha(fecha);
    this->setMotivo(motivo);
}

bool Cita::setFecha(const std::string & fecha) {
    
    time_t now = time(0);
    struct tm tstruct;
    char buffer[80];
    tstruct = *localtime(&now);
    strftime(buffer, sizeof(buffer), "%Y-%m-%d.%X", &tstruct);
    
    std::string hoy(buffer);
    
    std::string hoyAno = hoy.substr(0,4);
    std::string hoyMes = hoy.substr(5,2);
    std::string hoyDia = hoy.substr(8,2);

    std::string ano = fecha.substr(6,4);
    std::string mes = fecha.substr(3,2);
    std::string dia = fecha.substr(0,2);

    if (stoi(ano + mes + dia) < stoi(hoyAno + hoyMes + hoyDia)) {
        fecha_ = "00/00/0000";
        return false;
    }

    fecha_ = fecha;
    return true;
}