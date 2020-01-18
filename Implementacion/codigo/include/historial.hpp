#ifndef _HISTORIAL_H_
#define _HISTORIAL_H_
#include "registro.hpp"
#include "tratamiento.hpp"
#include <list>

class Historial{
    private:
    std::list<Tratamiento> tratamientos_;

    public:
     Historial();
    

};
#endif