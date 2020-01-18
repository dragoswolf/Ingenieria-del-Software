#include "database.hpp"

Database::Database(const std::string & folder){
    DIR* patients_directory = opendir(folder.c_str());
    struct dirent * dp;
    while ((dp = readdir(patients_directory)) != NULL) {
        std::string finalPath = "pacientes/" + *dp->d_name;
        patientFiles_.push_back(finalPath);
    }
    closedir(patients_directory);
};
/*
std::string Database::getTagValue(const std::string & xmlLine, std::string tag){
    unsigned int startPosition , closePosition = 0;
    std::vector<std::string> collection;
    
    while(true){
        // Search opening tag inside line 
        startPosition = xmlLine.find("<" + tag, closePosition);
        
        closePosition = xmlLine.find(">", startPosition);
        // Move initial cursor to next position from > to start catch tag value
        startPosition++;

        // Search </ ignoring intermadiate ocurrences to get the final position
        closePosition = xmlLine.find( "</" + tag, startPosition );
        
        std::cout<<startPosition<<"--"<<closePosition<<"--"<<xmlLine.length()<<std::endl;
        std::cout<<"Final value?:"<<xmlLine.substr( startPosition, closePosition - startPosition )<<std::endl;
        // If the position isn't at end of line append into a vector of string 
        collection.push_back( xmlLine.substr( startPosition, closePosition - startPosition ) );
    }
}
*/
void Database::loadDatabase(){
    std::vector<std::string>::iterator it = patientFiles_.begin();
    for(;it != patientFiles_.end();it++){
        //logic to create patients and add to the final value
        std::cout<<*it;
    }
}