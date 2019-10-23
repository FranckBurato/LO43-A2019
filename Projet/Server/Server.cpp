#include <iostream>
#include <fstream>
#include <ctime>
#include "Server.h"
#include "../Sensors/SensorInterface.h"

Server::Server() : consolActivation(), logActivation() {}
Server::Server(bool consolActivation, bool logActivation) : consolActivation(consolActivation),logActivation(logActivation) {}
Server::Server(const Server& server) : consolActivation(server.consolActivation), logActivation(server.logActivation) {}
Server::~Server() {}

Server& Server::operator=(const Server& server) {
    this->consolActivation = server.consolActivation;
    this->logActivation = server.logActivation;
	return *this;	
}
void Server::operator<<(SensorInterface *sensor) {
    if(consolActivation) {
        this->consoleWrite(sensor);
    }
    if(logActivation) {
        this->fileWrite(sensor);
    }
	return;
}

void Server::consoleWrite(SensorInterface *sensor) {
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    std::string time = std::to_string(now->tm_year + 1900) + "-" + std::to_string(now->tm_mon + 1) + "-" + std::to_string(now->tm_mday) + " " + std::to_string(now->tm_hour) + ":" + std::to_string(now->tm_min) + ":" + std::to_string(now->tm_sec);

    std::cout << "[SENSOR LOG] -------------------------" << std::endl;
    std::cout << "[SENSOR LOG] DATE : " << time << " Sensor" << std::endl;
    std::cout << "[SENSOR LOG] TYPE : " << sensor->getType() << " Sensor" << std::endl;
    std::cout << "[SENSOR LOG] VALUE : " << sensor->getValue() << std::endl;
    std::cout << "[SENSOR LOG] -------------------------" << std::endl << std::endl;
}
void Server::fileWrite(SensorInterface *sensor) {
    if (sensor->getPath() != ""){
        std::time_t t = std::time(0);
        std::tm* now = std::localtime(&t);
        std::string time = std::to_string(now->tm_year + 1900) + "-" + std::to_string(now->tm_mon + 1) + "-" + std::to_string(now->tm_mday) + " " + std::to_string(now->tm_hour) + ":" + std::to_string(now->tm_min) + ":" + std::to_string(now->tm_sec);

        std::ofstream file;
        file.open(sensor->getPath().c_str(), std::ios::app);
        if(file.is_open()){
            std::cout << "[FILE LOG] Save logs for "<< sensor->getType() <<" Sensor" << std::endl << std::endl;
            file << time << " => " << sensor->getValue() << std::endl;
        }
        else{
            std::cout << "[FILE ERROR] Can't open the "<< sensor->getType() <<" file" << std::endl;
        }

        file.close();
    }
}
