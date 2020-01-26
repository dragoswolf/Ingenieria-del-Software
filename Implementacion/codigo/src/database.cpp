#include "database.hpp"
#include "paciente.hpp"
#include "registro.hpp"

Database::Database(const std::string & folder){
    DIR* patients_directory = opendir(folder.c_str());
    struct dirent * dp;
    while ((dp = readdir(patients_directory)) != NULL) {
        if (*dp->d_name != '.'){
            std::string filename(dp->d_name);
            std::string finalPath(folder + "/" + filename);
            patientFiles_.push_back(finalPath);
        }
    }
    closedir(patients_directory);
}
void Database::processLine(std::vector<std::string>  originalInformation, Paciente & databasePaciente){
    if (originalInformation[0] == "c"){
        Cita newCita(originalInformation);
        databasePaciente.addCita(newCita);
    }
    if (originalInformation[0] == "t"){
        Tratamiento newTratamiento(originalInformation);
        databasePaciente.addTratamiento(newTratamiento);
    }
    if (originalInformation[0] == "r"){
        Registro newRegistro(originalInformation);
        databasePaciente.addRegistro(newRegistro);
    }    
}
void Database::loadDatabase(){
    std::vector<std::string>::iterator it = patientFiles_.begin();
    for(;it != patientFiles_.end();it++){
        Paciente newPaciente;
        //logic to create patients and add to the final value
        std::ifstream myfile (*it);
        if (myfile.is_open()){
            std::string fileLine;
            while(getline(myfile,fileLine)){
                std::vector<std::string> values;
                size_t current,previous = 0;
                current = fileLine.find(";");
                while (current != std::string::npos) {
                    values.push_back(fileLine.substr(previous, current - previous));
                    previous = current + 1;
                    current = fileLine.find(";", previous);
                }
                values.push_back(fileLine.substr(previous, current - previous));
                if (values[0] == "p"){
                    newPaciente.setValues(values);
                }
                processLine(values, newPaciente);
            }
            pacientes_.push_back(newPaciente);
            myfile.close();
        }
    }
}