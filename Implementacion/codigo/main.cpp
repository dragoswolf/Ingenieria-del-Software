#include "cita.hpp"
#include "paciente.hpp"
#include "tratamiento.hpp"
#include "database.hpp"
#include "registro.hpp"
#include "interfaz.hpp"

int main() {
    std::string dni;
    Paciente paciente;
    int option = 0;
    Interfaz interfaz("/home/hromero/is-practices/Implementacion/codigo/pacientes");
    std::cout<<"1. Crear un nuevo paciente"<<std::endl;
    std::cout<<"2. Mostrar un paciente"<<std::endl;
    std::cout<<"3. Listar todos los pacientes"<<std::endl;
    std::cout<<"4. Eliminar un paciente"<<std::endl;
    std::cout<<"5. Modificar datos de un paciente"<<std::endl;
    std::cout<<"6. Operar con las citas de un paciente"<<std::endl;
    std::cout<<":>";
    std::cin>>option;
    std::cin.get();

    switch (option){
    case 1:
        interfaz.createPaciente();
        break;
    case 2:
        std::cout<<"Inserta el Dni del paciente:";
        std::getline(std::cin, dni);
        paciente = interfaz.buscarPaciente(dni);
        interfaz.readPaciente(paciente);
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
        if (paciente.getDni() != "NULL"){
            interfaz.citaMenu(paciente);
        }
        break;
    default:
        break;
    }
    
    interfaz.exportarPacientes();
    return 0;
}