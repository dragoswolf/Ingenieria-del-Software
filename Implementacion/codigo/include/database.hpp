#ifndef _DATABASE_H_
#define _DATABASE_H_
#include <iostream>
#include <vector>
#include <sys/types.h>
#include <dirent.h>
#include <fstream>
#include <string>
#include "paciente.hpp"
#include "cita.hpp"
#include "tratamiento.hpp"
#include <list>

class Database{
    private:
        std::string folder_;
        std::vector<std::string> patientFiles_;
        std::list<Paciente> pacientes_;
    public:
        Database(const std::string & folder);    
        inline std::string getFolder()const {return folder_;};
        Paciente getPaciente(std::string dni);
        bool insertPaciente(Paciente newPaciente);
        bool deletePaciente(Paciente oldPaciente);
        bool updatePaciente(Paciente newPaciente);
        void loadDatabase();
        std::vector<std::string> splitCsvLine(const std::string & originalLine);
        void processLine(std::vector<std::string> originalInformation, Paciente & databasePaciente);
        std::list<Paciente> getPacientes(){return pacientes_;}
        void exportInformationToFile(Paciente & paciente);
};


#endif