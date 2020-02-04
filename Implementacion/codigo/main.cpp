#include "cita.hpp"
#include "paciente.hpp"
#include "tratamiento.hpp"
#include "database.hpp"
#include "registro.hpp"
#include "interfaz.hpp"
#include <unistd.h>
int main() {
    std::string dni;
    Paciente paciente;
    int option = -1, citaIndex = -1, tratamientoIndex = -1 ;
    Cita newCita("00/00/0000", "NULL");
    while (option != 0){
        char currentPath[PATH_MAX];
        getcwd(currentPath, PATH_MAX);
        std::string path(currentPath);
        path += "/pacientes";
        Interfaz interfaz(path);
        std::cout<<"1. Crear un nuevo paciente"<<std::endl;
        std::cout<<"2. Mostrar un paciente"<<std::endl;
        std::cout<<"3. Listar todos los pacientes"<<std::endl;
        std::cout<<"4. Eliminar un paciente"<<std::endl;
        std::cout<<"5. Modificar datos de un paciente"<<std::endl;
        std::cout<<"6. Operar con las citas de un paciente"<<std::endl;
        std::cout<<"7. Operar con los tratamientos de un paciente"<<std::endl;
        std::cout<<"0. Salir"<<std::endl;
        std::cout<<":>";
        std::cin>>option;
        std::cin.get();

        switch (option){
        case 0:
            interfaz.exportarPacientes();
            break;
        case 1:
            interfaz.createPaciente();
            break;
        case 2:
            std::cout<<"Inserta el Dni del paciente:";
            std::getline(std::cin, dni);
            paciente = interfaz.buscarPaciente(dni);
            if (paciente.getDni() != "NULL"){
                interfaz.readPaciente(paciente);
            }
            break;
        case 3:
            interfaz.listarPacientes();
            break;
        case 4:
            std::cout<<"Inserta el dni del paciente que quieres eliminar:";
            std::getline(std::cin, dni);
            paciente = interfaz.buscarPaciente(dni);
            if (interfaz.deletePaciente(paciente) && paciente.getDni() != "NULL"){
                std::cout << "Paciente eliminado correctamente" << std::endl;
                interfaz.exportarPacientes();
                break;
            }
            std::cout << "El DNI proporcionado no se encuentra en la base de datos" << std::endl;
            break;        
        case 5:
            std::cout<<"Inserta el dni del paciente que quieres modificar:";
            std::getline(std::cin, dni);
            paciente = interfaz.buscarPaciente(dni);
            if (paciente.getDni() != "NULL"){
                interfaz.updatePaciente(paciente);
            }
            break;
        case 6:
            std::cout<<"Inserta el dni del paciente que modificar las citas:";
            std::getline(std::cin, dni);
            paciente = interfaz.buscarPaciente(dni);
            if (paciente.getDni() == "NULL"){
                std::cout<<"El dni no existe en la base de datos"<<std::endl;
            }
            std::cout<<"1. Crear cita al paciente"<<std::endl;
            std::cout<<"2. Listar citas del paciente"<<std::endl;
            std::cout<<"3. Eliminar cita del paciente"<<std::endl;
            std::cout<<"4. Actualizar cita del paciente"<<std::endl;
            std::cout<<":>";
            std::cin>>citaIndex;
            std::cin.get();
            if (citaIndex == 1){
                interfaz.createCita(dni);
            }
            if (citaIndex == 2){
                interfaz.mostrarCitas(paciente);
            }
            if (citaIndex == 3){
                interfaz.eliminarCita(paciente);
            }
            if (citaIndex == 4){
                interfaz.updateCita(paciente);
            }
            break;
        case 7:
            std::cout<<"Inserta el dni del paciente que modificar o añadir tratamiento:";
            std::getline(std::cin, dni);
            paciente = interfaz.buscarPaciente(dni);
            if (paciente.getDni() == "NULL"){
                std::cout<<"El dni no existe en la base de datos"<<std::endl;
            }
            std::cout<<"1. Crear tratamiento al paciente"<<std::endl;
            std::cout<<"2. Listar tratamientos del paciente"<<std::endl;
            std::cout<<"3. Eliminar tratamientos del paciente"<<std::endl;
            std::cout<<"4. Actualizar tratamiento del paciente"<<std::endl;
            std::cout<<":>";
            std::cin>>tratamientoIndex;
            std::cin.get();
            if (tratamientoIndex == 1){
                interfaz.createTratamiento(dni);
            }
            if (tratamientoIndex == 2){
                interfaz.mostrarTratamientos(paciente);
            }
            if (tratamientoIndex == 3){
                interfaz.eliminarTratamiento(paciente);
            }
            if (tratamientoIndex == 4){
                interfaz.updateTratamiento(paciente);
            }
            break;
        
        }
    }    
    return 0;
}
