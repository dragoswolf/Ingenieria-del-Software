#include <string>
#include <paciente.hpp>

using namespace std;

class Historial{
    private:
        string fecha_;
        string sintomas_;
        string tratamiento_;
        Paciente *paciente_;

    public:

        Historial(Paciente *paciente, string fecha, string sintomas, string tratamiento){
            paciente_=paciente;
            fecha_=fecha;
            sintomas_=sintomas;
            tratamiento_= tratamiento;
        }

    inline string getDate(){
        return fecha_;
    }

    inline string getSynts(){
        return sintomas_;
    }

    inline string getTreatment(){
        return tratamiento_;
    }

    inline Paciente * getPatient(){
        return paciente_;
    }

    void view();

    /*
    need DB to test these
    bool store();
    bool buscarPaciente(Paciente *p);
    */
}