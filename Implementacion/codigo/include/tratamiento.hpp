#ifndef _TRATAMIENTO_H_
#define _TRATAMIENTO_H_
#include <iostream>
// #include <string>

class Tratamiento {
private:
    std::string fechaInicio_;
    std::string fechaFin_;
    std::string medicacion_;
public:
    Tratamiento();
    inline std::string getFechaInicio() const {return fechaInicio_;};
    inline std::string getFechaFin() const {return fechaFin_;};
    inline std::string getMedicacion() const {return medicacion_;};
    bool setFechaInicio(std::string fechaInicio);
    bool setFechaFin(std::string fechaFin);
    bool setMedicacion(std::string medicacion);
};

#endif