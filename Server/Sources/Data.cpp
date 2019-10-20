//
// Created by Alomb on 19/10/2019.
//

#include <fstream>
#include <iostream>
#include "../Headers/Data.h"
#include "../Headers/Server.h"


Data::Data(): data(), logPath() {}

Data::Data(const Data &autre) : data(autre.data), logPath(autre.logPath) {}

Data::Data(const std::string& nData, const std::string& nLogPath) : data(nData), logPath(nLogPath) {}

Data::~Data() {}

Data &Data::operator=(const Data &autre) {
    this->data = autre.data;
    this->logPath = autre.logPath;
    return *this;
}

void Server::consoleWrite(const Data& input){
    if (input.logPath != "null"){
        std::cout << input.data << std::endl;
    }
}

void Server::fileWrite(const Data& input){
    if (input.logPath != "null"){
        std::ofstream log(input.logPath.c_str(), std::ios::app);
        if(log){
            log << input.data << std::endl;
        }
        else{
            std::cout << "ERREUR: Impossible d'ouvrir le fichier" << std::endl;
        }
    }
}