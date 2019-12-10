#include <iostream>
#include <historial.hpp>    

using namespace std;

/* defines necesarios en caso de que se guarda en un fichero .bin o .txt

#define FILE "historial.bin" || "historial.txt"
#define SIZE 256
*/

void Historial::view(){
    cout<<"Fecha: "<<getDate()<<endl;
    cout<<"Paciente: "<<getPatient()<<endl;
    cout<<"Síntomas: "<<getSynts()<<endl;
    cout<<"Tratamiento: "<<getTreatment()<<endl;
}