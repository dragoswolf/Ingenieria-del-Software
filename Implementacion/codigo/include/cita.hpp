#ifndef _CITA_H_
#define _CITA_H_
#include <iostream>

class Cita{
private:
    std::string fecha;
    std::string motivo
public:
    Cita(std::string fecha, std::string motivo);
    inline std::string getFecha() const {return fecha;};
    inline std::string getMotivo() const {return motivo;};
    bool setFecha(std::string fecha);
    bool setMotivo(std::string motivo);
};

#endif