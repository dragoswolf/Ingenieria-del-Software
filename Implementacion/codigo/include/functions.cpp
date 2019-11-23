#include <functions.h>
#include <string.h>
#include <fstream>
#include <iostream>



struct tratamiento{
    char diagnostico[50];
    struct tratamientoPrincipio{
        int day;
        int month;
        int year;
    };
    struct medicacion{
        char medicacionNombre[50];
        int cantidad;
        int intervaloTiempo;
        int duracion;
    };
};

struct paciente{
    char nombre[50];
    char apellido[50];
    char dni[50];
    int telefono;
    int seguridadSocial[50];
    struct fechaNacimiento{
        int day;
        int month;
        int year;
    };
    bool tipoCliente;
    bool activo;
    cita Cita;
    tratamiento Tratamiento;
};
