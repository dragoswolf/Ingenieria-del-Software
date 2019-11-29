#include "cita.hpp"

Cita::Cita(std::string fecha, std::string motivo) {
    setFecha(fecha);
    setMotivo(motivo);
}

bool Tratamiento::setFecha(std::string fecha) {
    
    // Guarda en "hoy" la fecha actual en formato AAAA-MM-DD
    time_t now = time(0);
    struct tm tstruct;
    char hoy[80];
    tstruct = *localtime(&now);
    strftime(hoy, sizeof(hoy), "%Y-%m-%d.%X", &tstruct);

    std::string hoyAno = hoy.substr(0,3);
    std::string hoyMes = hoy.substr(5,6);
    std::string hoyDia = hoy.substr(8,9);

    std::string ano = fecha.substr(6,9);
    std::string mes = fecha.substr(3,4);
    std::string dia = fecha.substr(0,1);

    if (stoi(ano) < stoi(hoyAno)) {
        if (stoi(mes) < stoi(hoyMes)) {
            if (stoi(ano) < stoi(hoyDia)){
                return false;
            }
        }
    }

    fecha_ = fecha;
    return true;
}

bool Tratamiento::setMotivo(std::string motivo) {
    motivo_ = motivo;
    return true;
}
