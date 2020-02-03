#ifndef _REGISTRO_H_
#define _REGISTRO_H_
#include <string>
#include <vector>

class Registro{
    private:
        std::string motivo_;
        std::string fecha_;
    public:
        Registro();
        Registro(std::vector<std::string> databaseRegister);
        inline const std::string &  getMotivo() const {return motivo_;};
        inline const std::string & getFecha() const {return fecha_;};    
};


#endif