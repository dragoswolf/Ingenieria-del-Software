#include "cita.hpp"

Cita::Cita(std::string fecha, std::string motivo) {
    setFecha(fecha);
    setMotivo(motivo);
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

bool Cita::setMotivo(std::string motivo) {
    motivo_ = motivo;
    return true;
}
