#ifndef _DATABASE_H_
#define _DATABASE_H_
#include <iostream>
#include <vector>
#include <sys/types.h>
#include <dirent.h>
#include <fstream>
#include <string>
#include "paciente.hpp"

class Database{
    private:
        std::string fileame_;
        std::vector<std::string> patientFiles_;
        
    public:
        Database(const std::string & fileame);    
        inline std::string getFileame()const {return fileame_;};
        Paciente getPaciente(std::string dni);
        bool insertPaciente(Paciente newPaciente);
        bool deletePaciente(Paciente oldPaciente);
        bool updatePaciente(Paciente newPaciente);
        void loadDatabase();
};


#endif