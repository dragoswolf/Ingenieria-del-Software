#include "tratamiento.hpp"

Tratamiento::Tratamiento(const std::string & medicacion, const std::string & fechaIncio, const std::string & fechaFin) {
    this->setMedicacion(medicacion);
    this->setFechaInicio(fechaIncio);
    this->setFechaFin(fechaFin);
}

bool Tratamiento::setFechaInicio(const std::string & fechaInicio) {
    
    time_t now = time(0);
    struct tm tstruct;
    char buffer[80];
    tstruct = *localtime(&now);
    strftime(buffer, sizeof(buffer), "%Y-%m-%d.%X", &tstruct);
    
    std::string hoy(buffer);
    
    std::string hoyAno = hoy.substr(0,4);
    std::string hoyMes = hoy.substr(5,2);
    std::string hoyDia = hoy.substr(8,2);

    std::string ano = fechaInicio.substr(6,4);
    std::string mes = fechaInicio.substr(3,2);
    std::string dia = fechaInicio.substr(0,2);

    if (stoi(ano + mes + dia) < stoi(hoyAno + hoyMes + hoyDia)) {
        fechaInicio_ = "00/00/0000";
        return false;
    }

    fechaInicio_ = fechaInicio;
    return true;
}

bool Tratamiento::setFechaFin(const std::string & fechaFin) {
    
    std::string fechaInicio = this->getFechaInicio();

    std::string anoInicio = fechaInicio.substr(6,4);
    std::string mesInicio = fechaInicio.substr(3,2);
    std::string diaInicio = fechaInicio.substr(0,2);

    std::string ano = fechaFin.substr(6,4);
    std::string mes = fechaFin.substr(3,2);
    std::string dia = fechaFin.substr(0,2);


    if (stoi(ano + mes + dia) < stoi(anoInicio + mesInicio + diaInicio)) {
        fechaFin_ = "00/00/0000";
        return false;
    }

    fechaFin_ = fechaFin;
    return true;
}