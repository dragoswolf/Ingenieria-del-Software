#ifndef _CITA_H_
#define _CITA_H_
#include <iostream>
#include "paciente.hpp"

class Cita{
private:
    std::string fecha_;
    std::string motivo_;
    std::string dni_;
public:
    Cita(std::string fecha, std::string motivo, std::string dni_);
    inline std::string getFecha() const {return fecha_;};
    inline std::string getMotivo() const {return motivo_;};
    inline std::string getDni() const {return dni_;};
    bool setFecha(std::string fecha);
    bool setMotivo(std::string motivo);
    bool setDni(std::string dni);
};

#endif