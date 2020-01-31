#ifndef _CITA_H_
#define _CITA_H_
#include <iostream>
#include <string>
#include <vector>
class Cita{
private:
    std::string fecha_;
    std::string motivo_;
public:
    Cita(const std::string & fecha, const std::string & motivo);
    Cita(std::vector<std::string> databaseRegister);
    inline std::string getFecha() const {return fecha_;};
    inline std::string getMotivo() const {return motivo_;};

    bool operator ==(const Cita & cita ){
        if (cita.getFecha() == this->getFecha()){
            return true;
        }
        return false;
    }

    bool setFecha(const std::string & fecha);
    inline void setMotivo(const std::string & motivo) {motivo_ = motivo;};
};

#endif