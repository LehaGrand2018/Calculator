#ifndef INPUTOUTPUTFUNCTIONS_H
#define INPUTOUTPUTFUNCTIONS_H
#include <fstream>
#include <string>
#include <map>
#include <vector>
namespace calculator {

    std::vector<std::string> readFromFile(const std::string&);

    void writeToFile(const std::string&, std::map<std::string, std::string>&);

    void writeToFile(const std::string&, const std::vector<std::string>&);

}

#endif INPUTOUTPUTFUNCTIONS_H

