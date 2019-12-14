#ifndef _CITA_H_
#define _CITA_H_
#include <iostream>

class Cita{
private:
    std::string fecha_;
    std::string motivo_;
public:
    Cita(std::string fecha, std::string motivo);
    inline std::string getFecha() const {return fecha_;};
    inline std::string getMotivo() const {return motivo_;};
    bool setFecha(std::string fecha);
    bool setMotivo(std::string motivo);
};

#endif