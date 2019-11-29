#include "tratamiento.hpp"

Tratamiento::Tratamiento(string fechaIncio, string fechaFin, string medicacion) {
    setFechaInicio(fechaIncio);
    setFechaFin(fechaFin);
    setMedicacion(medicacion);
}

bool Tratamiento::setFechaInicio(std::string fechaInicio) {
    
    // Guarda en "hoy" la fecha actual en formato AAAA-MM-DD
    time_t now = time(0);
    struct tm tstruct;
    char hoy[80];
    tstruct = *localtime(&now);
    strftime(hoy, sizeof(hoy), "%Y-%m-%d.%X", &tstruct);

    std::string hoyAno = hoy.substr(0,3);
    std::string hoyMes = hoy.substr(5,6);
    std::string hoyDia = hoy.substr(8,9);

    std::string ano = fechaInicio.substr(6,9);
    std::string mes = fechaInicio.substr(3,4);
    std::string dia = fechaInicio.substr(0,1);

    if (stoi(ano) < stoi(hoyAno)) {
        if (stoi(mes) < stoi(hoyMes)) {
            if (stoi(ano) < stoi(hoyDia)){
                return false;
            }
        }
    }

    fechaInicio_ = fechaInicio;
    return true;
}

bool Tratamiento::setFechaFin(std::string fechaFin) {
    
    fechaInicio = getFechaInicio();

    std::string anoInicio = fechaInicio.substr(6,9);
    std::string mesInicio = fechaInicio.substr(3,4);
    std::string diaInicio = fechaInicio.substr(0,1);

    std::string ano = fechaFin.substr(6,9);
    std::string mes = fechaFin.substr(3,4);
    std::string dia = fechaFin.substr(0,1);

    if (stoi(ano) < stoi(anoInicio)) {
        if (stoi(mes) < stoi(mesInicio)) {
            if (stoi(ano) < stoi(diaInicio)){
                return false;
            }
        }
    }

    fechaFin_ = fechaFin;
    return true;
}

bool Tratamiento::setMedicacion(std::string medicacion) {
    medicacion_ = medicacion;
    return true;
}
