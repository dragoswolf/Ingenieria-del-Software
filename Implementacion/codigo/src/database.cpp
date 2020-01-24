#include "database.hpp"
#include "paciente.hpp"

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
std::vector<std::string> splitCsvLine(const std::string & originalLine){
    std::vector<std::string> values;
    size_t current,previous = 0;
    current = originalLine.find(";");
    while (current != std::string::npos) {
        values.push_back(originalLine.substr(previous, current - previous));
        previous = current + 1;
        current = originalLine.find(";", previous);
    }
    values.push_back(originalLine.substr(previous, current - previous));
    return values;
}

void Database::loadDatabase(){
    std::vector<std::string>::iterator it = patientFiles_.begin();
    for(;it != patientFiles_.end();it++){
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
                for (std::vector<std::string>::iterator it = values.begin(); it != values.end(); it++){
                    std::cout<<*it<<"\t";
                }
                std::cout<<"\n";
                values.push_back(fileLine.substr(previous, current - previous));
            }
            myfile.close();
        }
    }
}