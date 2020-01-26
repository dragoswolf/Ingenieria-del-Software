#ifndef _TRATAMIENTO_H_
#define _TRATAMIENTO_H_
#include <iostream>
#include <string>
#include <vector>

class Tratamiento {
private:
    std::string medicacion_;
    std::string fechaInicio_;
    std::string fechaFin_;
public:
    Tratamiento(const std::string & fechaIncio, const std::string & fechaFin, const std::string & medicacion);
    Tratamiento(std::vector<std::string> databaseRegister);
    inline std::string getFechaInicio() const {return fechaInicio_;};
    inline std::string getFechaFin() const {return fechaFin_;};
    inline std::string getMedicacion() const {return medicacion_;};

    inline void setMedicacion(const std::string & medicacion) {medicacion_ = medicacion;};
    bool setFechaInicio(const std::string & fechaInicio);
    bool setFechaFin(const std::string & fechaFin);
};

#endif