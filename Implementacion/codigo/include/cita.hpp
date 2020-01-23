#ifndef _CITA_H_
#define _CITA_H_
#include <iostream>
#include <string>

class Cita{
private:
    std::string dni_;
    std::string fecha_;
    std::string motivo_;
public:
    Cita(const std::string & dni, const std::string & fecha, const std::string & motivo);

    inline std::string getDni() const {return dni_;};
    inline std::string getFecha() const {return fecha_;};
    inline std::string getMotivo() const {return motivo_;};

    inline void setDni(const std::string & dni) {dni_ = dni;};
    bool setFecha(const std::string & fecha);
    inline void setMotivo(const std::string & motivo) {motivo_ = motivo;};
};

#endif