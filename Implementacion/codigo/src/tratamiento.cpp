#include "tratamiento.hpp"

Tratamiento::Tratamiento(std::string fechaIncio, std::string fechaFin, std::string medicacion) {
    setFechaInicio(fechaIncio);
    setFechaFin(fechaFin);
    setMedicacion(medicacion);
}


bool Cita::setFecha(std::string fecha) {
    
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

    if (stoi(ano) < stoi(hoyAno)) {
        if (stoi(mes) < stoi(hoyMes)) {
            if (stoi(dia) < stoi(hoyDia)){
                return false;
            }
        }
    }

    fecha_ = fecha;
    return true;
}

bool Tratamiento::setFechaInicio(std::string fechaInicio) {
    
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

    std::string anoInicio = fechaInicio.substr(6,4);
    std::string mesInicio = fechaInicio.substr(3,2);
    std::string diaInicio = fechaInicio.substr(0,2);

    std::string ano = fechaFin.substr(6,4);
    std::string mes = fechaFin.substr(3,2);
    std::string dia = fechaFin.substr(0,2);

    if (stoi(ano) < stoi(anoInicio)) {
        if (stoi(mes) < stoi(mesInicio)) {
            if (stoi(dia) < stoi(diaInicio)){
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
